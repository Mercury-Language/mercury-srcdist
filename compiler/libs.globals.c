/*
** Automatically generated from `globals.m'
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


/* :- module libs.globals. */
/* :- implementation. */

/*
INIT mercury__libs__globals__init
REQUIRED_INIT mercury__libs__globals__required_init
ENDINIT
*/

#include "libs.globals.mih"
#include "libs.globals.mh"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"










#line 146 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 149 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_0[3];

#line 152 "libs.globals.c"
static const MR_ConstString libs__globals__libs__globals__field_names_c_compiler_type_0_0[3];

#line 155 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_0;

#line 158 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1libs__globals__type_ctor_info_clang_version_0;

#line 161 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_1[1];

#line 164 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_1;

#line 167 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_2[1];

#line 170 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_2;

#line 173 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_3;

#line 176 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_0[1];

#line 179 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_1[1];

#line 182 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_2[1];

#line 185 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_3[1];

#line 188 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_c_compiler_type_0[4];

#line 191 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_c_compiler_type_0[4];

#line 194 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_c_compiler_type_0[4];

#line 197 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_clang_version_0_0[3];

#line 200 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_clang_version_0_0;

#line 203 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_clang_version_0_0[1];

#line 206 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_clang_version_0[1];

#line 209 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_clang_version_0[1];

#line 212 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_clang_version_0[1];

#line 215 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_0;

#line 218 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_1;

#line 221 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_2;

#line 224 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_3;

#line 227 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_compilation_target_0[4];

#line 230 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_compilation_target_0[4];

#line 233 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_compilation_target_0[4];

#line 236 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_0;

#line 239 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_1;

#line 242 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_2;

#line 245 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_csharp_compiler_type_0[3];

#line 248 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_csharp_compiler_type_0[3];

#line 251 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_csharp_compiler_type_0[3];

#line 254 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_0;

#line 257 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_1;

#line 260 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_2;

#line 263 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_3;

#line 266 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_4;

#line 269 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_env_type_0[5];

#line 272 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_env_type_0[5];

#line 275 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_env_type_0[5];

#line 278 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_file_install_cmd_0_0[2];

#line 281 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_0;

#line 284 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_1;

#line 287 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_file_install_cmd_0_0[1];

#line 290 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_file_install_cmd_0_1[1];

#line 293 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_file_install_cmd_0[2];

#line 296 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_file_install_cmd_0[2];

#line 299 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_file_install_cmd_0[2];

#line 302 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_0;

#line 305 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_1;

#line 308 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_2;

#line 311 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_3;

#line 314 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_foreign_language_0[4];

#line 317 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_foreign_language_0[4];

#line 320 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_foreign_language_0[4];

#line 323 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_0;

#line 326 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_1;

#line 329 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_2;

#line 332 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_3;

#line 335 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_4;

#line 338 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_5;

#line 341 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_gc_method_0[6];

#line 344 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_gc_method_0[6];

#line 347 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_gc_method_0[6];

#line 350 "libs.globals.c"
static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0;

#line 353 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0;

#line 356 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1mdbcomp__feedback__type_ctor_info_feedback_info_0;

#line 359 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__list__ti_list_1libs__globals__type_ctor_info_line_number_range_0;

#line 362 "libs.globals.c"
static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1libs__globals__type_ctor_info_line_number_range_0;

#line 365 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_globals_0_0[20];

#line 368 "libs.globals.c"
static const MR_ConstString libs__globals__libs__globals__field_names_globals_0_0[20];

#line 371 "libs.globals.c"
static const MR_DuArgLocn libs__globals__libs__globals__field_locns_globals_0_0[20];

#line 374 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_globals_0_0;

#line 377 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_globals_0_0[1];

#line 380 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_globals_0[1];

#line 383 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_globals_0[1];

#line 386 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_globals_0[1];

#line 389 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_line_number_range_0_0[2];

#line 392 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_line_number_range_0_0;

#line 395 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_line_number_range_0_0[1];

#line 398 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_line_number_range_0[1];

#line 401 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_line_number_range_0[1];

#line 404 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_line_number_range_0[1];

#line 407 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_0;

#line 410 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_reuse_strategy_0_1[1];

#line 413 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_1;

#line 416 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_0[1];

#line 419 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_1[1];

#line 422 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_reuse_strategy_0[2];

#line 425 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_reuse_strategy_0[2];

#line 428 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_reuse_strategy_0[2];

#line 431 "libs.globals.c"
static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 434 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_0;

#line 437 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_1;

#line 440 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_2;

#line 443 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_ssdb_trace_level_0[3];

#line 446 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_ssdb_trace_level_0[3];

#line 449 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_ssdb_trace_level_0[3];

#line 452 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_0;

#line 455 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_1;

#line 458 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_2;

#line 461 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_tags_method_0[3];

#line 464 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_tags_method_0[3];

#line 467 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_tags_method_0[3];

#line 470 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_0;

#line 473 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_1;

#line 476 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_2;

#line 479 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_3;

#line 482 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_termination_norm_0[4];

#line 485 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_termination_norm_0[4];

#line 488 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_termination_norm_0[4];

#line 491 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____c_compiler_type_0_0_10001(
#line 494 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 496 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 499 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____c_compiler_type_0_0_10001(
#line 502 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 504 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 506 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 509 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____clang_version_0_0_10001(
#line 512 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 514 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 517 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____clang_version_0_0_10001(
#line 520 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 522 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 524 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 527 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____compilation_target_0_0_10001(
#line 530 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 532 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 535 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____compilation_target_0_0_10001(
#line 538 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 540 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 542 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 545 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____csharp_compiler_type_0_0_10001(
#line 548 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 550 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 553 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____csharp_compiler_type_0_0_10001(
#line 556 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 558 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 560 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 563 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____env_type_0_0_10001(
#line 566 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 568 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 571 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____env_type_0_0_10001(
#line 574 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 576 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 578 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 581 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____file_install_cmd_0_0_10001(
#line 584 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 586 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 589 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____file_install_cmd_0_0_10001(
#line 592 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 594 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 596 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 599 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____foreign_language_0_0_10001(
#line 602 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 604 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 607 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____foreign_language_0_0_10001(
#line 610 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 612 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 614 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 617 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____gc_method_0_0_10001(
#line 620 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 622 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 625 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____gc_method_0_0_10001(
#line 628 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 630 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 632 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 635 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____globals_0_0_10001(
#line 638 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 640 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 643 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____globals_0_0_10001(
#line 646 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 648 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 650 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 653 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____limit_error_contexts_map_0_0_10001(
#line 656 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 658 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 661 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____limit_error_contexts_map_0_0_10001(
#line 664 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 666 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 668 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 671 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____line_number_range_0_0_10001(
#line 674 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 676 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 679 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____line_number_range_0_0_10001(
#line 682 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 684 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 686 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 689 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____may_be_thread_safe_0_0_10001(
#line 692 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 694 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 697 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____may_be_thread_safe_0_0_10001(
#line 700 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 702 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 704 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 707 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____reuse_strategy_0_0_10001(
#line 710 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 712 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 715 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____reuse_strategy_0_0_10001(
#line 718 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 720 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 722 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 725 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____source_file_map_0_0_10001(
#line 728 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 730 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 733 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____source_file_map_0_0_10001(
#line 736 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 738 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 740 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 743 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____ssdb_trace_level_0_0_10001(
#line 746 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 748 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 751 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____ssdb_trace_level_0_0_10001(
#line 754 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 756 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 758 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 761 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____tags_method_0_0_10001(
#line 764 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 766 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 769 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____tags_method_0_0_10001(
#line 772 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 774 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 776 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 779 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____termination_norm_0_0_10001(
#line 782 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 784 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 787 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____termination_norm_0_0_10001(
#line 790 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 792 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 794 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 461 "globals.m"
static MR_bool MR_CALL 
libs__globals__IntroducedFrom__pred__convert_c_compiler_type_with_version__461__1_2_p_0(
#line 461 "globals.m"
  MR_Char libs__globals__HeadVar__1_11,
#line 461 "globals.m"
  MR_Char libs__globals__HeadVar__2_28);

#line 953 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_maybe_source_file_map_1_p_0(
#line 953 "globals.m"
  MR_Word libs__globals__X_1);

#line 953 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_maybe_source_file_map_1_p_0(
#line 953 "globals.m"
  MR_Word * libs__globals__X_1);

#line 953 "globals.m"
static void MR_CALL 
libs__globals__unlock_maybe_source_file_map_0_p_0(void);

#line 953 "globals.m"
static void MR_CALL 
libs__globals__lock_maybe_source_file_map_0_p_0(void);

#line 953 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_maybe_source_file_map_0_p_0(void);

#line 953 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_maybe_source_file_map_0_p_0(void);

#line 950 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_disable_generate_item_version_numbers_1_p_0(
#line 950 "globals.m"
  MR_Word libs__globals__X_1);

#line 950 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_disable_generate_item_version_numbers_1_p_0(
#line 950 "globals.m"
  MR_Word * libs__globals__X_1);

#line 950 "globals.m"
static void MR_CALL 
libs__globals__unlock_disable_generate_item_version_numbers_0_p_0(void);

#line 950 "globals.m"
static void MR_CALL 
libs__globals__lock_disable_generate_item_version_numbers_0_p_0(void);

#line 950 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0(void);

#line 950 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_disable_generate_item_version_numbers_0_p_0(void);

#line 947 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_disable_smart_recompilation_1_p_0(
#line 947 "globals.m"
  MR_Word libs__globals__X_1);

#line 947 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_disable_smart_recompilation_1_p_0(
#line 947 "globals.m"
  MR_Word * libs__globals__X_1);

#line 947 "globals.m"
static void MR_CALL 
libs__globals__unlock_disable_smart_recompilation_0_p_0(void);

#line 947 "globals.m"
static void MR_CALL 
libs__globals__lock_disable_smart_recompilation_0_p_0(void);

#line 947 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0(void);

#line 947 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_disable_smart_recompilation_0_p_0(void);

#line 944 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_some_errors_were_context_limited_1_p_0(
#line 944 "globals.m"
  MR_Word libs__globals__X_1);

#line 944 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_some_errors_were_context_limited_1_p_0(
#line 944 "globals.m"
  MR_Word * libs__globals__X_1);

#line 944 "globals.m"
static void MR_CALL 
libs__globals__unlock_some_errors_were_context_limited_0_p_0(void);

#line 944 "globals.m"
static void MR_CALL 
libs__globals__lock_some_errors_were_context_limited_0_p_0(void);

#line 944 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_some_errors_were_context_limited_0_p_0(void);

#line 944 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_some_errors_were_context_limited_0_p_0(void);

#line 938 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_extra_error_info_1_p_0(
#line 938 "globals.m"
  MR_Word libs__globals__X_1);

#line 938 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_extra_error_info_1_p_0(
#line 938 "globals.m"
  MR_Word * libs__globals__X_1);

#line 938 "globals.m"
static void MR_CALL 
libs__globals__unlock_extra_error_info_0_p_0(void);

#line 938 "globals.m"
static void MR_CALL 
libs__globals__lock_extra_error_info_0_p_0(void);

#line 938 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_extra_error_info_0_p_0(void);

#line 938 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_extra_error_info_0_p_0(void);

#line 932 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_maybe_from_ground_term_threshold_1_p_0(
#line 932 "globals.m"
  MR_Word libs__globals__X_1);

#line 932 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_maybe_from_ground_term_threshold_1_p_0(
#line 932 "globals.m"
  MR_Word * libs__globals__X_1);

#line 932 "globals.m"
static void MR_CALL 
libs__globals__unlock_maybe_from_ground_term_threshold_0_p_0(void);

#line 932 "globals.m"
static void MR_CALL 
libs__globals__lock_maybe_from_ground_term_threshold_0_p_0(void);

#line 932 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0(void);

#line 932 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_maybe_from_ground_term_threshold_0_p_0(void);

#line 927 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_solver_auto_init_supported_1_p_0(
#line 927 "globals.m"
  MR_Word libs__globals__X_1);

#line 927 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_solver_auto_init_supported_1_p_0(
#line 927 "globals.m"
  MR_Word * libs__globals__X_1);

#line 927 "globals.m"
static void MR_CALL 
libs__globals__unlock_solver_auto_init_supported_0_p_0(void);

#line 927 "globals.m"
static void MR_CALL 
libs__globals__lock_solver_auto_init_supported_0_p_0(void);

#line 927 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0(void);

#line 927 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_solver_auto_init_supported_0_p_0(void);

#line 621 "globals.m"
static MR_bool MR_CALL 
libs__globals__convert_line_number_range_2_p_0(
#line 621 "globals.m"
  MR_String libs__globals__RangeStr_3,
#line 621 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2);

#line 606 "globals.m"
static void MR_CALL 
libs__globals__find_file_name_and_line_range_chars_4_p_0(
#line 606 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 606 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_LineRangeChars_0_2,
#line 606 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_LineRangeChars_3,
#line 606 "globals.m"
  MR_Word * libs__globals__HeadVar__4_4);

#line 598 "globals.m"
static MR_bool MR_CALL 
libs__globals__convert_limit_error_contexts_acc_5_p_0_1(
#line 598 "globals.m"
  MR_Box libs__globals__closure_arg,
#line 598 "globals.m"
  MR_Box libs__globals__wrapper_arg_1,
#line 598 "globals.m"
  MR_Box * libs__globals__wrapper_arg_2);

#line 578 "globals.m"
static void MR_CALL 
libs__globals__convert_limit_error_contexts_acc_5_p_0(
#line 578 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 578 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_RevBadOptions_0_2,
#line 578 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_RevBadOptions_3,
#line 578 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Map_0_4,
#line 578 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Map_5);

#line 400 "globals.m"
static void MR_CALL 
libs__globals__convert_foreign_language_det_2_p_0(
#line 400 "globals.m"
  MR_String libs__globals__String_3,
#line 400 "globals.m"
  MR_Word * libs__globals__ForeignLang_4);

#line 730 "globals.m"
static void MR_CALL 
libs__globals__get_backend_foreign_languages_2_p_0_1(
#line 730 "globals.m"
  MR_Box libs__globals__closure_arg,
#line 730 "globals.m"
  MR_Box libs__globals__wrapper_arg_1,
#line 730 "globals.m"
  MR_Box * libs__globals__wrapper_arg_2);

#line 461 "globals.m"
static MR_bool MR_CALL 
libs__globals__convert_c_compiler_type_2_p_0_1(
#line 461 "globals.m"
  MR_Box libs__globals__closure_arg,
#line 461 "globals.m"
  MR_Box libs__globals__wrapper_arg_1);


static /* final */ const MR_Box libs__globals_scalar_common_1[5][2];

static /* final */ const MR_Box libs__globals_scalar_common_2[6][3];

static /* final */ const MR_Box libs__globals_scalar_common_10[2][1];

static /* final */ const MR_Box libs__globals_scalar_common_12[3][5];

static /* final */ const MR_Box libs__globals_scalar_common_13[1][4];


#line 643 "globals.m"
/* sealed */ struct libs__globals__vector_common_type_3_0_s {
#line 643 "globals.m"
  const MR_Word libs__globals__vector_common_type_3_0__vct_3_f_0;
#line 643 "globals.m"
};

static /* final */ const struct libs__globals__vector_common_type_3_0_s libs__globals_vector_common_3[4];

#line 648 "globals.m"
/* sealed */ struct libs__globals__vector_common_type_4_0_s {
#line 648 "globals.m"
  const MR_String libs__globals__vector_common_type_4_0__vct_4_f_0;
#line 648 "globals.m"
};

static /* final */ const struct libs__globals__vector_common_type_4_0_s libs__globals_vector_common_4[12];

#line 663 "globals.m"
/* sealed */ struct libs__globals__vector_common_type_5_0_s {
#line 663 "globals.m"
  const MR_Word libs__globals__vector_common_type_5_0__vct_5_f_0;
#line 663 "globals.m"
};

static /* final */ const struct libs__globals__vector_common_type_5_0_s libs__globals_vector_common_5[6];

#line 395 "globals.m"
/* sealed */ struct libs__globals__vector_common_type_6_0_s {
#line 395 "globals.m"
  const MR_String libs__globals__vector_common_type_6_0__vct_6_f_0;
#line 395 "globals.m"
  const MR_Word libs__globals__vector_common_type_6_0__vct_6_f_1;
#line 395 "globals.m"
};

static /* final */ const struct libs__globals__vector_common_type_6_0_s libs__globals_vector_common_6[4];

#line 415 "globals.m"
/* sealed */ struct libs__globals__vector_common_type_7_0_s {
#line 415 "globals.m"
  const MR_String libs__globals__vector_common_type_7_0__vct_7_f_0;
#line 415 "globals.m"
  const MR_Word libs__globals__vector_common_type_7_0__vct_7_f_1;
#line 415 "globals.m"
};

static /* final */ const struct libs__globals__vector_common_type_7_0_s libs__globals_vector_common_7[6];

#line 422 "globals.m"
/* sealed */ struct libs__globals__vector_common_type_8_0_s {
#line 422 "globals.m"
  const MR_String libs__globals__vector_common_type_8_0__vct_8_f_0;
#line 422 "globals.m"
  const MR_Word libs__globals__vector_common_type_8_0__vct_8_f_1;
#line 422 "globals.m"
};

static /* final */ const struct libs__globals__vector_common_type_8_0_s libs__globals_vector_common_8[7];

#line 434 "globals.m"
/* sealed */ struct libs__globals__vector_common_type_9_0_s {
#line 434 "globals.m"
  const MR_String libs__globals__vector_common_type_9_0__vct_9_f_0;
#line 434 "globals.m"
  const MR_Word libs__globals__vector_common_type_9_0__vct_9_f_1;
#line 434 "globals.m"
};

static /* final */ const struct libs__globals__vector_common_type_9_0_s libs__globals_vector_common_9[4];

#line 452 "globals.m"
/* sealed */ struct libs__globals__vector_common_type_11_0_s {
#line 452 "globals.m"
  const MR_String libs__globals__vector_common_type_11_0__vct_11_f_0;
#line 452 "globals.m"
  const MR_Word libs__globals__vector_common_type_11_0__vct_11_f_1;
#line 452 "globals.m"
};

static /* final */ const struct libs__globals__vector_common_type_11_0_s libs__globals_vector_common_11[4];

#line 561 "globals.m"
/* sealed */ struct libs__globals__vector_common_type_14_0_s {
#line 561 "globals.m"
  const MR_String libs__globals__vector_common_type_14_0__vct_14_f_0;
#line 561 "globals.m"
  const MR_Word libs__globals__vector_common_type_14_0__vct_14_f_1;
#line 561 "globals.m"
};

static /* final */ const struct libs__globals__vector_common_type_14_0_s libs__globals_vector_common_14[5];

#line 567 "globals.m"
/* sealed */ struct libs__globals__vector_common_type_15_0_s {
#line 567 "globals.m"
  const MR_String libs__globals__vector_common_type_15_0__vct_15_f_0;
#line 567 "globals.m"
  const MR_Integer libs__globals__vector_common_type_15_0__vct_15_f_1;
#line 567 "globals.m"
};

static /* final */ const struct libs__globals__vector_common_type_15_0_s libs__globals_vector_common_15[4];



static /* final */ const MR_Box libs__globals_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_line_number_range_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_clang_version_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_0))
  },
};

static /* final */ const MR_Box libs__globals_scalar_common_2[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__globals_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (&libs__globals_scalar_common_12[1])),
    ((MR_Box) (libs__globals__get_backend_foreign_languages_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&libs__globals_scalar_common_12[2])),
    ((MR_Box) (libs__globals__convert_limit_error_contexts_acc_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box libs__globals_scalar_common_10[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box libs__globals_scalar_common_12[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_line_number_range_0))
  },
};

static /* final */ const MR_Box libs__globals_scalar_common_13[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&libs__globals_scalar_common_12[0])),
    ((MR_Box) (libs__globals__convert_c_compiler_type_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Char) 95))
  },
};


static /* final */ const struct libs__globals__vector_common_type_3_0_s libs__globals_vector_common_3[4] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 3 },
};

static /* final */ const struct libs__globals__vector_common_type_4_0_s libs__globals_vector_common_4[12] = {
  /* row 0 */   {     (MR_String) "C" },
  /* row 1 */   {     (MR_String) "C#" },
  /* row 2 */   {     (MR_String) "Java" },
  /* row 3 */   {     (MR_String) "Erlang" },
  /* row 4 */   {     (MR_String) "C" },
  /* row 5 */   {     (MR_String) "C#" },
  /* row 6 */   {     (MR_String) "Java" },
  /* row 7 */   {     (MR_String) "Erlang" },
  /* row 8 */   {     (MR_String) "c" },
  /* row 9 */   {     (MR_String) "csharp" },
  /* row 10 */   {     (MR_String) "java" },
  /* row 11 */   {     (MR_String) "erlang" },
};

static /* final */ const struct libs__globals__vector_common_type_5_0_s libs__globals_vector_common_5[6] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 0 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 1 },
  /* row 4 */   {     (MR_Integer) 1 },
  /* row 5 */   {     (MR_Integer) 0 },
};

static /* final */ const struct libs__globals__vector_common_type_6_0_s libs__globals_vector_common_6[4] = {
  /* row 0 */
  {
    (MR_String) "c",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "csharp",
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "erlang",
    (MR_Integer) 3
  },
  /* row 3 */
  {
    (MR_String) "java",
    (MR_Integer) 2
  },
};

static /* final */ const struct libs__globals__vector_common_type_7_0_s libs__globals_vector_common_7[6] = {
  /* row 0 */
  {
    (MR_String) "c",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "c sharp",
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "c#",
    (MR_Integer) 1
  },
  /* row 3 */
  {
    (MR_String) "csharp",
    (MR_Integer) 1
  },
  /* row 4 */
  {
    (MR_String) "erlang",
    (MR_Integer) 3
  },
  /* row 5 */
  {
    (MR_String) "java",
    (MR_Integer) 2
  },
};

static /* final */ const struct libs__globals__vector_common_type_8_0_s libs__globals_vector_common_8[7] = {
  /* row 0 */
  {
    (MR_String) "accurate",
    (MR_Integer) 5
  },
  /* row 1 */
  {
    (MR_String) "automatic",
    (MR_Integer) 0
  },
  /* row 2 */
  {
    (MR_String) "boehm",
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_String) "boehm_debug",
    (MR_Integer) 3
  },
  /* row 4 */
  {
    (MR_String) "conservative",
    (MR_Integer) 2
  },
  /* row 5 */
  {
    (MR_String) "hgc",
    (MR_Integer) 4
  },
  /* row 6 */
  {
    (MR_String) "none",
    (MR_Integer) 1
  },
};

static /* final */ const struct libs__globals__vector_common_type_9_0_s libs__globals_vector_common_9[4] = {
  /* row 0 */
  {
    (MR_String) "num-data-elems",
    (MR_Integer) 2
  },
  /* row 1 */
  {
    (MR_String) "simple",
    (MR_Integer) 0
  },
  /* row 2 */
  {
    (MR_String) "size-data-elems",
    (MR_Integer) 3
  },
  /* row 3 */
  {
    (MR_String) "total",
    (MR_Integer) 1
  },
};

static /* final */ const struct libs__globals__vector_common_type_11_0_s libs__globals_vector_common_11[4] = {
  /* row 0 */
  {
    (MR_String) "clang",
    (MR_Word) MR_mkword(MR_mktag(2), &libs__globals_scalar_common_10[0])
  },
  /* row 1 */
  {
    (MR_String) "gcc",
    (MR_Word) MR_mkword(MR_mktag(1), &libs__globals_scalar_common_2[3])
  },
  /* row 2 */
  {
    (MR_String) "msvc",
    (MR_Word) MR_mkword(MR_mktag(3), &libs__globals_scalar_common_10[1])
  },
  /* row 3 */
  {
    (MR_String) "unknown",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
};

static /* final */ const struct libs__globals__vector_common_type_14_0_s libs__globals_vector_common_14[5] = {
  /* row 0 */
  {
    (MR_String) "cygwin",
    (MR_Integer) 1
  },
  /* row 1 */
  {
    (MR_String) "msys",
    (MR_Integer) 2
  },
  /* row 2 */
  {
    (MR_String) "posix",
    (MR_Integer) 0
  },
  /* row 3 */
  {
    (MR_String) "powershell",
    (MR_Integer) 4
  },
  /* row 4 */
  {
    (MR_String) "windows",
    (MR_Integer) 3
  },
};

static /* final */ const struct libs__globals__vector_common_type_15_0_s libs__globals_vector_common_15[4] = {
  /* row 0 */
  {
    (MR_String) "deep",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "default",
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "none",
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_String) "shallow",
    (MR_Integer) 3
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "libs.globals.mh"
#include "mdbcomp.rtti_access.mh"
#line 927 "globals.m"
MR_Unsigned libs__globals__mutable_variable_solver_auto_init_supported;

#line 932 "globals.m"
MR_Word libs__globals__mutable_variable_maybe_from_ground_term_threshold;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock;
#endif

#line 938 "globals.m"
MR_Word libs__globals__mutable_variable_extra_error_info;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_extra_error_info_lock;
#endif

#line 944 "globals.m"
MR_Word libs__globals__mutable_variable_some_errors_were_context_limited;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_some_errors_were_context_limited_lock;
#endif

#line 947 "globals.m"
MR_Word libs__globals__mutable_variable_disable_smart_recompilation;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_disable_smart_recompilation_lock;
#endif

#line 950 "globals.m"
MR_Word libs__globals__mutable_variable_disable_generate_item_version_numbers;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_disable_generate_item_version_numbers_lock;
#endif

#line 953 "globals.m"
MR_Word libs__globals__mutable_variable_maybe_source_file_map;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_maybe_source_file_map_lock;
#endif

#line 927 "globals.m"
void 
libs__globals__user_init_pred_0(void)
#line 927 "globals.m"
{
#line 927 "globals.m"
	libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0();
}

#line 932 "globals.m"
void 
libs__globals__user_init_pred_1(void)
#line 932 "globals.m"
{
#line 932 "globals.m"
	libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0();
}

#line 938 "globals.m"
void 
libs__globals__user_init_pred_2(void)
#line 938 "globals.m"
{
#line 938 "globals.m"
	libs__globals__initialise_mutable_extra_error_info_0_p_0();
}

#line 944 "globals.m"
void 
libs__globals__user_init_pred_3(void)
#line 944 "globals.m"
{
#line 944 "globals.m"
	libs__globals__initialise_mutable_some_errors_were_context_limited_0_p_0();
}

#line 947 "globals.m"
void 
libs__globals__user_init_pred_4(void)
#line 947 "globals.m"
{
#line 947 "globals.m"
	libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0();
}

#line 950 "globals.m"
void 
libs__globals__user_init_pred_5(void)
#line 950 "globals.m"
{
#line 950 "globals.m"
	libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0();
}

#line 953 "globals.m"
void 
libs__globals__user_init_pred_6(void)
#line 953 "globals.m"
{
#line 953 "globals.m"
	libs__globals__initialise_mutable_maybe_source_file_map_0_p_0();
}


#line 1636 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1644 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_0[3] = {
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

#line 1651 "libs.globals.c"
static const MR_ConstString libs__globals__libs__globals__field_names_c_compiler_type_0_0[3] = {
  (MR_String) "gcc_major_ver",
  (MR_String) "gcc_minor_ver",
  (MR_String) "gcc_patch_level"
};

#line 1658 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_0 = {
  (MR_String) "cc_gcc",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__globals__libs__globals__field_types_c_compiler_type_0_0,
  libs__globals__libs__globals__field_names_c_compiler_type_0_0,
  NULL,
  NULL
};

#line 1673 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1libs__globals__type_ctor_info_clang_version_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &libs__globals__libs__globals__type_ctor_info_clang_version_0
  }
};

#line 1681 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_1[1] = {
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1libs__globals__type_ctor_info_clang_version_0
};

#line 1686 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_1 = {
  (MR_String) "cc_clang",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  libs__globals__libs__globals__field_types_c_compiler_type_0_1,
  NULL,
  NULL,
  NULL
};

#line 1701 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_2[1] = {
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

#line 1706 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_2 = {
  (MR_String) "cc_cl",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 2,
  libs__globals__libs__globals__field_types_c_compiler_type_0_2,
  NULL,
  NULL,
  NULL
};

#line 1721 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_3 = {
  (MR_String) "cc_unknown",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1736 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_3
};

#line 1741 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_1[1] = {
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_0
};

#line 1746 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_2[1] = {
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_1
};

#line 1751 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_3[1] = {
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_2
};

#line 1756 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_c_compiler_type_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_3
  }
};

#line 1780 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_c_compiler_type_0[4] = {
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_2,
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_1,
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_0,
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_3
};

#line 1788 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_c_compiler_type_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 3
};

#line 1796 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_c_compiler_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__globals____Unify____c_compiler_type_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____c_compiler_type_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "c_compiler_type",
  {     libs__globals__libs__globals__du_name_ordered_c_compiler_type_0 },
  {     libs__globals__libs__globals__du_ptag_ordered_c_compiler_type_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_c_compiler_type_0
};

#line 1813 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_clang_version_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1820 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_clang_version_0_0 = {
  (MR_String) "clang_version",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__globals__libs__globals__field_types_clang_version_0_0,
  NULL,
  NULL,
  NULL
};

#line 1835 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_clang_version_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_clang_version_0_0
};

#line 1840 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_clang_version_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_clang_version_0_0
  }
};

#line 1849 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_clang_version_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_clang_version_0_0
};

#line 1854 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_clang_version_0[1] = {
  (MR_Integer) 0
};

#line 1859 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_clang_version_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__globals____Unify____clang_version_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____clang_version_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "clang_version",
  {     libs__globals__libs__globals__du_name_ordered_clang_version_0 },
  {     libs__globals__libs__globals__du_ptag_ordered_clang_version_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_clang_version_0
};

#line 1876 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_0 = {
  (MR_String) "target_c",
  (MR_Integer) 0
};

#line 1882 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_1 = {
  (MR_String) "target_csharp",
  (MR_Integer) 1
};

#line 1888 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_2 = {
  (MR_String) "target_java",
  (MR_Integer) 2
};

#line 1894 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_3 = {
  (MR_String) "target_erlang",
  (MR_Integer) 3
};

#line 1900 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_compilation_target_0[4] = {
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_0,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_1,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_2,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_3
};

#line 1908 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_compilation_target_0[4] = {
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_0,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_1,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_3,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_2
};

#line 1916 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_compilation_target_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 1924 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_compilation_target_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____compilation_target_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____compilation_target_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "compilation_target",
  {     libs__globals__libs__globals__enum_name_ordered_compilation_target_0 },
  {     libs__globals__libs__globals__enum_value_ordered_compilation_target_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_compilation_target_0
};

#line 1941 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_0 = {
  (MR_String) "csharp_microsoft",
  (MR_Integer) 0
};

#line 1947 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_1 = {
  (MR_String) "csharp_mono",
  (MR_Integer) 1
};

#line 1953 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_2 = {
  (MR_String) "csharp_unknown",
  (MR_Integer) 2
};

#line 1959 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_csharp_compiler_type_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_0,
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_1,
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_2
};

#line 1966 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_csharp_compiler_type_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_0,
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_1,
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_2
};

#line 1973 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_csharp_compiler_type_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1980 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_csharp_compiler_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____csharp_compiler_type_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____csharp_compiler_type_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "csharp_compiler_type",
  {     libs__globals__libs__globals__enum_name_ordered_csharp_compiler_type_0 },
  {     libs__globals__libs__globals__enum_value_ordered_csharp_compiler_type_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_csharp_compiler_type_0
};

#line 1997 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_0 = {
  (MR_String) "env_type_posix",
  (MR_Integer) 0
};

#line 2003 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_1 = {
  (MR_String) "env_type_cygwin",
  (MR_Integer) 1
};

#line 2009 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_2 = {
  (MR_String) "env_type_msys",
  (MR_Integer) 2
};

#line 2015 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_3 = {
  (MR_String) "env_type_win_cmd",
  (MR_Integer) 3
};

#line 2021 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_4 = {
  (MR_String) "env_type_powershell",
  (MR_Integer) 4
};

#line 2027 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_env_type_0[5] = {
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_0,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_1,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_2,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_3,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_4
};

#line 2036 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_env_type_0[5] = {
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_1,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_2,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_0,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_4,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_3
};

#line 2045 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_env_type_0[5] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 3
};

#line 2054 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_env_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____env_type_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____env_type_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "env_type",
  {     libs__globals__libs__globals__enum_name_ordered_env_type_0 },
  {     libs__globals__libs__globals__enum_value_ordered_env_type_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_env_type_0
};

#line 2071 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_file_install_cmd_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2077 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_0 = {
  (MR_String) "install_cmd_user",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__globals__libs__globals__field_types_file_install_cmd_0_0,
  NULL,
  NULL,
  NULL
};

#line 2092 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_1 = {
  (MR_String) "install_cmd_cp",
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

#line 2107 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_file_install_cmd_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_1
};

#line 2112 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_file_install_cmd_0_1[1] = {
  &libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_0
};

#line 2117 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_file_install_cmd_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    libs__globals__libs__globals__du_stag_ordered_file_install_cmd_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_file_install_cmd_0_1
  }
};

#line 2131 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_file_install_cmd_0[2] = {
  &libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_1,
  &libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_0
};

#line 2137 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_file_install_cmd_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2143 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_file_install_cmd_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__globals____Unify____file_install_cmd_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____file_install_cmd_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "file_install_cmd",
  {     libs__globals__libs__globals__du_name_ordered_file_install_cmd_0 },
  {     libs__globals__libs__globals__du_ptag_ordered_file_install_cmd_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_file_install_cmd_0
};

#line 2160 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_0 = {
  (MR_String) "lang_c",
  (MR_Integer) 0
};

#line 2166 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_1 = {
  (MR_String) "lang_csharp",
  (MR_Integer) 1
};

#line 2172 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_2 = {
  (MR_String) "lang_java",
  (MR_Integer) 2
};

#line 2178 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_3 = {
  (MR_String) "lang_erlang",
  (MR_Integer) 3
};

#line 2184 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_foreign_language_0[4] = {
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_0,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_1,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_2,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_3
};

#line 2192 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_foreign_language_0[4] = {
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_0,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_1,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_3,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_2
};

#line 2200 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_foreign_language_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 2208 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_foreign_language_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____foreign_language_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____foreign_language_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "foreign_language",
  {     libs__globals__libs__globals__enum_name_ordered_foreign_language_0 },
  {     libs__globals__libs__globals__enum_value_ordered_foreign_language_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_foreign_language_0
};

#line 2225 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_0 = {
  (MR_String) "gc_automatic",
  (MR_Integer) 0
};

#line 2231 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_1 = {
  (MR_String) "gc_none",
  (MR_Integer) 1
};

#line 2237 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_2 = {
  (MR_String) "gc_boehm",
  (MR_Integer) 2
};

#line 2243 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_3 = {
  (MR_String) "gc_boehm_debug",
  (MR_Integer) 3
};

#line 2249 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_4 = {
  (MR_String) "gc_hgc",
  (MR_Integer) 4
};

#line 2255 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_5 = {
  (MR_String) "gc_accurate",
  (MR_Integer) 5
};

#line 2261 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_gc_method_0[6] = {
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_0,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_1,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_2,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_3,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_4,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_5
};

#line 2271 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_gc_method_0[6] = {
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_5,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_0,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_2,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_3,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_4,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_1
};

#line 2281 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_gc_method_0[6] = {
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 0
};

#line 2291 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_gc_method_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____gc_method_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____gc_method_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "gc_method",
  {     libs__globals__libs__globals__enum_name_ordered_gc_method_0 },
  {     libs__globals__libs__globals__enum_value_ordered_gc_method_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_gc_method_0
};

#line 2308 "libs.globals.c"
static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_TypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 2317 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0
  }
};

#line 2325 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1mdbcomp__feedback__type_ctor_info_feedback_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_0
  }
};

#line 2333 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__list__ti_list_1libs__globals__type_ctor_info_line_number_range_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &libs__globals__libs__globals__type_ctor_info_line_number_range_0
  }
};

#line 2341 "libs.globals.c"
static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1libs__globals__type_ctor_info_line_number_range_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &libs__globals__list__ti_list_1libs__globals__type_ctor_info_line_number_range_0
  }
};

#line 2350 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_globals_0_0[20] = {
  (MR_PseudoTypeInfo) &libs__globals__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0,
  (MR_PseudoTypeInfo) &libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_compilation_target_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_gc_method_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_tags_method_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_termination_norm_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_termination_norm_0,
  (MR_PseudoTypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_level_0,
  (MR_PseudoTypeInfo) &libs__globals__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_ssdb_trace_level_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_c_compiler_type_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_csharp_compiler_type_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_reuse_strategy_0,
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1mdbcomp__feedback__type_ctor_info_feedback_info_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_env_type_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_env_type_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_env_type_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_file_install_cmd_0,
  (MR_PseudoTypeInfo) &libs__globals__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1libs__globals__type_ctor_info_line_number_range_0
};

#line 2374 "libs.globals.c"
static const MR_ConstString libs__globals__libs__globals__field_names_globals_0_0[20] = {
  (MR_String) "g_options",
  (MR_String) "g_op_mode",
  (MR_String) "g_target",
  (MR_String) "g_gc_method",
  (MR_String) "g_tags_method",
  (MR_String) "g_termination_norm",
  (MR_String) "g_termination2_norm",
  (MR_String) "g_trace_level",
  (MR_String) "g_trace_suppress_items",
  (MR_String) "g_ssdb_trace_level",
  (MR_String) "g_may_be_thread_safe",
  (MR_String) "g_c_compiler_type",
  (MR_String) "g_csharp_compiler_type",
  (MR_String) "g_reuse_strategy",
  (MR_String) "g_maybe_feedback",
  (MR_String) "g_host_env_type",
  (MR_String) "g_system_env_type",
  (MR_String) "g_target_env_type",
  (MR_String) "g_file_install_cmd",
  (MR_String) "g_limit_error_contexts_map"
};

#line 2398 "libs.globals.c"
static const MR_DuArgLocn libs__globals__libs__globals__field_locns_globals_0_0[20] = {
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
    (MR_Integer) 2
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 2,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 5,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 7,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 9,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 11,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 2,
    (MR_Integer) 1
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
    (MR_Integer) 3
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 3,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 6,
    (MR_Integer) 3
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
  }
};

#line 2502 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_globals_0_0 = {
  (MR_String) "globals",
  (MR_Integer) 20,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__globals__libs__globals__field_types_globals_0_0,
  libs__globals__libs__globals__field_names_globals_0_0,
  libs__globals__libs__globals__field_locns_globals_0_0,
  NULL
};

#line 2517 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_globals_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_globals_0_0
};

#line 2522 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_globals_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_globals_0_0
  }
};

#line 2531 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_globals_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_globals_0_0
};

#line 2536 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_globals_0[1] = {
  (MR_Integer) 0
};

#line 2541 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_globals_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__globals____Unify____globals_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____globals_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "globals",
  {     libs__globals__libs__globals__du_name_ordered_globals_0 },
  {     libs__globals__libs__globals__du_ptag_ordered_globals_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_globals_0
};

#line 2558 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_limit_error_contexts_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__globals____Unify____limit_error_contexts_map_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____limit_error_contexts_map_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "limit_error_contexts_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &libs__globals__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1libs__globals__type_ctor_info_line_number_range_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2575 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_line_number_range_0_0[2] = {
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

#line 2581 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_line_number_range_0_0 = {
  (MR_String) "line_number_range",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__globals__libs__globals__field_types_line_number_range_0_0,
  NULL,
  NULL,
  NULL
};

#line 2596 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_line_number_range_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_line_number_range_0_0
};

#line 2601 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_line_number_range_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_line_number_range_0_0
  }
};

#line 2610 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_line_number_range_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_line_number_range_0_0
};

#line 2615 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_line_number_range_0[1] = {
  (MR_Integer) 0
};

#line 2620 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_line_number_range_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__globals____Unify____line_number_range_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____line_number_range_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "line_number_range",
  {     libs__globals__libs__globals__du_name_ordered_line_number_range_0 },
  {     libs__globals__libs__globals__du_ptag_ordered_line_number_range_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_line_number_range_0
};

#line 2637 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_may_be_thread_safe_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__globals____Unify____may_be_thread_safe_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____may_be_thread_safe_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "may_be_thread_safe",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2654 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_0 = {
  (MR_String) "same_cons_id",
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

#line 2669 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_reuse_strategy_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2674 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_1 = {
  (MR_String) "within_n_cells_difference",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  libs__globals__libs__globals__field_types_reuse_strategy_0_1,
  NULL,
  NULL,
  NULL
};

#line 2689 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_0
};

#line 2694 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_1[1] = {
  &libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_1
};

#line 2699 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_reuse_strategy_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_1
  }
};

#line 2713 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_reuse_strategy_0[2] = {
  &libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_0,
  &libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_1
};

#line 2719 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_reuse_strategy_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2725 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_reuse_strategy_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__globals____Unify____reuse_strategy_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____reuse_strategy_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "reuse_strategy",
  {     libs__globals__libs__globals__du_name_ordered_reuse_strategy_0 },
  {     libs__globals__libs__globals__du_ptag_ordered_reuse_strategy_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_reuse_strategy_0
};

#line 2742 "libs.globals.c"
static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2751 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_source_file_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__globals____Unify____source_file_map_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____source_file_map_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "source_file_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &libs__globals__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2768 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_0 = {
  (MR_String) "none",
  (MR_Integer) 0
};

#line 2774 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_1 = {
  (MR_String) "shallow",
  (MR_Integer) 1
};

#line 2780 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_2 = {
  (MR_String) "deep",
  (MR_Integer) 2
};

#line 2786 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_ssdb_trace_level_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_0,
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_1,
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_2
};

#line 2793 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_ssdb_trace_level_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_2,
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_0,
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_1
};

#line 2800 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_ssdb_trace_level_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2807 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_ssdb_trace_level_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____ssdb_trace_level_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____ssdb_trace_level_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "ssdb_trace_level",
  {     libs__globals__libs__globals__enum_name_ordered_ssdb_trace_level_0 },
  {     libs__globals__libs__globals__enum_value_ordered_ssdb_trace_level_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_ssdb_trace_level_0
};

#line 2824 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_0 = {
  (MR_String) "tags_none",
  (MR_Integer) 0
};

#line 2830 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_1 = {
  (MR_String) "tags_low",
  (MR_Integer) 1
};

#line 2836 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_2 = {
  (MR_String) "tags_high",
  (MR_Integer) 2
};

#line 2842 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_tags_method_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_0,
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_1,
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_2
};

#line 2849 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_tags_method_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_2,
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_1,
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_0
};

#line 2856 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_tags_method_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2863 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_tags_method_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____tags_method_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____tags_method_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "tags_method",
  {     libs__globals__libs__globals__enum_name_ordered_tags_method_0 },
  {     libs__globals__libs__globals__enum_value_ordered_tags_method_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_tags_method_0
};

#line 2880 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_0 = {
  (MR_String) "norm_simple",
  (MR_Integer) 0
};

#line 2886 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_1 = {
  (MR_String) "norm_total",
  (MR_Integer) 1
};

#line 2892 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_2 = {
  (MR_String) "norm_num_data_elems",
  (MR_Integer) 2
};

#line 2898 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_3 = {
  (MR_String) "norm_size_data_elems",
  (MR_Integer) 3
};

#line 2904 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_termination_norm_0[4] = {
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_0,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_1,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_2,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_3
};

#line 2912 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_termination_norm_0[4] = {
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_2,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_0,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_3,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_1
};

#line 2920 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_termination_norm_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 2928 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_termination_norm_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____termination_norm_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____termination_norm_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "termination_norm",
  {     libs__globals__libs__globals__enum_name_ordered_termination_norm_0 },
  {     libs__globals__libs__globals__enum_value_ordered_termination_norm_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_termination_norm_0
};

#line 2945 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____c_compiler_type_0_0_10001(
#line 2948 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 2950 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 2952 "libs.globals.c"
{
#line 2954 "libs.globals.c"
  {
#line 2956 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 2959 "libs.globals.c"
    {
#line 2961 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____c_compiler_type_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 2964 "libs.globals.c"
    return libs__globals__succeeded;
#line 2966 "libs.globals.c"
  }
#line 2968 "libs.globals.c"
}

#line 2971 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____c_compiler_type_0_0_10001(
#line 2974 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 2976 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 2978 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 2980 "libs.globals.c"
{
#line 2982 "libs.globals.c"
  {
#line 2984 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 2987 "libs.globals.c"
    {
#line 2989 "libs.globals.c"
      libs__globals____Compare____c_compiler_type_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 2992 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 2994 "libs.globals.c"
  }
#line 2996 "libs.globals.c"
}

#line 2999 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____clang_version_0_0_10001(
#line 3002 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3004 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3006 "libs.globals.c"
{
#line 3008 "libs.globals.c"
  {
#line 3010 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3013 "libs.globals.c"
    {
#line 3015 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____clang_version_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3018 "libs.globals.c"
    return libs__globals__succeeded;
#line 3020 "libs.globals.c"
  }
#line 3022 "libs.globals.c"
}

#line 3025 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____clang_version_0_0_10001(
#line 3028 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3030 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3032 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3034 "libs.globals.c"
{
#line 3036 "libs.globals.c"
  {
#line 3038 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3041 "libs.globals.c"
    {
#line 3043 "libs.globals.c"
      libs__globals____Compare____clang_version_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3046 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3048 "libs.globals.c"
  }
#line 3050 "libs.globals.c"
}

#line 3053 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____compilation_target_0_0_10001(
#line 3056 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3058 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3060 "libs.globals.c"
{
#line 3062 "libs.globals.c"
  {
#line 3064 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3067 "libs.globals.c"
    {
#line 3069 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____compilation_target_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3072 "libs.globals.c"
    return libs__globals__succeeded;
#line 3074 "libs.globals.c"
  }
#line 3076 "libs.globals.c"
}

#line 3079 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____compilation_target_0_0_10001(
#line 3082 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3084 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3086 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3088 "libs.globals.c"
{
#line 3090 "libs.globals.c"
  {
#line 3092 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3095 "libs.globals.c"
    {
#line 3097 "libs.globals.c"
      libs__globals____Compare____compilation_target_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3100 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3102 "libs.globals.c"
  }
#line 3104 "libs.globals.c"
}

#line 3107 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____csharp_compiler_type_0_0_10001(
#line 3110 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3112 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3114 "libs.globals.c"
{
#line 3116 "libs.globals.c"
  {
#line 3118 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3121 "libs.globals.c"
    {
#line 3123 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____csharp_compiler_type_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3126 "libs.globals.c"
    return libs__globals__succeeded;
#line 3128 "libs.globals.c"
  }
#line 3130 "libs.globals.c"
}

#line 3133 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____csharp_compiler_type_0_0_10001(
#line 3136 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3138 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3140 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3142 "libs.globals.c"
{
#line 3144 "libs.globals.c"
  {
#line 3146 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3149 "libs.globals.c"
    {
#line 3151 "libs.globals.c"
      libs__globals____Compare____csharp_compiler_type_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3154 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3156 "libs.globals.c"
  }
#line 3158 "libs.globals.c"
}

#line 3161 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____env_type_0_0_10001(
#line 3164 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3166 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3168 "libs.globals.c"
{
#line 3170 "libs.globals.c"
  {
#line 3172 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3175 "libs.globals.c"
    {
#line 3177 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____env_type_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3180 "libs.globals.c"
    return libs__globals__succeeded;
#line 3182 "libs.globals.c"
  }
#line 3184 "libs.globals.c"
}

#line 3187 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____env_type_0_0_10001(
#line 3190 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3192 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3194 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3196 "libs.globals.c"
{
#line 3198 "libs.globals.c"
  {
#line 3200 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3203 "libs.globals.c"
    {
#line 3205 "libs.globals.c"
      libs__globals____Compare____env_type_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3208 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3210 "libs.globals.c"
  }
#line 3212 "libs.globals.c"
}

#line 3215 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____file_install_cmd_0_0_10001(
#line 3218 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3220 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3222 "libs.globals.c"
{
#line 3224 "libs.globals.c"
  {
#line 3226 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3229 "libs.globals.c"
    {
#line 3231 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____file_install_cmd_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3234 "libs.globals.c"
    return libs__globals__succeeded;
#line 3236 "libs.globals.c"
  }
#line 3238 "libs.globals.c"
}

#line 3241 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____file_install_cmd_0_0_10001(
#line 3244 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3246 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3248 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3250 "libs.globals.c"
{
#line 3252 "libs.globals.c"
  {
#line 3254 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3257 "libs.globals.c"
    {
#line 3259 "libs.globals.c"
      libs__globals____Compare____file_install_cmd_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3262 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3264 "libs.globals.c"
  }
#line 3266 "libs.globals.c"
}

#line 3269 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____foreign_language_0_0_10001(
#line 3272 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3274 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3276 "libs.globals.c"
{
#line 3278 "libs.globals.c"
  {
#line 3280 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3283 "libs.globals.c"
    {
#line 3285 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____foreign_language_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3288 "libs.globals.c"
    return libs__globals__succeeded;
#line 3290 "libs.globals.c"
  }
#line 3292 "libs.globals.c"
}

#line 3295 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____foreign_language_0_0_10001(
#line 3298 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3300 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3302 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3304 "libs.globals.c"
{
#line 3306 "libs.globals.c"
  {
#line 3308 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3311 "libs.globals.c"
    {
#line 3313 "libs.globals.c"
      libs__globals____Compare____foreign_language_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3316 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3318 "libs.globals.c"
  }
#line 3320 "libs.globals.c"
}

#line 3323 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____gc_method_0_0_10001(
#line 3326 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3328 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3330 "libs.globals.c"
{
#line 3332 "libs.globals.c"
  {
#line 3334 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3337 "libs.globals.c"
    {
#line 3339 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____gc_method_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3342 "libs.globals.c"
    return libs__globals__succeeded;
#line 3344 "libs.globals.c"
  }
#line 3346 "libs.globals.c"
}

#line 3349 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____gc_method_0_0_10001(
#line 3352 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3354 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3356 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3358 "libs.globals.c"
{
#line 3360 "libs.globals.c"
  {
#line 3362 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3365 "libs.globals.c"
    {
#line 3367 "libs.globals.c"
      libs__globals____Compare____gc_method_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3370 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3372 "libs.globals.c"
  }
#line 3374 "libs.globals.c"
}

#line 3377 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____globals_0_0_10001(
#line 3380 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3382 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3384 "libs.globals.c"
{
#line 3386 "libs.globals.c"
  {
#line 3388 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3391 "libs.globals.c"
    {
#line 3393 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____globals_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3396 "libs.globals.c"
    return libs__globals__succeeded;
#line 3398 "libs.globals.c"
  }
#line 3400 "libs.globals.c"
}

#line 3403 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____globals_0_0_10001(
#line 3406 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3408 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3410 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3412 "libs.globals.c"
{
#line 3414 "libs.globals.c"
  {
#line 3416 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3419 "libs.globals.c"
    {
#line 3421 "libs.globals.c"
      libs__globals____Compare____globals_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3424 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3426 "libs.globals.c"
  }
#line 3428 "libs.globals.c"
}

#line 3431 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____limit_error_contexts_map_0_0_10001(
#line 3434 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3436 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3438 "libs.globals.c"
{
#line 3440 "libs.globals.c"
  {
#line 3442 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3445 "libs.globals.c"
    {
#line 3447 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____limit_error_contexts_map_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3450 "libs.globals.c"
    return libs__globals__succeeded;
#line 3452 "libs.globals.c"
  }
#line 3454 "libs.globals.c"
}

#line 3457 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____limit_error_contexts_map_0_0_10001(
#line 3460 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3462 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3464 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3466 "libs.globals.c"
{
#line 3468 "libs.globals.c"
  {
#line 3470 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3473 "libs.globals.c"
    {
#line 3475 "libs.globals.c"
      libs__globals____Compare____limit_error_contexts_map_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3478 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3480 "libs.globals.c"
  }
#line 3482 "libs.globals.c"
}

#line 3485 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____line_number_range_0_0_10001(
#line 3488 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3490 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3492 "libs.globals.c"
{
#line 3494 "libs.globals.c"
  {
#line 3496 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3499 "libs.globals.c"
    {
#line 3501 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____line_number_range_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3504 "libs.globals.c"
    return libs__globals__succeeded;
#line 3506 "libs.globals.c"
  }
#line 3508 "libs.globals.c"
}

#line 3511 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____line_number_range_0_0_10001(
#line 3514 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3516 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3518 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3520 "libs.globals.c"
{
#line 3522 "libs.globals.c"
  {
#line 3524 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3527 "libs.globals.c"
    {
#line 3529 "libs.globals.c"
      libs__globals____Compare____line_number_range_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3532 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3534 "libs.globals.c"
  }
#line 3536 "libs.globals.c"
}

#line 3539 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____may_be_thread_safe_0_0_10001(
#line 3542 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3544 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3546 "libs.globals.c"
{
#line 3548 "libs.globals.c"
  {
#line 3550 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3553 "libs.globals.c"
    {
#line 3555 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____may_be_thread_safe_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3558 "libs.globals.c"
    return libs__globals__succeeded;
#line 3560 "libs.globals.c"
  }
#line 3562 "libs.globals.c"
}

#line 3565 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____may_be_thread_safe_0_0_10001(
#line 3568 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3570 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3572 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3574 "libs.globals.c"
{
#line 3576 "libs.globals.c"
  {
#line 3578 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3581 "libs.globals.c"
    {
#line 3583 "libs.globals.c"
      libs__globals____Compare____may_be_thread_safe_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3586 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3588 "libs.globals.c"
  }
#line 3590 "libs.globals.c"
}

#line 3593 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____reuse_strategy_0_0_10001(
#line 3596 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3598 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3600 "libs.globals.c"
{
#line 3602 "libs.globals.c"
  {
#line 3604 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3607 "libs.globals.c"
    {
#line 3609 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____reuse_strategy_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3612 "libs.globals.c"
    return libs__globals__succeeded;
#line 3614 "libs.globals.c"
  }
#line 3616 "libs.globals.c"
}

#line 3619 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____reuse_strategy_0_0_10001(
#line 3622 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3624 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3626 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3628 "libs.globals.c"
{
#line 3630 "libs.globals.c"
  {
#line 3632 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3635 "libs.globals.c"
    {
#line 3637 "libs.globals.c"
      libs__globals____Compare____reuse_strategy_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3640 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3642 "libs.globals.c"
  }
#line 3644 "libs.globals.c"
}

#line 3647 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____source_file_map_0_0_10001(
#line 3650 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3652 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3654 "libs.globals.c"
{
#line 3656 "libs.globals.c"
  {
#line 3658 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3661 "libs.globals.c"
    {
#line 3663 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____source_file_map_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3666 "libs.globals.c"
    return libs__globals__succeeded;
#line 3668 "libs.globals.c"
  }
#line 3670 "libs.globals.c"
}

#line 3673 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____source_file_map_0_0_10001(
#line 3676 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3678 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3680 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3682 "libs.globals.c"
{
#line 3684 "libs.globals.c"
  {
#line 3686 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3689 "libs.globals.c"
    {
#line 3691 "libs.globals.c"
      libs__globals____Compare____source_file_map_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3694 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3696 "libs.globals.c"
  }
#line 3698 "libs.globals.c"
}

#line 3701 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____ssdb_trace_level_0_0_10001(
#line 3704 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3706 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3708 "libs.globals.c"
{
#line 3710 "libs.globals.c"
  {
#line 3712 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3715 "libs.globals.c"
    {
#line 3717 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____ssdb_trace_level_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3720 "libs.globals.c"
    return libs__globals__succeeded;
#line 3722 "libs.globals.c"
  }
#line 3724 "libs.globals.c"
}

#line 3727 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____ssdb_trace_level_0_0_10001(
#line 3730 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3732 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3734 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3736 "libs.globals.c"
{
#line 3738 "libs.globals.c"
  {
#line 3740 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3743 "libs.globals.c"
    {
#line 3745 "libs.globals.c"
      libs__globals____Compare____ssdb_trace_level_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3748 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3750 "libs.globals.c"
  }
#line 3752 "libs.globals.c"
}

#line 3755 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____tags_method_0_0_10001(
#line 3758 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3760 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3762 "libs.globals.c"
{
#line 3764 "libs.globals.c"
  {
#line 3766 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3769 "libs.globals.c"
    {
#line 3771 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____tags_method_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3774 "libs.globals.c"
    return libs__globals__succeeded;
#line 3776 "libs.globals.c"
  }
#line 3778 "libs.globals.c"
}

#line 3781 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____tags_method_0_0_10001(
#line 3784 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3786 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3788 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3790 "libs.globals.c"
{
#line 3792 "libs.globals.c"
  {
#line 3794 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3797 "libs.globals.c"
    {
#line 3799 "libs.globals.c"
      libs__globals____Compare____tags_method_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3802 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3804 "libs.globals.c"
  }
#line 3806 "libs.globals.c"
}

#line 3809 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____termination_norm_0_0_10001(
#line 3812 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3814 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3816 "libs.globals.c"
{
#line 3818 "libs.globals.c"
  {
#line 3820 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3823 "libs.globals.c"
    {
#line 3825 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____termination_norm_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3828 "libs.globals.c"
    return libs__globals__succeeded;
#line 3830 "libs.globals.c"
  }
#line 3832 "libs.globals.c"
}

#line 3835 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____termination_norm_0_0_10001(
#line 3838 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3840 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3842 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3844 "libs.globals.c"
{
#line 3846 "libs.globals.c"
  {
#line 3848 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3851 "libs.globals.c"
    {
#line 3853 "libs.globals.c"
      libs__globals____Compare____termination_norm_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3856 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3858 "libs.globals.c"
  }
#line 3860 "libs.globals.c"
}

#line 461 "globals.m"
static MR_bool MR_CALL 
libs__globals__IntroducedFrom__pred__convert_c_compiler_type_with_version__461__1_2_p_0(
#line 461 "globals.m"
  MR_Char libs__globals__HeadVar__1_11,
#line 461 "globals.m"
  MR_Char libs__globals__HeadVar__2_28)
#line 461 "globals.m"
{
#line 461 "globals.m"
  {
#line 461 "globals.m"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__1_11 == libs__globals__HeadVar__2_28);

#line 461 "globals.m"
    return libs__globals__succeeded;
#line 461 "globals.m"
  }
#line 461 "globals.m"
}

#line 112 "globals.m"
void MR_CALL 
libs__globals____Compare____termination_norm_0_0(
#line 112 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 112 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 112 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 112 "globals.m"
{
#line 112 "globals.m"
  {
#line 112 "globals.m"
    MR_bool libs__globals__succeeded;
#line 112 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 112 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 112 "globals.m"
    {
#line 112 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 112 "globals.m"
      return;
    }
#line 112 "globals.m"
  }
#line 112 "globals.m"
}

#line 112 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____termination_norm_0_0(
#line 112 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 112 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 112 "globals.m"
{
#line 3925 "libs.globals.c"
  {
#line 3927 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 3930 "libs.globals.c"
    return libs__globals__succeeded;
#line 3932 "libs.globals.c"
  }
#line 112 "globals.m"
}

#line 107 "globals.m"
void MR_CALL 
libs__globals____Compare____tags_method_0_0(
#line 107 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 107 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 107 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 107 "globals.m"
{
#line 107 "globals.m"
  {
#line 107 "globals.m"
    MR_bool libs__globals__succeeded;
#line 107 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 107 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 107 "globals.m"
    {
#line 107 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 107 "globals.m"
      return;
    }
#line 107 "globals.m"
  }
#line 107 "globals.m"
}

#line 107 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____tags_method_0_0(
#line 107 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 107 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 107 "globals.m"
{
#line 3978 "libs.globals.c"
  {
#line 3980 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 3983 "libs.globals.c"
    return libs__globals__succeeded;
#line 3985 "libs.globals.c"
  }
#line 107 "globals.m"
}

#line 185 "globals.m"
void MR_CALL 
libs__globals____Compare____ssdb_trace_level_0_0(
#line 185 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 185 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 185 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 185 "globals.m"
{
#line 185 "globals.m"
  {
#line 185 "globals.m"
    MR_bool libs__globals__succeeded;
#line 185 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 185 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 185 "globals.m"
    {
#line 185 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 185 "globals.m"
      return;
    }
#line 185 "globals.m"
  }
#line 185 "globals.m"
}

#line 185 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____ssdb_trace_level_0_0(
#line 185 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 185 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 185 "globals.m"
{
#line 4031 "libs.globals.c"
  {
#line 4033 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 4036 "libs.globals.c"
    return libs__globals__succeeded;
#line 4038 "libs.globals.c"
  }
#line 185 "globals.m"
}

#line 211 "globals.m"
void MR_CALL 
libs__globals____Compare____source_file_map_0_0(
#line 211 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 211 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 211 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 211 "globals.m"
{
#line 211 "globals.m"
  {
#line 211 "globals.m"
    MR_bool libs__globals__succeeded;
#line 211 "globals.m"
    MR_Word libs__globals__Cast_HeadVar1_4 = libs__globals__HeadVar__2_2;
#line 211 "globals.m"
    MR_Word libs__globals__Cast_HeadVar2_5 = libs__globals__HeadVar__3_3;

#line 211 "globals.m"
    {
#line 211 "globals.m"
      mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_2[2], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__Cast_HeadVar1_4)), ((MR_Box) (libs__globals__Cast_HeadVar2_5)));
#line 211 "globals.m"
      return;
    }
#line 211 "globals.m"
  }
#line 211 "globals.m"
}

#line 211 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____source_file_map_0_0(
#line 211 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 211 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 211 "globals.m"
{
#line 211 "globals.m"
  {
#line 211 "globals.m"
    MR_bool libs__globals__succeeded;
#line 211 "globals.m"
    MR_Word libs__globals__Cast_HeadVar1_3 = libs__globals__HeadVar__1_1;
#line 211 "globals.m"
    MR_Word libs__globals__Cast_HeadVar2_4 = libs__globals__HeadVar__2_2;

#line 211 "globals.m"
    {
#line 211 "globals.m"
      return libs__globals__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__globals_scalar_common_2[2], ((MR_Box) (libs__globals__Cast_HeadVar1_3)), ((MR_Box) (libs__globals__Cast_HeadVar2_4)));
    }
#line 211 "globals.m"
    return libs__globals__succeeded;
#line 211 "globals.m"
  }
#line 211 "globals.m"
}

#line 154 "globals.m"
void MR_CALL 
libs__globals____Compare____reuse_strategy_0_0(
#line 154 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 154 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 154 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 154 "globals.m"
{
#line 154 "globals.m"
  {
#line 154 "globals.m"
    MR_bool libs__globals__succeeded;
#line 154 "globals.m"
    MR_Integer libs__globals__CastX_8 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 154 "globals.m"
    MR_Integer libs__globals__CastY_9 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 154 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_8 == libs__globals__CastY_9);
#line 154 "globals.m"
    if (libs__globals__succeeded)
#line 4129 "libs.globals.c"
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 154 "globals.m"
    else
#line 154 "globals.m"
    if ((libs__globals__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 154 "globals.m"
      if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 154 "globals.m"
        *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 154 "globals.m"
      else
#line 4141 "libs.globals.c"
        *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 154 "globals.m"
    else
#line 154 "globals.m"
      {
#line 154 "globals.m"
        MR_Integer libs__globals__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));

#line 154 "globals.m"
        if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4152 "libs.globals.c"
          *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 154 "globals.m"
        else
#line 154 "globals.m"
          {
#line 154 "globals.m"
            MR_Integer libs__globals__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 0)));

#line 154 "globals.m"
            {
#line 154 "globals.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__V_11_11, libs__globals__V_7_7);
#line 154 "globals.m"
              return;
            }
#line 154 "globals.m"
          }
#line 154 "globals.m"
      }
#line 154 "globals.m"
  }
#line 154 "globals.m"
}

#line 154 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____reuse_strategy_0_0(
#line 154 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 154 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 154 "globals.m"
{
#line 154 "globals.m"
  {
#line 154 "globals.m"
    MR_bool libs__globals__succeeded;
#line 154 "globals.m"
    MR_Integer libs__globals__CastX_7 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 154 "globals.m"
    MR_Integer libs__globals__CastY_8 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 154 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_7 == libs__globals__CastY_8);
#line 154 "globals.m"
    if (libs__globals__succeeded)
#line 154 "globals.m"
      libs__globals__succeeded = MR_TRUE;
#line 154 "globals.m"
    else
#line 154 "globals.m"
    if ((libs__globals__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 154 "globals.m"
      {
#line 154 "globals.m"
        MR_Integer libs__globals__CastX_3 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 154 "globals.m"
        MR_Integer libs__globals__CastY_4 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 154 "globals.m"
        libs__globals__succeeded = (libs__globals__CastY_4 == libs__globals__CastX_3);
#line 154 "globals.m"
      }
#line 154 "globals.m"
    else
#line 154 "globals.m"
      {
#line 154 "globals.m"
        MR_Integer libs__globals__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 154 "globals.m"
        MR_Integer libs__globals__V_6_6;

#line 154 "globals.m"
        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 154 "globals.m"
        if (libs__globals__succeeded)
#line 154 "globals.m"
          {
#line 154 "globals.m"
            libs__globals__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 4233 "libs.globals.c"
            libs__globals__succeeded = (libs__globals__V_5_5 == libs__globals__V_6_6);
#line 154 "globals.m"
          }
#line 154 "globals.m"
      }
#line 154 "globals.m"
    return libs__globals__succeeded;
#line 154 "globals.m"
  }
#line 154 "globals.m"
}

#line 118 "globals.m"
void MR_CALL 
libs__globals____Compare____may_be_thread_safe_0_0(
#line 118 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 118 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 118 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 118 "globals.m"
{
#line 118 "globals.m"
  {
#line 118 "globals.m"
    MR_bool libs__globals__succeeded;
#line 118 "globals.m"
    MR_Word libs__globals__Cast_HeadVar1_4 = libs__globals__HeadVar__2_2;
#line 118 "globals.m"
    MR_Word libs__globals__Cast_HeadVar2_5 = libs__globals__HeadVar__3_3;
#line 118 "globals.m"
    MR_Integer libs__globals__V_7_7 = (MR_Integer) libs__globals__Cast_HeadVar1_4;
#line 118 "globals.m"
    MR_Integer libs__globals__V_8_8 = (MR_Integer) libs__globals__Cast_HeadVar2_5;

#line 118 "globals.m"
    {
#line 118 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__V_7_7, libs__globals__V_8_8);
#line 118 "globals.m"
      return;
    }
#line 118 "globals.m"
  }
#line 118 "globals.m"
}

#line 118 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____may_be_thread_safe_0_0(
#line 118 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 118 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 118 "globals.m"
{
#line 118 "globals.m"
  {
#line 118 "globals.m"
    MR_bool libs__globals__succeeded;
#line 118 "globals.m"
    MR_Word libs__globals__Cast_HeadVar1_3 = libs__globals__HeadVar__1_1;
#line 118 "globals.m"
    MR_Word libs__globals__Cast_HeadVar2_4 = libs__globals__HeadVar__2_2;

#line 118 "globals.m"
    libs__globals__succeeded = (libs__globals__Cast_HeadVar1_3 == libs__globals__Cast_HeadVar2_4);
#line 118 "globals.m"
    return libs__globals__succeeded;
#line 118 "globals.m"
  }
#line 118 "globals.m"
}

#line 213 "globals.m"
void MR_CALL 
libs__globals____Compare____line_number_range_0_0(
#line 213 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 213 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 213 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 213 "globals.m"
{
#line 213 "globals.m"
  {
#line 213 "globals.m"
    MR_bool libs__globals__succeeded;
#line 213 "globals.m"
    MR_Integer libs__globals__CastX_9 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 213 "globals.m"
    MR_Integer libs__globals__CastY_10 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 213 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_9 == libs__globals__CastY_10);
#line 213 "globals.m"
    if (libs__globals__succeeded)
#line 4333 "libs.globals.c"
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 213 "globals.m"
    else
#line 213 "globals.m"
      {
#line 213 "globals.m"
        MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 213 "globals.m"
        MR_Word libs__globals__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 213 "globals.m"
        MR_Word libs__globals__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 0)));
#line 213 "globals.m"
        MR_Word libs__globals__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)));
#line 213 "globals.m"
        MR_Word libs__globals__V_8_8;

#line 213 "globals.m"
        {
#line 213 "globals.m"
          mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[1], &libs__globals__V_8_8, ((MR_Box) (libs__globals__V_4_4)), ((MR_Box) (libs__globals__V_6_6)));
        }
#line 4355 "libs.globals.c"
        libs__globals__succeeded = (libs__globals__V_8_8 == (MR_Integer) 0);
#line 213 "globals.m"
        libs__globals__succeeded = !(libs__globals__succeeded);
#line 213 "globals.m"
        if (libs__globals__succeeded)
#line 213 "globals.m"
          *libs__globals__HeadVar__1_1 = libs__globals__V_8_8;
#line 213 "globals.m"
        else
#line 213 "globals.m"
          {
#line 213 "globals.m"
            {
#line 213 "globals.m"
              mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[1], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__V_5_5)), ((MR_Box) (libs__globals__V_7_7)));
#line 213 "globals.m"
              return;
            }
#line 213 "globals.m"
          }
#line 213 "globals.m"
      }
#line 213 "globals.m"
  }
#line 213 "globals.m"
}

#line 213 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____line_number_range_0_0(
#line 213 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 213 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 213 "globals.m"
{
#line 213 "globals.m"
  {
#line 213 "globals.m"
    MR_bool libs__globals__succeeded;
#line 213 "globals.m"
    MR_Integer libs__globals__CastX_7 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 213 "globals.m"
    MR_Integer libs__globals__CastY_8 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 213 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_7 == libs__globals__CastY_8);
#line 213 "globals.m"
    if (libs__globals__succeeded)
#line 213 "globals.m"
      libs__globals__succeeded = MR_TRUE;
#line 213 "globals.m"
    else
#line 213 "globals.m"
      {
#line 213 "globals.m"
        MR_Word libs__globals__TypeInfo_10_10;
#line 213 "globals.m"
        MR_Word libs__globals__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 213 "globals.m"
        MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)));
#line 213 "globals.m"
        MR_Word libs__globals__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 213 "globals.m"
        MR_Word libs__globals__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)));

#line 4422 "libs.globals.c"
        {
#line 4424 "libs.globals.c"
          libs__globals__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__globals_scalar_common_1[1], ((MR_Box) (libs__globals__V_3_3)), ((MR_Box) (libs__globals__V_5_5)));
        }
#line 213 "globals.m"
        if (libs__globals__succeeded)
#line 213 "globals.m"
          {
#line 4431 "libs.globals.c"
            libs__globals__TypeInfo_10_10 = (MR_Word) &libs__globals_scalar_common_1[1];
#line 4433 "libs.globals.c"
            {
#line 4435 "libs.globals.c"
              return libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_10_10, ((MR_Box) (libs__globals__V_4_4)), ((MR_Box) (libs__globals__V_6_6)));
            }
#line 213 "globals.m"
          }
#line 213 "globals.m"
      }
#line 213 "globals.m"
    return libs__globals__succeeded;
#line 213 "globals.m"
  }
#line 213 "globals.m"
}

#line 224 "globals.m"
void MR_CALL 
libs__globals____Compare____limit_error_contexts_map_0_0(
#line 224 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 224 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 224 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 224 "globals.m"
{
#line 224 "globals.m"
  {
#line 224 "globals.m"
    MR_bool libs__globals__succeeded;
#line 224 "globals.m"
    MR_Word libs__globals__Cast_HeadVar1_4 = libs__globals__HeadVar__2_2;
#line 224 "globals.m"
    MR_Word libs__globals__Cast_HeadVar2_5 = libs__globals__HeadVar__3_3;

#line 224 "globals.m"
    {
#line 224 "globals.m"
      mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_2[1], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__Cast_HeadVar1_4)), ((MR_Box) (libs__globals__Cast_HeadVar2_5)));
#line 224 "globals.m"
      return;
    }
#line 224 "globals.m"
  }
#line 224 "globals.m"
}

#line 224 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____limit_error_contexts_map_0_0(
#line 224 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 224 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 224 "globals.m"
{
#line 224 "globals.m"
  {
#line 224 "globals.m"
    MR_bool libs__globals__succeeded;
#line 224 "globals.m"
    MR_Word libs__globals__Cast_HeadVar1_3 = libs__globals__HeadVar__1_1;
#line 224 "globals.m"
    MR_Word libs__globals__Cast_HeadVar2_4 = libs__globals__HeadVar__2_2;

#line 224 "globals.m"
    {
#line 224 "globals.m"
      return libs__globals__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__globals_scalar_common_2[1], ((MR_Box) (libs__globals__Cast_HeadVar1_3)), ((MR_Box) (libs__globals__Cast_HeadVar2_4)));
    }
#line 224 "globals.m"
    return libs__globals__succeeded;
#line 224 "globals.m"
  }
#line 224 "globals.m"
}

#line 672 "globals.m"
void MR_CALL 
libs__globals____Compare____globals_0_0(
#line 672 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 672 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 672 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 672 "globals.m"
{
#line 672 "globals.m"
  {
#line 672 "globals.m"
    MR_bool libs__globals__succeeded;
#line 672 "globals.m"
    MR_Integer libs__globals__CastX_63 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 672 "globals.m"
    MR_Integer libs__globals__CastY_64 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 672 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_63 == libs__globals__CastY_64);
#line 672 "globals.m"
    if (libs__globals__succeeded)
#line 4535 "libs.globals.c"
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 672 "globals.m"
    else
#line 672 "globals.m"
      {
#line 672 "globals.m"
        MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 672 "globals.m"
        MR_Word libs__globals__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 672 "globals.m"
        MR_Word libs__globals__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 672 "globals.m"
        MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 672 "globals.m"
        MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 672 "globals.m"
        MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 672 "globals.m"
        MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 672 "globals.m"
        MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 672 "globals.m"
        MR_Word libs__globals__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 3)));
#line 672 "globals.m"
        MR_Word libs__globals__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 672 "globals.m"
        MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 672 "globals.m"
        MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 5)));
#line 672 "globals.m"
        MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 6)));
#line 672 "globals.m"
        MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 7)));
#line 672 "globals.m"
        MR_Word libs__globals__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 8)));
#line 672 "globals.m"
        MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 672 "globals.m"
        MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 672 "globals.m"
        MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 672 "globals.m"
        MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 10)));
#line 672 "globals.m"
        MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 11)));
#line 672 "globals.m"
        MR_Word libs__globals__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 0)));
#line 672 "globals.m"
        MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)));
#line 672 "globals.m"
        MR_Word libs__globals__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 672 "globals.m"
        MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 672 "globals.m"
        MR_Word libs__globals__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 672 "globals.m"
        MR_Word libs__globals__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 672 "globals.m"
        MR_Word libs__globals__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 672 "globals.m"
        MR_Word libs__globals__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 672 "globals.m"
        MR_Word libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 3)));
#line 672 "globals.m"
        MR_Word libs__globals__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 672 "globals.m"
        MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 672 "globals.m"
        MR_Word libs__globals__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 5)));
#line 672 "globals.m"
        MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 6)));
#line 672 "globals.m"
        MR_Word libs__globals__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 7)));
#line 672 "globals.m"
        MR_Word libs__globals__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 8)));
#line 672 "globals.m"
        MR_Word libs__globals__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 672 "globals.m"
        MR_Word libs__globals__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 672 "globals.m"
        MR_Word libs__globals__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 672 "globals.m"
        MR_Word libs__globals__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 10)));
#line 672 "globals.m"
        MR_Word libs__globals__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 11)));
#line 672 "globals.m"
        MR_Word libs__globals__V_44_44;

#line 672 "globals.m"
        {
#line 672 "globals.m"
          mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_2[0], &libs__globals__V_44_44, ((MR_Box) (libs__globals__V_4_4)), ((MR_Box) (libs__globals__V_24_24)));
        }
#line 4629 "libs.globals.c"
        libs__globals__succeeded = (libs__globals__V_44_44 == (MR_Integer) 0);
#line 672 "globals.m"
        libs__globals__succeeded = !(libs__globals__succeeded);
#line 672 "globals.m"
        if (libs__globals__succeeded)
#line 672 "globals.m"
          *libs__globals__HeadVar__1_1 = libs__globals__V_44_44;
#line 672 "globals.m"
        else
#line 672 "globals.m"
          {
#line 672 "globals.m"
            MR_Word libs__globals__V_45_45;

#line 672 "globals.m"
            {
#line 672 "globals.m"
              libs__op_mode____Compare____op_mode_0_0(&libs__globals__V_45_45, libs__globals__V_5_5, libs__globals__V_25_25);
            }
#line 4649 "libs.globals.c"
            libs__globals__succeeded = (libs__globals__V_45_45 == (MR_Integer) 0);
#line 672 "globals.m"
            libs__globals__succeeded = !(libs__globals__succeeded);
#line 672 "globals.m"
            if (libs__globals__succeeded)
#line 672 "globals.m"
              *libs__globals__HeadVar__1_1 = libs__globals__V_45_45;
#line 672 "globals.m"
            else
#line 672 "globals.m"
              {
#line 672 "globals.m"
                MR_Word libs__globals__V_46_46;
#line 672 "globals.m"
                MR_Integer libs__globals__V_85_85 = (MR_Integer) libs__globals__V_6_6;
#line 672 "globals.m"
                MR_Integer libs__globals__V_86_86 = (MR_Integer) libs__globals__V_26_26;

#line 672 "globals.m"
                {
#line 672 "globals.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_46_46, libs__globals__V_85_85, libs__globals__V_86_86);
                }
#line 4673 "libs.globals.c"
                libs__globals__succeeded = (libs__globals__V_46_46 == (MR_Integer) 0);
#line 672 "globals.m"
                libs__globals__succeeded = !(libs__globals__succeeded);
#line 672 "globals.m"
                if (libs__globals__succeeded)
#line 672 "globals.m"
                  *libs__globals__HeadVar__1_1 = libs__globals__V_46_46;
#line 672 "globals.m"
                else
#line 672 "globals.m"
                  {
#line 672 "globals.m"
                    MR_Word libs__globals__V_47_47;
#line 672 "globals.m"
                    MR_Integer libs__globals__V_87_87 = (MR_Integer) libs__globals__V_7_7;
#line 672 "globals.m"
                    MR_Integer libs__globals__V_88_88 = (MR_Integer) libs__globals__V_27_27;

#line 672 "globals.m"
                    {
#line 672 "globals.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_47_47, libs__globals__V_87_87, libs__globals__V_88_88);
                    }
#line 4697 "libs.globals.c"
                    libs__globals__succeeded = (libs__globals__V_47_47 == (MR_Integer) 0);
#line 672 "globals.m"
                    libs__globals__succeeded = !(libs__globals__succeeded);
#line 672 "globals.m"
                    if (libs__globals__succeeded)
#line 672 "globals.m"
                      *libs__globals__HeadVar__1_1 = libs__globals__V_47_47;
#line 672 "globals.m"
                    else
#line 672 "globals.m"
                      {
#line 672 "globals.m"
                        MR_Word libs__globals__V_48_48;
#line 672 "globals.m"
                        MR_Integer libs__globals__V_89_89 = (MR_Integer) libs__globals__V_8_8;
#line 672 "globals.m"
                        MR_Integer libs__globals__V_90_90 = (MR_Integer) libs__globals__V_28_28;

#line 672 "globals.m"
                        {
#line 672 "globals.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_48_48, libs__globals__V_89_89, libs__globals__V_90_90);
                        }
#line 4721 "libs.globals.c"
                        libs__globals__succeeded = (libs__globals__V_48_48 == (MR_Integer) 0);
#line 672 "globals.m"
                        libs__globals__succeeded = !(libs__globals__succeeded);
#line 672 "globals.m"
                        if (libs__globals__succeeded)
#line 672 "globals.m"
                          *libs__globals__HeadVar__1_1 = libs__globals__V_48_48;
#line 672 "globals.m"
                        else
#line 672 "globals.m"
                          {
#line 672 "globals.m"
                            MR_Word libs__globals__V_49_49;
#line 672 "globals.m"
                            MR_Integer libs__globals__V_91_91 = (MR_Integer) libs__globals__V_9_9;
#line 672 "globals.m"
                            MR_Integer libs__globals__V_92_92 = (MR_Integer) libs__globals__V_29_29;

#line 672 "globals.m"
                            {
#line 672 "globals.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_49_49, libs__globals__V_91_91, libs__globals__V_92_92);
                            }
#line 4745 "libs.globals.c"
                            libs__globals__succeeded = (libs__globals__V_49_49 == (MR_Integer) 0);
#line 672 "globals.m"
                            libs__globals__succeeded = !(libs__globals__succeeded);
#line 672 "globals.m"
                            if (libs__globals__succeeded)
#line 672 "globals.m"
                              *libs__globals__HeadVar__1_1 = libs__globals__V_49_49;
#line 672 "globals.m"
                            else
#line 672 "globals.m"
                              {
#line 672 "globals.m"
                                MR_Word libs__globals__V_50_50;
#line 672 "globals.m"
                                MR_Integer libs__globals__V_93_93 = (MR_Integer) libs__globals__V_10_10;
#line 672 "globals.m"
                                MR_Integer libs__globals__V_94_94 = (MR_Integer) libs__globals__V_30_30;

#line 672 "globals.m"
                                {
#line 672 "globals.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_50_50, libs__globals__V_93_93, libs__globals__V_94_94);
                                }
#line 4769 "libs.globals.c"
                                libs__globals__succeeded = (libs__globals__V_50_50 == (MR_Integer) 0);
#line 672 "globals.m"
                                libs__globals__succeeded = !(libs__globals__succeeded);
#line 672 "globals.m"
                                if (libs__globals__succeeded)
#line 672 "globals.m"
                                  *libs__globals__HeadVar__1_1 = libs__globals__V_50_50;
#line 672 "globals.m"
                                else
#line 672 "globals.m"
                                  {
#line 672 "globals.m"
                                    MR_Word libs__globals__V_51_51;

#line 672 "globals.m"
                                    {
#line 672 "globals.m"
                                      libs__trace_params____Compare____trace_level_0_0(&libs__globals__V_51_51, libs__globals__V_11_11, libs__globals__V_31_31);
                                    }
#line 4789 "libs.globals.c"
                                    libs__globals__succeeded = (libs__globals__V_51_51 == (MR_Integer) 0);
#line 672 "globals.m"
                                    libs__globals__succeeded = !(libs__globals__succeeded);
#line 672 "globals.m"
                                    if (libs__globals__succeeded)
#line 672 "globals.m"
                                      *libs__globals__HeadVar__1_1 = libs__globals__V_51_51;
#line 672 "globals.m"
                                    else
#line 672 "globals.m"
                                      {
#line 672 "globals.m"
                                        MR_Word libs__globals__V_52_52;

#line 672 "globals.m"
                                        {
#line 672 "globals.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[3], &libs__globals__V_52_52, ((MR_Box) (libs__globals__V_12_12)), ((MR_Box) (libs__globals__V_32_32)));
                                        }
#line 4809 "libs.globals.c"
                                        libs__globals__succeeded = (libs__globals__V_52_52 == (MR_Integer) 0);
#line 672 "globals.m"
                                        libs__globals__succeeded = !(libs__globals__succeeded);
#line 672 "globals.m"
                                        if (libs__globals__succeeded)
#line 672 "globals.m"
                                          *libs__globals__HeadVar__1_1 = libs__globals__V_52_52;
#line 672 "globals.m"
                                        else
#line 672 "globals.m"
                                          {
#line 672 "globals.m"
                                            MR_Word libs__globals__V_53_53;
#line 672 "globals.m"
                                            MR_Integer libs__globals__V_95_95 = (MR_Integer) libs__globals__V_13_13;
#line 672 "globals.m"
                                            MR_Integer libs__globals__V_96_96 = (MR_Integer) libs__globals__V_33_33;

#line 672 "globals.m"
                                            {
#line 672 "globals.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_53_53, libs__globals__V_95_95, libs__globals__V_96_96);
                                            }
#line 4833 "libs.globals.c"
                                            libs__globals__succeeded = (libs__globals__V_53_53 == (MR_Integer) 0);
#line 672 "globals.m"
                                            libs__globals__succeeded = !(libs__globals__succeeded);
#line 672 "globals.m"
                                            if (libs__globals__succeeded)
#line 672 "globals.m"
                                              *libs__globals__HeadVar__1_1 = libs__globals__V_53_53;
#line 672 "globals.m"
                                            else
#line 672 "globals.m"
                                              {
#line 672 "globals.m"
                                                MR_Word libs__globals__V_54_54;
#line 672 "globals.m"
                                                MR_Integer libs__globals__V_97_97 = (MR_Integer) libs__globals__V_14_14;
#line 672 "globals.m"
                                                MR_Integer libs__globals__V_98_98 = (MR_Integer) libs__globals__V_34_34;

#line 672 "globals.m"
                                                {
#line 672 "globals.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_54_54, libs__globals__V_97_97, libs__globals__V_98_98);
                                                }
#line 4857 "libs.globals.c"
                                                libs__globals__succeeded = (libs__globals__V_54_54 == (MR_Integer) 0);
#line 672 "globals.m"
                                                libs__globals__succeeded = !(libs__globals__succeeded);
#line 672 "globals.m"
                                                if (libs__globals__succeeded)
#line 672 "globals.m"
                                                  *libs__globals__HeadVar__1_1 = libs__globals__V_54_54;
#line 672 "globals.m"
                                                else
#line 672 "globals.m"
                                                  {
#line 672 "globals.m"
                                                    MR_Word libs__globals__V_55_55;

#line 672 "globals.m"
                                                    {
#line 672 "globals.m"
                                                      libs__globals____Compare____c_compiler_type_0_0(&libs__globals__V_55_55, libs__globals__V_15_15, libs__globals__V_35_35);
                                                    }
#line 4877 "libs.globals.c"
                                                    libs__globals__succeeded = (libs__globals__V_55_55 == (MR_Integer) 0);
#line 672 "globals.m"
                                                    libs__globals__succeeded = !(libs__globals__succeeded);
#line 672 "globals.m"
                                                    if (libs__globals__succeeded)
#line 672 "globals.m"
                                                      *libs__globals__HeadVar__1_1 = libs__globals__V_55_55;
#line 672 "globals.m"
                                                    else
#line 672 "globals.m"
                                                      {
#line 672 "globals.m"
                                                        MR_Word libs__globals__V_56_56;
#line 672 "globals.m"
                                                        MR_Integer libs__globals__V_99_99 = (MR_Integer) libs__globals__V_16_16;
#line 672 "globals.m"
                                                        MR_Integer libs__globals__V_100_100 = (MR_Integer) libs__globals__V_36_36;

#line 672 "globals.m"
                                                        {
#line 672 "globals.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_56_56, libs__globals__V_99_99, libs__globals__V_100_100);
                                                        }
#line 4901 "libs.globals.c"
                                                        libs__globals__succeeded = (libs__globals__V_56_56 == (MR_Integer) 0);
#line 672 "globals.m"
                                                        libs__globals__succeeded = !(libs__globals__succeeded);
#line 672 "globals.m"
                                                        if (libs__globals__succeeded)
#line 672 "globals.m"
                                                          *libs__globals__HeadVar__1_1 = libs__globals__V_56_56;
#line 672 "globals.m"
                                                        else
#line 672 "globals.m"
                                                          {
#line 672 "globals.m"
                                                            MR_Word libs__globals__V_57_57;

#line 672 "globals.m"
                                                            {
#line 672 "globals.m"
                                                              libs__globals____Compare____reuse_strategy_0_0(&libs__globals__V_57_57, libs__globals__V_17_17, libs__globals__V_37_37);
                                                            }
#line 4921 "libs.globals.c"
                                                            libs__globals__succeeded = (libs__globals__V_57_57 == (MR_Integer) 0);
#line 672 "globals.m"
                                                            libs__globals__succeeded = !(libs__globals__succeeded);
#line 672 "globals.m"
                                                            if (libs__globals__succeeded)
#line 672 "globals.m"
                                                              *libs__globals__HeadVar__1_1 = libs__globals__V_57_57;
#line 672 "globals.m"
                                                            else
#line 672 "globals.m"
                                                              {
#line 672 "globals.m"
                                                                MR_Word libs__globals__V_58_58;

#line 672 "globals.m"
                                                                {
#line 672 "globals.m"
                                                                  mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[4], &libs__globals__V_58_58, ((MR_Box) (libs__globals__V_18_18)), ((MR_Box) (libs__globals__V_38_38)));
                                                                }
#line 4941 "libs.globals.c"
                                                                libs__globals__succeeded = (libs__globals__V_58_58 == (MR_Integer) 0);
#line 672 "globals.m"
                                                                libs__globals__succeeded = !(libs__globals__succeeded);
#line 672 "globals.m"
                                                                if (libs__globals__succeeded)
#line 672 "globals.m"
                                                                  *libs__globals__HeadVar__1_1 = libs__globals__V_58_58;
#line 672 "globals.m"
                                                                else
#line 672 "globals.m"
                                                                  {
#line 672 "globals.m"
                                                                    MR_Word libs__globals__V_59_59;
#line 672 "globals.m"
                                                                    MR_Integer libs__globals__V_101_101 = (MR_Integer) libs__globals__V_19_19;
#line 672 "globals.m"
                                                                    MR_Integer libs__globals__V_102_102 = (MR_Integer) libs__globals__V_39_39;

#line 672 "globals.m"
                                                                    {
#line 672 "globals.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_59_59, libs__globals__V_101_101, libs__globals__V_102_102);
                                                                    }
#line 4965 "libs.globals.c"
                                                                    libs__globals__succeeded = (libs__globals__V_59_59 == (MR_Integer) 0);
#line 672 "globals.m"
                                                                    libs__globals__succeeded = !(libs__globals__succeeded);
#line 672 "globals.m"
                                                                    if (libs__globals__succeeded)
#line 672 "globals.m"
                                                                      *libs__globals__HeadVar__1_1 = libs__globals__V_59_59;
#line 672 "globals.m"
                                                                    else
#line 672 "globals.m"
                                                                      {
#line 672 "globals.m"
                                                                        MR_Word libs__globals__V_60_60;
#line 672 "globals.m"
                                                                        MR_Integer libs__globals__V_103_103 = (MR_Integer) libs__globals__V_20_20;
#line 672 "globals.m"
                                                                        MR_Integer libs__globals__V_104_104 = (MR_Integer) libs__globals__V_40_40;

#line 672 "globals.m"
                                                                        {
#line 672 "globals.m"
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_60_60, libs__globals__V_103_103, libs__globals__V_104_104);
                                                                        }
#line 4989 "libs.globals.c"
                                                                        libs__globals__succeeded = (libs__globals__V_60_60 == (MR_Integer) 0);
#line 672 "globals.m"
                                                                        libs__globals__succeeded = !(libs__globals__succeeded);
#line 672 "globals.m"
                                                                        if (libs__globals__succeeded)
#line 672 "globals.m"
                                                                          *libs__globals__HeadVar__1_1 = libs__globals__V_60_60;
#line 672 "globals.m"
                                                                        else
#line 672 "globals.m"
                                                                          {
#line 672 "globals.m"
                                                                            MR_Word libs__globals__V_61_61;
#line 672 "globals.m"
                                                                            MR_Integer libs__globals__V_105_105 = (MR_Integer) libs__globals__V_21_21;
#line 672 "globals.m"
                                                                            MR_Integer libs__globals__V_106_106 = (MR_Integer) libs__globals__V_41_41;

#line 672 "globals.m"
                                                                            {
#line 672 "globals.m"
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_61_61, libs__globals__V_105_105, libs__globals__V_106_106);
                                                                            }
#line 5013 "libs.globals.c"
                                                                            libs__globals__succeeded = (libs__globals__V_61_61 == (MR_Integer) 0);
#line 672 "globals.m"
                                                                            libs__globals__succeeded = !(libs__globals__succeeded);
#line 672 "globals.m"
                                                                            if (libs__globals__succeeded)
#line 672 "globals.m"
                                                                              *libs__globals__HeadVar__1_1 = libs__globals__V_61_61;
#line 672 "globals.m"
                                                                            else
#line 672 "globals.m"
                                                                              {
#line 672 "globals.m"
                                                                                MR_Word libs__globals__V_62_62;

#line 672 "globals.m"
                                                                                {
#line 672 "globals.m"
                                                                                  libs__globals____Compare____file_install_cmd_0_0(&libs__globals__V_62_62, libs__globals__V_22_22, libs__globals__V_42_42);
                                                                                }
#line 5033 "libs.globals.c"
                                                                                libs__globals__succeeded = (libs__globals__V_62_62 == (MR_Integer) 0);
#line 672 "globals.m"
                                                                                libs__globals__succeeded = !(libs__globals__succeeded);
#line 672 "globals.m"
                                                                                if (libs__globals__succeeded)
#line 672 "globals.m"
                                                                                  *libs__globals__HeadVar__1_1 = libs__globals__V_62_62;
#line 672 "globals.m"
                                                                                else
#line 672 "globals.m"
                                                                                  {
#line 672 "globals.m"
                                                                                    {
#line 672 "globals.m"
                                                                                      mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_2[1], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__V_23_23)), ((MR_Box) (libs__globals__V_43_43)));
#line 672 "globals.m"
                                                                                      return;
                                                                                    }
#line 672 "globals.m"
                                                                                  }
#line 672 "globals.m"
                                                                              }
#line 672 "globals.m"
                                                                          }
#line 672 "globals.m"
                                                                      }
#line 672 "globals.m"
                                                                  }
#line 672 "globals.m"
                                                              }
#line 672 "globals.m"
                                                          }
#line 672 "globals.m"
                                                      }
#line 672 "globals.m"
                                                  }
#line 672 "globals.m"
                                              }
#line 672 "globals.m"
                                          }
#line 672 "globals.m"
                                      }
#line 672 "globals.m"
                                  }
#line 672 "globals.m"
                              }
#line 672 "globals.m"
                          }
#line 672 "globals.m"
                      }
#line 672 "globals.m"
                  }
#line 672 "globals.m"
              }
#line 672 "globals.m"
          }
#line 672 "globals.m"
      }
#line 672 "globals.m"
  }
#line 672 "globals.m"
}

#line 672 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____globals_0_0(
#line 672 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 672 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 672 "globals.m"
{
#line 672 "globals.m"
  {
#line 672 "globals.m"
    MR_bool libs__globals__succeeded;
#line 672 "globals.m"
    MR_Integer libs__globals__CastX_43 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 672 "globals.m"
    MR_Integer libs__globals__CastY_44 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 672 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_43 == libs__globals__CastY_44);
#line 672 "globals.m"
    if (libs__globals__succeeded)
#line 672 "globals.m"
      libs__globals__succeeded = MR_TRUE;
#line 672 "globals.m"
    else
#line 672 "globals.m"
      {
#line 672 "globals.m"
        MR_Word libs__globals__TypeInfo_48_48;
#line 672 "globals.m"
        MR_Word libs__globals__TypeInfo_49_49;
#line 672 "globals.m"
        MR_Word libs__globals__TypeInfo_50_50;
#line 672 "globals.m"
        MR_Word libs__globals__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 672 "globals.m"
        MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)));
#line 672 "globals.m"
        MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 672 "globals.m"
        MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 672 "globals.m"
        MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 672 "globals.m"
        MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 672 "globals.m"
        MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 672 "globals.m"
        MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 672 "globals.m"
        MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 3)));
#line 672 "globals.m"
        MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 672 "globals.m"
        MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 672 "globals.m"
        MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 5)));
#line 672 "globals.m"
        MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 6)));
#line 672 "globals.m"
        MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 7)));
#line 672 "globals.m"
        MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 8)));
#line 672 "globals.m"
        MR_Word libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 672 "globals.m"
        MR_Word libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 672 "globals.m"
        MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 672 "globals.m"
        MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 10)));
#line 672 "globals.m"
        MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 11)));
#line 672 "globals.m"
        MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 672 "globals.m"
        MR_Word libs__globals__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 672 "globals.m"
        MR_Word libs__globals__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 672 "globals.m"
        MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 672 "globals.m"
        MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 672 "globals.m"
        MR_Word libs__globals__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 672 "globals.m"
        MR_Word libs__globals__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 672 "globals.m"
        MR_Word libs__globals__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 672 "globals.m"
        MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 3)));
#line 672 "globals.m"
        MR_Word libs__globals__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 672 "globals.m"
        MR_Word libs__globals__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 672 "globals.m"
        MR_Word libs__globals__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 5)));
#line 672 "globals.m"
        MR_Word libs__globals__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 6)));
#line 672 "globals.m"
        MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 7)));
#line 672 "globals.m"
        MR_Word libs__globals__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 8)));
#line 672 "globals.m"
        MR_Word libs__globals__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 672 "globals.m"
        MR_Word libs__globals__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 672 "globals.m"
        MR_Word libs__globals__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 672 "globals.m"
        MR_Word libs__globals__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 10)));
#line 672 "globals.m"
        MR_Word libs__globals__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 11)));

#line 5212 "libs.globals.c"
        {
#line 5214 "libs.globals.c"
          libs__globals__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__globals_scalar_common_2[0], ((MR_Box) (libs__globals__V_3_3)), ((MR_Box) (libs__globals__V_23_23)));
        }
#line 672 "globals.m"
        if (libs__globals__succeeded)
#line 672 "globals.m"
          {
#line 5221 "libs.globals.c"
            {
#line 5223 "libs.globals.c"
              libs__globals__succeeded = libs__op_mode____Unify____op_mode_0_0(libs__globals__V_4_4, libs__globals__V_24_24);
            }
#line 672 "globals.m"
            if (libs__globals__succeeded)
#line 672 "globals.m"
              {
#line 5230 "libs.globals.c"
                libs__globals__succeeded = (libs__globals__V_5_5 == libs__globals__V_25_25);
#line 672 "globals.m"
                if (libs__globals__succeeded)
#line 672 "globals.m"
                  {
#line 5236 "libs.globals.c"
                    libs__globals__succeeded = (libs__globals__V_6_6 == libs__globals__V_26_26);
#line 672 "globals.m"
                    if (libs__globals__succeeded)
#line 672 "globals.m"
                      {
#line 5242 "libs.globals.c"
                        libs__globals__succeeded = (libs__globals__V_7_7 == libs__globals__V_27_27);
#line 672 "globals.m"
                        if (libs__globals__succeeded)
#line 672 "globals.m"
                          {
#line 5248 "libs.globals.c"
                            libs__globals__succeeded = (libs__globals__V_8_8 == libs__globals__V_28_28);
#line 672 "globals.m"
                            if (libs__globals__succeeded)
#line 672 "globals.m"
                              {
#line 5254 "libs.globals.c"
                                libs__globals__succeeded = (libs__globals__V_9_9 == libs__globals__V_29_29);
#line 672 "globals.m"
                                if (libs__globals__succeeded)
#line 672 "globals.m"
                                  {
#line 5260 "libs.globals.c"
                                    {
#line 5262 "libs.globals.c"
                                      libs__globals__succeeded = libs__trace_params____Unify____trace_level_0_0(libs__globals__V_10_10, libs__globals__V_30_30);
                                    }
#line 672 "globals.m"
                                    if (libs__globals__succeeded)
#line 672 "globals.m"
                                      {
#line 5269 "libs.globals.c"
                                        libs__globals__TypeInfo_48_48 = (MR_Word) &libs__globals_scalar_common_1[3];
#line 5271 "libs.globals.c"
                                        {
#line 5273 "libs.globals.c"
                                          libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_48_48, ((MR_Box) (libs__globals__V_11_11)), ((MR_Box) (libs__globals__V_31_31)));
                                        }
#line 672 "globals.m"
                                        if (libs__globals__succeeded)
#line 672 "globals.m"
                                          {
#line 5280 "libs.globals.c"
                                            libs__globals__succeeded = (libs__globals__V_12_12 == libs__globals__V_32_32);
#line 672 "globals.m"
                                            if (libs__globals__succeeded)
#line 672 "globals.m"
                                              {
#line 5286 "libs.globals.c"
                                                libs__globals__succeeded = (libs__globals__V_13_13 == libs__globals__V_33_33);
#line 672 "globals.m"
                                                if (libs__globals__succeeded)
#line 672 "globals.m"
                                                  {
#line 5292 "libs.globals.c"
                                                    {
#line 5294 "libs.globals.c"
                                                      libs__globals__succeeded = libs__globals____Unify____c_compiler_type_0_0(libs__globals__V_14_14, libs__globals__V_34_34);
                                                    }
#line 672 "globals.m"
                                                    if (libs__globals__succeeded)
#line 672 "globals.m"
                                                      {
#line 5301 "libs.globals.c"
                                                        libs__globals__succeeded = (libs__globals__V_15_15 == libs__globals__V_35_35);
#line 672 "globals.m"
                                                        if (libs__globals__succeeded)
#line 672 "globals.m"
                                                          {
#line 5307 "libs.globals.c"
                                                            {
#line 5309 "libs.globals.c"
                                                              libs__globals__succeeded = libs__globals____Unify____reuse_strategy_0_0(libs__globals__V_16_16, libs__globals__V_36_36);
                                                            }
#line 672 "globals.m"
                                                            if (libs__globals__succeeded)
#line 672 "globals.m"
                                                              {
#line 5316 "libs.globals.c"
                                                                libs__globals__TypeInfo_49_49 = (MR_Word) &libs__globals_scalar_common_1[4];
#line 5318 "libs.globals.c"
                                                                {
#line 5320 "libs.globals.c"
                                                                  libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_49_49, ((MR_Box) (libs__globals__V_17_17)), ((MR_Box) (libs__globals__V_37_37)));
                                                                }
#line 672 "globals.m"
                                                                if (libs__globals__succeeded)
#line 672 "globals.m"
                                                                  {
#line 5327 "libs.globals.c"
                                                                    libs__globals__succeeded = (libs__globals__V_18_18 == libs__globals__V_38_38);
#line 672 "globals.m"
                                                                    if (libs__globals__succeeded)
#line 672 "globals.m"
                                                                      {
#line 5333 "libs.globals.c"
                                                                        libs__globals__succeeded = (libs__globals__V_19_19 == libs__globals__V_39_39);
#line 672 "globals.m"
                                                                        if (libs__globals__succeeded)
#line 672 "globals.m"
                                                                          {
#line 5339 "libs.globals.c"
                                                                            libs__globals__succeeded = (libs__globals__V_20_20 == libs__globals__V_40_40);
#line 672 "globals.m"
                                                                            if (libs__globals__succeeded)
#line 672 "globals.m"
                                                                              {
#line 5345 "libs.globals.c"
                                                                                {
#line 5347 "libs.globals.c"
                                                                                  libs__globals__succeeded = libs__globals____Unify____file_install_cmd_0_0(libs__globals__V_21_21, libs__globals__V_41_41);
                                                                                }
#line 672 "globals.m"
                                                                                if (libs__globals__succeeded)
#line 672 "globals.m"
                                                                                  {
#line 5354 "libs.globals.c"
                                                                                    libs__globals__TypeInfo_50_50 = (MR_Word) &libs__globals_scalar_common_2[1];
#line 5356 "libs.globals.c"
                                                                                    {
#line 5358 "libs.globals.c"
                                                                                      return libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_50_50, ((MR_Box) (libs__globals__V_22_22)), ((MR_Box) (libs__globals__V_42_42)));
                                                                                    }
#line 672 "globals.m"
                                                                                  }
#line 672 "globals.m"
                                                                              }
#line 672 "globals.m"
                                                                          }
#line 672 "globals.m"
                                                                      }
#line 672 "globals.m"
                                                                  }
#line 672 "globals.m"
                                                              }
#line 672 "globals.m"
                                                          }
#line 672 "globals.m"
                                                      }
#line 672 "globals.m"
                                                  }
#line 672 "globals.m"
                                              }
#line 672 "globals.m"
                                          }
#line 672 "globals.m"
                                      }
#line 672 "globals.m"
                                  }
#line 672 "globals.m"
                              }
#line 672 "globals.m"
                          }
#line 672 "globals.m"
                      }
#line 672 "globals.m"
                  }
#line 672 "globals.m"
              }
#line 672 "globals.m"
          }
#line 672 "globals.m"
      }
#line 672 "globals.m"
    return libs__globals__succeeded;
#line 672 "globals.m"
  }
#line 672 "globals.m"
}

#line 80 "globals.m"
void MR_CALL 
libs__globals____Compare____gc_method_0_0(
#line 80 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 80 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 80 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 80 "globals.m"
{
#line 80 "globals.m"
  {
#line 80 "globals.m"
    MR_bool libs__globals__succeeded;
#line 80 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 80 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 80 "globals.m"
    {
#line 80 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 80 "globals.m"
      return;
    }
#line 80 "globals.m"
  }
#line 80 "globals.m"
}

#line 80 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____gc_method_0_0(
#line 80 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 80 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 80 "globals.m"
{
#line 5449 "libs.globals.c"
  {
#line 5451 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 5454 "libs.globals.c"
    return libs__globals__succeeded;
#line 5456 "libs.globals.c"
  }
#line 80 "globals.m"
}

#line 49 "globals.m"
void MR_CALL 
libs__globals____Compare____foreign_language_0_0(
#line 49 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 49 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 49 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 49 "globals.m"
{
#line 49 "globals.m"
  {
#line 49 "globals.m"
    MR_bool libs__globals__succeeded;
#line 49 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 49 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 49 "globals.m"
    {
#line 49 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 49 "globals.m"
      return;
    }
#line 49 "globals.m"
  }
#line 49 "globals.m"
}

#line 49 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____foreign_language_0_0(
#line 49 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 49 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 49 "globals.m"
{
#line 5502 "libs.globals.c"
  {
#line 5504 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 5507 "libs.globals.c"
    return libs__globals__succeeded;
#line 5509 "libs.globals.c"
  }
#line 49 "globals.m"
}

#line 197 "globals.m"
void MR_CALL 
libs__globals____Compare____file_install_cmd_0_0(
#line 197 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 197 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 197 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 197 "globals.m"
{
#line 197 "globals.m"
  {
#line 197 "globals.m"
    MR_bool libs__globals__succeeded;
#line 197 "globals.m"
    MR_Integer libs__globals__CastX_13 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 197 "globals.m"
    MR_Integer libs__globals__CastY_14 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 197 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_13 == libs__globals__CastY_14);
#line 197 "globals.m"
    if (libs__globals__succeeded)
#line 5538 "libs.globals.c"
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 197 "globals.m"
    else
#line 197 "globals.m"
    if ((libs__globals__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 197 "globals.m"
      if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 197 "globals.m"
        *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 197 "globals.m"
      else
#line 5550 "libs.globals.c"
        *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 197 "globals.m"
    else
#line 197 "globals.m"
      {
#line 197 "globals.m"
        MR_String libs__globals__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 197 "globals.m"
        MR_String libs__globals__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));

#line 197 "globals.m"
        if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5563 "libs.globals.c"
          *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 197 "globals.m"
        else
#line 197 "globals.m"
          {
#line 197 "globals.m"
            MR_String libs__globals__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 0)));
#line 197 "globals.m"
            MR_String libs__globals__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 1)));
#line 197 "globals.m"
            MR_Word libs__globals__V_8_8;

#line 197 "globals.m"
            {
#line 197 "globals.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&libs__globals__V_8_8, libs__globals__V_18_18, libs__globals__V_6_6);
            }
#line 5581 "libs.globals.c"
            libs__globals__succeeded = (libs__globals__V_8_8 == (MR_Integer) 0);
#line 197 "globals.m"
            libs__globals__succeeded = !(libs__globals__succeeded);
#line 197 "globals.m"
            if (libs__globals__succeeded)
#line 197 "globals.m"
              *libs__globals__HeadVar__1_1 = libs__globals__V_8_8;
#line 197 "globals.m"
            else
#line 197 "globals.m"
              {
#line 197 "globals.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(libs__globals__HeadVar__1_1, libs__globals__V_17_17, libs__globals__V_7_7);
#line 197 "globals.m"
                return;
              }
#line 197 "globals.m"
          }
#line 197 "globals.m"
      }
#line 197 "globals.m"
  }
#line 197 "globals.m"
}

#line 197 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____file_install_cmd_0_0(
#line 197 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 197 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 197 "globals.m"
{
#line 197 "globals.m"
  {
#line 197 "globals.m"
    MR_bool libs__globals__succeeded;
#line 197 "globals.m"
    MR_Integer libs__globals__CastX_9 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 197 "globals.m"
    MR_Integer libs__globals__CastY_10 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 197 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_9 == libs__globals__CastY_10);
#line 197 "globals.m"
    if (libs__globals__succeeded)
#line 197 "globals.m"
      libs__globals__succeeded = MR_TRUE;
#line 197 "globals.m"
    else
#line 197 "globals.m"
    if ((libs__globals__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 197 "globals.m"
      {
#line 197 "globals.m"
        MR_Integer libs__globals__CastX_7 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 197 "globals.m"
        MR_Integer libs__globals__CastY_8 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 197 "globals.m"
        libs__globals__succeeded = (libs__globals__CastY_8 == libs__globals__CastX_7);
#line 197 "globals.m"
      }
#line 197 "globals.m"
    else
#line 197 "globals.m"
      {
#line 197 "globals.m"
        MR_String libs__globals__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 197 "globals.m"
        MR_String libs__globals__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 1)));
#line 197 "globals.m"
        MR_String libs__globals__V_5_5;
#line 197 "globals.m"
        MR_String libs__globals__V_6_6;

#line 197 "globals.m"
        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 197 "globals.m"
        if (libs__globals__succeeded)
#line 197 "globals.m"
          {
#line 197 "globals.m"
            libs__globals__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 197 "globals.m"
            libs__globals__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 5669 "libs.globals.c"
            libs__globals__succeeded = (strcmp(libs__globals__V_3_3, libs__globals__V_5_5) == 0);
#line 197 "globals.m"
            if (libs__globals__succeeded)
#line 5673 "libs.globals.c"
              libs__globals__succeeded = (strcmp(libs__globals__V_4_4, libs__globals__V_6_6) == 0);
#line 197 "globals.m"
          }
#line 197 "globals.m"
      }
#line 197 "globals.m"
    return libs__globals__succeeded;
#line 197 "globals.m"
  }
#line 197 "globals.m"
}

#line 165 "globals.m"
void MR_CALL 
libs__globals____Compare____env_type_0_0(
#line 165 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 165 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 165 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 165 "globals.m"
{
#line 165 "globals.m"
  {
#line 165 "globals.m"
    MR_bool libs__globals__succeeded;
#line 165 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 165 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 165 "globals.m"
    {
#line 165 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 165 "globals.m"
      return;
    }
#line 165 "globals.m"
  }
#line 165 "globals.m"
}

#line 165 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____env_type_0_0(
#line 165 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 165 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 165 "globals.m"
{
#line 5727 "libs.globals.c"
  {
#line 5729 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 5732 "libs.globals.c"
    return libs__globals__succeeded;
#line 5734 "libs.globals.c"
  }
#line 165 "globals.m"
}

#line 140 "globals.m"
void MR_CALL 
libs__globals____Compare____csharp_compiler_type_0_0(
#line 140 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 140 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 140 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 140 "globals.m"
{
#line 140 "globals.m"
  {
#line 140 "globals.m"
    MR_bool libs__globals__succeeded;
#line 140 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 140 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 140 "globals.m"
    {
#line 140 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 140 "globals.m"
      return;
    }
#line 140 "globals.m"
  }
#line 140 "globals.m"
}

#line 140 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____csharp_compiler_type_0_0(
#line 140 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 140 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 140 "globals.m"
{
#line 5780 "libs.globals.c"
  {
#line 5782 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 5785 "libs.globals.c"
    return libs__globals__succeeded;
#line 5787 "libs.globals.c"
  }
#line 140 "globals.m"
}

#line 41 "globals.m"
void MR_CALL 
libs__globals____Compare____compilation_target_0_0(
#line 41 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 41 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 41 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 41 "globals.m"
{
#line 41 "globals.m"
  {
#line 41 "globals.m"
    MR_bool libs__globals__succeeded;
#line 41 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 41 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 41 "globals.m"
    {
#line 41 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 41 "globals.m"
      return;
    }
#line 41 "globals.m"
  }
#line 41 "globals.m"
}

#line 41 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____compilation_target_0_0(
#line 41 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 41 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 41 "globals.m"
{
#line 5833 "libs.globals.c"
  {
#line 5835 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 5838 "libs.globals.c"
    return libs__globals__succeeded;
#line 5840 "libs.globals.c"
  }
#line 41 "globals.m"
}

#line 146 "globals.m"
void MR_CALL 
libs__globals____Compare____clang_version_0_0(
#line 146 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 146 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 146 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 146 "globals.m"
{
#line 146 "globals.m"
  {
#line 146 "globals.m"
    MR_bool libs__globals__succeeded;
#line 146 "globals.m"
    MR_Integer libs__globals__CastX_12 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 146 "globals.m"
    MR_Integer libs__globals__CastY_13 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 146 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_12 == libs__globals__CastY_13);
#line 146 "globals.m"
    if (libs__globals__succeeded)
#line 5869 "libs.globals.c"
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 146 "globals.m"
    else
#line 146 "globals.m"
      {
#line 146 "globals.m"
        MR_Integer libs__globals__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 146 "globals.m"
        MR_Integer libs__globals__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 146 "globals.m"
        MR_Integer libs__globals__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)));
#line 146 "globals.m"
        MR_Integer libs__globals__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 0)));
#line 146 "globals.m"
        MR_Integer libs__globals__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)));
#line 146 "globals.m"
        MR_Integer libs__globals__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 2)));
#line 146 "globals.m"
        MR_Word libs__globals__V_10_10;

#line 146 "globals.m"
        {
#line 146 "globals.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_10_10, libs__globals__V_4_4, libs__globals__V_7_7);
        }
#line 5895 "libs.globals.c"
        libs__globals__succeeded = (libs__globals__V_10_10 == (MR_Integer) 0);
#line 146 "globals.m"
        libs__globals__succeeded = !(libs__globals__succeeded);
#line 146 "globals.m"
        if (libs__globals__succeeded)
#line 146 "globals.m"
          *libs__globals__HeadVar__1_1 = libs__globals__V_10_10;
#line 146 "globals.m"
        else
#line 146 "globals.m"
          {
#line 146 "globals.m"
            MR_Word libs__globals__V_11_11;

#line 146 "globals.m"
            {
#line 146 "globals.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_11_11, libs__globals__V_5_5, libs__globals__V_8_8);
            }
#line 5915 "libs.globals.c"
            libs__globals__succeeded = (libs__globals__V_11_11 == (MR_Integer) 0);
#line 146 "globals.m"
            libs__globals__succeeded = !(libs__globals__succeeded);
#line 146 "globals.m"
            if (libs__globals__succeeded)
#line 146 "globals.m"
              *libs__globals__HeadVar__1_1 = libs__globals__V_11_11;
#line 146 "globals.m"
            else
#line 146 "globals.m"
              {
#line 146 "globals.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__V_6_6, libs__globals__V_9_9);
#line 146 "globals.m"
                return;
              }
#line 146 "globals.m"
          }
#line 146 "globals.m"
      }
#line 146 "globals.m"
  }
#line 146 "globals.m"
}

#line 146 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____clang_version_0_0(
#line 146 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 146 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 146 "globals.m"
{
#line 146 "globals.m"
  {
#line 146 "globals.m"
    MR_bool libs__globals__succeeded;
#line 146 "globals.m"
    MR_Integer libs__globals__CastX_9 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 146 "globals.m"
    MR_Integer libs__globals__CastY_10 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 146 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_9 == libs__globals__CastY_10);
#line 146 "globals.m"
    if (libs__globals__succeeded)
#line 146 "globals.m"
      libs__globals__succeeded = MR_TRUE;
#line 146 "globals.m"
    else
#line 146 "globals.m"
      {
#line 146 "globals.m"
        MR_Integer libs__globals__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 146 "globals.m"
        MR_Integer libs__globals__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)));
#line 146 "globals.m"
        MR_Integer libs__globals__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 2)));
#line 146 "globals.m"
        MR_Integer libs__globals__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 146 "globals.m"
        MR_Integer libs__globals__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 146 "globals.m"
        MR_Integer libs__globals__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)));

#line 5982 "libs.globals.c"
        libs__globals__succeeded = (libs__globals__V_3_3 == libs__globals__V_6_6);
#line 146 "globals.m"
        if (libs__globals__succeeded)
#line 146 "globals.m"
          {
#line 5988 "libs.globals.c"
            libs__globals__succeeded = (libs__globals__V_4_4 == libs__globals__V_7_7);
#line 146 "globals.m"
            if (libs__globals__succeeded)
#line 5992 "libs.globals.c"
              libs__globals__succeeded = (libs__globals__V_5_5 == libs__globals__V_8_8);
#line 146 "globals.m"
          }
#line 146 "globals.m"
      }
#line 146 "globals.m"
    return libs__globals__succeeded;
#line 146 "globals.m"
  }
#line 146 "globals.m"
}

#line 122 "globals.m"
void MR_CALL 
libs__globals____Compare____c_compiler_type_0_0(
#line 122 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 122 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 122 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 122 "globals.m"
{
#line 122 "globals.m"
  {
#line 122 "globals.m"
    MR_bool libs__globals__succeeded;
#line 122 "globals.m"
    MR_Integer libs__globals__CastX_46 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 122 "globals.m"
    MR_Integer libs__globals__CastY_47 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 122 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_46 == libs__globals__CastY_47);
#line 122 "globals.m"
    if (libs__globals__succeeded)
#line 6029 "libs.globals.c"
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 122 "globals.m"
    else
#line 122 "globals.m"
#line 122 "globals.m"
      switch (MR_tag((MR_Word) libs__globals__HeadVar__2_2)) {
#line 122 "globals.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 122 "globals.m"
        case (MR_Integer) 0:
#line 122 "globals.m"
#line 122 "globals.m"
          switch (MR_tag((MR_Word) libs__globals__HeadVar__3_3)) {
#line 122 "globals.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 122 "globals.m"
            case (MR_Integer) 0:
#line 122 "globals.m"
              *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 122 "globals.m"
              break;
#line 122 "globals.m"
            case (MR_Integer) 1:
#line 6053 "libs.globals.c"
              *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 122 "globals.m"
              break;
#line 122 "globals.m"
            case (MR_Integer) 2:
#line 6059 "libs.globals.c"
              *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 122 "globals.m"
              break;
#line 122 "globals.m"
            case (MR_Integer) 3:
#line 6065 "libs.globals.c"
              *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 122 "globals.m"
              break;
#line 122 "globals.m"
          }
#line 122 "globals.m"
          break;
#line 122 "globals.m"
        case (MR_Integer) 1:
#line 122 "globals.m"
          {
#line 122 "globals.m"
            MR_Word libs__globals__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 2)));
#line 122 "globals.m"
            MR_Word libs__globals__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 122 "globals.m"
            MR_Word libs__globals__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));

#line 122 "globals.m"
#line 122 "globals.m"
            switch (MR_tag((MR_Word) libs__globals__HeadVar__3_3)) {
#line 122 "globals.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 122 "globals.m"
              case (MR_Integer) 0:
#line 6091 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 122 "globals.m"
                break;
#line 122 "globals.m"
              case (MR_Integer) 1:
#line 122 "globals.m"
                {
#line 122 "globals.m"
                  MR_Word libs__globals__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 0)));
#line 122 "globals.m"
                  MR_Word libs__globals__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 1)));
#line 122 "globals.m"
                  MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 2)));
#line 122 "globals.m"
                  MR_Word libs__globals__V_10_10;

#line 122 "globals.m"
                  {
#line 122 "globals.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[1], &libs__globals__V_10_10, ((MR_Box) (libs__globals__V_57_57)), ((MR_Box) (libs__globals__V_7_7)));
                  }
#line 6113 "libs.globals.c"
                  libs__globals__succeeded = (libs__globals__V_10_10 == (MR_Integer) 0);
#line 122 "globals.m"
                  libs__globals__succeeded = !(libs__globals__succeeded);
#line 122 "globals.m"
                  if (libs__globals__succeeded)
#line 122 "globals.m"
                    *libs__globals__HeadVar__1_1 = libs__globals__V_10_10;
#line 122 "globals.m"
                  else
#line 122 "globals.m"
                    {
#line 122 "globals.m"
                      MR_Word libs__globals__V_11_11;

#line 122 "globals.m"
                      {
#line 122 "globals.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[1], &libs__globals__V_11_11, ((MR_Box) (libs__globals__V_56_56)), ((MR_Box) (libs__globals__V_8_8)));
                      }
#line 6133 "libs.globals.c"
                      libs__globals__succeeded = (libs__globals__V_11_11 == (MR_Integer) 0);
#line 122 "globals.m"
                      libs__globals__succeeded = !(libs__globals__succeeded);
#line 122 "globals.m"
                      if (libs__globals__succeeded)
#line 122 "globals.m"
                        *libs__globals__HeadVar__1_1 = libs__globals__V_11_11;
#line 122 "globals.m"
                      else
#line 122 "globals.m"
                        {
#line 122 "globals.m"
                          {
#line 122 "globals.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[1], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__V_55_55)), ((MR_Box) (libs__globals__V_9_9)));
#line 122 "globals.m"
                            return;
                          }
#line 122 "globals.m"
                        }
#line 122 "globals.m"
                    }
#line 122 "globals.m"
                }
#line 122 "globals.m"
                break;
#line 122 "globals.m"
              case (MR_Integer) 2:
#line 6162 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 122 "globals.m"
                break;
#line 122 "globals.m"
              case (MR_Integer) 3:
#line 6168 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 122 "globals.m"
                break;
#line 122 "globals.m"
            }
#line 122 "globals.m"
          }
#line 122 "globals.m"
          break;
#line 122 "globals.m"
        case (MR_Integer) 2:
#line 122 "globals.m"
          {
#line 122 "globals.m"
            MR_Word libs__globals__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__globals__HeadVar__2_2, (MR_Integer) 0)));

#line 122 "globals.m"
#line 122 "globals.m"
            switch (MR_tag((MR_Word) libs__globals__HeadVar__3_3)) {
#line 122 "globals.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 122 "globals.m"
              case (MR_Integer) 0:
#line 6192 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 122 "globals.m"
                break;
#line 122 "globals.m"
              case (MR_Integer) 1:
#line 6198 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 122 "globals.m"
                break;
#line 122 "globals.m"
              case (MR_Integer) 2:
#line 122 "globals.m"
                {
#line 122 "globals.m"
                  MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__globals__HeadVar__3_3, (MR_Integer) 0)));

#line 122 "globals.m"
                  {
#line 122 "globals.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[2], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__V_54_54)), ((MR_Box) (libs__globals__V_28_28)));
#line 122 "globals.m"
                    return;
                  }
#line 122 "globals.m"
                }
#line 122 "globals.m"
                break;
#line 122 "globals.m"
              case (MR_Integer) 3:
#line 6222 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 122 "globals.m"
                break;
#line 122 "globals.m"
            }
#line 122 "globals.m"
          }
#line 122 "globals.m"
          break;
#line 122 "globals.m"
        case (MR_Integer) 3:
#line 122 "globals.m"
          {
#line 122 "globals.m"
            MR_Word libs__globals__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__HeadVar__2_2, (MR_Integer) 0)));

#line 122 "globals.m"
#line 122 "globals.m"
            switch (MR_tag((MR_Word) libs__globals__HeadVar__3_3)) {
#line 122 "globals.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 122 "globals.m"
              case (MR_Integer) 0:
#line 6246 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 122 "globals.m"
                break;
#line 122 "globals.m"
              case (MR_Integer) 1:
#line 6252 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 122 "globals.m"
                break;
#line 122 "globals.m"
              case (MR_Integer) 2:
#line 6258 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 122 "globals.m"
                break;
#line 122 "globals.m"
              case (MR_Integer) 3:
#line 122 "globals.m"
                {
#line 122 "globals.m"
                  MR_Word libs__globals__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__HeadVar__3_3, (MR_Integer) 0)));

#line 122 "globals.m"
                  {
#line 122 "globals.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[1], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__V_53_53)), ((MR_Box) (libs__globals__V_39_39)));
#line 122 "globals.m"
                    return;
                  }
#line 122 "globals.m"
                }
#line 122 "globals.m"
                break;
#line 122 "globals.m"
            }
#line 122 "globals.m"
          }
#line 122 "globals.m"
          break;
#line 122 "globals.m"
      }
#line 122 "globals.m"
  }
#line 122 "globals.m"
}

#line 122 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____c_compiler_type_0_0(
#line 122 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 122 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 122 "globals.m"
{
#line 122 "globals.m"
  {
#line 122 "globals.m"
    MR_bool libs__globals__succeeded;
#line 122 "globals.m"
    MR_Integer libs__globals__CastX_15 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 122 "globals.m"
    MR_Integer libs__globals__CastY_16 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 122 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_15 == libs__globals__CastY_16);
#line 122 "globals.m"
    if (libs__globals__succeeded)
#line 122 "globals.m"
      libs__globals__succeeded = MR_TRUE;
#line 122 "globals.m"
    else
#line 122 "globals.m"
#line 122 "globals.m"
      switch (MR_tag((MR_Word) libs__globals__HeadVar__1_1)) {
#line 122 "globals.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 122 "globals.m"
        case (MR_Integer) 0:
#line 122 "globals.m"
          {
#line 122 "globals.m"
            MR_Integer libs__globals__CastX_13 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 122 "globals.m"
            MR_Integer libs__globals__CastY_14 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 122 "globals.m"
            libs__globals__succeeded = (libs__globals__CastY_14 == libs__globals__CastX_13);
#line 122 "globals.m"
          }
#line 122 "globals.m"
          break;
#line 122 "globals.m"
        case (MR_Integer) 1:
#line 122 "globals.m"
          {
#line 122 "globals.m"
            MR_Word libs__globals__TypeInfo_19_19;
#line 122 "globals.m"
            MR_Word libs__globals__TypeInfo_20_20;
#line 122 "globals.m"
            MR_Word libs__globals__TypeInfo_21_21;
#line 122 "globals.m"
            MR_Word libs__globals__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 122 "globals.m"
            MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 1)));
#line 122 "globals.m"
            MR_Word libs__globals__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 2)));
#line 122 "globals.m"
            MR_Word libs__globals__V_6_6;
#line 122 "globals.m"
            MR_Word libs__globals__V_7_7;
#line 122 "globals.m"
            MR_Word libs__globals__V_8_8;

#line 122 "globals.m"
            libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 122 "globals.m"
            if (libs__globals__succeeded)
#line 122 "globals.m"
              {
#line 122 "globals.m"
                libs__globals__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 122 "globals.m"
                libs__globals__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 122 "globals.m"
                libs__globals__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 2)));
#line 6374 "libs.globals.c"
                libs__globals__TypeInfo_19_19 = (MR_Word) &libs__globals_scalar_common_1[1];
#line 6376 "libs.globals.c"
                {
#line 6378 "libs.globals.c"
                  libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_19_19, ((MR_Box) (libs__globals__V_3_3)), ((MR_Box) (libs__globals__V_6_6)));
                }
#line 122 "globals.m"
                if (libs__globals__succeeded)
#line 122 "globals.m"
                  {
#line 6385 "libs.globals.c"
                    libs__globals__TypeInfo_20_20 = (MR_Word) &libs__globals_scalar_common_1[1];
#line 6387 "libs.globals.c"
                    {
#line 6389 "libs.globals.c"
                      libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_20_20, ((MR_Box) (libs__globals__V_4_4)), ((MR_Box) (libs__globals__V_7_7)));
                    }
#line 122 "globals.m"
                    if (libs__globals__succeeded)
#line 122 "globals.m"
                      {
#line 6396 "libs.globals.c"
                        libs__globals__TypeInfo_21_21 = (MR_Word) &libs__globals_scalar_common_1[1];
#line 6398 "libs.globals.c"
                        {
#line 6400 "libs.globals.c"
                          return libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_21_21, ((MR_Box) (libs__globals__V_5_5)), ((MR_Box) (libs__globals__V_8_8)));
                        }
#line 122 "globals.m"
                      }
#line 122 "globals.m"
                  }
#line 122 "globals.m"
              }
#line 122 "globals.m"
          }
#line 122 "globals.m"
          break;
#line 122 "globals.m"
        case (MR_Integer) 2:
#line 122 "globals.m"
          {
#line 122 "globals.m"
            MR_Word libs__globals__TypeInfo_18_18;
#line 122 "globals.m"
            MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 122 "globals.m"
            MR_Word libs__globals__V_10_10;

#line 122 "globals.m"
            libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 122 "globals.m"
            if (libs__globals__succeeded)
#line 122 "globals.m"
              {
#line 122 "globals.m"
                libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 6432 "libs.globals.c"
                libs__globals__TypeInfo_18_18 = (MR_Word) &libs__globals_scalar_common_1[2];
#line 6434 "libs.globals.c"
                {
#line 6436 "libs.globals.c"
                  return libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_18_18, ((MR_Box) (libs__globals__V_9_9)), ((MR_Box) (libs__globals__V_10_10)));
                }
#line 122 "globals.m"
              }
#line 122 "globals.m"
          }
#line 122 "globals.m"
          break;
#line 122 "globals.m"
        case (MR_Integer) 3:
#line 122 "globals.m"
          {
#line 122 "globals.m"
            MR_Word libs__globals__TypeInfo_17_17;
#line 122 "globals.m"
            MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 122 "globals.m"
            MR_Word libs__globals__V_12_12;

#line 122 "globals.m"
            libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 122 "globals.m"
            if (libs__globals__succeeded)
#line 122 "globals.m"
              {
#line 122 "globals.m"
                libs__globals__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 6464 "libs.globals.c"
                libs__globals__TypeInfo_17_17 = (MR_Word) &libs__globals_scalar_common_1[1];
#line 6466 "libs.globals.c"
                {
#line 6468 "libs.globals.c"
                  return libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_17_17, ((MR_Box) (libs__globals__V_11_11)), ((MR_Box) (libs__globals__V_12_12)));
                }
#line 122 "globals.m"
              }
#line 122 "globals.m"
          }
#line 122 "globals.m"
          break;
#line 122 "globals.m"
      }
#line 122 "globals.m"
    return libs__globals__succeeded;
#line 122 "globals.m"
  }
#line 122 "globals.m"
}

#line 953 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_maybe_source_file_map_1_p_0(
#line 953 "globals.m"
  MR_Word libs__globals__X_1)
#line 953 "globals.m"
{
#line 953 "globals.m"
  {
#line 953 "globals.m"
    MR_bool libs__globals__succeeded;

#line 953 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_set_maybe_source_file_map_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 953 "globals.m"
libs__globals__mutable_variable_maybe_source_file_map = X;

#line 6509 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 953 "globals.m"
}
#line 953 "globals.m"
  }
#line 953 "globals.m"
}

#line 953 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_maybe_source_file_map_1_p_0(
#line 953 "globals.m"
  MR_Word * libs__globals__X_1)
#line 953 "globals.m"
{
#line 953 "globals.m"
  {
#line 953 "globals.m"
    MR_bool libs__globals__succeeded;

#line 953 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_get_maybe_source_file_map_1_p_0

	MR_Word X;

		{
#line 953 "globals.m"
X = libs__globals__mutable_variable_maybe_source_file_map;

#line 6542 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
#line 953 "globals.m"
}
#line 953 "globals.m"
  }
#line 953 "globals.m"
}

#line 953 "globals.m"
static void MR_CALL 
libs__globals__unlock_maybe_source_file_map_0_p_0(void)
#line 953 "globals.m"
{
#line 953 "globals.m"
  {
#line 953 "globals.m"
    MR_bool libs__globals__succeeded;

#line 953 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_maybe_source_file_map_0_p_0


		{
#line 953 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                    "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 6576 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 953 "globals.m"
}
#line 953 "globals.m"
  }
#line 953 "globals.m"
}

#line 953 "globals.m"
static void MR_CALL 
libs__globals__lock_maybe_source_file_map_0_p_0(void)
#line 953 "globals.m"
{
#line 953 "globals.m"
  {
#line 953 "globals.m"
    MR_bool libs__globals__succeeded;

#line 953 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_maybe_source_file_map_0_p_0


		{
#line 953 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                    "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 6609 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 953 "globals.m"
}
#line 953 "globals.m"
  }
#line 953 "globals.m"
}

#line 953 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_maybe_source_file_map_0_p_0(void)
#line 953 "globals.m"
{
#line 953 "globals.m"
  {
#line 953 "globals.m"
    MR_bool libs__globals__succeeded;

#line 953 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_source_file_map_0_p_0


		{
#line 953 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_maybe_source_file_map_lock, MR_MUTEX_ATTR);
#endif

#line 6641 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 953 "globals.m"
}
#line 953 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_source_file_map_0_p_0


		{
#line 953 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                    "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 6659 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 953 "globals.m"
}
#line 953 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_source_file_map_0_p_0

	MR_Word X;

	X =  (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) ;
		{
#line 953 "globals.m"
libs__globals__mutable_variable_maybe_source_file_map = X;

#line 6676 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 953 "globals.m"
}
#line 953 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_source_file_map_0_p_0


		{
#line 953 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                    "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 6694 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 953 "globals.m"
}
#line 953 "globals.m"
  }
#line 953 "globals.m"
}

#line 953 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_maybe_source_file_map_0_p_0(void)
#line 953 "globals.m"
{
#line 953 "globals.m"
  {
#line 953 "globals.m"
    MR_bool libs__globals__succeeded;

#line 953 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_maybe_source_file_map_0_p_0


		{
#line 953 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_maybe_source_file_map_lock, MR_MUTEX_ATTR);
#endif

#line 6726 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 953 "globals.m"
}
#line 953 "globals.m"
  }
#line 953 "globals.m"
}

#line 950 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_disable_generate_item_version_numbers_1_p_0(
#line 950 "globals.m"
  MR_Word libs__globals__X_1)
#line 950 "globals.m"
{
#line 950 "globals.m"
  {
#line 950 "globals.m"
    MR_bool libs__globals__succeeded;

#line 950 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_set_disable_generate_item_version_numbers_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 950 "globals.m"
libs__globals__mutable_variable_disable_generate_item_version_numbers = X;

#line 6760 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 950 "globals.m"
}
#line 950 "globals.m"
  }
#line 950 "globals.m"
}

#line 950 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_disable_generate_item_version_numbers_1_p_0(
#line 950 "globals.m"
  MR_Word * libs__globals__X_1)
#line 950 "globals.m"
{
#line 950 "globals.m"
  {
#line 950 "globals.m"
    MR_bool libs__globals__succeeded;

#line 950 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_get_disable_generate_item_version_numbers_1_p_0

	MR_Word X;

		{
#line 950 "globals.m"
X = libs__globals__mutable_variable_disable_generate_item_version_numbers;

#line 6793 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
#line 950 "globals.m"
}
#line 950 "globals.m"
  }
#line 950 "globals.m"
}

#line 950 "globals.m"
static void MR_CALL 
libs__globals__unlock_disable_generate_item_version_numbers_0_p_0(void)
#line 950 "globals.m"
{
#line 950 "globals.m"
  {
#line 950 "globals.m"
    MR_bool libs__globals__succeeded;

#line 950 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_disable_generate_item_version_numbers_0_p_0


		{
#line 950 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                    "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 6827 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 950 "globals.m"
}
#line 950 "globals.m"
  }
#line 950 "globals.m"
}

#line 950 "globals.m"
static void MR_CALL 
libs__globals__lock_disable_generate_item_version_numbers_0_p_0(void)
#line 950 "globals.m"
{
#line 950 "globals.m"
  {
#line 950 "globals.m"
    MR_bool libs__globals__succeeded;

#line 950 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_disable_generate_item_version_numbers_0_p_0


		{
#line 950 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                    "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 6860 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 950 "globals.m"
}
#line 950 "globals.m"
  }
#line 950 "globals.m"
}

#line 950 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0(void)
#line 950 "globals.m"
{
#line 950 "globals.m"
  {
#line 950 "globals.m"
    MR_bool libs__globals__succeeded;

#line 950 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0


		{
#line 950 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock, MR_MUTEX_ATTR);
#endif

#line 6892 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 950 "globals.m"
}
#line 950 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0


		{
#line 950 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                    "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 6910 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 950 "globals.m"
}
#line 950 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 950 "globals.m"
libs__globals__mutable_variable_disable_generate_item_version_numbers = X;

#line 6927 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 950 "globals.m"
}
#line 950 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0


		{
#line 950 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                    "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 6945 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 950 "globals.m"
}
#line 950 "globals.m"
  }
#line 950 "globals.m"
}

#line 950 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_disable_generate_item_version_numbers_0_p_0(void)
#line 950 "globals.m"
{
#line 950 "globals.m"
  {
#line 950 "globals.m"
    MR_bool libs__globals__succeeded;

#line 950 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_disable_generate_item_version_numbers_0_p_0


		{
#line 950 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock, MR_MUTEX_ATTR);
#endif

#line 6977 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 950 "globals.m"
}
#line 950 "globals.m"
  }
#line 950 "globals.m"
}

#line 947 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_disable_smart_recompilation_1_p_0(
#line 947 "globals.m"
  MR_Word libs__globals__X_1)
#line 947 "globals.m"
{
#line 947 "globals.m"
  {
#line 947 "globals.m"
    MR_bool libs__globals__succeeded;

#line 947 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_set_disable_smart_recompilation_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 947 "globals.m"
libs__globals__mutable_variable_disable_smart_recompilation = X;

#line 7011 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 947 "globals.m"
}
#line 947 "globals.m"
  }
#line 947 "globals.m"
}

#line 947 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_disable_smart_recompilation_1_p_0(
#line 947 "globals.m"
  MR_Word * libs__globals__X_1)
#line 947 "globals.m"
{
#line 947 "globals.m"
  {
#line 947 "globals.m"
    MR_bool libs__globals__succeeded;

#line 947 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_get_disable_smart_recompilation_1_p_0

	MR_Word X;

		{
#line 947 "globals.m"
X = libs__globals__mutable_variable_disable_smart_recompilation;

#line 7044 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
#line 947 "globals.m"
}
#line 947 "globals.m"
  }
#line 947 "globals.m"
}

#line 947 "globals.m"
static void MR_CALL 
libs__globals__unlock_disable_smart_recompilation_0_p_0(void)
#line 947 "globals.m"
{
#line 947 "globals.m"
  {
#line 947 "globals.m"
    MR_bool libs__globals__succeeded;

#line 947 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_disable_smart_recompilation_0_p_0


		{
#line 947 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                    "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 7078 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 947 "globals.m"
}
#line 947 "globals.m"
  }
#line 947 "globals.m"
}

#line 947 "globals.m"
static void MR_CALL 
libs__globals__lock_disable_smart_recompilation_0_p_0(void)
#line 947 "globals.m"
{
#line 947 "globals.m"
  {
#line 947 "globals.m"
    MR_bool libs__globals__succeeded;

#line 947 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_disable_smart_recompilation_0_p_0


		{
#line 947 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                    "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 7111 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 947 "globals.m"
}
#line 947 "globals.m"
  }
#line 947 "globals.m"
}

#line 947 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0(void)
#line 947 "globals.m"
{
#line 947 "globals.m"
  {
#line 947 "globals.m"
    MR_bool libs__globals__succeeded;

#line 947 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0


		{
#line 947 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_disable_smart_recompilation_lock, MR_MUTEX_ATTR);
#endif

#line 7143 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 947 "globals.m"
}
#line 947 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0


		{
#line 947 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                    "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 7161 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 947 "globals.m"
}
#line 947 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 947 "globals.m"
libs__globals__mutable_variable_disable_smart_recompilation = X;

#line 7178 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 947 "globals.m"
}
#line 947 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0


		{
#line 947 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                    "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 7196 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 947 "globals.m"
}
#line 947 "globals.m"
  }
#line 947 "globals.m"
}

#line 947 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_disable_smart_recompilation_0_p_0(void)
#line 947 "globals.m"
{
#line 947 "globals.m"
  {
#line 947 "globals.m"
    MR_bool libs__globals__succeeded;

#line 947 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_disable_smart_recompilation_0_p_0


		{
#line 947 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_disable_smart_recompilation_lock, MR_MUTEX_ATTR);
#endif

#line 7228 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 947 "globals.m"
}
#line 947 "globals.m"
  }
#line 947 "globals.m"
}

#line 944 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_some_errors_were_context_limited_1_p_0(
#line 944 "globals.m"
  MR_Word libs__globals__X_1)
#line 944 "globals.m"
{
#line 944 "globals.m"
  {
#line 944 "globals.m"
    MR_bool libs__globals__succeeded;

#line 944 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_set_some_errors_were_context_limited_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 944 "globals.m"
libs__globals__mutable_variable_some_errors_were_context_limited = X;

#line 7262 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 944 "globals.m"
}
#line 944 "globals.m"
  }
#line 944 "globals.m"
}

#line 944 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_some_errors_were_context_limited_1_p_0(
#line 944 "globals.m"
  MR_Word * libs__globals__X_1)
#line 944 "globals.m"
{
#line 944 "globals.m"
  {
#line 944 "globals.m"
    MR_bool libs__globals__succeeded;

#line 944 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_get_some_errors_were_context_limited_1_p_0

	MR_Word X;

		{
#line 944 "globals.m"
X = libs__globals__mutable_variable_some_errors_were_context_limited;

#line 7295 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
#line 944 "globals.m"
}
#line 944 "globals.m"
  }
#line 944 "globals.m"
}

#line 944 "globals.m"
static void MR_CALL 
libs__globals__unlock_some_errors_were_context_limited_0_p_0(void)
#line 944 "globals.m"
{
#line 944 "globals.m"
  {
#line 944 "globals.m"
    MR_bool libs__globals__succeeded;

#line 944 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_some_errors_were_context_limited_0_p_0


		{
#line 944 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_some_errors_were_context_limited_lock,
                    "libs__globals__mutable_variable_some_errors_were_context_limited_lock");
#endif

#line 7329 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 944 "globals.m"
}
#line 944 "globals.m"
  }
#line 944 "globals.m"
}

#line 944 "globals.m"
static void MR_CALL 
libs__globals__lock_some_errors_were_context_limited_0_p_0(void)
#line 944 "globals.m"
{
#line 944 "globals.m"
  {
#line 944 "globals.m"
    MR_bool libs__globals__succeeded;

#line 944 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_some_errors_were_context_limited_0_p_0


		{
#line 944 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_some_errors_were_context_limited_lock,
                    "libs__globals__mutable_variable_some_errors_were_context_limited_lock");
#endif

#line 7362 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 944 "globals.m"
}
#line 944 "globals.m"
  }
#line 944 "globals.m"
}

#line 944 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_some_errors_were_context_limited_0_p_0(void)
#line 944 "globals.m"
{
#line 944 "globals.m"
  {
#line 944 "globals.m"
    MR_bool libs__globals__succeeded;

#line 944 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_some_errors_were_context_limited_0_p_0


		{
#line 944 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_some_errors_were_context_limited_lock, MR_MUTEX_ATTR);
#endif

#line 7394 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 944 "globals.m"
}
#line 944 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_some_errors_were_context_limited_0_p_0


		{
#line 944 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_some_errors_were_context_limited_lock,
                    "libs__globals__mutable_variable_some_errors_were_context_limited_lock");
#endif

#line 7412 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 944 "globals.m"
}
#line 944 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_some_errors_were_context_limited_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 944 "globals.m"
libs__globals__mutable_variable_some_errors_were_context_limited = X;

#line 7429 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 944 "globals.m"
}
#line 944 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_some_errors_were_context_limited_0_p_0


		{
#line 944 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_some_errors_were_context_limited_lock,
                    "libs__globals__mutable_variable_some_errors_were_context_limited_lock");
#endif

#line 7447 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 944 "globals.m"
}
#line 944 "globals.m"
  }
#line 944 "globals.m"
}

#line 944 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_some_errors_were_context_limited_0_p_0(void)
#line 944 "globals.m"
{
#line 944 "globals.m"
  {
#line 944 "globals.m"
    MR_bool libs__globals__succeeded;

#line 944 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_some_errors_were_context_limited_0_p_0


		{
#line 944 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_some_errors_were_context_limited_lock, MR_MUTEX_ATTR);
#endif

#line 7479 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 944 "globals.m"
}
#line 944 "globals.m"
  }
#line 944 "globals.m"
}

#line 938 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_extra_error_info_1_p_0(
#line 938 "globals.m"
  MR_Word libs__globals__X_1)
#line 938 "globals.m"
{
#line 938 "globals.m"
  {
#line 938 "globals.m"
    MR_bool libs__globals__succeeded;

#line 938 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_set_extra_error_info_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 938 "globals.m"
libs__globals__mutable_variable_extra_error_info = X;

#line 7513 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 938 "globals.m"
}
#line 938 "globals.m"
  }
#line 938 "globals.m"
}

#line 938 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_extra_error_info_1_p_0(
#line 938 "globals.m"
  MR_Word * libs__globals__X_1)
#line 938 "globals.m"
{
#line 938 "globals.m"
  {
#line 938 "globals.m"
    MR_bool libs__globals__succeeded;

#line 938 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_get_extra_error_info_1_p_0

	MR_Word X;

		{
#line 938 "globals.m"
X = libs__globals__mutable_variable_extra_error_info;

#line 7546 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
#line 938 "globals.m"
}
#line 938 "globals.m"
  }
#line 938 "globals.m"
}

#line 938 "globals.m"
static void MR_CALL 
libs__globals__unlock_extra_error_info_0_p_0(void)
#line 938 "globals.m"
{
#line 938 "globals.m"
  {
#line 938 "globals.m"
    MR_bool libs__globals__succeeded;

#line 938 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_extra_error_info_0_p_0


		{
#line 938 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                    "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 7580 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 938 "globals.m"
}
#line 938 "globals.m"
  }
#line 938 "globals.m"
}

#line 938 "globals.m"
static void MR_CALL 
libs__globals__lock_extra_error_info_0_p_0(void)
#line 938 "globals.m"
{
#line 938 "globals.m"
  {
#line 938 "globals.m"
    MR_bool libs__globals__succeeded;

#line 938 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_extra_error_info_0_p_0


		{
#line 938 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                    "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 7613 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 938 "globals.m"
}
#line 938 "globals.m"
  }
#line 938 "globals.m"
}

#line 938 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_extra_error_info_0_p_0(void)
#line 938 "globals.m"
{
#line 938 "globals.m"
  {
#line 938 "globals.m"
    MR_bool libs__globals__succeeded;

#line 938 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_extra_error_info_0_p_0


		{
#line 938 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_extra_error_info_lock, MR_MUTEX_ATTR);
#endif

#line 7645 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 938 "globals.m"
}
#line 938 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_extra_error_info_0_p_0


		{
#line 938 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                    "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 7663 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 938 "globals.m"
}
#line 938 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_extra_error_info_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 938 "globals.m"
libs__globals__mutable_variable_extra_error_info = X;

#line 7680 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 938 "globals.m"
}
#line 938 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_extra_error_info_0_p_0


		{
#line 938 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                    "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 7698 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 938 "globals.m"
}
#line 938 "globals.m"
  }
#line 938 "globals.m"
}

#line 938 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_extra_error_info_0_p_0(void)
#line 938 "globals.m"
{
#line 938 "globals.m"
  {
#line 938 "globals.m"
    MR_bool libs__globals__succeeded;

#line 938 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_extra_error_info_0_p_0


		{
#line 938 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_extra_error_info_lock, MR_MUTEX_ATTR);
#endif

#line 7730 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 938 "globals.m"
}
#line 938 "globals.m"
  }
#line 938 "globals.m"
}

#line 932 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_maybe_from_ground_term_threshold_1_p_0(
#line 932 "globals.m"
  MR_Word libs__globals__X_1)
#line 932 "globals.m"
{
#line 932 "globals.m"
  {
#line 932 "globals.m"
    MR_bool libs__globals__succeeded;

#line 932 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_set_maybe_from_ground_term_threshold_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 932 "globals.m"
libs__globals__mutable_variable_maybe_from_ground_term_threshold = X;

#line 7764 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 932 "globals.m"
}
#line 932 "globals.m"
  }
#line 932 "globals.m"
}

#line 932 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_maybe_from_ground_term_threshold_1_p_0(
#line 932 "globals.m"
  MR_Word * libs__globals__X_1)
#line 932 "globals.m"
{
#line 932 "globals.m"
  {
#line 932 "globals.m"
    MR_bool libs__globals__succeeded;

#line 932 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_get_maybe_from_ground_term_threshold_1_p_0

	MR_Word X;

		{
#line 932 "globals.m"
X = libs__globals__mutable_variable_maybe_from_ground_term_threshold;

#line 7797 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
#line 932 "globals.m"
}
#line 932 "globals.m"
  }
#line 932 "globals.m"
}

#line 932 "globals.m"
static void MR_CALL 
libs__globals__unlock_maybe_from_ground_term_threshold_0_p_0(void)
#line 932 "globals.m"
{
#line 932 "globals.m"
  {
#line 932 "globals.m"
    MR_bool libs__globals__succeeded;

#line 932 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_maybe_from_ground_term_threshold_0_p_0


		{
#line 932 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                    "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 7831 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 932 "globals.m"
}
#line 932 "globals.m"
  }
#line 932 "globals.m"
}

#line 932 "globals.m"
static void MR_CALL 
libs__globals__lock_maybe_from_ground_term_threshold_0_p_0(void)
#line 932 "globals.m"
{
#line 932 "globals.m"
  {
#line 932 "globals.m"
    MR_bool libs__globals__succeeded;

#line 932 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_maybe_from_ground_term_threshold_0_p_0


		{
#line 932 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                    "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 7864 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 932 "globals.m"
}
#line 932 "globals.m"
  }
#line 932 "globals.m"
}

#line 932 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0(void)
#line 932 "globals.m"
{
#line 932 "globals.m"
  {
#line 932 "globals.m"
    MR_bool libs__globals__succeeded;

#line 932 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0


		{
#line 932 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock, MR_MUTEX_ATTR);
#endif

#line 7896 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 932 "globals.m"
}
#line 932 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0


		{
#line 932 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                    "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 7914 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 932 "globals.m"
}
#line 932 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0

	MR_Word X;

	X =  (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) ;
		{
#line 932 "globals.m"
libs__globals__mutable_variable_maybe_from_ground_term_threshold = X;

#line 7931 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 932 "globals.m"
}
#line 932 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0


		{
#line 932 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                    "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 7949 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 932 "globals.m"
}
#line 932 "globals.m"
  }
#line 932 "globals.m"
}

#line 932 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_maybe_from_ground_term_threshold_0_p_0(void)
#line 932 "globals.m"
{
#line 932 "globals.m"
  {
#line 932 "globals.m"
    MR_bool libs__globals__succeeded;

#line 932 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_maybe_from_ground_term_threshold_0_p_0


		{
#line 932 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock, MR_MUTEX_ATTR);
#endif

#line 7981 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 932 "globals.m"
}
#line 932 "globals.m"
  }
#line 932 "globals.m"
}

#line 927 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_solver_auto_init_supported_1_p_0(
#line 927 "globals.m"
  MR_Word libs__globals__X_1)
#line 927 "globals.m"
{
#line 927 "globals.m"
  {
#line 927 "globals.m"
    MR_bool libs__globals__succeeded;

#line 927 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_set_solver_auto_init_supported_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 927 "globals.m"
MR_set_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_solver_auto_init_supported);

#line 8015 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 927 "globals.m"
}
#line 927 "globals.m"
  }
#line 927 "globals.m"
}

#line 927 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_solver_auto_init_supported_1_p_0(
#line 927 "globals.m"
  MR_Word * libs__globals__X_1)
#line 927 "globals.m"
{
#line 927 "globals.m"
  {
#line 927 "globals.m"
    MR_bool libs__globals__succeeded;

#line 927 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_get_solver_auto_init_supported_1_p_0

	MR_Word X;

		{
#line 927 "globals.m"
MR_get_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_solver_auto_init_supported);

#line 8048 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
#line 927 "globals.m"
}
#line 927 "globals.m"
  }
#line 927 "globals.m"
}

#line 927 "globals.m"
static void MR_CALL 
libs__globals__unlock_solver_auto_init_supported_0_p_0(void)
#line 927 "globals.m"
{
#line 927 "globals.m"
  {
#line 927 "globals.m"
    MR_bool libs__globals__succeeded;

#line 927 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_solver_auto_init_supported_0_p_0


		{
#line 927 "globals.m"

#line 8078 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 927 "globals.m"
}
#line 927 "globals.m"
  }
#line 927 "globals.m"
}

#line 927 "globals.m"
static void MR_CALL 
libs__globals__lock_solver_auto_init_supported_0_p_0(void)
#line 927 "globals.m"
{
#line 927 "globals.m"
  {
#line 927 "globals.m"
    MR_bool libs__globals__succeeded;

#line 927 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_solver_auto_init_supported_0_p_0


		{
#line 927 "globals.m"

#line 8107 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 927 "globals.m"
}
#line 927 "globals.m"
  }
#line 927 "globals.m"
}

#line 927 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0(void)
#line 927 "globals.m"
{
#line 927 "globals.m"
  {
#line 927 "globals.m"
    MR_bool libs__globals__succeeded;

#line 927 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0


		{
#line 927 "globals.m"
libs__globals__mutable_variable_solver_auto_init_supported = MR_new_thread_local_mutable_index();

#line 8137 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 927 "globals.m"
}
#line 927 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0


		{
#line 927 "globals.m"

#line 8151 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 927 "globals.m"
}
#line 927 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 927 "globals.m"
MR_set_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_solver_auto_init_supported);

#line 8168 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 927 "globals.m"
}
#line 927 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0


		{
#line 927 "globals.m"

#line 8182 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 927 "globals.m"
}
#line 927 "globals.m"
  }
#line 927 "globals.m"
}

#line 927 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_solver_auto_init_supported_0_p_0(void)
#line 927 "globals.m"
{
#line 927 "globals.m"
  {
#line 927 "globals.m"
    MR_bool libs__globals__succeeded;

#line 927 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_solver_auto_init_supported_0_p_0


		{
#line 927 "globals.m"
libs__globals__mutable_variable_solver_auto_init_supported = MR_new_thread_local_mutable_index();

#line 8212 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 927 "globals.m"
}
#line 927 "globals.m"
  }
#line 927 "globals.m"
}

#line 621 "globals.m"
static MR_bool MR_CALL 
libs__globals__convert_line_number_range_2_p_0(
#line 621 "globals.m"
  MR_String libs__globals__RangeStr_3,
#line 621 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 621 "globals.m"
{
#line 624 "globals.m"
  {
#line 624 "globals.m"
    MR_bool libs__globals__succeeded;
#line 624 "globals.m"
    MR_Word libs__globals__MaybeMin_4;
#line 624 "globals.m"
    MR_Word libs__globals__MaybeMax_5;
#line 624 "globals.m"
    MR_String libs__globals__MinStr_6;
#line 624 "globals.m"
    MR_String libs__globals__MaxStr_7;
#line 624 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 624 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 624 "globals.m"
    MR_Word libs__globals__V_13_13;

#line 625 "globals.m"
    {
#line 625 "globals.m"
      libs__globals__V_10_10 = mercury__string__split_at_char_2_f_0((MR_Char) 45, libs__globals__RangeStr_3);
    }
#line 625 "globals.m"
    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 625 "globals.m"
    if (libs__globals__succeeded)
#line 625 "globals.m"
      {
#line 625 "globals.m"
        libs__globals__MinStr_6 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_10_10, (MR_Integer) 0)));
#line 625 "globals.m"
        libs__globals__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_10_10, (MR_Integer) 1)));
#line 625 "globals.m"
        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 625 "globals.m"
        if (libs__globals__succeeded)
#line 625 "globals.m"
          {
#line 625 "globals.m"
            libs__globals__MaxStr_7 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_12_12, (MR_Integer) 0)));
#line 625 "globals.m"
            libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_12_12, (MR_Integer) 1)));
#line 625 "globals.m"
            libs__globals__succeeded = (libs__globals__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 624 "globals.m"
            if (libs__globals__succeeded)
#line 624 "globals.m"
              {
#line 626 "globals.m"
                libs__globals__succeeded = (strcmp(libs__globals__MinStr_6, (MR_String) "") == 0);
#line 628 "globals.m"
                if (libs__globals__succeeded)
#line 627 "globals.m"
                  {
#line 627 "globals.m"
                    libs__globals__MaybeMin_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 627 "globals.m"
                    libs__globals__succeeded = MR_TRUE;
#line 627 "globals.m"
                  }
#line 628 "globals.m"
                else
#line 629 "globals.m"
                  {
#line 629 "globals.m"
                    MR_Integer libs__globals__Min_8;

#line 629 "globals.m"
                    {
#line 629 "globals.m"
                      libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__MinStr_6, &libs__globals__Min_8);
                    }
#line 629 "globals.m"
                    if (libs__globals__succeeded)
#line 629 "globals.m"
                      {
#line 630 "globals.m"
                        {
#line 630 "globals.m"
                          libs__globals__MaybeMin_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 630 "globals.m"
                          MR_hl_field(MR_mktag(1), libs__globals__MaybeMin_4, 0) = ((MR_Box) (libs__globals__Min_8));
#line 630 "globals.m"
                        }
#line 630 "globals.m"
                        libs__globals__succeeded = MR_TRUE;
#line 629 "globals.m"
                      }
#line 629 "globals.m"
                  }
#line 624 "globals.m"
                if (libs__globals__succeeded)
#line 624 "globals.m"
                  {
#line 632 "globals.m"
                    libs__globals__succeeded = (strcmp(libs__globals__MaxStr_7, (MR_String) "") == 0);
#line 634 "globals.m"
                    if (libs__globals__succeeded)
#line 633 "globals.m"
                      {
#line 633 "globals.m"
                        libs__globals__MaybeMax_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 633 "globals.m"
                        libs__globals__succeeded = MR_TRUE;
#line 633 "globals.m"
                      }
#line 634 "globals.m"
                    else
#line 635 "globals.m"
                      {
#line 635 "globals.m"
                        MR_Integer libs__globals__Max_9;

#line 635 "globals.m"
                        {
#line 635 "globals.m"
                          libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__MaxStr_7, &libs__globals__Max_9);
                        }
#line 635 "globals.m"
                        if (libs__globals__succeeded)
#line 635 "globals.m"
                          {
#line 636 "globals.m"
                            {
#line 636 "globals.m"
                              libs__globals__MaybeMax_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 636 "globals.m"
                              MR_hl_field(MR_mktag(1), libs__globals__MaybeMax_5, 0) = ((MR_Box) (libs__globals__Max_9));
#line 636 "globals.m"
                            }
#line 636 "globals.m"
                            libs__globals__succeeded = MR_TRUE;
#line 635 "globals.m"
                          }
#line 635 "globals.m"
                      }
#line 624 "globals.m"
                    if (libs__globals__succeeded)
#line 624 "globals.m"
                      {
#line 624 "globals.m"
                        {
#line 624 "globals.m"
                          MR_Word base;
#line 624 "globals.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 624 "globals.m"
                          *libs__globals__HeadVar__2_2 = base;
#line 624 "globals.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__MaybeMin_4));
#line 624 "globals.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__globals__MaybeMax_5));
#line 624 "globals.m"
                        }
#line 624 "globals.m"
                        libs__globals__succeeded = MR_TRUE;
#line 624 "globals.m"
                      }
#line 624 "globals.m"
                  }
#line 624 "globals.m"
              }
#line 625 "globals.m"
          }
#line 625 "globals.m"
      }
#line 624 "globals.m"
    return libs__globals__succeeded;
#line 624 "globals.m"
  }
#line 621 "globals.m"
}

#line 606 "globals.m"
static void MR_CALL 
libs__globals__find_file_name_and_line_range_chars_4_p_0(
#line 606 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 606 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_LineRangeChars_0_2,
#line 606 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_LineRangeChars_3,
#line 606 "globals.m"
  MR_Word * libs__globals__HeadVar__4_4)
#line 606 "globals.m"
{
#line 609 "globals.m"
  while (MR_TRUE)
#line 609 "globals.m"
    {
#line 609 "globals.m"
      /* tailcall optimized into a loop */
#line 609 "globals.m"
      {
#line 609 "globals.m"
        MR_bool libs__globals__succeeded;

#line 609 "globals.m"
        if ((libs__globals__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 609 "globals.m"
          {
#line 609 "globals.m"
            *libs__globals__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 609 "globals.m"
            *libs__globals__STATE_VARIABLE_LineRangeChars_3 = libs__globals__STATE_VARIABLE_LineRangeChars_0_2;
#line 609 "globals.m"
          }
#line 609 "globals.m"
        else
#line 611 "globals.m"
          {
#line 611 "globals.m"
            MR_Char libs__globals__RevChar_8 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 611 "globals.m"
            MR_Word libs__globals__RevChars_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 1)));

#line 612 "globals.m"
            libs__globals__succeeded = (libs__globals__RevChar_8 == (MR_Char) 58);
#line 614 "globals.m"
            if (libs__globals__succeeded)
#line 613 "globals.m"
              {
#line 613 "globals.m"
                *libs__globals__HeadVar__4_4 = libs__globals__RevChars_9;
#line 613 "globals.m"
                *libs__globals__STATE_VARIABLE_LineRangeChars_3 = libs__globals__STATE_VARIABLE_LineRangeChars_0_2;
#line 613 "globals.m"
              }
#line 614 "globals.m"
            else
#line 616 "globals.m"
              {
#line 616 "globals.m"
                MR_Word libs__globals__STATE_VARIABLE_LineRangeChars_14_14;

#line 616 "globals.m"
                {
#line 616 "globals.m"
                  libs__globals__STATE_VARIABLE_LineRangeChars_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "globals.m"
                  MR_hl_field(MR_mktag(1), libs__globals__STATE_VARIABLE_LineRangeChars_14_14, 0) = ((MR_Box) (MR_Word) (libs__globals__RevChar_8));
#line 616 "globals.m"
                  MR_hl_field(MR_mktag(1), libs__globals__STATE_VARIABLE_LineRangeChars_14_14, 1) = ((MR_Box) (libs__globals__STATE_VARIABLE_LineRangeChars_0_2));
#line 616 "globals.m"
                }
#line 617 "globals.m"
                /* direct tailcall eliminated */
#line 617 "globals.m"
                {
#line 617 "globals.m"
                  MR_Word libs__globals__HeadVar__1__tmp_copy_1 = libs__globals__RevChars_9;
#line 617 "globals.m"
                  MR_Word libs__globals__STATE_VARIABLE_LineRangeChars_0__tmp_copy_2 = libs__globals__STATE_VARIABLE_LineRangeChars_14_14;

#line 617 "globals.m"
                  libs__globals__STATE_VARIABLE_LineRangeChars_0_2 = libs__globals__STATE_VARIABLE_LineRangeChars_0__tmp_copy_2;
#line 617 "globals.m"
                  libs__globals__HeadVar__1_1 = libs__globals__HeadVar__1__tmp_copy_1;
#line 617 "globals.m"
                }
#line 617 "globals.m"
                continue;
#line 616 "globals.m"
              }
#line 611 "globals.m"
          }
#line 609 "globals.m"
      }
#line 609 "globals.m"
      break;
#line 609 "globals.m"
    }
#line 606 "globals.m"
}

#line 598 "globals.m"
static MR_bool MR_CALL 
libs__globals__convert_limit_error_contexts_acc_5_p_0_1(
#line 598 "globals.m"
  MR_Box libs__globals__closure_arg,
#line 598 "globals.m"
  MR_Box libs__globals__wrapper_arg_1,
#line 598 "globals.m"
  MR_Box * libs__globals__wrapper_arg_2)
#line 598 "globals.m"
{
#line 598 "globals.m"
  {
#line 598 "globals.m"
    MR_bool libs__globals__succeeded;
#line 598 "globals.m"
    MR_Box libs__globals__closure = libs__globals__closure_arg;
#line 598 "globals.m"
    MR_Word libs__globals__conv0_HeadVar__2_2;

#line 598 "globals.m"
    {
#line 598 "globals.m"
      libs__globals__succeeded = libs__globals__convert_line_number_range_2_p_0(((MR_String) libs__globals__wrapper_arg_1), &libs__globals__conv0_HeadVar__2_2);
    }
#line 598 "globals.m"
    if (libs__globals__succeeded)
#line 598 "globals.m"
      {
#line 598 "globals.m"
        *libs__globals__wrapper_arg_2 = ((MR_Box) (libs__globals__conv0_HeadVar__2_2));
#line 598 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 598 "globals.m"
      }
#line 598 "globals.m"
    return libs__globals__succeeded;
#line 598 "globals.m"
  }
#line 598 "globals.m"
}

#line 578 "globals.m"
static void MR_CALL 
libs__globals__convert_limit_error_contexts_acc_5_p_0(
#line 578 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 578 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_RevBadOptions_0_2,
#line 578 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_RevBadOptions_3,
#line 578 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Map_0_4,
#line 578 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Map_5)
#line 578 "globals.m"
{
#line 582 "globals.m"
  while (MR_TRUE)
#line 582 "globals.m"
    {
#line 582 "globals.m"
      /* tailcall optimized into a loop */
#line 582 "globals.m"
      {
#line 582 "globals.m"
        MR_bool libs__globals__succeeded;

#line 582 "globals.m"
        if ((libs__globals__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 582 "globals.m"
          {
#line 582 "globals.m"
            *libs__globals__STATE_VARIABLE_Map_5 = libs__globals__STATE_VARIABLE_Map_0_4;
#line 582 "globals.m"
            *libs__globals__STATE_VARIABLE_RevBadOptions_3 = libs__globals__STATE_VARIABLE_RevBadOptions_0_2;
#line 582 "globals.m"
          }
#line 582 "globals.m"
        else
#line 583 "globals.m"
          {
#line 583 "globals.m"
            MR_String libs__globals__Option_12 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 583 "globals.m"
            MR_Word libs__globals__Options_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 1)));
#line 583 "globals.m"
            MR_Word libs__globals__OptionChars_16;
#line 583 "globals.m"
            MR_Word libs__globals__RevOptionChars_17;
#line 583 "globals.m"
            MR_Word libs__globals__LineRangeChars_18;
#line 583 "globals.m"
            MR_Word libs__globals__RevFileNameChars_19;
#line 583 "globals.m"
            MR_String libs__globals__FileName_20;
#line 583 "globals.m"
            MR_String libs__globals__LineRangeStr_21;
#line 583 "globals.m"
            MR_Word libs__globals__STATE_VARIABLE_Map_31_31;
#line 583 "globals.m"
            MR_Word libs__globals__STATE_VARIABLE_RevBadOptions_32_32;
#line 601 "globals.m"
            MR_Word libs__globals__LineNumberRanges_23;
#line 597 "globals.m"
            MR_Word libs__globals__LineRangeStrs_22;

#line 584 "globals.m"
            {
#line 584 "globals.m"
              mercury__string__to_char_list_2_p_0(libs__globals__Option_12, &libs__globals__OptionChars_16);
            }
#line 591 "globals.m"
            {
#line 591 "globals.m"
              mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, libs__globals__OptionChars_16, &libs__globals__RevOptionChars_17);
            }
#line 592 "globals.m"
            {
#line 592 "globals.m"
              libs__globals__find_file_name_and_line_range_chars_4_p_0(libs__globals__RevOptionChars_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__globals__LineRangeChars_18, &libs__globals__RevFileNameChars_19);
            }
#line 594 "globals.m"
            {
#line 594 "globals.m"
              libs__globals__FileName_20 = mercury__string__from_rev_char_list_1_f_0(libs__globals__RevFileNameChars_19);
            }
#line 595 "globals.m"
            {
#line 595 "globals.m"
              libs__globals__LineRangeStr_21 = mercury__string__from_char_list_1_f_0(libs__globals__LineRangeChars_18);
            }
#line 597 "globals.m"
            {
#line 597 "globals.m"
              libs__globals__LineRangeStrs_22 = mercury__string__split_at_char_2_f_0((MR_Char) 44, libs__globals__LineRangeStr_21);
            }
#line 598 "globals.m"
            {
#line 598 "globals.m"
              libs__globals__succeeded = mercury__list__map_3_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &libs__globals__libs__globals__type_ctor_info_line_number_range_0, (MR_Word) &libs__globals_scalar_common_2[5], libs__globals__LineRangeStrs_22, &libs__globals__LineNumberRanges_23);
            }
#line 601 "globals.m"
            if (libs__globals__succeeded)
#line 600 "globals.m"
              {
#line 600 "globals.m"
                {
#line 600 "globals.m"
                  mercury__map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &libs__globals_scalar_common_1[0], ((MR_Box) (libs__globals__FileName_20)), ((MR_Box) (libs__globals__LineNumberRanges_23)), libs__globals__STATE_VARIABLE_Map_0_4, &libs__globals__STATE_VARIABLE_Map_31_31);
                }
#line 600 "globals.m"
                libs__globals__STATE_VARIABLE_RevBadOptions_32_32 = libs__globals__STATE_VARIABLE_RevBadOptions_0_2;
#line 600 "globals.m"
              }
#line 601 "globals.m"
            else
#line 602 "globals.m"
              {
#line 602 "globals.m"
                {
#line 602 "globals.m"
                  libs__globals__STATE_VARIABLE_RevBadOptions_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 602 "globals.m"
                  MR_hl_field(MR_mktag(1), libs__globals__STATE_VARIABLE_RevBadOptions_32_32, 0) = ((MR_Box) (libs__globals__Option_12));
#line 602 "globals.m"
                  MR_hl_field(MR_mktag(1), libs__globals__STATE_VARIABLE_RevBadOptions_32_32, 1) = ((MR_Box) (libs__globals__STATE_VARIABLE_RevBadOptions_0_2));
#line 602 "globals.m"
                }
#line 602 "globals.m"
                libs__globals__STATE_VARIABLE_Map_31_31 = libs__globals__STATE_VARIABLE_Map_0_4;
#line 602 "globals.m"
              }
#line 604 "globals.m"
            /* direct tailcall eliminated */
#line 604 "globals.m"
            {
#line 604 "globals.m"
              MR_Word libs__globals__HeadVar__1__tmp_copy_1 = libs__globals__Options_13;
#line 604 "globals.m"
              MR_Word libs__globals__STATE_VARIABLE_RevBadOptions_0__tmp_copy_2 = libs__globals__STATE_VARIABLE_RevBadOptions_32_32;
#line 604 "globals.m"
              MR_Word libs__globals__STATE_VARIABLE_Map_0__tmp_copy_4 = libs__globals__STATE_VARIABLE_Map_31_31;

#line 604 "globals.m"
              libs__globals__STATE_VARIABLE_Map_0_4 = libs__globals__STATE_VARIABLE_Map_0__tmp_copy_4;
#line 604 "globals.m"
              libs__globals__STATE_VARIABLE_RevBadOptions_0_2 = libs__globals__STATE_VARIABLE_RevBadOptions_0__tmp_copy_2;
#line 604 "globals.m"
              libs__globals__HeadVar__1_1 = libs__globals__HeadVar__1__tmp_copy_1;
#line 604 "globals.m"
            }
#line 604 "globals.m"
            continue;
#line 583 "globals.m"
          }
#line 582 "globals.m"
      }
#line 582 "globals.m"
      break;
#line 582 "globals.m"
    }
#line 578 "globals.m"
}

#line 400 "globals.m"
static void MR_CALL 
libs__globals__convert_foreign_language_det_2_p_0(
#line 400 "globals.m"
  MR_String libs__globals__String_3,
#line 400 "globals.m"
  MR_Word * libs__globals__ForeignLang_4)
#line 400 "globals.m"
{
#line 405 "globals.m"
  {
#line 405 "globals.m"
    MR_bool libs__globals__succeeded;
#line 405 "globals.m"
    MR_Word libs__globals__ForeignLangPrime_5;

#line 403 "globals.m"
    {
#line 403 "globals.m"
      libs__globals__succeeded = libs__globals__convert_foreign_language_2_p_0(libs__globals__String_3, &libs__globals__ForeignLangPrime_5);
    }
#line 405 "globals.m"
    if (libs__globals__succeeded)
#line 404 "globals.m"
      *libs__globals__ForeignLang_4 = libs__globals__ForeignLangPrime_5;
#line 405 "globals.m"
    else
#line 406 "globals.m"
      {
#line 406 "globals.m"
        {
#line 406 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.convert_foreign_language_det\'/2", (MR_String) "invalid foreign_language string");
#line 406 "globals.m"
          return;
        }
#line 406 "globals.m"
      }
#line 405 "globals.m"
  }
#line 400 "globals.m"
}

#line 375 "globals.m"
void MR_CALL 
libs__globals__io_set_maybe_source_file_map_3_p_0(
#line 375 "globals.m"
  MR_Word libs__globals__MaybeSourceFileMap_4)
#line 375 "globals.m"
{
#line 953 "globals.m"
  {
#line 953 "globals.m"
    MR_bool libs__globals__succeeded;

#line 953 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_maybe_source_file_map_3_p_0


		{
#line 953 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                    "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 8781 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 953 "globals.m"
}
#line 953 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_maybe_source_file_map_3_p_0

	MR_Word X;

	X =  libs__globals__MaybeSourceFileMap_4 ;
		{
#line 953 "globals.m"
libs__globals__mutable_variable_maybe_source_file_map = X;

#line 8798 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 953 "globals.m"
}
#line 953 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_maybe_source_file_map_3_p_0


		{
#line 953 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                    "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 8816 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 953 "globals.m"
}
#line 953 "globals.m"
  }
#line 375 "globals.m"
}

#line 373 "globals.m"
void MR_CALL 
libs__globals__io_get_maybe_source_file_map_3_p_0(
#line 373 "globals.m"
  MR_Word * libs__globals__MaybeSourceFileMap_4)
#line 373 "globals.m"
{
#line 953 "globals.m"
  {
#line 953 "globals.m"
    MR_bool libs__globals__succeeded;

#line 953 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_maybe_source_file_map_3_p_0


		{
#line 953 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                    "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 8851 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 953 "globals.m"
}
#line 953 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_maybe_source_file_map_3_p_0

	MR_Word X;

		{
#line 953 "globals.m"
X = libs__globals__mutable_variable_maybe_source_file_map;

#line 8867 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__MaybeSourceFileMap_4  = X;
#line 953 "globals.m"
}
#line 953 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_maybe_source_file_map_3_p_0


		{
#line 953 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                    "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 8886 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 953 "globals.m"
}
#line 953 "globals.m"
  }
#line 373 "globals.m"
}

#line 370 "globals.m"
void MR_CALL 
libs__globals__io_set_disable_generate_item_version_numbers_3_p_0(
#line 370 "globals.m"
  MR_Word libs__globals__DisableItemVerions_4)
#line 370 "globals.m"
{
#line 950 "globals.m"
  {
#line 950 "globals.m"
    MR_bool libs__globals__succeeded;

#line 950 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_disable_generate_item_version_numbers_3_p_0


		{
#line 950 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                    "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 8921 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 950 "globals.m"
}
#line 950 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_disable_generate_item_version_numbers_3_p_0

	MR_Word X;

	X =  libs__globals__DisableItemVerions_4 ;
		{
#line 950 "globals.m"
libs__globals__mutable_variable_disable_generate_item_version_numbers = X;

#line 8938 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 950 "globals.m"
}
#line 950 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_disable_generate_item_version_numbers_3_p_0


		{
#line 950 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                    "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 8956 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 950 "globals.m"
}
#line 950 "globals.m"
  }
#line 370 "globals.m"
}

#line 368 "globals.m"
void MR_CALL 
libs__globals__io_get_disable_generate_item_version_numbers_3_p_0(
#line 368 "globals.m"
  MR_Word * libs__globals__DisableItemVerions_4)
#line 368 "globals.m"
{
#line 950 "globals.m"
  {
#line 950 "globals.m"
    MR_bool libs__globals__succeeded;

#line 950 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_disable_generate_item_version_numbers_3_p_0


		{
#line 950 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                    "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 8991 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 950 "globals.m"
}
#line 950 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_disable_generate_item_version_numbers_3_p_0

	MR_Word X;

		{
#line 950 "globals.m"
X = libs__globals__mutable_variable_disable_generate_item_version_numbers;

#line 9007 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__DisableItemVerions_4  = X;
#line 950 "globals.m"
}
#line 950 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_disable_generate_item_version_numbers_3_p_0


		{
#line 950 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                    "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 9026 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 950 "globals.m"
}
#line 950 "globals.m"
  }
#line 368 "globals.m"
}

#line 366 "globals.m"
void MR_CALL 
libs__globals__io_set_disable_smart_recompilation_3_p_0(
#line 366 "globals.m"
  MR_Word libs__globals__DisableSmartRecomp_4)
#line 366 "globals.m"
{
#line 947 "globals.m"
  {
#line 947 "globals.m"
    MR_bool libs__globals__succeeded;

#line 947 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_disable_smart_recompilation_3_p_0


		{
#line 947 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                    "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 9061 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 947 "globals.m"
}
#line 947 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_disable_smart_recompilation_3_p_0

	MR_Word X;

	X =  libs__globals__DisableSmartRecomp_4 ;
		{
#line 947 "globals.m"
libs__globals__mutable_variable_disable_smart_recompilation = X;

#line 9078 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 947 "globals.m"
}
#line 947 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_disable_smart_recompilation_3_p_0


		{
#line 947 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                    "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 9096 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 947 "globals.m"
}
#line 947 "globals.m"
  }
#line 366 "globals.m"
}

#line 365 "globals.m"
void MR_CALL 
libs__globals__io_get_disable_smart_recompilation_3_p_0(
#line 365 "globals.m"
  MR_Word * libs__globals__DisableSmartRecomp_4)
#line 365 "globals.m"
{
#line 947 "globals.m"
  {
#line 947 "globals.m"
    MR_bool libs__globals__succeeded;

#line 947 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_disable_smart_recompilation_3_p_0


		{
#line 947 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                    "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 9131 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 947 "globals.m"
}
#line 947 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_disable_smart_recompilation_3_p_0

	MR_Word X;

		{
#line 947 "globals.m"
X = libs__globals__mutable_variable_disable_smart_recompilation;

#line 9147 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__DisableSmartRecomp_4  = X;
#line 947 "globals.m"
}
#line 947 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_disable_smart_recompilation_3_p_0


		{
#line 947 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                    "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 9166 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 947 "globals.m"
}
#line 947 "globals.m"
  }
#line 365 "globals.m"
}

#line 362 "globals.m"
void MR_CALL 
libs__globals__io_set_some_errors_were_context_limited_3_p_0(
#line 362 "globals.m"
  MR_Word libs__globals__SomeErrorsWereContextLimited_4)
#line 362 "globals.m"
{
#line 944 "globals.m"
  {
#line 944 "globals.m"
    MR_bool libs__globals__succeeded;

#line 944 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_some_errors_were_context_limited_3_p_0


		{
#line 944 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_some_errors_were_context_limited_lock,
                    "libs__globals__mutable_variable_some_errors_were_context_limited_lock");
#endif

#line 9201 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 944 "globals.m"
}
#line 944 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_some_errors_were_context_limited_3_p_0

	MR_Word X;

	X =  libs__globals__SomeErrorsWereContextLimited_4 ;
		{
#line 944 "globals.m"
libs__globals__mutable_variable_some_errors_were_context_limited = X;

#line 9218 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 944 "globals.m"
}
#line 944 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_some_errors_were_context_limited_3_p_0


		{
#line 944 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_some_errors_were_context_limited_lock,
                    "libs__globals__mutable_variable_some_errors_were_context_limited_lock");
#endif

#line 9236 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 944 "globals.m"
}
#line 944 "globals.m"
  }
#line 362 "globals.m"
}

#line 360 "globals.m"
void MR_CALL 
libs__globals__io_get_some_errors_were_context_limited_3_p_0(
#line 360 "globals.m"
  MR_Word * libs__globals__SomeErrorsWereContextLimited_4)
#line 360 "globals.m"
{
#line 944 "globals.m"
  {
#line 944 "globals.m"
    MR_bool libs__globals__succeeded;

#line 944 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_some_errors_were_context_limited_3_p_0


		{
#line 944 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_some_errors_were_context_limited_lock,
                    "libs__globals__mutable_variable_some_errors_were_context_limited_lock");
#endif

#line 9271 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 944 "globals.m"
}
#line 944 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_some_errors_were_context_limited_3_p_0

	MR_Word X;

		{
#line 944 "globals.m"
X = libs__globals__mutable_variable_some_errors_were_context_limited;

#line 9287 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__SomeErrorsWereContextLimited_4  = X;
#line 944 "globals.m"
}
#line 944 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_some_errors_were_context_limited_3_p_0


		{
#line 944 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_some_errors_were_context_limited_lock,
                    "libs__globals__mutable_variable_some_errors_were_context_limited_lock");
#endif

#line 9306 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 944 "globals.m"
}
#line 944 "globals.m"
  }
#line 360 "globals.m"
}

#line 358 "globals.m"
void MR_CALL 
libs__globals__io_set_extra_error_info_3_p_0(
#line 358 "globals.m"
  MR_Word libs__globals__ExtraErrorInfo_4)
#line 358 "globals.m"
{
#line 938 "globals.m"
  {
#line 938 "globals.m"
    MR_bool libs__globals__succeeded;

#line 938 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_extra_error_info_3_p_0


		{
#line 938 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                    "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 9341 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 938 "globals.m"
}
#line 938 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_extra_error_info_3_p_0

	MR_Word X;

	X =  libs__globals__ExtraErrorInfo_4 ;
		{
#line 938 "globals.m"
libs__globals__mutable_variable_extra_error_info = X;

#line 9358 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 938 "globals.m"
}
#line 938 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_extra_error_info_3_p_0


		{
#line 938 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                    "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 9376 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 938 "globals.m"
}
#line 938 "globals.m"
  }
#line 358 "globals.m"
}

#line 357 "globals.m"
void MR_CALL 
libs__globals__io_get_extra_error_info_3_p_0(
#line 357 "globals.m"
  MR_Word * libs__globals__ExtraErrorInfo_4)
#line 357 "globals.m"
{
#line 938 "globals.m"
  {
#line 938 "globals.m"
    MR_bool libs__globals__succeeded;

#line 938 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_extra_error_info_3_p_0


		{
#line 938 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                    "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 9411 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 938 "globals.m"
}
#line 938 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_extra_error_info_3_p_0

	MR_Word X;

		{
#line 938 "globals.m"
X = libs__globals__mutable_variable_extra_error_info;

#line 9427 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__ExtraErrorInfo_4  = X;
#line 938 "globals.m"
}
#line 938 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_extra_error_info_3_p_0


		{
#line 938 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                    "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 9446 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 938 "globals.m"
}
#line 938 "globals.m"
  }
#line 357 "globals.m"
}

#line 355 "globals.m"
MR_Word MR_CALL 
libs__globals__get_maybe_from_ground_term_threshold_0_f_0(void)
#line 355 "globals.m"
{
#line 970 "globals.m"
  {
#line 970 "globals.m"
    MR_bool libs__globals__succeeded;
#line 970 "globals.m"
    MR_Word libs__globals__MaybeThreshold_2;

#line 932 "globals.m"
{
#define MR_PROC_LABEL libs__globals__get_maybe_from_ground_term_threshold_0_f_0


		{
#line 932 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                    "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 9481 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 932 "globals.m"
}
#line 932 "globals.m"
{
#define MR_PROC_LABEL libs__globals__get_maybe_from_ground_term_threshold_0_f_0

	MR_Word X;

		{
#line 932 "globals.m"
X = libs__globals__mutable_variable_maybe_from_ground_term_threshold;

#line 9497 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 libs__globals__MaybeThreshold_2  = X;
#line 932 "globals.m"
}
#line 932 "globals.m"
{
#define MR_PROC_LABEL libs__globals__get_maybe_from_ground_term_threshold_0_f_0


		{
#line 932 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                    "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 9516 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 932 "globals.m"
}
#line 970 "globals.m"
    return libs__globals__MaybeThreshold_2;
#line 970 "globals.m"
  }
#line 355 "globals.m"
}

#line 350 "globals.m"
void MR_CALL 
libs__globals__semipure_get_solver_auto_init_supported_1_p_0(
#line 350 "globals.m"
  MR_Word * libs__globals__AutoInitSupported_2)
#line 350 "globals.m"
{
#line 927 "globals.m"
  {
#line 927 "globals.m"
    MR_bool libs__globals__succeeded;

#line 927 "globals.m"
{
#define MR_PROC_LABEL libs__globals__semipure_get_solver_auto_init_supported_1_p_0


		{
#line 927 "globals.m"

#line 9549 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 927 "globals.m"
}
#line 927 "globals.m"
{
#define MR_PROC_LABEL libs__globals__semipure_get_solver_auto_init_supported_1_p_0

	MR_Word X;

		{
#line 927 "globals.m"
MR_get_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_solver_auto_init_supported);

#line 9565 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__AutoInitSupported_2  = X;
#line 927 "globals.m"
}
#line 927 "globals.m"
{
#define MR_PROC_LABEL libs__globals__semipure_get_solver_auto_init_supported_1_p_0


		{
#line 927 "globals.m"

#line 9580 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 927 "globals.m"
}
#line 927 "globals.m"
  }
#line 350 "globals.m"
}

#line 345 "globals.m"
void MR_CALL 
libs__globals__globals_init_mutables_3_p_0(
#line 345 "globals.m"
  MR_Word libs__globals__Globals_4)
#line 345 "globals.m"
{
#line 958 "globals.m"
  {
#line 958 "globals.m"
    MR_bool libs__globals__succeeded;
#line 958 "globals.m"
    MR_Word libs__globals__AutoInitSupported_6;
#line 958 "globals.m"
    MR_Integer libs__globals__FromGroundTermThreshold_7;
#line 958 "globals.m"
    MR_Word libs__globals__V_13_13;

#line 959 "globals.m"
    {
#line 959 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_4, (MR_Integer) 291, &libs__globals__AutoInitSupported_6);
    }
#line 927 "globals.m"
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0


		{
#line 927 "globals.m"

#line 9622 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 927 "globals.m"
}
#line 927 "globals.m"
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0

	MR_Word X;

	X =  libs__globals__AutoInitSupported_6 ;
		{
#line 927 "globals.m"
MR_set_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_solver_auto_init_supported);

#line 9639 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 927 "globals.m"
}
#line 927 "globals.m"
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0


		{
#line 927 "globals.m"

#line 9653 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 927 "globals.m"
}
#line 962 "globals.m"
    {
#line 962 "globals.m"
      libs__globals__lookup_int_option_3_p_0(libs__globals__Globals_4, (MR_Integer) 338, &libs__globals__FromGroundTermThreshold_7);
    }
#line 964 "globals.m"
    {
#line 964 "globals.m"
      libs__globals__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 964 "globals.m"
      MR_hl_field(MR_mktag(1), libs__globals__V_13_13, 0) = ((MR_Box) (libs__globals__FromGroundTermThreshold_7));
#line 964 "globals.m"
    }
#line 932 "globals.m"
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0


		{
#line 932 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                    "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 9684 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 932 "globals.m"
}
#line 932 "globals.m"
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0

	MR_Word X;

	X =  libs__globals__V_13_13 ;
		{
#line 932 "globals.m"
libs__globals__mutable_variable_maybe_from_ground_term_threshold = X;

#line 9701 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 932 "globals.m"
}
#line 932 "globals.m"
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0


		{
#line 932 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                    "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 9719 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 932 "globals.m"
}
#line 958 "globals.m"
  }
#line 345 "globals.m"
}

#line 341 "globals.m"
void MR_CALL 
libs__globals__double_width_floats_on_det_stack_2_p_0(
#line 341 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 341 "globals.m"
  MR_Word * libs__globals__FloatDwords_4)
#line 341 "globals.m"
{
#line 894 "globals.m"
  {
#line 894 "globals.m"
    MR_bool libs__globals__succeeded;
#line 894 "globals.m"
    MR_Integer libs__globals__TargetWordBits_5;
#line 894 "globals.m"
    MR_Word libs__globals__SinglePrecFloat_6;

#line 895 "globals.m"
    {
#line 895 "globals.m"
      libs__globals__lookup_int_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 237, &libs__globals__TargetWordBits_5);
    }
#line 896 "globals.m"
    {
#line 896 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 221, &libs__globals__SinglePrecFloat_6);
    }
#line 897 "globals.m"
    libs__globals__succeeded = (libs__globals__TargetWordBits_5 == (MR_Integer) 64);
#line 899 "globals.m"
    if (libs__globals__succeeded)
#line 898 "globals.m"
      *libs__globals__FloatDwords_4 = (MR_Integer) 0;
#line 899 "globals.m"
    else
#line 907 "globals.m"
      {
#line 899 "globals.m"
        libs__globals__succeeded = (libs__globals__TargetWordBits_5 == (MR_Integer) 32);
#line 907 "globals.m"
        if (libs__globals__succeeded)
#line 903 "globals.m"
#line 903 "globals.m"
          switch (libs__globals__SinglePrecFloat_6) {
#line 903 "globals.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 903 "globals.m"
            case (MR_Integer) 0:
#line 905 "globals.m"
              *libs__globals__FloatDwords_4 = (MR_Integer) 1;
#line 903 "globals.m"
              break;
#line 903 "globals.m"
            case (MR_Integer) 1:
#line 902 "globals.m"
              *libs__globals__FloatDwords_4 = (MR_Integer) 0;
#line 903 "globals.m"
              break;
#line 903 "globals.m"
          }
#line 907 "globals.m"
        else
#line 908 "globals.m"
          {
#line 908 "globals.m"
            {
#line 908 "globals.m"
              mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.double_width_floats_on_det_stack\'/2", (MR_String) "bits_per_word not 32 or 64");
#line 908 "globals.m"
              return;
            }
#line 908 "globals.m"
          }
#line 907 "globals.m"
      }
#line 894 "globals.m"
  }
#line 341 "globals.m"
}

#line 337 "globals.m"
void MR_CALL 
libs__globals__get_any_intermod_2_p_0(
#line 337 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 337 "globals.m"
  MR_Word * libs__globals__AnyIntermod_4)
#line 337 "globals.m"
{
#line 889 "globals.m"
  {
#line 889 "globals.m"
    MR_bool libs__globals__succeeded;
#line 889 "globals.m"
    MR_Word libs__globals__IntermodOpt_5;
#line 889 "globals.m"
    MR_Word libs__globals__IntermodAnalysis_6;

#line 890 "globals.m"
    {
#line 890 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 320, &libs__globals__IntermodOpt_5);
    }
#line 891 "globals.m"
    {
#line 891 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 325, &libs__globals__IntermodAnalysis_6);
    }
#line 892 "globals.m"
    {
#line 892 "globals.m"
      *libs__globals__AnyIntermod_4 = mercury__bool__or_2_f_0(libs__globals__IntermodOpt_5, libs__globals__IntermodAnalysis_6);
    }
#line 889 "globals.m"
  }
#line 337 "globals.m"
}

#line 335 "globals.m"
void MR_CALL 
libs__globals__current_grade_supports_concurrency_2_p_0(
#line 335 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 335 "globals.m"
  MR_Word * libs__globals__ThreadsSupported_4)
#line 335 "globals.m"
{
#line 867 "globals.m"
  {
#line 867 "globals.m"
    MR_bool libs__globals__succeeded;
#line 867 "globals.m"
    MR_Word libs__globals__Target_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 709 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 709 "globals.m"
    MR_Word libs__globals__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
#line 709 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 709 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 709 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 709 "globals.m"
    MR_Word libs__globals__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 709 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 709 "globals.m"
    MR_Word libs__globals__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
#line 709 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 709 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 709 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 709 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 709 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 709 "globals.m"
    MR_Word libs__globals__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 709 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 709 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 709 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 709 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 709 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));

#line 881 "globals.m"
#line 881 "globals.m"
    switch (libs__globals__Target_5) {
#line 881 "globals.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 881 "globals.m"
      case (MR_Integer) 0:
#line 870 "globals.m"
        {
#line 870 "globals.m"
          MR_Word libs__globals__HighLevelCode_6;

#line 871 "globals.m"
          {
#line 871 "globals.m"
            libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 251, &libs__globals__HighLevelCode_6);
          }
#line 876 "globals.m"
#line 876 "globals.m"
          switch (libs__globals__HighLevelCode_6) {
#line 876 "globals.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 876 "globals.m"
            case (MR_Integer) 0:
#line 875 "globals.m"
              *libs__globals__ThreadsSupported_4 = (MR_Integer) 1;
#line 876 "globals.m"
              break;
#line 876 "globals.m"
            case (MR_Integer) 1:
#line 877 "globals.m"
              {
#line 878 "globals.m"
                {
#line 878 "globals.m"
                  libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 213, libs__globals__ThreadsSupported_4);
#line 878 "globals.m"
                  return;
                }
#line 877 "globals.m"
              }
#line 876 "globals.m"
              break;
#line 876 "globals.m"
          }
#line 870 "globals.m"
        }
#line 881 "globals.m"
        break;
#line 881 "globals.m"
      case (MR_Integer) 1:
#line 881 "globals.m"
      case (MR_Integer) 3:
#line 881 "globals.m"
      case (MR_Integer) 2:
#line 886 "globals.m"
        *libs__globals__ThreadsSupported_4 = (MR_Integer) 1;
#line 881 "globals.m"
        break;
#line 881 "globals.m"
    }
#line 867 "globals.m"
  }
#line 335 "globals.m"
}

#line 329 "globals.m"
void MR_CALL 
libs__globals__current_grade_supports_par_conj_2_p_0(
#line 329 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 329 "globals.m"
  MR_Word * libs__globals__ParConjSupported_4)
#line 329 "globals.m"
{
#line 848 "globals.m"
  {
#line 848 "globals.m"
    MR_bool libs__globals__succeeded;
#line 848 "globals.m"
    MR_Word libs__globals__Target_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 848 "globals.m"
    MR_Word libs__globals__HighLevelCode_6;
#line 848 "globals.m"
    MR_Word libs__globals__Parallel_7;
#line 848 "globals.m"
    MR_Word libs__globals__UseTrail_8;
#line 709 "globals.m"
    MR_Word libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 709 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
#line 709 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 709 "globals.m"
    MR_Word libs__globals__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 709 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 709 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 709 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 709 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
#line 709 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 709 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 709 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 709 "globals.m"
    MR_Word libs__globals__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 709 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 709 "globals.m"
    MR_Word libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 709 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 709 "globals.m"
    MR_Word libs__globals__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 709 "globals.m"
    MR_Word libs__globals__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 709 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 709 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));

#line 853 "globals.m"
    {
#line 853 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 251, &libs__globals__HighLevelCode_6);
    }
#line 854 "globals.m"
    {
#line 854 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 213, &libs__globals__Parallel_7);
    }
#line 855 "globals.m"
    {
#line 855 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 215, &libs__globals__UseTrail_8);
    }
#line 857 "globals.m"
    libs__globals__succeeded = (libs__globals__Target_5 == (MR_Integer) 0);
#line 857 "globals.m"
    if (libs__globals__succeeded)
#line 857 "globals.m"
      {
#line 858 "globals.m"
        libs__globals__succeeded = (libs__globals__HighLevelCode_6 == (MR_Integer) 0);
#line 857 "globals.m"
        if (libs__globals__succeeded)
#line 857 "globals.m"
          {
#line 859 "globals.m"
            libs__globals__succeeded = (libs__globals__Parallel_7 == (MR_Integer) 1);
#line 857 "globals.m"
            if (libs__globals__succeeded)
#line 860 "globals.m"
              libs__globals__succeeded = (libs__globals__UseTrail_8 == (MR_Integer) 0);
#line 857 "globals.m"
          }
#line 857 "globals.m"
      }
#line 863 "globals.m"
    if (libs__globals__succeeded)
#line 862 "globals.m"
      *libs__globals__ParConjSupported_4 = (MR_Integer) 1;
#line 863 "globals.m"
    else
#line 864 "globals.m"
      *libs__globals__ParConjSupported_4 = (MR_Integer) 0;
#line 848 "globals.m"
  }
#line 329 "globals.m"
}

#line 324 "globals.m"
void MR_CALL 
libs__globals__current_grade_supports_tabling_2_p_0(
#line 324 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 324 "globals.m"
  MR_Word * libs__globals__TablingSupported_4)
#line 324 "globals.m"
{
#line 834 "globals.m"
  {
#line 834 "globals.m"
    MR_bool libs__globals__succeeded;
#line 834 "globals.m"
    MR_Word libs__globals__Target_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 834 "globals.m"
    MR_Word libs__globals__GC_Method_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 834 "globals.m"
    MR_Word libs__globals__HighLevelData_7;
#line 709 "globals.m"
    MR_Word libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 709 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
#line 709 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 709 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 709 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 709 "globals.m"
    MR_Word libs__globals__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 709 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
#line 709 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 709 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 709 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 709 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 709 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 709 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 709 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 709 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 709 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 709 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 709 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));

#line 837 "globals.m"
    {
#line 837 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 252, &libs__globals__HighLevelData_7);
    }
#line 839 "globals.m"
    libs__globals__succeeded = (libs__globals__Target_5 == (MR_Integer) 0);
#line 839 "globals.m"
    if (libs__globals__succeeded)
#line 839 "globals.m"
      {
#line 840 "globals.m"
        libs__globals__succeeded = (libs__globals__GC_Method_6 == (MR_Integer) 5);
#line 840 "globals.m"
        libs__globals__succeeded = !(libs__globals__succeeded);
#line 839 "globals.m"
        if (libs__globals__succeeded)
#line 841 "globals.m"
          libs__globals__succeeded = (libs__globals__HighLevelData_7 == (MR_Integer) 0);
#line 839 "globals.m"
      }
#line 844 "globals.m"
    if (libs__globals__succeeded)
#line 843 "globals.m"
      *libs__globals__TablingSupported_4 = (MR_Integer) 1;
#line 844 "globals.m"
    else
#line 845 "globals.m"
      *libs__globals__TablingSupported_4 = (MR_Integer) 0;
#line 834 "globals.m"
  }
#line 324 "globals.m"
}

#line 320 "globals.m"
void MR_CALL 
libs__globals__want_return_var_layouts_2_p_0(
#line 320 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 320 "globals.m"
  MR_Word * libs__globals__WantReturnLayouts_4)
#line 320 "globals.m"
{
#line 830 "globals.m"
  {
#line 830 "globals.m"
    MR_bool libs__globals__succeeded;

#line 821 "globals.m"
    {
#line 821 "globals.m"
      MR_Word libs__globals__GC_Method_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 710 "globals.m"
      MR_Word libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 710 "globals.m"
      MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
#line 710 "globals.m"
      MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 710 "globals.m"
      MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 710 "globals.m"
      MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 710 "globals.m"
      MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 710 "globals.m"
      MR_Word libs__globals__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 710 "globals.m"
      MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
#line 710 "globals.m"
      MR_Word libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 710 "globals.m"
      MR_Word libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 710 "globals.m"
      MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 710 "globals.m"
      MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 710 "globals.m"
      MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 710 "globals.m"
      MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 710 "globals.m"
      MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 710 "globals.m"
      MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 710 "globals.m"
      MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 710 "globals.m"
      MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 710 "globals.m"
      MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));

#line 822 "globals.m"
      libs__globals__succeeded = (libs__globals__GC_Method_5 == (MR_Integer) 5);
#line 821 "globals.m"
    }
#line 823 "globals.m"
    if (!(libs__globals__succeeded))
#line 824 "globals.m"
      {
#line 824 "globals.m"
        MR_Word libs__globals__TraceLevel_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 824 "globals.m"
        MR_Word libs__globals__TraceSuppress_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
#line 824 "globals.m"
        MR_Word libs__globals__V_8_8;
#line 714 "globals.m"
        MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 714 "globals.m"
        MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
#line 714 "globals.m"
        MR_Word libs__globals__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 714 "globals.m"
        MR_Word libs__globals__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 714 "globals.m"
        MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 714 "globals.m"
        MR_Word libs__globals__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 714 "globals.m"
        MR_Word libs__globals__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 714 "globals.m"
        MR_Word libs__globals__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 714 "globals.m"
        MR_Word libs__globals__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 714 "globals.m"
        MR_Word libs__globals__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 714 "globals.m"
        MR_Word libs__globals__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 714 "globals.m"
        MR_Word libs__globals__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 714 "globals.m"
        MR_Word libs__globals__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 714 "globals.m"
        MR_Word libs__globals__V_44_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 714 "globals.m"
        MR_Word libs__globals__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 714 "globals.m"
        MR_Word libs__globals__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 714 "globals.m"
        MR_Word libs__globals__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 714 "globals.m"
        MR_Word libs__globals__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));

#line 826 "globals.m"
        {
#line 826 "globals.m"
          libs__globals__V_8_8 = libs__trace_params__trace_needs_return_info_2_f_0(libs__globals__TraceLevel_6, libs__globals__TraceSuppress_7);
        }
#line 826 "globals.m"
        libs__globals__succeeded = (libs__globals__V_8_8 == (MR_Integer) 1);
#line 824 "globals.m"
      }
#line 830 "globals.m"
    if (libs__globals__succeeded)
#line 829 "globals.m"
      *libs__globals__WantReturnLayouts_4 = (MR_Integer) 1;
#line 830 "globals.m"
    else
#line 831 "globals.m"
      *libs__globals__WantReturnLayouts_4 = (MR_Integer) 0;
#line 830 "globals.m"
  }
#line 320 "globals.m"
}

#line 309 "globals.m"
void MR_CALL 
libs__globals__lookup_accumulating_option_3_p_0(
#line 309 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 309 "globals.m"
  MR_Word libs__globals__Option_5,
#line 309 "globals.m"
  MR_Word * libs__globals__Value_6)
#line 309 "globals.m"
{
#line 806 "globals.m"
  {
#line 806 "globals.m"
    MR_bool libs__globals__succeeded;
#line 806 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 806 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 707 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)));
#line 707 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)));
#line 707 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 707 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 707 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 707 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 707 "globals.m"
    MR_Word libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
#line 707 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 707 "globals.m"
    MR_Word libs__globals__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 11)));
#line 764 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 810 "globals.m"
    MR_Word libs__globals__Accumulating_8;

#line 764 "globals.m"
    {
#line 764 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 764 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 808 "globals.m"
    libs__globals__succeeded = ((((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 808 "globals.m"
    if (libs__globals__succeeded)
#line 808 "globals.m"
      {
#line 808 "globals.m"
        libs__globals__Accumulating_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 1)));
#line 809 "globals.m"
        *libs__globals__Value_6 = libs__globals__Accumulating_8;
#line 808 "globals.m"
      }
#line 808 "globals.m"
    else
#line 811 "globals.m"
      {
#line 811 "globals.m"
        {
#line 811 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_accumulating_option\'/3", (MR_String) "invalid accumulating option");
#line 811 "globals.m"
          return;
        }
#line 811 "globals.m"
      }
#line 806 "globals.m"
  }
#line 309 "globals.m"
}

#line 307 "globals.m"
void MR_CALL 
libs__globals__lookup_maybe_string_option_3_p_0(
#line 307 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 307 "globals.m"
  MR_Word libs__globals__Option_5,
#line 307 "globals.m"
  MR_Word * libs__globals__Value_6)
#line 307 "globals.m"
{
#line 798 "globals.m"
  {
#line 798 "globals.m"
    MR_bool libs__globals__succeeded;
#line 798 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 798 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 707 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)));
#line 707 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)));
#line 707 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 707 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 707 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 707 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 707 "globals.m"
    MR_Word libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
#line 707 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 707 "globals.m"
    MR_Word libs__globals__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 11)));
#line 764 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 802 "globals.m"
    MR_Word libs__globals__MaybeString_8;

#line 764 "globals.m"
    {
#line 764 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 764 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 800 "globals.m"
    libs__globals__succeeded = ((((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 800 "globals.m"
    if (libs__globals__succeeded)
#line 800 "globals.m"
      {
#line 800 "globals.m"
        libs__globals__MaybeString_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 1)));
#line 801 "globals.m"
        *libs__globals__Value_6 = libs__globals__MaybeString_8;
#line 800 "globals.m"
      }
#line 800 "globals.m"
    else
#line 803 "globals.m"
      {
#line 803 "globals.m"
        {
#line 803 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_maybe_string_option\'/3", (MR_String) "invalid maybe_string option");
#line 803 "globals.m"
          return;
        }
#line 803 "globals.m"
      }
#line 798 "globals.m"
  }
#line 307 "globals.m"
}

#line 306 "globals.m"
void MR_CALL 
libs__globals__lookup_string_option_3_p_0(
#line 306 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 306 "globals.m"
  MR_Word libs__globals__Option_5,
#line 306 "globals.m"
  MR_String * libs__globals__Value_6)
#line 306 "globals.m"
{
#line 774 "globals.m"
  {
#line 774 "globals.m"
    MR_bool libs__globals__succeeded;
#line 774 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 774 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 707 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)));
#line 707 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)));
#line 707 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 707 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 707 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 707 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 707 "globals.m"
    MR_Word libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
#line 707 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 707 "globals.m"
    MR_Word libs__globals__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 11)));
#line 764 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 778 "globals.m"
    MR_String libs__globals__String_8;

#line 764 "globals.m"
    {
#line 764 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 764 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 776 "globals.m"
    libs__globals__succeeded = ((((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 776 "globals.m"
    if (libs__globals__succeeded)
#line 776 "globals.m"
      {
#line 776 "globals.m"
        libs__globals__String_8 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 1)));
#line 777 "globals.m"
        *libs__globals__Value_6 = libs__globals__String_8;
#line 776 "globals.m"
      }
#line 776 "globals.m"
    else
#line 779 "globals.m"
      {
#line 779 "globals.m"
        {
#line 779 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_string_option\'/3", (MR_String) "invalid string option");
#line 779 "globals.m"
          return;
        }
#line 779 "globals.m"
      }
#line 774 "globals.m"
  }
#line 306 "globals.m"
}

#line 304 "globals.m"
void MR_CALL 
libs__globals__lookup_maybe_int_option_3_p_0(
#line 304 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 304 "globals.m"
  MR_Word libs__globals__Option_5,
#line 304 "globals.m"
  MR_Word * libs__globals__Value_6)
#line 304 "globals.m"
{
#line 790 "globals.m"
  {
#line 790 "globals.m"
    MR_bool libs__globals__succeeded;
#line 790 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 790 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 707 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)));
#line 707 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)));
#line 707 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 707 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 707 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 707 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 707 "globals.m"
    MR_Word libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
#line 707 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 707 "globals.m"
    MR_Word libs__globals__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 11)));
#line 764 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 794 "globals.m"
    MR_Word libs__globals__MaybeInt_8;

#line 764 "globals.m"
    {
#line 764 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 764 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 792 "globals.m"
    libs__globals__succeeded = ((((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 792 "globals.m"
    if (libs__globals__succeeded)
#line 792 "globals.m"
      {
#line 792 "globals.m"
        libs__globals__MaybeInt_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 1)));
#line 793 "globals.m"
        *libs__globals__Value_6 = libs__globals__MaybeInt_8;
#line 792 "globals.m"
      }
#line 792 "globals.m"
    else
#line 795 "globals.m"
      {
#line 795 "globals.m"
        {
#line 795 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_maybe_int_option\'/3", (MR_String) "invalid maybe_int option");
#line 795 "globals.m"
          return;
        }
#line 795 "globals.m"
      }
#line 790 "globals.m"
  }
#line 304 "globals.m"
}

#line 303 "globals.m"
void MR_CALL 
libs__globals__lookup_int_option_3_p_0(
#line 303 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 303 "globals.m"
  MR_Word libs__globals__Option_5,
#line 303 "globals.m"
  MR_Integer * libs__globals__Value_6)
#line 303 "globals.m"
{
#line 782 "globals.m"
  {
#line 782 "globals.m"
    MR_bool libs__globals__succeeded;
#line 782 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 782 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 707 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)));
#line 707 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)));
#line 707 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 707 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 707 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 707 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 707 "globals.m"
    MR_Word libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
#line 707 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 707 "globals.m"
    MR_Word libs__globals__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 11)));
#line 764 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 786 "globals.m"
    MR_Integer libs__globals__Int_8;

#line 764 "globals.m"
    {
#line 764 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 764 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 784 "globals.m"
    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 2)));
#line 784 "globals.m"
    if (libs__globals__succeeded)
#line 784 "globals.m"
      {
#line 784 "globals.m"
        libs__globals__Int_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), libs__globals__OptionData_7, (MR_Integer) 0)));
#line 785 "globals.m"
        *libs__globals__Value_6 = libs__globals__Int_8;
#line 784 "globals.m"
      }
#line 784 "globals.m"
    else
#line 787 "globals.m"
      {
#line 787 "globals.m"
        {
#line 787 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_int_option\'/3", (MR_String) "invalid int option");
#line 787 "globals.m"
          return;
        }
#line 787 "globals.m"
      }
#line 782 "globals.m"
  }
#line 303 "globals.m"
}

#line 302 "globals.m"
MR_bool MR_CALL 
libs__globals__lookup_bool_option_3_p_1(
#line 302 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 302 "globals.m"
  MR_Word libs__globals__Option_5,
#line 302 "globals.m"
  MR_Word libs__globals__Value_6)
#line 302 "globals.m"
{
#line 766 "globals.m"
  {
#line 766 "globals.m"
    MR_bool libs__globals__succeeded;
#line 766 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 766 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 707 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)));
#line 707 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)));
#line 707 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 707 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 707 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 707 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 707 "globals.m"
    MR_Word libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
#line 707 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 707 "globals.m"
    MR_Word libs__globals__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 11)));
#line 764 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 770 "globals.m"
    MR_Word libs__globals__Bool_8;

#line 764 "globals.m"
    {
#line 764 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 764 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 768 "globals.m"
    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 1)));
#line 768 "globals.m"
    if (libs__globals__succeeded)
#line 768 "globals.m"
      {
#line 768 "globals.m"
        libs__globals__Bool_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__OptionData_7, (MR_Integer) 0)));
#line 769 "globals.m"
        libs__globals__succeeded = (libs__globals__Value_6 == libs__globals__Bool_8);
#line 768 "globals.m"
      }
#line 768 "globals.m"
    else
#line 771 "globals.m"
      {
#line 771 "globals.m"
        {
#line 771 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_bool_option\'/3", (MR_String) "invalid bool option");
        }
#line 771 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 771 "globals.m"
      }
#line 766 "globals.m"
    return libs__globals__succeeded;
#line 766 "globals.m"
  }
#line 302 "globals.m"
}

#line 301 "globals.m"
void MR_CALL 
libs__globals__lookup_bool_option_3_p_0(
#line 301 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 301 "globals.m"
  MR_Word libs__globals__Option_5,
#line 301 "globals.m"
  MR_Word * libs__globals__Value_6)
#line 301 "globals.m"
{
#line 766 "globals.m"
  {
#line 766 "globals.m"
    MR_bool libs__globals__succeeded;
#line 766 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 766 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 707 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)));
#line 707 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)));
#line 707 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 707 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 707 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 707 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 707 "globals.m"
    MR_Word libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
#line 707 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 707 "globals.m"
    MR_Word libs__globals__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 11)));
#line 764 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 770 "globals.m"
    MR_Word libs__globals__Bool_8;

#line 764 "globals.m"
    {
#line 764 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 764 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 768 "globals.m"
    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 1)));
#line 768 "globals.m"
    if (libs__globals__succeeded)
#line 768 "globals.m"
      {
#line 768 "globals.m"
        libs__globals__Bool_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__OptionData_7, (MR_Integer) 0)));
#line 769 "globals.m"
        *libs__globals__Value_6 = libs__globals__Bool_8;
#line 768 "globals.m"
      }
#line 768 "globals.m"
    else
#line 771 "globals.m"
      {
#line 771 "globals.m"
        {
#line 771 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_bool_option\'/3", (MR_String) "invalid bool option");
#line 771 "globals.m"
          return;
        }
#line 771 "globals.m"
      }
#line 766 "globals.m"
  }
#line 301 "globals.m"
}

#line 298 "globals.m"
void MR_CALL 
libs__globals__lookup_option_3_p_0(
#line 298 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 298 "globals.m"
  MR_Word libs__globals__Option_5,
#line 298 "globals.m"
  MR_Word * libs__globals__OptionData_6)
#line 298 "globals.m"
{
#line 762 "globals.m"
  {
#line 762 "globals.m"
    MR_bool libs__globals__succeeded;
#line 762 "globals.m"
    MR_Word libs__globals__OptionTable_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 707 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)));
#line 707 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)));
#line 707 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 707 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 707 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 707 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 707 "globals.m"
    MR_Word libs__globals__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
#line 707 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 707 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 11)));
#line 764 "globals.m"
    MR_Box libs__globals__conv0_OptionData_6;

#line 764 "globals.m"
    {
#line 764 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_7, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_6);
    }
#line 764 "globals.m"
    *libs__globals__OptionData_6 = ((MR_Word) libs__globals__conv0_OptionData_6);
#line 762 "globals.m"
  }
#line 298 "globals.m"
}

#line 295 "globals.m"
void MR_CALL 
libs__globals__set_file_install_cmd_3_p_0(
#line 295 "globals.m"
  MR_Word libs__globals__FileInstallCmd_4,
#line 295 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 295 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 295 "globals.m"
{
#line 758 "globals.m"
  {
#line 758 "globals.m"
    MR_bool libs__globals__succeeded;
#line 758 "globals.m"
    MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
#line 758 "globals.m"
    MR_Word libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)));
#line 758 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 758 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 758 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 758 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 758 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 758 "globals.m"
    MR_Word libs__globals__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 758 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)));
#line 758 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 758 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 758 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
#line 758 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
#line 758 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
#line 758 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
#line 758 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 758 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 758 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 758 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 11)));
#line 758 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));

#line 758 "globals.m"
    {
#line 758 "globals.m"
      MR_Word base;
#line 758 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 758 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
#line 758 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__V_9_9));
#line 758 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__globals__V_10_10));
#line 758 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((libs__globals__V_11_11 | ((((libs__globals__V_12_12 << (MR_Integer) 2)) | ((((libs__globals__V_13_13 << (MR_Integer) 5)) | ((((libs__globals__V_14_14 << (MR_Integer) 7)) | ((((libs__globals__V_15_15 << (MR_Integer) 9)) | ((libs__globals__V_16_16 << (MR_Integer) 11)))))))))))));
#line 758 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (libs__globals__V_17_17));
#line 758 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((libs__globals__V_18_18 | ((libs__globals__V_19_19 << (MR_Integer) 2)))));
#line 758 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_20_20));
#line 758 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_21_21));
#line 758 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_22_22));
#line 758 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__V_23_23));
#line 758 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_24_24 | ((((libs__globals__V_25_25 << (MR_Integer) 3)) | ((libs__globals__V_26_26 << (MR_Integer) 6)))))));
#line 758 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__FileInstallCmd_4));
#line 758 "globals.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (libs__globals__V_28_28));
#line 758 "globals.m"
    }
#line 758 "globals.m"
  }
#line 295 "globals.m"
}

#line 293 "globals.m"
void MR_CALL 
libs__globals__set_maybe_feedback_info_3_p_0(
#line 293 "globals.m"
  MR_Word libs__globals__MaybeFeedback_4,
#line 293 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 293 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 293 "globals.m"
{
#line 755 "globals.m"
  {
#line 755 "globals.m"
    MR_bool libs__globals__succeeded;
#line 755 "globals.m"
    MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
#line 755 "globals.m"
    MR_Word libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)));
#line 755 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 755 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 755 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 755 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 755 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 755 "globals.m"
    MR_Word libs__globals__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 755 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)));
#line 755 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 755 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 755 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
#line 755 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
#line 755 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
#line 755 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 755 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 755 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 755 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
#line 755 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 11)));
#line 755 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));

#line 755 "globals.m"
    {
#line 755 "globals.m"
      MR_Word base;
#line 755 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 755 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
#line 755 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__V_9_9));
#line 755 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__globals__V_10_10));
#line 755 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((libs__globals__V_11_11 | ((((libs__globals__V_12_12 << (MR_Integer) 2)) | ((((libs__globals__V_13_13 << (MR_Integer) 5)) | ((((libs__globals__V_14_14 << (MR_Integer) 7)) | ((((libs__globals__V_15_15 << (MR_Integer) 9)) | ((libs__globals__V_16_16 << (MR_Integer) 11)))))))))))));
#line 755 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (libs__globals__V_17_17));
#line 755 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((libs__globals__V_18_18 | ((libs__globals__V_19_19 << (MR_Integer) 2)))));
#line 755 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_20_20));
#line 755 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_21_21));
#line 755 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_22_22));
#line 755 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__MaybeFeedback_4));
#line 755 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_24_24 | ((((libs__globals__V_25_25 << (MR_Integer) 3)) | ((libs__globals__V_26_26 << (MR_Integer) 6)))))));
#line 755 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_27_27));
#line 755 "globals.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (libs__globals__V_28_28));
#line 755 "globals.m"
    }
#line 755 "globals.m"
  }
#line 293 "globals.m"
}

#line 291 "globals.m"
void MR_CALL 
libs__globals__set_ssdb_trace_level_3_p_0(
#line 291 "globals.m"
  MR_Word libs__globals__SSTraceLevel_4,
#line 291 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 291 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 291 "globals.m"
{
#line 752 "globals.m"
  {
#line 752 "globals.m"
    MR_bool libs__globals__succeeded;
#line 752 "globals.m"
    MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
#line 752 "globals.m"
    MR_Word libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)));
#line 752 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 752 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 752 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 752 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 752 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 752 "globals.m"
    MR_Word libs__globals__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 752 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)));
#line 752 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 752 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
#line 752 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
#line 752 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
#line 752 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
#line 752 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 752 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 752 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 752 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
#line 752 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 11)));
#line 752 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) & (MR_Integer) 3);

#line 752 "globals.m"
    {
#line 752 "globals.m"
      MR_Word base;
#line 752 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 752 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
#line 752 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__V_9_9));
#line 752 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__globals__V_10_10));
#line 752 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((libs__globals__V_11_11 | ((((libs__globals__V_12_12 << (MR_Integer) 2)) | ((((libs__globals__V_13_13 << (MR_Integer) 5)) | ((((libs__globals__V_14_14 << (MR_Integer) 7)) | ((((libs__globals__V_15_15 << (MR_Integer) 9)) | ((libs__globals__V_16_16 << (MR_Integer) 11)))))))))))));
#line 752 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (libs__globals__V_17_17));
#line 752 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((libs__globals__SSTraceLevel_4 | ((libs__globals__V_19_19 << (MR_Integer) 2)))));
#line 752 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_20_20));
#line 752 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_21_21));
#line 752 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_22_22));
#line 752 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__V_23_23));
#line 752 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_24_24 | ((((libs__globals__V_25_25 << (MR_Integer) 3)) | ((libs__globals__V_26_26 << (MR_Integer) 6)))))));
#line 752 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_27_27));
#line 752 "globals.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (libs__globals__V_28_28));
#line 752 "globals.m"
    }
#line 752 "globals.m"
  }
#line 291 "globals.m"
}

#line 290 "globals.m"
void MR_CALL 
libs__globals__set_trace_level_none_2_p_0(
#line 290 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_4,
#line 290 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_5)
#line 290 "globals.m"
{
#line 748 "globals.m"
  {
#line 748 "globals.m"
    MR_bool libs__globals__succeeded;
#line 748 "globals.m"
    MR_Word libs__globals__V_7_7;
#line 749 "globals.m"
    MR_Word libs__globals__V_8_8;
#line 749 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 749 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 749 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 749 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 749 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 749 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 749 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 749 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 749 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 749 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 749 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 749 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 749 "globals.m"
    MR_Word libs__globals__V_22_22;
#line 749 "globals.m"
    MR_Word libs__globals__V_23_23;
#line 749 "globals.m"
    MR_Word libs__globals__V_24_24;
#line 749 "globals.m"
    MR_Word libs__globals__V_25_25;
#line 749 "globals.m"
    MR_Word libs__globals__V_26_26;
#line 749 "globals.m"
    MR_Word libs__globals__V_27_27;
#line 749 "globals.m"
    MR_Word libs__globals__V_15_15;

#line 749 "globals.m"
    {
#line 749 "globals.m"
      libs__globals__V_7_7 = libs__trace_params__trace_level_none_0_f_0();
    }
#line 749 "globals.m"
    libs__globals__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 0)));
#line 749 "globals.m"
    libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 1)));
#line 749 "globals.m"
    libs__globals__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 749 "globals.m"
    libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 749 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 749 "globals.m"
    libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 749 "globals.m"
    libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 749 "globals.m"
    libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 749 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 3)));
#line 749 "globals.m"
    libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 749 "globals.m"
    libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 749 "globals.m"
    libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 5)));
#line 749 "globals.m"
    libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 6)));
#line 749 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 7)));
#line 749 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 8)));
#line 749 "globals.m"
    libs__globals__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 749 "globals.m"
    libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 749 "globals.m"
    libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 749 "globals.m"
    libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 10)));
#line 749 "globals.m"
    libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 11)));
#line 749 "globals.m"
    {
#line 749 "globals.m"
      MR_Word base;
#line 749 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 749 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_5 = base;
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__V_8_8));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__globals__V_9_9));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((libs__globals__V_10_10 | ((((libs__globals__V_11_11 << (MR_Integer) 2)) | ((((libs__globals__V_12_12 << (MR_Integer) 5)) | ((((libs__globals__V_13_13 << (MR_Integer) 7)) | ((((libs__globals__V_14_14 << (MR_Integer) 9)) | ((libs__globals__V_7_7 << (MR_Integer) 11)))))))))))));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (libs__globals__V_16_16));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((libs__globals__V_17_17 | ((libs__globals__V_18_18 << (MR_Integer) 2)))));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_19_19));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_20_20));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_21_21));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__V_22_22));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_23_23 | ((((libs__globals__V_24_24 << (MR_Integer) 3)) | ((libs__globals__V_25_25 << (MR_Integer) 6)))))));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_26_26));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (libs__globals__V_27_27));
#line 749 "globals.m"
    }
#line 748 "globals.m"
  }
#line 290 "globals.m"
}

#line 289 "globals.m"
void MR_CALL 
libs__globals__set_trace_level_3_p_0(
#line 289 "globals.m"
  MR_Word libs__globals__TraceLevel_4,
#line 289 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 289 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 289 "globals.m"
{
#line 747 "globals.m"
  {
#line 747 "globals.m"
    MR_bool libs__globals__succeeded;
#line 747 "globals.m"
    MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
#line 747 "globals.m"
    MR_Word libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)));
#line 747 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 747 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 747 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 747 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 747 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 747 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)));
#line 747 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 747 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 747 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
#line 747 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
#line 747 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
#line 747 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
#line 747 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 747 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 747 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 747 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
#line 747 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 11)));
#line 747 "globals.m"
    MR_Word libs__globals__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);

#line 747 "globals.m"
    {
#line 747 "globals.m"
      MR_Word base;
#line 747 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 747 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
#line 747 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__V_9_9));
#line 747 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__globals__V_10_10));
#line 747 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((libs__globals__V_11_11 | ((((libs__globals__V_12_12 << (MR_Integer) 2)) | ((((libs__globals__V_13_13 << (MR_Integer) 5)) | ((((libs__globals__V_14_14 << (MR_Integer) 7)) | ((((libs__globals__V_15_15 << (MR_Integer) 9)) | ((libs__globals__TraceLevel_4 << (MR_Integer) 11)))))))))))));
#line 747 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (libs__globals__V_17_17));
#line 747 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((libs__globals__V_18_18 | ((libs__globals__V_19_19 << (MR_Integer) 2)))));
#line 747 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_20_20));
#line 747 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_21_21));
#line 747 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_22_22));
#line 747 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__V_23_23));
#line 747 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_24_24 | ((((libs__globals__V_25_25 << (MR_Integer) 3)) | ((libs__globals__V_26_26 << (MR_Integer) 6)))))));
#line 747 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_27_27));
#line 747 "globals.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (libs__globals__V_28_28));
#line 747 "globals.m"
    }
#line 747 "globals.m"
  }
#line 289 "globals.m"
}

#line 288 "globals.m"
void MR_CALL 
libs__globals__set_tags_method_3_p_0(
#line 288 "globals.m"
  MR_Word libs__globals__Tags_Method_4,
#line 288 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 288 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 288 "globals.m"
{
#line 744 "globals.m"
  {
#line 744 "globals.m"
    MR_bool libs__globals__succeeded;
#line 744 "globals.m"
    MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
#line 744 "globals.m"
    MR_Word libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)));
#line 744 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 744 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 744 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 744 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 744 "globals.m"
    MR_Word libs__globals__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 744 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)));
#line 744 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 744 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 744 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
#line 744 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
#line 744 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
#line 744 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
#line 744 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 744 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 744 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 744 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
#line 744 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 11)));
#line 744 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);

#line 744 "globals.m"
    {
#line 744 "globals.m"
      MR_Word base;
#line 744 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 744 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
#line 744 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__V_9_9));
#line 744 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__globals__V_10_10));
#line 744 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((libs__globals__V_11_11 | ((((libs__globals__V_12_12 << (MR_Integer) 2)) | ((((libs__globals__Tags_Method_4 << (MR_Integer) 5)) | ((((libs__globals__V_14_14 << (MR_Integer) 7)) | ((((libs__globals__V_15_15 << (MR_Integer) 9)) | ((libs__globals__V_16_16 << (MR_Integer) 11)))))))))))));
#line 744 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (libs__globals__V_17_17));
#line 744 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((libs__globals__V_18_18 | ((libs__globals__V_19_19 << (MR_Integer) 2)))));
#line 744 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_20_20));
#line 744 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_21_21));
#line 744 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_22_22));
#line 744 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__V_23_23));
#line 744 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_24_24 | ((((libs__globals__V_25_25 << (MR_Integer) 3)) | ((libs__globals__V_26_26 << (MR_Integer) 6)))))));
#line 744 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_27_27));
#line 744 "globals.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (libs__globals__V_28_28));
#line 744 "globals.m"
    }
#line 744 "globals.m"
  }
#line 288 "globals.m"
}

#line 287 "globals.m"
void MR_CALL 
libs__globals__set_gc_method_3_p_0(
#line 287 "globals.m"
  MR_Word libs__globals__GC_Method_4,
#line 287 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 287 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 287 "globals.m"
{
#line 741 "globals.m"
  {
#line 741 "globals.m"
    MR_bool libs__globals__succeeded;
#line 741 "globals.m"
    MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
#line 741 "globals.m"
    MR_Word libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)));
#line 741 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 741 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 741 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 741 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 741 "globals.m"
    MR_Word libs__globals__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 741 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)));
#line 741 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 741 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 741 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
#line 741 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
#line 741 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
#line 741 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
#line 741 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 741 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 741 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 741 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
#line 741 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 11)));
#line 741 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);

#line 741 "globals.m"
    {
#line 741 "globals.m"
      MR_Word base;
#line 741 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 741 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
#line 741 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__V_9_9));
#line 741 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__globals__V_10_10));
#line 741 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((libs__globals__V_11_11 | ((((libs__globals__GC_Method_4 << (MR_Integer) 2)) | ((((libs__globals__V_13_13 << (MR_Integer) 5)) | ((((libs__globals__V_14_14 << (MR_Integer) 7)) | ((((libs__globals__V_15_15 << (MR_Integer) 9)) | ((libs__globals__V_16_16 << (MR_Integer) 11)))))))))))));
#line 741 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (libs__globals__V_17_17));
#line 741 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((libs__globals__V_18_18 | ((libs__globals__V_19_19 << (MR_Integer) 2)))));
#line 741 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_20_20));
#line 741 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_21_21));
#line 741 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_22_22));
#line 741 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__V_23_23));
#line 741 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_24_24 | ((((libs__globals__V_25_25 << (MR_Integer) 3)) | ((libs__globals__V_26_26 << (MR_Integer) 6)))))));
#line 741 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_27_27));
#line 741 "globals.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (libs__globals__V_28_28));
#line 741 "globals.m"
    }
#line 741 "globals.m"
  }
#line 287 "globals.m"
}

#line 286 "globals.m"
void MR_CALL 
libs__globals__set_options_3_p_0(
#line 286 "globals.m"
  MR_Word libs__globals__Options_4,
#line 286 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 286 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 286 "globals.m"
{
#line 733 "globals.m"
  {
#line 733 "globals.m"
    MR_bool libs__globals__succeeded;
#line 733 "globals.m"
    MR_Word libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)));
#line 733 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 733 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 733 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 733 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 733 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 733 "globals.m"
    MR_Word libs__globals__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 733 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)));
#line 733 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 733 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 733 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
#line 733 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
#line 733 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
#line 733 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
#line 733 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 733 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 733 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 733 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
#line 733 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 11)));
#line 733 "globals.m"
    MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));

#line 733 "globals.m"
    {
#line 733 "globals.m"
      MR_Word base;
#line 733 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 733 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__Options_4));
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__globals__V_10_10));
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((libs__globals__V_11_11 | ((((libs__globals__V_12_12 << (MR_Integer) 2)) | ((((libs__globals__V_13_13 << (MR_Integer) 5)) | ((((libs__globals__V_14_14 << (MR_Integer) 7)) | ((((libs__globals__V_15_15 << (MR_Integer) 9)) | ((libs__globals__V_16_16 << (MR_Integer) 11)))))))))))));
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (libs__globals__V_17_17));
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((libs__globals__V_18_18 | ((libs__globals__V_19_19 << (MR_Integer) 2)))));
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_20_20));
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_21_21));
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_22_22));
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__V_23_23));
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_24_24 | ((((libs__globals__V_25_25 << (MR_Integer) 3)) | ((libs__globals__V_26_26 << (MR_Integer) 6)))))));
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_27_27));
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (libs__globals__V_28_28));
#line 733 "globals.m"
    }
#line 733 "globals.m"
  }
#line 286 "globals.m"
}

#line 284 "globals.m"
void MR_CALL 
libs__globals__set_option_4_p_0(
#line 284 "globals.m"
  MR_Word libs__globals__Option_5,
#line 284 "globals.m"
  MR_Word libs__globals__OptionData_6,
#line 284 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_10,
#line 284 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_11)
#line 284 "globals.m"
{
#line 735 "globals.m"
  {
#line 735 "globals.m"
    MR_bool libs__globals__succeeded;
#line 735 "globals.m"
    MR_Word libs__globals__OptionTable0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 0)));
#line 735 "globals.m"
    MR_Word libs__globals__OptionTable_9;
#line 707 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)));
#line 707 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 3)));
#line 707 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 707 "globals.m"
    MR_Word libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 5)));
#line 707 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 6)));
#line 707 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 7)));
#line 707 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 8)));
#line 707 "globals.m"
    MR_Word libs__globals__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 10)));
#line 707 "globals.m"
    MR_Word libs__globals__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 11)));
#line 733 "globals.m"
    MR_Word libs__globals__V_41_41;
#line 733 "globals.m"
    MR_Word libs__globals__V_42_42;
#line 733 "globals.m"
    MR_Word libs__globals__V_43_43;
#line 733 "globals.m"
    MR_Word libs__globals__V_44_44;
#line 733 "globals.m"
    MR_Word libs__globals__V_45_45;
#line 733 "globals.m"
    MR_Word libs__globals__V_46_46;
#line 733 "globals.m"
    MR_Word libs__globals__V_47_47;
#line 733 "globals.m"
    MR_Word libs__globals__V_48_48;
#line 733 "globals.m"
    MR_Word libs__globals__V_49_49;
#line 733 "globals.m"
    MR_Word libs__globals__V_50_50;
#line 733 "globals.m"
    MR_Word libs__globals__V_51_51;
#line 733 "globals.m"
    MR_Word libs__globals__V_52_52;
#line 733 "globals.m"
    MR_Word libs__globals__V_53_53;
#line 733 "globals.m"
    MR_Word libs__globals__V_54_54;
#line 733 "globals.m"
    MR_Word libs__globals__V_55_55;
#line 733 "globals.m"
    MR_Word libs__globals__V_56_56;
#line 733 "globals.m"
    MR_Word libs__globals__V_57_57;
#line 733 "globals.m"
    MR_Word libs__globals__V_58_58;
#line 733 "globals.m"
    MR_Word libs__globals__V_59_59;
#line 733 "globals.m"
    MR_Word libs__globals__V_40_40;

#line 737 "globals.m"
    {
#line 737 "globals.m"
      mercury__map__set_4_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (libs__globals__Option_5)), ((MR_Box) (libs__globals__OptionData_6)), libs__globals__OptionTable0_8, &libs__globals__OptionTable_9);
    }
#line 733 "globals.m"
    libs__globals__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 0)));
#line 733 "globals.m"
    libs__globals__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)));
#line 733 "globals.m"
    libs__globals__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 733 "globals.m"
    libs__globals__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 733 "globals.m"
    libs__globals__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 733 "globals.m"
    libs__globals__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 733 "globals.m"
    libs__globals__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 733 "globals.m"
    libs__globals__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 733 "globals.m"
    libs__globals__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 3)));
#line 733 "globals.m"
    libs__globals__V_49_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 733 "globals.m"
    libs__globals__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 733 "globals.m"
    libs__globals__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 5)));
#line 733 "globals.m"
    libs__globals__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 6)));
#line 733 "globals.m"
    libs__globals__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 7)));
#line 733 "globals.m"
    libs__globals__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 8)));
#line 733 "globals.m"
    libs__globals__V_55_55 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 733 "globals.m"
    libs__globals__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 733 "globals.m"
    libs__globals__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 733 "globals.m"
    libs__globals__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 10)));
#line 733 "globals.m"
    libs__globals__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 11)));
#line 733 "globals.m"
    {
#line 733 "globals.m"
      MR_Word base;
#line 733 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 733 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_11 = base;
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__OptionTable_9));
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__globals__V_41_41));
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((libs__globals__V_42_42 | ((((libs__globals__V_43_43 << (MR_Integer) 2)) | ((((libs__globals__V_44_44 << (MR_Integer) 5)) | ((((libs__globals__V_45_45 << (MR_Integer) 7)) | ((((libs__globals__V_46_46 << (MR_Integer) 9)) | ((libs__globals__V_47_47 << (MR_Integer) 11)))))))))))));
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (libs__globals__V_48_48));
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((libs__globals__V_49_49 | ((libs__globals__V_50_50 << (MR_Integer) 2)))));
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_51_51));
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_52_52));
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_53_53));
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__V_54_54));
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_55_55 | ((((libs__globals__V_56_56 << (MR_Integer) 3)) | ((libs__globals__V_57_57 << (MR_Integer) 6)))))));
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_58_58));
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (libs__globals__V_59_59));
#line 733 "globals.m"
    }
#line 735 "globals.m"
  }
#line 284 "globals.m"
}

#line 281 "globals.m"
void MR_CALL 
libs__globals__get_limit_error_contexts_map_2_p_0(
#line 281 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 281 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 281 "globals.m"
{
#line 726 "globals.m"
  {
#line 726 "globals.m"
    MR_bool libs__globals__succeeded;
#line 726 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 726 "globals.m"
    MR_Word libs__globals__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
#line 726 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 726 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 726 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 726 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 726 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 726 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 726 "globals.m"
    MR_Word libs__globals__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
#line 726 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 726 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 726 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 726 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 726 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 726 "globals.m"
    MR_Word libs__globals__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 726 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 726 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 726 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 726 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));

#line 726 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 726 "globals.m"
  }
#line 281 "globals.m"
}

#line 280 "globals.m"
void MR_CALL 
libs__globals__get_file_install_cmd_2_p_0(
#line 280 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 280 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 280 "globals.m"
{
#line 725 "globals.m"
  {
#line 725 "globals.m"
    MR_bool libs__globals__succeeded;
#line 725 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 725 "globals.m"
    MR_Word libs__globals__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
#line 725 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 725 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 725 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 725 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 725 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 725 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 725 "globals.m"
    MR_Word libs__globals__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
#line 725 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 725 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 725 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 725 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 725 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 725 "globals.m"
    MR_Word libs__globals__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 725 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 725 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 725 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 725 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 725 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 725 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 725 "globals.m"
  }
#line 280 "globals.m"
}

#line 279 "globals.m"
void MR_CALL 
libs__globals__get_target_env_type_2_p_0(
#line 279 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 279 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 279 "globals.m"
{
#line 724 "globals.m"
  {
#line 724 "globals.m"
    MR_bool libs__globals__succeeded;
#line 724 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 724 "globals.m"
    MR_Word libs__globals__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
#line 724 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 724 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 724 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 724 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 724 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 724 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 724 "globals.m"
    MR_Word libs__globals__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
#line 724 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 724 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 724 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 724 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 724 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 724 "globals.m"
    MR_Word libs__globals__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 724 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 724 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 724 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 724 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 724 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 724 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 724 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 724 "globals.m"
  }
#line 279 "globals.m"
}

#line 278 "globals.m"
void MR_CALL 
libs__globals__get_system_env_type_2_p_0(
#line 278 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 278 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 278 "globals.m"
{
#line 723 "globals.m"
  {
#line 723 "globals.m"
    MR_bool libs__globals__succeeded;
#line 723 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 723 "globals.m"
    MR_Word libs__globals__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
#line 723 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 723 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 723 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 723 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 723 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 723 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 723 "globals.m"
    MR_Word libs__globals__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
#line 723 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 723 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 723 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 723 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 723 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 723 "globals.m"
    MR_Word libs__globals__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 723 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 723 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 723 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 723 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 723 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 723 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 723 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 723 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 723 "globals.m"
  }
#line 278 "globals.m"
}

#line 277 "globals.m"
void MR_CALL 
libs__globals__get_host_env_type_2_p_0(
#line 277 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 277 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 277 "globals.m"
{
#line 722 "globals.m"
  {
#line 722 "globals.m"
    MR_bool libs__globals__succeeded;
#line 722 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 722 "globals.m"
    MR_Word libs__globals__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
#line 722 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 722 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 722 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 722 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 722 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 722 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 722 "globals.m"
    MR_Word libs__globals__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
#line 722 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 722 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 722 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 722 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 722 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 722 "globals.m"
    MR_Word libs__globals__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 722 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 722 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 722 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 722 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 722 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 722 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 722 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 722 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 722 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 722 "globals.m"
  }
#line 277 "globals.m"
}

#line 276 "globals.m"
void MR_CALL 
libs__globals__get_maybe_feedback_info_2_p_0(
#line 276 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 276 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 276 "globals.m"
{
#line 721 "globals.m"
  {
#line 721 "globals.m"
    MR_bool libs__globals__succeeded;
#line 721 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 721 "globals.m"
    MR_Word libs__globals__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
#line 721 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 721 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 721 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 721 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 721 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 721 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 721 "globals.m"
    MR_Word libs__globals__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
#line 721 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 721 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 721 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 721 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 721 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 721 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 721 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 721 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 721 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 721 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 721 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 721 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 721 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 721 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 721 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 721 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 721 "globals.m"
  }
#line 276 "globals.m"
}

#line 275 "globals.m"
void MR_CALL 
libs__globals__get_reuse_strategy_2_p_0(
#line 275 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 275 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 275 "globals.m"
{
#line 720 "globals.m"
  {
#line 720 "globals.m"
    MR_bool libs__globals__succeeded;
#line 720 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 720 "globals.m"
    MR_Word libs__globals__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
#line 720 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 720 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 720 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 720 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 720 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 720 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 720 "globals.m"
    MR_Word libs__globals__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
#line 720 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 720 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 720 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 720 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 720 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 720 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 720 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 720 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 720 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 720 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 720 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 720 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 720 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 720 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 720 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 720 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 720 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 720 "globals.m"
  }
#line 275 "globals.m"
}

#line 273 "globals.m"
void MR_CALL 
libs__globals__get_csharp_compiler_type_2_p_0(
#line 273 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 273 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 273 "globals.m"
{
#line 719 "globals.m"
  {
#line 719 "globals.m"
    MR_bool libs__globals__succeeded;
#line 719 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 719 "globals.m"
    MR_Word libs__globals__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
#line 719 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 719 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 719 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 719 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 719 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 719 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 719 "globals.m"
    MR_Word libs__globals__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
#line 719 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 719 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 719 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 719 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 719 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 719 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 719 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 719 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 719 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 719 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 719 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 719 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 719 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 719 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 719 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 719 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 719 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 719 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 719 "globals.m"
  }
#line 273 "globals.m"
}

#line 272 "globals.m"
void MR_CALL 
libs__globals__get_c_compiler_type_2_p_0(
#line 272 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 272 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 272 "globals.m"
{
#line 718 "globals.m"
  {
#line 718 "globals.m"
    MR_bool libs__globals__succeeded;
#line 718 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 718 "globals.m"
    MR_Word libs__globals__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
#line 718 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
#line 718 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 718 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 718 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 718 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 718 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 718 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 718 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 718 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 718 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 718 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 718 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 718 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 718 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 718 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 718 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 718 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 718 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 718 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 718 "globals.m"
  }
#line 272 "globals.m"
}

#line 271 "globals.m"
void MR_CALL 
libs__globals__get_maybe_thread_safe_2_p_0(
#line 271 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 271 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 271 "globals.m"
{
#line 717 "globals.m"
  {
#line 717 "globals.m"
    MR_bool libs__globals__succeeded;
#line 717 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 717 "globals.m"
    MR_Word libs__globals__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
#line 717 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 717 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 717 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 717 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 717 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 717 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 717 "globals.m"
    MR_Word libs__globals__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
#line 717 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 717 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 717 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 717 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 717 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 717 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 717 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 717 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 717 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 717 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 717 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 717 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 717 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 717 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 717 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 717 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 717 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 717 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 717 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 717 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 717 "globals.m"
  }
#line 271 "globals.m"
}

#line 270 "globals.m"
void MR_CALL 
libs__globals__get_ssdb_trace_level_2_p_0(
#line 270 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 270 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 270 "globals.m"
{
#line 716 "globals.m"
  {
#line 716 "globals.m"
    MR_bool libs__globals__succeeded;
#line 716 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 716 "globals.m"
    MR_Word libs__globals__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
#line 716 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 716 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 716 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 716 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 716 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 716 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 716 "globals.m"
    MR_Word libs__globals__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
#line 716 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 716 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 716 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 716 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 716 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 716 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 716 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 716 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 716 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 716 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 716 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 716 "globals.m"
    libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 716 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 716 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 716 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 716 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 716 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 716 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 716 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 716 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 716 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 716 "globals.m"
  }
#line 270 "globals.m"
}

#line 269 "globals.m"
void MR_CALL 
libs__globals__get_trace_suppress_2_p_0(
#line 269 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 269 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 269 "globals.m"
{
#line 715 "globals.m"
  {
#line 715 "globals.m"
    MR_bool libs__globals__succeeded;
#line 715 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 715 "globals.m"
    MR_Word libs__globals__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
#line 715 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 715 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 715 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 715 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 715 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 715 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 715 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 715 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 715 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 715 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 715 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 715 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 715 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 715 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 715 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 715 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 715 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 715 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
#line 715 "globals.m"
    libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 715 "globals.m"
    libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 715 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 715 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 715 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 715 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 715 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 715 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 715 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 715 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 715 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 715 "globals.m"
  }
#line 269 "globals.m"
}

#line 268 "globals.m"
void MR_CALL 
libs__globals__get_trace_level_2_p_0(
#line 268 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 268 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 268 "globals.m"
{
#line 714 "globals.m"
  {
#line 714 "globals.m"
    MR_bool libs__globals__succeeded;
#line 714 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 714 "globals.m"
    MR_Word libs__globals__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
#line 714 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 714 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 714 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 714 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 714 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 714 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 714 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 714 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 714 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 714 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 714 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 714 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 714 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 714 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 714 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 714 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 714 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 714 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 714 "globals.m"
    libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
#line 714 "globals.m"
    libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 714 "globals.m"
    libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 714 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 714 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 714 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 714 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 714 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 714 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 714 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 714 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 714 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 714 "globals.m"
  }
#line 268 "globals.m"
}

#line 267 "globals.m"
void MR_CALL 
libs__globals__get_termination2_norm_2_p_0(
#line 267 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 267 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 267 "globals.m"
{
#line 713 "globals.m"
  {
#line 713 "globals.m"
    MR_bool libs__globals__succeeded;
#line 713 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 713 "globals.m"
    MR_Word libs__globals__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
#line 713 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 713 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 713 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 713 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 713 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 713 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 713 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 713 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 713 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 713 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 713 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 713 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 713 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 713 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 713 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 713 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 713 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 713 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 713 "globals.m"
    libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 713 "globals.m"
    libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
#line 713 "globals.m"
    libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 713 "globals.m"
    libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 713 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 713 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 713 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 713 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 713 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 713 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 713 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 713 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 713 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 713 "globals.m"
  }
#line 267 "globals.m"
}

#line 266 "globals.m"
void MR_CALL 
libs__globals__get_termination_norm_2_p_0(
#line 266 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 266 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 266 "globals.m"
{
#line 712 "globals.m"
  {
#line 712 "globals.m"
    MR_bool libs__globals__succeeded;
#line 712 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 712 "globals.m"
    MR_Word libs__globals__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
#line 712 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 712 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 712 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 712 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 712 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 712 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 712 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 712 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 712 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 712 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 712 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 712 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 712 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 712 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 712 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 712 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 712 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 712 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 712 "globals.m"
    libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 712 "globals.m"
    libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 712 "globals.m"
    libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
#line 712 "globals.m"
    libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 712 "globals.m"
    libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 712 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 712 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 712 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 712 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 712 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 712 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 712 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 712 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 712 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 712 "globals.m"
  }
#line 266 "globals.m"
}

#line 265 "globals.m"
void MR_CALL 
libs__globals__get_tags_method_2_p_0(
#line 265 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 265 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 265 "globals.m"
{
#line 711 "globals.m"
  {
#line 711 "globals.m"
    MR_bool libs__globals__succeeded;
#line 711 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 711 "globals.m"
    MR_Word libs__globals__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
#line 711 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 711 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 711 "globals.m"
    MR_Word libs__globals__V_8_8;
#line 711 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 711 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 711 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 711 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 711 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 711 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 711 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 711 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 711 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 711 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 711 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 711 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 711 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 711 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 711 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 711 "globals.m"
    libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 711 "globals.m"
    libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 711 "globals.m"
    libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 711 "globals.m"
    libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
#line 711 "globals.m"
    libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 711 "globals.m"
    libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 711 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 711 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 711 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 711 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 711 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 711 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 711 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 711 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 711 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 711 "globals.m"
  }
#line 265 "globals.m"
}

#line 264 "globals.m"
void MR_CALL 
libs__globals__get_gc_method_2_p_0(
#line 264 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 264 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 264 "globals.m"
{
#line 710 "globals.m"
  {
#line 710 "globals.m"
    MR_bool libs__globals__succeeded;
#line 710 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 710 "globals.m"
    MR_Word libs__globals__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
#line 710 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 710 "globals.m"
    MR_Word libs__globals__V_7_7;
#line 710 "globals.m"
    MR_Word libs__globals__V_8_8;
#line 710 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 710 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 710 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 710 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 710 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 710 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 710 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 710 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 710 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 710 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 710 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 710 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 710 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 710 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 710 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 710 "globals.m"
    libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 710 "globals.m"
    libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 710 "globals.m"
    libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 710 "globals.m"
    libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 710 "globals.m"
    libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
#line 710 "globals.m"
    libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 710 "globals.m"
    libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 710 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 710 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 710 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 710 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 710 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 710 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 710 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 710 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 710 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 710 "globals.m"
  }
#line 264 "globals.m"
}

#line 730 "globals.m"
static void MR_CALL 
libs__globals__get_backend_foreign_languages_2_p_0_1(
#line 730 "globals.m"
  MR_Box libs__globals__closure_arg,
#line 730 "globals.m"
  MR_Box libs__globals__wrapper_arg_1,
#line 730 "globals.m"
  MR_Box * libs__globals__wrapper_arg_2)
#line 730 "globals.m"
{
#line 730 "globals.m"
  {
#line 730 "globals.m"
    MR_Box libs__globals__closure = libs__globals__closure_arg;
#line 730 "globals.m"
    MR_Word libs__globals__conv0_ForeignLang_4;

#line 730 "globals.m"
    {
#line 730 "globals.m"
      libs__globals__convert_foreign_language_det_2_p_0(((MR_String) libs__globals__wrapper_arg_1), &libs__globals__conv0_ForeignLang_4);
    }
#line 730 "globals.m"
    *libs__globals__wrapper_arg_2 = ((MR_Box) (libs__globals__conv0_ForeignLang_4));
#line 730 "globals.m"
  }
#line 730 "globals.m"
}

#line 262 "globals.m"
void MR_CALL 
libs__globals__get_backend_foreign_languages_2_p_0(
#line 262 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 262 "globals.m"
  MR_Word * libs__globals__ForeignLangs_4)
#line 262 "globals.m"
{
#line 728 "globals.m"
  {
#line 728 "globals.m"
    MR_bool libs__globals__succeeded;
#line 728 "globals.m"
    MR_Word libs__globals__LangStrs_5;

#line 729 "globals.m"
    {
#line 729 "globals.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 258, &libs__globals__LangStrs_5);
    }
#line 730 "globals.m"
    {
#line 730 "globals.m"
      mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &libs__globals_scalar_common_2[4], libs__globals__LangStrs_5, libs__globals__ForeignLangs_4);
#line 730 "globals.m"
      return;
    }
#line 728 "globals.m"
  }
#line 262 "globals.m"
}

#line 261 "globals.m"
void MR_CALL 
libs__globals__get_target_2_p_0(
#line 261 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 261 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 261 "globals.m"
{
#line 709 "globals.m"
  {
#line 709 "globals.m"
    MR_bool libs__globals__succeeded;
#line 709 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 709 "globals.m"
    MR_Word libs__globals__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
#line 709 "globals.m"
    MR_Word libs__globals__V_6_6;
#line 709 "globals.m"
    MR_Word libs__globals__V_7_7;
#line 709 "globals.m"
    MR_Word libs__globals__V_8_8;
#line 709 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 709 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 709 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 709 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 709 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 709 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 709 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 709 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 709 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 709 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 709 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 709 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 709 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 709 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 709 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 709 "globals.m"
    libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 709 "globals.m"
    libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 709 "globals.m"
    libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 709 "globals.m"
    libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 709 "globals.m"
    libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 709 "globals.m"
    libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
#line 709 "globals.m"
    libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 709 "globals.m"
    libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 709 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 709 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 709 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 709 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 709 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 709 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 709 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 709 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 709 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 709 "globals.m"
  }
#line 261 "globals.m"
}

#line 260 "globals.m"
void MR_CALL 
libs__globals__get_op_mode_2_p_0(
#line 260 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 260 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 260 "globals.m"
{
#line 708 "globals.m"
  {
#line 708 "globals.m"
    MR_bool libs__globals__succeeded;
#line 708 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 708 "globals.m"
    MR_Word libs__globals__V_5_5;
#line 708 "globals.m"
    MR_Word libs__globals__V_6_6;
#line 708 "globals.m"
    MR_Word libs__globals__V_7_7;
#line 708 "globals.m"
    MR_Word libs__globals__V_8_8;
#line 708 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 708 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 708 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 708 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 708 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 708 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 708 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 708 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 708 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 708 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 708 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 708 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 708 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 708 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 708 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
#line 708 "globals.m"
    libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 708 "globals.m"
    libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 708 "globals.m"
    libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 708 "globals.m"
    libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 708 "globals.m"
    libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 708 "globals.m"
    libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 708 "globals.m"
    libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
#line 708 "globals.m"
    libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 708 "globals.m"
    libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 708 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 708 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 708 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 708 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 708 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 708 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 708 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 708 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 708 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 708 "globals.m"
  }
#line 260 "globals.m"
}

#line 259 "globals.m"
void MR_CALL 
libs__globals__get_options_2_p_0(
#line 259 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 259 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 259 "globals.m"
{
#line 707 "globals.m"
  {
#line 707 "globals.m"
    MR_bool libs__globals__succeeded;
#line 707 "globals.m"
    MR_Word libs__globals__V_4_4;
#line 707 "globals.m"
    MR_Word libs__globals__V_5_5;
#line 707 "globals.m"
    MR_Word libs__globals__V_6_6;
#line 707 "globals.m"
    MR_Word libs__globals__V_7_7;
#line 707 "globals.m"
    MR_Word libs__globals__V_8_8;
#line 707 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 707 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 707 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 707 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 707 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 707 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 707 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 707 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 707 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 707 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 707 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 707 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 707 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 707 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 707 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 707 "globals.m"
    libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
#line 707 "globals.m"
    libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
#line 707 "globals.m"
    libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 707 "globals.m"
    libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 707 "globals.m"
    libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 707 "globals.m"
    libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 707 "globals.m"
    libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 707 "globals.m"
    libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
#line 707 "globals.m"
    libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
#line 707 "globals.m"
    libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 707 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 707 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 707 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 707 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 707 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 707 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 707 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 707 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 707 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 707 "globals.m"
  }
#line 259 "globals.m"
}

#line 250 "globals.m"
void MR_CALL 
libs__globals__globals_init_21_p_0(
#line 250 "globals.m"
  MR_Word libs__globals__Options_22,
#line 250 "globals.m"
  MR_Word libs__globals__OpMode_23,
#line 250 "globals.m"
  MR_Word libs__globals__Target_24,
#line 250 "globals.m"
  MR_Word libs__globals__GC_Method_25,
#line 250 "globals.m"
  MR_Word libs__globals__TagsMethod_26,
#line 250 "globals.m"
  MR_Word libs__globals__TerminationNorm_27,
#line 250 "globals.m"
  MR_Word libs__globals__Termination2Norm_28,
#line 250 "globals.m"
  MR_Word libs__globals__TraceLevel_29,
#line 250 "globals.m"
  MR_Word libs__globals__TraceSuppress_30,
#line 250 "globals.m"
  MR_Word libs__globals__SSTraceLevel_31,
#line 250 "globals.m"
  MR_Word libs__globals__MaybeThreadSafe_32,
#line 250 "globals.m"
  MR_Word libs__globals__C_CompilerType_33,
#line 250 "globals.m"
  MR_Word libs__globals__CSharp_CompilerType_34,
#line 250 "globals.m"
  MR_Word libs__globals__ReuseStrategy_35,
#line 250 "globals.m"
  MR_Word libs__globals__MaybeFeedback_36,
#line 250 "globals.m"
  MR_Word libs__globals__HostEnvType_37,
#line 250 "globals.m"
  MR_Word libs__globals__SystemEnvType_38,
#line 250 "globals.m"
  MR_Word libs__globals__TargetEnvType_39,
#line 250 "globals.m"
  MR_Word libs__globals__FileInstallCmd_40,
#line 250 "globals.m"
  MR_Word libs__globals__LimitErrorContextsMap_41,
#line 250 "globals.m"
  MR_Word * libs__globals__Globals_42)
#line 250 "globals.m"
{
#line 701 "globals.m"
  {
#line 701 "globals.m"
    MR_bool libs__globals__succeeded;

#line 701 "globals.m"
    {
#line 701 "globals.m"
      MR_Word base;
#line 701 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 701 "globals.m"
      *libs__globals__Globals_42 = base;
#line 701 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__Options_22));
#line 701 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__globals__OpMode_23));
#line 701 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((libs__globals__Target_24 | ((((libs__globals__GC_Method_25 << (MR_Integer) 2)) | ((((libs__globals__TagsMethod_26 << (MR_Integer) 5)) | ((((libs__globals__TerminationNorm_27 << (MR_Integer) 7)) | ((((libs__globals__Termination2Norm_28 << (MR_Integer) 9)) | ((libs__globals__TraceLevel_29 << (MR_Integer) 11)))))))))))));
#line 701 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (libs__globals__TraceSuppress_30));
#line 701 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((libs__globals__SSTraceLevel_31 | ((libs__globals__MaybeThreadSafe_32 << (MR_Integer) 2)))));
#line 701 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__C_CompilerType_33));
#line 701 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__CSharp_CompilerType_34));
#line 701 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__ReuseStrategy_35));
#line 701 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__MaybeFeedback_36));
#line 701 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__HostEnvType_37 | ((((libs__globals__SystemEnvType_38 << (MR_Integer) 3)) | ((libs__globals__TargetEnvType_39 << (MR_Integer) 6)))))));
#line 701 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__FileInstallCmd_40));
#line 701 "globals.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (libs__globals__LimitErrorContextsMap_41));
#line 701 "globals.m"
    }
#line 701 "globals.m"
  }
#line 250 "globals.m"
}

#line 242 "globals.m"
void MR_CALL 
libs__globals__convert_limit_error_contexts_3_p_0(
#line 242 "globals.m"
  MR_Word libs__globals__Options_4,
#line 242 "globals.m"
  MR_Word * libs__globals__BadOptions_5,
#line 242 "globals.m"
  MR_Word * libs__globals__Map_6)
#line 242 "globals.m"
{
#line 573 "globals.m"
  {
#line 573 "globals.m"
    MR_bool libs__globals__succeeded;
#line 573 "globals.m"
    MR_Word libs__globals__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 573 "globals.m"
    MR_Word libs__globals__RevBadOptions_7;
#line 573 "globals.m"
    MR_Word libs__globals__V_9_9;

#line 575 "globals.m"
    {
#line 575 "globals.m"
      libs__globals__V_9_9 = mercury__map__init_0_f_0(libs__globals__TypeCtorInfo_10_10, (MR_Word) &libs__globals_scalar_common_1[0]);
    }
#line 574 "globals.m"
    {
#line 574 "globals.m"
      libs__globals__convert_limit_error_contexts_acc_5_p_0(libs__globals__Options_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__globals__RevBadOptions_7, libs__globals__V_9_9, libs__globals__Map_6);
    }
#line 576 "globals.m"
    {
#line 576 "globals.m"
      mercury__list__reverse_2_p_0(libs__globals__TypeCtorInfo_10_10, libs__globals__RevBadOptions_7, libs__globals__BadOptions_5);
#line 576 "globals.m"
      return;
    }
#line 573 "globals.m"
  }
#line 242 "globals.m"
}

#line 240 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_ssdb_trace_level_3_p_0(
#line 240 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 240 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 240 "globals.m"
  MR_Word * libs__globals__HeadVar__3_3)
#line 240 "globals.m"
{
#line 567 "globals.m"
  {
#line 567 "globals.m"
    MR_bool libs__globals__succeeded;
#line 567 "globals.m"
    MR_Integer libs__globals__lo_0;
#line 567 "globals.m"
    MR_Integer libs__globals__hi_1;
#line 567 "globals.m"
    MR_Integer libs__globals__mid_2;
#line 567 "globals.m"
    MR_Integer libs__globals__result_3;

#line 567 "globals.m"
    /* binary string jump switch */
#line 567 "globals.m"
    libs__globals__lo_0 = (MR_Integer) 0;
#line 567 "globals.m"
    libs__globals__hi_1 = (MR_Integer) 3;
#line 567 "globals.m"
    do
#line 567 "globals.m"
      {
#line 567 "globals.m"
        libs__globals__mid_2 = (((libs__globals__lo_0 + libs__globals__hi_1)) / (MR_Integer) 2);
#line 567 "globals.m"
        libs__globals__result_3 = MR_strcmp(libs__globals__HeadVar__1_1, ((&libs__globals_vector_common_15[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_15_0__vct_15_f_0);
#line 567 "globals.m"
        if ((libs__globals__result_3 == (MR_Integer) 0))
#line 567 "globals.m"
          {
#line 567 "globals.m"
#line 567 "globals.m"
            switch (((&libs__globals_vector_common_15[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_15_0__vct_15_f_1) {
#line 567 "globals.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 567 "globals.m"
              case (MR_Integer) 0:
#line 571 "globals.m"
                {
#line 571 "globals.m"
                  /* case "deep" */
#line 571 "globals.m"
                  *libs__globals__HeadVar__3_3 = (MR_Integer) 2;
#line 571 "globals.m"
                  libs__globals__succeeded = MR_TRUE;
#line 571 "globals.m"
                }
#line 567 "globals.m"
                break;
#line 567 "globals.m"
              case (MR_Integer) 1:
#line 567 "globals.m"
                {
#line 567 "globals.m"
                  /* case "default" */
#line 567 "globals.m"
#line 567 "globals.m"
                  switch (libs__globals__HeadVar__2_2) {
#line 567 "globals.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 567 "globals.m"
                    case (MR_Integer) 0:
#line 568 "globals.m"
                      *libs__globals__HeadVar__3_3 = (MR_Integer) 0;
#line 567 "globals.m"
                      break;
#line 567 "globals.m"
                    case (MR_Integer) 1:
#line 567 "globals.m"
                      *libs__globals__HeadVar__3_3 = (MR_Integer) 2;
#line 567 "globals.m"
                      break;
#line 567 "globals.m"
                  }
#line 567 "globals.m"
                  libs__globals__succeeded = MR_TRUE;
#line 567 "globals.m"
                }
#line 567 "globals.m"
                break;
#line 567 "globals.m"
              case (MR_Integer) 2:
#line 569 "globals.m"
                {
#line 569 "globals.m"
                  /* case "none" */
#line 569 "globals.m"
                  *libs__globals__HeadVar__3_3 = (MR_Integer) 0;
#line 569 "globals.m"
                  libs__globals__succeeded = MR_TRUE;
#line 569 "globals.m"
                }
#line 567 "globals.m"
                break;
#line 567 "globals.m"
              case (MR_Integer) 3:
#line 570 "globals.m"
                {
#line 570 "globals.m"
                  /* case "shallow" */
#line 570 "globals.m"
                  *libs__globals__HeadVar__3_3 = (MR_Integer) 1;
#line 570 "globals.m"
                  libs__globals__succeeded = MR_TRUE;
#line 570 "globals.m"
                }
#line 567 "globals.m"
                break;
#line 567 "globals.m"
            }
#line 567 "globals.m"
            /* jump out of search loop */
#line 567 "globals.m"
            goto label_0;
#line 567 "globals.m"
          }
#line 567 "globals.m"
        else
#line 567 "globals.m"
        if ((libs__globals__result_3 < (MR_Integer) 0))
#line 567 "globals.m"
          libs__globals__hi_1 = (libs__globals__mid_2 - (MR_Integer) 1);
#line 567 "globals.m"
        else
#line 567 "globals.m"
          libs__globals__lo_0 = (libs__globals__mid_2 + (MR_Integer) 1);
#line 567 "globals.m"
      }
#line 567 "globals.m"
    while ((libs__globals__lo_0 <= libs__globals__hi_1));
#line 567 "globals.m"
    libs__globals__succeeded = MR_FALSE;
#line 567 "globals.m"
  label_0:;
#line 567 "globals.m"
    return libs__globals__succeeded;
#line 567 "globals.m"
  }
#line 240 "globals.m"
}

#line 239 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_env_type_2_p_0(
#line 239 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 239 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 239 "globals.m"
{
#line 561 "globals.m"
  {
#line 561 "globals.m"
    MR_bool libs__globals__succeeded;
#line 561 "globals.m"
    MR_Integer libs__globals__lo_0;
#line 561 "globals.m"
    MR_Integer libs__globals__hi_1;
#line 561 "globals.m"
    MR_Integer libs__globals__mid_2;
#line 561 "globals.m"
    MR_Integer libs__globals__result_3;

#line 561 "globals.m"
    /* binary string simple lookup switch */
#line 561 "globals.m"
    libs__globals__lo_0 = (MR_Integer) 0;
#line 561 "globals.m"
    libs__globals__hi_1 = (MR_Integer) 4;
#line 561 "globals.m"
    do
#line 561 "globals.m"
      {
#line 561 "globals.m"
        libs__globals__mid_2 = (((libs__globals__lo_0 + libs__globals__hi_1)) / (MR_Integer) 2);
#line 561 "globals.m"
        libs__globals__result_3 = MR_strcmp(libs__globals__HeadVar__1_1, ((&libs__globals_vector_common_14[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_14_0__vct_14_f_0);
#line 561 "globals.m"
        if ((libs__globals__result_3 == (MR_Integer) 0))
#line 561 "globals.m"
          {
#line 561 "globals.m"
            *libs__globals__HeadVar__2_2 = ((&libs__globals_vector_common_14[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_14_0__vct_14_f_1;
#line 561 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 561 "globals.m"
            /* jump out of search loop */
#line 561 "globals.m"
            goto label_0;
#line 561 "globals.m"
          }
#line 561 "globals.m"
        else
#line 561 "globals.m"
        if ((libs__globals__result_3 < (MR_Integer) 0))
#line 561 "globals.m"
          libs__globals__hi_1 = (libs__globals__mid_2 - (MR_Integer) 1);
#line 561 "globals.m"
        else
#line 561 "globals.m"
          libs__globals__lo_0 = (libs__globals__mid_2 + (MR_Integer) 1);
#line 561 "globals.m"
      }
#line 561 "globals.m"
    while ((libs__globals__lo_0 <= libs__globals__hi_1));
#line 561 "globals.m"
    libs__globals__succeeded = MR_FALSE;
#line 561 "globals.m"
  label_0:;
#line 561 "globals.m"
    return libs__globals__succeeded;
#line 561 "globals.m"
  }
#line 239 "globals.m"
}

#line 237 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_reuse_strategy_3_p_0(
#line 237 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 237 "globals.m"
  MR_Integer libs__globals__NCells_2,
#line 237 "globals.m"
  MR_Word * libs__globals__HeadVar__3_3)
#line 237 "globals.m"
{
#line 639 "globals.m"
  {
#line 639 "globals.m"
    MR_bool libs__globals__succeeded;

#line 639 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "same_cons_id") == 0))
#line 639 "globals.m"
      {
#line 639 "globals.m"
        *libs__globals__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 639 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 639 "globals.m"
      }
#line 639 "globals.m"
    else
#line 639 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "within_n_cells_difference") == 0))
#line 641 "globals.m"
      {
#line 641 "globals.m"
        {
#line 641 "globals.m"
          MR_Word base;
#line 641 "globals.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 641 "globals.m"
          *libs__globals__HeadVar__3_3 = base;
#line 641 "globals.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__globals__NCells_2));
#line 641 "globals.m"
        }
#line 641 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 641 "globals.m"
      }
#line 639 "globals.m"
    else
#line 639 "globals.m"
      libs__globals__succeeded = MR_FALSE;
#line 639 "globals.m"
    return libs__globals__succeeded;
#line 639 "globals.m"
  }
#line 237 "globals.m"
}

#line 235 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_csharp_compiler_type_2_p_0(
#line 235 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 235 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 235 "globals.m"
{
#line 557 "globals.m"
  {
#line 557 "globals.m"
    MR_bool libs__globals__succeeded;

#line 557 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "mono") == 0))
#line 558 "globals.m"
      {
#line 558 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 1;
#line 558 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 558 "globals.m"
      }
#line 557 "globals.m"
    else
#line 557 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "unknown") == 0))
#line 559 "globals.m"
      {
#line 559 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 2;
#line 559 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 559 "globals.m"
      }
#line 557 "globals.m"
    else
#line 557 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "microsoft") == 0))
#line 557 "globals.m"
      {
#line 557 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 0;
#line 557 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 557 "globals.m"
      }
#line 557 "globals.m"
    else
#line 557 "globals.m"
      libs__globals__succeeded = MR_FALSE;
#line 557 "globals.m"
    return libs__globals__succeeded;
#line 557 "globals.m"
  }
#line 235 "globals.m"
}

#line 461 "globals.m"
static MR_bool MR_CALL 
libs__globals__convert_c_compiler_type_2_p_0_1(
#line 461 "globals.m"
  MR_Box libs__globals__closure_arg,
#line 461 "globals.m"
  MR_Box libs__globals__wrapper_arg_1)
#line 461 "globals.m"
{
#line 461 "globals.m"
  {
#line 461 "globals.m"
    MR_bool libs__globals__succeeded;
#line 461 "globals.m"
    MR_Box libs__globals__closure = libs__globals__closure_arg;

#line 461 "globals.m"
    {
#line 461 "globals.m"
      return libs__globals__succeeded = libs__globals__IntroducedFrom__pred__convert_c_compiler_type_with_version__461__1_2_p_0(((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) libs__globals__wrapper_arg_1));
    }
#line 461 "globals.m"
    return libs__globals__succeeded;
#line 461 "globals.m"
  }
#line 461 "globals.m"
}

#line 233 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_c_compiler_type_2_p_0(
#line 233 "globals.m"
  MR_String libs__globals__CC_Str_3,
#line 233 "globals.m"
  MR_Word * libs__globals__C_CompilerType_4)
#line 233 "globals.m"
{
#line 445 "globals.m"
  {
#line 445 "globals.m"
    MR_bool libs__globals__succeeded;
#line 445 "globals.m"
    MR_Word libs__globals__C_CompilerType0_5;
#line 452 "globals.m"
    MR_Integer libs__globals__lo_0;
#line 452 "globals.m"
    MR_Integer libs__globals__hi_1;
#line 452 "globals.m"
    MR_Integer libs__globals__mid_2;
#line 452 "globals.m"
    MR_Integer libs__globals__result_3;

#line 452 "globals.m"
    /* binary string simple lookup switch */
#line 452 "globals.m"
    libs__globals__lo_0 = (MR_Integer) 0;
#line 452 "globals.m"
    libs__globals__hi_1 = (MR_Integer) 3;
#line 452 "globals.m"
    do
#line 452 "globals.m"
      {
#line 452 "globals.m"
        libs__globals__mid_2 = (((libs__globals__lo_0 + libs__globals__hi_1)) / (MR_Integer) 2);
#line 452 "globals.m"
        libs__globals__result_3 = MR_strcmp(libs__globals__CC_Str_3, ((&libs__globals_vector_common_11[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_11_0__vct_11_f_0);
#line 452 "globals.m"
        if ((libs__globals__result_3 == (MR_Integer) 0))
#line 452 "globals.m"
          {
#line 452 "globals.m"
            libs__globals__C_CompilerType0_5 = ((&libs__globals_vector_common_11[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_11_0__vct_11_f_1;
#line 452 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 452 "globals.m"
            /* jump out of search loop */
#line 452 "globals.m"
            goto label_0;
#line 452 "globals.m"
          }
#line 452 "globals.m"
        else
#line 452 "globals.m"
        if ((libs__globals__result_3 < (MR_Integer) 0))
#line 452 "globals.m"
          libs__globals__hi_1 = (libs__globals__mid_2 - (MR_Integer) 1);
#line 452 "globals.m"
        else
#line 452 "globals.m"
          libs__globals__lo_0 = (libs__globals__mid_2 + (MR_Integer) 1);
#line 452 "globals.m"
      }
#line 452 "globals.m"
    while ((libs__globals__lo_0 <= libs__globals__hi_1));
#line 452 "globals.m"
    libs__globals__succeeded = MR_FALSE;
#line 452 "globals.m"
  label_0:;
#line 445 "globals.m"
    if (libs__globals__succeeded)
#line 444 "globals.m"
      {
#line 444 "globals.m"
        *libs__globals__C_CompilerType_4 = libs__globals__C_CompilerType0_5;
#line 444 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 444 "globals.m"
      }
#line 445 "globals.m"
    else
#line 460 "globals.m"
      {
#line 460 "globals.m"
        MR_Word libs__globals__Tokens_13;
#line 464 "globals.m"
        MR_String libs__globals__Major_14;
#line 464 "globals.m"
        MR_String libs__globals__Minor_15;
#line 464 "globals.m"
        MR_String libs__globals__Patch_16;
#line 462 "globals.m"
        MR_String libs__globals__V_20_20;
#line 462 "globals.m"
        MR_Word libs__globals__V_21_21;
#line 462 "globals.m"
        MR_Word libs__globals__V_22_22;
#line 462 "globals.m"
        MR_Word libs__globals__V_23_23;
#line 462 "globals.m"
        MR_Word libs__globals__V_24_24;

#line 461 "globals.m"
        {
#line 461 "globals.m"
          libs__globals__Tokens_13 = mercury__string__words_separator_2_f_0((MR_Word) &libs__globals_scalar_common_13[0], libs__globals__CC_Str_3);
        }
#line 462 "globals.m"
        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__Tokens_13)) == (MR_mktag((MR_Integer) 1)));
#line 462 "globals.m"
        if (libs__globals__succeeded)
#line 462 "globals.m"
          {
#line 462 "globals.m"
            libs__globals__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_13, (MR_Integer) 0)));
#line 462 "globals.m"
            libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_13, (MR_Integer) 1)));
#line 462 "globals.m"
            libs__globals__succeeded = (strcmp(libs__globals__V_20_20, (MR_String) "gcc") == 0);
#line 462 "globals.m"
            if (libs__globals__succeeded)
#line 462 "globals.m"
              {
#line 462 "globals.m"
                libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 462 "globals.m"
                if (libs__globals__succeeded)
#line 462 "globals.m"
                  {
#line 462 "globals.m"
                    libs__globals__Major_14 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_21_21, (MR_Integer) 0)));
#line 462 "globals.m"
                    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_21_21, (MR_Integer) 1)));
#line 462 "globals.m"
                    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 462 "globals.m"
                    if (libs__globals__succeeded)
#line 462 "globals.m"
                      {
#line 462 "globals.m"
                        libs__globals__Minor_15 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_22_22, (MR_Integer) 0)));
#line 462 "globals.m"
                        libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_22_22, (MR_Integer) 1)));
#line 462 "globals.m"
                        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 462 "globals.m"
                        if (libs__globals__succeeded)
#line 462 "globals.m"
                          {
#line 462 "globals.m"
                            libs__globals__Patch_16 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_23_23, (MR_Integer) 0)));
#line 462 "globals.m"
                            libs__globals__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_23_23, (MR_Integer) 1)));
#line 462 "globals.m"
                            libs__globals__succeeded = (libs__globals__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 462 "globals.m"
                          }
#line 462 "globals.m"
                      }
#line 462 "globals.m"
                  }
#line 462 "globals.m"
              }
#line 462 "globals.m"
          }
#line 464 "globals.m"
        if (libs__globals__succeeded)
#line 497 "globals.m"
          {
#line 492 "globals.m"
            libs__globals__succeeded = (strcmp(libs__globals__Major_14, (MR_String) "u") == 0);
#line 492 "globals.m"
            if (libs__globals__succeeded)
#line 492 "globals.m"
              {
#line 493 "globals.m"
                libs__globals__succeeded = (strcmp(libs__globals__Minor_15, (MR_String) "u") == 0);
#line 492 "globals.m"
                if (libs__globals__succeeded)
#line 494 "globals.m"
                  libs__globals__succeeded = (strcmp(libs__globals__Patch_16, (MR_String) "u") == 0);
#line 492 "globals.m"
              }
#line 497 "globals.m"
            if (libs__globals__succeeded)
#line 496 "globals.m"
              {
#line 496 "globals.m"
                *libs__globals__C_CompilerType_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__globals_scalar_common_2[3]);
#line 496 "globals.m"
                libs__globals__succeeded = MR_TRUE;
#line 496 "globals.m"
              }
#line 497 "globals.m"
            else
#line 524 "globals.m"
              {
#line 524 "globals.m"
                MR_Integer libs__globals__Major_42;
#line 498 "globals.m"
                MR_Integer libs__globals__V_48_48;

#line 498 "globals.m"
                {
#line 498 "globals.m"
                  libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Major_14, &libs__globals__Major_42);
                }
#line 498 "globals.m"
                if (libs__globals__succeeded)
#line 498 "globals.m"
                  {
#line 499 "globals.m"
                    libs__globals__V_48_48 = (MR_Integer) 2;
#line 499 "globals.m"
                    libs__globals__succeeded = (libs__globals__Major_42 >= libs__globals__V_48_48);
#line 498 "globals.m"
                  }
#line 524 "globals.m"
                if (libs__globals__succeeded)
#line 505 "globals.m"
                  {
#line 502 "globals.m"
                    libs__globals__succeeded = (strcmp(libs__globals__Minor_15, (MR_String) "u") == 0);
#line 505 "globals.m"
                    if (libs__globals__succeeded)
#line 504 "globals.m"
                      {
#line 504 "globals.m"
                        MR_Word libs__globals__V_49_49;

#line 504 "globals.m"
                        {
#line 504 "globals.m"
                          libs__globals__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 504 "globals.m"
                          MR_hl_field(MR_mktag(1), libs__globals__V_49_49, 0) = ((MR_Box) (libs__globals__Major_42));
#line 504 "globals.m"
                        }
#line 504 "globals.m"
                        {
#line 504 "globals.m"
                          MR_Word base;
#line 504 "globals.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 504 "globals.m"
                          *libs__globals__C_CompilerType_4 = base;
#line 504 "globals.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__globals__V_49_49));
#line 504 "globals.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 504 "globals.m"
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 504 "globals.m"
                        }
#line 504 "globals.m"
                        libs__globals__succeeded = MR_TRUE;
#line 504 "globals.m"
                      }
#line 505 "globals.m"
                    else
#line 521 "globals.m"
                      {
#line 521 "globals.m"
                        MR_Integer libs__globals__Minor_43;
#line 506 "globals.m"
                        MR_Integer libs__globals__V_52_52;

#line 506 "globals.m"
                        {
#line 506 "globals.m"
                          libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Minor_15, &libs__globals__Minor_43);
                        }
#line 506 "globals.m"
                        if (libs__globals__succeeded)
#line 506 "globals.m"
                          {
#line 507 "globals.m"
                            libs__globals__V_52_52 = (MR_Integer) 0;
#line 507 "globals.m"
                            libs__globals__succeeded = (libs__globals__Minor_43 >= libs__globals__V_52_52);
#line 506 "globals.m"
                          }
#line 521 "globals.m"
                        if (libs__globals__succeeded)
#line 513 "globals.m"
                          {
#line 510 "globals.m"
                            libs__globals__succeeded = (strcmp(libs__globals__Patch_16, (MR_String) "u") == 0);
#line 513 "globals.m"
                            if (libs__globals__succeeded)
#line 512 "globals.m"
                              {
#line 512 "globals.m"
                                MR_Word libs__globals__V_53_53;
#line 512 "globals.m"
                                MR_Word libs__globals__V_54_54;

#line 512 "globals.m"
                                {
#line 512 "globals.m"
                                  libs__globals__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 512 "globals.m"
                                  MR_hl_field(MR_mktag(1), libs__globals__V_53_53, 0) = ((MR_Box) (libs__globals__Major_42));
#line 512 "globals.m"
                                }
#line 512 "globals.m"
                                {
#line 512 "globals.m"
                                  libs__globals__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 512 "globals.m"
                                  MR_hl_field(MR_mktag(1), libs__globals__V_54_54, 0) = ((MR_Box) (libs__globals__Minor_43));
#line 512 "globals.m"
                                }
#line 512 "globals.m"
                                {
#line 512 "globals.m"
                                  MR_Word base;
#line 512 "globals.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 512 "globals.m"
                                  *libs__globals__C_CompilerType_4 = base;
#line 512 "globals.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__globals__V_53_53));
#line 512 "globals.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__globals__V_54_54));
#line 512 "globals.m"
                                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 512 "globals.m"
                                }
#line 512 "globals.m"
                                libs__globals__succeeded = MR_TRUE;
#line 512 "globals.m"
                              }
#line 513 "globals.m"
                            else
#line 518 "globals.m"
                              {
#line 518 "globals.m"
                                MR_Integer libs__globals__Patch_44;
#line 514 "globals.m"
                                MR_Integer libs__globals__V_56_56;

#line 514 "globals.m"
                                {
#line 514 "globals.m"
                                  libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Patch_16, &libs__globals__Patch_44);
                                }
#line 514 "globals.m"
                                if (libs__globals__succeeded)
#line 514 "globals.m"
                                  {
#line 515 "globals.m"
                                    libs__globals__V_56_56 = (MR_Integer) 0;
#line 515 "globals.m"
                                    libs__globals__succeeded = (libs__globals__Patch_44 >= libs__globals__V_56_56);
#line 514 "globals.m"
                                  }
#line 518 "globals.m"
                                if (libs__globals__succeeded)
#line 517 "globals.m"
                                  {
#line 517 "globals.m"
                                    MR_Word libs__globals__V_57_57;
#line 517 "globals.m"
                                    MR_Word libs__globals__V_58_58;
#line 517 "globals.m"
                                    MR_Word libs__globals__V_59_59;

#line 517 "globals.m"
                                    {
#line 517 "globals.m"
                                      libs__globals__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 517 "globals.m"
                                      MR_hl_field(MR_mktag(1), libs__globals__V_57_57, 0) = ((MR_Box) (libs__globals__Major_42));
#line 517 "globals.m"
                                    }
#line 517 "globals.m"
                                    {
#line 517 "globals.m"
                                      libs__globals__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 517 "globals.m"
                                      MR_hl_field(MR_mktag(1), libs__globals__V_58_58, 0) = ((MR_Box) (libs__globals__Minor_43));
#line 517 "globals.m"
                                    }
#line 517 "globals.m"
                                    {
#line 517 "globals.m"
                                      libs__globals__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 517 "globals.m"
                                      MR_hl_field(MR_mktag(1), libs__globals__V_59_59, 0) = ((MR_Box) (libs__globals__Patch_44));
#line 517 "globals.m"
                                    }
#line 517 "globals.m"
                                    {
#line 517 "globals.m"
                                      MR_Word base;
#line 517 "globals.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 517 "globals.m"
                                      *libs__globals__C_CompilerType_4 = base;
#line 517 "globals.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__globals__V_57_57));
#line 517 "globals.m"
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__globals__V_58_58));
#line 517 "globals.m"
                                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (libs__globals__V_59_59));
#line 517 "globals.m"
                                    }
#line 517 "globals.m"
                                    libs__globals__succeeded = MR_TRUE;
#line 517 "globals.m"
                                  }
#line 518 "globals.m"
                                else
#line 519 "globals.m"
                                  {
#line 519 "globals.m"
                                    return libs__globals__succeeded = mercury__builtin__false_0_p_0();
                                  }
#line 518 "globals.m"
                              }
#line 513 "globals.m"
                          }
#line 521 "globals.m"
                        else
#line 522 "globals.m"
                          {
#line 522 "globals.m"
                            return libs__globals__succeeded = mercury__builtin__false_0_p_0();
                          }
#line 521 "globals.m"
                      }
#line 505 "globals.m"
                  }
#line 524 "globals.m"
                else
#line 525 "globals.m"
                  {
#line 525 "globals.m"
                    return libs__globals__succeeded = mercury__builtin__false_0_p_0();
                  }
#line 524 "globals.m"
              }
#line 497 "globals.m"
          }
#line 464 "globals.m"
        else
#line 466 "globals.m"
          {
#line 466 "globals.m"
            MR_String libs__globals__Major_33;
#line 466 "globals.m"
            MR_String libs__globals__Minor_34;
#line 466 "globals.m"
            MR_String libs__globals__Patch_35;
#line 464 "globals.m"
            MR_String libs__globals__V_25_25;
#line 464 "globals.m"
            MR_Word libs__globals__V_26_26;
#line 464 "globals.m"
            MR_Word libs__globals__V_27_27;
#line 464 "globals.m"
            MR_Word libs__globals__V_28_28;
#line 464 "globals.m"
            MR_Word libs__globals__V_29_29;

#line 464 "globals.m"
            libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__Tokens_13)) == (MR_mktag((MR_Integer) 1)));
#line 464 "globals.m"
            if (libs__globals__succeeded)
#line 464 "globals.m"
              {
#line 464 "globals.m"
                libs__globals__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_13, (MR_Integer) 0)));
#line 464 "globals.m"
                libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_13, (MR_Integer) 1)));
#line 464 "globals.m"
                libs__globals__succeeded = (strcmp(libs__globals__V_25_25, (MR_String) "clang") == 0);
#line 464 "globals.m"
                if (libs__globals__succeeded)
#line 464 "globals.m"
                  {
#line 464 "globals.m"
                    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 464 "globals.m"
                    if (libs__globals__succeeded)
#line 464 "globals.m"
                      {
#line 464 "globals.m"
                        libs__globals__Major_33 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_26_26, (MR_Integer) 0)));
#line 464 "globals.m"
                        libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_26_26, (MR_Integer) 1)));
#line 464 "globals.m"
                        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 464 "globals.m"
                        if (libs__globals__succeeded)
#line 464 "globals.m"
                          {
#line 464 "globals.m"
                            libs__globals__Minor_34 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_27_27, (MR_Integer) 0)));
#line 464 "globals.m"
                            libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_27_27, (MR_Integer) 1)));
#line 464 "globals.m"
                            libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 464 "globals.m"
                            if (libs__globals__succeeded)
#line 464 "globals.m"
                              {
#line 464 "globals.m"
                                libs__globals__Patch_35 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_28_28, (MR_Integer) 0)));
#line 464 "globals.m"
                                libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_28_28, (MR_Integer) 1)));
#line 464 "globals.m"
                                libs__globals__succeeded = (libs__globals__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 464 "globals.m"
                              }
#line 464 "globals.m"
                          }
#line 464 "globals.m"
                      }
#line 464 "globals.m"
                  }
#line 464 "globals.m"
              }
#line 466 "globals.m"
            if (libs__globals__succeeded)
#line 537 "globals.m"
              {
#line 537 "globals.m"
                MR_Integer libs__globals__Major_64;
#line 537 "globals.m"
                MR_Integer libs__globals__Minor_65;
#line 537 "globals.m"
                MR_Integer libs__globals__Patch_66;
#line 537 "globals.m"
                MR_Word libs__globals__ClangVersion_67;
#line 537 "globals.m"
                MR_Integer libs__globals__V_68_68;
#line 537 "globals.m"
                MR_Integer libs__globals__V_69_69;
#line 537 "globals.m"
                MR_Integer libs__globals__V_70_70;
#line 537 "globals.m"
                MR_Word libs__globals__V_71_71;

#line 538 "globals.m"
                {
#line 538 "globals.m"
                  libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Major_33, &libs__globals__Major_64);
                }
#line 537 "globals.m"
                if (libs__globals__succeeded)
#line 537 "globals.m"
                  {
#line 539 "globals.m"
                    {
#line 539 "globals.m"
                      libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Minor_34, &libs__globals__Minor_65);
                    }
#line 537 "globals.m"
                    if (libs__globals__succeeded)
#line 537 "globals.m"
                      {
#line 540 "globals.m"
                        {
#line 540 "globals.m"
                          libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Patch_35, &libs__globals__Patch_66);
                        }
#line 537 "globals.m"
                        if (libs__globals__succeeded)
#line 537 "globals.m"
                          {
#line 541 "globals.m"
                            libs__globals__V_68_68 = (MR_Integer) 0;
#line 541 "globals.m"
                            libs__globals__succeeded = (libs__globals__Major_64 >= libs__globals__V_68_68);
#line 537 "globals.m"
                            if (libs__globals__succeeded)
#line 537 "globals.m"
                              {
#line 541 "globals.m"
                                libs__globals__V_69_69 = (MR_Integer) 0;
#line 541 "globals.m"
                                libs__globals__succeeded = (libs__globals__Minor_65 >= libs__globals__V_69_69);
#line 537 "globals.m"
                                if (libs__globals__succeeded)
#line 537 "globals.m"
                                  {
#line 541 "globals.m"
                                    libs__globals__V_70_70 = (MR_Integer) 0;
#line 541 "globals.m"
                                    libs__globals__succeeded = (libs__globals__Patch_66 >= libs__globals__V_70_70);
#line 537 "globals.m"
                                    if (libs__globals__succeeded)
#line 537 "globals.m"
                                      {
#line 542 "globals.m"
                                        {
#line 542 "globals.m"
                                          libs__globals__ClangVersion_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 542 "globals.m"
                                          MR_hl_field(MR_mktag(0), libs__globals__ClangVersion_67, 0) = ((MR_Box) (libs__globals__Major_64));
#line 542 "globals.m"
                                          MR_hl_field(MR_mktag(0), libs__globals__ClangVersion_67, 1) = ((MR_Box) (libs__globals__Minor_65));
#line 542 "globals.m"
                                          MR_hl_field(MR_mktag(0), libs__globals__ClangVersion_67, 2) = ((MR_Box) (libs__globals__Patch_66));
#line 542 "globals.m"
                                        }
#line 543 "globals.m"
                                        {
#line 543 "globals.m"
                                          libs__globals__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 543 "globals.m"
                                          MR_hl_field(MR_mktag(1), libs__globals__V_71_71, 0) = ((MR_Box) (libs__globals__ClangVersion_67));
#line 543 "globals.m"
                                        }
#line 543 "globals.m"
                                        {
#line 543 "globals.m"
                                          MR_Word base;
#line 543 "globals.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 543 "globals.m"
                                          *libs__globals__C_CompilerType_4 = base;
#line 543 "globals.m"
                                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (libs__globals__V_71_71));
#line 543 "globals.m"
                                        }
#line 543 "globals.m"
                                        libs__globals__succeeded = MR_TRUE;
#line 537 "globals.m"
                                      }
#line 537 "globals.m"
                                  }
#line 537 "globals.m"
                              }
#line 537 "globals.m"
                          }
#line 537 "globals.m"
                      }
#line 537 "globals.m"
                  }
#line 537 "globals.m"
              }
#line 466 "globals.m"
            else
#line 468 "globals.m"
              {
#line 468 "globals.m"
                MR_String libs__globals__Version_17;
#line 466 "globals.m"
                MR_String libs__globals__V_30_30;
#line 466 "globals.m"
                MR_Word libs__globals__V_31_31;
#line 466 "globals.m"
                MR_Word libs__globals__V_32_32;

#line 466 "globals.m"
                libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__Tokens_13)) == (MR_mktag((MR_Integer) 1)));
#line 466 "globals.m"
                if (libs__globals__succeeded)
#line 466 "globals.m"
                  {
#line 466 "globals.m"
                    libs__globals__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_13, (MR_Integer) 0)));
#line 466 "globals.m"
                    libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_13, (MR_Integer) 1)));
#line 466 "globals.m"
                    libs__globals__succeeded = (strcmp(libs__globals__V_30_30, (MR_String) "msvc") == 0);
#line 466 "globals.m"
                    if (libs__globals__succeeded)
#line 466 "globals.m"
                      {
#line 466 "globals.m"
                        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 466 "globals.m"
                        if (libs__globals__succeeded)
#line 466 "globals.m"
                          {
#line 466 "globals.m"
                            libs__globals__Version_17 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_31_31, (MR_Integer) 0)));
#line 466 "globals.m"
                            libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_31_31, (MR_Integer) 1)));
#line 466 "globals.m"
                            libs__globals__succeeded = (libs__globals__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 466 "globals.m"
                          }
#line 466 "globals.m"
                      }
#line 466 "globals.m"
                  }
#line 468 "globals.m"
                if (libs__globals__succeeded)
#line 552 "globals.m"
                  {
#line 552 "globals.m"
                    MR_Integer libs__globals__Version_74;
#line 552 "globals.m"
                    MR_Integer libs__globals__V_75_75;
#line 552 "globals.m"
                    MR_Word libs__globals__V_76_76;

#line 553 "globals.m"
                    {
#line 553 "globals.m"
                      libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Version_17, &libs__globals__Version_74);
                    }
#line 552 "globals.m"
                    if (libs__globals__succeeded)
#line 552 "globals.m"
                      {
#line 554 "globals.m"
                        libs__globals__V_75_75 = (MR_Integer) 0;
#line 554 "globals.m"
                        libs__globals__succeeded = (libs__globals__Version_74 > libs__globals__V_75_75);
#line 552 "globals.m"
                        if (libs__globals__succeeded)
#line 552 "globals.m"
                          {
#line 555 "globals.m"
                            {
#line 555 "globals.m"
                              libs__globals__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 555 "globals.m"
                              MR_hl_field(MR_mktag(1), libs__globals__V_76_76, 0) = ((MR_Box) (libs__globals__Version_74));
#line 555 "globals.m"
                            }
#line 555 "globals.m"
                            {
#line 555 "globals.m"
                              MR_Word base;
#line 555 "globals.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 555 "globals.m"
                              *libs__globals__C_CompilerType_4 = base;
#line 555 "globals.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (libs__globals__V_76_76));
#line 555 "globals.m"
                            }
#line 555 "globals.m"
                            libs__globals__succeeded = MR_TRUE;
#line 552 "globals.m"
                          }
#line 552 "globals.m"
                      }
#line 552 "globals.m"
                  }
#line 468 "globals.m"
                else
#line 469 "globals.m"
                  {
#line 469 "globals.m"
                    return libs__globals__succeeded = mercury__builtin__false_0_p_0();
                  }
#line 468 "globals.m"
              }
#line 466 "globals.m"
          }
#line 460 "globals.m"
      }
#line 445 "globals.m"
    return libs__globals__succeeded;
#line 445 "globals.m"
  }
#line 233 "globals.m"
}

#line 231 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_maybe_thread_safe_2_p_0(
#line 231 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 231 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 231 "globals.m"
{
#line 439 "globals.m"
  {
#line 439 "globals.m"
    MR_bool libs__globals__succeeded;

#line 439 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "no") == 0))
#line 440 "globals.m"
      {
#line 440 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 0;
#line 440 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 440 "globals.m"
      }
#line 439 "globals.m"
    else
#line 439 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "yes") == 0))
#line 439 "globals.m"
      {
#line 439 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 1;
#line 439 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 439 "globals.m"
      }
#line 439 "globals.m"
    else
#line 439 "globals.m"
      libs__globals__succeeded = MR_FALSE;
#line 439 "globals.m"
    return libs__globals__succeeded;
#line 439 "globals.m"
  }
#line 231 "globals.m"
}

#line 230 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_termination_norm_2_p_0(
#line 230 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 230 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 230 "globals.m"
{
#line 434 "globals.m"
  {
#line 434 "globals.m"
    MR_bool libs__globals__succeeded;
#line 434 "globals.m"
    MR_Integer libs__globals__lo_0;
#line 434 "globals.m"
    MR_Integer libs__globals__hi_1;
#line 434 "globals.m"
    MR_Integer libs__globals__mid_2;
#line 434 "globals.m"
    MR_Integer libs__globals__result_3;

#line 434 "globals.m"
    /* binary string simple lookup switch */
#line 434 "globals.m"
    libs__globals__lo_0 = (MR_Integer) 0;
#line 434 "globals.m"
    libs__globals__hi_1 = (MR_Integer) 3;
#line 434 "globals.m"
    do
#line 434 "globals.m"
      {
#line 434 "globals.m"
        libs__globals__mid_2 = (((libs__globals__lo_0 + libs__globals__hi_1)) / (MR_Integer) 2);
#line 434 "globals.m"
        libs__globals__result_3 = MR_strcmp(libs__globals__HeadVar__1_1, ((&libs__globals_vector_common_9[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_9_0__vct_9_f_0);
#line 434 "globals.m"
        if ((libs__globals__result_3 == (MR_Integer) 0))
#line 434 "globals.m"
          {
#line 434 "globals.m"
            *libs__globals__HeadVar__2_2 = ((&libs__globals_vector_common_9[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_9_0__vct_9_f_1;
#line 434 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 434 "globals.m"
            /* jump out of search loop */
#line 434 "globals.m"
            goto label_0;
#line 434 "globals.m"
          }
#line 434 "globals.m"
        else
#line 434 "globals.m"
        if ((libs__globals__result_3 < (MR_Integer) 0))
#line 434 "globals.m"
          libs__globals__hi_1 = (libs__globals__mid_2 - (MR_Integer) 1);
#line 434 "globals.m"
        else
#line 434 "globals.m"
          libs__globals__lo_0 = (libs__globals__mid_2 + (MR_Integer) 1);
#line 434 "globals.m"
      }
#line 434 "globals.m"
    while ((libs__globals__lo_0 <= libs__globals__hi_1));
#line 434 "globals.m"
    libs__globals__succeeded = MR_FALSE;
#line 434 "globals.m"
  label_0:;
#line 434 "globals.m"
    return libs__globals__succeeded;
#line 434 "globals.m"
  }
#line 230 "globals.m"
}

#line 229 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_tags_method_2_p_0(
#line 229 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 229 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 229 "globals.m"
{
#line 430 "globals.m"
  {
#line 430 "globals.m"
    MR_bool libs__globals__succeeded;

#line 430 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "low") == 0))
#line 431 "globals.m"
      {
#line 431 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 1;
#line 431 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 431 "globals.m"
      }
#line 430 "globals.m"
    else
#line 430 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "high") == 0))
#line 432 "globals.m"
      {
#line 432 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 2;
#line 432 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 432 "globals.m"
      }
#line 430 "globals.m"
    else
#line 430 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "none") == 0))
#line 430 "globals.m"
      {
#line 430 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 0;
#line 430 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 430 "globals.m"
      }
#line 430 "globals.m"
    else
#line 430 "globals.m"
      libs__globals__succeeded = MR_FALSE;
#line 430 "globals.m"
    return libs__globals__succeeded;
#line 430 "globals.m"
  }
#line 229 "globals.m"
}

#line 228 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_gc_method_2_p_0(
#line 228 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 228 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 228 "globals.m"
{
#line 422 "globals.m"
  {
#line 422 "globals.m"
    MR_bool libs__globals__succeeded;
#line 422 "globals.m"
    MR_Integer libs__globals__lo_0;
#line 422 "globals.m"
    MR_Integer libs__globals__hi_1;
#line 422 "globals.m"
    MR_Integer libs__globals__mid_2;
#line 422 "globals.m"
    MR_Integer libs__globals__result_3;

#line 422 "globals.m"
    /* binary string simple lookup switch */
#line 422 "globals.m"
    libs__globals__lo_0 = (MR_Integer) 0;
#line 422 "globals.m"
    libs__globals__hi_1 = (MR_Integer) 6;
#line 422 "globals.m"
    do
#line 422 "globals.m"
      {
#line 422 "globals.m"
        libs__globals__mid_2 = (((libs__globals__lo_0 + libs__globals__hi_1)) / (MR_Integer) 2);
#line 422 "globals.m"
        libs__globals__result_3 = MR_strcmp(libs__globals__HeadVar__1_1, ((&libs__globals_vector_common_8[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_8_0__vct_8_f_0);
#line 422 "globals.m"
        if ((libs__globals__result_3 == (MR_Integer) 0))
#line 422 "globals.m"
          {
#line 422 "globals.m"
            *libs__globals__HeadVar__2_2 = ((&libs__globals_vector_common_8[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_8_0__vct_8_f_1;
#line 422 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 422 "globals.m"
            /* jump out of search loop */
#line 422 "globals.m"
            goto label_0;
#line 422 "globals.m"
          }
#line 422 "globals.m"
        else
#line 422 "globals.m"
        if ((libs__globals__result_3 < (MR_Integer) 0))
#line 422 "globals.m"
          libs__globals__hi_1 = (libs__globals__mid_2 - (MR_Integer) 1);
#line 422 "globals.m"
        else
#line 422 "globals.m"
          libs__globals__lo_0 = (libs__globals__mid_2 + (MR_Integer) 1);
#line 422 "globals.m"
      }
#line 422 "globals.m"
    while ((libs__globals__lo_0 <= libs__globals__hi_1));
#line 422 "globals.m"
    libs__globals__succeeded = MR_FALSE;
#line 422 "globals.m"
  label_0:;
#line 422 "globals.m"
    return libs__globals__succeeded;
#line 422 "globals.m"
  }
#line 228 "globals.m"
}

#line 227 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_foreign_language_2_p_0(
#line 227 "globals.m"
  MR_String libs__globals__String_3,
#line 227 "globals.m"
  MR_Word * libs__globals__ForeignLanguage_4)
#line 227 "globals.m"
{
#line 409 "globals.m"
  {
#line 409 "globals.m"
    MR_bool libs__globals__succeeded;
#line 409 "globals.m"
    MR_String libs__globals__V_5_5;
#line 415 "globals.m"
    MR_Integer libs__globals__lo_0;
#line 415 "globals.m"
    MR_Integer libs__globals__hi_1;
#line 415 "globals.m"
    MR_Integer libs__globals__mid_2;
#line 415 "globals.m"
    MR_Integer libs__globals__result_3;

#line 410 "globals.m"
    {
#line 410 "globals.m"
      libs__globals__V_5_5 = mercury__string__to_lower_1_f_0(libs__globals__String_3);
    }
#line 415 "globals.m"
    /* binary string simple lookup switch */
#line 415 "globals.m"
    libs__globals__lo_0 = (MR_Integer) 0;
#line 415 "globals.m"
    libs__globals__hi_1 = (MR_Integer) 5;
#line 415 "globals.m"
    do
#line 415 "globals.m"
      {
#line 415 "globals.m"
        libs__globals__mid_2 = (((libs__globals__lo_0 + libs__globals__hi_1)) / (MR_Integer) 2);
#line 415 "globals.m"
        libs__globals__result_3 = MR_strcmp(libs__globals__V_5_5, ((&libs__globals_vector_common_7[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_7_0__vct_7_f_0);
#line 415 "globals.m"
        if ((libs__globals__result_3 == (MR_Integer) 0))
#line 415 "globals.m"
          {
#line 415 "globals.m"
            *libs__globals__ForeignLanguage_4 = ((&libs__globals_vector_common_7[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_7_0__vct_7_f_1;
#line 415 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 415 "globals.m"
            /* jump out of search loop */
#line 415 "globals.m"
            goto label_0;
#line 415 "globals.m"
          }
#line 415 "globals.m"
        else
#line 415 "globals.m"
        if ((libs__globals__result_3 < (MR_Integer) 0))
#line 415 "globals.m"
          libs__globals__hi_1 = (libs__globals__mid_2 - (MR_Integer) 1);
#line 415 "globals.m"
        else
#line 415 "globals.m"
          libs__globals__lo_0 = (libs__globals__mid_2 + (MR_Integer) 1);
#line 415 "globals.m"
      }
#line 415 "globals.m"
    while ((libs__globals__lo_0 <= libs__globals__hi_1));
#line 415 "globals.m"
    libs__globals__succeeded = MR_FALSE;
#line 415 "globals.m"
  label_0:;
#line 409 "globals.m"
    return libs__globals__succeeded;
#line 409 "globals.m"
  }
#line 227 "globals.m"
}

#line 226 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_target_2_p_0(
#line 226 "globals.m"
  MR_String libs__globals__String_3,
#line 226 "globals.m"
  MR_Word * libs__globals__Target_4)
#line 226 "globals.m"
{
#line 390 "globals.m"
  {
#line 390 "globals.m"
    MR_bool libs__globals__succeeded;
#line 390 "globals.m"
    MR_String libs__globals__V_5_5;
#line 395 "globals.m"
    MR_Integer libs__globals__lo_0;
#line 395 "globals.m"
    MR_Integer libs__globals__hi_1;
#line 395 "globals.m"
    MR_Integer libs__globals__mid_2;
#line 395 "globals.m"
    MR_Integer libs__globals__result_3;

#line 391 "globals.m"
    {
#line 391 "globals.m"
      libs__globals__V_5_5 = mercury__string__to_lower_1_f_0(libs__globals__String_3);
    }
#line 395 "globals.m"
    /* binary string simple lookup switch */
#line 395 "globals.m"
    libs__globals__lo_0 = (MR_Integer) 0;
#line 395 "globals.m"
    libs__globals__hi_1 = (MR_Integer) 3;
#line 395 "globals.m"
    do
#line 395 "globals.m"
      {
#line 395 "globals.m"
        libs__globals__mid_2 = (((libs__globals__lo_0 + libs__globals__hi_1)) / (MR_Integer) 2);
#line 395 "globals.m"
        libs__globals__result_3 = MR_strcmp(libs__globals__V_5_5, ((&libs__globals_vector_common_6[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_6_0__vct_6_f_0);
#line 395 "globals.m"
        if ((libs__globals__result_3 == (MR_Integer) 0))
#line 395 "globals.m"
          {
#line 395 "globals.m"
            *libs__globals__Target_4 = ((&libs__globals_vector_common_6[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_6_0__vct_6_f_1;
#line 395 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 395 "globals.m"
            /* jump out of search loop */
#line 395 "globals.m"
            goto label_0;
#line 395 "globals.m"
          }
#line 395 "globals.m"
        else
#line 395 "globals.m"
        if ((libs__globals__result_3 < (MR_Integer) 0))
#line 395 "globals.m"
          libs__globals__hi_1 = (libs__globals__mid_2 - (MR_Integer) 1);
#line 395 "globals.m"
        else
#line 395 "globals.m"
          libs__globals__lo_0 = (libs__globals__mid_2 + (MR_Integer) 1);
#line 395 "globals.m"
      }
#line 395 "globals.m"
    while ((libs__globals__lo_0 <= libs__globals__hi_1));
#line 395 "globals.m"
    libs__globals__succeeded = MR_FALSE;
#line 395 "globals.m"
  label_0:;
#line 390 "globals.m"
    return libs__globals__succeeded;
#line 390 "globals.m"
  }
#line 226 "globals.m"
}

#line 105 "globals.m"
MR_Word MR_CALL 
libs__globals__gc_is_conservative_1_f_0(
#line 105 "globals.m"
  MR_Word libs__globals__HeadVar__1_1)
#line 105 "globals.m"
{
#line 663 "globals.m"
  {
#line 663 "globals.m"
    MR_bool libs__globals__succeeded;
#line 663 "globals.m"
    MR_Word libs__globals__HeadVar__2_2 = ((&libs__globals_vector_common_5[0 + libs__globals__HeadVar__1_1]))->libs__globals__vector_common_type_5_0__vct_5_f_0;

#line 663 "globals.m"
    return libs__globals__HeadVar__2_2;
#line 663 "globals.m"
  }
#line 105 "globals.m"
}

#line 72 "globals.m"
MR_String MR_CALL 
libs__globals__simple_foreign_language_string_1_f_0(
#line 72 "globals.m"
  MR_Word libs__globals__HeadVar__1_1)
#line 72 "globals.m"
{
#line 658 "globals.m"
  {
#line 658 "globals.m"
    MR_bool libs__globals__succeeded;
#line 658 "globals.m"
    MR_String libs__globals__HeadVar__2_2 = ((&libs__globals_vector_common_4[8 + libs__globals__HeadVar__1_1]))->libs__globals__vector_common_type_4_0__vct_4_f_0;

#line 658 "globals.m"
    return libs__globals__HeadVar__2_2;
#line 658 "globals.m"
  }
#line 72 "globals.m"
}

#line 67 "globals.m"
MR_String MR_CALL 
libs__globals__foreign_language_string_1_f_0(
#line 67 "globals.m"
  MR_Word libs__globals__HeadVar__1_1)
#line 67 "globals.m"
{
#line 653 "globals.m"
  {
#line 653 "globals.m"
    MR_bool libs__globals__succeeded;
#line 653 "globals.m"
    MR_String libs__globals__HeadVar__2_2 = ((&libs__globals_vector_common_4[4 + libs__globals__HeadVar__1_1]))->libs__globals__vector_common_type_4_0__vct_4_f_0;

#line 653 "globals.m"
    return libs__globals__HeadVar__2_2;
#line 653 "globals.m"
  }
#line 67 "globals.m"
}

#line 62 "globals.m"
MR_String MR_CALL 
libs__globals__compilation_target_string_1_f_0(
#line 62 "globals.m"
  MR_Word libs__globals__HeadVar__1_1)
#line 62 "globals.m"
{
#line 648 "globals.m"
  {
#line 648 "globals.m"
    MR_bool libs__globals__succeeded;
#line 648 "globals.m"
    MR_String libs__globals__HeadVar__2_2 = ((&libs__globals_vector_common_4[0 + libs__globals__HeadVar__1_1]))->libs__globals__vector_common_type_4_0__vct_4_f_0;

#line 648 "globals.m"
    return libs__globals__HeadVar__2_2;
#line 648 "globals.m"
  }
#line 62 "globals.m"
}

#line 56 "globals.m"
MR_Word MR_CALL 
libs__globals__target_lang_to_foreign_export_lang_1_f_0(
#line 56 "globals.m"
  MR_Word libs__globals__HeadVar__1_1)
#line 56 "globals.m"
{
#line 643 "globals.m"
  {
#line 643 "globals.m"
    MR_bool libs__globals__succeeded;
#line 643 "globals.m"
    MR_Word libs__globals__HeadVar__2_2 = ((&libs__globals_vector_common_3[0 + libs__globals__HeadVar__1_1]))->libs__globals__vector_common_type_3_0__vct_3_f_0;

#line 643 "globals.m"
    return libs__globals__HeadVar__2_2;
#line 643 "globals.m"
  }
#line 56 "globals.m"
}

void mercury__libs__globals__init(void)
{
}

void mercury__libs__globals__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_c_compiler_type_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_clang_version_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_compilation_target_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_csharp_compiler_type_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_env_type_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_file_install_cmd_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_foreign_language_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_gc_method_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_globals_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_limit_error_contexts_map_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_line_number_range_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_may_be_thread_safe_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_reuse_strategy_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_source_file_map_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_ssdb_trace_level_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_tags_method_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_termination_norm_0);
}

void mercury__libs__globals__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__libs__globals__required_init(void)
{
	libs__globals__user_init_pred_0();
	libs__globals__user_init_pred_1();
	libs__globals__user_init_pred_2();
	libs__globals__user_init_pred_3();
	libs__globals__user_init_pred_4();
	libs__globals__user_init_pred_5();
	libs__globals__user_init_pred_6();
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module libs.globals. */
