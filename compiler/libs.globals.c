/*
** Automatically generated from `globals.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
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
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "libs.lp_rational.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"









#line 137 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 140 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_0[3];

#line 143 "libs.globals.c"
static const MR_ConstString libs__globals__libs__globals__field_names_c_compiler_type_0_0[3];

#line 146 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_0;

#line 149 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1libs__globals__type_ctor_info_clang_version_0;

#line 152 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_1[1];

#line 155 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_1;

#line 158 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_2;

#line 161 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_3[1];

#line 164 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_3;

#line 167 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_4;

#line 170 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_0[2];

#line 173 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_1[1];

#line 176 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_2[1];

#line 179 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_3[1];

#line 182 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_c_compiler_type_0[4];

#line 185 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_c_compiler_type_0[5];

#line 188 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_c_compiler_type_0[5];

#line 191 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_clang_version_0_0[3];

#line 194 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_clang_version_0_0;

#line 197 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_clang_version_0_0[1];

#line 200 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_clang_version_0[1];

#line 203 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_clang_version_0[1];

#line 206 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_clang_version_0[1];

#line 209 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_0;

#line 212 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_1;

#line 215 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_2;

#line 218 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_3;

#line 221 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_4;

#line 224 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_compilation_target_0[5];

#line 227 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_compilation_target_0[5];

#line 230 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_compilation_target_0[5];

#line 233 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_0;

#line 236 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_1;

#line 239 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_2;

#line 242 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_csharp_compiler_type_0[3];

#line 245 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_csharp_compiler_type_0[3];

#line 248 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_csharp_compiler_type_0[3];

#line 251 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_0;

#line 254 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_1;

#line 257 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_2;

#line 260 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_3;

#line 263 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_4;

#line 266 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_env_type_0[5];

#line 269 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_env_type_0[5];

#line 272 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_env_type_0[5];

#line 275 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_file_install_cmd_0_0[2];

#line 278 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_0;

#line 281 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_1;

#line 284 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_file_install_cmd_0_0[1];

#line 287 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_file_install_cmd_0_1[1];

#line 290 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_file_install_cmd_0[2];

#line 293 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_file_install_cmd_0[2];

#line 296 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_file_install_cmd_0[2];

#line 299 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_0;

#line 302 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_1;

#line 305 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_2;

#line 308 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_3;

#line 311 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_4;

#line 314 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_foreign_language_0[5];

#line 317 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_foreign_language_0[5];

#line 320 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_foreign_language_0[5];

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
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1libs__globals__type_ctor_info_il_version_number_0;

#line 359 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1mdbcomp__feedback__type_ctor_info_feedback_info_0;

#line 362 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_globals_0_0[19];

#line 365 "libs.globals.c"
static const MR_ConstString libs__globals__libs__globals__field_names_globals_0_0[19];

#line 368 "libs.globals.c"
static const MR_DuArgLocn libs__globals__libs__globals__field_locns_globals_0_0[19];

#line 371 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_globals_0_0;

#line 374 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_globals_0_0[1];

#line 377 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_globals_0[1];

#line 380 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_globals_0[1];

#line 383 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_globals_0[1];

#line 386 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_il_version_number_0_0[4];

#line 389 "libs.globals.c"
static const MR_ConstString libs__globals__libs__globals__field_names_il_version_number_0_0[4];

#line 392 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_il_version_number_0_0;

#line 395 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_il_version_number_0_0[1];

#line 398 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_il_version_number_0[1];

#line 401 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_il_version_number_0[1];

#line 404 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_il_version_number_0[1];

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
static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

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
libs__globals____Unify____il_version_number_0_0_10001(
#line 656 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 658 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 661 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____il_version_number_0_0_10001(
#line 664 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 666 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 668 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 671 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____may_be_thread_safe_0_0_10001(
#line 674 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 676 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 679 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____may_be_thread_safe_0_0_10001(
#line 682 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 684 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 686 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 689 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____reuse_strategy_0_0_10001(
#line 692 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 694 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 697 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____reuse_strategy_0_0_10001(
#line 700 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 702 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 704 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 707 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____source_file_map_0_0_10001(
#line 710 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 712 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 715 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____source_file_map_0_0_10001(
#line 718 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 720 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 722 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 725 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____ssdb_trace_level_0_0_10001(
#line 728 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 730 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 733 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____ssdb_trace_level_0_0_10001(
#line 736 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 738 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 740 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 743 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____tags_method_0_0_10001(
#line 746 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 748 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 751 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____tags_method_0_0_10001(
#line 754 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 756 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 758 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 761 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____termination_norm_0_0_10001(
#line 764 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 766 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 769 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____termination_norm_0_0_10001(
#line 772 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 774 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 776 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 448 "globals.m"
static MR_bool MR_CALL 
libs__globals__IntroducedFrom__pred__convert_c_compiler_type_with_version__448__1_1_p_0(
#line 448 "globals.m"
  MR_Char libs__globals__HeadVar__1_12);

#line 657 "globals.m"
static MR_Word MR_CALL 
libs__globals__IntroducedFrom__func__get_backend_foreign_languages__657__1_1_f_0(
#line 657 "globals.m"
  MR_String libs__globals__HeadVar__1_11);

#line 877 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_maybe_source_file_map_1_p_0(
#line 877 "globals.m"
  MR_Word libs__globals__X_1);

#line 877 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_maybe_source_file_map_1_p_0(
#line 877 "globals.m"
  MR_Word * libs__globals__X_1);

#line 877 "globals.m"
static void MR_CALL 
libs__globals__unlock_maybe_source_file_map_0_p_0(void);

#line 877 "globals.m"
static void MR_CALL 
libs__globals__lock_maybe_source_file_map_0_p_0(void);

#line 877 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_maybe_source_file_map_0_p_0(void);

#line 877 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_maybe_source_file_map_0_p_0(void);

#line 874 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_disable_generate_item_version_numbers_1_p_0(
#line 874 "globals.m"
  MR_Word libs__globals__X_1);

#line 874 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_disable_generate_item_version_numbers_1_p_0(
#line 874 "globals.m"
  MR_Word * libs__globals__X_1);

#line 874 "globals.m"
static void MR_CALL 
libs__globals__unlock_disable_generate_item_version_numbers_0_p_0(void);

#line 874 "globals.m"
static void MR_CALL 
libs__globals__lock_disable_generate_item_version_numbers_0_p_0(void);

#line 874 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_disable_generate_item_version_numbers_0_p_0(void);

#line 874 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0(void);

#line 871 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_disable_smart_recompilation_1_p_0(
#line 871 "globals.m"
  MR_Word libs__globals__X_1);

#line 871 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_disable_smart_recompilation_1_p_0(
#line 871 "globals.m"
  MR_Word * libs__globals__X_1);

#line 871 "globals.m"
static void MR_CALL 
libs__globals__unlock_disable_smart_recompilation_0_p_0(void);

#line 871 "globals.m"
static void MR_CALL 
libs__globals__lock_disable_smart_recompilation_0_p_0(void);

#line 871 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_disable_smart_recompilation_0_p_0(void);

#line 871 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0(void);

#line 868 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_extra_error_info_1_p_0(
#line 868 "globals.m"
  MR_Word libs__globals__X_1);

#line 868 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_extra_error_info_1_p_0(
#line 868 "globals.m"
  MR_Word * libs__globals__X_1);

#line 868 "globals.m"
static void MR_CALL 
libs__globals__unlock_extra_error_info_0_p_0(void);

#line 868 "globals.m"
static void MR_CALL 
libs__globals__lock_extra_error_info_0_p_0(void);

#line 868 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_extra_error_info_0_p_0(void);

#line 868 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_extra_error_info_0_p_0(void);

#line 862 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_maybe_from_ground_term_threshold_1_p_0(
#line 862 "globals.m"
  MR_Word libs__globals__X_1);

#line 862 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_maybe_from_ground_term_threshold_1_p_0(
#line 862 "globals.m"
  MR_Word * libs__globals__X_1);

#line 862 "globals.m"
static void MR_CALL 
libs__globals__unlock_maybe_from_ground_term_threshold_0_p_0(void);

#line 862 "globals.m"
static void MR_CALL 
libs__globals__lock_maybe_from_ground_term_threshold_0_p_0(void);

#line 862 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_maybe_from_ground_term_threshold_0_p_0(void);

#line 862 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0(void);

#line 857 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_solver_auto_init_supported_1_p_0(
#line 857 "globals.m"
  MR_Word libs__globals__X_1);

#line 857 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_solver_auto_init_supported_1_p_0(
#line 857 "globals.m"
  MR_Word * libs__globals__X_1);

#line 857 "globals.m"
static void MR_CALL 
libs__globals__unlock_solver_auto_init_supported_0_p_0(void);

#line 857 "globals.m"
static void MR_CALL 
libs__globals__lock_solver_auto_init_supported_0_p_0(void);

#line 857 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_solver_auto_init_supported_0_p_0(void);

#line 857 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0(void);

#line 654 "globals.m"
static MR_Box MR_CALL 
libs__globals__get_backend_foreign_languages_2_p_0_1(
#line 654 "globals.m"
  MR_Box libs__globals__closure_arg,
#line 654 "globals.m"
  MR_Box libs__globals__wrapper_arg_1);

#line 448 "globals.m"
static MR_bool MR_CALL 
libs__globals__convert_c_compiler_type_2_p_0_1(
#line 448 "globals.m"
  MR_Box libs__globals__closure_arg,
#line 448 "globals.m"
  MR_Box libs__globals__wrapper_arg_1);


static /* final */ const MR_Box libs__globals_scalar_common_1[4][2];

static /* final */ const MR_Box libs__globals_scalar_common_2[5][3];

static /* final */ const MR_Box libs__globals_scalar_common_3[2][1];

static /* final */ const MR_Box libs__globals_scalar_common_4[1][4];

static /* final */ const MR_Box libs__globals_scalar_common_5[1][5];




static /* final */ const MR_Box libs__globals_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_clang_version_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_il_version_number_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_0))
  },
};

static /* final */ const MR_Box libs__globals_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (&libs__globals_scalar_common_4[0])),
    ((MR_Box) (libs__globals__convert_c_compiler_type_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&libs__globals_scalar_common_5[0])),
    ((MR_Box) (libs__globals__get_backend_foreign_languages_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box libs__globals_scalar_common_3[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box libs__globals_scalar_common_4[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box libs__globals_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
};



#include "libs.globals.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"
#line 857 "globals.m"
MR_Unsigned libs__globals__mutable_variable_solver_auto_init_supported;

#line 862 "globals.m"
MR_Word libs__globals__mutable_variable_maybe_from_ground_term_threshold;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock;
#endif

#line 868 "globals.m"
MR_Word libs__globals__mutable_variable_extra_error_info;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_extra_error_info_lock;
#endif

#line 871 "globals.m"
MR_Word libs__globals__mutable_variable_disable_smart_recompilation;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_disable_smart_recompilation_lock;
#endif

#line 874 "globals.m"
MR_Word libs__globals__mutable_variable_disable_generate_item_version_numbers;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_disable_generate_item_version_numbers_lock;
#endif

#line 877 "globals.m"
MR_Word libs__globals__mutable_variable_maybe_source_file_map;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_maybe_source_file_map_lock;
#endif

#line 877 "globals.m"
void 
libs__globals__user_init_pred_5(void)
#line 877 "globals.m"
{
#line 877 "globals.m"
	libs__globals__initialise_mutable_maybe_source_file_map_0_p_0();
}

#line 874 "globals.m"
void 
libs__globals__user_init_pred_4(void)
#line 874 "globals.m"
{
#line 874 "globals.m"
	libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0();
}

#line 871 "globals.m"
void 
libs__globals__user_init_pred_3(void)
#line 871 "globals.m"
{
#line 871 "globals.m"
	libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0();
}

#line 868 "globals.m"
void 
libs__globals__user_init_pred_2(void)
#line 868 "globals.m"
{
#line 868 "globals.m"
	libs__globals__initialise_mutable_extra_error_info_0_p_0();
}

#line 862 "globals.m"
void 
libs__globals__user_init_pred_1(void)
#line 862 "globals.m"
{
#line 862 "globals.m"
	libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0();
}

#line 857 "globals.m"
void 
libs__globals__user_init_pred_0(void)
#line 857 "globals.m"
{
#line 857 "globals.m"
	libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0();
}


#line 1180 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1188 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_0[3] = {
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

#line 1195 "libs.globals.c"
static const MR_ConstString libs__globals__libs__globals__field_names_c_compiler_type_0_0[3] = {
  (MR_String) "gcc_major_ver",
  (MR_String) "gcc_minor_ver",
  (MR_String) "gcc_patch_level"
};

#line 1202 "libs.globals.c"
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

#line 1217 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1libs__globals__type_ctor_info_clang_version_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &libs__globals__libs__globals__type_ctor_info_clang_version_0
  }
};

#line 1225 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_1[1] = {
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1libs__globals__type_ctor_info_clang_version_0
};

#line 1230 "libs.globals.c"
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

#line 1245 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_2 = {
  (MR_String) "cc_lcc",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1260 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_3[1] = {
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

#line 1265 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_3 = {
  (MR_String) "cc_cl",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  libs__globals__libs__globals__field_types_c_compiler_type_0_3,
  NULL,
  NULL,
  NULL
};

#line 1280 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_4 = {
  (MR_String) "cc_unknown",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1295 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_0[2] = {
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_2,
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_4
};

#line 1301 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_1[1] = {
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_0
};

#line 1306 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_2[1] = {
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_1
};

#line 1311 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_3[1] = {
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_3
};

#line 1316 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_c_compiler_type_0[4] = {
  {
    (MR_Integer) 2,
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

#line 1340 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_c_compiler_type_0[5] = {
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_3,
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_1,
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_0,
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_2,
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_4
};

#line 1349 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_c_compiler_type_0[5] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 4
};

#line 1358 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_c_compiler_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__globals____Unify____c_compiler_type_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____c_compiler_type_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "c_compiler_type",
  {
    libs__globals__libs__globals__du_name_ordered_c_compiler_type_0
  },
  {
    libs__globals__libs__globals__du_ptag_ordered_c_compiler_type_0
  },
  (MR_Integer) 5,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_c_compiler_type_0
};

#line 1379 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_clang_version_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1386 "libs.globals.c"
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

#line 1401 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_clang_version_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_clang_version_0_0
};

#line 1406 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_clang_version_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_clang_version_0_0
  }
};

#line 1415 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_clang_version_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_clang_version_0_0
};

#line 1420 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_clang_version_0[1] = {
  (MR_Integer) 0
};

#line 1425 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_clang_version_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__globals____Unify____clang_version_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____clang_version_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "clang_version",
  {
    libs__globals__libs__globals__du_name_ordered_clang_version_0
  },
  {
    libs__globals__libs__globals__du_ptag_ordered_clang_version_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_clang_version_0
};

#line 1446 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_0 = {
  (MR_String) "target_c",
  (MR_Integer) 0
};

#line 1452 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_1 = {
  (MR_String) "target_il",
  (MR_Integer) 1
};

#line 1458 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_2 = {
  (MR_String) "target_csharp",
  (MR_Integer) 2
};

#line 1464 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_3 = {
  (MR_String) "target_java",
  (MR_Integer) 3
};

#line 1470 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_4 = {
  (MR_String) "target_erlang",
  (MR_Integer) 4
};

#line 1476 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_compilation_target_0[5] = {
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_0,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_1,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_2,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_3,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_4
};

#line 1485 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_compilation_target_0[5] = {
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_0,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_2,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_4,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_1,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_3
};

#line 1494 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_compilation_target_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 2
};

#line 1503 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_compilation_target_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____compilation_target_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____compilation_target_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "compilation_target",
  {
    libs__globals__libs__globals__enum_name_ordered_compilation_target_0
  },
  {
    libs__globals__libs__globals__enum_value_ordered_compilation_target_0
  },
  (MR_Integer) 5,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_compilation_target_0
};

#line 1524 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_0 = {
  (MR_String) "csharp_microsoft",
  (MR_Integer) 0
};

#line 1530 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_1 = {
  (MR_String) "csharp_mono",
  (MR_Integer) 1
};

#line 1536 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_2 = {
  (MR_String) "csharp_unknown",
  (MR_Integer) 2
};

#line 1542 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_csharp_compiler_type_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_0,
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_1,
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_2
};

#line 1549 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_csharp_compiler_type_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_0,
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_1,
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_2
};

#line 1556 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_csharp_compiler_type_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1563 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_csharp_compiler_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____csharp_compiler_type_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____csharp_compiler_type_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "csharp_compiler_type",
  {
    libs__globals__libs__globals__enum_name_ordered_csharp_compiler_type_0
  },
  {
    libs__globals__libs__globals__enum_value_ordered_csharp_compiler_type_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_csharp_compiler_type_0
};

#line 1584 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_0 = {
  (MR_String) "env_type_posix",
  (MR_Integer) 0
};

#line 1590 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_1 = {
  (MR_String) "env_type_cygwin",
  (MR_Integer) 1
};

#line 1596 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_2 = {
  (MR_String) "env_type_msys",
  (MR_Integer) 2
};

#line 1602 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_3 = {
  (MR_String) "env_type_win_cmd",
  (MR_Integer) 3
};

#line 1608 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_4 = {
  (MR_String) "env_type_powershell",
  (MR_Integer) 4
};

#line 1614 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_env_type_0[5] = {
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_0,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_1,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_2,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_3,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_4
};

#line 1623 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_env_type_0[5] = {
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_1,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_2,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_0,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_4,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_3
};

#line 1632 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_env_type_0[5] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 3
};

#line 1641 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_env_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____env_type_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____env_type_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "env_type",
  {
    libs__globals__libs__globals__enum_name_ordered_env_type_0
  },
  {
    libs__globals__libs__globals__enum_value_ordered_env_type_0
  },
  (MR_Integer) 5,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_env_type_0
};

#line 1662 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_file_install_cmd_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1668 "libs.globals.c"
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

#line 1683 "libs.globals.c"
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

#line 1698 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_file_install_cmd_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_1
};

#line 1703 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_file_install_cmd_0_1[1] = {
  &libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_0
};

#line 1708 "libs.globals.c"
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

#line 1722 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_file_install_cmd_0[2] = {
  &libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_1,
  &libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_0
};

#line 1728 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_file_install_cmd_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1734 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_file_install_cmd_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__globals____Unify____file_install_cmd_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____file_install_cmd_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "file_install_cmd",
  {
    libs__globals__libs__globals__du_name_ordered_file_install_cmd_0
  },
  {
    libs__globals__libs__globals__du_ptag_ordered_file_install_cmd_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_file_install_cmd_0
};

#line 1755 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_0 = {
  (MR_String) "lang_c",
  (MR_Integer) 0
};

#line 1761 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_1 = {
  (MR_String) "lang_csharp",
  (MR_Integer) 1
};

#line 1767 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_2 = {
  (MR_String) "lang_java",
  (MR_Integer) 2
};

#line 1773 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_3 = {
  (MR_String) "lang_il",
  (MR_Integer) 3
};

#line 1779 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_4 = {
  (MR_String) "lang_erlang",
  (MR_Integer) 4
};

#line 1785 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_foreign_language_0[5] = {
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_0,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_1,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_2,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_3,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_4
};

#line 1794 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_foreign_language_0[5] = {
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_0,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_1,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_4,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_3,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_2
};

#line 1803 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_foreign_language_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 1812 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_foreign_language_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____foreign_language_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____foreign_language_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "foreign_language",
  {
    libs__globals__libs__globals__enum_name_ordered_foreign_language_0
  },
  {
    libs__globals__libs__globals__enum_value_ordered_foreign_language_0
  },
  (MR_Integer) 5,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_foreign_language_0
};

#line 1833 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_0 = {
  (MR_String) "gc_automatic",
  (MR_Integer) 0
};

#line 1839 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_1 = {
  (MR_String) "gc_none",
  (MR_Integer) 1
};

#line 1845 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_2 = {
  (MR_String) "gc_boehm",
  (MR_Integer) 2
};

#line 1851 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_3 = {
  (MR_String) "gc_boehm_debug",
  (MR_Integer) 3
};

#line 1857 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_4 = {
  (MR_String) "gc_hgc",
  (MR_Integer) 4
};

#line 1863 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_5 = {
  (MR_String) "gc_accurate",
  (MR_Integer) 5
};

#line 1869 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_gc_method_0[6] = {
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_0,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_1,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_2,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_3,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_4,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_5
};

#line 1879 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_gc_method_0[6] = {
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_5,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_0,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_2,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_3,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_4,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_1
};

#line 1889 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_gc_method_0[6] = {
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 0
};

#line 1899 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_gc_method_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____gc_method_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____gc_method_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "gc_method",
  {
    libs__globals__libs__globals__enum_name_ordered_gc_method_0
  },
  {
    libs__globals__libs__globals__enum_value_ordered_gc_method_0
  },
  (MR_Integer) 6,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_gc_method_0
};

#line 1920 "libs.globals.c"
static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_TypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 1929 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0
  }
};

#line 1937 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1libs__globals__type_ctor_info_il_version_number_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &libs__globals__libs__globals__type_ctor_info_il_version_number_0
  }
};

#line 1945 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1mdbcomp__feedback__type_ctor_info_feedback_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_0
  }
};

#line 1953 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_globals_0_0[19] = {
  (MR_PseudoTypeInfo) &libs__globals__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0,
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
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1libs__globals__type_ctor_info_il_version_number_0,
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1mdbcomp__feedback__type_ctor_info_feedback_info_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_env_type_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_env_type_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_env_type_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_file_install_cmd_0
};

#line 1976 "libs.globals.c"
static const MR_ConstString libs__globals__libs__globals__field_names_globals_0_0[19] = {
  (MR_String) "g_options",
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
  (MR_String) "g_maybe_il_version_number",
  (MR_String) "g_maybe_feedback",
  (MR_String) "g_host_env_type",
  (MR_String) "g_system_env_type",
  (MR_String) "g_target_env_type",
  (MR_String) "g_file_install_cmd"
};

#line 1999 "libs.globals.c"
static const MR_DuArgLocn libs__globals__libs__globals__field_locns_globals_0_0[19] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 3,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 6,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 8,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 10,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 12,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 2,
    (MR_Integer) 1
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
  }
};

#line 2098 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_globals_0_0 = {
  (MR_String) "globals",
  (MR_Integer) 19,
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

#line 2113 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_globals_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_globals_0_0
};

#line 2118 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_globals_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_globals_0_0
  }
};

#line 2127 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_globals_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_globals_0_0
};

#line 2132 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_globals_0[1] = {
  (MR_Integer) 0
};

#line 2137 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_globals_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__globals____Unify____globals_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____globals_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "globals",
  {
    libs__globals__libs__globals__du_name_ordered_globals_0
  },
  {
    libs__globals__libs__globals__du_ptag_ordered_globals_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_globals_0
};

#line 2158 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_il_version_number_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2166 "libs.globals.c"
static const MR_ConstString libs__globals__libs__globals__field_names_il_version_number_0_0[4] = {
  (MR_String) "ivn_major",
  (MR_String) "ivn_minor",
  (MR_String) "ivn_build",
  (MR_String) "ivn_revision"
};

#line 2174 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_il_version_number_0_0 = {
  (MR_String) "il_version_number",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__globals__libs__globals__field_types_il_version_number_0_0,
  libs__globals__libs__globals__field_names_il_version_number_0_0,
  NULL,
  NULL
};

#line 2189 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_il_version_number_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_il_version_number_0_0
};

#line 2194 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_il_version_number_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_il_version_number_0_0
  }
};

#line 2203 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_il_version_number_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_il_version_number_0_0
};

#line 2208 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_il_version_number_0[1] = {
  (MR_Integer) 0
};

#line 2213 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_il_version_number_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__globals____Unify____il_version_number_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____il_version_number_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "il_version_number",
  {
    libs__globals__libs__globals__du_name_ordered_il_version_number_0
  },
  {
    libs__globals__libs__globals__du_ptag_ordered_il_version_number_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_il_version_number_0
};

#line 2234 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_may_be_thread_safe_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__globals____Unify____may_be_thread_safe_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____may_be_thread_safe_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "may_be_thread_safe",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2255 "libs.globals.c"
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

#line 2270 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_reuse_strategy_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2275 "libs.globals.c"
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

#line 2290 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_0
};

#line 2295 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_1[1] = {
  &libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_1
};

#line 2300 "libs.globals.c"
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

#line 2314 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_reuse_strategy_0[2] = {
  &libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_0,
  &libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_1
};

#line 2320 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_reuse_strategy_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2326 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_reuse_strategy_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__globals____Unify____reuse_strategy_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____reuse_strategy_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "reuse_strategy",
  {
    libs__globals__libs__globals__du_name_ordered_reuse_strategy_0
  },
  {
    libs__globals__libs__globals__du_ptag_ordered_reuse_strategy_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_reuse_strategy_0
};

#line 2347 "libs.globals.c"
static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2356 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_source_file_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__globals____Unify____source_file_map_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____source_file_map_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "source_file_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &libs__globals__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2377 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_0 = {
  (MR_String) "none",
  (MR_Integer) 0
};

#line 2383 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_1 = {
  (MR_String) "shallow",
  (MR_Integer) 1
};

#line 2389 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_2 = {
  (MR_String) "deep",
  (MR_Integer) 2
};

#line 2395 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_ssdb_trace_level_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_0,
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_1,
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_2
};

#line 2402 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_ssdb_trace_level_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_2,
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_0,
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_1
};

#line 2409 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_ssdb_trace_level_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2416 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_ssdb_trace_level_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____ssdb_trace_level_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____ssdb_trace_level_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "ssdb_trace_level",
  {
    libs__globals__libs__globals__enum_name_ordered_ssdb_trace_level_0
  },
  {
    libs__globals__libs__globals__enum_value_ordered_ssdb_trace_level_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_ssdb_trace_level_0
};

#line 2437 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_0 = {
  (MR_String) "tags_none",
  (MR_Integer) 0
};

#line 2443 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_1 = {
  (MR_String) "tags_low",
  (MR_Integer) 1
};

#line 2449 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_2 = {
  (MR_String) "tags_high",
  (MR_Integer) 2
};

#line 2455 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_tags_method_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_0,
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_1,
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_2
};

#line 2462 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_tags_method_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_2,
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_1,
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_0
};

#line 2469 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_tags_method_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2476 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_tags_method_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____tags_method_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____tags_method_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "tags_method",
  {
    libs__globals__libs__globals__enum_name_ordered_tags_method_0
  },
  {
    libs__globals__libs__globals__enum_value_ordered_tags_method_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_tags_method_0
};

#line 2497 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_0 = {
  (MR_String) "norm_simple",
  (MR_Integer) 0
};

#line 2503 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_1 = {
  (MR_String) "norm_total",
  (MR_Integer) 1
};

#line 2509 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_2 = {
  (MR_String) "norm_num_data_elems",
  (MR_Integer) 2
};

#line 2515 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_3 = {
  (MR_String) "norm_size_data_elems",
  (MR_Integer) 3
};

#line 2521 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_termination_norm_0[4] = {
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_0,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_1,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_2,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_3
};

#line 2529 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_termination_norm_0[4] = {
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_2,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_0,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_3,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_1
};

#line 2537 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_termination_norm_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 2545 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_termination_norm_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____termination_norm_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____termination_norm_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "termination_norm",
  {
    libs__globals__libs__globals__enum_name_ordered_termination_norm_0
  },
  {
    libs__globals__libs__globals__enum_value_ordered_termination_norm_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_termination_norm_0
};

#line 2566 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____c_compiler_type_0_0_10001(
#line 2569 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 2571 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 2573 "libs.globals.c"
{
#line 2575 "libs.globals.c"
  {
#line 2577 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 2580 "libs.globals.c"
    {
#line 2582 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____c_compiler_type_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 2585 "libs.globals.c"
    return libs__globals__succeeded;
#line 2587 "libs.globals.c"
  }
#line 2589 "libs.globals.c"
}

#line 2592 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____c_compiler_type_0_0_10001(
#line 2595 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 2597 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 2599 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 2601 "libs.globals.c"
{
#line 2603 "libs.globals.c"
  {
#line 2605 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 2608 "libs.globals.c"
    {
#line 2610 "libs.globals.c"
      libs__globals____Compare____c_compiler_type_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 2613 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 2615 "libs.globals.c"
  }
#line 2617 "libs.globals.c"
}

#line 2620 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____clang_version_0_0_10001(
#line 2623 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 2625 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 2627 "libs.globals.c"
{
#line 2629 "libs.globals.c"
  {
#line 2631 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 2634 "libs.globals.c"
    {
#line 2636 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____clang_version_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 2639 "libs.globals.c"
    return libs__globals__succeeded;
#line 2641 "libs.globals.c"
  }
#line 2643 "libs.globals.c"
}

#line 2646 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____clang_version_0_0_10001(
#line 2649 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 2651 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 2653 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 2655 "libs.globals.c"
{
#line 2657 "libs.globals.c"
  {
#line 2659 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 2662 "libs.globals.c"
    {
#line 2664 "libs.globals.c"
      libs__globals____Compare____clang_version_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 2667 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 2669 "libs.globals.c"
  }
#line 2671 "libs.globals.c"
}

#line 2674 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____compilation_target_0_0_10001(
#line 2677 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 2679 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 2681 "libs.globals.c"
{
#line 2683 "libs.globals.c"
  {
#line 2685 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 2688 "libs.globals.c"
    {
#line 2690 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____compilation_target_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 2693 "libs.globals.c"
    return libs__globals__succeeded;
#line 2695 "libs.globals.c"
  }
#line 2697 "libs.globals.c"
}

#line 2700 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____compilation_target_0_0_10001(
#line 2703 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 2705 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 2707 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 2709 "libs.globals.c"
{
#line 2711 "libs.globals.c"
  {
#line 2713 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 2716 "libs.globals.c"
    {
#line 2718 "libs.globals.c"
      libs__globals____Compare____compilation_target_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 2721 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 2723 "libs.globals.c"
  }
#line 2725 "libs.globals.c"
}

#line 2728 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____csharp_compiler_type_0_0_10001(
#line 2731 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 2733 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 2735 "libs.globals.c"
{
#line 2737 "libs.globals.c"
  {
#line 2739 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 2742 "libs.globals.c"
    {
#line 2744 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____csharp_compiler_type_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 2747 "libs.globals.c"
    return libs__globals__succeeded;
#line 2749 "libs.globals.c"
  }
#line 2751 "libs.globals.c"
}

#line 2754 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____csharp_compiler_type_0_0_10001(
#line 2757 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 2759 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 2761 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 2763 "libs.globals.c"
{
#line 2765 "libs.globals.c"
  {
#line 2767 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 2770 "libs.globals.c"
    {
#line 2772 "libs.globals.c"
      libs__globals____Compare____csharp_compiler_type_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 2775 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 2777 "libs.globals.c"
  }
#line 2779 "libs.globals.c"
}

#line 2782 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____env_type_0_0_10001(
#line 2785 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 2787 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 2789 "libs.globals.c"
{
#line 2791 "libs.globals.c"
  {
#line 2793 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 2796 "libs.globals.c"
    {
#line 2798 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____env_type_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 2801 "libs.globals.c"
    return libs__globals__succeeded;
#line 2803 "libs.globals.c"
  }
#line 2805 "libs.globals.c"
}

#line 2808 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____env_type_0_0_10001(
#line 2811 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 2813 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 2815 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 2817 "libs.globals.c"
{
#line 2819 "libs.globals.c"
  {
#line 2821 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 2824 "libs.globals.c"
    {
#line 2826 "libs.globals.c"
      libs__globals____Compare____env_type_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 2829 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 2831 "libs.globals.c"
  }
#line 2833 "libs.globals.c"
}

#line 2836 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____file_install_cmd_0_0_10001(
#line 2839 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 2841 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 2843 "libs.globals.c"
{
#line 2845 "libs.globals.c"
  {
#line 2847 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 2850 "libs.globals.c"
    {
#line 2852 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____file_install_cmd_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 2855 "libs.globals.c"
    return libs__globals__succeeded;
#line 2857 "libs.globals.c"
  }
#line 2859 "libs.globals.c"
}

#line 2862 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____file_install_cmd_0_0_10001(
#line 2865 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 2867 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 2869 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 2871 "libs.globals.c"
{
#line 2873 "libs.globals.c"
  {
#line 2875 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 2878 "libs.globals.c"
    {
#line 2880 "libs.globals.c"
      libs__globals____Compare____file_install_cmd_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 2883 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 2885 "libs.globals.c"
  }
#line 2887 "libs.globals.c"
}

#line 2890 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____foreign_language_0_0_10001(
#line 2893 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 2895 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 2897 "libs.globals.c"
{
#line 2899 "libs.globals.c"
  {
#line 2901 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 2904 "libs.globals.c"
    {
#line 2906 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____foreign_language_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 2909 "libs.globals.c"
    return libs__globals__succeeded;
#line 2911 "libs.globals.c"
  }
#line 2913 "libs.globals.c"
}

#line 2916 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____foreign_language_0_0_10001(
#line 2919 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 2921 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 2923 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 2925 "libs.globals.c"
{
#line 2927 "libs.globals.c"
  {
#line 2929 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 2932 "libs.globals.c"
    {
#line 2934 "libs.globals.c"
      libs__globals____Compare____foreign_language_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 2937 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 2939 "libs.globals.c"
  }
#line 2941 "libs.globals.c"
}

#line 2944 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____gc_method_0_0_10001(
#line 2947 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 2949 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 2951 "libs.globals.c"
{
#line 2953 "libs.globals.c"
  {
#line 2955 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 2958 "libs.globals.c"
    {
#line 2960 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____gc_method_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 2963 "libs.globals.c"
    return libs__globals__succeeded;
#line 2965 "libs.globals.c"
  }
#line 2967 "libs.globals.c"
}

#line 2970 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____gc_method_0_0_10001(
#line 2973 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 2975 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 2977 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 2979 "libs.globals.c"
{
#line 2981 "libs.globals.c"
  {
#line 2983 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 2986 "libs.globals.c"
    {
#line 2988 "libs.globals.c"
      libs__globals____Compare____gc_method_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 2991 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 2993 "libs.globals.c"
  }
#line 2995 "libs.globals.c"
}

#line 2998 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____globals_0_0_10001(
#line 3001 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3003 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3005 "libs.globals.c"
{
#line 3007 "libs.globals.c"
  {
#line 3009 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3012 "libs.globals.c"
    {
#line 3014 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____globals_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3017 "libs.globals.c"
    return libs__globals__succeeded;
#line 3019 "libs.globals.c"
  }
#line 3021 "libs.globals.c"
}

#line 3024 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____globals_0_0_10001(
#line 3027 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3029 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3031 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3033 "libs.globals.c"
{
#line 3035 "libs.globals.c"
  {
#line 3037 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3040 "libs.globals.c"
    {
#line 3042 "libs.globals.c"
      libs__globals____Compare____globals_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3045 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3047 "libs.globals.c"
  }
#line 3049 "libs.globals.c"
}

#line 3052 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____il_version_number_0_0_10001(
#line 3055 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3057 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3059 "libs.globals.c"
{
#line 3061 "libs.globals.c"
  {
#line 3063 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3066 "libs.globals.c"
    {
#line 3068 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____il_version_number_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3071 "libs.globals.c"
    return libs__globals__succeeded;
#line 3073 "libs.globals.c"
  }
#line 3075 "libs.globals.c"
}

#line 3078 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____il_version_number_0_0_10001(
#line 3081 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3083 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3085 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3087 "libs.globals.c"
{
#line 3089 "libs.globals.c"
  {
#line 3091 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3094 "libs.globals.c"
    {
#line 3096 "libs.globals.c"
      libs__globals____Compare____il_version_number_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3099 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3101 "libs.globals.c"
  }
#line 3103 "libs.globals.c"
}

#line 3106 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____may_be_thread_safe_0_0_10001(
#line 3109 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3111 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3113 "libs.globals.c"
{
#line 3115 "libs.globals.c"
  {
#line 3117 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3120 "libs.globals.c"
    {
#line 3122 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____may_be_thread_safe_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3125 "libs.globals.c"
    return libs__globals__succeeded;
#line 3127 "libs.globals.c"
  }
#line 3129 "libs.globals.c"
}

#line 3132 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____may_be_thread_safe_0_0_10001(
#line 3135 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3137 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3139 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3141 "libs.globals.c"
{
#line 3143 "libs.globals.c"
  {
#line 3145 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3148 "libs.globals.c"
    {
#line 3150 "libs.globals.c"
      libs__globals____Compare____may_be_thread_safe_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3153 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3155 "libs.globals.c"
  }
#line 3157 "libs.globals.c"
}

#line 3160 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____reuse_strategy_0_0_10001(
#line 3163 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3165 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3167 "libs.globals.c"
{
#line 3169 "libs.globals.c"
  {
#line 3171 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3174 "libs.globals.c"
    {
#line 3176 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____reuse_strategy_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3179 "libs.globals.c"
    return libs__globals__succeeded;
#line 3181 "libs.globals.c"
  }
#line 3183 "libs.globals.c"
}

#line 3186 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____reuse_strategy_0_0_10001(
#line 3189 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3191 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3193 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3195 "libs.globals.c"
{
#line 3197 "libs.globals.c"
  {
#line 3199 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3202 "libs.globals.c"
    {
#line 3204 "libs.globals.c"
      libs__globals____Compare____reuse_strategy_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3207 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3209 "libs.globals.c"
  }
#line 3211 "libs.globals.c"
}

#line 3214 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____source_file_map_0_0_10001(
#line 3217 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3219 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3221 "libs.globals.c"
{
#line 3223 "libs.globals.c"
  {
#line 3225 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3228 "libs.globals.c"
    {
#line 3230 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____source_file_map_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3233 "libs.globals.c"
    return libs__globals__succeeded;
#line 3235 "libs.globals.c"
  }
#line 3237 "libs.globals.c"
}

#line 3240 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____source_file_map_0_0_10001(
#line 3243 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3245 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3247 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3249 "libs.globals.c"
{
#line 3251 "libs.globals.c"
  {
#line 3253 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3256 "libs.globals.c"
    {
#line 3258 "libs.globals.c"
      libs__globals____Compare____source_file_map_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3261 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3263 "libs.globals.c"
  }
#line 3265 "libs.globals.c"
}

#line 3268 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____ssdb_trace_level_0_0_10001(
#line 3271 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3273 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3275 "libs.globals.c"
{
#line 3277 "libs.globals.c"
  {
#line 3279 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3282 "libs.globals.c"
    {
#line 3284 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____ssdb_trace_level_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3287 "libs.globals.c"
    return libs__globals__succeeded;
#line 3289 "libs.globals.c"
  }
#line 3291 "libs.globals.c"
}

#line 3294 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____ssdb_trace_level_0_0_10001(
#line 3297 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3299 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3301 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3303 "libs.globals.c"
{
#line 3305 "libs.globals.c"
  {
#line 3307 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3310 "libs.globals.c"
    {
#line 3312 "libs.globals.c"
      libs__globals____Compare____ssdb_trace_level_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3315 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3317 "libs.globals.c"
  }
#line 3319 "libs.globals.c"
}

#line 3322 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____tags_method_0_0_10001(
#line 3325 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3327 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3329 "libs.globals.c"
{
#line 3331 "libs.globals.c"
  {
#line 3333 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3336 "libs.globals.c"
    {
#line 3338 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____tags_method_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3341 "libs.globals.c"
    return libs__globals__succeeded;
#line 3343 "libs.globals.c"
  }
#line 3345 "libs.globals.c"
}

#line 3348 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____tags_method_0_0_10001(
#line 3351 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3353 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3355 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3357 "libs.globals.c"
{
#line 3359 "libs.globals.c"
  {
#line 3361 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3364 "libs.globals.c"
    {
#line 3366 "libs.globals.c"
      libs__globals____Compare____tags_method_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3369 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3371 "libs.globals.c"
  }
#line 3373 "libs.globals.c"
}

#line 3376 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____termination_norm_0_0_10001(
#line 3379 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3381 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3383 "libs.globals.c"
{
#line 3385 "libs.globals.c"
  {
#line 3387 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3390 "libs.globals.c"
    {
#line 3392 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____termination_norm_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3395 "libs.globals.c"
    return libs__globals__succeeded;
#line 3397 "libs.globals.c"
  }
#line 3399 "libs.globals.c"
}

#line 3402 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____termination_norm_0_0_10001(
#line 3405 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3407 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3409 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3411 "libs.globals.c"
{
#line 3413 "libs.globals.c"
  {
#line 3415 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3418 "libs.globals.c"
    {
#line 3420 "libs.globals.c"
      libs__globals____Compare____termination_norm_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3423 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3425 "libs.globals.c"
  }
#line 3427 "libs.globals.c"
}

#line 448 "globals.m"
static MR_bool MR_CALL 
libs__globals__IntroducedFrom__pred__convert_c_compiler_type_with_version__448__1_1_p_0(
#line 448 "globals.m"
  MR_Char libs__globals__HeadVar__1_12)
#line 448 "globals.m"
{
#line 448 "globals.m"
  {
#line 448 "globals.m"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__1_12 == (MR_Char) 95);

#line 448 "globals.m"
    return libs__globals__succeeded;
#line 448 "globals.m"
  }
#line 448 "globals.m"
}

#line 657 "globals.m"
static MR_Word MR_CALL 
libs__globals__IntroducedFrom__func__get_backend_foreign_languages__657__1_1_f_0(
#line 657 "globals.m"
  MR_String libs__globals__HeadVar__1_11)
#line 657 "globals.m"
{
#line 657 "globals.m"
  {
#line 657 "globals.m"
    MR_bool libs__globals__succeeded;
#line 657 "globals.m"
    MR_Word libs__globals__HeadVar__2_12;
#line 657 "globals.m"
    MR_Word libs__globals__ForeignLang0_8;

#line 655 "globals.m"
    {
#line 655 "globals.m"
      libs__globals__succeeded = libs__globals__convert_foreign_language_2_p_0(libs__globals__HeadVar__1_11, &libs__globals__ForeignLang0_8);
    }
#line 657 "globals.m"
    if (libs__globals__succeeded)
#line 656 "globals.m"
      libs__globals__HeadVar__2_12 = libs__globals__ForeignLang0_8;
#line 657 "globals.m"
    else
#line 658 "globals.m"
      {
#line 658 "globals.m"
        {
#line 658 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.get_backend_foreign_languages\'/2", (MR_String) "invalid foreign_language string");
        }
#line 658 "globals.m"
      }
#line 657 "globals.m"
    return libs__globals__HeadVar__2_12;
#line 657 "globals.m"
  }
#line 657 "globals.m"
}

#line 109 "globals.m"
void MR_CALL 
libs__globals____Compare____termination_norm_0_0(
#line 109 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 109 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 109 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 109 "globals.m"
{
#line 109 "globals.m"
  {
#line 109 "globals.m"
    MR_bool libs__globals__succeeded;
#line 109 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 109 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 109 "globals.m"
    {
#line 109 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 109 "globals.m"
      return;
    }
#line 109 "globals.m"
  }
#line 109 "globals.m"
}

#line 109 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____termination_norm_0_0(
#line 109 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 109 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 109 "globals.m"
{
#line 3533 "libs.globals.c"
  {
#line 3535 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 3538 "libs.globals.c"
    return libs__globals__succeeded;
#line 3540 "libs.globals.c"
  }
#line 109 "globals.m"
}

#line 104 "globals.m"
void MR_CALL 
libs__globals____Compare____tags_method_0_0(
#line 104 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 104 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 104 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 104 "globals.m"
{
#line 104 "globals.m"
  {
#line 104 "globals.m"
    MR_bool libs__globals__succeeded;
#line 104 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 104 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 104 "globals.m"
    {
#line 104 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 104 "globals.m"
      return;
    }
#line 104 "globals.m"
  }
#line 104 "globals.m"
}

#line 104 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____tags_method_0_0(
#line 104 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 104 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 104 "globals.m"
{
#line 3586 "libs.globals.c"
  {
#line 3588 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 3591 "libs.globals.c"
    return libs__globals__succeeded;
#line 3593 "libs.globals.c"
  }
#line 104 "globals.m"
}

#line 183 "globals.m"
void MR_CALL 
libs__globals____Compare____ssdb_trace_level_0_0(
#line 183 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 183 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 183 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 183 "globals.m"
{
#line 183 "globals.m"
  {
#line 183 "globals.m"
    MR_bool libs__globals__succeeded;
#line 183 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 183 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 183 "globals.m"
    {
#line 183 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 183 "globals.m"
      return;
    }
#line 183 "globals.m"
  }
#line 183 "globals.m"
}

#line 183 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____ssdb_trace_level_0_0(
#line 183 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 183 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 183 "globals.m"
{
#line 3639 "libs.globals.c"
  {
#line 3641 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 3644 "libs.globals.c"
    return libs__globals__succeeded;
#line 3646 "libs.globals.c"
  }
#line 183 "globals.m"
}

#line 210 "globals.m"
void MR_CALL 
libs__globals____Compare____source_file_map_0_0(
#line 210 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 210 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 210 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 210 "globals.m"
{
#line 210 "globals.m"
  {
#line 210 "globals.m"
    MR_bool libs__globals__succeeded;
#line 210 "globals.m"
    MR_Word libs__globals__Cast_HeadVar1_4 = libs__globals__HeadVar__2_2;
#line 210 "globals.m"
    MR_Word libs__globals__Cast_HeadVar2_5 = libs__globals__HeadVar__3_3;

#line 210 "globals.m"
    {
#line 210 "globals.m"
      mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_2[1], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__Cast_HeadVar1_4)), ((MR_Box) (libs__globals__Cast_HeadVar2_5)));
#line 210 "globals.m"
      return;
    }
#line 210 "globals.m"
  }
#line 210 "globals.m"
}

#line 210 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____source_file_map_0_0(
#line 210 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 210 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 210 "globals.m"
{
#line 210 "globals.m"
  {
#line 210 "globals.m"
    MR_bool libs__globals__succeeded;
#line 210 "globals.m"
    MR_Word libs__globals__Cast_HeadVar1_3 = libs__globals__HeadVar__1_1;
#line 210 "globals.m"
    MR_Word libs__globals__Cast_HeadVar2_4 = libs__globals__HeadVar__2_2;

#line 210 "globals.m"
    {
#line 210 "globals.m"
      return libs__globals__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__globals_scalar_common_2[1], ((MR_Box) (libs__globals__Cast_HeadVar1_3)), ((MR_Box) (libs__globals__Cast_HeadVar2_4)));
    }
#line 210 "globals.m"
    return libs__globals__succeeded;
#line 210 "globals.m"
  }
#line 210 "globals.m"
}

#line 152 "globals.m"
void MR_CALL 
libs__globals____Compare____reuse_strategy_0_0(
#line 152 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 152 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 152 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 152 "globals.m"
{
#line 152 "globals.m"
  {
#line 152 "globals.m"
    MR_bool libs__globals__succeeded;
#line 152 "globals.m"
    MR_Integer libs__globals__CastX_8 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 152 "globals.m"
    MR_Integer libs__globals__CastY_9 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 152 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_8 == libs__globals__CastY_9);
#line 152 "globals.m"
    if (libs__globals__succeeded)
#line 3737 "libs.globals.c"
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 152 "globals.m"
    else
#line 152 "globals.m"
      if ((libs__globals__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 152 "globals.m"
        if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 152 "globals.m"
          *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 152 "globals.m"
        else
#line 3749 "libs.globals.c"
          *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 152 "globals.m"
      else
#line 152 "globals.m"
        {
#line 152 "globals.m"
          MR_Integer libs__globals__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));

#line 152 "globals.m"
          if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3760 "libs.globals.c"
            *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 152 "globals.m"
          else
#line 152 "globals.m"
            {
#line 152 "globals.m"
              MR_Integer libs__globals__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 0)));

#line 152 "globals.m"
              {
#line 152 "globals.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__V_11_11, libs__globals__V_7_7);
#line 152 "globals.m"
                return;
              }
#line 152 "globals.m"
            }
#line 152 "globals.m"
        }
#line 152 "globals.m"
  }
#line 152 "globals.m"
}

#line 152 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____reuse_strategy_0_0(
#line 152 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 152 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 152 "globals.m"
{
#line 152 "globals.m"
  {
#line 152 "globals.m"
    MR_bool libs__globals__succeeded;
#line 152 "globals.m"
    MR_Integer libs__globals__CastX_7 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 152 "globals.m"
    MR_Integer libs__globals__CastY_8 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 152 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_7 == libs__globals__CastY_8);
#line 152 "globals.m"
    if (libs__globals__succeeded)
#line 152 "globals.m"
      libs__globals__succeeded = MR_TRUE;
#line 152 "globals.m"
    else
#line 152 "globals.m"
      if ((libs__globals__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 152 "globals.m"
        {
#line 152 "globals.m"
          MR_Integer libs__globals__CastX_3 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 152 "globals.m"
          MR_Integer libs__globals__CastY_4 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 152 "globals.m"
          libs__globals__succeeded = (libs__globals__CastY_4 == libs__globals__CastX_3);
#line 152 "globals.m"
        }
#line 152 "globals.m"
      else
#line 152 "globals.m"
        {
#line 152 "globals.m"
          MR_Integer libs__globals__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 152 "globals.m"
          MR_Integer libs__globals__V_6_6;

#line 152 "globals.m"
          libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 152 "globals.m"
          if (libs__globals__succeeded)
#line 152 "globals.m"
            {
#line 152 "globals.m"
              libs__globals__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 3841 "libs.globals.c"
              libs__globals__succeeded = (libs__globals__V_5_5 == libs__globals__V_6_6);
#line 152 "globals.m"
            }
#line 152 "globals.m"
        }
#line 152 "globals.m"
    return libs__globals__succeeded;
#line 152 "globals.m"
  }
#line 152 "globals.m"
}

#line 115 "globals.m"
void MR_CALL 
libs__globals____Compare____may_be_thread_safe_0_0(
#line 115 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 115 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 115 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 115 "globals.m"
{
#line 115 "globals.m"
  {
#line 115 "globals.m"
    MR_bool libs__globals__succeeded;
#line 115 "globals.m"
    MR_Word libs__globals__Cast_HeadVar1_4 = libs__globals__HeadVar__2_2;
#line 115 "globals.m"
    MR_Word libs__globals__Cast_HeadVar2_5 = libs__globals__HeadVar__3_3;
#line 115 "globals.m"
    MR_Integer libs__globals__V_7_7 = (MR_Integer) libs__globals__Cast_HeadVar1_4;
#line 115 "globals.m"
    MR_Integer libs__globals__V_8_8 = (MR_Integer) libs__globals__Cast_HeadVar2_5;

#line 115 "globals.m"
    {
#line 115 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__V_7_7, libs__globals__V_8_8);
#line 115 "globals.m"
      return;
    }
#line 115 "globals.m"
  }
#line 115 "globals.m"
}

#line 115 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____may_be_thread_safe_0_0(
#line 115 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 115 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 115 "globals.m"
{
#line 115 "globals.m"
  {
#line 115 "globals.m"
    MR_bool libs__globals__succeeded;
#line 115 "globals.m"
    MR_Word libs__globals__Cast_HeadVar1_3 = libs__globals__HeadVar__1_1;
#line 115 "globals.m"
    MR_Word libs__globals__Cast_HeadVar2_4 = libs__globals__HeadVar__2_2;

#line 115 "globals.m"
    libs__globals__succeeded = (libs__globals__Cast_HeadVar1_3 == libs__globals__Cast_HeadVar2_4);
#line 115 "globals.m"
    return libs__globals__succeeded;
#line 115 "globals.m"
  }
#line 115 "globals.m"
}

#line 234 "globals.m"
void MR_CALL 
libs__globals____Compare____il_version_number_0_0(
#line 234 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 234 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 234 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 234 "globals.m"
{
#line 234 "globals.m"
  {
#line 234 "globals.m"
    MR_bool libs__globals__succeeded;
#line 234 "globals.m"
    MR_Integer libs__globals__CastX_15 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 234 "globals.m"
    MR_Integer libs__globals__CastY_16 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 234 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_15 == libs__globals__CastY_16);
#line 234 "globals.m"
    if (libs__globals__succeeded)
#line 3941 "libs.globals.c"
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 234 "globals.m"
    else
#line 234 "globals.m"
      {
#line 234 "globals.m"
        MR_Integer libs__globals__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 234 "globals.m"
        MR_Integer libs__globals__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 234 "globals.m"
        MR_Integer libs__globals__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)));
#line 234 "globals.m"
        MR_Integer libs__globals__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 3)));
#line 234 "globals.m"
        MR_Integer libs__globals__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 0)));
#line 234 "globals.m"
        MR_Integer libs__globals__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)));
#line 234 "globals.m"
        MR_Integer libs__globals__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 2)));
#line 234 "globals.m"
        MR_Integer libs__globals__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 3)));
#line 234 "globals.m"
        MR_Word libs__globals__V_12_12;

#line 234 "globals.m"
        {
#line 234 "globals.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_12_12, libs__globals__V_4_4, libs__globals__V_8_8);
        }
#line 3971 "libs.globals.c"
        libs__globals__succeeded = (libs__globals__V_12_12 == (MR_Integer) 0);
#line 234 "globals.m"
        libs__globals__succeeded = !(libs__globals__succeeded);
#line 234 "globals.m"
        if (libs__globals__succeeded)
#line 234 "globals.m"
          *libs__globals__HeadVar__1_1 = libs__globals__V_12_12;
#line 234 "globals.m"
        else
#line 234 "globals.m"
          {
#line 234 "globals.m"
            MR_Word libs__globals__V_13_13;

#line 234 "globals.m"
            {
#line 234 "globals.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_13_13, libs__globals__V_5_5, libs__globals__V_9_9);
            }
#line 3991 "libs.globals.c"
            libs__globals__succeeded = (libs__globals__V_13_13 == (MR_Integer) 0);
#line 234 "globals.m"
            libs__globals__succeeded = !(libs__globals__succeeded);
#line 234 "globals.m"
            if (libs__globals__succeeded)
#line 234 "globals.m"
              *libs__globals__HeadVar__1_1 = libs__globals__V_13_13;
#line 234 "globals.m"
            else
#line 234 "globals.m"
              {
#line 234 "globals.m"
                MR_Word libs__globals__V_14_14;

#line 234 "globals.m"
                {
#line 234 "globals.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_14_14, libs__globals__V_6_6, libs__globals__V_10_10);
                }
#line 4011 "libs.globals.c"
                libs__globals__succeeded = (libs__globals__V_14_14 == (MR_Integer) 0);
#line 234 "globals.m"
                libs__globals__succeeded = !(libs__globals__succeeded);
#line 234 "globals.m"
                if (libs__globals__succeeded)
#line 234 "globals.m"
                  *libs__globals__HeadVar__1_1 = libs__globals__V_14_14;
#line 234 "globals.m"
                else
#line 234 "globals.m"
                  {
#line 234 "globals.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__V_7_7, libs__globals__V_11_11);
#line 234 "globals.m"
                    return;
                  }
#line 234 "globals.m"
              }
#line 234 "globals.m"
          }
#line 234 "globals.m"
      }
#line 234 "globals.m"
  }
#line 234 "globals.m"
}

#line 234 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____il_version_number_0_0(
#line 234 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 234 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 234 "globals.m"
{
#line 234 "globals.m"
  {
#line 234 "globals.m"
    MR_bool libs__globals__succeeded;
#line 234 "globals.m"
    MR_Integer libs__globals__CastX_11 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 234 "globals.m"
    MR_Integer libs__globals__CastY_12 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 234 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_11 == libs__globals__CastY_12);
#line 234 "globals.m"
    if (libs__globals__succeeded)
#line 234 "globals.m"
      libs__globals__succeeded = MR_TRUE;
#line 234 "globals.m"
    else
#line 234 "globals.m"
      {
#line 234 "globals.m"
        MR_Integer libs__globals__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 234 "globals.m"
        MR_Integer libs__globals__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)));
#line 234 "globals.m"
        MR_Integer libs__globals__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 2)));
#line 234 "globals.m"
        MR_Integer libs__globals__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 3)));
#line 234 "globals.m"
        MR_Integer libs__globals__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 234 "globals.m"
        MR_Integer libs__globals__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 234 "globals.m"
        MR_Integer libs__globals__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)));
#line 234 "globals.m"
        MR_Integer libs__globals__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 3)));

#line 4084 "libs.globals.c"
        libs__globals__succeeded = (libs__globals__V_3_3 == libs__globals__V_7_7);
#line 234 "globals.m"
        if (libs__globals__succeeded)
#line 234 "globals.m"
          {
#line 4090 "libs.globals.c"
            libs__globals__succeeded = (libs__globals__V_4_4 == libs__globals__V_8_8);
#line 234 "globals.m"
            if (libs__globals__succeeded)
#line 234 "globals.m"
              {
#line 4096 "libs.globals.c"
                libs__globals__succeeded = (libs__globals__V_5_5 == libs__globals__V_9_9);
#line 234 "globals.m"
                if (libs__globals__succeeded)
#line 4100 "libs.globals.c"
                  libs__globals__succeeded = (libs__globals__V_6_6 == libs__globals__V_10_10);
#line 234 "globals.m"
              }
#line 234 "globals.m"
          }
#line 234 "globals.m"
      }
#line 234 "globals.m"
    return libs__globals__succeeded;
#line 234 "globals.m"
  }
#line 234 "globals.m"
}

#line 595 "globals.m"
void MR_CALL 
libs__globals____Compare____globals_0_0(
#line 595 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 595 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 595 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 595 "globals.m"
{
#line 595 "globals.m"
  {
#line 595 "globals.m"
    MR_bool libs__globals__succeeded;
#line 595 "globals.m"
    MR_Integer libs__globals__CastX_60 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 595 "globals.m"
    MR_Integer libs__globals__CastY_61 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 595 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_60 == libs__globals__CastY_61);
#line 595 "globals.m"
    if (libs__globals__succeeded)
#line 4139 "libs.globals.c"
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 595 "globals.m"
    else
#line 595 "globals.m"
      {
#line 595 "globals.m"
        MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 595 "globals.m"
        MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 595 "globals.m"
        MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 595 "globals.m"
        MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 595 "globals.m"
        MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 595 "globals.m"
        MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 595 "globals.m"
        MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 595 "globals.m"
        MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)));
#line 595 "globals.m"
        MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 595 "globals.m"
        MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 595 "globals.m"
        MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 4)));
#line 595 "globals.m"
        MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 5)));
#line 595 "globals.m"
        MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 6)));
#line 595 "globals.m"
        MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 7)));
#line 595 "globals.m"
        MR_Word libs__globals__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 8)));
#line 595 "globals.m"
        MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 595 "globals.m"
        MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 595 "globals.m"
        MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 595 "globals.m"
        MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 10)));
#line 595 "globals.m"
        MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 0)));
#line 595 "globals.m"
        MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 595 "globals.m"
        MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 595 "globals.m"
        MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 595 "globals.m"
        MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 595 "globals.m"
        MR_Word libs__globals__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 595 "globals.m"
        MR_Word libs__globals__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 595 "globals.m"
        MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 2)));
#line 595 "globals.m"
        MR_Word libs__globals__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 595 "globals.m"
        MR_Word libs__globals__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 595 "globals.m"
        MR_Word libs__globals__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 4)));
#line 595 "globals.m"
        MR_Word libs__globals__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 5)));
#line 595 "globals.m"
        MR_Word libs__globals__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 6)));
#line 595 "globals.m"
        MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 7)));
#line 595 "globals.m"
        MR_Word libs__globals__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 8)));
#line 595 "globals.m"
        MR_Word libs__globals__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 595 "globals.m"
        MR_Word libs__globals__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 595 "globals.m"
        MR_Word libs__globals__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 595 "globals.m"
        MR_Word libs__globals__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 10)));
#line 595 "globals.m"
        MR_Word libs__globals__V_42_42;

#line 595 "globals.m"
        {
#line 595 "globals.m"
          mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_2[0], &libs__globals__V_42_42, ((MR_Box) (libs__globals__V_4_4)), ((MR_Box) (libs__globals__V_23_23)));
        }
#line 4229 "libs.globals.c"
        libs__globals__succeeded = (libs__globals__V_42_42 == (MR_Integer) 0);
#line 595 "globals.m"
        libs__globals__succeeded = !(libs__globals__succeeded);
#line 595 "globals.m"
        if (libs__globals__succeeded)
#line 595 "globals.m"
          *libs__globals__HeadVar__1_1 = libs__globals__V_42_42;
#line 595 "globals.m"
        else
#line 595 "globals.m"
          {
#line 595 "globals.m"
            MR_Word libs__globals__V_43_43;
#line 595 "globals.m"
            MR_Integer libs__globals__V_81_81 = (MR_Integer) libs__globals__V_5_5;
#line 595 "globals.m"
            MR_Integer libs__globals__V_82_82 = (MR_Integer) libs__globals__V_24_24;

#line 595 "globals.m"
            {
#line 595 "globals.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_43_43, libs__globals__V_81_81, libs__globals__V_82_82);
            }
#line 4253 "libs.globals.c"
            libs__globals__succeeded = (libs__globals__V_43_43 == (MR_Integer) 0);
#line 595 "globals.m"
            libs__globals__succeeded = !(libs__globals__succeeded);
#line 595 "globals.m"
            if (libs__globals__succeeded)
#line 595 "globals.m"
              *libs__globals__HeadVar__1_1 = libs__globals__V_43_43;
#line 595 "globals.m"
            else
#line 595 "globals.m"
              {
#line 595 "globals.m"
                MR_Word libs__globals__V_44_44;
#line 595 "globals.m"
                MR_Integer libs__globals__V_83_83 = (MR_Integer) libs__globals__V_6_6;
#line 595 "globals.m"
                MR_Integer libs__globals__V_84_84 = (MR_Integer) libs__globals__V_25_25;

#line 595 "globals.m"
                {
#line 595 "globals.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_44_44, libs__globals__V_83_83, libs__globals__V_84_84);
                }
#line 4277 "libs.globals.c"
                libs__globals__succeeded = (libs__globals__V_44_44 == (MR_Integer) 0);
#line 595 "globals.m"
                libs__globals__succeeded = !(libs__globals__succeeded);
#line 595 "globals.m"
                if (libs__globals__succeeded)
#line 595 "globals.m"
                  *libs__globals__HeadVar__1_1 = libs__globals__V_44_44;
#line 595 "globals.m"
                else
#line 595 "globals.m"
                  {
#line 595 "globals.m"
                    MR_Word libs__globals__V_45_45;
#line 595 "globals.m"
                    MR_Integer libs__globals__V_85_85 = (MR_Integer) libs__globals__V_7_7;
#line 595 "globals.m"
                    MR_Integer libs__globals__V_86_86 = (MR_Integer) libs__globals__V_26_26;

#line 595 "globals.m"
                    {
#line 595 "globals.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_45_45, libs__globals__V_85_85, libs__globals__V_86_86);
                    }
#line 4301 "libs.globals.c"
                    libs__globals__succeeded = (libs__globals__V_45_45 == (MR_Integer) 0);
#line 595 "globals.m"
                    libs__globals__succeeded = !(libs__globals__succeeded);
#line 595 "globals.m"
                    if (libs__globals__succeeded)
#line 595 "globals.m"
                      *libs__globals__HeadVar__1_1 = libs__globals__V_45_45;
#line 595 "globals.m"
                    else
#line 595 "globals.m"
                      {
#line 595 "globals.m"
                        MR_Word libs__globals__V_46_46;
#line 595 "globals.m"
                        MR_Integer libs__globals__V_87_87 = (MR_Integer) libs__globals__V_8_8;
#line 595 "globals.m"
                        MR_Integer libs__globals__V_88_88 = (MR_Integer) libs__globals__V_27_27;

#line 595 "globals.m"
                        {
#line 595 "globals.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_46_46, libs__globals__V_87_87, libs__globals__V_88_88);
                        }
#line 4325 "libs.globals.c"
                        libs__globals__succeeded = (libs__globals__V_46_46 == (MR_Integer) 0);
#line 595 "globals.m"
                        libs__globals__succeeded = !(libs__globals__succeeded);
#line 595 "globals.m"
                        if (libs__globals__succeeded)
#line 595 "globals.m"
                          *libs__globals__HeadVar__1_1 = libs__globals__V_46_46;
#line 595 "globals.m"
                        else
#line 595 "globals.m"
                          {
#line 595 "globals.m"
                            MR_Word libs__globals__V_47_47;
#line 595 "globals.m"
                            MR_Integer libs__globals__V_89_89 = (MR_Integer) libs__globals__V_9_9;
#line 595 "globals.m"
                            MR_Integer libs__globals__V_90_90 = (MR_Integer) libs__globals__V_28_28;

#line 595 "globals.m"
                            {
#line 595 "globals.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_47_47, libs__globals__V_89_89, libs__globals__V_90_90);
                            }
#line 4349 "libs.globals.c"
                            libs__globals__succeeded = (libs__globals__V_47_47 == (MR_Integer) 0);
#line 595 "globals.m"
                            libs__globals__succeeded = !(libs__globals__succeeded);
#line 595 "globals.m"
                            if (libs__globals__succeeded)
#line 595 "globals.m"
                              *libs__globals__HeadVar__1_1 = libs__globals__V_47_47;
#line 595 "globals.m"
                            else
#line 595 "globals.m"
                              {
#line 595 "globals.m"
                                MR_Word libs__globals__V_48_48;

#line 595 "globals.m"
                                {
#line 595 "globals.m"
                                  libs__trace_params____Compare____trace_level_0_0(&libs__globals__V_48_48, libs__globals__V_10_10, libs__globals__V_29_29);
                                }
#line 4369 "libs.globals.c"
                                libs__globals__succeeded = (libs__globals__V_48_48 == (MR_Integer) 0);
#line 595 "globals.m"
                                libs__globals__succeeded = !(libs__globals__succeeded);
#line 595 "globals.m"
                                if (libs__globals__succeeded)
#line 595 "globals.m"
                                  *libs__globals__HeadVar__1_1 = libs__globals__V_48_48;
#line 595 "globals.m"
                                else
#line 595 "globals.m"
                                  {
#line 595 "globals.m"
                                    MR_Word libs__globals__V_49_49;

#line 595 "globals.m"
                                    {
#line 595 "globals.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_items_0, &libs__globals__V_49_49, ((MR_Box) (libs__globals__V_11_11)), ((MR_Box) (libs__globals__V_30_30)));
                                    }
#line 4389 "libs.globals.c"
                                    libs__globals__succeeded = (libs__globals__V_49_49 == (MR_Integer) 0);
#line 595 "globals.m"
                                    libs__globals__succeeded = !(libs__globals__succeeded);
#line 595 "globals.m"
                                    if (libs__globals__succeeded)
#line 595 "globals.m"
                                      *libs__globals__HeadVar__1_1 = libs__globals__V_49_49;
#line 595 "globals.m"
                                    else
#line 595 "globals.m"
                                      {
#line 595 "globals.m"
                                        MR_Word libs__globals__V_50_50;
#line 595 "globals.m"
                                        MR_Integer libs__globals__V_91_91 = (MR_Integer) libs__globals__V_12_12;
#line 595 "globals.m"
                                        MR_Integer libs__globals__V_92_92 = (MR_Integer) libs__globals__V_31_31;

#line 595 "globals.m"
                                        {
#line 595 "globals.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_50_50, libs__globals__V_91_91, libs__globals__V_92_92);
                                        }
#line 4413 "libs.globals.c"
                                        libs__globals__succeeded = (libs__globals__V_50_50 == (MR_Integer) 0);
#line 595 "globals.m"
                                        libs__globals__succeeded = !(libs__globals__succeeded);
#line 595 "globals.m"
                                        if (libs__globals__succeeded)
#line 595 "globals.m"
                                          *libs__globals__HeadVar__1_1 = libs__globals__V_50_50;
#line 595 "globals.m"
                                        else
#line 595 "globals.m"
                                          {
#line 595 "globals.m"
                                            MR_Word libs__globals__V_51_51;
#line 595 "globals.m"
                                            MR_Integer libs__globals__V_93_93 = (MR_Integer) libs__globals__V_13_13;
#line 595 "globals.m"
                                            MR_Integer libs__globals__V_94_94 = (MR_Integer) libs__globals__V_32_32;

#line 595 "globals.m"
                                            {
#line 595 "globals.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_51_51, libs__globals__V_93_93, libs__globals__V_94_94);
                                            }
#line 4437 "libs.globals.c"
                                            libs__globals__succeeded = (libs__globals__V_51_51 == (MR_Integer) 0);
#line 595 "globals.m"
                                            libs__globals__succeeded = !(libs__globals__succeeded);
#line 595 "globals.m"
                                            if (libs__globals__succeeded)
#line 595 "globals.m"
                                              *libs__globals__HeadVar__1_1 = libs__globals__V_51_51;
#line 595 "globals.m"
                                            else
#line 595 "globals.m"
                                              {
#line 595 "globals.m"
                                                MR_Word libs__globals__V_52_52;

#line 595 "globals.m"
                                                {
#line 595 "globals.m"
                                                  libs__globals____Compare____c_compiler_type_0_0(&libs__globals__V_52_52, libs__globals__V_14_14, libs__globals__V_33_33);
                                                }
#line 4457 "libs.globals.c"
                                                libs__globals__succeeded = (libs__globals__V_52_52 == (MR_Integer) 0);
#line 595 "globals.m"
                                                libs__globals__succeeded = !(libs__globals__succeeded);
#line 595 "globals.m"
                                                if (libs__globals__succeeded)
#line 595 "globals.m"
                                                  *libs__globals__HeadVar__1_1 = libs__globals__V_52_52;
#line 595 "globals.m"
                                                else
#line 595 "globals.m"
                                                  {
#line 595 "globals.m"
                                                    MR_Word libs__globals__V_53_53;
#line 595 "globals.m"
                                                    MR_Integer libs__globals__V_95_95 = (MR_Integer) libs__globals__V_15_15;
#line 595 "globals.m"
                                                    MR_Integer libs__globals__V_96_96 = (MR_Integer) libs__globals__V_34_34;

#line 595 "globals.m"
                                                    {
#line 595 "globals.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_53_53, libs__globals__V_95_95, libs__globals__V_96_96);
                                                    }
#line 4481 "libs.globals.c"
                                                    libs__globals__succeeded = (libs__globals__V_53_53 == (MR_Integer) 0);
#line 595 "globals.m"
                                                    libs__globals__succeeded = !(libs__globals__succeeded);
#line 595 "globals.m"
                                                    if (libs__globals__succeeded)
#line 595 "globals.m"
                                                      *libs__globals__HeadVar__1_1 = libs__globals__V_53_53;
#line 595 "globals.m"
                                                    else
#line 595 "globals.m"
                                                      {
#line 595 "globals.m"
                                                        MR_Word libs__globals__V_54_54;

#line 595 "globals.m"
                                                        {
#line 595 "globals.m"
                                                          libs__globals____Compare____reuse_strategy_0_0(&libs__globals__V_54_54, libs__globals__V_16_16, libs__globals__V_35_35);
                                                        }
#line 4501 "libs.globals.c"
                                                        libs__globals__succeeded = (libs__globals__V_54_54 == (MR_Integer) 0);
#line 595 "globals.m"
                                                        libs__globals__succeeded = !(libs__globals__succeeded);
#line 595 "globals.m"
                                                        if (libs__globals__succeeded)
#line 595 "globals.m"
                                                          *libs__globals__HeadVar__1_1 = libs__globals__V_54_54;
#line 595 "globals.m"
                                                        else
#line 595 "globals.m"
                                                          {
#line 595 "globals.m"
                                                            MR_Word libs__globals__V_55_55;

#line 595 "globals.m"
                                                            {
#line 595 "globals.m"
                                                              mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[2], &libs__globals__V_55_55, ((MR_Box) (libs__globals__V_17_17)), ((MR_Box) (libs__globals__V_36_36)));
                                                            }
#line 4521 "libs.globals.c"
                                                            libs__globals__succeeded = (libs__globals__V_55_55 == (MR_Integer) 0);
#line 595 "globals.m"
                                                            libs__globals__succeeded = !(libs__globals__succeeded);
#line 595 "globals.m"
                                                            if (libs__globals__succeeded)
#line 595 "globals.m"
                                                              *libs__globals__HeadVar__1_1 = libs__globals__V_55_55;
#line 595 "globals.m"
                                                            else
#line 595 "globals.m"
                                                              {
#line 595 "globals.m"
                                                                MR_Word libs__globals__V_56_56;

#line 595 "globals.m"
                                                                {
#line 595 "globals.m"
                                                                  mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[3], &libs__globals__V_56_56, ((MR_Box) (libs__globals__V_18_18)), ((MR_Box) (libs__globals__V_37_37)));
                                                                }
#line 4541 "libs.globals.c"
                                                                libs__globals__succeeded = (libs__globals__V_56_56 == (MR_Integer) 0);
#line 595 "globals.m"
                                                                libs__globals__succeeded = !(libs__globals__succeeded);
#line 595 "globals.m"
                                                                if (libs__globals__succeeded)
#line 595 "globals.m"
                                                                  *libs__globals__HeadVar__1_1 = libs__globals__V_56_56;
#line 595 "globals.m"
                                                                else
#line 595 "globals.m"
                                                                  {
#line 595 "globals.m"
                                                                    MR_Word libs__globals__V_57_57;
#line 595 "globals.m"
                                                                    MR_Integer libs__globals__V_97_97 = (MR_Integer) libs__globals__V_19_19;
#line 595 "globals.m"
                                                                    MR_Integer libs__globals__V_98_98 = (MR_Integer) libs__globals__V_38_38;

#line 595 "globals.m"
                                                                    {
#line 595 "globals.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_57_57, libs__globals__V_97_97, libs__globals__V_98_98);
                                                                    }
#line 4565 "libs.globals.c"
                                                                    libs__globals__succeeded = (libs__globals__V_57_57 == (MR_Integer) 0);
#line 595 "globals.m"
                                                                    libs__globals__succeeded = !(libs__globals__succeeded);
#line 595 "globals.m"
                                                                    if (libs__globals__succeeded)
#line 595 "globals.m"
                                                                      *libs__globals__HeadVar__1_1 = libs__globals__V_57_57;
#line 595 "globals.m"
                                                                    else
#line 595 "globals.m"
                                                                      {
#line 595 "globals.m"
                                                                        MR_Word libs__globals__V_58_58;
#line 595 "globals.m"
                                                                        MR_Integer libs__globals__V_99_99 = (MR_Integer) libs__globals__V_20_20;
#line 595 "globals.m"
                                                                        MR_Integer libs__globals__V_100_100 = (MR_Integer) libs__globals__V_39_39;

#line 595 "globals.m"
                                                                        {
#line 595 "globals.m"
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_58_58, libs__globals__V_99_99, libs__globals__V_100_100);
                                                                        }
#line 4589 "libs.globals.c"
                                                                        libs__globals__succeeded = (libs__globals__V_58_58 == (MR_Integer) 0);
#line 595 "globals.m"
                                                                        libs__globals__succeeded = !(libs__globals__succeeded);
#line 595 "globals.m"
                                                                        if (libs__globals__succeeded)
#line 595 "globals.m"
                                                                          *libs__globals__HeadVar__1_1 = libs__globals__V_58_58;
#line 595 "globals.m"
                                                                        else
#line 595 "globals.m"
                                                                          {
#line 595 "globals.m"
                                                                            MR_Word libs__globals__V_59_59;
#line 595 "globals.m"
                                                                            MR_Integer libs__globals__V_101_101 = (MR_Integer) libs__globals__V_21_21;
#line 595 "globals.m"
                                                                            MR_Integer libs__globals__V_102_102 = (MR_Integer) libs__globals__V_40_40;

#line 595 "globals.m"
                                                                            {
#line 595 "globals.m"
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_59_59, libs__globals__V_101_101, libs__globals__V_102_102);
                                                                            }
#line 4613 "libs.globals.c"
                                                                            libs__globals__succeeded = (libs__globals__V_59_59 == (MR_Integer) 0);
#line 595 "globals.m"
                                                                            libs__globals__succeeded = !(libs__globals__succeeded);
#line 595 "globals.m"
                                                                            if (libs__globals__succeeded)
#line 595 "globals.m"
                                                                              *libs__globals__HeadVar__1_1 = libs__globals__V_59_59;
#line 595 "globals.m"
                                                                            else
#line 595 "globals.m"
                                                                              {
#line 595 "globals.m"
                                                                                libs__globals____Compare____file_install_cmd_0_0(libs__globals__HeadVar__1_1, libs__globals__V_22_22, libs__globals__V_41_41);
#line 595 "globals.m"
                                                                                return;
                                                                              }
#line 595 "globals.m"
                                                                          }
#line 595 "globals.m"
                                                                      }
#line 595 "globals.m"
                                                                  }
#line 595 "globals.m"
                                                              }
#line 595 "globals.m"
                                                          }
#line 595 "globals.m"
                                                      }
#line 595 "globals.m"
                                                  }
#line 595 "globals.m"
                                              }
#line 595 "globals.m"
                                          }
#line 595 "globals.m"
                                      }
#line 595 "globals.m"
                                  }
#line 595 "globals.m"
                              }
#line 595 "globals.m"
                          }
#line 595 "globals.m"
                      }
#line 595 "globals.m"
                  }
#line 595 "globals.m"
              }
#line 595 "globals.m"
          }
#line 595 "globals.m"
      }
#line 595 "globals.m"
  }
#line 595 "globals.m"
}

#line 595 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____globals_0_0(
#line 595 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 595 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 595 "globals.m"
{
#line 595 "globals.m"
  {
#line 595 "globals.m"
    MR_bool libs__globals__succeeded;
#line 595 "globals.m"
    MR_Integer libs__globals__CastX_41 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 595 "globals.m"
    MR_Integer libs__globals__CastY_42 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 595 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_41 == libs__globals__CastY_42);
#line 595 "globals.m"
    if (libs__globals__succeeded)
#line 595 "globals.m"
      libs__globals__succeeded = MR_TRUE;
#line 595 "globals.m"
    else
#line 595 "globals.m"
      {
#line 595 "globals.m"
        MR_Word libs__globals__TypeCtorInfo_45_45;
#line 595 "globals.m"
        MR_Word libs__globals__TypeInfo_46_46;
#line 595 "globals.m"
        MR_Word libs__globals__TypeInfo_47_47;
#line 595 "globals.m"
        MR_Word libs__globals__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 595 "globals.m"
        MR_Word libs__globals__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 595 "globals.m"
        MR_Word libs__globals__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 595 "globals.m"
        MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 595 "globals.m"
        MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 595 "globals.m"
        MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 595 "globals.m"
        MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 595 "globals.m"
        MR_Word libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 2)));
#line 595 "globals.m"
        MR_Word libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 595 "globals.m"
        MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 595 "globals.m"
        MR_Word libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 4)));
#line 595 "globals.m"
        MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 5)));
#line 595 "globals.m"
        MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 6)));
#line 595 "globals.m"
        MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 7)));
#line 595 "globals.m"
        MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 8)));
#line 595 "globals.m"
        MR_Word libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 595 "globals.m"
        MR_Word libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 595 "globals.m"
        MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 595 "globals.m"
        MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 10)));
#line 595 "globals.m"
        MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 595 "globals.m"
        MR_Word libs__globals__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 595 "globals.m"
        MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 595 "globals.m"
        MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 595 "globals.m"
        MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 595 "globals.m"
        MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 595 "globals.m"
        MR_Word libs__globals__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 595 "globals.m"
        MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)));
#line 595 "globals.m"
        MR_Word libs__globals__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 595 "globals.m"
        MR_Word libs__globals__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 595 "globals.m"
        MR_Word libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 4)));
#line 595 "globals.m"
        MR_Word libs__globals__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 5)));
#line 595 "globals.m"
        MR_Word libs__globals__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 6)));
#line 595 "globals.m"
        MR_Word libs__globals__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 7)));
#line 595 "globals.m"
        MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 8)));
#line 595 "globals.m"
        MR_Word libs__globals__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 595 "globals.m"
        MR_Word libs__globals__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 595 "globals.m"
        MR_Word libs__globals__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 595 "globals.m"
        MR_Word libs__globals__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 10)));

#line 4782 "libs.globals.c"
        {
#line 4784 "libs.globals.c"
          libs__globals__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__globals_scalar_common_2[0], ((MR_Box) (libs__globals__V_3_3)), ((MR_Box) (libs__globals__V_22_22)));
        }
#line 595 "globals.m"
        if (libs__globals__succeeded)
#line 595 "globals.m"
          {
#line 4791 "libs.globals.c"
            libs__globals__succeeded = (libs__globals__V_4_4 == libs__globals__V_23_23);
#line 595 "globals.m"
            if (libs__globals__succeeded)
#line 595 "globals.m"
              {
#line 4797 "libs.globals.c"
                libs__globals__succeeded = (libs__globals__V_5_5 == libs__globals__V_24_24);
#line 595 "globals.m"
                if (libs__globals__succeeded)
#line 595 "globals.m"
                  {
#line 4803 "libs.globals.c"
                    libs__globals__succeeded = (libs__globals__V_6_6 == libs__globals__V_25_25);
#line 595 "globals.m"
                    if (libs__globals__succeeded)
#line 595 "globals.m"
                      {
#line 4809 "libs.globals.c"
                        libs__globals__succeeded = (libs__globals__V_7_7 == libs__globals__V_26_26);
#line 595 "globals.m"
                        if (libs__globals__succeeded)
#line 595 "globals.m"
                          {
#line 4815 "libs.globals.c"
                            libs__globals__succeeded = (libs__globals__V_8_8 == libs__globals__V_27_27);
#line 595 "globals.m"
                            if (libs__globals__succeeded)
#line 595 "globals.m"
                              {
#line 4821 "libs.globals.c"
                                {
#line 4823 "libs.globals.c"
                                  libs__globals__succeeded = libs__trace_params____Unify____trace_level_0_0(libs__globals__V_9_9, libs__globals__V_28_28);
                                }
#line 595 "globals.m"
                                if (libs__globals__succeeded)
#line 595 "globals.m"
                                  {
#line 4830 "libs.globals.c"
                                    libs__globals__TypeCtorInfo_45_45 = (MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_items_0;
#line 4832 "libs.globals.c"
                                    {
#line 4834 "libs.globals.c"
                                      libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeCtorInfo_45_45, ((MR_Box) (libs__globals__V_10_10)), ((MR_Box) (libs__globals__V_29_29)));
                                    }
#line 595 "globals.m"
                                    if (libs__globals__succeeded)
#line 595 "globals.m"
                                      {
#line 4841 "libs.globals.c"
                                        libs__globals__succeeded = (libs__globals__V_11_11 == libs__globals__V_30_30);
#line 595 "globals.m"
                                        if (libs__globals__succeeded)
#line 595 "globals.m"
                                          {
#line 4847 "libs.globals.c"
                                            libs__globals__succeeded = (libs__globals__V_12_12 == libs__globals__V_31_31);
#line 595 "globals.m"
                                            if (libs__globals__succeeded)
#line 595 "globals.m"
                                              {
#line 4853 "libs.globals.c"
                                                {
#line 4855 "libs.globals.c"
                                                  libs__globals__succeeded = libs__globals____Unify____c_compiler_type_0_0(libs__globals__V_13_13, libs__globals__V_32_32);
                                                }
#line 595 "globals.m"
                                                if (libs__globals__succeeded)
#line 595 "globals.m"
                                                  {
#line 4862 "libs.globals.c"
                                                    libs__globals__succeeded = (libs__globals__V_14_14 == libs__globals__V_33_33);
#line 595 "globals.m"
                                                    if (libs__globals__succeeded)
#line 595 "globals.m"
                                                      {
#line 4868 "libs.globals.c"
                                                        {
#line 4870 "libs.globals.c"
                                                          libs__globals__succeeded = libs__globals____Unify____reuse_strategy_0_0(libs__globals__V_15_15, libs__globals__V_34_34);
                                                        }
#line 595 "globals.m"
                                                        if (libs__globals__succeeded)
#line 595 "globals.m"
                                                          {
#line 4877 "libs.globals.c"
                                                            libs__globals__TypeInfo_46_46 = (MR_Word) &libs__globals_scalar_common_1[2];
#line 4879 "libs.globals.c"
                                                            {
#line 4881 "libs.globals.c"
                                                              libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_46_46, ((MR_Box) (libs__globals__V_16_16)), ((MR_Box) (libs__globals__V_35_35)));
                                                            }
#line 595 "globals.m"
                                                            if (libs__globals__succeeded)
#line 595 "globals.m"
                                                              {
#line 4888 "libs.globals.c"
                                                                libs__globals__TypeInfo_47_47 = (MR_Word) &libs__globals_scalar_common_1[3];
#line 4890 "libs.globals.c"
                                                                {
#line 4892 "libs.globals.c"
                                                                  libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_47_47, ((MR_Box) (libs__globals__V_17_17)), ((MR_Box) (libs__globals__V_36_36)));
                                                                }
#line 595 "globals.m"
                                                                if (libs__globals__succeeded)
#line 595 "globals.m"
                                                                  {
#line 4899 "libs.globals.c"
                                                                    libs__globals__succeeded = (libs__globals__V_18_18 == libs__globals__V_37_37);
#line 595 "globals.m"
                                                                    if (libs__globals__succeeded)
#line 595 "globals.m"
                                                                      {
#line 4905 "libs.globals.c"
                                                                        libs__globals__succeeded = (libs__globals__V_19_19 == libs__globals__V_38_38);
#line 595 "globals.m"
                                                                        if (libs__globals__succeeded)
#line 595 "globals.m"
                                                                          {
#line 4911 "libs.globals.c"
                                                                            libs__globals__succeeded = (libs__globals__V_20_20 == libs__globals__V_39_39);
#line 595 "globals.m"
                                                                            if (libs__globals__succeeded)
#line 4915 "libs.globals.c"
                                                                              {
#line 4917 "libs.globals.c"
                                                                                return libs__globals__succeeded = libs__globals____Unify____file_install_cmd_0_0(libs__globals__V_21_21, libs__globals__V_40_40);
                                                                              }
#line 595 "globals.m"
                                                                          }
#line 595 "globals.m"
                                                                      }
#line 595 "globals.m"
                                                                  }
#line 595 "globals.m"
                                                              }
#line 595 "globals.m"
                                                          }
#line 595 "globals.m"
                                                      }
#line 595 "globals.m"
                                                  }
#line 595 "globals.m"
                                              }
#line 595 "globals.m"
                                          }
#line 595 "globals.m"
                                      }
#line 595 "globals.m"
                                  }
#line 595 "globals.m"
                              }
#line 595 "globals.m"
                          }
#line 595 "globals.m"
                      }
#line 595 "globals.m"
                  }
#line 595 "globals.m"
              }
#line 595 "globals.m"
          }
#line 595 "globals.m"
      }
#line 595 "globals.m"
    return libs__globals__succeeded;
#line 595 "globals.m"
  }
#line 595 "globals.m"
}

#line 77 "globals.m"
void MR_CALL 
libs__globals____Compare____gc_method_0_0(
#line 77 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 77 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 77 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 77 "globals.m"
{
#line 77 "globals.m"
  {
#line 77 "globals.m"
    MR_bool libs__globals__succeeded;
#line 77 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 77 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 77 "globals.m"
    {
#line 77 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 77 "globals.m"
      return;
    }
#line 77 "globals.m"
  }
#line 77 "globals.m"
}

#line 77 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____gc_method_0_0(
#line 77 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 77 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 77 "globals.m"
{
#line 5004 "libs.globals.c"
  {
#line 5006 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 5009 "libs.globals.c"
    return libs__globals__succeeded;
#line 5011 "libs.globals.c"
  }
#line 77 "globals.m"
}

#line 48 "globals.m"
void MR_CALL 
libs__globals____Compare____foreign_language_0_0(
#line 48 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 48 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 48 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 48 "globals.m"
{
#line 48 "globals.m"
  {
#line 48 "globals.m"
    MR_bool libs__globals__succeeded;
#line 48 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 48 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 48 "globals.m"
    {
#line 48 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 48 "globals.m"
      return;
    }
#line 48 "globals.m"
  }
#line 48 "globals.m"
}

#line 48 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____foreign_language_0_0(
#line 48 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 48 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 48 "globals.m"
{
#line 5057 "libs.globals.c"
  {
#line 5059 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 5062 "libs.globals.c"
    return libs__globals__succeeded;
#line 5064 "libs.globals.c"
  }
#line 48 "globals.m"
}

#line 196 "globals.m"
void MR_CALL 
libs__globals____Compare____file_install_cmd_0_0(
#line 196 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 196 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 196 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 196 "globals.m"
{
#line 196 "globals.m"
  {
#line 196 "globals.m"
    MR_bool libs__globals__succeeded;
#line 196 "globals.m"
    MR_Integer libs__globals__CastX_13 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 196 "globals.m"
    MR_Integer libs__globals__CastY_14 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 196 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_13 == libs__globals__CastY_14);
#line 196 "globals.m"
    if (libs__globals__succeeded)
#line 5093 "libs.globals.c"
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 196 "globals.m"
    else
#line 196 "globals.m"
      if ((libs__globals__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 196 "globals.m"
        if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 196 "globals.m"
          *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 196 "globals.m"
        else
#line 5105 "libs.globals.c"
          *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 196 "globals.m"
      else
#line 196 "globals.m"
        {
#line 196 "globals.m"
          MR_String libs__globals__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 196 "globals.m"
          MR_String libs__globals__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));

#line 196 "globals.m"
          if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5118 "libs.globals.c"
            *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 196 "globals.m"
          else
#line 196 "globals.m"
            {
#line 196 "globals.m"
              MR_String libs__globals__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 0)));
#line 196 "globals.m"
              MR_String libs__globals__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 1)));
#line 196 "globals.m"
              MR_Word libs__globals__V_8_8;

#line 196 "globals.m"
              {
#line 196 "globals.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(&libs__globals__V_8_8, libs__globals__V_18_18, libs__globals__V_6_6);
              }
#line 5136 "libs.globals.c"
              libs__globals__succeeded = (libs__globals__V_8_8 == (MR_Integer) 0);
#line 196 "globals.m"
              libs__globals__succeeded = !(libs__globals__succeeded);
#line 196 "globals.m"
              if (libs__globals__succeeded)
#line 196 "globals.m"
                *libs__globals__HeadVar__1_1 = libs__globals__V_8_8;
#line 196 "globals.m"
              else
#line 196 "globals.m"
                {
#line 196 "globals.m"
                  mercury__private_builtin__builtin_compare_string_3_p_0(libs__globals__HeadVar__1_1, libs__globals__V_17_17, libs__globals__V_7_7);
#line 196 "globals.m"
                  return;
                }
#line 196 "globals.m"
            }
#line 196 "globals.m"
        }
#line 196 "globals.m"
  }
#line 196 "globals.m"
}

#line 196 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____file_install_cmd_0_0(
#line 196 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 196 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 196 "globals.m"
{
#line 196 "globals.m"
  {
#line 196 "globals.m"
    MR_bool libs__globals__succeeded;
#line 196 "globals.m"
    MR_Integer libs__globals__CastX_9 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 196 "globals.m"
    MR_Integer libs__globals__CastY_10 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 196 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_9 == libs__globals__CastY_10);
#line 196 "globals.m"
    if (libs__globals__succeeded)
#line 196 "globals.m"
      libs__globals__succeeded = MR_TRUE;
#line 196 "globals.m"
    else
#line 196 "globals.m"
      if ((libs__globals__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 196 "globals.m"
        {
#line 196 "globals.m"
          MR_Integer libs__globals__CastX_7 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 196 "globals.m"
          MR_Integer libs__globals__CastY_8 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 196 "globals.m"
          libs__globals__succeeded = (libs__globals__CastY_8 == libs__globals__CastX_7);
#line 196 "globals.m"
        }
#line 196 "globals.m"
      else
#line 196 "globals.m"
        {
#line 196 "globals.m"
          MR_String libs__globals__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 196 "globals.m"
          MR_String libs__globals__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 1)));
#line 196 "globals.m"
          MR_String libs__globals__V_5_5;
#line 196 "globals.m"
          MR_String libs__globals__V_6_6;

#line 196 "globals.m"
          libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 196 "globals.m"
          if (libs__globals__succeeded)
#line 196 "globals.m"
            {
#line 196 "globals.m"
              libs__globals__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 196 "globals.m"
              libs__globals__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 5224 "libs.globals.c"
              libs__globals__succeeded = (strcmp(libs__globals__V_3_3, libs__globals__V_5_5) == 0);
#line 196 "globals.m"
              if (libs__globals__succeeded)
#line 5228 "libs.globals.c"
                libs__globals__succeeded = (strcmp(libs__globals__V_4_4, libs__globals__V_6_6) == 0);
#line 196 "globals.m"
            }
#line 196 "globals.m"
        }
#line 196 "globals.m"
    return libs__globals__succeeded;
#line 196 "globals.m"
  }
#line 196 "globals.m"
}

#line 163 "globals.m"
void MR_CALL 
libs__globals____Compare____env_type_0_0(
#line 163 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 163 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 163 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 163 "globals.m"
{
#line 163 "globals.m"
  {
#line 163 "globals.m"
    MR_bool libs__globals__succeeded;
#line 163 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 163 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 163 "globals.m"
    {
#line 163 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 163 "globals.m"
      return;
    }
#line 163 "globals.m"
  }
#line 163 "globals.m"
}

#line 163 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____env_type_0_0(
#line 163 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 163 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 163 "globals.m"
{
#line 5282 "libs.globals.c"
  {
#line 5284 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 5287 "libs.globals.c"
    return libs__globals__succeeded;
#line 5289 "libs.globals.c"
  }
#line 163 "globals.m"
}

#line 138 "globals.m"
void MR_CALL 
libs__globals____Compare____csharp_compiler_type_0_0(
#line 138 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 138 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 138 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 138 "globals.m"
{
#line 138 "globals.m"
  {
#line 138 "globals.m"
    MR_bool libs__globals__succeeded;
#line 138 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 138 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 138 "globals.m"
    {
#line 138 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 138 "globals.m"
      return;
    }
#line 138 "globals.m"
  }
#line 138 "globals.m"
}

#line 138 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____csharp_compiler_type_0_0(
#line 138 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 138 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 138 "globals.m"
{
#line 5335 "libs.globals.c"
  {
#line 5337 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 5340 "libs.globals.c"
    return libs__globals__succeeded;
#line 5342 "libs.globals.c"
  }
#line 138 "globals.m"
}

#line 40 "globals.m"
void MR_CALL 
libs__globals____Compare____compilation_target_0_0(
#line 40 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 40 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 40 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 40 "globals.m"
{
#line 40 "globals.m"
  {
#line 40 "globals.m"
    MR_bool libs__globals__succeeded;
#line 40 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 40 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 40 "globals.m"
    {
#line 40 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 40 "globals.m"
      return;
    }
#line 40 "globals.m"
  }
#line 40 "globals.m"
}

#line 40 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____compilation_target_0_0(
#line 40 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 40 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 40 "globals.m"
{
#line 5388 "libs.globals.c"
  {
#line 5390 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 5393 "libs.globals.c"
    return libs__globals__succeeded;
#line 5395 "libs.globals.c"
  }
#line 40 "globals.m"
}

#line 144 "globals.m"
void MR_CALL 
libs__globals____Compare____clang_version_0_0(
#line 144 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 144 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 144 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 144 "globals.m"
{
#line 144 "globals.m"
  {
#line 144 "globals.m"
    MR_bool libs__globals__succeeded;
#line 144 "globals.m"
    MR_Integer libs__globals__CastX_12 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 144 "globals.m"
    MR_Integer libs__globals__CastY_13 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 144 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_12 == libs__globals__CastY_13);
#line 144 "globals.m"
    if (libs__globals__succeeded)
#line 5424 "libs.globals.c"
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 144 "globals.m"
    else
#line 144 "globals.m"
      {
#line 144 "globals.m"
        MR_Integer libs__globals__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 144 "globals.m"
        MR_Integer libs__globals__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 144 "globals.m"
        MR_Integer libs__globals__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)));
#line 144 "globals.m"
        MR_Integer libs__globals__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 0)));
#line 144 "globals.m"
        MR_Integer libs__globals__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)));
#line 144 "globals.m"
        MR_Integer libs__globals__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 2)));
#line 144 "globals.m"
        MR_Word libs__globals__V_10_10;

#line 144 "globals.m"
        {
#line 144 "globals.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_10_10, libs__globals__V_4_4, libs__globals__V_7_7);
        }
#line 5450 "libs.globals.c"
        libs__globals__succeeded = (libs__globals__V_10_10 == (MR_Integer) 0);
#line 144 "globals.m"
        libs__globals__succeeded = !(libs__globals__succeeded);
#line 144 "globals.m"
        if (libs__globals__succeeded)
#line 144 "globals.m"
          *libs__globals__HeadVar__1_1 = libs__globals__V_10_10;
#line 144 "globals.m"
        else
#line 144 "globals.m"
          {
#line 144 "globals.m"
            MR_Word libs__globals__V_11_11;

#line 144 "globals.m"
            {
#line 144 "globals.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_11_11, libs__globals__V_5_5, libs__globals__V_8_8);
            }
#line 5470 "libs.globals.c"
            libs__globals__succeeded = (libs__globals__V_11_11 == (MR_Integer) 0);
#line 144 "globals.m"
            libs__globals__succeeded = !(libs__globals__succeeded);
#line 144 "globals.m"
            if (libs__globals__succeeded)
#line 144 "globals.m"
              *libs__globals__HeadVar__1_1 = libs__globals__V_11_11;
#line 144 "globals.m"
            else
#line 144 "globals.m"
              {
#line 144 "globals.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__V_6_6, libs__globals__V_9_9);
#line 144 "globals.m"
                return;
              }
#line 144 "globals.m"
          }
#line 144 "globals.m"
      }
#line 144 "globals.m"
  }
#line 144 "globals.m"
}

#line 144 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____clang_version_0_0(
#line 144 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 144 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 144 "globals.m"
{
#line 144 "globals.m"
  {
#line 144 "globals.m"
    MR_bool libs__globals__succeeded;
#line 144 "globals.m"
    MR_Integer libs__globals__CastX_9 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 144 "globals.m"
    MR_Integer libs__globals__CastY_10 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 144 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_9 == libs__globals__CastY_10);
#line 144 "globals.m"
    if (libs__globals__succeeded)
#line 144 "globals.m"
      libs__globals__succeeded = MR_TRUE;
#line 144 "globals.m"
    else
#line 144 "globals.m"
      {
#line 144 "globals.m"
        MR_Integer libs__globals__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 144 "globals.m"
        MR_Integer libs__globals__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)));
#line 144 "globals.m"
        MR_Integer libs__globals__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 2)));
#line 144 "globals.m"
        MR_Integer libs__globals__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 144 "globals.m"
        MR_Integer libs__globals__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 144 "globals.m"
        MR_Integer libs__globals__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)));

#line 5537 "libs.globals.c"
        libs__globals__succeeded = (libs__globals__V_3_3 == libs__globals__V_6_6);
#line 144 "globals.m"
        if (libs__globals__succeeded)
#line 144 "globals.m"
          {
#line 5543 "libs.globals.c"
            libs__globals__succeeded = (libs__globals__V_4_4 == libs__globals__V_7_7);
#line 144 "globals.m"
            if (libs__globals__succeeded)
#line 5547 "libs.globals.c"
              libs__globals__succeeded = (libs__globals__V_5_5 == libs__globals__V_8_8);
#line 144 "globals.m"
          }
#line 144 "globals.m"
      }
#line 144 "globals.m"
    return libs__globals__succeeded;
#line 144 "globals.m"
  }
#line 144 "globals.m"
}

#line 119 "globals.m"
void MR_CALL 
libs__globals____Compare____c_compiler_type_0_0(
#line 119 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 119 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 119 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 119 "globals.m"
{
#line 119 "globals.m"
  {
#line 119 "globals.m"
    MR_bool libs__globals__succeeded;
#line 119 "globals.m"
    MR_Integer libs__globals__CastX_56 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 119 "globals.m"
    MR_Integer libs__globals__CastY_57 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 119 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_56 == libs__globals__CastY_57);
#line 119 "globals.m"
    if (libs__globals__succeeded)
#line 5584 "libs.globals.c"
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 119 "globals.m"
    else
#line 119 "globals.m"
      if ((libs__globals__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 119 "globals.m"
        if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 119 "globals.m"
          *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 119 "globals.m"
        else
#line 119 "globals.m"
          if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 119 "globals.m"
            *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 119 "globals.m"
          else
#line 119 "globals.m"
            if (((MR_tag((MR_Word) libs__globals__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5604 "libs.globals.c"
              *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 119 "globals.m"
            else
#line 119 "globals.m"
              if (((MR_tag((MR_Word) libs__globals__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5610 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 119 "globals.m"
              else
#line 5614 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 119 "globals.m"
      else
#line 119 "globals.m"
        if ((libs__globals__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 119 "globals.m"
          if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 119 "globals.m"
            *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 119 "globals.m"
          else
#line 119 "globals.m"
            if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 119 "globals.m"
              *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 119 "globals.m"
            else
#line 119 "globals.m"
              if (((MR_tag((MR_Word) libs__globals__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5634 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 119 "globals.m"
              else
#line 119 "globals.m"
                if (((MR_tag((MR_Word) libs__globals__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5640 "libs.globals.c"
                  *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 119 "globals.m"
                else
#line 5644 "libs.globals.c"
                  *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 119 "globals.m"
        else
#line 119 "globals.m"
          if (((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 119 "globals.m"
            {
#line 119 "globals.m"
              MR_Word libs__globals__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__HeadVar__2_2, (MR_Integer) 0)));

#line 119 "globals.m"
              if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5657 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 119 "globals.m"
              else
#line 119 "globals.m"
                if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 5663 "libs.globals.c"
                  *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 119 "globals.m"
                else
#line 119 "globals.m"
                  if (((MR_tag((MR_Word) libs__globals__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 119 "globals.m"
                    {
#line 119 "globals.m"
                      MR_Word libs__globals__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__HeadVar__3_3, (MR_Integer) 0)));

#line 119 "globals.m"
                      {
#line 119 "globals.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[0], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__V_63_63)), ((MR_Box) (libs__globals__V_49_49)));
#line 119 "globals.m"
                        return;
                      }
#line 119 "globals.m"
                    }
#line 119 "globals.m"
                  else
#line 119 "globals.m"
                    if (((MR_tag((MR_Word) libs__globals__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5687 "libs.globals.c"
                      *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 119 "globals.m"
                    else
#line 5691 "libs.globals.c"
                      *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 119 "globals.m"
            }
#line 119 "globals.m"
          else
#line 119 "globals.m"
            if (((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 119 "globals.m"
              {
#line 119 "globals.m"
                MR_Word libs__globals__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__globals__HeadVar__2_2, (MR_Integer) 0)));

#line 119 "globals.m"
                if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5706 "libs.globals.c"
                  *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 119 "globals.m"
                else
#line 119 "globals.m"
                  if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 5712 "libs.globals.c"
                    *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 119 "globals.m"
                  else
#line 119 "globals.m"
                    if (((MR_tag((MR_Word) libs__globals__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5718 "libs.globals.c"
                      *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 119 "globals.m"
                    else
#line 119 "globals.m"
                      if (((MR_tag((MR_Word) libs__globals__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 119 "globals.m"
                        {
#line 119 "globals.m"
                          MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__globals__HeadVar__3_3, (MR_Integer) 0)));

#line 119 "globals.m"
                          {
#line 119 "globals.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[1], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__V_64_64)), ((MR_Box) (libs__globals__V_31_31)));
#line 119 "globals.m"
                            return;
                          }
#line 119 "globals.m"
                        }
#line 119 "globals.m"
                      else
#line 5740 "libs.globals.c"
                        *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 119 "globals.m"
              }
#line 119 "globals.m"
            else
#line 119 "globals.m"
              {
#line 119 "globals.m"
                MR_Word libs__globals__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 2)));
#line 119 "globals.m"
                MR_Word libs__globals__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 119 "globals.m"
                MR_Word libs__globals__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));

#line 119 "globals.m"
                if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5757 "libs.globals.c"
                  *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 119 "globals.m"
                else
#line 119 "globals.m"
                  if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 5763 "libs.globals.c"
                    *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 119 "globals.m"
                  else
#line 119 "globals.m"
                    if (((MR_tag((MR_Word) libs__globals__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5769 "libs.globals.c"
                      *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 119 "globals.m"
                    else
#line 119 "globals.m"
                      if (((MR_tag((MR_Word) libs__globals__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5775 "libs.globals.c"
                        *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 119 "globals.m"
                      else
#line 119 "globals.m"
                        {
#line 119 "globals.m"
                          MR_Word libs__globals__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 0)));
#line 119 "globals.m"
                          MR_Word libs__globals__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 1)));
#line 119 "globals.m"
                          MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 2)));
#line 119 "globals.m"
                          MR_Word libs__globals__V_10_10;

#line 119 "globals.m"
                          {
#line 119 "globals.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[0], &libs__globals__V_10_10, ((MR_Box) (libs__globals__V_67_67)), ((MR_Box) (libs__globals__V_7_7)));
                          }
#line 5795 "libs.globals.c"
                          libs__globals__succeeded = (libs__globals__V_10_10 == (MR_Integer) 0);
#line 119 "globals.m"
                          libs__globals__succeeded = !(libs__globals__succeeded);
#line 119 "globals.m"
                          if (libs__globals__succeeded)
#line 119 "globals.m"
                            *libs__globals__HeadVar__1_1 = libs__globals__V_10_10;
#line 119 "globals.m"
                          else
#line 119 "globals.m"
                            {
#line 119 "globals.m"
                              MR_Word libs__globals__V_11_11;

#line 119 "globals.m"
                              {
#line 119 "globals.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[0], &libs__globals__V_11_11, ((MR_Box) (libs__globals__V_66_66)), ((MR_Box) (libs__globals__V_8_8)));
                              }
#line 5815 "libs.globals.c"
                              libs__globals__succeeded = (libs__globals__V_11_11 == (MR_Integer) 0);
#line 119 "globals.m"
                              libs__globals__succeeded = !(libs__globals__succeeded);
#line 119 "globals.m"
                              if (libs__globals__succeeded)
#line 119 "globals.m"
                                *libs__globals__HeadVar__1_1 = libs__globals__V_11_11;
#line 119 "globals.m"
                              else
#line 119 "globals.m"
                                {
#line 119 "globals.m"
                                  {
#line 119 "globals.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[0], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__V_65_65)), ((MR_Box) (libs__globals__V_9_9)));
#line 119 "globals.m"
                                    return;
                                  }
#line 119 "globals.m"
                                }
#line 119 "globals.m"
                            }
#line 119 "globals.m"
                        }
#line 119 "globals.m"
              }
#line 119 "globals.m"
  }
#line 119 "globals.m"
}

#line 119 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____c_compiler_type_0_0(
#line 119 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 119 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 119 "globals.m"
{
#line 119 "globals.m"
  {
#line 119 "globals.m"
    MR_bool libs__globals__succeeded;
#line 119 "globals.m"
    MR_Integer libs__globals__CastX_17 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 119 "globals.m"
    MR_Integer libs__globals__CastY_18 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 119 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_17 == libs__globals__CastY_18);
#line 119 "globals.m"
    if (libs__globals__succeeded)
#line 119 "globals.m"
      libs__globals__succeeded = MR_TRUE;
#line 119 "globals.m"
    else
#line 119 "globals.m"
      if ((libs__globals__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 119 "globals.m"
        {
#line 119 "globals.m"
          MR_Integer libs__globals__CastX_11 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 119 "globals.m"
          MR_Integer libs__globals__CastY_12 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 119 "globals.m"
          libs__globals__succeeded = (libs__globals__CastY_12 == libs__globals__CastX_11);
#line 119 "globals.m"
        }
#line 119 "globals.m"
      else
#line 119 "globals.m"
        if ((libs__globals__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 119 "globals.m"
          {
#line 119 "globals.m"
            MR_Integer libs__globals__CastX_15 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 119 "globals.m"
            MR_Integer libs__globals__CastY_16 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 119 "globals.m"
            libs__globals__succeeded = (libs__globals__CastY_16 == libs__globals__CastX_15);
#line 119 "globals.m"
          }
#line 119 "globals.m"
        else
#line 119 "globals.m"
          if (((MR_tag((MR_Word) libs__globals__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 119 "globals.m"
            {
#line 119 "globals.m"
              MR_Word libs__globals__TypeInfo_19_19;
#line 119 "globals.m"
              MR_Word libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 119 "globals.m"
              MR_Word libs__globals__V_14_14;

#line 119 "globals.m"
              libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 119 "globals.m"
              if (libs__globals__succeeded)
#line 119 "globals.m"
                {
#line 119 "globals.m"
                  libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 5922 "libs.globals.c"
                  libs__globals__TypeInfo_19_19 = (MR_Word) &libs__globals_scalar_common_1[0];
#line 5924 "libs.globals.c"
                  {
#line 5926 "libs.globals.c"
                    return libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_19_19, ((MR_Box) (libs__globals__V_13_13)), ((MR_Box) (libs__globals__V_14_14)));
                  }
#line 119 "globals.m"
                }
#line 119 "globals.m"
            }
#line 119 "globals.m"
          else
#line 119 "globals.m"
            if (((MR_tag((MR_Word) libs__globals__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 119 "globals.m"
              {
#line 119 "globals.m"
                MR_Word libs__globals__TypeInfo_20_20;
#line 119 "globals.m"
                MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 119 "globals.m"
                MR_Word libs__globals__V_10_10;

#line 119 "globals.m"
                libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 119 "globals.m"
                if (libs__globals__succeeded)
#line 119 "globals.m"
                  {
#line 119 "globals.m"
                    libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 5954 "libs.globals.c"
                    libs__globals__TypeInfo_20_20 = (MR_Word) &libs__globals_scalar_common_1[1];
#line 5956 "libs.globals.c"
                    {
#line 5958 "libs.globals.c"
                      return libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_20_20, ((MR_Box) (libs__globals__V_9_9)), ((MR_Box) (libs__globals__V_10_10)));
                    }
#line 119 "globals.m"
                  }
#line 119 "globals.m"
              }
#line 119 "globals.m"
            else
#line 119 "globals.m"
              {
#line 119 "globals.m"
                MR_Word libs__globals__TypeInfo_21_21;
#line 119 "globals.m"
                MR_Word libs__globals__TypeInfo_22_22;
#line 119 "globals.m"
                MR_Word libs__globals__TypeInfo_23_23;
#line 119 "globals.m"
                MR_Word libs__globals__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 119 "globals.m"
                MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 1)));
#line 119 "globals.m"
                MR_Word libs__globals__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 2)));
#line 119 "globals.m"
                MR_Word libs__globals__V_6_6;
#line 119 "globals.m"
                MR_Word libs__globals__V_7_7;
#line 119 "globals.m"
                MR_Word libs__globals__V_8_8;

#line 119 "globals.m"
                libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 119 "globals.m"
                if (libs__globals__succeeded)
#line 119 "globals.m"
                  {
#line 119 "globals.m"
                    libs__globals__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 119 "globals.m"
                    libs__globals__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 119 "globals.m"
                    libs__globals__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 2)));
#line 6000 "libs.globals.c"
                    libs__globals__TypeInfo_21_21 = (MR_Word) &libs__globals_scalar_common_1[0];
#line 6002 "libs.globals.c"
                    {
#line 6004 "libs.globals.c"
                      libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_21_21, ((MR_Box) (libs__globals__V_3_3)), ((MR_Box) (libs__globals__V_6_6)));
                    }
#line 119 "globals.m"
                    if (libs__globals__succeeded)
#line 119 "globals.m"
                      {
#line 6011 "libs.globals.c"
                        libs__globals__TypeInfo_22_22 = (MR_Word) &libs__globals_scalar_common_1[0];
#line 6013 "libs.globals.c"
                        {
#line 6015 "libs.globals.c"
                          libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_22_22, ((MR_Box) (libs__globals__V_4_4)), ((MR_Box) (libs__globals__V_7_7)));
                        }
#line 119 "globals.m"
                        if (libs__globals__succeeded)
#line 119 "globals.m"
                          {
#line 6022 "libs.globals.c"
                            libs__globals__TypeInfo_23_23 = (MR_Word) &libs__globals_scalar_common_1[0];
#line 6024 "libs.globals.c"
                            {
#line 6026 "libs.globals.c"
                              return libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_23_23, ((MR_Box) (libs__globals__V_5_5)), ((MR_Box) (libs__globals__V_8_8)));
                            }
#line 119 "globals.m"
                          }
#line 119 "globals.m"
                      }
#line 119 "globals.m"
                  }
#line 119 "globals.m"
              }
#line 119 "globals.m"
    return libs__globals__succeeded;
#line 119 "globals.m"
  }
#line 119 "globals.m"
}

#line 877 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_maybe_source_file_map_1_p_0(
#line 877 "globals.m"
  MR_Word libs__globals__X_1)
#line 877 "globals.m"
{
#line 877 "globals.m"
  {
#line 877 "globals.m"
    MR_bool libs__globals__succeeded;

#line 877 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_set_maybe_source_file_map_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 877 "globals.m"
libs__globals__mutable_variable_maybe_source_file_map = X;

#line 6067 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 877 "globals.m"
}
#line 877 "globals.m"
  }
#line 877 "globals.m"
}

#line 877 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_maybe_source_file_map_1_p_0(
#line 877 "globals.m"
  MR_Word * libs__globals__X_1)
#line 877 "globals.m"
{
#line 877 "globals.m"
  {
#line 877 "globals.m"
    MR_bool libs__globals__succeeded;

#line 877 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_get_maybe_source_file_map_1_p_0

	MR_Word X;

		{
#line 877 "globals.m"
X = libs__globals__mutable_variable_maybe_source_file_map;

#line 6100 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
#line 877 "globals.m"
}
#line 877 "globals.m"
  }
#line 877 "globals.m"
}

#line 877 "globals.m"
static void MR_CALL 
libs__globals__unlock_maybe_source_file_map_0_p_0(void)
#line 877 "globals.m"
{
#line 877 "globals.m"
  {
#line 877 "globals.m"
    MR_bool libs__globals__succeeded;

#line 877 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_maybe_source_file_map_0_p_0


		{
#line 877 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 6134 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 877 "globals.m"
}
#line 877 "globals.m"
  }
#line 877 "globals.m"
}

#line 877 "globals.m"
static void MR_CALL 
libs__globals__lock_maybe_source_file_map_0_p_0(void)
#line 877 "globals.m"
{
#line 877 "globals.m"
  {
#line 877 "globals.m"
    MR_bool libs__globals__succeeded;

#line 877 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_maybe_source_file_map_0_p_0


		{
#line 877 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 6167 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 877 "globals.m"
}
#line 877 "globals.m"
  }
#line 877 "globals.m"
}

#line 877 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_maybe_source_file_map_0_p_0(void)
#line 877 "globals.m"
{
#line 877 "globals.m"
  {
#line 877 "globals.m"
    MR_bool libs__globals__succeeded;

#line 877 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_maybe_source_file_map_0_p_0


		{
#line 877 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_maybe_source_file_map_lock, MR_MUTEX_ATTR);
#endif

#line 6199 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 877 "globals.m"
}
#line 877 "globals.m"
  }
#line 877 "globals.m"
}

#line 877 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_maybe_source_file_map_0_p_0(void)
#line 877 "globals.m"
{
#line 877 "globals.m"
  {
#line 877 "globals.m"
    MR_bool libs__globals__succeeded;

#line 877 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_source_file_map_0_p_0


		{
#line 877 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_maybe_source_file_map_lock, MR_MUTEX_ATTR);
#endif

#line 6231 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 877 "globals.m"
}
#line 877 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_source_file_map_0_p_0


		{
#line 877 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 6249 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 877 "globals.m"
}
#line 877 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_source_file_map_0_p_0

	MR_Word X;

	X =  (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) ;
		{
#line 877 "globals.m"
libs__globals__mutable_variable_maybe_source_file_map = X;

#line 6266 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 877 "globals.m"
}
#line 877 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_source_file_map_0_p_0


		{
#line 877 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 6284 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 877 "globals.m"
}
#line 877 "globals.m"
  }
#line 877 "globals.m"
}

#line 874 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_disable_generate_item_version_numbers_1_p_0(
#line 874 "globals.m"
  MR_Word libs__globals__X_1)
#line 874 "globals.m"
{
#line 874 "globals.m"
  {
#line 874 "globals.m"
    MR_bool libs__globals__succeeded;

#line 874 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_set_disable_generate_item_version_numbers_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 874 "globals.m"
libs__globals__mutable_variable_disable_generate_item_version_numbers = X;

#line 6318 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 874 "globals.m"
}
#line 874 "globals.m"
  }
#line 874 "globals.m"
}

#line 874 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_disable_generate_item_version_numbers_1_p_0(
#line 874 "globals.m"
  MR_Word * libs__globals__X_1)
#line 874 "globals.m"
{
#line 874 "globals.m"
  {
#line 874 "globals.m"
    MR_bool libs__globals__succeeded;

#line 874 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_get_disable_generate_item_version_numbers_1_p_0

	MR_Word X;

		{
#line 874 "globals.m"
X = libs__globals__mutable_variable_disable_generate_item_version_numbers;

#line 6351 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
#line 874 "globals.m"
}
#line 874 "globals.m"
  }
#line 874 "globals.m"
}

#line 874 "globals.m"
static void MR_CALL 
libs__globals__unlock_disable_generate_item_version_numbers_0_p_0(void)
#line 874 "globals.m"
{
#line 874 "globals.m"
  {
#line 874 "globals.m"
    MR_bool libs__globals__succeeded;

#line 874 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_disable_generate_item_version_numbers_0_p_0


		{
#line 874 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 6385 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 874 "globals.m"
}
#line 874 "globals.m"
  }
#line 874 "globals.m"
}

#line 874 "globals.m"
static void MR_CALL 
libs__globals__lock_disable_generate_item_version_numbers_0_p_0(void)
#line 874 "globals.m"
{
#line 874 "globals.m"
  {
#line 874 "globals.m"
    MR_bool libs__globals__succeeded;

#line 874 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_disable_generate_item_version_numbers_0_p_0


		{
#line 874 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 6418 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 874 "globals.m"
}
#line 874 "globals.m"
  }
#line 874 "globals.m"
}

#line 874 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_disable_generate_item_version_numbers_0_p_0(void)
#line 874 "globals.m"
{
#line 874 "globals.m"
  {
#line 874 "globals.m"
    MR_bool libs__globals__succeeded;

#line 874 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_disable_generate_item_version_numbers_0_p_0


		{
#line 874 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock, MR_MUTEX_ATTR);
#endif

#line 6450 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 874 "globals.m"
}
#line 874 "globals.m"
  }
#line 874 "globals.m"
}

#line 874 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0(void)
#line 874 "globals.m"
{
#line 874 "globals.m"
  {
#line 874 "globals.m"
    MR_bool libs__globals__succeeded;

#line 874 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0


		{
#line 874 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock, MR_MUTEX_ATTR);
#endif

#line 6482 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 874 "globals.m"
}
#line 874 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0


		{
#line 874 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 6500 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 874 "globals.m"
}
#line 874 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 874 "globals.m"
libs__globals__mutable_variable_disable_generate_item_version_numbers = X;

#line 6517 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 874 "globals.m"
}
#line 874 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0


		{
#line 874 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 6535 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 874 "globals.m"
}
#line 874 "globals.m"
  }
#line 874 "globals.m"
}

#line 871 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_disable_smart_recompilation_1_p_0(
#line 871 "globals.m"
  MR_Word libs__globals__X_1)
#line 871 "globals.m"
{
#line 871 "globals.m"
  {
#line 871 "globals.m"
    MR_bool libs__globals__succeeded;

#line 871 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_set_disable_smart_recompilation_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 871 "globals.m"
libs__globals__mutable_variable_disable_smart_recompilation = X;

#line 6569 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 871 "globals.m"
}
#line 871 "globals.m"
  }
#line 871 "globals.m"
}

#line 871 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_disable_smart_recompilation_1_p_0(
#line 871 "globals.m"
  MR_Word * libs__globals__X_1)
#line 871 "globals.m"
{
#line 871 "globals.m"
  {
#line 871 "globals.m"
    MR_bool libs__globals__succeeded;

#line 871 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_get_disable_smart_recompilation_1_p_0

	MR_Word X;

		{
#line 871 "globals.m"
X = libs__globals__mutable_variable_disable_smart_recompilation;

#line 6602 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
#line 871 "globals.m"
}
#line 871 "globals.m"
  }
#line 871 "globals.m"
}

#line 871 "globals.m"
static void MR_CALL 
libs__globals__unlock_disable_smart_recompilation_0_p_0(void)
#line 871 "globals.m"
{
#line 871 "globals.m"
  {
#line 871 "globals.m"
    MR_bool libs__globals__succeeded;

#line 871 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_disable_smart_recompilation_0_p_0


		{
#line 871 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 6636 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 871 "globals.m"
}
#line 871 "globals.m"
  }
#line 871 "globals.m"
}

#line 871 "globals.m"
static void MR_CALL 
libs__globals__lock_disable_smart_recompilation_0_p_0(void)
#line 871 "globals.m"
{
#line 871 "globals.m"
  {
#line 871 "globals.m"
    MR_bool libs__globals__succeeded;

#line 871 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_disable_smart_recompilation_0_p_0


		{
#line 871 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 6669 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 871 "globals.m"
}
#line 871 "globals.m"
  }
#line 871 "globals.m"
}

#line 871 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_disable_smart_recompilation_0_p_0(void)
#line 871 "globals.m"
{
#line 871 "globals.m"
  {
#line 871 "globals.m"
    MR_bool libs__globals__succeeded;

#line 871 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_disable_smart_recompilation_0_p_0


		{
#line 871 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_disable_smart_recompilation_lock, MR_MUTEX_ATTR);
#endif

#line 6701 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 871 "globals.m"
}
#line 871 "globals.m"
  }
#line 871 "globals.m"
}

#line 871 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0(void)
#line 871 "globals.m"
{
#line 871 "globals.m"
  {
#line 871 "globals.m"
    MR_bool libs__globals__succeeded;

#line 871 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0


		{
#line 871 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_disable_smart_recompilation_lock, MR_MUTEX_ATTR);
#endif

#line 6733 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 871 "globals.m"
}
#line 871 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0


		{
#line 871 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 6751 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 871 "globals.m"
}
#line 871 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 871 "globals.m"
libs__globals__mutable_variable_disable_smart_recompilation = X;

#line 6768 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 871 "globals.m"
}
#line 871 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0


		{
#line 871 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 6786 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 871 "globals.m"
}
#line 871 "globals.m"
  }
#line 871 "globals.m"
}

#line 868 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_extra_error_info_1_p_0(
#line 868 "globals.m"
  MR_Word libs__globals__X_1)
#line 868 "globals.m"
{
#line 868 "globals.m"
  {
#line 868 "globals.m"
    MR_bool libs__globals__succeeded;

#line 868 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_set_extra_error_info_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 868 "globals.m"
libs__globals__mutable_variable_extra_error_info = X;

#line 6820 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 868 "globals.m"
}
#line 868 "globals.m"
  }
#line 868 "globals.m"
}

#line 868 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_extra_error_info_1_p_0(
#line 868 "globals.m"
  MR_Word * libs__globals__X_1)
#line 868 "globals.m"
{
#line 868 "globals.m"
  {
#line 868 "globals.m"
    MR_bool libs__globals__succeeded;

#line 868 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_get_extra_error_info_1_p_0

	MR_Word X;

		{
#line 868 "globals.m"
X = libs__globals__mutable_variable_extra_error_info;

#line 6853 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
#line 868 "globals.m"
}
#line 868 "globals.m"
  }
#line 868 "globals.m"
}

#line 868 "globals.m"
static void MR_CALL 
libs__globals__unlock_extra_error_info_0_p_0(void)
#line 868 "globals.m"
{
#line 868 "globals.m"
  {
#line 868 "globals.m"
    MR_bool libs__globals__succeeded;

#line 868 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_extra_error_info_0_p_0


		{
#line 868 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 6887 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 868 "globals.m"
}
#line 868 "globals.m"
  }
#line 868 "globals.m"
}

#line 868 "globals.m"
static void MR_CALL 
libs__globals__lock_extra_error_info_0_p_0(void)
#line 868 "globals.m"
{
#line 868 "globals.m"
  {
#line 868 "globals.m"
    MR_bool libs__globals__succeeded;

#line 868 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_extra_error_info_0_p_0


		{
#line 868 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 6920 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 868 "globals.m"
}
#line 868 "globals.m"
  }
#line 868 "globals.m"
}

#line 868 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_extra_error_info_0_p_0(void)
#line 868 "globals.m"
{
#line 868 "globals.m"
  {
#line 868 "globals.m"
    MR_bool libs__globals__succeeded;

#line 868 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_extra_error_info_0_p_0


		{
#line 868 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_extra_error_info_lock, MR_MUTEX_ATTR);
#endif

#line 6952 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 868 "globals.m"
}
#line 868 "globals.m"
  }
#line 868 "globals.m"
}

#line 868 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_extra_error_info_0_p_0(void)
#line 868 "globals.m"
{
#line 868 "globals.m"
  {
#line 868 "globals.m"
    MR_bool libs__globals__succeeded;

#line 868 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_extra_error_info_0_p_0


		{
#line 868 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_extra_error_info_lock, MR_MUTEX_ATTR);
#endif

#line 6984 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 868 "globals.m"
}
#line 868 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_extra_error_info_0_p_0


		{
#line 868 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 7002 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 868 "globals.m"
}
#line 868 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_extra_error_info_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 868 "globals.m"
libs__globals__mutable_variable_extra_error_info = X;

#line 7019 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 868 "globals.m"
}
#line 868 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_extra_error_info_0_p_0


		{
#line 868 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 7037 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 868 "globals.m"
}
#line 868 "globals.m"
  }
#line 868 "globals.m"
}

#line 862 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_maybe_from_ground_term_threshold_1_p_0(
#line 862 "globals.m"
  MR_Word libs__globals__X_1)
#line 862 "globals.m"
{
#line 862 "globals.m"
  {
#line 862 "globals.m"
    MR_bool libs__globals__succeeded;

#line 862 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_set_maybe_from_ground_term_threshold_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 862 "globals.m"
libs__globals__mutable_variable_maybe_from_ground_term_threshold = X;

#line 7071 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 862 "globals.m"
}
#line 862 "globals.m"
  }
#line 862 "globals.m"
}

#line 862 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_maybe_from_ground_term_threshold_1_p_0(
#line 862 "globals.m"
  MR_Word * libs__globals__X_1)
#line 862 "globals.m"
{
#line 862 "globals.m"
  {
#line 862 "globals.m"
    MR_bool libs__globals__succeeded;

#line 862 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_get_maybe_from_ground_term_threshold_1_p_0

	MR_Word X;

		{
#line 862 "globals.m"
X = libs__globals__mutable_variable_maybe_from_ground_term_threshold;

#line 7104 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
#line 862 "globals.m"
}
#line 862 "globals.m"
  }
#line 862 "globals.m"
}

#line 862 "globals.m"
static void MR_CALL 
libs__globals__unlock_maybe_from_ground_term_threshold_0_p_0(void)
#line 862 "globals.m"
{
#line 862 "globals.m"
  {
#line 862 "globals.m"
    MR_bool libs__globals__succeeded;

#line 862 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_maybe_from_ground_term_threshold_0_p_0


		{
#line 862 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 7138 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 862 "globals.m"
}
#line 862 "globals.m"
  }
#line 862 "globals.m"
}

#line 862 "globals.m"
static void MR_CALL 
libs__globals__lock_maybe_from_ground_term_threshold_0_p_0(void)
#line 862 "globals.m"
{
#line 862 "globals.m"
  {
#line 862 "globals.m"
    MR_bool libs__globals__succeeded;

#line 862 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_maybe_from_ground_term_threshold_0_p_0


		{
#line 862 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 7171 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 862 "globals.m"
}
#line 862 "globals.m"
  }
#line 862 "globals.m"
}

#line 862 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_maybe_from_ground_term_threshold_0_p_0(void)
#line 862 "globals.m"
{
#line 862 "globals.m"
  {
#line 862 "globals.m"
    MR_bool libs__globals__succeeded;

#line 862 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_maybe_from_ground_term_threshold_0_p_0


		{
#line 862 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock, MR_MUTEX_ATTR);
#endif

#line 7203 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 862 "globals.m"
}
#line 862 "globals.m"
  }
#line 862 "globals.m"
}

#line 862 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0(void)
#line 862 "globals.m"
{
#line 862 "globals.m"
  {
#line 862 "globals.m"
    MR_bool libs__globals__succeeded;

#line 862 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0


		{
#line 862 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock, MR_MUTEX_ATTR);
#endif

#line 7235 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 862 "globals.m"
}
#line 862 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0


		{
#line 862 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 7253 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 862 "globals.m"
}
#line 862 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0

	MR_Word X;

	X =  (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) ;
		{
#line 862 "globals.m"
libs__globals__mutable_variable_maybe_from_ground_term_threshold = X;

#line 7270 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 862 "globals.m"
}
#line 862 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0


		{
#line 862 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 7288 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 862 "globals.m"
}
#line 862 "globals.m"
  }
#line 862 "globals.m"
}

#line 857 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_solver_auto_init_supported_1_p_0(
#line 857 "globals.m"
  MR_Word libs__globals__X_1)
#line 857 "globals.m"
{
#line 857 "globals.m"
  {
#line 857 "globals.m"
    MR_bool libs__globals__succeeded;

#line 857 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_set_solver_auto_init_supported_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 857 "globals.m"
MR_set_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_solver_auto_init_supported);

#line 7322 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 857 "globals.m"
}
#line 857 "globals.m"
  }
#line 857 "globals.m"
}

#line 857 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_solver_auto_init_supported_1_p_0(
#line 857 "globals.m"
  MR_Word * libs__globals__X_1)
#line 857 "globals.m"
{
#line 857 "globals.m"
  {
#line 857 "globals.m"
    MR_bool libs__globals__succeeded;

#line 857 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_get_solver_auto_init_supported_1_p_0

	MR_Word X;

		{
#line 857 "globals.m"
MR_get_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_solver_auto_init_supported);

#line 7355 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
#line 857 "globals.m"
}
#line 857 "globals.m"
  }
#line 857 "globals.m"
}

#line 857 "globals.m"
static void MR_CALL 
libs__globals__unlock_solver_auto_init_supported_0_p_0(void)
#line 857 "globals.m"
{
#line 857 "globals.m"
  {
#line 857 "globals.m"
    MR_bool libs__globals__succeeded;

#line 857 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_solver_auto_init_supported_0_p_0


		{
#line 857 "globals.m"

#line 7385 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 857 "globals.m"
}
#line 857 "globals.m"
  }
#line 857 "globals.m"
}

#line 857 "globals.m"
static void MR_CALL 
libs__globals__lock_solver_auto_init_supported_0_p_0(void)
#line 857 "globals.m"
{
#line 857 "globals.m"
  {
#line 857 "globals.m"
    MR_bool libs__globals__succeeded;

#line 857 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_solver_auto_init_supported_0_p_0


		{
#line 857 "globals.m"

#line 7414 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 857 "globals.m"
}
#line 857 "globals.m"
  }
#line 857 "globals.m"
}

#line 857 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_solver_auto_init_supported_0_p_0(void)
#line 857 "globals.m"
{
#line 857 "globals.m"
  {
#line 857 "globals.m"
    MR_bool libs__globals__succeeded;

#line 857 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_solver_auto_init_supported_0_p_0


		{
#line 857 "globals.m"
libs__globals__mutable_variable_solver_auto_init_supported = MR_new_thread_local_mutable_index();

#line 7444 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 857 "globals.m"
}
#line 857 "globals.m"
  }
#line 857 "globals.m"
}

#line 857 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0(void)
#line 857 "globals.m"
{
#line 857 "globals.m"
  {
#line 857 "globals.m"
    MR_bool libs__globals__succeeded;

#line 857 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0


		{
#line 857 "globals.m"
libs__globals__mutable_variable_solver_auto_init_supported = MR_new_thread_local_mutable_index();

#line 7474 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 857 "globals.m"
}
#line 857 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0


		{
#line 857 "globals.m"

#line 7488 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 857 "globals.m"
}
#line 857 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 857 "globals.m"
MR_set_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_solver_auto_init_supported);

#line 7505 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 857 "globals.m"
}
#line 857 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0


		{
#line 857 "globals.m"

#line 7519 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 857 "globals.m"
}
#line 857 "globals.m"
  }
#line 857 "globals.m"
}

#line 364 "globals.m"
void MR_CALL 
libs__globals__io_set_maybe_source_file_map_3_p_0(
#line 364 "globals.m"
  MR_Word libs__globals__MaybeSourceFileMap_4)
#line 364 "globals.m"
{
#line 877 "globals.m"
  {
#line 877 "globals.m"
    MR_bool libs__globals__succeeded;

#line 877 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_maybe_source_file_map_3_p_0


		{
#line 877 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 7554 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 877 "globals.m"
}
#line 877 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_maybe_source_file_map_3_p_0

	MR_Word X;

	X =  libs__globals__MaybeSourceFileMap_4 ;
		{
#line 877 "globals.m"
libs__globals__mutable_variable_maybe_source_file_map = X;

#line 7571 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 877 "globals.m"
}
#line 877 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_maybe_source_file_map_3_p_0


		{
#line 877 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 7589 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 877 "globals.m"
}
#line 877 "globals.m"
  }
#line 364 "globals.m"
}

#line 361 "globals.m"
void MR_CALL 
libs__globals__io_get_maybe_source_file_map_3_p_0(
#line 361 "globals.m"
  MR_Word * libs__globals__MaybeSourceFileMap_4)
#line 361 "globals.m"
{
#line 877 "globals.m"
  {
#line 877 "globals.m"
    MR_bool libs__globals__succeeded;

#line 877 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_maybe_source_file_map_3_p_0


		{
#line 877 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 7624 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 877 "globals.m"
}
#line 877 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_maybe_source_file_map_3_p_0

	MR_Word X;

		{
#line 877 "globals.m"
X = libs__globals__mutable_variable_maybe_source_file_map;

#line 7640 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__MaybeSourceFileMap_4  = X;
#line 877 "globals.m"
}
#line 877 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_maybe_source_file_map_3_p_0


		{
#line 877 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 7659 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 877 "globals.m"
}
#line 877 "globals.m"
  }
#line 361 "globals.m"
}

#line 358 "globals.m"
void MR_CALL 
libs__globals__io_set_disable_generate_item_version_numbers_3_p_0(
#line 358 "globals.m"
  MR_Word libs__globals__DisableItemVerions_4)
#line 358 "globals.m"
{
#line 874 "globals.m"
  {
#line 874 "globals.m"
    MR_bool libs__globals__succeeded;

#line 874 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_disable_generate_item_version_numbers_3_p_0


		{
#line 874 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 7694 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 874 "globals.m"
}
#line 874 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_disable_generate_item_version_numbers_3_p_0

	MR_Word X;

	X =  libs__globals__DisableItemVerions_4 ;
		{
#line 874 "globals.m"
libs__globals__mutable_variable_disable_generate_item_version_numbers = X;

#line 7711 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 874 "globals.m"
}
#line 874 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_disable_generate_item_version_numbers_3_p_0


		{
#line 874 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 7729 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 874 "globals.m"
}
#line 874 "globals.m"
  }
#line 358 "globals.m"
}

#line 355 "globals.m"
void MR_CALL 
libs__globals__io_get_disable_generate_item_version_numbers_3_p_0(
#line 355 "globals.m"
  MR_Word * libs__globals__DisableItemVerions_4)
#line 355 "globals.m"
{
#line 874 "globals.m"
  {
#line 874 "globals.m"
    MR_bool libs__globals__succeeded;

#line 874 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_disable_generate_item_version_numbers_3_p_0


		{
#line 874 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 7764 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 874 "globals.m"
}
#line 874 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_disable_generate_item_version_numbers_3_p_0

	MR_Word X;

		{
#line 874 "globals.m"
X = libs__globals__mutable_variable_disable_generate_item_version_numbers;

#line 7780 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__DisableItemVerions_4  = X;
#line 874 "globals.m"
}
#line 874 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_disable_generate_item_version_numbers_3_p_0


		{
#line 874 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 7799 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 874 "globals.m"
}
#line 874 "globals.m"
  }
#line 355 "globals.m"
}

#line 353 "globals.m"
void MR_CALL 
libs__globals__io_set_disable_smart_recompilation_3_p_0(
#line 353 "globals.m"
  MR_Word libs__globals__DisableSmartRecomp_4)
#line 353 "globals.m"
{
#line 871 "globals.m"
  {
#line 871 "globals.m"
    MR_bool libs__globals__succeeded;

#line 871 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_disable_smart_recompilation_3_p_0


		{
#line 871 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 7834 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 871 "globals.m"
}
#line 871 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_disable_smart_recompilation_3_p_0

	MR_Word X;

	X =  libs__globals__DisableSmartRecomp_4 ;
		{
#line 871 "globals.m"
libs__globals__mutable_variable_disable_smart_recompilation = X;

#line 7851 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 871 "globals.m"
}
#line 871 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_disable_smart_recompilation_3_p_0


		{
#line 871 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 7869 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 871 "globals.m"
}
#line 871 "globals.m"
  }
#line 353 "globals.m"
}

#line 351 "globals.m"
void MR_CALL 
libs__globals__io_get_disable_smart_recompilation_3_p_0(
#line 351 "globals.m"
  MR_Word * libs__globals__DisableSmartRecomp_4)
#line 351 "globals.m"
{
#line 871 "globals.m"
  {
#line 871 "globals.m"
    MR_bool libs__globals__succeeded;

#line 871 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_disable_smart_recompilation_3_p_0


		{
#line 871 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 7904 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 871 "globals.m"
}
#line 871 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_disable_smart_recompilation_3_p_0

	MR_Word X;

		{
#line 871 "globals.m"
X = libs__globals__mutable_variable_disable_smart_recompilation;

#line 7920 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__DisableSmartRecomp_4  = X;
#line 871 "globals.m"
}
#line 871 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_disable_smart_recompilation_3_p_0


		{
#line 871 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 7939 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 871 "globals.m"
}
#line 871 "globals.m"
  }
#line 351 "globals.m"
}

#line 349 "globals.m"
void MR_CALL 
libs__globals__io_set_extra_error_info_3_p_0(
#line 349 "globals.m"
  MR_Word libs__globals__ExtraErrorInfo_4)
#line 349 "globals.m"
{
#line 868 "globals.m"
  {
#line 868 "globals.m"
    MR_bool libs__globals__succeeded;

#line 868 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_extra_error_info_3_p_0


		{
#line 868 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 7974 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 868 "globals.m"
}
#line 868 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_extra_error_info_3_p_0

	MR_Word X;

	X =  libs__globals__ExtraErrorInfo_4 ;
		{
#line 868 "globals.m"
libs__globals__mutable_variable_extra_error_info = X;

#line 7991 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 868 "globals.m"
}
#line 868 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_extra_error_info_3_p_0


		{
#line 868 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 8009 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 868 "globals.m"
}
#line 868 "globals.m"
  }
#line 349 "globals.m"
}

#line 347 "globals.m"
void MR_CALL 
libs__globals__io_get_extra_error_info_3_p_0(
#line 347 "globals.m"
  MR_Word * libs__globals__ExtraErrorInfo_4)
#line 347 "globals.m"
{
#line 868 "globals.m"
  {
#line 868 "globals.m"
    MR_bool libs__globals__succeeded;

#line 868 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_extra_error_info_3_p_0


		{
#line 868 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 8044 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 868 "globals.m"
}
#line 868 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_extra_error_info_3_p_0

	MR_Word X;

		{
#line 868 "globals.m"
X = libs__globals__mutable_variable_extra_error_info;

#line 8060 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__ExtraErrorInfo_4  = X;
#line 868 "globals.m"
}
#line 868 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_extra_error_info_3_p_0


		{
#line 868 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 8079 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 868 "globals.m"
}
#line 868 "globals.m"
  }
#line 347 "globals.m"
}

#line 345 "globals.m"
MR_Word MR_CALL 
libs__globals__get_maybe_from_ground_term_threshold_0_f_0(void)
#line 345 "globals.m"
{
#line 894 "globals.m"
  {
#line 894 "globals.m"
    MR_bool libs__globals__succeeded;
#line 894 "globals.m"
    MR_Word libs__globals__MaybeThreshold_2;

#line 862 "globals.m"
{
#define MR_PROC_LABEL libs__globals__get_maybe_from_ground_term_threshold_0_f_0


		{
#line 862 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 8114 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 862 "globals.m"
}
#line 862 "globals.m"
{
#define MR_PROC_LABEL libs__globals__get_maybe_from_ground_term_threshold_0_f_0

	MR_Word X;

		{
#line 862 "globals.m"
X = libs__globals__mutable_variable_maybe_from_ground_term_threshold;

#line 8130 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 libs__globals__MaybeThreshold_2  = X;
#line 862 "globals.m"
}
#line 862 "globals.m"
{
#define MR_PROC_LABEL libs__globals__get_maybe_from_ground_term_threshold_0_f_0


		{
#line 862 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 8149 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 862 "globals.m"
}
#line 894 "globals.m"
    return libs__globals__MaybeThreshold_2;
#line 894 "globals.m"
  }
#line 345 "globals.m"
}

#line 340 "globals.m"
void MR_CALL 
libs__globals__semipure_get_solver_auto_init_supported_1_p_0(
#line 340 "globals.m"
  MR_Word * libs__globals__AutoInitSupported_2)
#line 340 "globals.m"
{
#line 857 "globals.m"
  {
#line 857 "globals.m"
    MR_bool libs__globals__succeeded;

#line 857 "globals.m"
{
#define MR_PROC_LABEL libs__globals__semipure_get_solver_auto_init_supported_1_p_0


		{
#line 857 "globals.m"

#line 8182 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 857 "globals.m"
}
#line 857 "globals.m"
{
#define MR_PROC_LABEL libs__globals__semipure_get_solver_auto_init_supported_1_p_0

	MR_Word X;

		{
#line 857 "globals.m"
MR_get_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_solver_auto_init_supported);

#line 8198 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__AutoInitSupported_2  = X;
#line 857 "globals.m"
}
#line 857 "globals.m"
{
#define MR_PROC_LABEL libs__globals__semipure_get_solver_auto_init_supported_1_p_0


		{
#line 857 "globals.m"

#line 8213 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 857 "globals.m"
}
#line 857 "globals.m"
  }
#line 340 "globals.m"
}

#line 335 "globals.m"
void MR_CALL 
libs__globals__globals_init_mutables_3_p_0(
#line 335 "globals.m"
  MR_Word libs__globals__Globals_4)
#line 335 "globals.m"
{
#line 882 "globals.m"
  {
#line 882 "globals.m"
    MR_bool libs__globals__succeeded;
#line 882 "globals.m"
    MR_Word libs__globals__AutoInitSupported_6;
#line 882 "globals.m"
    MR_Integer libs__globals__FromGroundTermThreshold_7;
#line 882 "globals.m"
    MR_Word libs__globals__V_13_13;

#line 883 "globals.m"
    {
#line 883 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_4, (MR_Integer) 293, &libs__globals__AutoInitSupported_6);
    }
#line 857 "globals.m"
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0


		{
#line 857 "globals.m"

#line 8255 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 857 "globals.m"
}
#line 857 "globals.m"
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0

	MR_Word X;

	X =  libs__globals__AutoInitSupported_6 ;
		{
#line 857 "globals.m"
MR_set_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_solver_auto_init_supported);

#line 8272 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 857 "globals.m"
}
#line 857 "globals.m"
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0


		{
#line 857 "globals.m"

#line 8286 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 857 "globals.m"
}
#line 886 "globals.m"
    {
#line 886 "globals.m"
      libs__globals__lookup_int_option_3_p_0(libs__globals__Globals_4, (MR_Integer) 341, &libs__globals__FromGroundTermThreshold_7);
    }
#line 888 "globals.m"
    {
#line 888 "globals.m"
      libs__globals__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 888 "globals.m"
      MR_hl_field(MR_mktag(1), libs__globals__V_13_13, 0) = ((MR_Box) (libs__globals__FromGroundTermThreshold_7));
#line 888 "globals.m"
    }
#line 862 "globals.m"
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0


		{
#line 862 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 8317 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 862 "globals.m"
}
#line 862 "globals.m"
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0

	MR_Word X;

	X =  libs__globals__V_13_13 ;
		{
#line 862 "globals.m"
libs__globals__mutable_variable_maybe_from_ground_term_threshold = X;

#line 8334 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 862 "globals.m"
}
#line 862 "globals.m"
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0


		{
#line 862 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 8352 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 862 "globals.m"
}
#line 882 "globals.m"
  }
#line 335 "globals.m"
}

#line 331 "globals.m"
void MR_CALL 
libs__globals__double_width_floats_on_det_stack_2_p_0(
#line 331 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 331 "globals.m"
  MR_Word * libs__globals__FloatDwords_4)
#line 331 "globals.m"
{
#line 824 "globals.m"
  {
#line 824 "globals.m"
    MR_bool libs__globals__succeeded;
#line 824 "globals.m"
    MR_Integer libs__globals__TargetWordBits_5;
#line 824 "globals.m"
    MR_Word libs__globals__SinglePrecFloat_6;

#line 825 "globals.m"
    {
#line 825 "globals.m"
      libs__globals__lookup_int_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 234, &libs__globals__TargetWordBits_5);
    }
#line 826 "globals.m"
    {
#line 826 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 218, &libs__globals__SinglePrecFloat_6);
    }
#line 827 "globals.m"
    libs__globals__succeeded = (libs__globals__TargetWordBits_5 == (MR_Integer) 64);
#line 829 "globals.m"
    if (libs__globals__succeeded)
#line 828 "globals.m"
      *libs__globals__FloatDwords_4 = (MR_Integer) 0;
#line 829 "globals.m"
    else
#line 837 "globals.m"
      {
#line 829 "globals.m"
        libs__globals__succeeded = (libs__globals__TargetWordBits_5 == (MR_Integer) 32);
#line 837 "globals.m"
        if (libs__globals__succeeded)
#line 833 "globals.m"
          if ((libs__globals__SinglePrecFloat_6 == (MR_Integer) 0))
#line 835 "globals.m"
            *libs__globals__FloatDwords_4 = (MR_Integer) 1;
#line 833 "globals.m"
          else
#line 832 "globals.m"
            *libs__globals__FloatDwords_4 = (MR_Integer) 0;
#line 837 "globals.m"
        else
#line 838 "globals.m"
          {
#line 838 "globals.m"
            {
#line 838 "globals.m"
              mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.double_width_floats_on_det_stack\'/2", (MR_String) "bits_per_word not 32 or 64");
#line 838 "globals.m"
              return;
            }
#line 838 "globals.m"
          }
#line 837 "globals.m"
      }
#line 824 "globals.m"
  }
#line 331 "globals.m"
}

#line 327 "globals.m"
void MR_CALL 
libs__globals__get_any_intermod_2_p_0(
#line 327 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 327 "globals.m"
  MR_Word * libs__globals__AnyIntermod_4)
#line 327 "globals.m"
{
#line 819 "globals.m"
  {
#line 819 "globals.m"
    MR_bool libs__globals__succeeded;
#line 819 "globals.m"
    MR_Word libs__globals__IntermodOpt_5;
#line 819 "globals.m"
    MR_Word libs__globals__IntermodAnalysis_6;

#line 820 "globals.m"
    {
#line 820 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 323, &libs__globals__IntermodOpt_5);
    }
#line 821 "globals.m"
    {
#line 821 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 328, &libs__globals__IntermodAnalysis_6);
    }
#line 822 "globals.m"
    {
#line 822 "globals.m"
      *libs__globals__AnyIntermod_4 = mercury__bool__or_2_f_0(libs__globals__IntermodOpt_5, libs__globals__IntermodAnalysis_6);
    }
#line 819 "globals.m"
  }
#line 327 "globals.m"
}

#line 325 "globals.m"
void MR_CALL 
libs__globals__current_grade_supports_concurrency_2_p_0(
#line 325 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 325 "globals.m"
  MR_Word * libs__globals__ThreadsSupported_4)
#line 325 "globals.m"
{
#line 796 "globals.m"
  {
#line 796 "globals.m"
    MR_bool libs__globals__succeeded;
#line 796 "globals.m"
    MR_Word libs__globals__Target_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 632 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 632 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 632 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 632 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 632 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 632 "globals.m"
    MR_Word libs__globals__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 632 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 632 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 632 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 632 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 632 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 632 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 632 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 632 "globals.m"
    MR_Word libs__globals__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 632 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 632 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 632 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 632 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));

#line 810 "globals.m"
    if ((libs__globals__Target_5 == (MR_Integer) 0))
#line 799 "globals.m"
      {
#line 799 "globals.m"
        MR_Word libs__globals__HighLevelCode_6;

#line 800 "globals.m"
        {
#line 800 "globals.m"
          libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 248, &libs__globals__HighLevelCode_6);
        }
#line 805 "globals.m"
        if ((libs__globals__HighLevelCode_6 == (MR_Integer) 0))
#line 804 "globals.m"
          *libs__globals__ThreadsSupported_4 = (MR_Integer) 1;
#line 805 "globals.m"
        else
#line 806 "globals.m"
          {
#line 807 "globals.m"
            {
#line 807 "globals.m"
              libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 210, libs__globals__ThreadsSupported_4);
#line 807 "globals.m"
              return;
            }
#line 806 "globals.m"
          }
#line 799 "globals.m"
      }
#line 810 "globals.m"
    else
#line 816 "globals.m"
      *libs__globals__ThreadsSupported_4 = (MR_Integer) 1;
#line 796 "globals.m"
  }
#line 325 "globals.m"
}

#line 319 "globals.m"
void MR_CALL 
libs__globals__current_grade_supports_par_conj_2_p_0(
#line 319 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 319 "globals.m"
  MR_Word * libs__globals__ParConjSupported_4)
#line 319 "globals.m"
{
#line 780 "globals.m"
  {
#line 780 "globals.m"
    MR_bool libs__globals__succeeded;
#line 780 "globals.m"
    MR_Word libs__globals__Target_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 780 "globals.m"
    MR_Word libs__globals__HighLevelCode_6;
#line 780 "globals.m"
    MR_Word libs__globals__Parallel_7;
#line 780 "globals.m"
    MR_Word libs__globals__UseTrail_8;
#line 632 "globals.m"
    MR_Word libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 632 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 632 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 632 "globals.m"
    MR_Word libs__globals__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 632 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 632 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 632 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 632 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 632 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 632 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 632 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 632 "globals.m"
    MR_Word libs__globals__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 632 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 632 "globals.m"
    MR_Word libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 632 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 632 "globals.m"
    MR_Word libs__globals__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 632 "globals.m"
    MR_Word libs__globals__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 632 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));

#line 782 "globals.m"
    {
#line 782 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 248, &libs__globals__HighLevelCode_6);
    }
#line 783 "globals.m"
    {
#line 783 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 210, &libs__globals__Parallel_7);
    }
#line 784 "globals.m"
    {
#line 784 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 212, &libs__globals__UseTrail_8);
    }
#line 786 "globals.m"
    libs__globals__succeeded = (libs__globals__Target_5 == (MR_Integer) 0);
#line 786 "globals.m"
    if (libs__globals__succeeded)
#line 786 "globals.m"
      {
#line 787 "globals.m"
        libs__globals__succeeded = (libs__globals__HighLevelCode_6 == (MR_Integer) 0);
#line 786 "globals.m"
        if (libs__globals__succeeded)
#line 786 "globals.m"
          {
#line 788 "globals.m"
            libs__globals__succeeded = (libs__globals__Parallel_7 == (MR_Integer) 1);
#line 786 "globals.m"
            if (libs__globals__succeeded)
#line 789 "globals.m"
              libs__globals__succeeded = (libs__globals__UseTrail_8 == (MR_Integer) 0);
#line 786 "globals.m"
          }
#line 786 "globals.m"
      }
#line 792 "globals.m"
    if (libs__globals__succeeded)
#line 791 "globals.m"
      *libs__globals__ParConjSupported_4 = (MR_Integer) 1;
#line 792 "globals.m"
    else
#line 793 "globals.m"
      *libs__globals__ParConjSupported_4 = (MR_Integer) 0;
#line 780 "globals.m"
  }
#line 319 "globals.m"
}

#line 314 "globals.m"
void MR_CALL 
libs__globals__current_grade_supports_tabling_2_p_0(
#line 314 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 314 "globals.m"
  MR_Word * libs__globals__TablingSupported_4)
#line 314 "globals.m"
{
#line 763 "globals.m"
  {
#line 763 "globals.m"
    MR_bool libs__globals__succeeded;
#line 763 "globals.m"
    MR_Word libs__globals__Target_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 763 "globals.m"
    MR_Word libs__globals__GC_Method_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 763 "globals.m"
    MR_Word libs__globals__HighLevelData_7;
#line 632 "globals.m"
    MR_Word libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 632 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 632 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 632 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 632 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 632 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 632 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 632 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 632 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 632 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 632 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 632 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 632 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 632 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 632 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 632 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 632 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));

#line 766 "globals.m"
    {
#line 766 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 249, &libs__globals__HighLevelData_7);
    }
#line 768 "globals.m"
    libs__globals__succeeded = (libs__globals__Target_5 == (MR_Integer) 0);
#line 768 "globals.m"
    if (libs__globals__succeeded)
#line 768 "globals.m"
      {
#line 769 "globals.m"
        libs__globals__succeeded = (libs__globals__GC_Method_6 == (MR_Integer) 5);
#line 769 "globals.m"
        libs__globals__succeeded = !(libs__globals__succeeded);
#line 768 "globals.m"
        if (libs__globals__succeeded)
#line 770 "globals.m"
          libs__globals__succeeded = (libs__globals__HighLevelData_7 == (MR_Integer) 0);
#line 768 "globals.m"
      }
#line 773 "globals.m"
    if (libs__globals__succeeded)
#line 772 "globals.m"
      *libs__globals__TablingSupported_4 = (MR_Integer) 1;
#line 773 "globals.m"
    else
#line 774 "globals.m"
      *libs__globals__TablingSupported_4 = (MR_Integer) 0;
#line 763 "globals.m"
  }
#line 314 "globals.m"
}

#line 310 "globals.m"
void MR_CALL 
libs__globals__want_return_var_layouts_2_p_0(
#line 310 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 310 "globals.m"
  MR_Word * libs__globals__WantReturnLayouts_4)
#line 310 "globals.m"
{
#line 759 "globals.m"
  {
#line 759 "globals.m"
    MR_bool libs__globals__succeeded;

#line 750 "globals.m"
    {
#line 750 "globals.m"
      MR_Word libs__globals__GC_Method_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 633 "globals.m"
      MR_Word libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 633 "globals.m"
      MR_Word libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 633 "globals.m"
      MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 633 "globals.m"
      MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 633 "globals.m"
      MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 633 "globals.m"
      MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 633 "globals.m"
      MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 633 "globals.m"
      MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 633 "globals.m"
      MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 633 "globals.m"
      MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 633 "globals.m"
      MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 633 "globals.m"
      MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 633 "globals.m"
      MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 633 "globals.m"
      MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 633 "globals.m"
      MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 633 "globals.m"
      MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 633 "globals.m"
      MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 633 "globals.m"
      MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));

#line 751 "globals.m"
      libs__globals__succeeded = (libs__globals__GC_Method_5 == (MR_Integer) 5);
#line 750 "globals.m"
    }
#line 752 "globals.m"
    if (!(libs__globals__succeeded))
#line 753 "globals.m"
      {
#line 753 "globals.m"
        MR_Word libs__globals__TraceLevel_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 753 "globals.m"
        MR_Word libs__globals__TraceSuppress_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 753 "globals.m"
        MR_Word libs__globals__V_8_8;
#line 637 "globals.m"
        MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 637 "globals.m"
        MR_Word libs__globals__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 637 "globals.m"
        MR_Word libs__globals__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 637 "globals.m"
        MR_Word libs__globals__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 637 "globals.m"
        MR_Word libs__globals__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 637 "globals.m"
        MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 637 "globals.m"
        MR_Word libs__globals__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 637 "globals.m"
        MR_Word libs__globals__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 637 "globals.m"
        MR_Word libs__globals__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 637 "globals.m"
        MR_Word libs__globals__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 637 "globals.m"
        MR_Word libs__globals__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 637 "globals.m"
        MR_Word libs__globals__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 637 "globals.m"
        MR_Word libs__globals__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 637 "globals.m"
        MR_Word libs__globals__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 637 "globals.m"
        MR_Word libs__globals__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 637 "globals.m"
        MR_Word libs__globals__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 637 "globals.m"
        MR_Word libs__globals__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));

#line 755 "globals.m"
        {
#line 755 "globals.m"
          libs__globals__V_8_8 = libs__trace_params__trace_needs_return_info_2_f_0(libs__globals__TraceLevel_6, libs__globals__TraceSuppress_7);
        }
#line 755 "globals.m"
        libs__globals__succeeded = (libs__globals__V_8_8 == (MR_Integer) 1);
#line 753 "globals.m"
      }
#line 759 "globals.m"
    if (libs__globals__succeeded)
#line 758 "globals.m"
      *libs__globals__WantReturnLayouts_4 = (MR_Integer) 1;
#line 759 "globals.m"
    else
#line 760 "globals.m"
      *libs__globals__WantReturnLayouts_4 = (MR_Integer) 0;
#line 759 "globals.m"
  }
#line 310 "globals.m"
}

#line 299 "globals.m"
void MR_CALL 
libs__globals__lookup_accumulating_option_3_p_0(
#line 299 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 299 "globals.m"
  MR_Word libs__globals__Option_5,
#line 299 "globals.m"
  MR_Word * libs__globals__Value_6)
#line 299 "globals.m"
{
#line 735 "globals.m"
  {
#line 735 "globals.m"
    MR_bool libs__globals__succeeded;
#line 735 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 735 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 631 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)));
#line 631 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 631 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)));
#line 631 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 631 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 631 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 631 "globals.m"
    MR_Word libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
#line 631 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 691 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 739 "globals.m"
    MR_Word libs__globals__Accumulating_8;

#line 691 "globals.m"
    {
#line 691 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 691 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 737 "globals.m"
    libs__globals__succeeded = ((((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 737 "globals.m"
    if (libs__globals__succeeded)
#line 737 "globals.m"
      {
#line 737 "globals.m"
        libs__globals__Accumulating_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 1)));
#line 738 "globals.m"
        *libs__globals__Value_6 = libs__globals__Accumulating_8;
#line 737 "globals.m"
      }
#line 737 "globals.m"
    else
#line 740 "globals.m"
      {
#line 740 "globals.m"
        {
#line 740 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_accumulating_option\'/3", (MR_String) "invalid accumulating option");
#line 740 "globals.m"
          return;
        }
#line 740 "globals.m"
      }
#line 735 "globals.m"
  }
#line 299 "globals.m"
}

#line 297 "globals.m"
void MR_CALL 
libs__globals__lookup_maybe_string_option_3_p_0(
#line 297 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 297 "globals.m"
  MR_Word libs__globals__Option_5,
#line 297 "globals.m"
  MR_Word * libs__globals__Value_6)
#line 297 "globals.m"
{
#line 727 "globals.m"
  {
#line 727 "globals.m"
    MR_bool libs__globals__succeeded;
#line 727 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 727 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 631 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)));
#line 631 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 631 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)));
#line 631 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 631 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 631 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 631 "globals.m"
    MR_Word libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
#line 631 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 691 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 731 "globals.m"
    MR_Word libs__globals__MaybeString_8;

#line 691 "globals.m"
    {
#line 691 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 691 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 729 "globals.m"
    libs__globals__succeeded = ((((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 729 "globals.m"
    if (libs__globals__succeeded)
#line 729 "globals.m"
      {
#line 729 "globals.m"
        libs__globals__MaybeString_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 1)));
#line 730 "globals.m"
        *libs__globals__Value_6 = libs__globals__MaybeString_8;
#line 729 "globals.m"
      }
#line 729 "globals.m"
    else
#line 732 "globals.m"
      {
#line 732 "globals.m"
        {
#line 732 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_maybe_string_option\'/3", (MR_String) "invalid maybe_string option");
#line 732 "globals.m"
          return;
        }
#line 732 "globals.m"
      }
#line 727 "globals.m"
  }
#line 297 "globals.m"
}

#line 296 "globals.m"
void MR_CALL 
libs__globals__lookup_string_option_3_p_0(
#line 296 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 296 "globals.m"
  MR_Word libs__globals__Option_5,
#line 296 "globals.m"
  MR_String * libs__globals__Value_6)
#line 296 "globals.m"
{
#line 703 "globals.m"
  {
#line 703 "globals.m"
    MR_bool libs__globals__succeeded;
#line 703 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 703 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 631 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)));
#line 631 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 631 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)));
#line 631 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 631 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 631 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 631 "globals.m"
    MR_Word libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
#line 631 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 691 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 707 "globals.m"
    MR_String libs__globals__String_8;

#line 691 "globals.m"
    {
#line 691 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 691 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 705 "globals.m"
    libs__globals__succeeded = ((((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 705 "globals.m"
    if (libs__globals__succeeded)
#line 705 "globals.m"
      {
#line 705 "globals.m"
        libs__globals__String_8 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 1)));
#line 706 "globals.m"
        *libs__globals__Value_6 = libs__globals__String_8;
#line 705 "globals.m"
      }
#line 705 "globals.m"
    else
#line 708 "globals.m"
      {
#line 708 "globals.m"
        {
#line 708 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_string_option\'/3", (MR_String) "invalid string option");
#line 708 "globals.m"
          return;
        }
#line 708 "globals.m"
      }
#line 703 "globals.m"
  }
#line 296 "globals.m"
}

#line 294 "globals.m"
void MR_CALL 
libs__globals__lookup_maybe_int_option_3_p_0(
#line 294 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 294 "globals.m"
  MR_Word libs__globals__Option_5,
#line 294 "globals.m"
  MR_Word * libs__globals__Value_6)
#line 294 "globals.m"
{
#line 719 "globals.m"
  {
#line 719 "globals.m"
    MR_bool libs__globals__succeeded;
#line 719 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 719 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 631 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)));
#line 631 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 631 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)));
#line 631 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 631 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 631 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 631 "globals.m"
    MR_Word libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
#line 631 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 691 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 723 "globals.m"
    MR_Word libs__globals__MaybeInt_8;

#line 691 "globals.m"
    {
#line 691 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 691 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 721 "globals.m"
    libs__globals__succeeded = ((((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 721 "globals.m"
    if (libs__globals__succeeded)
#line 721 "globals.m"
      {
#line 721 "globals.m"
        libs__globals__MaybeInt_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 1)));
#line 722 "globals.m"
        *libs__globals__Value_6 = libs__globals__MaybeInt_8;
#line 721 "globals.m"
      }
#line 721 "globals.m"
    else
#line 724 "globals.m"
      {
#line 724 "globals.m"
        {
#line 724 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_maybe_int_option\'/3", (MR_String) "invalid maybe_int option");
#line 724 "globals.m"
          return;
        }
#line 724 "globals.m"
      }
#line 719 "globals.m"
  }
#line 294 "globals.m"
}

#line 293 "globals.m"
void MR_CALL 
libs__globals__lookup_int_option_3_p_0(
#line 293 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 293 "globals.m"
  MR_Word libs__globals__Option_5,
#line 293 "globals.m"
  MR_Integer * libs__globals__Value_6)
#line 293 "globals.m"
{
#line 711 "globals.m"
  {
#line 711 "globals.m"
    MR_bool libs__globals__succeeded;
#line 711 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 711 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 631 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)));
#line 631 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 631 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)));
#line 631 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 631 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 631 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 631 "globals.m"
    MR_Word libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
#line 631 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 691 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 715 "globals.m"
    MR_Integer libs__globals__Int_8;

#line 691 "globals.m"
    {
#line 691 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 691 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 713 "globals.m"
    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 2)));
#line 713 "globals.m"
    if (libs__globals__succeeded)
#line 713 "globals.m"
      {
#line 713 "globals.m"
        libs__globals__Int_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), libs__globals__OptionData_7, (MR_Integer) 0)));
#line 714 "globals.m"
        *libs__globals__Value_6 = libs__globals__Int_8;
#line 713 "globals.m"
      }
#line 713 "globals.m"
    else
#line 716 "globals.m"
      {
#line 716 "globals.m"
        {
#line 716 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_int_option\'/3", (MR_String) "invalid int option");
#line 716 "globals.m"
          return;
        }
#line 716 "globals.m"
      }
#line 711 "globals.m"
  }
#line 293 "globals.m"
}

#line 292 "globals.m"
MR_bool MR_CALL 
libs__globals__lookup_bool_option_3_p_1(
#line 292 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 292 "globals.m"
  MR_Word libs__globals__Option_5,
#line 292 "globals.m"
  MR_Word libs__globals__Value_6)
#line 292 "globals.m"
{
#line 695 "globals.m"
  {
#line 695 "globals.m"
    MR_bool libs__globals__succeeded;
#line 695 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 695 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 631 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)));
#line 631 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 631 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)));
#line 631 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 631 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 631 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 631 "globals.m"
    MR_Word libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
#line 631 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 691 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 699 "globals.m"
    MR_Word libs__globals__Bool_8;

#line 691 "globals.m"
    {
#line 691 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 691 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 697 "globals.m"
    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 1)));
#line 697 "globals.m"
    if (libs__globals__succeeded)
#line 697 "globals.m"
      {
#line 697 "globals.m"
        libs__globals__Bool_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__OptionData_7, (MR_Integer) 0)));
#line 698 "globals.m"
        libs__globals__succeeded = (libs__globals__Value_6 == libs__globals__Bool_8);
#line 697 "globals.m"
      }
#line 697 "globals.m"
    else
#line 700 "globals.m"
      {
#line 700 "globals.m"
        {
#line 700 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_bool_option\'/3", (MR_String) "invalid bool option");
        }
#line 700 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 700 "globals.m"
      }
#line 695 "globals.m"
    return libs__globals__succeeded;
#line 695 "globals.m"
  }
#line 292 "globals.m"
}

#line 291 "globals.m"
void MR_CALL 
libs__globals__lookup_bool_option_3_p_0(
#line 291 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 291 "globals.m"
  MR_Word libs__globals__Option_5,
#line 291 "globals.m"
  MR_Word * libs__globals__Value_6)
#line 291 "globals.m"
{
#line 695 "globals.m"
  {
#line 695 "globals.m"
    MR_bool libs__globals__succeeded;
#line 695 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 695 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 631 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)));
#line 631 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 631 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)));
#line 631 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 631 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 631 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 631 "globals.m"
    MR_Word libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
#line 631 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 691 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 699 "globals.m"
    MR_Word libs__globals__Bool_8;

#line 691 "globals.m"
    {
#line 691 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 691 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 697 "globals.m"
    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 1)));
#line 697 "globals.m"
    if (libs__globals__succeeded)
#line 697 "globals.m"
      {
#line 697 "globals.m"
        libs__globals__Bool_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__OptionData_7, (MR_Integer) 0)));
#line 698 "globals.m"
        *libs__globals__Value_6 = libs__globals__Bool_8;
#line 697 "globals.m"
      }
#line 697 "globals.m"
    else
#line 700 "globals.m"
      {
#line 700 "globals.m"
        {
#line 700 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_bool_option\'/3", (MR_String) "invalid bool option");
#line 700 "globals.m"
          return;
        }
#line 700 "globals.m"
      }
#line 695 "globals.m"
  }
#line 291 "globals.m"
}

#line 288 "globals.m"
void MR_CALL 
libs__globals__lookup_option_3_p_0(
#line 288 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 288 "globals.m"
  MR_Word libs__globals__Option_5,
#line 288 "globals.m"
  MR_Word * libs__globals__OptionData_6)
#line 288 "globals.m"
{
#line 689 "globals.m"
  {
#line 689 "globals.m"
    MR_bool libs__globals__succeeded;
#line 689 "globals.m"
    MR_Word libs__globals__OptionTable_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 631 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)));
#line 631 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 631 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)));
#line 631 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 631 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 631 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 631 "globals.m"
    MR_Word libs__globals__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
#line 631 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 691 "globals.m"
    MR_Box libs__globals__conv0_OptionData_6;

#line 691 "globals.m"
    {
#line 691 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_7, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_6);
    }
#line 691 "globals.m"
    *libs__globals__OptionData_6 = ((MR_Word) libs__globals__conv0_OptionData_6);
#line 689 "globals.m"
  }
#line 288 "globals.m"
}

#line 285 "globals.m"
void MR_CALL 
libs__globals__set_file_install_cmd_3_p_0(
#line 285 "globals.m"
  MR_Word libs__globals__FileInstallCmd_4,
#line 285 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 285 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 285 "globals.m"
{
#line 687 "globals.m"
  {
#line 687 "globals.m"
    MR_bool libs__globals__succeeded;
#line 687 "globals.m"
    MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
#line 687 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 687 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 687 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 687 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 687 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 687 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 687 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)));
#line 687 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 687 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 687 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)));
#line 687 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
#line 687 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
#line 687 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
#line 687 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
#line 687 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 687 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 687 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 687 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));

#line 687 "globals.m"
    {
#line 687 "globals.m"
      MR_Word base;
#line 687 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 687 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
#line 687 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__V_9_9));
#line 687 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_10_10 | ((((libs__globals__V_11_11 << (MR_Integer) 3)) | ((((libs__globals__V_12_12 << (MR_Integer) 6)) | ((((libs__globals__V_13_13 << (MR_Integer) 8)) | ((((libs__globals__V_14_14 << (MR_Integer) 10)) | ((libs__globals__V_15_15 << (MR_Integer) 12)))))))))))));
#line 687 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_16_16));
#line 687 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__V_17_17 | ((libs__globals__V_18_18 << (MR_Integer) 2)))));
#line 687 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__V_19_19));
#line 687 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_20_20));
#line 687 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_21_21));
#line 687 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_22_22));
#line 687 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__V_23_23));
#line 687 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_24_24 | ((((libs__globals__V_25_25 << (MR_Integer) 3)) | ((libs__globals__V_26_26 << (MR_Integer) 6)))))));
#line 687 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__FileInstallCmd_4));
#line 687 "globals.m"
    }
#line 687 "globals.m"
  }
#line 285 "globals.m"
}

#line 283 "globals.m"
void MR_CALL 
libs__globals__set_maybe_feedback_info_3_p_0(
#line 283 "globals.m"
  MR_Word libs__globals__MaybeFeedback_4,
#line 283 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 283 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 283 "globals.m"
{
#line 684 "globals.m"
  {
#line 684 "globals.m"
    MR_bool libs__globals__succeeded;
#line 684 "globals.m"
    MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
#line 684 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 684 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 684 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 684 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 684 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 684 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 684 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)));
#line 684 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 684 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 684 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)));
#line 684 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
#line 684 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
#line 684 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
#line 684 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 684 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 684 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 684 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
#line 684 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));

#line 684 "globals.m"
    {
#line 684 "globals.m"
      MR_Word base;
#line 684 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 684 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
#line 684 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__V_9_9));
#line 684 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_10_10 | ((((libs__globals__V_11_11 << (MR_Integer) 3)) | ((((libs__globals__V_12_12 << (MR_Integer) 6)) | ((((libs__globals__V_13_13 << (MR_Integer) 8)) | ((((libs__globals__V_14_14 << (MR_Integer) 10)) | ((libs__globals__V_15_15 << (MR_Integer) 12)))))))))))));
#line 684 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_16_16));
#line 684 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__V_17_17 | ((libs__globals__V_18_18 << (MR_Integer) 2)))));
#line 684 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__V_19_19));
#line 684 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_20_20));
#line 684 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_21_21));
#line 684 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_22_22));
#line 684 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__MaybeFeedback_4));
#line 684 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_24_24 | ((((libs__globals__V_25_25 << (MR_Integer) 3)) | ((libs__globals__V_26_26 << (MR_Integer) 6)))))));
#line 684 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_27_27));
#line 684 "globals.m"
    }
#line 684 "globals.m"
  }
#line 283 "globals.m"
}

#line 281 "globals.m"
void MR_CALL 
libs__globals__set_ssdb_trace_level_3_p_0(
#line 281 "globals.m"
  MR_Word libs__globals__SSTraceLevel_4,
#line 281 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 281 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 281 "globals.m"
{
#line 681 "globals.m"
  {
#line 681 "globals.m"
    MR_bool libs__globals__succeeded;
#line 681 "globals.m"
    MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
#line 681 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 681 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 681 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 681 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 681 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 681 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 681 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)));
#line 681 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 681 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)));
#line 681 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
#line 681 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
#line 681 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
#line 681 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
#line 681 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 681 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 681 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 681 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
#line 681 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) & (MR_Integer) 3);

#line 681 "globals.m"
    {
#line 681 "globals.m"
      MR_Word base;
#line 681 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 681 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
#line 681 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__V_9_9));
#line 681 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_10_10 | ((((libs__globals__V_11_11 << (MR_Integer) 3)) | ((((libs__globals__V_12_12 << (MR_Integer) 6)) | ((((libs__globals__V_13_13 << (MR_Integer) 8)) | ((((libs__globals__V_14_14 << (MR_Integer) 10)) | ((libs__globals__V_15_15 << (MR_Integer) 12)))))))))))));
#line 681 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_16_16));
#line 681 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__SSTraceLevel_4 | ((libs__globals__V_18_18 << (MR_Integer) 2)))));
#line 681 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__V_19_19));
#line 681 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_20_20));
#line 681 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_21_21));
#line 681 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_22_22));
#line 681 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__V_23_23));
#line 681 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_24_24 | ((((libs__globals__V_25_25 << (MR_Integer) 3)) | ((libs__globals__V_26_26 << (MR_Integer) 6)))))));
#line 681 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_27_27));
#line 681 "globals.m"
    }
#line 681 "globals.m"
  }
#line 281 "globals.m"
}

#line 280 "globals.m"
void MR_CALL 
libs__globals__set_trace_level_none_2_p_0(
#line 280 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_4,
#line 280 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_5)
#line 280 "globals.m"
{
#line 677 "globals.m"
  {
#line 677 "globals.m"
    MR_bool libs__globals__succeeded;
#line 677 "globals.m"
    MR_Word libs__globals__V_7_7;
#line 678 "globals.m"
    MR_Word libs__globals__V_8_8;
#line 678 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 678 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 678 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 678 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 678 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 678 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 678 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 678 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 678 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 678 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 678 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 678 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 678 "globals.m"
    MR_Word libs__globals__V_22_22;
#line 678 "globals.m"
    MR_Word libs__globals__V_23_23;
#line 678 "globals.m"
    MR_Word libs__globals__V_24_24;
#line 678 "globals.m"
    MR_Word libs__globals__V_25_25;
#line 678 "globals.m"
    MR_Word libs__globals__V_26_26;
#line 678 "globals.m"
    MR_Word libs__globals__V_14_14;

#line 678 "globals.m"
    {
#line 678 "globals.m"
      libs__globals__V_7_7 = libs__trace_params__trace_level_none_0_f_0();
    }
#line 678 "globals.m"
    libs__globals__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 0)));
#line 678 "globals.m"
    libs__globals__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 678 "globals.m"
    libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 678 "globals.m"
    libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 678 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 678 "globals.m"
    libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 678 "globals.m"
    libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 678 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 2)));
#line 678 "globals.m"
    libs__globals__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 678 "globals.m"
    libs__globals__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 678 "globals.m"
    libs__globals__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 4)));
#line 678 "globals.m"
    libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 5)));
#line 678 "globals.m"
    libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 6)));
#line 678 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 7)));
#line 678 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 8)));
#line 678 "globals.m"
    libs__globals__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 678 "globals.m"
    libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 678 "globals.m"
    libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 678 "globals.m"
    libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 10)));
#line 678 "globals.m"
    {
#line 678 "globals.m"
      MR_Word base;
#line 678 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 678 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_5 = base;
#line 678 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__V_8_8));
#line 678 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_9_9 | ((((libs__globals__V_10_10 << (MR_Integer) 3)) | ((((libs__globals__V_11_11 << (MR_Integer) 6)) | ((((libs__globals__V_12_12 << (MR_Integer) 8)) | ((((libs__globals__V_13_13 << (MR_Integer) 10)) | ((libs__globals__V_7_7 << (MR_Integer) 12)))))))))))));
#line 678 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_15_15));
#line 678 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__V_16_16 | ((libs__globals__V_17_17 << (MR_Integer) 2)))));
#line 678 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__V_18_18));
#line 678 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_19_19));
#line 678 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_20_20));
#line 678 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_21_21));
#line 678 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__V_22_22));
#line 678 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_23_23 | ((((libs__globals__V_24_24 << (MR_Integer) 3)) | ((libs__globals__V_25_25 << (MR_Integer) 6)))))));
#line 678 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_26_26));
#line 678 "globals.m"
    }
#line 677 "globals.m"
  }
#line 280 "globals.m"
}

#line 279 "globals.m"
void MR_CALL 
libs__globals__set_trace_level_3_p_0(
#line 279 "globals.m"
  MR_Word libs__globals__TraceLevel_4,
#line 279 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 279 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 279 "globals.m"
{
#line 676 "globals.m"
  {
#line 676 "globals.m"
    MR_bool libs__globals__succeeded;
#line 676 "globals.m"
    MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
#line 676 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 676 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 676 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 676 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 676 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 676 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)));
#line 676 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 676 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 676 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)));
#line 676 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
#line 676 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
#line 676 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
#line 676 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
#line 676 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 676 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 676 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 676 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
#line 676 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);

#line 676 "globals.m"
    {
#line 676 "globals.m"
      MR_Word base;
#line 676 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 676 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
#line 676 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__V_9_9));
#line 676 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_10_10 | ((((libs__globals__V_11_11 << (MR_Integer) 3)) | ((((libs__globals__V_12_12 << (MR_Integer) 6)) | ((((libs__globals__V_13_13 << (MR_Integer) 8)) | ((((libs__globals__V_14_14 << (MR_Integer) 10)) | ((libs__globals__TraceLevel_4 << (MR_Integer) 12)))))))))))));
#line 676 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_16_16));
#line 676 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__V_17_17 | ((libs__globals__V_18_18 << (MR_Integer) 2)))));
#line 676 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__V_19_19));
#line 676 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_20_20));
#line 676 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_21_21));
#line 676 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_22_22));
#line 676 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__V_23_23));
#line 676 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_24_24 | ((((libs__globals__V_25_25 << (MR_Integer) 3)) | ((libs__globals__V_26_26 << (MR_Integer) 6)))))));
#line 676 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_27_27));
#line 676 "globals.m"
    }
#line 676 "globals.m"
  }
#line 279 "globals.m"
}

#line 278 "globals.m"
void MR_CALL 
libs__globals__set_tags_method_3_p_0(
#line 278 "globals.m"
  MR_Word libs__globals__Tags_Method_4,
#line 278 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 278 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 278 "globals.m"
{
#line 673 "globals.m"
  {
#line 673 "globals.m"
    MR_bool libs__globals__succeeded;
#line 673 "globals.m"
    MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
#line 673 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 673 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 673 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 673 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 673 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 673 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)));
#line 673 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 673 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 673 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)));
#line 673 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
#line 673 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
#line 673 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
#line 673 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
#line 673 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 673 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 673 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 673 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
#line 673 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);

#line 673 "globals.m"
    {
#line 673 "globals.m"
      MR_Word base;
#line 673 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 673 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
#line 673 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__V_9_9));
#line 673 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_10_10 | ((((libs__globals__V_11_11 << (MR_Integer) 3)) | ((((libs__globals__Tags_Method_4 << (MR_Integer) 6)) | ((((libs__globals__V_13_13 << (MR_Integer) 8)) | ((((libs__globals__V_14_14 << (MR_Integer) 10)) | ((libs__globals__V_15_15 << (MR_Integer) 12)))))))))))));
#line 673 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_16_16));
#line 673 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__V_17_17 | ((libs__globals__V_18_18 << (MR_Integer) 2)))));
#line 673 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__V_19_19));
#line 673 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_20_20));
#line 673 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_21_21));
#line 673 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_22_22));
#line 673 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__V_23_23));
#line 673 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_24_24 | ((((libs__globals__V_25_25 << (MR_Integer) 3)) | ((libs__globals__V_26_26 << (MR_Integer) 6)))))));
#line 673 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_27_27));
#line 673 "globals.m"
    }
#line 673 "globals.m"
  }
#line 278 "globals.m"
}

#line 277 "globals.m"
void MR_CALL 
libs__globals__set_gc_method_3_p_0(
#line 277 "globals.m"
  MR_Word libs__globals__GC_Method_4,
#line 277 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 277 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 277 "globals.m"
{
#line 670 "globals.m"
  {
#line 670 "globals.m"
    MR_bool libs__globals__succeeded;
#line 670 "globals.m"
    MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
#line 670 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 670 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 670 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 670 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 670 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 670 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)));
#line 670 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 670 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 670 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)));
#line 670 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
#line 670 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
#line 670 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
#line 670 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
#line 670 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 670 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 670 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 670 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
#line 670 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);

#line 670 "globals.m"
    {
#line 670 "globals.m"
      MR_Word base;
#line 670 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 670 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
#line 670 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__V_9_9));
#line 670 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_10_10 | ((((libs__globals__GC_Method_4 << (MR_Integer) 3)) | ((((libs__globals__V_12_12 << (MR_Integer) 6)) | ((((libs__globals__V_13_13 << (MR_Integer) 8)) | ((((libs__globals__V_14_14 << (MR_Integer) 10)) | ((libs__globals__V_15_15 << (MR_Integer) 12)))))))))))));
#line 670 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_16_16));
#line 670 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__V_17_17 | ((libs__globals__V_18_18 << (MR_Integer) 2)))));
#line 670 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__V_19_19));
#line 670 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_20_20));
#line 670 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_21_21));
#line 670 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_22_22));
#line 670 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__V_23_23));
#line 670 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_24_24 | ((((libs__globals__V_25_25 << (MR_Integer) 3)) | ((libs__globals__V_26_26 << (MR_Integer) 6)))))));
#line 670 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_27_27));
#line 670 "globals.m"
    }
#line 670 "globals.m"
  }
#line 277 "globals.m"
}

#line 276 "globals.m"
void MR_CALL 
libs__globals__set_options_3_p_0(
#line 276 "globals.m"
  MR_Word libs__globals__Options_4,
#line 276 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 276 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 276 "globals.m"
{
#line 662 "globals.m"
  {
#line 662 "globals.m"
    MR_bool libs__globals__succeeded;
#line 662 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 662 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 662 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 662 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 662 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 662 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 662 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)));
#line 662 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 662 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 662 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)));
#line 662 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
#line 662 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
#line 662 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
#line 662 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
#line 662 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 662 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 662 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 662 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
#line 662 "globals.m"
    MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));

#line 662 "globals.m"
    {
#line 662 "globals.m"
      MR_Word base;
#line 662 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 662 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
#line 662 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__Options_4));
#line 662 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_10_10 | ((((libs__globals__V_11_11 << (MR_Integer) 3)) | ((((libs__globals__V_12_12 << (MR_Integer) 6)) | ((((libs__globals__V_13_13 << (MR_Integer) 8)) | ((((libs__globals__V_14_14 << (MR_Integer) 10)) | ((libs__globals__V_15_15 << (MR_Integer) 12)))))))))))));
#line 662 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_16_16));
#line 662 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__V_17_17 | ((libs__globals__V_18_18 << (MR_Integer) 2)))));
#line 662 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__V_19_19));
#line 662 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_20_20));
#line 662 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_21_21));
#line 662 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_22_22));
#line 662 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__V_23_23));
#line 662 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_24_24 | ((((libs__globals__V_25_25 << (MR_Integer) 3)) | ((libs__globals__V_26_26 << (MR_Integer) 6)))))));
#line 662 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_27_27));
#line 662 "globals.m"
    }
#line 662 "globals.m"
  }
#line 276 "globals.m"
}

#line 274 "globals.m"
void MR_CALL 
libs__globals__set_option_4_p_0(
#line 274 "globals.m"
  MR_Word libs__globals__Option_5,
#line 274 "globals.m"
  MR_Word libs__globals__OptionData_6,
#line 274 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_10,
#line 274 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_11)
#line 274 "globals.m"
{
#line 664 "globals.m"
  {
#line 664 "globals.m"
    MR_bool libs__globals__succeeded;
#line 664 "globals.m"
    MR_Word libs__globals__OptionTable0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 0)));
#line 664 "globals.m"
    MR_Word libs__globals__OptionTable_9;
#line 631 "globals.m"
    MR_Word libs__globals__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)));
#line 631 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 631 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 631 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 4)));
#line 631 "globals.m"
    MR_Word libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 5)));
#line 631 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 6)));
#line 631 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 7)));
#line 631 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 8)));
#line 631 "globals.m"
    MR_Word libs__globals__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 631 "globals.m"
    MR_Word libs__globals__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 10)));
#line 662 "globals.m"
    MR_Word libs__globals__V_40_40;
#line 662 "globals.m"
    MR_Word libs__globals__V_41_41;
#line 662 "globals.m"
    MR_Word libs__globals__V_42_42;
#line 662 "globals.m"
    MR_Word libs__globals__V_43_43;
#line 662 "globals.m"
    MR_Word libs__globals__V_44_44;
#line 662 "globals.m"
    MR_Word libs__globals__V_45_45;
#line 662 "globals.m"
    MR_Word libs__globals__V_46_46;
#line 662 "globals.m"
    MR_Word libs__globals__V_47_47;
#line 662 "globals.m"
    MR_Word libs__globals__V_48_48;
#line 662 "globals.m"
    MR_Word libs__globals__V_49_49;
#line 662 "globals.m"
    MR_Word libs__globals__V_50_50;
#line 662 "globals.m"
    MR_Word libs__globals__V_51_51;
#line 662 "globals.m"
    MR_Word libs__globals__V_52_52;
#line 662 "globals.m"
    MR_Word libs__globals__V_53_53;
#line 662 "globals.m"
    MR_Word libs__globals__V_54_54;
#line 662 "globals.m"
    MR_Word libs__globals__V_55_55;
#line 662 "globals.m"
    MR_Word libs__globals__V_56_56;
#line 662 "globals.m"
    MR_Word libs__globals__V_57_57;
#line 662 "globals.m"
    MR_Word libs__globals__V_39_39;

#line 666 "globals.m"
    {
#line 666 "globals.m"
      mercury__map__set_4_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (libs__globals__Option_5)), ((MR_Box) (libs__globals__OptionData_6)), libs__globals__OptionTable0_8, &libs__globals__OptionTable_9);
    }
#line 662 "globals.m"
    libs__globals__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 0)));
#line 662 "globals.m"
    libs__globals__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 662 "globals.m"
    libs__globals__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 662 "globals.m"
    libs__globals__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 662 "globals.m"
    libs__globals__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 662 "globals.m"
    libs__globals__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 662 "globals.m"
    libs__globals__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 662 "globals.m"
    libs__globals__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)));
#line 662 "globals.m"
    libs__globals__V_47_47 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 662 "globals.m"
    libs__globals__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 662 "globals.m"
    libs__globals__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 4)));
#line 662 "globals.m"
    libs__globals__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 5)));
#line 662 "globals.m"
    libs__globals__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 6)));
#line 662 "globals.m"
    libs__globals__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 7)));
#line 662 "globals.m"
    libs__globals__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 8)));
#line 662 "globals.m"
    libs__globals__V_54_54 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 662 "globals.m"
    libs__globals__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 662 "globals.m"
    libs__globals__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 662 "globals.m"
    libs__globals__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 10)));
#line 662 "globals.m"
    {
#line 662 "globals.m"
      MR_Word base;
#line 662 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 662 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_11 = base;
#line 662 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__OptionTable_9));
#line 662 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_40_40 | ((((libs__globals__V_41_41 << (MR_Integer) 3)) | ((((libs__globals__V_42_42 << (MR_Integer) 6)) | ((((libs__globals__V_43_43 << (MR_Integer) 8)) | ((((libs__globals__V_44_44 << (MR_Integer) 10)) | ((libs__globals__V_45_45 << (MR_Integer) 12)))))))))))));
#line 662 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_46_46));
#line 662 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__V_47_47 | ((libs__globals__V_48_48 << (MR_Integer) 2)))));
#line 662 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__V_49_49));
#line 662 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_50_50));
#line 662 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_51_51));
#line 662 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_52_52));
#line 662 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__V_53_53));
#line 662 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_54_54 | ((((libs__globals__V_55_55 << (MR_Integer) 3)) | ((libs__globals__V_56_56 << (MR_Integer) 6)))))));
#line 662 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_57_57));
#line 662 "globals.m"
    }
#line 664 "globals.m"
  }
#line 274 "globals.m"
}

#line 272 "globals.m"
void MR_CALL 
libs__globals__get_file_install_cmd_2_p_0(
#line 272 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 272 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 272 "globals.m"
{
#line 649 "globals.m"
  {
#line 649 "globals.m"
    MR_bool libs__globals__succeeded;
#line 649 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 649 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 649 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 649 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 649 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 649 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 649 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 649 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 649 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 649 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 649 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 649 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 649 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 649 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 649 "globals.m"
    MR_Word libs__globals__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 649 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 649 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 649 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);

#line 649 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 649 "globals.m"
  }
#line 272 "globals.m"
}

#line 271 "globals.m"
void MR_CALL 
libs__globals__get_target_env_type_2_p_0(
#line 271 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 271 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 271 "globals.m"
{
#line 648 "globals.m"
  {
#line 648 "globals.m"
    MR_bool libs__globals__succeeded;
#line 648 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 648 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 648 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 648 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 648 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 648 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 648 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 648 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 648 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 648 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 648 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 648 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 648 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 648 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 648 "globals.m"
    MR_Word libs__globals__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 648 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 648 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 648 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 648 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 648 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 648 "globals.m"
  }
#line 271 "globals.m"
}

#line 270 "globals.m"
void MR_CALL 
libs__globals__get_system_env_type_2_p_0(
#line 270 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 270 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 270 "globals.m"
{
#line 647 "globals.m"
  {
#line 647 "globals.m"
    MR_bool libs__globals__succeeded;
#line 647 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 647 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 647 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 647 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 647 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 647 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 647 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 647 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 647 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 647 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 647 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 647 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 647 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 647 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 647 "globals.m"
    MR_Word libs__globals__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 647 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 647 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 647 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 647 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 647 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 647 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 647 "globals.m"
  }
#line 270 "globals.m"
}

#line 269 "globals.m"
void MR_CALL 
libs__globals__get_host_env_type_2_p_0(
#line 269 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 269 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 269 "globals.m"
{
#line 646 "globals.m"
  {
#line 646 "globals.m"
    MR_bool libs__globals__succeeded;
#line 646 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 646 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 646 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 646 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 646 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 646 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 646 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 646 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 646 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 646 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 646 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 646 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 646 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 646 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 646 "globals.m"
    MR_Word libs__globals__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 646 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 646 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 646 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 646 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 646 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 646 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 646 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 646 "globals.m"
  }
#line 269 "globals.m"
}

#line 268 "globals.m"
void MR_CALL 
libs__globals__get_maybe_feedback_info_2_p_0(
#line 268 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 268 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 268 "globals.m"
{
#line 645 "globals.m"
  {
#line 645 "globals.m"
    MR_bool libs__globals__succeeded;
#line 645 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 645 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 645 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 645 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 645 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 645 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 645 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 645 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 645 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 645 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 645 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 645 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 645 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 645 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 645 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 645 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 645 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 645 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 645 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 645 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 645 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 645 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 645 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 645 "globals.m"
  }
#line 268 "globals.m"
}

#line 266 "globals.m"
void MR_CALL 
libs__globals__get_maybe_il_version_number_2_p_0(
#line 266 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 266 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 266 "globals.m"
{
#line 644 "globals.m"
  {
#line 644 "globals.m"
    MR_bool libs__globals__succeeded;
#line 644 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 644 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 644 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 644 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 644 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 644 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 644 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 644 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 644 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 644 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 644 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 644 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 644 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 644 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 644 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 644 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 644 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 644 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 644 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 644 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 644 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 644 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 644 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 644 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 644 "globals.m"
  }
#line 266 "globals.m"
}

#line 265 "globals.m"
void MR_CALL 
libs__globals__get_reuse_strategy_2_p_0(
#line 265 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 265 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 265 "globals.m"
{
#line 643 "globals.m"
  {
#line 643 "globals.m"
    MR_bool libs__globals__succeeded;
#line 643 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 643 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 643 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 643 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 643 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 643 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 643 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 643 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 643 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 643 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 643 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 643 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 643 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 643 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 643 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 643 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 643 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 643 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 643 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 643 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 643 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 643 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 643 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 643 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 643 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 643 "globals.m"
  }
#line 265 "globals.m"
}

#line 263 "globals.m"
void MR_CALL 
libs__globals__get_csharp_compiler_type_2_p_0(
#line 263 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 263 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 263 "globals.m"
{
#line 642 "globals.m"
  {
#line 642 "globals.m"
    MR_bool libs__globals__succeeded;
#line 642 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 642 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 642 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 642 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 642 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 642 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 642 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 642 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 642 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 642 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 642 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 642 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 642 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 642 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 642 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 642 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 642 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 642 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 642 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 642 "globals.m"
  }
#line 263 "globals.m"
}

#line 262 "globals.m"
void MR_CALL 
libs__globals__get_c_compiler_type_2_p_0(
#line 262 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 262 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 262 "globals.m"
{
#line 641 "globals.m"
  {
#line 641 "globals.m"
    MR_bool libs__globals__succeeded;
#line 641 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 641 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 641 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 641 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 641 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 641 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 641 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 641 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 641 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 641 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 641 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 641 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 641 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 641 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 641 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 641 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 641 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 641 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 641 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 641 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 641 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 641 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 641 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 641 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 641 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 641 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 641 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 641 "globals.m"
  }
#line 262 "globals.m"
}

#line 261 "globals.m"
void MR_CALL 
libs__globals__get_maybe_thread_safe_2_p_0(
#line 261 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 261 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 261 "globals.m"
{
#line 640 "globals.m"
  {
#line 640 "globals.m"
    MR_bool libs__globals__succeeded;
#line 640 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 640 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 640 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 640 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 640 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 640 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 640 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 640 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 640 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 640 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 640 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 640 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 640 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 640 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 640 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 640 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 640 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 640 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 640 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 640 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 640 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 640 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 640 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 640 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 640 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 640 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 640 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 640 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 640 "globals.m"
  }
#line 261 "globals.m"
}

#line 260 "globals.m"
void MR_CALL 
libs__globals__get_ssdb_trace_level_2_p_0(
#line 260 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 260 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 260 "globals.m"
{
#line 639 "globals.m"
  {
#line 639 "globals.m"
    MR_bool libs__globals__succeeded;
#line 639 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 639 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 639 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 639 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 639 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 639 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 639 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 639 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 639 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 639 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 639 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 639 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 639 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 639 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 639 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 639 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 639 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 639 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 639 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 639 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 639 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 639 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 639 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 639 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 639 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 639 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 639 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 639 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 639 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 639 "globals.m"
  }
#line 260 "globals.m"
}

#line 259 "globals.m"
void MR_CALL 
libs__globals__get_trace_suppress_2_p_0(
#line 259 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 259 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 259 "globals.m"
{
#line 638 "globals.m"
  {
#line 638 "globals.m"
    MR_bool libs__globals__succeeded;
#line 638 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 638 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 638 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 638 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 638 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 638 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 638 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 638 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 638 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 638 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 638 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 638 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 638 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 638 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 638 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 638 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 638 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 638 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 638 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 638 "globals.m"
    libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 638 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 638 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 638 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 638 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 638 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 638 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 638 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 638 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 638 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 638 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 638 "globals.m"
  }
#line 259 "globals.m"
}

#line 258 "globals.m"
void MR_CALL 
libs__globals__get_trace_level_2_p_0(
#line 258 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 258 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 258 "globals.m"
{
#line 637 "globals.m"
  {
#line 637 "globals.m"
    MR_bool libs__globals__succeeded;
#line 637 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 637 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 637 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 637 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 637 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 637 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 637 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 637 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 637 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 637 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 637 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 637 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 637 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 637 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 637 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 637 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 637 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 637 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 637 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 637 "globals.m"
    libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 637 "globals.m"
    libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 637 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 637 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 637 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 637 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 637 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 637 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 637 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 637 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 637 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 637 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 637 "globals.m"
  }
#line 258 "globals.m"
}

#line 257 "globals.m"
void MR_CALL 
libs__globals__get_termination2_norm_2_p_0(
#line 257 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 257 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 257 "globals.m"
{
#line 636 "globals.m"
  {
#line 636 "globals.m"
    MR_bool libs__globals__succeeded;
#line 636 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 636 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 636 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 636 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 636 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 636 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 636 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 636 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 636 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 636 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 636 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 636 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 636 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 636 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 636 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 636 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 636 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 636 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 636 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 636 "globals.m"
    libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 636 "globals.m"
    libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 636 "globals.m"
    libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 636 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 636 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 636 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 636 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 636 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 636 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 636 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 636 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 636 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 636 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 636 "globals.m"
  }
#line 257 "globals.m"
}

#line 256 "globals.m"
void MR_CALL 
libs__globals__get_termination_norm_2_p_0(
#line 256 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 256 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 256 "globals.m"
{
#line 635 "globals.m"
  {
#line 635 "globals.m"
    MR_bool libs__globals__succeeded;
#line 635 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 635 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 635 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 635 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 635 "globals.m"
    MR_Word libs__globals__V_8_8;
#line 635 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 635 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 635 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 635 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 635 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 635 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 635 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 635 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 635 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 635 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 635 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 635 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 635 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 635 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 635 "globals.m"
    libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 635 "globals.m"
    libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 635 "globals.m"
    libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 635 "globals.m"
    libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 635 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 635 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 635 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 635 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 635 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 635 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 635 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 635 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 635 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 635 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 635 "globals.m"
  }
#line 256 "globals.m"
}

#line 255 "globals.m"
void MR_CALL 
libs__globals__get_tags_method_2_p_0(
#line 255 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 255 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 255 "globals.m"
{
#line 634 "globals.m"
  {
#line 634 "globals.m"
    MR_bool libs__globals__succeeded;
#line 634 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 634 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 634 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 634 "globals.m"
    MR_Word libs__globals__V_7_7;
#line 634 "globals.m"
    MR_Word libs__globals__V_8_8;
#line 634 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 634 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 634 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 634 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 634 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 634 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 634 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 634 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 634 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 634 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 634 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 634 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 634 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 634 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 634 "globals.m"
    libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 634 "globals.m"
    libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 634 "globals.m"
    libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 634 "globals.m"
    libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 634 "globals.m"
    libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 634 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 634 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 634 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 634 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 634 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 634 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 634 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 634 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 634 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 634 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 634 "globals.m"
  }
#line 255 "globals.m"
}

#line 254 "globals.m"
void MR_CALL 
libs__globals__get_gc_method_2_p_0(
#line 254 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 254 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 254 "globals.m"
{
#line 633 "globals.m"
  {
#line 633 "globals.m"
    MR_bool libs__globals__succeeded;
#line 633 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 633 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 633 "globals.m"
    MR_Word libs__globals__V_6_6;
#line 633 "globals.m"
    MR_Word libs__globals__V_7_7;
#line 633 "globals.m"
    MR_Word libs__globals__V_8_8;
#line 633 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 633 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 633 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 633 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 633 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 633 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 633 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 633 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 633 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 633 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 633 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 633 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 633 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 633 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 633 "globals.m"
    libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 633 "globals.m"
    libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 633 "globals.m"
    libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 633 "globals.m"
    libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 633 "globals.m"
    libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 633 "globals.m"
    libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 633 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 633 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 633 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 633 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 633 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 633 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 633 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 633 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 633 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 633 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 633 "globals.m"
  }
#line 254 "globals.m"
}

#line 654 "globals.m"
static MR_Box MR_CALL 
libs__globals__get_backend_foreign_languages_2_p_0_1(
#line 654 "globals.m"
  MR_Box libs__globals__closure_arg,
#line 654 "globals.m"
  MR_Box libs__globals__wrapper_arg_1)
#line 654 "globals.m"
{
#line 654 "globals.m"
  {
#line 654 "globals.m"
    MR_Box libs__globals__wrapper_arg_2;
#line 654 "globals.m"
    MR_Box libs__globals__closure = libs__globals__closure_arg;
#line 654 "globals.m"
    MR_Word libs__globals__conv0_HeadVar__2_12;

#line 654 "globals.m"
    {
#line 654 "globals.m"
      libs__globals__conv0_HeadVar__2_12 = libs__globals__IntroducedFrom__func__get_backend_foreign_languages__657__1_1_f_0(((MR_String) libs__globals__wrapper_arg_1));
    }
#line 654 "globals.m"
    libs__globals__wrapper_arg_2 = ((MR_Box) (libs__globals__conv0_HeadVar__2_12));
#line 654 "globals.m"
    return libs__globals__wrapper_arg_2;
#line 654 "globals.m"
  }
#line 654 "globals.m"
}

#line 252 "globals.m"
void MR_CALL 
libs__globals__get_backend_foreign_languages_2_p_0(
#line 252 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 252 "globals.m"
  MR_Word * libs__globals__ForeignLangs_4)
#line 252 "globals.m"
{
#line 652 "globals.m"
  {
#line 652 "globals.m"
    MR_bool libs__globals__succeeded;
#line 652 "globals.m"
    MR_Word libs__globals__LangStrs_5;

#line 653 "globals.m"
    {
#line 653 "globals.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 259, &libs__globals__LangStrs_5);
    }
#line 654 "globals.m"
    {
#line 654 "globals.m"
      *libs__globals__ForeignLangs_4 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &libs__globals_scalar_common_2[4], libs__globals__LangStrs_5);
    }
#line 652 "globals.m"
  }
#line 252 "globals.m"
}

#line 251 "globals.m"
void MR_CALL 
libs__globals__get_target_2_p_0(
#line 251 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 251 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 251 "globals.m"
{
#line 632 "globals.m"
  {
#line 632 "globals.m"
    MR_bool libs__globals__succeeded;
#line 632 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 632 "globals.m"
    MR_Word libs__globals__V_5_5;
#line 632 "globals.m"
    MR_Word libs__globals__V_6_6;
#line 632 "globals.m"
    MR_Word libs__globals__V_7_7;
#line 632 "globals.m"
    MR_Word libs__globals__V_8_8;
#line 632 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 632 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 632 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 632 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 632 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 632 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 632 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 632 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 632 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 632 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 632 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 632 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 632 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 632 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 632 "globals.m"
    libs__globals__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 632 "globals.m"
    libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 632 "globals.m"
    libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 632 "globals.m"
    libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 632 "globals.m"
    libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 632 "globals.m"
    libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 632 "globals.m"
    libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 632 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 632 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 632 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 632 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 632 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 632 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 632 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 632 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 632 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 632 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 632 "globals.m"
  }
#line 251 "globals.m"
}

#line 250 "globals.m"
void MR_CALL 
libs__globals__get_options_2_p_0(
#line 250 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 250 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 250 "globals.m"
{
#line 631 "globals.m"
  {
#line 631 "globals.m"
    MR_bool libs__globals__succeeded;
#line 631 "globals.m"
    MR_Word libs__globals__V_4_4;
#line 631 "globals.m"
    MR_Word libs__globals__V_5_5;
#line 631 "globals.m"
    MR_Word libs__globals__V_6_6;
#line 631 "globals.m"
    MR_Word libs__globals__V_7_7;
#line 631 "globals.m"
    MR_Word libs__globals__V_8_8;
#line 631 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 631 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 631 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 631 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 631 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 631 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 631 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 631 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 631 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 631 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 631 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 631 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 631 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 631 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 631 "globals.m"
    libs__globals__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 631 "globals.m"
    libs__globals__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 631 "globals.m"
    libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 631 "globals.m"
    libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 631 "globals.m"
    libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 631 "globals.m"
    libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 631 "globals.m"
    libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 631 "globals.m"
    libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 631 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 631 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 631 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 631 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 631 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 631 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 631 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 631 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 631 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 631 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 631 "globals.m"
  }
#line 250 "globals.m"
}

#line 242 "globals.m"
void MR_CALL 
libs__globals__globals_init_20_p_0(
#line 242 "globals.m"
  MR_Word libs__globals__Options_21,
#line 242 "globals.m"
  MR_Word libs__globals__Target_22,
#line 242 "globals.m"
  MR_Word libs__globals__GC_Method_23,
#line 242 "globals.m"
  MR_Word libs__globals__TagsMethod_24,
#line 242 "globals.m"
  MR_Word libs__globals__TerminationNorm_25,
#line 242 "globals.m"
  MR_Word libs__globals__Termination2Norm_26,
#line 242 "globals.m"
  MR_Word libs__globals__TraceLevel_27,
#line 242 "globals.m"
  MR_Word libs__globals__TraceSuppress_28,
#line 242 "globals.m"
  MR_Word libs__globals__SSTraceLevel_29,
#line 242 "globals.m"
  MR_Word libs__globals__MaybeThreadSafe_30,
#line 242 "globals.m"
  MR_Word libs__globals__C_CompilerType_31,
#line 242 "globals.m"
  MR_Word libs__globals__CSharp_CompilerType_32,
#line 242 "globals.m"
  MR_Word libs__globals__ReuseStrategy_33,
#line 242 "globals.m"
  MR_Word libs__globals__MaybeILVersion_34,
#line 242 "globals.m"
  MR_Word libs__globals__MaybeFeedback_35,
#line 242 "globals.m"
  MR_Word libs__globals__HostEnvType_36,
#line 242 "globals.m"
  MR_Word libs__globals__SystemEnvType_37,
#line 242 "globals.m"
  MR_Word libs__globals__TargetEnvType_38,
#line 242 "globals.m"
  MR_Word libs__globals__FileInstallCmd_39,
#line 242 "globals.m"
  MR_Word * libs__globals__Globals_40)
#line 242 "globals.m"
{
#line 624 "globals.m"
  {
#line 624 "globals.m"
    MR_bool libs__globals__succeeded;

#line 624 "globals.m"
    {
#line 624 "globals.m"
      MR_Word base;
#line 624 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 624 "globals.m"
      *libs__globals__Globals_40 = base;
#line 624 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__Options_21));
#line 624 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__Target_22 | ((((libs__globals__GC_Method_23 << (MR_Integer) 3)) | ((((libs__globals__TagsMethod_24 << (MR_Integer) 6)) | ((((libs__globals__TerminationNorm_25 << (MR_Integer) 8)) | ((((libs__globals__Termination2Norm_26 << (MR_Integer) 10)) | ((libs__globals__TraceLevel_27 << (MR_Integer) 12)))))))))))));
#line 624 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__TraceSuppress_28));
#line 624 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__SSTraceLevel_29 | ((libs__globals__MaybeThreadSafe_30 << (MR_Integer) 2)))));
#line 624 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__C_CompilerType_31));
#line 624 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__CSharp_CompilerType_32));
#line 624 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__ReuseStrategy_33));
#line 624 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__MaybeILVersion_34));
#line 624 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__MaybeFeedback_35));
#line 624 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__HostEnvType_36 | ((((libs__globals__SystemEnvType_37 << (MR_Integer) 3)) | ((libs__globals__TargetEnvType_38 << (MR_Integer) 6)))))));
#line 624 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__FileInstallCmd_39));
#line 624 "globals.m"
    }
#line 624 "globals.m"
  }
#line 242 "globals.m"
}

#line 226 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_ssdb_trace_level_3_p_0(
#line 226 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 226 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 226 "globals.m"
  MR_Word * libs__globals__HeadVar__3_3)
#line 226 "globals.m"
{
#line 558 "globals.m"
  {
#line 558 "globals.m"
    MR_bool libs__globals__succeeded;

#line 558 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "deep") == 0))
#line 562 "globals.m"
      {
#line 562 "globals.m"
        *libs__globals__HeadVar__3_3 = (MR_Integer) 2;
#line 562 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 562 "globals.m"
      }
#line 558 "globals.m"
    else
#line 558 "globals.m"
      if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "none") == 0))
#line 560 "globals.m"
        {
#line 560 "globals.m"
          *libs__globals__HeadVar__3_3 = (MR_Integer) 0;
#line 560 "globals.m"
          libs__globals__succeeded = MR_TRUE;
#line 560 "globals.m"
        }
#line 558 "globals.m"
      else
#line 558 "globals.m"
        if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "default") == 0))
#line 558 "globals.m"
          {
#line 558 "globals.m"
            if ((libs__globals__HeadVar__2_2 == (MR_Integer) 0))
#line 559 "globals.m"
              *libs__globals__HeadVar__3_3 = (MR_Integer) 0;
#line 558 "globals.m"
            else
#line 558 "globals.m"
              *libs__globals__HeadVar__3_3 = (MR_Integer) 2;
#line 558 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 558 "globals.m"
          }
#line 558 "globals.m"
        else
#line 558 "globals.m"
          if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "shallow") == 0))
#line 561 "globals.m"
            {
#line 561 "globals.m"
              *libs__globals__HeadVar__3_3 = (MR_Integer) 1;
#line 561 "globals.m"
              libs__globals__succeeded = MR_TRUE;
#line 561 "globals.m"
            }
#line 558 "globals.m"
          else
#line 558 "globals.m"
            libs__globals__succeeded = MR_FALSE;
#line 558 "globals.m"
    return libs__globals__succeeded;
#line 558 "globals.m"
  }
#line 226 "globals.m"
}

#line 225 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_env_type_2_p_0(
#line 225 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 225 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 225 "globals.m"
{
#line 552 "globals.m"
  {
#line 552 "globals.m"
    MR_bool libs__globals__succeeded;

#line 552 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "msys") == 0))
#line 554 "globals.m"
      {
#line 554 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 2;
#line 554 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 554 "globals.m"
      }
#line 552 "globals.m"
    else
#line 552 "globals.m"
      if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "posix") == 0))
#line 552 "globals.m"
        {
#line 552 "globals.m"
          *libs__globals__HeadVar__2_2 = (MR_Integer) 0;
#line 552 "globals.m"
          libs__globals__succeeded = MR_TRUE;
#line 552 "globals.m"
        }
#line 552 "globals.m"
      else
#line 552 "globals.m"
        if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "cygwin") == 0))
#line 553 "globals.m"
          {
#line 553 "globals.m"
            *libs__globals__HeadVar__2_2 = (MR_Integer) 1;
#line 553 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 553 "globals.m"
          }
#line 552 "globals.m"
        else
#line 552 "globals.m"
          if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "windows") == 0))
#line 555 "globals.m"
            {
#line 555 "globals.m"
              *libs__globals__HeadVar__2_2 = (MR_Integer) 3;
#line 555 "globals.m"
              libs__globals__succeeded = MR_TRUE;
#line 555 "globals.m"
            }
#line 552 "globals.m"
          else
#line 552 "globals.m"
            if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "powershell") == 0))
#line 556 "globals.m"
              {
#line 556 "globals.m"
                *libs__globals__HeadVar__2_2 = (MR_Integer) 4;
#line 556 "globals.m"
                libs__globals__succeeded = MR_TRUE;
#line 556 "globals.m"
              }
#line 552 "globals.m"
            else
#line 552 "globals.m"
              libs__globals__succeeded = MR_FALSE;
#line 552 "globals.m"
    return libs__globals__succeeded;
#line 552 "globals.m"
  }
#line 225 "globals.m"
}

#line 223 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_reuse_strategy_3_p_0(
#line 223 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 223 "globals.m"
  MR_Integer libs__globals__NCells_2,
#line 223 "globals.m"
  MR_Word * libs__globals__HeadVar__3_3)
#line 223 "globals.m"
{
#line 564 "globals.m"
  {
#line 564 "globals.m"
    MR_bool libs__globals__succeeded;

#line 564 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "same_cons_id") == 0))
#line 564 "globals.m"
      {
#line 564 "globals.m"
        *libs__globals__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 564 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 564 "globals.m"
      }
#line 564 "globals.m"
    else
#line 564 "globals.m"
      if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "within_n_cells_difference") == 0))
#line 566 "globals.m"
        {
#line 566 "globals.m"
          {
#line 566 "globals.m"
            MR_Word base;
#line 566 "globals.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 566 "globals.m"
            *libs__globals__HeadVar__3_3 = base;
#line 566 "globals.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__globals__NCells_2));
#line 566 "globals.m"
          }
#line 566 "globals.m"
          libs__globals__succeeded = MR_TRUE;
#line 566 "globals.m"
        }
#line 564 "globals.m"
      else
#line 564 "globals.m"
        libs__globals__succeeded = MR_FALSE;
#line 564 "globals.m"
    return libs__globals__succeeded;
#line 564 "globals.m"
  }
#line 223 "globals.m"
}

#line 221 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_csharp_compiler_type_2_p_0(
#line 221 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 221 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 221 "globals.m"
{
#line 548 "globals.m"
  {
#line 548 "globals.m"
    MR_bool libs__globals__succeeded;

#line 548 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "mono") == 0))
#line 549 "globals.m"
      {
#line 549 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 1;
#line 549 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 549 "globals.m"
      }
#line 548 "globals.m"
    else
#line 548 "globals.m"
      if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "unknown") == 0))
#line 550 "globals.m"
        {
#line 550 "globals.m"
          *libs__globals__HeadVar__2_2 = (MR_Integer) 2;
#line 550 "globals.m"
          libs__globals__succeeded = MR_TRUE;
#line 550 "globals.m"
        }
#line 548 "globals.m"
      else
#line 548 "globals.m"
        if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "microsoft") == 0))
#line 548 "globals.m"
          {
#line 548 "globals.m"
            *libs__globals__HeadVar__2_2 = (MR_Integer) 0;
#line 548 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 548 "globals.m"
          }
#line 548 "globals.m"
        else
#line 548 "globals.m"
          libs__globals__succeeded = MR_FALSE;
#line 548 "globals.m"
    return libs__globals__succeeded;
#line 548 "globals.m"
  }
#line 221 "globals.m"
}

#line 448 "globals.m"
static MR_bool MR_CALL 
libs__globals__convert_c_compiler_type_2_p_0_1(
#line 448 "globals.m"
  MR_Box libs__globals__closure_arg,
#line 448 "globals.m"
  MR_Box libs__globals__wrapper_arg_1)
#line 448 "globals.m"
{
#line 448 "globals.m"
  {
#line 448 "globals.m"
    MR_bool libs__globals__succeeded;
#line 448 "globals.m"
    MR_Box libs__globals__closure = libs__globals__closure_arg;

#line 448 "globals.m"
    {
#line 448 "globals.m"
      return libs__globals__succeeded = libs__globals__IntroducedFrom__pred__convert_c_compiler_type_with_version__448__1_1_p_0(((MR_Char) (MR_Word) libs__globals__wrapper_arg_1));
    }
#line 448 "globals.m"
    return libs__globals__succeeded;
#line 448 "globals.m"
  }
#line 448 "globals.m"
}

#line 219 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_c_compiler_type_2_p_0(
#line 219 "globals.m"
  MR_String libs__globals__CC_Str_3,
#line 219 "globals.m"
  MR_Word * libs__globals__C_CompilerType_4)
#line 219 "globals.m"
{
#line 426 "globals.m"
  {
#line 426 "globals.m"
    MR_bool libs__globals__succeeded;
#line 426 "globals.m"
    MR_Word libs__globals__C_CompilerType0_5;

#line 437 "globals.m"
    if ((strcmp(libs__globals__CC_Str_3, (MR_String) "cl") == 0))
#line 440 "globals.m"
      {
#line 440 "globals.m"
        libs__globals__C_CompilerType0_5 = (MR_Word) MR_mkword(MR_mktag(3), &libs__globals_scalar_common_3[0]);
#line 440 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 440 "globals.m"
      }
#line 437 "globals.m"
    else
#line 437 "globals.m"
      if ((strcmp(libs__globals__CC_Str_3, (MR_String) "gcc") == 0))
#line 437 "globals.m"
        {
#line 437 "globals.m"
          libs__globals__C_CompilerType0_5 = (MR_Word) MR_mkword(MR_mktag(1), &libs__globals_scalar_common_2[2]);
#line 437 "globals.m"
          libs__globals__succeeded = MR_TRUE;
#line 437 "globals.m"
        }
#line 437 "globals.m"
      else
#line 437 "globals.m"
        if ((strcmp(libs__globals__CC_Str_3, (MR_String) "lcc") == 0))
#line 439 "globals.m"
          {
#line 439 "globals.m"
            libs__globals__C_CompilerType0_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 439 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 439 "globals.m"
          }
#line 437 "globals.m"
        else
#line 437 "globals.m"
          if ((strcmp(libs__globals__CC_Str_3, (MR_String) "msvc") == 0))
#line 441 "globals.m"
            {
#line 441 "globals.m"
              libs__globals__C_CompilerType0_5 = (MR_Word) MR_mkword(MR_mktag(3), &libs__globals_scalar_common_3[0]);
#line 441 "globals.m"
              libs__globals__succeeded = MR_TRUE;
#line 441 "globals.m"
            }
#line 437 "globals.m"
          else
#line 437 "globals.m"
            if ((strcmp(libs__globals__CC_Str_3, (MR_String) "clang") == 0))
#line 438 "globals.m"
              {
#line 438 "globals.m"
                libs__globals__C_CompilerType0_5 = (MR_Word) MR_mkword(MR_mktag(2), &libs__globals_scalar_common_3[1]);
#line 438 "globals.m"
                libs__globals__succeeded = MR_TRUE;
#line 438 "globals.m"
              }
#line 437 "globals.m"
            else
#line 437 "globals.m"
              if ((strcmp(libs__globals__CC_Str_3, (MR_String) "unknown") == 0))
#line 442 "globals.m"
                {
#line 442 "globals.m"
                  libs__globals__C_CompilerType0_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 442 "globals.m"
                  libs__globals__succeeded = MR_TRUE;
#line 442 "globals.m"
                }
#line 437 "globals.m"
              else
#line 437 "globals.m"
                libs__globals__succeeded = MR_FALSE;
#line 426 "globals.m"
    if (libs__globals__succeeded)
#line 425 "globals.m"
      {
#line 425 "globals.m"
        *libs__globals__C_CompilerType_4 = libs__globals__C_CompilerType0_5;
#line 425 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 425 "globals.m"
      }
#line 426 "globals.m"
    else
#line 447 "globals.m"
      {
#line 447 "globals.m"
        MR_Word libs__globals__Tokens_14;
#line 452 "globals.m"
        MR_String libs__globals__Major_16;
#line 452 "globals.m"
        MR_String libs__globals__Minor_17;
#line 452 "globals.m"
        MR_String libs__globals__Patch_18;
#line 450 "globals.m"
        MR_String libs__globals__V_22_22;
#line 450 "globals.m"
        MR_Word libs__globals__V_23_23;
#line 450 "globals.m"
        MR_Word libs__globals__V_24_24;
#line 450 "globals.m"
        MR_Word libs__globals__V_25_25;
#line 450 "globals.m"
        MR_Word libs__globals__V_26_26;

#line 448 "globals.m"
        {
#line 448 "globals.m"
          libs__globals__Tokens_14 = mercury__string__words_separator_2_f_0((MR_Word) &libs__globals_scalar_common_2[3], libs__globals__CC_Str_3);
        }
#line 450 "globals.m"
        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__Tokens_14)) == (MR_mktag((MR_Integer) 1)));
#line 450 "globals.m"
        if (libs__globals__succeeded)
#line 450 "globals.m"
          {
#line 450 "globals.m"
            libs__globals__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_14, (MR_Integer) 0)));
#line 450 "globals.m"
            libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_14, (MR_Integer) 1)));
#line 450 "globals.m"
            libs__globals__succeeded = (strcmp(libs__globals__V_22_22, (MR_String) "gcc") == 0);
#line 450 "globals.m"
            if (libs__globals__succeeded)
#line 450 "globals.m"
              {
#line 450 "globals.m"
                libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 450 "globals.m"
                if (libs__globals__succeeded)
#line 450 "globals.m"
                  {
#line 450 "globals.m"
                    libs__globals__Major_16 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_23_23, (MR_Integer) 0)));
#line 450 "globals.m"
                    libs__globals__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_23_23, (MR_Integer) 1)));
#line 450 "globals.m"
                    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 450 "globals.m"
                    if (libs__globals__succeeded)
#line 450 "globals.m"
                      {
#line 450 "globals.m"
                        libs__globals__Minor_17 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_24_24, (MR_Integer) 0)));
#line 450 "globals.m"
                        libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_24_24, (MR_Integer) 1)));
#line 450 "globals.m"
                        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 450 "globals.m"
                        if (libs__globals__succeeded)
#line 450 "globals.m"
                          {
#line 450 "globals.m"
                            libs__globals__Patch_18 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_25_25, (MR_Integer) 0)));
#line 450 "globals.m"
                            libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_25_25, (MR_Integer) 1)));
#line 450 "globals.m"
                            libs__globals__succeeded = (libs__globals__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 450 "globals.m"
                          }
#line 450 "globals.m"
                      }
#line 450 "globals.m"
                  }
#line 450 "globals.m"
              }
#line 450 "globals.m"
          }
#line 452 "globals.m"
        if (libs__globals__succeeded)
#line 488 "globals.m"
          {
#line 483 "globals.m"
            libs__globals__succeeded = (strcmp(libs__globals__Major_16, (MR_String) "u") == 0);
#line 483 "globals.m"
            if (libs__globals__succeeded)
#line 483 "globals.m"
              {
#line 484 "globals.m"
                libs__globals__succeeded = (strcmp(libs__globals__Minor_17, (MR_String) "u") == 0);
#line 483 "globals.m"
                if (libs__globals__succeeded)
#line 485 "globals.m"
                  libs__globals__succeeded = (strcmp(libs__globals__Patch_18, (MR_String) "u") == 0);
#line 483 "globals.m"
              }
#line 488 "globals.m"
            if (libs__globals__succeeded)
#line 487 "globals.m"
              {
#line 487 "globals.m"
                *libs__globals__C_CompilerType_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__globals_scalar_common_2[2]);
#line 487 "globals.m"
                libs__globals__succeeded = MR_TRUE;
#line 487 "globals.m"
              }
#line 488 "globals.m"
            else
#line 515 "globals.m"
              {
#line 515 "globals.m"
                MR_Integer libs__globals__Major_47;
#line 489 "globals.m"
                MR_Integer libs__globals__V_53_53;

#line 489 "globals.m"
                {
#line 489 "globals.m"
                  libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Major_16, &libs__globals__Major_47);
                }
#line 489 "globals.m"
                if (libs__globals__succeeded)
#line 489 "globals.m"
                  {
#line 490 "globals.m"
                    libs__globals__V_53_53 = (MR_Integer) 2;
#line 490 "globals.m"
                    libs__globals__succeeded = (libs__globals__Major_47 >= libs__globals__V_53_53);
#line 489 "globals.m"
                  }
#line 515 "globals.m"
                if (libs__globals__succeeded)
#line 496 "globals.m"
                  {
#line 493 "globals.m"
                    libs__globals__succeeded = (strcmp(libs__globals__Minor_17, (MR_String) "u") == 0);
#line 496 "globals.m"
                    if (libs__globals__succeeded)
#line 495 "globals.m"
                      {
#line 495 "globals.m"
                        MR_Word libs__globals__V_54_54;

#line 495 "globals.m"
                        {
#line 495 "globals.m"
                          libs__globals__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 495 "globals.m"
                          MR_hl_field(MR_mktag(1), libs__globals__V_54_54, 0) = ((MR_Box) (libs__globals__Major_47));
#line 495 "globals.m"
                        }
#line 495 "globals.m"
                        {
#line 495 "globals.m"
                          MR_Word base;
#line 495 "globals.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 495 "globals.m"
                          *libs__globals__C_CompilerType_4 = base;
#line 495 "globals.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__globals__V_54_54));
#line 495 "globals.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 495 "globals.m"
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 495 "globals.m"
                        }
#line 495 "globals.m"
                        libs__globals__succeeded = MR_TRUE;
#line 495 "globals.m"
                      }
#line 496 "globals.m"
                    else
#line 512 "globals.m"
                      {
#line 512 "globals.m"
                        MR_Integer libs__globals__Minor_48;
#line 497 "globals.m"
                        MR_Integer libs__globals__V_57_57;

#line 497 "globals.m"
                        {
#line 497 "globals.m"
                          libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Minor_17, &libs__globals__Minor_48);
                        }
#line 497 "globals.m"
                        if (libs__globals__succeeded)
#line 497 "globals.m"
                          {
#line 498 "globals.m"
                            libs__globals__V_57_57 = (MR_Integer) 0;
#line 498 "globals.m"
                            libs__globals__succeeded = (libs__globals__Minor_48 >= libs__globals__V_57_57);
#line 497 "globals.m"
                          }
#line 512 "globals.m"
                        if (libs__globals__succeeded)
#line 504 "globals.m"
                          {
#line 501 "globals.m"
                            libs__globals__succeeded = (strcmp(libs__globals__Patch_18, (MR_String) "u") == 0);
#line 504 "globals.m"
                            if (libs__globals__succeeded)
#line 503 "globals.m"
                              {
#line 503 "globals.m"
                                MR_Word libs__globals__V_58_58;
#line 503 "globals.m"
                                MR_Word libs__globals__V_59_59;

#line 503 "globals.m"
                                {
#line 503 "globals.m"
                                  libs__globals__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 503 "globals.m"
                                  MR_hl_field(MR_mktag(1), libs__globals__V_58_58, 0) = ((MR_Box) (libs__globals__Major_47));
#line 503 "globals.m"
                                }
#line 503 "globals.m"
                                {
#line 503 "globals.m"
                                  libs__globals__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 503 "globals.m"
                                  MR_hl_field(MR_mktag(1), libs__globals__V_59_59, 0) = ((MR_Box) (libs__globals__Minor_48));
#line 503 "globals.m"
                                }
#line 503 "globals.m"
                                {
#line 503 "globals.m"
                                  MR_Word base;
#line 503 "globals.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 503 "globals.m"
                                  *libs__globals__C_CompilerType_4 = base;
#line 503 "globals.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__globals__V_58_58));
#line 503 "globals.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__globals__V_59_59));
#line 503 "globals.m"
                                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 503 "globals.m"
                                }
#line 503 "globals.m"
                                libs__globals__succeeded = MR_TRUE;
#line 503 "globals.m"
                              }
#line 504 "globals.m"
                            else
#line 509 "globals.m"
                              {
#line 509 "globals.m"
                                MR_Integer libs__globals__Patch_49;
#line 505 "globals.m"
                                MR_Integer libs__globals__V_61_61;

#line 505 "globals.m"
                                {
#line 505 "globals.m"
                                  libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Patch_18, &libs__globals__Patch_49);
                                }
#line 505 "globals.m"
                                if (libs__globals__succeeded)
#line 505 "globals.m"
                                  {
#line 506 "globals.m"
                                    libs__globals__V_61_61 = (MR_Integer) 0;
#line 506 "globals.m"
                                    libs__globals__succeeded = (libs__globals__Patch_49 >= libs__globals__V_61_61);
#line 505 "globals.m"
                                  }
#line 509 "globals.m"
                                if (libs__globals__succeeded)
#line 508 "globals.m"
                                  {
#line 508 "globals.m"
                                    MR_Word libs__globals__V_62_62;
#line 508 "globals.m"
                                    MR_Word libs__globals__V_63_63;
#line 508 "globals.m"
                                    MR_Word libs__globals__V_64_64;

#line 508 "globals.m"
                                    {
#line 508 "globals.m"
                                      libs__globals__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 508 "globals.m"
                                      MR_hl_field(MR_mktag(1), libs__globals__V_62_62, 0) = ((MR_Box) (libs__globals__Major_47));
#line 508 "globals.m"
                                    }
#line 508 "globals.m"
                                    {
#line 508 "globals.m"
                                      libs__globals__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 508 "globals.m"
                                      MR_hl_field(MR_mktag(1), libs__globals__V_63_63, 0) = ((MR_Box) (libs__globals__Minor_48));
#line 508 "globals.m"
                                    }
#line 508 "globals.m"
                                    {
#line 508 "globals.m"
                                      libs__globals__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 508 "globals.m"
                                      MR_hl_field(MR_mktag(1), libs__globals__V_64_64, 0) = ((MR_Box) (libs__globals__Patch_49));
#line 508 "globals.m"
                                    }
#line 508 "globals.m"
                                    {
#line 508 "globals.m"
                                      MR_Word base;
#line 508 "globals.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 508 "globals.m"
                                      *libs__globals__C_CompilerType_4 = base;
#line 508 "globals.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__globals__V_62_62));
#line 508 "globals.m"
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__globals__V_63_63));
#line 508 "globals.m"
                                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (libs__globals__V_64_64));
#line 508 "globals.m"
                                    }
#line 508 "globals.m"
                                    libs__globals__succeeded = MR_TRUE;
#line 508 "globals.m"
                                  }
#line 509 "globals.m"
                                else
#line 510 "globals.m"
                                  {
#line 510 "globals.m"
                                    return libs__globals__succeeded = mercury__builtin__false_0_p_0();
                                  }
#line 509 "globals.m"
                              }
#line 504 "globals.m"
                          }
#line 512 "globals.m"
                        else
#line 513 "globals.m"
                          {
#line 513 "globals.m"
                            return libs__globals__succeeded = mercury__builtin__false_0_p_0();
                          }
#line 512 "globals.m"
                      }
#line 496 "globals.m"
                  }
#line 515 "globals.m"
                else
#line 516 "globals.m"
                  {
#line 516 "globals.m"
                    return libs__globals__succeeded = mercury__builtin__false_0_p_0();
                  }
#line 515 "globals.m"
              }
#line 488 "globals.m"
          }
#line 452 "globals.m"
        else
#line 454 "globals.m"
          {
#line 454 "globals.m"
            MR_String libs__globals__Major_40;
#line 454 "globals.m"
            MR_String libs__globals__Minor_41;
#line 454 "globals.m"
            MR_String libs__globals__Patch_42;
#line 452 "globals.m"
            MR_String libs__globals__V_27_27;
#line 452 "globals.m"
            MR_Word libs__globals__V_28_28;
#line 452 "globals.m"
            MR_Word libs__globals__V_29_29;
#line 452 "globals.m"
            MR_Word libs__globals__V_30_30;
#line 452 "globals.m"
            MR_Word libs__globals__V_31_31;

#line 452 "globals.m"
            libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__Tokens_14)) == (MR_mktag((MR_Integer) 1)));
#line 452 "globals.m"
            if (libs__globals__succeeded)
#line 452 "globals.m"
              {
#line 452 "globals.m"
                libs__globals__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_14, (MR_Integer) 0)));
#line 452 "globals.m"
                libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_14, (MR_Integer) 1)));
#line 452 "globals.m"
                libs__globals__succeeded = (strcmp(libs__globals__V_27_27, (MR_String) "clang") == 0);
#line 452 "globals.m"
                if (libs__globals__succeeded)
#line 452 "globals.m"
                  {
#line 452 "globals.m"
                    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 452 "globals.m"
                    if (libs__globals__succeeded)
#line 452 "globals.m"
                      {
#line 452 "globals.m"
                        libs__globals__Major_40 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_28_28, (MR_Integer) 0)));
#line 452 "globals.m"
                        libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_28_28, (MR_Integer) 1)));
#line 452 "globals.m"
                        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 452 "globals.m"
                        if (libs__globals__succeeded)
#line 452 "globals.m"
                          {
#line 452 "globals.m"
                            libs__globals__Minor_41 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_29_29, (MR_Integer) 0)));
#line 452 "globals.m"
                            libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_29_29, (MR_Integer) 1)));
#line 452 "globals.m"
                            libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 452 "globals.m"
                            if (libs__globals__succeeded)
#line 452 "globals.m"
                              {
#line 452 "globals.m"
                                libs__globals__Patch_42 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_30_30, (MR_Integer) 0)));
#line 452 "globals.m"
                                libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_30_30, (MR_Integer) 1)));
#line 452 "globals.m"
                                libs__globals__succeeded = (libs__globals__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 452 "globals.m"
                              }
#line 452 "globals.m"
                          }
#line 452 "globals.m"
                      }
#line 452 "globals.m"
                  }
#line 452 "globals.m"
              }
#line 454 "globals.m"
            if (libs__globals__succeeded)
#line 528 "globals.m"
              {
#line 528 "globals.m"
                MR_Integer libs__globals__Major_69;
#line 528 "globals.m"
                MR_Integer libs__globals__Minor_70;
#line 528 "globals.m"
                MR_Integer libs__globals__Patch_71;
#line 528 "globals.m"
                MR_Word libs__globals__ClangVersion_72;
#line 528 "globals.m"
                MR_Integer libs__globals__V_73_73;
#line 528 "globals.m"
                MR_Integer libs__globals__V_74_74;
#line 528 "globals.m"
                MR_Integer libs__globals__V_75_75;
#line 528 "globals.m"
                MR_Word libs__globals__V_76_76;

#line 529 "globals.m"
                {
#line 529 "globals.m"
                  libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Major_40, &libs__globals__Major_69);
                }
#line 528 "globals.m"
                if (libs__globals__succeeded)
#line 528 "globals.m"
                  {
#line 530 "globals.m"
                    {
#line 530 "globals.m"
                      libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Minor_41, &libs__globals__Minor_70);
                    }
#line 528 "globals.m"
                    if (libs__globals__succeeded)
#line 528 "globals.m"
                      {
#line 531 "globals.m"
                        {
#line 531 "globals.m"
                          libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Patch_42, &libs__globals__Patch_71);
                        }
#line 528 "globals.m"
                        if (libs__globals__succeeded)
#line 528 "globals.m"
                          {
#line 532 "globals.m"
                            libs__globals__V_73_73 = (MR_Integer) 0;
#line 532 "globals.m"
                            libs__globals__succeeded = (libs__globals__Major_69 >= libs__globals__V_73_73);
#line 528 "globals.m"
                            if (libs__globals__succeeded)
#line 528 "globals.m"
                              {
#line 532 "globals.m"
                                libs__globals__V_74_74 = (MR_Integer) 0;
#line 532 "globals.m"
                                libs__globals__succeeded = (libs__globals__Minor_70 >= libs__globals__V_74_74);
#line 528 "globals.m"
                                if (libs__globals__succeeded)
#line 528 "globals.m"
                                  {
#line 532 "globals.m"
                                    libs__globals__V_75_75 = (MR_Integer) 0;
#line 532 "globals.m"
                                    libs__globals__succeeded = (libs__globals__Patch_71 >= libs__globals__V_75_75);
#line 528 "globals.m"
                                    if (libs__globals__succeeded)
#line 528 "globals.m"
                                      {
#line 533 "globals.m"
                                        {
#line 533 "globals.m"
                                          libs__globals__ClangVersion_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 533 "globals.m"
                                          MR_hl_field(MR_mktag(0), libs__globals__ClangVersion_72, 0) = ((MR_Box) (libs__globals__Major_69));
#line 533 "globals.m"
                                          MR_hl_field(MR_mktag(0), libs__globals__ClangVersion_72, 1) = ((MR_Box) (libs__globals__Minor_70));
#line 533 "globals.m"
                                          MR_hl_field(MR_mktag(0), libs__globals__ClangVersion_72, 2) = ((MR_Box) (libs__globals__Patch_71));
#line 533 "globals.m"
                                        }
#line 534 "globals.m"
                                        {
#line 534 "globals.m"
                                          libs__globals__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 534 "globals.m"
                                          MR_hl_field(MR_mktag(1), libs__globals__V_76_76, 0) = ((MR_Box) (libs__globals__ClangVersion_72));
#line 534 "globals.m"
                                        }
#line 534 "globals.m"
                                        {
#line 534 "globals.m"
                                          MR_Word base;
#line 534 "globals.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 534 "globals.m"
                                          *libs__globals__C_CompilerType_4 = base;
#line 534 "globals.m"
                                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (libs__globals__V_76_76));
#line 534 "globals.m"
                                        }
#line 534 "globals.m"
                                        libs__globals__succeeded = MR_TRUE;
#line 528 "globals.m"
                                      }
#line 528 "globals.m"
                                  }
#line 528 "globals.m"
                              }
#line 528 "globals.m"
                          }
#line 528 "globals.m"
                      }
#line 528 "globals.m"
                  }
#line 528 "globals.m"
              }
#line 454 "globals.m"
            else
#line 456 "globals.m"
              {
#line 456 "globals.m"
                MR_String libs__globals__Version_19;
#line 454 "globals.m"
                MR_String libs__globals__V_32_32;
#line 454 "globals.m"
                MR_Word libs__globals__V_33_33;
#line 454 "globals.m"
                MR_Word libs__globals__V_34_34;

#line 454 "globals.m"
                libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__Tokens_14)) == (MR_mktag((MR_Integer) 1)));
#line 454 "globals.m"
                if (libs__globals__succeeded)
#line 454 "globals.m"
                  {
#line 454 "globals.m"
                    libs__globals__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_14, (MR_Integer) 0)));
#line 454 "globals.m"
                    libs__globals__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_14, (MR_Integer) 1)));
#line 454 "globals.m"
                    libs__globals__succeeded = (strcmp(libs__globals__V_32_32, (MR_String) "cl") == 0);
#line 454 "globals.m"
                    if (libs__globals__succeeded)
#line 454 "globals.m"
                      {
#line 454 "globals.m"
                        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 454 "globals.m"
                        if (libs__globals__succeeded)
#line 454 "globals.m"
                          {
#line 454 "globals.m"
                            libs__globals__Version_19 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_33_33, (MR_Integer) 0)));
#line 454 "globals.m"
                            libs__globals__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_33_33, (MR_Integer) 1)));
#line 454 "globals.m"
                            libs__globals__succeeded = (libs__globals__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 454 "globals.m"
                          }
#line 454 "globals.m"
                      }
#line 454 "globals.m"
                  }
#line 456 "globals.m"
                if (libs__globals__succeeded)
#line 543 "globals.m"
                  {
#line 543 "globals.m"
                    MR_Integer libs__globals__Version_79;
#line 543 "globals.m"
                    MR_Integer libs__globals__V_80_80;
#line 543 "globals.m"
                    MR_Word libs__globals__V_81_81;

#line 544 "globals.m"
                    {
#line 544 "globals.m"
                      libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Version_19, &libs__globals__Version_79);
                    }
#line 543 "globals.m"
                    if (libs__globals__succeeded)
#line 543 "globals.m"
                      {
#line 545 "globals.m"
                        libs__globals__V_80_80 = (MR_Integer) 0;
#line 545 "globals.m"
                        libs__globals__succeeded = (libs__globals__Version_79 > libs__globals__V_80_80);
#line 543 "globals.m"
                        if (libs__globals__succeeded)
#line 543 "globals.m"
                          {
#line 546 "globals.m"
                            {
#line 546 "globals.m"
                              libs__globals__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 546 "globals.m"
                              MR_hl_field(MR_mktag(1), libs__globals__V_81_81, 0) = ((MR_Box) (libs__globals__Version_79));
#line 546 "globals.m"
                            }
#line 546 "globals.m"
                            {
#line 546 "globals.m"
                              MR_Word base;
#line 546 "globals.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 546 "globals.m"
                              *libs__globals__C_CompilerType_4 = base;
#line 546 "globals.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (libs__globals__V_81_81));
#line 546 "globals.m"
                            }
#line 546 "globals.m"
                            libs__globals__succeeded = MR_TRUE;
#line 543 "globals.m"
                          }
#line 543 "globals.m"
                      }
#line 543 "globals.m"
                  }
#line 456 "globals.m"
                else
#line 458 "globals.m"
                  {
#line 458 "globals.m"
                    MR_String libs__globals__Version_39;
#line 456 "globals.m"
                    MR_String libs__globals__V_35_35;
#line 456 "globals.m"
                    MR_Word libs__globals__V_36_36;
#line 456 "globals.m"
                    MR_Word libs__globals__V_37_37;

#line 456 "globals.m"
                    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__Tokens_14)) == (MR_mktag((MR_Integer) 1)));
#line 456 "globals.m"
                    if (libs__globals__succeeded)
#line 456 "globals.m"
                      {
#line 456 "globals.m"
                        libs__globals__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_14, (MR_Integer) 0)));
#line 456 "globals.m"
                        libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_14, (MR_Integer) 1)));
#line 456 "globals.m"
                        libs__globals__succeeded = (strcmp(libs__globals__V_35_35, (MR_String) "msvc") == 0);
#line 456 "globals.m"
                        if (libs__globals__succeeded)
#line 456 "globals.m"
                          {
#line 456 "globals.m"
                            libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 456 "globals.m"
                            if (libs__globals__succeeded)
#line 456 "globals.m"
                              {
#line 456 "globals.m"
                                libs__globals__Version_39 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_36_36, (MR_Integer) 0)));
#line 456 "globals.m"
                                libs__globals__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_36_36, (MR_Integer) 1)));
#line 456 "globals.m"
                                libs__globals__succeeded = (libs__globals__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 456 "globals.m"
                              }
#line 456 "globals.m"
                          }
#line 456 "globals.m"
                      }
#line 458 "globals.m"
                    if (libs__globals__succeeded)
#line 543 "globals.m"
                      {
#line 543 "globals.m"
                        MR_Integer libs__globals__Version_84;
#line 543 "globals.m"
                        MR_Integer libs__globals__V_85_85;
#line 543 "globals.m"
                        MR_Word libs__globals__V_86_86;

#line 544 "globals.m"
                        {
#line 544 "globals.m"
                          libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Version_39, &libs__globals__Version_84);
                        }
#line 543 "globals.m"
                        if (libs__globals__succeeded)
#line 543 "globals.m"
                          {
#line 545 "globals.m"
                            libs__globals__V_85_85 = (MR_Integer) 0;
#line 545 "globals.m"
                            libs__globals__succeeded = (libs__globals__Version_84 > libs__globals__V_85_85);
#line 543 "globals.m"
                            if (libs__globals__succeeded)
#line 543 "globals.m"
                              {
#line 546 "globals.m"
                                {
#line 546 "globals.m"
                                  libs__globals__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 546 "globals.m"
                                  MR_hl_field(MR_mktag(1), libs__globals__V_86_86, 0) = ((MR_Box) (libs__globals__Version_84));
#line 546 "globals.m"
                                }
#line 546 "globals.m"
                                {
#line 546 "globals.m"
                                  MR_Word base;
#line 546 "globals.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 546 "globals.m"
                                  *libs__globals__C_CompilerType_4 = base;
#line 546 "globals.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (libs__globals__V_86_86));
#line 546 "globals.m"
                                }
#line 546 "globals.m"
                                libs__globals__succeeded = MR_TRUE;
#line 543 "globals.m"
                              }
#line 543 "globals.m"
                          }
#line 543 "globals.m"
                      }
#line 458 "globals.m"
                    else
#line 459 "globals.m"
                      {
#line 459 "globals.m"
                        return libs__globals__succeeded = mercury__builtin__false_0_p_0();
                      }
#line 458 "globals.m"
                  }
#line 456 "globals.m"
              }
#line 454 "globals.m"
          }
#line 447 "globals.m"
      }
#line 426 "globals.m"
    return libs__globals__succeeded;
#line 426 "globals.m"
  }
#line 219 "globals.m"
}

#line 217 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_maybe_thread_safe_2_p_0(
#line 217 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 217 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 217 "globals.m"
{
#line 420 "globals.m"
  {
#line 420 "globals.m"
    MR_bool libs__globals__succeeded;

#line 420 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "no") == 0))
#line 421 "globals.m"
      {
#line 421 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 0;
#line 421 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 421 "globals.m"
      }
#line 420 "globals.m"
    else
#line 420 "globals.m"
      if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "yes") == 0))
#line 420 "globals.m"
        {
#line 420 "globals.m"
          *libs__globals__HeadVar__2_2 = (MR_Integer) 1;
#line 420 "globals.m"
          libs__globals__succeeded = MR_TRUE;
#line 420 "globals.m"
        }
#line 420 "globals.m"
      else
#line 420 "globals.m"
        libs__globals__succeeded = MR_FALSE;
#line 420 "globals.m"
    return libs__globals__succeeded;
#line 420 "globals.m"
  }
#line 217 "globals.m"
}

#line 216 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_termination_norm_2_p_0(
#line 216 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 216 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 216 "globals.m"
{
#line 415 "globals.m"
  {
#line 415 "globals.m"
    MR_bool libs__globals__succeeded;

#line 415 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "total") == 0))
#line 416 "globals.m"
      {
#line 416 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 1;
#line 416 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 416 "globals.m"
      }
#line 415 "globals.m"
    else
#line 415 "globals.m"
      if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "simple") == 0))
#line 415 "globals.m"
        {
#line 415 "globals.m"
          *libs__globals__HeadVar__2_2 = (MR_Integer) 0;
#line 415 "globals.m"
          libs__globals__succeeded = MR_TRUE;
#line 415 "globals.m"
        }
#line 415 "globals.m"
      else
#line 415 "globals.m"
        if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "num-data-elems") == 0))
#line 417 "globals.m"
          {
#line 417 "globals.m"
            *libs__globals__HeadVar__2_2 = (MR_Integer) 2;
#line 417 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 417 "globals.m"
          }
#line 415 "globals.m"
        else
#line 415 "globals.m"
          if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "size-data-elems") == 0))
#line 418 "globals.m"
            {
#line 418 "globals.m"
              *libs__globals__HeadVar__2_2 = (MR_Integer) 3;
#line 418 "globals.m"
              libs__globals__succeeded = MR_TRUE;
#line 418 "globals.m"
            }
#line 415 "globals.m"
          else
#line 415 "globals.m"
            libs__globals__succeeded = MR_FALSE;
#line 415 "globals.m"
    return libs__globals__succeeded;
#line 415 "globals.m"
  }
#line 216 "globals.m"
}

#line 215 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_tags_method_2_p_0(
#line 215 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 215 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 215 "globals.m"
{
#line 411 "globals.m"
  {
#line 411 "globals.m"
    MR_bool libs__globals__succeeded;

#line 411 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "low") == 0))
#line 412 "globals.m"
      {
#line 412 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 1;
#line 412 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 412 "globals.m"
      }
#line 411 "globals.m"
    else
#line 411 "globals.m"
      if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "high") == 0))
#line 413 "globals.m"
        {
#line 413 "globals.m"
          *libs__globals__HeadVar__2_2 = (MR_Integer) 2;
#line 413 "globals.m"
          libs__globals__succeeded = MR_TRUE;
#line 413 "globals.m"
        }
#line 411 "globals.m"
      else
#line 411 "globals.m"
        if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "none") == 0))
#line 411 "globals.m"
          {
#line 411 "globals.m"
            *libs__globals__HeadVar__2_2 = (MR_Integer) 0;
#line 411 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 411 "globals.m"
          }
#line 411 "globals.m"
        else
#line 411 "globals.m"
          libs__globals__succeeded = MR_FALSE;
#line 411 "globals.m"
    return libs__globals__succeeded;
#line 411 "globals.m"
  }
#line 215 "globals.m"
}

#line 214 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_gc_method_2_p_0(
#line 214 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 214 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 214 "globals.m"
{
#line 403 "globals.m"
  {
#line 403 "globals.m"
    MR_bool libs__globals__succeeded;

#line 403 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "hgc") == 0))
#line 407 "globals.m"
      {
#line 407 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 4;
#line 407 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 407 "globals.m"
      }
#line 403 "globals.m"
    else
#line 403 "globals.m"
      if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "none") == 0))
#line 403 "globals.m"
        {
#line 403 "globals.m"
          *libs__globals__HeadVar__2_2 = (MR_Integer) 1;
#line 403 "globals.m"
          libs__globals__succeeded = MR_TRUE;
#line 403 "globals.m"
        }
#line 403 "globals.m"
      else
#line 403 "globals.m"
        if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "boehm") == 0))
#line 405 "globals.m"
          {
#line 405 "globals.m"
            *libs__globals__HeadVar__2_2 = (MR_Integer) 2;
#line 405 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 405 "globals.m"
          }
#line 403 "globals.m"
        else
#line 403 "globals.m"
          if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "accurate") == 0))
#line 408 "globals.m"
            {
#line 408 "globals.m"
              *libs__globals__HeadVar__2_2 = (MR_Integer) 5;
#line 408 "globals.m"
              libs__globals__succeeded = MR_TRUE;
#line 408 "globals.m"
            }
#line 403 "globals.m"
          else
#line 403 "globals.m"
            if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "automatic") == 0))
#line 409 "globals.m"
              {
#line 409 "globals.m"
                *libs__globals__HeadVar__2_2 = (MR_Integer) 0;
#line 409 "globals.m"
                libs__globals__succeeded = MR_TRUE;
#line 409 "globals.m"
              }
#line 403 "globals.m"
            else
#line 403 "globals.m"
              if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "boehm_debug") == 0))
#line 406 "globals.m"
                {
#line 406 "globals.m"
                  *libs__globals__HeadVar__2_2 = (MR_Integer) 3;
#line 406 "globals.m"
                  libs__globals__succeeded = MR_TRUE;
#line 406 "globals.m"
                }
#line 403 "globals.m"
              else
#line 403 "globals.m"
                if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "conservative") == 0))
#line 404 "globals.m"
                  {
#line 404 "globals.m"
                    *libs__globals__HeadVar__2_2 = (MR_Integer) 2;
#line 404 "globals.m"
                    libs__globals__succeeded = MR_TRUE;
#line 404 "globals.m"
                  }
#line 403 "globals.m"
                else
#line 403 "globals.m"
                  libs__globals__succeeded = MR_FALSE;
#line 403 "globals.m"
    return libs__globals__succeeded;
#line 403 "globals.m"
  }
#line 214 "globals.m"
}

#line 213 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_foreign_language_2_p_0(
#line 213 "globals.m"
  MR_String libs__globals__String_3,
#line 213 "globals.m"
  MR_Word * libs__globals__ForeignLanguage_4)
#line 213 "globals.m"
{
#line 389 "globals.m"
  {
#line 389 "globals.m"
    MR_bool libs__globals__succeeded;
#line 389 "globals.m"
    MR_String libs__globals__V_5_5;

#line 390 "globals.m"
    {
#line 390 "globals.m"
      libs__globals__V_5_5 = mercury__string__to_lower_1_f_0(libs__globals__String_3);
    }
#line 395 "globals.m"
    if ((strcmp(libs__globals__V_5_5, (MR_String) "c") == 0))
#line 395 "globals.m"
      {
#line 395 "globals.m"
        *libs__globals__ForeignLanguage_4 = (MR_Integer) 0;
#line 395 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 395 "globals.m"
      }
#line 395 "globals.m"
    else
#line 395 "globals.m"
      if ((strcmp(libs__globals__V_5_5, (MR_String) "c#") == 0))
#line 396 "globals.m"
        {
#line 396 "globals.m"
          *libs__globals__ForeignLanguage_4 = (MR_Integer) 1;
#line 396 "globals.m"
          libs__globals__succeeded = MR_TRUE;
#line 396 "globals.m"
        }
#line 395 "globals.m"
      else
#line 395 "globals.m"
        if ((strcmp(libs__globals__V_5_5, (MR_String) "il") == 0))
#line 399 "globals.m"
          {
#line 399 "globals.m"
            *libs__globals__ForeignLanguage_4 = (MR_Integer) 3;
#line 399 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 399 "globals.m"
          }
#line 395 "globals.m"
        else
#line 395 "globals.m"
          if ((strcmp(libs__globals__V_5_5, (MR_String) "java") == 0))
#line 400 "globals.m"
            {
#line 400 "globals.m"
              *libs__globals__ForeignLanguage_4 = (MR_Integer) 2;
#line 400 "globals.m"
              libs__globals__succeeded = MR_TRUE;
#line 400 "globals.m"
            }
#line 395 "globals.m"
          else
#line 395 "globals.m"
            if ((strcmp(libs__globals__V_5_5, (MR_String) "csharp") == 0))
#line 397 "globals.m"
              {
#line 397 "globals.m"
                *libs__globals__ForeignLanguage_4 = (MR_Integer) 1;
#line 397 "globals.m"
                libs__globals__succeeded = MR_TRUE;
#line 397 "globals.m"
              }
#line 395 "globals.m"
            else
#line 395 "globals.m"
              if ((strcmp(libs__globals__V_5_5, (MR_String) "erlang") == 0))
#line 401 "globals.m"
                {
#line 401 "globals.m"
                  *libs__globals__ForeignLanguage_4 = (MR_Integer) 4;
#line 401 "globals.m"
                  libs__globals__succeeded = MR_TRUE;
#line 401 "globals.m"
                }
#line 395 "globals.m"
              else
#line 395 "globals.m"
                if ((strcmp(libs__globals__V_5_5, (MR_String) "c sharp") == 0))
#line 398 "globals.m"
                  {
#line 398 "globals.m"
                    *libs__globals__ForeignLanguage_4 = (MR_Integer) 1;
#line 398 "globals.m"
                    libs__globals__succeeded = MR_TRUE;
#line 398 "globals.m"
                  }
#line 395 "globals.m"
                else
#line 395 "globals.m"
                  libs__globals__succeeded = MR_FALSE;
#line 389 "globals.m"
    return libs__globals__succeeded;
#line 389 "globals.m"
  }
#line 213 "globals.m"
}

#line 212 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_target_2_p_0(
#line 212 "globals.m"
  MR_String libs__globals__String_3,
#line 212 "globals.m"
  MR_Word * libs__globals__Target_4)
#line 212 "globals.m"
{
#line 378 "globals.m"
  {
#line 378 "globals.m"
    MR_bool libs__globals__succeeded;
#line 378 "globals.m"
    MR_String libs__globals__V_5_5;

#line 379 "globals.m"
    {
#line 379 "globals.m"
      libs__globals__V_5_5 = mercury__string__to_lower_1_f_0(libs__globals__String_3);
    }
#line 383 "globals.m"
    if ((strcmp(libs__globals__V_5_5, (MR_String) "c") == 0))
#line 386 "globals.m"
      {
#line 386 "globals.m"
        *libs__globals__Target_4 = (MR_Integer) 0;
#line 386 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 386 "globals.m"
      }
#line 383 "globals.m"
    else
#line 383 "globals.m"
      if ((strcmp(libs__globals__V_5_5, (MR_String) "il") == 0))
#line 385 "globals.m"
        {
#line 385 "globals.m"
          *libs__globals__Target_4 = (MR_Integer) 1;
#line 385 "globals.m"
          libs__globals__succeeded = MR_TRUE;
#line 385 "globals.m"
        }
#line 383 "globals.m"
      else
#line 383 "globals.m"
        if ((strcmp(libs__globals__V_5_5, (MR_String) "java") == 0))
#line 384 "globals.m"
          {
#line 384 "globals.m"
            *libs__globals__Target_4 = (MR_Integer) 3;
#line 384 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 384 "globals.m"
          }
#line 383 "globals.m"
        else
#line 383 "globals.m"
          if ((strcmp(libs__globals__V_5_5, (MR_String) "csharp") == 0))
#line 383 "globals.m"
            {
#line 383 "globals.m"
              *libs__globals__Target_4 = (MR_Integer) 2;
#line 383 "globals.m"
              libs__globals__succeeded = MR_TRUE;
#line 383 "globals.m"
            }
#line 383 "globals.m"
          else
#line 383 "globals.m"
            if ((strcmp(libs__globals__V_5_5, (MR_String) "erlang") == 0))
#line 387 "globals.m"
              {
#line 387 "globals.m"
                *libs__globals__Target_4 = (MR_Integer) 4;
#line 387 "globals.m"
                libs__globals__succeeded = MR_TRUE;
#line 387 "globals.m"
              }
#line 383 "globals.m"
            else
#line 383 "globals.m"
              libs__globals__succeeded = MR_FALSE;
#line 378 "globals.m"
    return libs__globals__succeeded;
#line 378 "globals.m"
  }
#line 212 "globals.m"
}

#line 102 "globals.m"
MR_Word MR_CALL 
libs__globals__gc_is_conservative_1_f_0(
#line 102 "globals.m"
  MR_Word libs__globals__HeadVar__1_1)
#line 102 "globals.m"
{
#line 586 "globals.m"
  {
#line 586 "globals.m"
    MR_bool libs__globals__succeeded;
#line 586 "globals.m"
    MR_Word libs__globals__HeadVar__2_2;

#line 586 "globals.m"
    if ((libs__globals__HeadVar__1_1 == (MR_Integer) 5))
#line 590 "globals.m"
      libs__globals__HeadVar__2_2 = (MR_Integer) 0;
#line 586 "globals.m"
    else
#line 586 "globals.m"
      if ((libs__globals__HeadVar__1_1 == (MR_Integer) 0))
#line 591 "globals.m"
        libs__globals__HeadVar__2_2 = (MR_Integer) 0;
#line 586 "globals.m"
      else
#line 586 "globals.m"
        if ((libs__globals__HeadVar__1_1 == (MR_Integer) 2))
#line 586 "globals.m"
          libs__globals__HeadVar__2_2 = (MR_Integer) 1;
#line 586 "globals.m"
        else
#line 586 "globals.m"
          if ((libs__globals__HeadVar__1_1 == (MR_Integer) 3))
#line 587 "globals.m"
            libs__globals__HeadVar__2_2 = (MR_Integer) 1;
#line 586 "globals.m"
          else
#line 586 "globals.m"
            if ((libs__globals__HeadVar__1_1 == (MR_Integer) 4))
#line 588 "globals.m"
              libs__globals__HeadVar__2_2 = (MR_Integer) 1;
#line 586 "globals.m"
            else
#line 589 "globals.m"
              libs__globals__HeadVar__2_2 = (MR_Integer) 0;
#line 586 "globals.m"
    return libs__globals__HeadVar__2_2;
#line 586 "globals.m"
  }
#line 102 "globals.m"
}

#line 69 "globals.m"
MR_String MR_CALL 
libs__globals__simple_foreign_language_string_1_f_0(
#line 69 "globals.m"
  MR_Word libs__globals__HeadVar__1_1)
#line 69 "globals.m"
{
#line 580 "globals.m"
  {
#line 580 "globals.m"
    MR_bool libs__globals__succeeded;
#line 580 "globals.m"
    MR_String libs__globals__HeadVar__2_2;

#line 580 "globals.m"
    if ((libs__globals__HeadVar__1_1 == (MR_Integer) 0))
#line 580 "globals.m"
      libs__globals__HeadVar__2_2 = (MR_String) "c";
#line 580 "globals.m"
    else
#line 580 "globals.m"
      if ((libs__globals__HeadVar__1_1 == (MR_Integer) 1))
#line 581 "globals.m"
        libs__globals__HeadVar__2_2 = (MR_String) "csharp";
#line 580 "globals.m"
      else
#line 580 "globals.m"
        if ((libs__globals__HeadVar__1_1 == (MR_Integer) 4))
#line 584 "globals.m"
          libs__globals__HeadVar__2_2 = (MR_String) "erlang";
#line 580 "globals.m"
        else
#line 580 "globals.m"
          if ((libs__globals__HeadVar__1_1 == (MR_Integer) 3))
#line 582 "globals.m"
            libs__globals__HeadVar__2_2 = (MR_String) "il";
#line 580 "globals.m"
          else
#line 583 "globals.m"
            libs__globals__HeadVar__2_2 = (MR_String) "java";
#line 580 "globals.m"
    return libs__globals__HeadVar__2_2;
#line 580 "globals.m"
  }
#line 69 "globals.m"
}

#line 64 "globals.m"
MR_String MR_CALL 
libs__globals__foreign_language_string_1_f_0(
#line 64 "globals.m"
  MR_Word libs__globals__HeadVar__1_1)
#line 64 "globals.m"
{
#line 574 "globals.m"
  {
#line 574 "globals.m"
    MR_bool libs__globals__succeeded;
#line 574 "globals.m"
    MR_String libs__globals__HeadVar__2_2;

#line 574 "globals.m"
    if ((libs__globals__HeadVar__1_1 == (MR_Integer) 0))
#line 574 "globals.m"
      libs__globals__HeadVar__2_2 = (MR_String) "C";
#line 574 "globals.m"
    else
#line 574 "globals.m"
      if ((libs__globals__HeadVar__1_1 == (MR_Integer) 1))
#line 575 "globals.m"
        libs__globals__HeadVar__2_2 = (MR_String) "C#";
#line 574 "globals.m"
      else
#line 574 "globals.m"
        if ((libs__globals__HeadVar__1_1 == (MR_Integer) 4))
#line 578 "globals.m"
          libs__globals__HeadVar__2_2 = (MR_String) "Erlang";
#line 574 "globals.m"
        else
#line 574 "globals.m"
          if ((libs__globals__HeadVar__1_1 == (MR_Integer) 3))
#line 576 "globals.m"
            libs__globals__HeadVar__2_2 = (MR_String) "IL";
#line 574 "globals.m"
          else
#line 577 "globals.m"
            libs__globals__HeadVar__2_2 = (MR_String) "Java";
#line 574 "globals.m"
    return libs__globals__HeadVar__2_2;
#line 574 "globals.m"
  }
#line 64 "globals.m"
}

#line 59 "globals.m"
MR_String MR_CALL 
libs__globals__compilation_target_string_1_f_0(
#line 59 "globals.m"
  MR_Word libs__globals__HeadVar__1_1)
#line 59 "globals.m"
{
#line 568 "globals.m"
  {
#line 568 "globals.m"
    MR_bool libs__globals__succeeded;
#line 568 "globals.m"
    MR_String libs__globals__HeadVar__2_2;

#line 568 "globals.m"
    if ((libs__globals__HeadVar__1_1 == (MR_Integer) 0))
#line 568 "globals.m"
      libs__globals__HeadVar__2_2 = (MR_String) "C";
#line 568 "globals.m"
    else
#line 568 "globals.m"
      if ((libs__globals__HeadVar__1_1 == (MR_Integer) 2))
#line 569 "globals.m"
        libs__globals__HeadVar__2_2 = (MR_String) "C#";
#line 568 "globals.m"
      else
#line 568 "globals.m"
        if ((libs__globals__HeadVar__1_1 == (MR_Integer) 4))
#line 572 "globals.m"
          libs__globals__HeadVar__2_2 = (MR_String) "Erlang";
#line 568 "globals.m"
        else
#line 568 "globals.m"
          if ((libs__globals__HeadVar__1_1 == (MR_Integer) 1))
#line 570 "globals.m"
            libs__globals__HeadVar__2_2 = (MR_String) "IL";
#line 568 "globals.m"
          else
#line 571 "globals.m"
            libs__globals__HeadVar__2_2 = (MR_String) "Java";
#line 568 "globals.m"
    return libs__globals__HeadVar__2_2;
#line 568 "globals.m"
  }
#line 59 "globals.m"
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
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_il_version_number_0);
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
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module libs.globals. */
