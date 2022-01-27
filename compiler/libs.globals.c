/*
** Automatically generated from `globals.m'
** by the Mercury compiler,
** version rotd-14.01.1-2014-05-28, configured for x86_64-apple-darwin13.1.0.
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









#line 136 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 139 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_0[3];

#line 142 "libs.globals.c"
static const MR_ConstString libs__globals__libs__globals__field_names_c_compiler_type_0_0[3];

#line 145 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_0;

#line 148 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1libs__globals__type_ctor_info_clang_version_0;

#line 151 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_1[1];

#line 154 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_1;

#line 157 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_2;

#line 160 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_3[1];

#line 163 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_3;

#line 166 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_4;

#line 169 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_0[2];

#line 172 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_1[1];

#line 175 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_2[1];

#line 178 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_3[1];

#line 181 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_c_compiler_type_0[4];

#line 184 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_c_compiler_type_0[5];

#line 187 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_c_compiler_type_0[5];

#line 190 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_clang_version_0_0[3];

#line 193 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_clang_version_0_0;

#line 196 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_clang_version_0_0[1];

#line 199 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_clang_version_0[1];

#line 202 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_clang_version_0[1];

#line 205 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_clang_version_0[1];

#line 208 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_0;

#line 211 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_1;

#line 214 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_2;

#line 217 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_3;

#line 220 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_4;

#line 223 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_5;

#line 226 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_compilation_target_0[6];

#line 229 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_compilation_target_0[6];

#line 232 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_compilation_target_0[6];

#line 235 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_0;

#line 238 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_1;

#line 241 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_2;

#line 244 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_csharp_compiler_type_0[3];

#line 247 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_csharp_compiler_type_0[3];

#line 250 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_csharp_compiler_type_0[3];

#line 253 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_0;

#line 256 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_1;

#line 259 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_2;

#line 262 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_3;

#line 265 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_4;

#line 268 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_env_type_0[5];

#line 271 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_env_type_0[5];

#line 274 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_env_type_0[5];

#line 277 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_file_install_cmd_0_0[2];

#line 280 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_0;

#line 283 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_1;

#line 286 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_file_install_cmd_0_0[1];

#line 289 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_file_install_cmd_0_1[1];

#line 292 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_file_install_cmd_0[2];

#line 295 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_file_install_cmd_0[2];

#line 298 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_file_install_cmd_0[2];

#line 301 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_0;

#line 304 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_1;

#line 307 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_2;

#line 310 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_3;

#line 313 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_4;

#line 316 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_foreign_language_0[5];

#line 319 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_foreign_language_0[5];

#line 322 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_foreign_language_0[5];

#line 325 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_0;

#line 328 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_1;

#line 331 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_2;

#line 334 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_3;

#line 337 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_4;

#line 340 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_5;

#line 343 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_6;

#line 346 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_gc_method_0[7];

#line 349 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_gc_method_0[7];

#line 352 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_gc_method_0[7];

#line 355 "libs.globals.c"
static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0;

#line 358 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0;

#line 361 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1libs__globals__type_ctor_info_il_version_number_0;

#line 364 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1mdbcomp__feedback__type_ctor_info_feedback_info_0;

#line 367 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_globals_0_0[19];

#line 370 "libs.globals.c"
static const MR_ConstString libs__globals__libs__globals__field_names_globals_0_0[19];

#line 373 "libs.globals.c"
static const MR_DuArgLocn libs__globals__libs__globals__field_locns_globals_0_0[19];

#line 376 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_globals_0_0;

#line 379 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_globals_0_0[1];

#line 382 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_globals_0[1];

#line 385 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_globals_0[1];

#line 388 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_globals_0[1];

#line 391 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_il_version_number_0_0[4];

#line 394 "libs.globals.c"
static const MR_ConstString libs__globals__libs__globals__field_names_il_version_number_0_0[4];

#line 397 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_il_version_number_0_0;

#line 400 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_il_version_number_0_0[1];

#line 403 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_il_version_number_0[1];

#line 406 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_il_version_number_0[1];

#line 409 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_il_version_number_0[1];

#line 412 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_0;

#line 415 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_reuse_strategy_0_1[1];

#line 418 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_1;

#line 421 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_0[1];

#line 424 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_1[1];

#line 427 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_reuse_strategy_0[2];

#line 430 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_reuse_strategy_0[2];

#line 433 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_reuse_strategy_0[2];

#line 436 "libs.globals.c"
static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 439 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_0;

#line 442 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_1;

#line 445 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_2;

#line 448 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_ssdb_trace_level_0[3];

#line 451 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_ssdb_trace_level_0[3];

#line 454 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_ssdb_trace_level_0[3];

#line 457 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_0;

#line 460 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_1;

#line 463 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_2;

#line 466 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_tags_method_0[3];

#line 469 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_tags_method_0[3];

#line 472 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_tags_method_0[3];

#line 475 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_0;

#line 478 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_1;

#line 481 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_2;

#line 484 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_3;

#line 487 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_termination_norm_0[4];

#line 490 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_termination_norm_0[4];

#line 493 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_termination_norm_0[4];

#line 496 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____c_compiler_type_0_0_10001(
#line 499 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 501 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 504 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____c_compiler_type_0_0_10001(
#line 507 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 509 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 511 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 514 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____clang_version_0_0_10001(
#line 517 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 519 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 522 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____clang_version_0_0_10001(
#line 525 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 527 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 529 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 532 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____compilation_target_0_0_10001(
#line 535 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 537 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 540 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____compilation_target_0_0_10001(
#line 543 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 545 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 547 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 550 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____csharp_compiler_type_0_0_10001(
#line 553 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 555 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 558 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____csharp_compiler_type_0_0_10001(
#line 561 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 563 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 565 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 568 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____env_type_0_0_10001(
#line 571 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 573 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 576 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____env_type_0_0_10001(
#line 579 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 581 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 583 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 586 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____file_install_cmd_0_0_10001(
#line 589 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 591 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 594 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____file_install_cmd_0_0_10001(
#line 597 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 599 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 601 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 604 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____foreign_language_0_0_10001(
#line 607 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 609 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 612 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____foreign_language_0_0_10001(
#line 615 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 617 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 619 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 622 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____gc_method_0_0_10001(
#line 625 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 627 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 630 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____gc_method_0_0_10001(
#line 633 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 635 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 637 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 640 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____globals_0_0_10001(
#line 643 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 645 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 648 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____globals_0_0_10001(
#line 651 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 653 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 655 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 658 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____il_version_number_0_0_10001(
#line 661 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 663 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 666 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____il_version_number_0_0_10001(
#line 669 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 671 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 673 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 676 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____may_be_thread_safe_0_0_10001(
#line 679 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 681 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 684 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____may_be_thread_safe_0_0_10001(
#line 687 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 689 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 691 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 694 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____reuse_strategy_0_0_10001(
#line 697 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 699 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 702 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____reuse_strategy_0_0_10001(
#line 705 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 707 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 709 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 712 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____source_file_map_0_0_10001(
#line 715 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 717 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 720 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____source_file_map_0_0_10001(
#line 723 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 725 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 727 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 730 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____ssdb_trace_level_0_0_10001(
#line 733 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 735 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 738 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____ssdb_trace_level_0_0_10001(
#line 741 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 743 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 745 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 748 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____tags_method_0_0_10001(
#line 751 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 753 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 756 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____tags_method_0_0_10001(
#line 759 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 761 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 763 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 766 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____termination_norm_0_0_10001(
#line 769 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 771 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 774 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____termination_norm_0_0_10001(
#line 777 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 779 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 781 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 457 "globals.m"
static MR_bool MR_CALL 
libs__globals__IntroducedFrom__pred__convert_c_compiler_type_with_version__457__1_1_p_0(
#line 457 "globals.m"
  MR_Char libs__globals__HeadVar__1_12);

#line 668 "globals.m"
static MR_Word MR_CALL 
libs__globals__IntroducedFrom__func__get_backend_foreign_languages__668__1_1_f_0(
#line 668 "globals.m"
  MR_String libs__globals__HeadVar__1_11);

#line 884 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_maybe_source_file_map_1_p_0(
#line 884 "globals.m"
  MR_Word libs__globals__X_1);

#line 884 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_maybe_source_file_map_1_p_0(
#line 884 "globals.m"
  MR_Word * libs__globals__X_1);

#line 884 "globals.m"
static void MR_CALL 
libs__globals__unlock_maybe_source_file_map_0_p_0(void);

#line 884 "globals.m"
static void MR_CALL 
libs__globals__lock_maybe_source_file_map_0_p_0(void);

#line 884 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_maybe_source_file_map_0_p_0(void);

#line 884 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_maybe_source_file_map_0_p_0(void);

#line 881 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_disable_generate_item_version_numbers_1_p_0(
#line 881 "globals.m"
  MR_Word libs__globals__X_1);

#line 881 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_disable_generate_item_version_numbers_1_p_0(
#line 881 "globals.m"
  MR_Word * libs__globals__X_1);

#line 881 "globals.m"
static void MR_CALL 
libs__globals__unlock_disable_generate_item_version_numbers_0_p_0(void);

#line 881 "globals.m"
static void MR_CALL 
libs__globals__lock_disable_generate_item_version_numbers_0_p_0(void);

#line 881 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_disable_generate_item_version_numbers_0_p_0(void);

#line 881 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0(void);

#line 878 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_disable_smart_recompilation_1_p_0(
#line 878 "globals.m"
  MR_Word libs__globals__X_1);

#line 878 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_disable_smart_recompilation_1_p_0(
#line 878 "globals.m"
  MR_Word * libs__globals__X_1);

#line 878 "globals.m"
static void MR_CALL 
libs__globals__unlock_disable_smart_recompilation_0_p_0(void);

#line 878 "globals.m"
static void MR_CALL 
libs__globals__lock_disable_smart_recompilation_0_p_0(void);

#line 878 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_disable_smart_recompilation_0_p_0(void);

#line 878 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0(void);

#line 875 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_extra_error_info_1_p_0(
#line 875 "globals.m"
  MR_Word libs__globals__X_1);

#line 875 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_extra_error_info_1_p_0(
#line 875 "globals.m"
  MR_Word * libs__globals__X_1);

#line 875 "globals.m"
static void MR_CALL 
libs__globals__unlock_extra_error_info_0_p_0(void);

#line 875 "globals.m"
static void MR_CALL 
libs__globals__lock_extra_error_info_0_p_0(void);

#line 875 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_extra_error_info_0_p_0(void);

#line 875 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_extra_error_info_0_p_0(void);

#line 869 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_maybe_from_ground_term_threshold_1_p_0(
#line 869 "globals.m"
  MR_Word libs__globals__X_1);

#line 869 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_maybe_from_ground_term_threshold_1_p_0(
#line 869 "globals.m"
  MR_Word * libs__globals__X_1);

#line 869 "globals.m"
static void MR_CALL 
libs__globals__unlock_maybe_from_ground_term_threshold_0_p_0(void);

#line 869 "globals.m"
static void MR_CALL 
libs__globals__lock_maybe_from_ground_term_threshold_0_p_0(void);

#line 869 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_maybe_from_ground_term_threshold_0_p_0(void);

#line 869 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0(void);

#line 864 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_solver_auto_init_supported_1_p_0(
#line 864 "globals.m"
  MR_Word libs__globals__X_1);

#line 864 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_solver_auto_init_supported_1_p_0(
#line 864 "globals.m"
  MR_Word * libs__globals__X_1);

#line 864 "globals.m"
static void MR_CALL 
libs__globals__unlock_solver_auto_init_supported_0_p_0(void);

#line 864 "globals.m"
static void MR_CALL 
libs__globals__lock_solver_auto_init_supported_0_p_0(void);

#line 864 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_solver_auto_init_supported_0_p_0(void);

#line 864 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0(void);

#line 665 "globals.m"
static MR_Box MR_CALL 
libs__globals__get_backend_foreign_languages_2_p_0_1(
#line 665 "globals.m"
  MR_Box libs__globals__closure_arg,
#line 665 "globals.m"
  MR_Box libs__globals__wrapper_arg_1);

#line 457 "globals.m"
static MR_bool MR_CALL 
libs__globals__convert_c_compiler_type_2_p_0_1(
#line 457 "globals.m"
  MR_Box libs__globals__closure_arg,
#line 457 "globals.m"
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
#line 864 "globals.m"
MR_Unsigned libs__globals__mutable_variable_solver_auto_init_supported;

#line 869 "globals.m"
MR_Word libs__globals__mutable_variable_maybe_from_ground_term_threshold;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock;
#endif

#line 875 "globals.m"
MR_Word libs__globals__mutable_variable_extra_error_info;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_extra_error_info_lock;
#endif

#line 878 "globals.m"
MR_Word libs__globals__mutable_variable_disable_smart_recompilation;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_disable_smart_recompilation_lock;
#endif

#line 881 "globals.m"
MR_Word libs__globals__mutable_variable_disable_generate_item_version_numbers;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_disable_generate_item_version_numbers_lock;
#endif

#line 884 "globals.m"
MR_Word libs__globals__mutable_variable_maybe_source_file_map;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_maybe_source_file_map_lock;
#endif

#line 884 "globals.m"
void 
libs__globals__user_init_pred_5(void)
#line 884 "globals.m"
{
#line 884 "globals.m"
	libs__globals__initialise_mutable_maybe_source_file_map_0_p_0();
}

#line 881 "globals.m"
void 
libs__globals__user_init_pred_4(void)
#line 881 "globals.m"
{
#line 881 "globals.m"
	libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0();
}

#line 878 "globals.m"
void 
libs__globals__user_init_pred_3(void)
#line 878 "globals.m"
{
#line 878 "globals.m"
	libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0();
}

#line 875 "globals.m"
void 
libs__globals__user_init_pred_2(void)
#line 875 "globals.m"
{
#line 875 "globals.m"
	libs__globals__initialise_mutable_extra_error_info_0_p_0();
}

#line 869 "globals.m"
void 
libs__globals__user_init_pred_1(void)
#line 869 "globals.m"
{
#line 869 "globals.m"
	libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0();
}

#line 864 "globals.m"
void 
libs__globals__user_init_pred_0(void)
#line 864 "globals.m"
{
#line 864 "globals.m"
	libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0();
}


#line 1185 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1193 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_0[3] = {
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

#line 1200 "libs.globals.c"
static const MR_ConstString libs__globals__libs__globals__field_names_c_compiler_type_0_0[3] = {
  (MR_String) "gcc_major_ver",
  (MR_String) "gcc_minor_ver",
  (MR_String) "gcc_patch_level"
};

#line 1207 "libs.globals.c"
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

#line 1222 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1libs__globals__type_ctor_info_clang_version_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &libs__globals__libs__globals__type_ctor_info_clang_version_0
  }
};

#line 1230 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_1[1] = {
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1libs__globals__type_ctor_info_clang_version_0
};

#line 1235 "libs.globals.c"
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

#line 1250 "libs.globals.c"
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

#line 1265 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_3[1] = {
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

#line 1270 "libs.globals.c"
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

#line 1285 "libs.globals.c"
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

#line 1300 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_0[2] = {
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_2,
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_4
};

#line 1306 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_1[1] = {
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_0
};

#line 1311 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_2[1] = {
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_1
};

#line 1316 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_3[1] = {
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_3
};

#line 1321 "libs.globals.c"
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

#line 1345 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_c_compiler_type_0[5] = {
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_3,
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_1,
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_0,
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_2,
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_4
};

#line 1354 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_c_compiler_type_0[5] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 4
};

#line 1363 "libs.globals.c"
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

#line 1384 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_clang_version_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1391 "libs.globals.c"
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

#line 1406 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_clang_version_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_clang_version_0_0
};

#line 1411 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_clang_version_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_clang_version_0_0
  }
};

#line 1420 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_clang_version_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_clang_version_0_0
};

#line 1425 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_clang_version_0[1] = {
  (MR_Integer) 0
};

#line 1430 "libs.globals.c"
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

#line 1451 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_0 = {
  (MR_String) "target_c",
  (MR_Integer) 0
};

#line 1457 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_1 = {
  (MR_String) "target_il",
  (MR_Integer) 1
};

#line 1463 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_2 = {
  (MR_String) "target_csharp",
  (MR_Integer) 2
};

#line 1469 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_3 = {
  (MR_String) "target_java",
  (MR_Integer) 3
};

#line 1475 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_4 = {
  (MR_String) "target_x86_64",
  (MR_Integer) 4
};

#line 1481 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_5 = {
  (MR_String) "target_erlang",
  (MR_Integer) 5
};

#line 1487 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_compilation_target_0[6] = {
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_0,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_1,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_2,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_3,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_4,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_5
};

#line 1497 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_compilation_target_0[6] = {
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_0,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_2,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_5,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_1,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_3,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_4
};

#line 1507 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_compilation_target_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 2
};

#line 1517 "libs.globals.c"
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
  (MR_Integer) 6,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_compilation_target_0
};

#line 1538 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_0 = {
  (MR_String) "csharp_microsoft",
  (MR_Integer) 0
};

#line 1544 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_1 = {
  (MR_String) "csharp_mono",
  (MR_Integer) 1
};

#line 1550 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_2 = {
  (MR_String) "csharp_unknown",
  (MR_Integer) 2
};

#line 1556 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_csharp_compiler_type_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_0,
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_1,
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_2
};

#line 1563 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_csharp_compiler_type_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_0,
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_1,
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_2
};

#line 1570 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_csharp_compiler_type_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1577 "libs.globals.c"
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

#line 1598 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_0 = {
  (MR_String) "env_type_posix",
  (MR_Integer) 0
};

#line 1604 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_1 = {
  (MR_String) "env_type_cygwin",
  (MR_Integer) 1
};

#line 1610 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_2 = {
  (MR_String) "env_type_msys",
  (MR_Integer) 2
};

#line 1616 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_3 = {
  (MR_String) "env_type_win_cmd",
  (MR_Integer) 3
};

#line 1622 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_4 = {
  (MR_String) "env_type_powershell",
  (MR_Integer) 4
};

#line 1628 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_env_type_0[5] = {
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_0,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_1,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_2,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_3,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_4
};

#line 1637 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_env_type_0[5] = {
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_1,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_2,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_0,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_4,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_3
};

#line 1646 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_env_type_0[5] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 3
};

#line 1655 "libs.globals.c"
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

#line 1676 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_file_install_cmd_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1682 "libs.globals.c"
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

#line 1697 "libs.globals.c"
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

#line 1712 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_file_install_cmd_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_1
};

#line 1717 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_file_install_cmd_0_1[1] = {
  &libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_0
};

#line 1722 "libs.globals.c"
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

#line 1736 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_file_install_cmd_0[2] = {
  &libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_1,
  &libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_0
};

#line 1742 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_file_install_cmd_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1748 "libs.globals.c"
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

#line 1769 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_0 = {
  (MR_String) "lang_c",
  (MR_Integer) 0
};

#line 1775 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_1 = {
  (MR_String) "lang_csharp",
  (MR_Integer) 1
};

#line 1781 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_2 = {
  (MR_String) "lang_java",
  (MR_Integer) 2
};

#line 1787 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_3 = {
  (MR_String) "lang_il",
  (MR_Integer) 3
};

#line 1793 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_4 = {
  (MR_String) "lang_erlang",
  (MR_Integer) 4
};

#line 1799 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_foreign_language_0[5] = {
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_0,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_1,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_2,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_3,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_4
};

#line 1808 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_foreign_language_0[5] = {
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_0,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_1,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_4,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_3,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_2
};

#line 1817 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_foreign_language_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 1826 "libs.globals.c"
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

#line 1847 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_0 = {
  (MR_String) "gc_automatic",
  (MR_Integer) 0
};

#line 1853 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_1 = {
  (MR_String) "gc_none",
  (MR_Integer) 1
};

#line 1859 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_2 = {
  (MR_String) "gc_boehm",
  (MR_Integer) 2
};

#line 1865 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_3 = {
  (MR_String) "gc_boehm_debug",
  (MR_Integer) 3
};

#line 1871 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_4 = {
  (MR_String) "gc_hgc",
  (MR_Integer) 4
};

#line 1877 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_5 = {
  (MR_String) "gc_mps",
  (MR_Integer) 5
};

#line 1883 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_6 = {
  (MR_String) "gc_accurate",
  (MR_Integer) 6
};

#line 1889 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_gc_method_0[7] = {
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_0,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_1,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_2,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_3,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_4,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_5,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_6
};

#line 1900 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_gc_method_0[7] = {
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_6,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_0,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_2,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_3,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_4,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_5,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_1
};

#line 1911 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_gc_method_0[7] = {
  (MR_Integer) 1,
  (MR_Integer) 6,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 0
};

#line 1922 "libs.globals.c"
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
  (MR_Integer) 7,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_gc_method_0
};

#line 1943 "libs.globals.c"
static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_TypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 1952 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0
  }
};

#line 1960 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1libs__globals__type_ctor_info_il_version_number_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &libs__globals__libs__globals__type_ctor_info_il_version_number_0
  }
};

#line 1968 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1mdbcomp__feedback__type_ctor_info_feedback_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_0
  }
};

#line 1976 "libs.globals.c"
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

#line 1999 "libs.globals.c"
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

#line 2022 "libs.globals.c"
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

#line 2121 "libs.globals.c"
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

#line 2136 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_globals_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_globals_0_0
};

#line 2141 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_globals_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_globals_0_0
  }
};

#line 2150 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_globals_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_globals_0_0
};

#line 2155 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_globals_0[1] = {
  (MR_Integer) 0
};

#line 2160 "libs.globals.c"
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

#line 2181 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_il_version_number_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2189 "libs.globals.c"
static const MR_ConstString libs__globals__libs__globals__field_names_il_version_number_0_0[4] = {
  (MR_String) "ivn_major",
  (MR_String) "ivn_minor",
  (MR_String) "ivn_build",
  (MR_String) "ivn_revision"
};

#line 2197 "libs.globals.c"
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

#line 2212 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_il_version_number_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_il_version_number_0_0
};

#line 2217 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_il_version_number_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_il_version_number_0_0
  }
};

#line 2226 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_il_version_number_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_il_version_number_0_0
};

#line 2231 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_il_version_number_0[1] = {
  (MR_Integer) 0
};

#line 2236 "libs.globals.c"
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

#line 2257 "libs.globals.c"
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

#line 2278 "libs.globals.c"
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

#line 2293 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_reuse_strategy_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2298 "libs.globals.c"
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

#line 2313 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_0
};

#line 2318 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_1[1] = {
  &libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_1
};

#line 2323 "libs.globals.c"
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

#line 2337 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_reuse_strategy_0[2] = {
  &libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_0,
  &libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_1
};

#line 2343 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_reuse_strategy_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2349 "libs.globals.c"
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

#line 2370 "libs.globals.c"
static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2379 "libs.globals.c"
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

#line 2400 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_0 = {
  (MR_String) "none",
  (MR_Integer) 0
};

#line 2406 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_1 = {
  (MR_String) "shallow",
  (MR_Integer) 1
};

#line 2412 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_2 = {
  (MR_String) "deep",
  (MR_Integer) 2
};

#line 2418 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_ssdb_trace_level_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_0,
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_1,
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_2
};

#line 2425 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_ssdb_trace_level_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_2,
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_0,
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_1
};

#line 2432 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_ssdb_trace_level_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2439 "libs.globals.c"
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

#line 2460 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_0 = {
  (MR_String) "tags_none",
  (MR_Integer) 0
};

#line 2466 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_1 = {
  (MR_String) "tags_low",
  (MR_Integer) 1
};

#line 2472 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_2 = {
  (MR_String) "tags_high",
  (MR_Integer) 2
};

#line 2478 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_tags_method_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_0,
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_1,
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_2
};

#line 2485 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_tags_method_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_2,
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_1,
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_0
};

#line 2492 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_tags_method_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2499 "libs.globals.c"
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

#line 2520 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_0 = {
  (MR_String) "norm_simple",
  (MR_Integer) 0
};

#line 2526 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_1 = {
  (MR_String) "norm_total",
  (MR_Integer) 1
};

#line 2532 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_2 = {
  (MR_String) "norm_num_data_elems",
  (MR_Integer) 2
};

#line 2538 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_3 = {
  (MR_String) "norm_size_data_elems",
  (MR_Integer) 3
};

#line 2544 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_termination_norm_0[4] = {
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_0,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_1,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_2,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_3
};

#line 2552 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_termination_norm_0[4] = {
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_2,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_0,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_3,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_1
};

#line 2560 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_termination_norm_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 2568 "libs.globals.c"
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

#line 2589 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____c_compiler_type_0_0_10001(
#line 2592 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 2594 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 2596 "libs.globals.c"
{
#line 2598 "libs.globals.c"
  {
#line 2600 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 2603 "libs.globals.c"
    {
#line 2605 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____c_compiler_type_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 2608 "libs.globals.c"
    return libs__globals__succeeded;
#line 2610 "libs.globals.c"
  }
#line 2612 "libs.globals.c"
}

#line 2615 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____c_compiler_type_0_0_10001(
#line 2618 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 2620 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 2622 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 2624 "libs.globals.c"
{
#line 2626 "libs.globals.c"
  {
#line 2628 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 2631 "libs.globals.c"
    {
#line 2633 "libs.globals.c"
      libs__globals____Compare____c_compiler_type_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 2636 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 2638 "libs.globals.c"
  }
#line 2640 "libs.globals.c"
}

#line 2643 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____clang_version_0_0_10001(
#line 2646 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 2648 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 2650 "libs.globals.c"
{
#line 2652 "libs.globals.c"
  {
#line 2654 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 2657 "libs.globals.c"
    {
#line 2659 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____clang_version_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 2662 "libs.globals.c"
    return libs__globals__succeeded;
#line 2664 "libs.globals.c"
  }
#line 2666 "libs.globals.c"
}

#line 2669 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____clang_version_0_0_10001(
#line 2672 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 2674 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 2676 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 2678 "libs.globals.c"
{
#line 2680 "libs.globals.c"
  {
#line 2682 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 2685 "libs.globals.c"
    {
#line 2687 "libs.globals.c"
      libs__globals____Compare____clang_version_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 2690 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 2692 "libs.globals.c"
  }
#line 2694 "libs.globals.c"
}

#line 2697 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____compilation_target_0_0_10001(
#line 2700 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 2702 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 2704 "libs.globals.c"
{
#line 2706 "libs.globals.c"
  {
#line 2708 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 2711 "libs.globals.c"
    {
#line 2713 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____compilation_target_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 2716 "libs.globals.c"
    return libs__globals__succeeded;
#line 2718 "libs.globals.c"
  }
#line 2720 "libs.globals.c"
}

#line 2723 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____compilation_target_0_0_10001(
#line 2726 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 2728 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 2730 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 2732 "libs.globals.c"
{
#line 2734 "libs.globals.c"
  {
#line 2736 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 2739 "libs.globals.c"
    {
#line 2741 "libs.globals.c"
      libs__globals____Compare____compilation_target_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 2744 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 2746 "libs.globals.c"
  }
#line 2748 "libs.globals.c"
}

#line 2751 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____csharp_compiler_type_0_0_10001(
#line 2754 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 2756 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 2758 "libs.globals.c"
{
#line 2760 "libs.globals.c"
  {
#line 2762 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 2765 "libs.globals.c"
    {
#line 2767 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____csharp_compiler_type_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 2770 "libs.globals.c"
    return libs__globals__succeeded;
#line 2772 "libs.globals.c"
  }
#line 2774 "libs.globals.c"
}

#line 2777 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____csharp_compiler_type_0_0_10001(
#line 2780 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 2782 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 2784 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 2786 "libs.globals.c"
{
#line 2788 "libs.globals.c"
  {
#line 2790 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 2793 "libs.globals.c"
    {
#line 2795 "libs.globals.c"
      libs__globals____Compare____csharp_compiler_type_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 2798 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 2800 "libs.globals.c"
  }
#line 2802 "libs.globals.c"
}

#line 2805 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____env_type_0_0_10001(
#line 2808 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 2810 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 2812 "libs.globals.c"
{
#line 2814 "libs.globals.c"
  {
#line 2816 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 2819 "libs.globals.c"
    {
#line 2821 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____env_type_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 2824 "libs.globals.c"
    return libs__globals__succeeded;
#line 2826 "libs.globals.c"
  }
#line 2828 "libs.globals.c"
}

#line 2831 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____env_type_0_0_10001(
#line 2834 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 2836 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 2838 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 2840 "libs.globals.c"
{
#line 2842 "libs.globals.c"
  {
#line 2844 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 2847 "libs.globals.c"
    {
#line 2849 "libs.globals.c"
      libs__globals____Compare____env_type_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 2852 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 2854 "libs.globals.c"
  }
#line 2856 "libs.globals.c"
}

#line 2859 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____file_install_cmd_0_0_10001(
#line 2862 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 2864 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 2866 "libs.globals.c"
{
#line 2868 "libs.globals.c"
  {
#line 2870 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 2873 "libs.globals.c"
    {
#line 2875 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____file_install_cmd_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 2878 "libs.globals.c"
    return libs__globals__succeeded;
#line 2880 "libs.globals.c"
  }
#line 2882 "libs.globals.c"
}

#line 2885 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____file_install_cmd_0_0_10001(
#line 2888 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 2890 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 2892 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 2894 "libs.globals.c"
{
#line 2896 "libs.globals.c"
  {
#line 2898 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 2901 "libs.globals.c"
    {
#line 2903 "libs.globals.c"
      libs__globals____Compare____file_install_cmd_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 2906 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 2908 "libs.globals.c"
  }
#line 2910 "libs.globals.c"
}

#line 2913 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____foreign_language_0_0_10001(
#line 2916 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 2918 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 2920 "libs.globals.c"
{
#line 2922 "libs.globals.c"
  {
#line 2924 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 2927 "libs.globals.c"
    {
#line 2929 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____foreign_language_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 2932 "libs.globals.c"
    return libs__globals__succeeded;
#line 2934 "libs.globals.c"
  }
#line 2936 "libs.globals.c"
}

#line 2939 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____foreign_language_0_0_10001(
#line 2942 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 2944 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 2946 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 2948 "libs.globals.c"
{
#line 2950 "libs.globals.c"
  {
#line 2952 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 2955 "libs.globals.c"
    {
#line 2957 "libs.globals.c"
      libs__globals____Compare____foreign_language_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 2960 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 2962 "libs.globals.c"
  }
#line 2964 "libs.globals.c"
}

#line 2967 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____gc_method_0_0_10001(
#line 2970 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 2972 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 2974 "libs.globals.c"
{
#line 2976 "libs.globals.c"
  {
#line 2978 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 2981 "libs.globals.c"
    {
#line 2983 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____gc_method_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 2986 "libs.globals.c"
    return libs__globals__succeeded;
#line 2988 "libs.globals.c"
  }
#line 2990 "libs.globals.c"
}

#line 2993 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____gc_method_0_0_10001(
#line 2996 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 2998 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3000 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3002 "libs.globals.c"
{
#line 3004 "libs.globals.c"
  {
#line 3006 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3009 "libs.globals.c"
    {
#line 3011 "libs.globals.c"
      libs__globals____Compare____gc_method_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3014 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3016 "libs.globals.c"
  }
#line 3018 "libs.globals.c"
}

#line 3021 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____globals_0_0_10001(
#line 3024 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3026 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3028 "libs.globals.c"
{
#line 3030 "libs.globals.c"
  {
#line 3032 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3035 "libs.globals.c"
    {
#line 3037 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____globals_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3040 "libs.globals.c"
    return libs__globals__succeeded;
#line 3042 "libs.globals.c"
  }
#line 3044 "libs.globals.c"
}

#line 3047 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____globals_0_0_10001(
#line 3050 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3052 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3054 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3056 "libs.globals.c"
{
#line 3058 "libs.globals.c"
  {
#line 3060 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3063 "libs.globals.c"
    {
#line 3065 "libs.globals.c"
      libs__globals____Compare____globals_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3068 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3070 "libs.globals.c"
  }
#line 3072 "libs.globals.c"
}

#line 3075 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____il_version_number_0_0_10001(
#line 3078 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3080 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3082 "libs.globals.c"
{
#line 3084 "libs.globals.c"
  {
#line 3086 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3089 "libs.globals.c"
    {
#line 3091 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____il_version_number_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3094 "libs.globals.c"
    return libs__globals__succeeded;
#line 3096 "libs.globals.c"
  }
#line 3098 "libs.globals.c"
}

#line 3101 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____il_version_number_0_0_10001(
#line 3104 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3106 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3108 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3110 "libs.globals.c"
{
#line 3112 "libs.globals.c"
  {
#line 3114 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3117 "libs.globals.c"
    {
#line 3119 "libs.globals.c"
      libs__globals____Compare____il_version_number_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3122 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3124 "libs.globals.c"
  }
#line 3126 "libs.globals.c"
}

#line 3129 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____may_be_thread_safe_0_0_10001(
#line 3132 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3134 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3136 "libs.globals.c"
{
#line 3138 "libs.globals.c"
  {
#line 3140 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3143 "libs.globals.c"
    {
#line 3145 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____may_be_thread_safe_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3148 "libs.globals.c"
    return libs__globals__succeeded;
#line 3150 "libs.globals.c"
  }
#line 3152 "libs.globals.c"
}

#line 3155 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____may_be_thread_safe_0_0_10001(
#line 3158 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3160 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3162 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3164 "libs.globals.c"
{
#line 3166 "libs.globals.c"
  {
#line 3168 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3171 "libs.globals.c"
    {
#line 3173 "libs.globals.c"
      libs__globals____Compare____may_be_thread_safe_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3176 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3178 "libs.globals.c"
  }
#line 3180 "libs.globals.c"
}

#line 3183 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____reuse_strategy_0_0_10001(
#line 3186 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3188 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3190 "libs.globals.c"
{
#line 3192 "libs.globals.c"
  {
#line 3194 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3197 "libs.globals.c"
    {
#line 3199 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____reuse_strategy_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3202 "libs.globals.c"
    return libs__globals__succeeded;
#line 3204 "libs.globals.c"
  }
#line 3206 "libs.globals.c"
}

#line 3209 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____reuse_strategy_0_0_10001(
#line 3212 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3214 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3216 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3218 "libs.globals.c"
{
#line 3220 "libs.globals.c"
  {
#line 3222 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3225 "libs.globals.c"
    {
#line 3227 "libs.globals.c"
      libs__globals____Compare____reuse_strategy_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3230 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3232 "libs.globals.c"
  }
#line 3234 "libs.globals.c"
}

#line 3237 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____source_file_map_0_0_10001(
#line 3240 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3242 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3244 "libs.globals.c"
{
#line 3246 "libs.globals.c"
  {
#line 3248 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3251 "libs.globals.c"
    {
#line 3253 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____source_file_map_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3256 "libs.globals.c"
    return libs__globals__succeeded;
#line 3258 "libs.globals.c"
  }
#line 3260 "libs.globals.c"
}

#line 3263 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____source_file_map_0_0_10001(
#line 3266 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3268 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3270 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3272 "libs.globals.c"
{
#line 3274 "libs.globals.c"
  {
#line 3276 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3279 "libs.globals.c"
    {
#line 3281 "libs.globals.c"
      libs__globals____Compare____source_file_map_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3284 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3286 "libs.globals.c"
  }
#line 3288 "libs.globals.c"
}

#line 3291 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____ssdb_trace_level_0_0_10001(
#line 3294 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3296 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3298 "libs.globals.c"
{
#line 3300 "libs.globals.c"
  {
#line 3302 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3305 "libs.globals.c"
    {
#line 3307 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____ssdb_trace_level_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3310 "libs.globals.c"
    return libs__globals__succeeded;
#line 3312 "libs.globals.c"
  }
#line 3314 "libs.globals.c"
}

#line 3317 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____ssdb_trace_level_0_0_10001(
#line 3320 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3322 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3324 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3326 "libs.globals.c"
{
#line 3328 "libs.globals.c"
  {
#line 3330 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3333 "libs.globals.c"
    {
#line 3335 "libs.globals.c"
      libs__globals____Compare____ssdb_trace_level_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3338 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3340 "libs.globals.c"
  }
#line 3342 "libs.globals.c"
}

#line 3345 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____tags_method_0_0_10001(
#line 3348 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3350 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3352 "libs.globals.c"
{
#line 3354 "libs.globals.c"
  {
#line 3356 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3359 "libs.globals.c"
    {
#line 3361 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____tags_method_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3364 "libs.globals.c"
    return libs__globals__succeeded;
#line 3366 "libs.globals.c"
  }
#line 3368 "libs.globals.c"
}

#line 3371 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____tags_method_0_0_10001(
#line 3374 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3376 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3378 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3380 "libs.globals.c"
{
#line 3382 "libs.globals.c"
  {
#line 3384 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3387 "libs.globals.c"
    {
#line 3389 "libs.globals.c"
      libs__globals____Compare____tags_method_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3392 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3394 "libs.globals.c"
  }
#line 3396 "libs.globals.c"
}

#line 3399 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____termination_norm_0_0_10001(
#line 3402 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3404 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3406 "libs.globals.c"
{
#line 3408 "libs.globals.c"
  {
#line 3410 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3413 "libs.globals.c"
    {
#line 3415 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____termination_norm_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3418 "libs.globals.c"
    return libs__globals__succeeded;
#line 3420 "libs.globals.c"
  }
#line 3422 "libs.globals.c"
}

#line 3425 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____termination_norm_0_0_10001(
#line 3428 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3430 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3432 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3434 "libs.globals.c"
{
#line 3436 "libs.globals.c"
  {
#line 3438 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3441 "libs.globals.c"
    {
#line 3443 "libs.globals.c"
      libs__globals____Compare____termination_norm_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3446 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3448 "libs.globals.c"
  }
#line 3450 "libs.globals.c"
}

#line 457 "globals.m"
static MR_bool MR_CALL 
libs__globals__IntroducedFrom__pred__convert_c_compiler_type_with_version__457__1_1_p_0(
#line 457 "globals.m"
  MR_Char libs__globals__HeadVar__1_12)
#line 457 "globals.m"
{
#line 457 "globals.m"
  {
#line 457 "globals.m"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__1_12 == (MR_Char) 95);

#line 457 "globals.m"
    return libs__globals__succeeded;
#line 457 "globals.m"
  }
#line 457 "globals.m"
}

#line 668 "globals.m"
static MR_Word MR_CALL 
libs__globals__IntroducedFrom__func__get_backend_foreign_languages__668__1_1_f_0(
#line 668 "globals.m"
  MR_String libs__globals__HeadVar__1_11)
#line 668 "globals.m"
{
#line 668 "globals.m"
  {
#line 668 "globals.m"
    MR_bool libs__globals__succeeded;
#line 668 "globals.m"
    MR_Word libs__globals__HeadVar__2_12;
#line 668 "globals.m"
    MR_Word libs__globals__ForeignLang0_8;

#line 666 "globals.m"
    {
#line 666 "globals.m"
      libs__globals__succeeded = libs__globals__convert_foreign_language_2_p_0(libs__globals__HeadVar__1_11, &libs__globals__ForeignLang0_8);
    }
#line 668 "globals.m"
    if (libs__globals__succeeded)
#line 667 "globals.m"
      libs__globals__HeadVar__2_12 = libs__globals__ForeignLang0_8;
#line 668 "globals.m"
    else
#line 669 "globals.m"
      {
#line 669 "globals.m"
        {
#line 669 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.get_backend_foreign_languages\'/2", (MR_String) "invalid foreign_language string");
        }
#line 669 "globals.m"
      }
#line 668 "globals.m"
    return libs__globals__HeadVar__2_12;
#line 668 "globals.m"
  }
#line 668 "globals.m"
}

#line 118 "globals.m"
void MR_CALL 
libs__globals____Compare____termination_norm_0_0(
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
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 118 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 118 "globals.m"
    {
#line 118 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 118 "globals.m"
      return;
    }
#line 118 "globals.m"
  }
#line 118 "globals.m"
}

#line 118 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____termination_norm_0_0(
#line 118 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 118 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 118 "globals.m"
{
#line 3556 "libs.globals.c"
  {
#line 3558 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 3561 "libs.globals.c"
    return libs__globals__succeeded;
#line 3563 "libs.globals.c"
  }
#line 118 "globals.m"
}

#line 113 "globals.m"
void MR_CALL 
libs__globals____Compare____tags_method_0_0(
#line 113 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 113 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 113 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 113 "globals.m"
{
#line 113 "globals.m"
  {
#line 113 "globals.m"
    MR_bool libs__globals__succeeded;
#line 113 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 113 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 113 "globals.m"
    {
#line 113 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 113 "globals.m"
      return;
    }
#line 113 "globals.m"
  }
#line 113 "globals.m"
}

#line 113 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____tags_method_0_0(
#line 113 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 113 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 113 "globals.m"
{
#line 3609 "libs.globals.c"
  {
#line 3611 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 3614 "libs.globals.c"
    return libs__globals__succeeded;
#line 3616 "libs.globals.c"
  }
#line 113 "globals.m"
}

#line 192 "globals.m"
void MR_CALL 
libs__globals____Compare____ssdb_trace_level_0_0(
#line 192 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 192 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 192 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 192 "globals.m"
{
#line 192 "globals.m"
  {
#line 192 "globals.m"
    MR_bool libs__globals__succeeded;
#line 192 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 192 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 192 "globals.m"
    {
#line 192 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 192 "globals.m"
      return;
    }
#line 192 "globals.m"
  }
#line 192 "globals.m"
}

#line 192 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____ssdb_trace_level_0_0(
#line 192 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 192 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 192 "globals.m"
{
#line 3662 "libs.globals.c"
  {
#line 3664 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 3667 "libs.globals.c"
    return libs__globals__succeeded;
#line 3669 "libs.globals.c"
  }
#line 192 "globals.m"
}

#line 219 "globals.m"
void MR_CALL 
libs__globals____Compare____source_file_map_0_0(
#line 219 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 219 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 219 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 219 "globals.m"
{
#line 219 "globals.m"
  {
#line 219 "globals.m"
    MR_bool libs__globals__succeeded;
#line 219 "globals.m"
    MR_Word libs__globals__Cast_HeadVar1_4 = libs__globals__HeadVar__2_2;
#line 219 "globals.m"
    MR_Word libs__globals__Cast_HeadVar2_5 = libs__globals__HeadVar__3_3;

#line 219 "globals.m"
    {
#line 219 "globals.m"
      mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_2[1], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__Cast_HeadVar1_4)), ((MR_Box) (libs__globals__Cast_HeadVar2_5)));
#line 219 "globals.m"
      return;
    }
#line 219 "globals.m"
  }
#line 219 "globals.m"
}

#line 219 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____source_file_map_0_0(
#line 219 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 219 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 219 "globals.m"
{
#line 219 "globals.m"
  {
#line 219 "globals.m"
    MR_bool libs__globals__succeeded;
#line 219 "globals.m"
    MR_Word libs__globals__Cast_HeadVar1_3 = libs__globals__HeadVar__1_1;
#line 219 "globals.m"
    MR_Word libs__globals__Cast_HeadVar2_4 = libs__globals__HeadVar__2_2;

#line 219 "globals.m"
    {
#line 219 "globals.m"
      return libs__globals__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__globals_scalar_common_2[1], ((MR_Box) (libs__globals__Cast_HeadVar1_3)), ((MR_Box) (libs__globals__Cast_HeadVar2_4)));
    }
#line 219 "globals.m"
    return libs__globals__succeeded;
#line 219 "globals.m"
  }
#line 219 "globals.m"
}

#line 161 "globals.m"
void MR_CALL 
libs__globals____Compare____reuse_strategy_0_0(
#line 161 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 161 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 161 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 161 "globals.m"
{
#line 161 "globals.m"
  {
#line 161 "globals.m"
    MR_bool libs__globals__succeeded;
#line 161 "globals.m"
    MR_Integer libs__globals__CastX_8 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 161 "globals.m"
    MR_Integer libs__globals__CastY_9 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 161 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_8 == libs__globals__CastY_9);
#line 161 "globals.m"
    if (libs__globals__succeeded)
#line 3760 "libs.globals.c"
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 161 "globals.m"
    else
#line 161 "globals.m"
      if ((libs__globals__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 161 "globals.m"
        if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 161 "globals.m"
          *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 161 "globals.m"
        else
#line 3772 "libs.globals.c"
          *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 161 "globals.m"
      else
#line 161 "globals.m"
        {
#line 161 "globals.m"
          MR_Integer libs__globals__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));

#line 161 "globals.m"
          if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3783 "libs.globals.c"
            *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 161 "globals.m"
          else
#line 161 "globals.m"
            {
#line 161 "globals.m"
              MR_Integer libs__globals__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 0)));

#line 161 "globals.m"
              {
#line 161 "globals.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__V_11_11, libs__globals__V_7_7);
#line 161 "globals.m"
                return;
              }
#line 161 "globals.m"
            }
#line 161 "globals.m"
        }
#line 161 "globals.m"
  }
#line 161 "globals.m"
}

#line 161 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____reuse_strategy_0_0(
#line 161 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 161 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 161 "globals.m"
{
#line 161 "globals.m"
  {
#line 161 "globals.m"
    MR_bool libs__globals__succeeded;
#line 161 "globals.m"
    MR_Integer libs__globals__CastX_7 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 161 "globals.m"
    MR_Integer libs__globals__CastY_8 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 161 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_7 == libs__globals__CastY_8);
#line 161 "globals.m"
    if (libs__globals__succeeded)
#line 161 "globals.m"
      libs__globals__succeeded = MR_TRUE;
#line 161 "globals.m"
    else
#line 161 "globals.m"
      if ((libs__globals__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 161 "globals.m"
        {
#line 161 "globals.m"
          MR_Integer libs__globals__CastX_3 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 161 "globals.m"
          MR_Integer libs__globals__CastY_4 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 161 "globals.m"
          libs__globals__succeeded = (libs__globals__CastY_4 == libs__globals__CastX_3);
#line 161 "globals.m"
        }
#line 161 "globals.m"
      else
#line 161 "globals.m"
        {
#line 161 "globals.m"
          MR_Integer libs__globals__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 161 "globals.m"
          MR_Integer libs__globals__V_6_6;

#line 161 "globals.m"
          libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 161 "globals.m"
          if (libs__globals__succeeded)
#line 161 "globals.m"
            {
#line 161 "globals.m"
              libs__globals__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 3864 "libs.globals.c"
              libs__globals__succeeded = (libs__globals__V_5_5 == libs__globals__V_6_6);
#line 161 "globals.m"
            }
#line 161 "globals.m"
        }
#line 161 "globals.m"
    return libs__globals__succeeded;
#line 161 "globals.m"
  }
#line 161 "globals.m"
}

#line 124 "globals.m"
void MR_CALL 
libs__globals____Compare____may_be_thread_safe_0_0(
#line 124 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 124 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 124 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 124 "globals.m"
{
#line 124 "globals.m"
  {
#line 124 "globals.m"
    MR_bool libs__globals__succeeded;
#line 124 "globals.m"
    MR_Word libs__globals__Cast_HeadVar1_4 = libs__globals__HeadVar__2_2;
#line 124 "globals.m"
    MR_Word libs__globals__Cast_HeadVar2_5 = libs__globals__HeadVar__3_3;
#line 124 "globals.m"
    MR_Integer libs__globals__V_7_7 = (MR_Integer) libs__globals__Cast_HeadVar1_4;
#line 124 "globals.m"
    MR_Integer libs__globals__V_8_8 = (MR_Integer) libs__globals__Cast_HeadVar2_5;

#line 124 "globals.m"
    {
#line 124 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__V_7_7, libs__globals__V_8_8);
#line 124 "globals.m"
      return;
    }
#line 124 "globals.m"
  }
#line 124 "globals.m"
}

#line 124 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____may_be_thread_safe_0_0(
#line 124 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 124 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 124 "globals.m"
{
#line 124 "globals.m"
  {
#line 124 "globals.m"
    MR_bool libs__globals__succeeded;
#line 124 "globals.m"
    MR_Word libs__globals__Cast_HeadVar1_3 = libs__globals__HeadVar__1_1;
#line 124 "globals.m"
    MR_Word libs__globals__Cast_HeadVar2_4 = libs__globals__HeadVar__2_2;

#line 124 "globals.m"
    libs__globals__succeeded = (libs__globals__Cast_HeadVar1_3 == libs__globals__Cast_HeadVar2_4);
#line 124 "globals.m"
    return libs__globals__succeeded;
#line 124 "globals.m"
  }
#line 124 "globals.m"
}

#line 243 "globals.m"
void MR_CALL 
libs__globals____Compare____il_version_number_0_0(
#line 243 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 243 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 243 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 243 "globals.m"
{
#line 243 "globals.m"
  {
#line 243 "globals.m"
    MR_bool libs__globals__succeeded;
#line 243 "globals.m"
    MR_Integer libs__globals__CastX_15 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 243 "globals.m"
    MR_Integer libs__globals__CastY_16 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 243 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_15 == libs__globals__CastY_16);
#line 243 "globals.m"
    if (libs__globals__succeeded)
#line 3964 "libs.globals.c"
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 243 "globals.m"
    else
#line 243 "globals.m"
      {
#line 243 "globals.m"
        MR_Integer libs__globals__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 243 "globals.m"
        MR_Integer libs__globals__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 243 "globals.m"
        MR_Integer libs__globals__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)));
#line 243 "globals.m"
        MR_Integer libs__globals__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 3)));
#line 243 "globals.m"
        MR_Integer libs__globals__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 0)));
#line 243 "globals.m"
        MR_Integer libs__globals__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)));
#line 243 "globals.m"
        MR_Integer libs__globals__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 2)));
#line 243 "globals.m"
        MR_Integer libs__globals__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 3)));
#line 243 "globals.m"
        MR_Word libs__globals__V_12_12;

#line 243 "globals.m"
        {
#line 243 "globals.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_12_12, libs__globals__V_4_4, libs__globals__V_8_8);
        }
#line 3994 "libs.globals.c"
        libs__globals__succeeded = (libs__globals__V_12_12 == (MR_Integer) 0);
#line 243 "globals.m"
        libs__globals__succeeded = !(libs__globals__succeeded);
#line 243 "globals.m"
        if (libs__globals__succeeded)
#line 243 "globals.m"
          *libs__globals__HeadVar__1_1 = libs__globals__V_12_12;
#line 243 "globals.m"
        else
#line 243 "globals.m"
          {
#line 243 "globals.m"
            MR_Word libs__globals__V_13_13;

#line 243 "globals.m"
            {
#line 243 "globals.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_13_13, libs__globals__V_5_5, libs__globals__V_9_9);
            }
#line 4014 "libs.globals.c"
            libs__globals__succeeded = (libs__globals__V_13_13 == (MR_Integer) 0);
#line 243 "globals.m"
            libs__globals__succeeded = !(libs__globals__succeeded);
#line 243 "globals.m"
            if (libs__globals__succeeded)
#line 243 "globals.m"
              *libs__globals__HeadVar__1_1 = libs__globals__V_13_13;
#line 243 "globals.m"
            else
#line 243 "globals.m"
              {
#line 243 "globals.m"
                MR_Word libs__globals__V_14_14;

#line 243 "globals.m"
                {
#line 243 "globals.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_14_14, libs__globals__V_6_6, libs__globals__V_10_10);
                }
#line 4034 "libs.globals.c"
                libs__globals__succeeded = (libs__globals__V_14_14 == (MR_Integer) 0);
#line 243 "globals.m"
                libs__globals__succeeded = !(libs__globals__succeeded);
#line 243 "globals.m"
                if (libs__globals__succeeded)
#line 243 "globals.m"
                  *libs__globals__HeadVar__1_1 = libs__globals__V_14_14;
#line 243 "globals.m"
                else
#line 243 "globals.m"
                  {
#line 243 "globals.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__V_7_7, libs__globals__V_11_11);
#line 243 "globals.m"
                    return;
                  }
#line 243 "globals.m"
              }
#line 243 "globals.m"
          }
#line 243 "globals.m"
      }
#line 243 "globals.m"
  }
#line 243 "globals.m"
}

#line 243 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____il_version_number_0_0(
#line 243 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 243 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 243 "globals.m"
{
#line 243 "globals.m"
  {
#line 243 "globals.m"
    MR_bool libs__globals__succeeded;
#line 243 "globals.m"
    MR_Integer libs__globals__CastX_11 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 243 "globals.m"
    MR_Integer libs__globals__CastY_12 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 243 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_11 == libs__globals__CastY_12);
#line 243 "globals.m"
    if (libs__globals__succeeded)
#line 243 "globals.m"
      libs__globals__succeeded = MR_TRUE;
#line 243 "globals.m"
    else
#line 243 "globals.m"
      {
#line 243 "globals.m"
        MR_Integer libs__globals__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 243 "globals.m"
        MR_Integer libs__globals__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)));
#line 243 "globals.m"
        MR_Integer libs__globals__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 2)));
#line 243 "globals.m"
        MR_Integer libs__globals__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 3)));
#line 243 "globals.m"
        MR_Integer libs__globals__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 243 "globals.m"
        MR_Integer libs__globals__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 243 "globals.m"
        MR_Integer libs__globals__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)));
#line 243 "globals.m"
        MR_Integer libs__globals__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 3)));

#line 4107 "libs.globals.c"
        libs__globals__succeeded = (libs__globals__V_3_3 == libs__globals__V_7_7);
#line 243 "globals.m"
        if (libs__globals__succeeded)
#line 243 "globals.m"
          {
#line 4113 "libs.globals.c"
            libs__globals__succeeded = (libs__globals__V_4_4 == libs__globals__V_8_8);
#line 243 "globals.m"
            if (libs__globals__succeeded)
#line 243 "globals.m"
              {
#line 4119 "libs.globals.c"
                libs__globals__succeeded = (libs__globals__V_5_5 == libs__globals__V_9_9);
#line 243 "globals.m"
                if (libs__globals__succeeded)
#line 4123 "libs.globals.c"
                  libs__globals__succeeded = (libs__globals__V_6_6 == libs__globals__V_10_10);
#line 243 "globals.m"
              }
#line 243 "globals.m"
          }
#line 243 "globals.m"
      }
#line 243 "globals.m"
    return libs__globals__succeeded;
#line 243 "globals.m"
  }
#line 243 "globals.m"
}

#line 606 "globals.m"
void MR_CALL 
libs__globals____Compare____globals_0_0(
#line 606 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 606 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 606 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 606 "globals.m"
{
#line 606 "globals.m"
  {
#line 606 "globals.m"
    MR_bool libs__globals__succeeded;
#line 606 "globals.m"
    MR_Integer libs__globals__CastX_60 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 606 "globals.m"
    MR_Integer libs__globals__CastY_61 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 606 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_60 == libs__globals__CastY_61);
#line 606 "globals.m"
    if (libs__globals__succeeded)
#line 4162 "libs.globals.c"
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 606 "globals.m"
    else
#line 606 "globals.m"
      {
#line 606 "globals.m"
        MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 606 "globals.m"
        MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 606 "globals.m"
        MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 606 "globals.m"
        MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 606 "globals.m"
        MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 606 "globals.m"
        MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 606 "globals.m"
        MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 606 "globals.m"
        MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)));
#line 606 "globals.m"
        MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 606 "globals.m"
        MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 606 "globals.m"
        MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 4)));
#line 606 "globals.m"
        MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 5)));
#line 606 "globals.m"
        MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 6)));
#line 606 "globals.m"
        MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 7)));
#line 606 "globals.m"
        MR_Word libs__globals__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 8)));
#line 606 "globals.m"
        MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 606 "globals.m"
        MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 606 "globals.m"
        MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 606 "globals.m"
        MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 10)));
#line 606 "globals.m"
        MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 0)));
#line 606 "globals.m"
        MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 606 "globals.m"
        MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 606 "globals.m"
        MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 606 "globals.m"
        MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 606 "globals.m"
        MR_Word libs__globals__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 606 "globals.m"
        MR_Word libs__globals__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 606 "globals.m"
        MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 2)));
#line 606 "globals.m"
        MR_Word libs__globals__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 606 "globals.m"
        MR_Word libs__globals__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 606 "globals.m"
        MR_Word libs__globals__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 4)));
#line 606 "globals.m"
        MR_Word libs__globals__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 5)));
#line 606 "globals.m"
        MR_Word libs__globals__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 6)));
#line 606 "globals.m"
        MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 7)));
#line 606 "globals.m"
        MR_Word libs__globals__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 8)));
#line 606 "globals.m"
        MR_Word libs__globals__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 606 "globals.m"
        MR_Word libs__globals__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 606 "globals.m"
        MR_Word libs__globals__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 606 "globals.m"
        MR_Word libs__globals__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 10)));
#line 606 "globals.m"
        MR_Word libs__globals__V_42_42;

#line 606 "globals.m"
        {
#line 606 "globals.m"
          mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_2[0], &libs__globals__V_42_42, ((MR_Box) (libs__globals__V_4_4)), ((MR_Box) (libs__globals__V_23_23)));
        }
#line 4252 "libs.globals.c"
        libs__globals__succeeded = (libs__globals__V_42_42 == (MR_Integer) 0);
#line 606 "globals.m"
        libs__globals__succeeded = !(libs__globals__succeeded);
#line 606 "globals.m"
        if (libs__globals__succeeded)
#line 606 "globals.m"
          *libs__globals__HeadVar__1_1 = libs__globals__V_42_42;
#line 606 "globals.m"
        else
#line 606 "globals.m"
          {
#line 606 "globals.m"
            MR_Word libs__globals__V_43_43;
#line 606 "globals.m"
            MR_Integer libs__globals__V_81_81 = (MR_Integer) libs__globals__V_5_5;
#line 606 "globals.m"
            MR_Integer libs__globals__V_82_82 = (MR_Integer) libs__globals__V_24_24;

#line 606 "globals.m"
            {
#line 606 "globals.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_43_43, libs__globals__V_81_81, libs__globals__V_82_82);
            }
#line 4276 "libs.globals.c"
            libs__globals__succeeded = (libs__globals__V_43_43 == (MR_Integer) 0);
#line 606 "globals.m"
            libs__globals__succeeded = !(libs__globals__succeeded);
#line 606 "globals.m"
            if (libs__globals__succeeded)
#line 606 "globals.m"
              *libs__globals__HeadVar__1_1 = libs__globals__V_43_43;
#line 606 "globals.m"
            else
#line 606 "globals.m"
              {
#line 606 "globals.m"
                MR_Word libs__globals__V_44_44;
#line 606 "globals.m"
                MR_Integer libs__globals__V_83_83 = (MR_Integer) libs__globals__V_6_6;
#line 606 "globals.m"
                MR_Integer libs__globals__V_84_84 = (MR_Integer) libs__globals__V_25_25;

#line 606 "globals.m"
                {
#line 606 "globals.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_44_44, libs__globals__V_83_83, libs__globals__V_84_84);
                }
#line 4300 "libs.globals.c"
                libs__globals__succeeded = (libs__globals__V_44_44 == (MR_Integer) 0);
#line 606 "globals.m"
                libs__globals__succeeded = !(libs__globals__succeeded);
#line 606 "globals.m"
                if (libs__globals__succeeded)
#line 606 "globals.m"
                  *libs__globals__HeadVar__1_1 = libs__globals__V_44_44;
#line 606 "globals.m"
                else
#line 606 "globals.m"
                  {
#line 606 "globals.m"
                    MR_Word libs__globals__V_45_45;
#line 606 "globals.m"
                    MR_Integer libs__globals__V_85_85 = (MR_Integer) libs__globals__V_7_7;
#line 606 "globals.m"
                    MR_Integer libs__globals__V_86_86 = (MR_Integer) libs__globals__V_26_26;

#line 606 "globals.m"
                    {
#line 606 "globals.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_45_45, libs__globals__V_85_85, libs__globals__V_86_86);
                    }
#line 4324 "libs.globals.c"
                    libs__globals__succeeded = (libs__globals__V_45_45 == (MR_Integer) 0);
#line 606 "globals.m"
                    libs__globals__succeeded = !(libs__globals__succeeded);
#line 606 "globals.m"
                    if (libs__globals__succeeded)
#line 606 "globals.m"
                      *libs__globals__HeadVar__1_1 = libs__globals__V_45_45;
#line 606 "globals.m"
                    else
#line 606 "globals.m"
                      {
#line 606 "globals.m"
                        MR_Word libs__globals__V_46_46;
#line 606 "globals.m"
                        MR_Integer libs__globals__V_87_87 = (MR_Integer) libs__globals__V_8_8;
#line 606 "globals.m"
                        MR_Integer libs__globals__V_88_88 = (MR_Integer) libs__globals__V_27_27;

#line 606 "globals.m"
                        {
#line 606 "globals.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_46_46, libs__globals__V_87_87, libs__globals__V_88_88);
                        }
#line 4348 "libs.globals.c"
                        libs__globals__succeeded = (libs__globals__V_46_46 == (MR_Integer) 0);
#line 606 "globals.m"
                        libs__globals__succeeded = !(libs__globals__succeeded);
#line 606 "globals.m"
                        if (libs__globals__succeeded)
#line 606 "globals.m"
                          *libs__globals__HeadVar__1_1 = libs__globals__V_46_46;
#line 606 "globals.m"
                        else
#line 606 "globals.m"
                          {
#line 606 "globals.m"
                            MR_Word libs__globals__V_47_47;
#line 606 "globals.m"
                            MR_Integer libs__globals__V_89_89 = (MR_Integer) libs__globals__V_9_9;
#line 606 "globals.m"
                            MR_Integer libs__globals__V_90_90 = (MR_Integer) libs__globals__V_28_28;

#line 606 "globals.m"
                            {
#line 606 "globals.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_47_47, libs__globals__V_89_89, libs__globals__V_90_90);
                            }
#line 4372 "libs.globals.c"
                            libs__globals__succeeded = (libs__globals__V_47_47 == (MR_Integer) 0);
#line 606 "globals.m"
                            libs__globals__succeeded = !(libs__globals__succeeded);
#line 606 "globals.m"
                            if (libs__globals__succeeded)
#line 606 "globals.m"
                              *libs__globals__HeadVar__1_1 = libs__globals__V_47_47;
#line 606 "globals.m"
                            else
#line 606 "globals.m"
                              {
#line 606 "globals.m"
                                MR_Word libs__globals__V_48_48;

#line 606 "globals.m"
                                {
#line 606 "globals.m"
                                  libs__trace_params____Compare____trace_level_0_0(&libs__globals__V_48_48, libs__globals__V_10_10, libs__globals__V_29_29);
                                }
#line 4392 "libs.globals.c"
                                libs__globals__succeeded = (libs__globals__V_48_48 == (MR_Integer) 0);
#line 606 "globals.m"
                                libs__globals__succeeded = !(libs__globals__succeeded);
#line 606 "globals.m"
                                if (libs__globals__succeeded)
#line 606 "globals.m"
                                  *libs__globals__HeadVar__1_1 = libs__globals__V_48_48;
#line 606 "globals.m"
                                else
#line 606 "globals.m"
                                  {
#line 606 "globals.m"
                                    MR_Word libs__globals__V_49_49;

#line 606 "globals.m"
                                    {
#line 606 "globals.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_items_0, &libs__globals__V_49_49, ((MR_Box) (libs__globals__V_11_11)), ((MR_Box) (libs__globals__V_30_30)));
                                    }
#line 4412 "libs.globals.c"
                                    libs__globals__succeeded = (libs__globals__V_49_49 == (MR_Integer) 0);
#line 606 "globals.m"
                                    libs__globals__succeeded = !(libs__globals__succeeded);
#line 606 "globals.m"
                                    if (libs__globals__succeeded)
#line 606 "globals.m"
                                      *libs__globals__HeadVar__1_1 = libs__globals__V_49_49;
#line 606 "globals.m"
                                    else
#line 606 "globals.m"
                                      {
#line 606 "globals.m"
                                        MR_Word libs__globals__V_50_50;
#line 606 "globals.m"
                                        MR_Integer libs__globals__V_91_91 = (MR_Integer) libs__globals__V_12_12;
#line 606 "globals.m"
                                        MR_Integer libs__globals__V_92_92 = (MR_Integer) libs__globals__V_31_31;

#line 606 "globals.m"
                                        {
#line 606 "globals.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_50_50, libs__globals__V_91_91, libs__globals__V_92_92);
                                        }
#line 4436 "libs.globals.c"
                                        libs__globals__succeeded = (libs__globals__V_50_50 == (MR_Integer) 0);
#line 606 "globals.m"
                                        libs__globals__succeeded = !(libs__globals__succeeded);
#line 606 "globals.m"
                                        if (libs__globals__succeeded)
#line 606 "globals.m"
                                          *libs__globals__HeadVar__1_1 = libs__globals__V_50_50;
#line 606 "globals.m"
                                        else
#line 606 "globals.m"
                                          {
#line 606 "globals.m"
                                            MR_Word libs__globals__V_51_51;
#line 606 "globals.m"
                                            MR_Integer libs__globals__V_93_93 = (MR_Integer) libs__globals__V_13_13;
#line 606 "globals.m"
                                            MR_Integer libs__globals__V_94_94 = (MR_Integer) libs__globals__V_32_32;

#line 606 "globals.m"
                                            {
#line 606 "globals.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_51_51, libs__globals__V_93_93, libs__globals__V_94_94);
                                            }
#line 4460 "libs.globals.c"
                                            libs__globals__succeeded = (libs__globals__V_51_51 == (MR_Integer) 0);
#line 606 "globals.m"
                                            libs__globals__succeeded = !(libs__globals__succeeded);
#line 606 "globals.m"
                                            if (libs__globals__succeeded)
#line 606 "globals.m"
                                              *libs__globals__HeadVar__1_1 = libs__globals__V_51_51;
#line 606 "globals.m"
                                            else
#line 606 "globals.m"
                                              {
#line 606 "globals.m"
                                                MR_Word libs__globals__V_52_52;

#line 606 "globals.m"
                                                {
#line 606 "globals.m"
                                                  libs__globals____Compare____c_compiler_type_0_0(&libs__globals__V_52_52, libs__globals__V_14_14, libs__globals__V_33_33);
                                                }
#line 4480 "libs.globals.c"
                                                libs__globals__succeeded = (libs__globals__V_52_52 == (MR_Integer) 0);
#line 606 "globals.m"
                                                libs__globals__succeeded = !(libs__globals__succeeded);
#line 606 "globals.m"
                                                if (libs__globals__succeeded)
#line 606 "globals.m"
                                                  *libs__globals__HeadVar__1_1 = libs__globals__V_52_52;
#line 606 "globals.m"
                                                else
#line 606 "globals.m"
                                                  {
#line 606 "globals.m"
                                                    MR_Word libs__globals__V_53_53;
#line 606 "globals.m"
                                                    MR_Integer libs__globals__V_95_95 = (MR_Integer) libs__globals__V_15_15;
#line 606 "globals.m"
                                                    MR_Integer libs__globals__V_96_96 = (MR_Integer) libs__globals__V_34_34;

#line 606 "globals.m"
                                                    {
#line 606 "globals.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_53_53, libs__globals__V_95_95, libs__globals__V_96_96);
                                                    }
#line 4504 "libs.globals.c"
                                                    libs__globals__succeeded = (libs__globals__V_53_53 == (MR_Integer) 0);
#line 606 "globals.m"
                                                    libs__globals__succeeded = !(libs__globals__succeeded);
#line 606 "globals.m"
                                                    if (libs__globals__succeeded)
#line 606 "globals.m"
                                                      *libs__globals__HeadVar__1_1 = libs__globals__V_53_53;
#line 606 "globals.m"
                                                    else
#line 606 "globals.m"
                                                      {
#line 606 "globals.m"
                                                        MR_Word libs__globals__V_54_54;

#line 606 "globals.m"
                                                        {
#line 606 "globals.m"
                                                          libs__globals____Compare____reuse_strategy_0_0(&libs__globals__V_54_54, libs__globals__V_16_16, libs__globals__V_35_35);
                                                        }
#line 4524 "libs.globals.c"
                                                        libs__globals__succeeded = (libs__globals__V_54_54 == (MR_Integer) 0);
#line 606 "globals.m"
                                                        libs__globals__succeeded = !(libs__globals__succeeded);
#line 606 "globals.m"
                                                        if (libs__globals__succeeded)
#line 606 "globals.m"
                                                          *libs__globals__HeadVar__1_1 = libs__globals__V_54_54;
#line 606 "globals.m"
                                                        else
#line 606 "globals.m"
                                                          {
#line 606 "globals.m"
                                                            MR_Word libs__globals__V_55_55;

#line 606 "globals.m"
                                                            {
#line 606 "globals.m"
                                                              mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[2], &libs__globals__V_55_55, ((MR_Box) (libs__globals__V_17_17)), ((MR_Box) (libs__globals__V_36_36)));
                                                            }
#line 4544 "libs.globals.c"
                                                            libs__globals__succeeded = (libs__globals__V_55_55 == (MR_Integer) 0);
#line 606 "globals.m"
                                                            libs__globals__succeeded = !(libs__globals__succeeded);
#line 606 "globals.m"
                                                            if (libs__globals__succeeded)
#line 606 "globals.m"
                                                              *libs__globals__HeadVar__1_1 = libs__globals__V_55_55;
#line 606 "globals.m"
                                                            else
#line 606 "globals.m"
                                                              {
#line 606 "globals.m"
                                                                MR_Word libs__globals__V_56_56;

#line 606 "globals.m"
                                                                {
#line 606 "globals.m"
                                                                  mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[3], &libs__globals__V_56_56, ((MR_Box) (libs__globals__V_18_18)), ((MR_Box) (libs__globals__V_37_37)));
                                                                }
#line 4564 "libs.globals.c"
                                                                libs__globals__succeeded = (libs__globals__V_56_56 == (MR_Integer) 0);
#line 606 "globals.m"
                                                                libs__globals__succeeded = !(libs__globals__succeeded);
#line 606 "globals.m"
                                                                if (libs__globals__succeeded)
#line 606 "globals.m"
                                                                  *libs__globals__HeadVar__1_1 = libs__globals__V_56_56;
#line 606 "globals.m"
                                                                else
#line 606 "globals.m"
                                                                  {
#line 606 "globals.m"
                                                                    MR_Word libs__globals__V_57_57;
#line 606 "globals.m"
                                                                    MR_Integer libs__globals__V_97_97 = (MR_Integer) libs__globals__V_19_19;
#line 606 "globals.m"
                                                                    MR_Integer libs__globals__V_98_98 = (MR_Integer) libs__globals__V_38_38;

#line 606 "globals.m"
                                                                    {
#line 606 "globals.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_57_57, libs__globals__V_97_97, libs__globals__V_98_98);
                                                                    }
#line 4588 "libs.globals.c"
                                                                    libs__globals__succeeded = (libs__globals__V_57_57 == (MR_Integer) 0);
#line 606 "globals.m"
                                                                    libs__globals__succeeded = !(libs__globals__succeeded);
#line 606 "globals.m"
                                                                    if (libs__globals__succeeded)
#line 606 "globals.m"
                                                                      *libs__globals__HeadVar__1_1 = libs__globals__V_57_57;
#line 606 "globals.m"
                                                                    else
#line 606 "globals.m"
                                                                      {
#line 606 "globals.m"
                                                                        MR_Word libs__globals__V_58_58;
#line 606 "globals.m"
                                                                        MR_Integer libs__globals__V_99_99 = (MR_Integer) libs__globals__V_20_20;
#line 606 "globals.m"
                                                                        MR_Integer libs__globals__V_100_100 = (MR_Integer) libs__globals__V_39_39;

#line 606 "globals.m"
                                                                        {
#line 606 "globals.m"
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_58_58, libs__globals__V_99_99, libs__globals__V_100_100);
                                                                        }
#line 4612 "libs.globals.c"
                                                                        libs__globals__succeeded = (libs__globals__V_58_58 == (MR_Integer) 0);
#line 606 "globals.m"
                                                                        libs__globals__succeeded = !(libs__globals__succeeded);
#line 606 "globals.m"
                                                                        if (libs__globals__succeeded)
#line 606 "globals.m"
                                                                          *libs__globals__HeadVar__1_1 = libs__globals__V_58_58;
#line 606 "globals.m"
                                                                        else
#line 606 "globals.m"
                                                                          {
#line 606 "globals.m"
                                                                            MR_Word libs__globals__V_59_59;
#line 606 "globals.m"
                                                                            MR_Integer libs__globals__V_101_101 = (MR_Integer) libs__globals__V_21_21;
#line 606 "globals.m"
                                                                            MR_Integer libs__globals__V_102_102 = (MR_Integer) libs__globals__V_40_40;

#line 606 "globals.m"
                                                                            {
#line 606 "globals.m"
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_59_59, libs__globals__V_101_101, libs__globals__V_102_102);
                                                                            }
#line 4636 "libs.globals.c"
                                                                            libs__globals__succeeded = (libs__globals__V_59_59 == (MR_Integer) 0);
#line 606 "globals.m"
                                                                            libs__globals__succeeded = !(libs__globals__succeeded);
#line 606 "globals.m"
                                                                            if (libs__globals__succeeded)
#line 606 "globals.m"
                                                                              *libs__globals__HeadVar__1_1 = libs__globals__V_59_59;
#line 606 "globals.m"
                                                                            else
#line 606 "globals.m"
                                                                              {
#line 606 "globals.m"
                                                                                libs__globals____Compare____file_install_cmd_0_0(libs__globals__HeadVar__1_1, libs__globals__V_22_22, libs__globals__V_41_41);
#line 606 "globals.m"
                                                                                return;
                                                                              }
#line 606 "globals.m"
                                                                          }
#line 606 "globals.m"
                                                                      }
#line 606 "globals.m"
                                                                  }
#line 606 "globals.m"
                                                              }
#line 606 "globals.m"
                                                          }
#line 606 "globals.m"
                                                      }
#line 606 "globals.m"
                                                  }
#line 606 "globals.m"
                                              }
#line 606 "globals.m"
                                          }
#line 606 "globals.m"
                                      }
#line 606 "globals.m"
                                  }
#line 606 "globals.m"
                              }
#line 606 "globals.m"
                          }
#line 606 "globals.m"
                      }
#line 606 "globals.m"
                  }
#line 606 "globals.m"
              }
#line 606 "globals.m"
          }
#line 606 "globals.m"
      }
#line 606 "globals.m"
  }
#line 606 "globals.m"
}

#line 606 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____globals_0_0(
#line 606 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 606 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 606 "globals.m"
{
#line 606 "globals.m"
  {
#line 606 "globals.m"
    MR_bool libs__globals__succeeded;
#line 606 "globals.m"
    MR_Integer libs__globals__CastX_41 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 606 "globals.m"
    MR_Integer libs__globals__CastY_42 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 606 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_41 == libs__globals__CastY_42);
#line 606 "globals.m"
    if (libs__globals__succeeded)
#line 606 "globals.m"
      libs__globals__succeeded = MR_TRUE;
#line 606 "globals.m"
    else
#line 606 "globals.m"
      {
#line 606 "globals.m"
        MR_Word libs__globals__TypeCtorInfo_45_45;
#line 606 "globals.m"
        MR_Word libs__globals__TypeInfo_46_46;
#line 606 "globals.m"
        MR_Word libs__globals__TypeInfo_47_47;
#line 606 "globals.m"
        MR_Word libs__globals__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 606 "globals.m"
        MR_Word libs__globals__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 606 "globals.m"
        MR_Word libs__globals__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 606 "globals.m"
        MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 606 "globals.m"
        MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 606 "globals.m"
        MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 606 "globals.m"
        MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 606 "globals.m"
        MR_Word libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 2)));
#line 606 "globals.m"
        MR_Word libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 606 "globals.m"
        MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 606 "globals.m"
        MR_Word libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 4)));
#line 606 "globals.m"
        MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 5)));
#line 606 "globals.m"
        MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 6)));
#line 606 "globals.m"
        MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 7)));
#line 606 "globals.m"
        MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 8)));
#line 606 "globals.m"
        MR_Word libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 606 "globals.m"
        MR_Word libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 606 "globals.m"
        MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 606 "globals.m"
        MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 10)));
#line 606 "globals.m"
        MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 606 "globals.m"
        MR_Word libs__globals__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 606 "globals.m"
        MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 606 "globals.m"
        MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 606 "globals.m"
        MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 606 "globals.m"
        MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 606 "globals.m"
        MR_Word libs__globals__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 606 "globals.m"
        MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)));
#line 606 "globals.m"
        MR_Word libs__globals__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 606 "globals.m"
        MR_Word libs__globals__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 606 "globals.m"
        MR_Word libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 4)));
#line 606 "globals.m"
        MR_Word libs__globals__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 5)));
#line 606 "globals.m"
        MR_Word libs__globals__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 6)));
#line 606 "globals.m"
        MR_Word libs__globals__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 7)));
#line 606 "globals.m"
        MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 8)));
#line 606 "globals.m"
        MR_Word libs__globals__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 606 "globals.m"
        MR_Word libs__globals__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 606 "globals.m"
        MR_Word libs__globals__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 606 "globals.m"
        MR_Word libs__globals__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 10)));

#line 4805 "libs.globals.c"
        {
#line 4807 "libs.globals.c"
          libs__globals__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__globals_scalar_common_2[0], ((MR_Box) (libs__globals__V_3_3)), ((MR_Box) (libs__globals__V_22_22)));
        }
#line 606 "globals.m"
        if (libs__globals__succeeded)
#line 606 "globals.m"
          {
#line 4814 "libs.globals.c"
            libs__globals__succeeded = (libs__globals__V_4_4 == libs__globals__V_23_23);
#line 606 "globals.m"
            if (libs__globals__succeeded)
#line 606 "globals.m"
              {
#line 4820 "libs.globals.c"
                libs__globals__succeeded = (libs__globals__V_5_5 == libs__globals__V_24_24);
#line 606 "globals.m"
                if (libs__globals__succeeded)
#line 606 "globals.m"
                  {
#line 4826 "libs.globals.c"
                    libs__globals__succeeded = (libs__globals__V_6_6 == libs__globals__V_25_25);
#line 606 "globals.m"
                    if (libs__globals__succeeded)
#line 606 "globals.m"
                      {
#line 4832 "libs.globals.c"
                        libs__globals__succeeded = (libs__globals__V_7_7 == libs__globals__V_26_26);
#line 606 "globals.m"
                        if (libs__globals__succeeded)
#line 606 "globals.m"
                          {
#line 4838 "libs.globals.c"
                            libs__globals__succeeded = (libs__globals__V_8_8 == libs__globals__V_27_27);
#line 606 "globals.m"
                            if (libs__globals__succeeded)
#line 606 "globals.m"
                              {
#line 4844 "libs.globals.c"
                                {
#line 4846 "libs.globals.c"
                                  libs__globals__succeeded = libs__trace_params____Unify____trace_level_0_0(libs__globals__V_9_9, libs__globals__V_28_28);
                                }
#line 606 "globals.m"
                                if (libs__globals__succeeded)
#line 606 "globals.m"
                                  {
#line 4853 "libs.globals.c"
                                    libs__globals__TypeCtorInfo_45_45 = (MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_items_0;
#line 4855 "libs.globals.c"
                                    {
#line 4857 "libs.globals.c"
                                      libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeCtorInfo_45_45, ((MR_Box) (libs__globals__V_10_10)), ((MR_Box) (libs__globals__V_29_29)));
                                    }
#line 606 "globals.m"
                                    if (libs__globals__succeeded)
#line 606 "globals.m"
                                      {
#line 4864 "libs.globals.c"
                                        libs__globals__succeeded = (libs__globals__V_11_11 == libs__globals__V_30_30);
#line 606 "globals.m"
                                        if (libs__globals__succeeded)
#line 606 "globals.m"
                                          {
#line 4870 "libs.globals.c"
                                            libs__globals__succeeded = (libs__globals__V_12_12 == libs__globals__V_31_31);
#line 606 "globals.m"
                                            if (libs__globals__succeeded)
#line 606 "globals.m"
                                              {
#line 4876 "libs.globals.c"
                                                {
#line 4878 "libs.globals.c"
                                                  libs__globals__succeeded = libs__globals____Unify____c_compiler_type_0_0(libs__globals__V_13_13, libs__globals__V_32_32);
                                                }
#line 606 "globals.m"
                                                if (libs__globals__succeeded)
#line 606 "globals.m"
                                                  {
#line 4885 "libs.globals.c"
                                                    libs__globals__succeeded = (libs__globals__V_14_14 == libs__globals__V_33_33);
#line 606 "globals.m"
                                                    if (libs__globals__succeeded)
#line 606 "globals.m"
                                                      {
#line 4891 "libs.globals.c"
                                                        {
#line 4893 "libs.globals.c"
                                                          libs__globals__succeeded = libs__globals____Unify____reuse_strategy_0_0(libs__globals__V_15_15, libs__globals__V_34_34);
                                                        }
#line 606 "globals.m"
                                                        if (libs__globals__succeeded)
#line 606 "globals.m"
                                                          {
#line 4900 "libs.globals.c"
                                                            libs__globals__TypeInfo_46_46 = (MR_Word) &libs__globals_scalar_common_1[2];
#line 4902 "libs.globals.c"
                                                            {
#line 4904 "libs.globals.c"
                                                              libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_46_46, ((MR_Box) (libs__globals__V_16_16)), ((MR_Box) (libs__globals__V_35_35)));
                                                            }
#line 606 "globals.m"
                                                            if (libs__globals__succeeded)
#line 606 "globals.m"
                                                              {
#line 4911 "libs.globals.c"
                                                                libs__globals__TypeInfo_47_47 = (MR_Word) &libs__globals_scalar_common_1[3];
#line 4913 "libs.globals.c"
                                                                {
#line 4915 "libs.globals.c"
                                                                  libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_47_47, ((MR_Box) (libs__globals__V_17_17)), ((MR_Box) (libs__globals__V_36_36)));
                                                                }
#line 606 "globals.m"
                                                                if (libs__globals__succeeded)
#line 606 "globals.m"
                                                                  {
#line 4922 "libs.globals.c"
                                                                    libs__globals__succeeded = (libs__globals__V_18_18 == libs__globals__V_37_37);
#line 606 "globals.m"
                                                                    if (libs__globals__succeeded)
#line 606 "globals.m"
                                                                      {
#line 4928 "libs.globals.c"
                                                                        libs__globals__succeeded = (libs__globals__V_19_19 == libs__globals__V_38_38);
#line 606 "globals.m"
                                                                        if (libs__globals__succeeded)
#line 606 "globals.m"
                                                                          {
#line 4934 "libs.globals.c"
                                                                            libs__globals__succeeded = (libs__globals__V_20_20 == libs__globals__V_39_39);
#line 606 "globals.m"
                                                                            if (libs__globals__succeeded)
#line 4938 "libs.globals.c"
                                                                              {
#line 4940 "libs.globals.c"
                                                                                return libs__globals__succeeded = libs__globals____Unify____file_install_cmd_0_0(libs__globals__V_21_21, libs__globals__V_40_40);
                                                                              }
#line 606 "globals.m"
                                                                          }
#line 606 "globals.m"
                                                                      }
#line 606 "globals.m"
                                                                  }
#line 606 "globals.m"
                                                              }
#line 606 "globals.m"
                                                          }
#line 606 "globals.m"
                                                      }
#line 606 "globals.m"
                                                  }
#line 606 "globals.m"
                                              }
#line 606 "globals.m"
                                          }
#line 606 "globals.m"
                                      }
#line 606 "globals.m"
                                  }
#line 606 "globals.m"
                              }
#line 606 "globals.m"
                          }
#line 606 "globals.m"
                      }
#line 606 "globals.m"
                  }
#line 606 "globals.m"
              }
#line 606 "globals.m"
          }
#line 606 "globals.m"
      }
#line 606 "globals.m"
    return libs__globals__succeeded;
#line 606 "globals.m"
  }
#line 606 "globals.m"
}

#line 79 "globals.m"
void MR_CALL 
libs__globals____Compare____gc_method_0_0(
#line 79 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 79 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 79 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 79 "globals.m"
{
#line 79 "globals.m"
  {
#line 79 "globals.m"
    MR_bool libs__globals__succeeded;
#line 79 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 79 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 79 "globals.m"
    {
#line 79 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 79 "globals.m"
      return;
    }
#line 79 "globals.m"
  }
#line 79 "globals.m"
}

#line 79 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____gc_method_0_0(
#line 79 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 79 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 79 "globals.m"
{
#line 5027 "libs.globals.c"
  {
#line 5029 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 5032 "libs.globals.c"
    return libs__globals__succeeded;
#line 5034 "libs.globals.c"
  }
#line 79 "globals.m"
}

#line 50 "globals.m"
void MR_CALL 
libs__globals____Compare____foreign_language_0_0(
#line 50 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 50 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 50 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 50 "globals.m"
{
#line 50 "globals.m"
  {
#line 50 "globals.m"
    MR_bool libs__globals__succeeded;
#line 50 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 50 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 50 "globals.m"
    {
#line 50 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 50 "globals.m"
      return;
    }
#line 50 "globals.m"
  }
#line 50 "globals.m"
}

#line 50 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____foreign_language_0_0(
#line 50 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 50 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 50 "globals.m"
{
#line 5080 "libs.globals.c"
  {
#line 5082 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 5085 "libs.globals.c"
    return libs__globals__succeeded;
#line 5087 "libs.globals.c"
  }
#line 50 "globals.m"
}

#line 205 "globals.m"
void MR_CALL 
libs__globals____Compare____file_install_cmd_0_0(
#line 205 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 205 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 205 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 205 "globals.m"
{
#line 205 "globals.m"
  {
#line 205 "globals.m"
    MR_bool libs__globals__succeeded;
#line 205 "globals.m"
    MR_Integer libs__globals__CastX_13 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 205 "globals.m"
    MR_Integer libs__globals__CastY_14 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 205 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_13 == libs__globals__CastY_14);
#line 205 "globals.m"
    if (libs__globals__succeeded)
#line 5116 "libs.globals.c"
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 205 "globals.m"
    else
#line 205 "globals.m"
      if ((libs__globals__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 205 "globals.m"
        if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 205 "globals.m"
          *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 205 "globals.m"
        else
#line 5128 "libs.globals.c"
          *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 205 "globals.m"
      else
#line 205 "globals.m"
        {
#line 205 "globals.m"
          MR_String libs__globals__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 205 "globals.m"
          MR_String libs__globals__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));

#line 205 "globals.m"
          if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5141 "libs.globals.c"
            *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 205 "globals.m"
          else
#line 205 "globals.m"
            {
#line 205 "globals.m"
              MR_String libs__globals__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 0)));
#line 205 "globals.m"
              MR_String libs__globals__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 1)));
#line 205 "globals.m"
              MR_Word libs__globals__V_8_8;

#line 205 "globals.m"
              {
#line 205 "globals.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(&libs__globals__V_8_8, libs__globals__V_18_18, libs__globals__V_6_6);
              }
#line 5159 "libs.globals.c"
              libs__globals__succeeded = (libs__globals__V_8_8 == (MR_Integer) 0);
#line 205 "globals.m"
              libs__globals__succeeded = !(libs__globals__succeeded);
#line 205 "globals.m"
              if (libs__globals__succeeded)
#line 205 "globals.m"
                *libs__globals__HeadVar__1_1 = libs__globals__V_8_8;
#line 205 "globals.m"
              else
#line 205 "globals.m"
                {
#line 205 "globals.m"
                  mercury__private_builtin__builtin_compare_string_3_p_0(libs__globals__HeadVar__1_1, libs__globals__V_17_17, libs__globals__V_7_7);
#line 205 "globals.m"
                  return;
                }
#line 205 "globals.m"
            }
#line 205 "globals.m"
        }
#line 205 "globals.m"
  }
#line 205 "globals.m"
}

#line 205 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____file_install_cmd_0_0(
#line 205 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 205 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 205 "globals.m"
{
#line 205 "globals.m"
  {
#line 205 "globals.m"
    MR_bool libs__globals__succeeded;
#line 205 "globals.m"
    MR_Integer libs__globals__CastX_9 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 205 "globals.m"
    MR_Integer libs__globals__CastY_10 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 205 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_9 == libs__globals__CastY_10);
#line 205 "globals.m"
    if (libs__globals__succeeded)
#line 205 "globals.m"
      libs__globals__succeeded = MR_TRUE;
#line 205 "globals.m"
    else
#line 205 "globals.m"
      if ((libs__globals__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 205 "globals.m"
        {
#line 205 "globals.m"
          MR_Integer libs__globals__CastX_7 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 205 "globals.m"
          MR_Integer libs__globals__CastY_8 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 205 "globals.m"
          libs__globals__succeeded = (libs__globals__CastY_8 == libs__globals__CastX_7);
#line 205 "globals.m"
        }
#line 205 "globals.m"
      else
#line 205 "globals.m"
        {
#line 205 "globals.m"
          MR_String libs__globals__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 205 "globals.m"
          MR_String libs__globals__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 1)));
#line 205 "globals.m"
          MR_String libs__globals__V_5_5;
#line 205 "globals.m"
          MR_String libs__globals__V_6_6;

#line 205 "globals.m"
          libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 205 "globals.m"
          if (libs__globals__succeeded)
#line 205 "globals.m"
            {
#line 205 "globals.m"
              libs__globals__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 205 "globals.m"
              libs__globals__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 5247 "libs.globals.c"
              libs__globals__succeeded = (strcmp(libs__globals__V_3_3, libs__globals__V_5_5) == 0);
#line 205 "globals.m"
              if (libs__globals__succeeded)
#line 5251 "libs.globals.c"
                libs__globals__succeeded = (strcmp(libs__globals__V_4_4, libs__globals__V_6_6) == 0);
#line 205 "globals.m"
            }
#line 205 "globals.m"
        }
#line 205 "globals.m"
    return libs__globals__succeeded;
#line 205 "globals.m"
  }
#line 205 "globals.m"
}

#line 172 "globals.m"
void MR_CALL 
libs__globals____Compare____env_type_0_0(
#line 172 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 172 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 172 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 172 "globals.m"
{
#line 172 "globals.m"
  {
#line 172 "globals.m"
    MR_bool libs__globals__succeeded;
#line 172 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 172 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 172 "globals.m"
    {
#line 172 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 172 "globals.m"
      return;
    }
#line 172 "globals.m"
  }
#line 172 "globals.m"
}

#line 172 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____env_type_0_0(
#line 172 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 172 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 172 "globals.m"
{
#line 5305 "libs.globals.c"
  {
#line 5307 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 5310 "libs.globals.c"
    return libs__globals__succeeded;
#line 5312 "libs.globals.c"
  }
#line 172 "globals.m"
}

#line 147 "globals.m"
void MR_CALL 
libs__globals____Compare____csharp_compiler_type_0_0(
#line 147 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 147 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 147 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 147 "globals.m"
{
#line 147 "globals.m"
  {
#line 147 "globals.m"
    MR_bool libs__globals__succeeded;
#line 147 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 147 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 147 "globals.m"
    {
#line 147 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 147 "globals.m"
      return;
    }
#line 147 "globals.m"
  }
#line 147 "globals.m"
}

#line 147 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____csharp_compiler_type_0_0(
#line 147 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 147 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 147 "globals.m"
{
#line 5358 "libs.globals.c"
  {
#line 5360 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 5363 "libs.globals.c"
    return libs__globals__succeeded;
#line 5365 "libs.globals.c"
  }
#line 147 "globals.m"
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
#line 5411 "libs.globals.c"
  {
#line 5413 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 5416 "libs.globals.c"
    return libs__globals__succeeded;
#line 5418 "libs.globals.c"
  }
#line 40 "globals.m"
}

#line 153 "globals.m"
void MR_CALL 
libs__globals____Compare____clang_version_0_0(
#line 153 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 153 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 153 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 153 "globals.m"
{
#line 153 "globals.m"
  {
#line 153 "globals.m"
    MR_bool libs__globals__succeeded;
#line 153 "globals.m"
    MR_Integer libs__globals__CastX_12 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 153 "globals.m"
    MR_Integer libs__globals__CastY_13 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 153 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_12 == libs__globals__CastY_13);
#line 153 "globals.m"
    if (libs__globals__succeeded)
#line 5447 "libs.globals.c"
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 153 "globals.m"
    else
#line 153 "globals.m"
      {
#line 153 "globals.m"
        MR_Integer libs__globals__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 153 "globals.m"
        MR_Integer libs__globals__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 153 "globals.m"
        MR_Integer libs__globals__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)));
#line 153 "globals.m"
        MR_Integer libs__globals__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 0)));
#line 153 "globals.m"
        MR_Integer libs__globals__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)));
#line 153 "globals.m"
        MR_Integer libs__globals__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 2)));
#line 153 "globals.m"
        MR_Word libs__globals__V_10_10;

#line 153 "globals.m"
        {
#line 153 "globals.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_10_10, libs__globals__V_4_4, libs__globals__V_7_7);
        }
#line 5473 "libs.globals.c"
        libs__globals__succeeded = (libs__globals__V_10_10 == (MR_Integer) 0);
#line 153 "globals.m"
        libs__globals__succeeded = !(libs__globals__succeeded);
#line 153 "globals.m"
        if (libs__globals__succeeded)
#line 153 "globals.m"
          *libs__globals__HeadVar__1_1 = libs__globals__V_10_10;
#line 153 "globals.m"
        else
#line 153 "globals.m"
          {
#line 153 "globals.m"
            MR_Word libs__globals__V_11_11;

#line 153 "globals.m"
            {
#line 153 "globals.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_11_11, libs__globals__V_5_5, libs__globals__V_8_8);
            }
#line 5493 "libs.globals.c"
            libs__globals__succeeded = (libs__globals__V_11_11 == (MR_Integer) 0);
#line 153 "globals.m"
            libs__globals__succeeded = !(libs__globals__succeeded);
#line 153 "globals.m"
            if (libs__globals__succeeded)
#line 153 "globals.m"
              *libs__globals__HeadVar__1_1 = libs__globals__V_11_11;
#line 153 "globals.m"
            else
#line 153 "globals.m"
              {
#line 153 "globals.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__V_6_6, libs__globals__V_9_9);
#line 153 "globals.m"
                return;
              }
#line 153 "globals.m"
          }
#line 153 "globals.m"
      }
#line 153 "globals.m"
  }
#line 153 "globals.m"
}

#line 153 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____clang_version_0_0(
#line 153 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 153 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 153 "globals.m"
{
#line 153 "globals.m"
  {
#line 153 "globals.m"
    MR_bool libs__globals__succeeded;
#line 153 "globals.m"
    MR_Integer libs__globals__CastX_9 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 153 "globals.m"
    MR_Integer libs__globals__CastY_10 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 153 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_9 == libs__globals__CastY_10);
#line 153 "globals.m"
    if (libs__globals__succeeded)
#line 153 "globals.m"
      libs__globals__succeeded = MR_TRUE;
#line 153 "globals.m"
    else
#line 153 "globals.m"
      {
#line 153 "globals.m"
        MR_Integer libs__globals__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 153 "globals.m"
        MR_Integer libs__globals__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)));
#line 153 "globals.m"
        MR_Integer libs__globals__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 2)));
#line 153 "globals.m"
        MR_Integer libs__globals__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 153 "globals.m"
        MR_Integer libs__globals__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 153 "globals.m"
        MR_Integer libs__globals__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)));

#line 5560 "libs.globals.c"
        libs__globals__succeeded = (libs__globals__V_3_3 == libs__globals__V_6_6);
#line 153 "globals.m"
        if (libs__globals__succeeded)
#line 153 "globals.m"
          {
#line 5566 "libs.globals.c"
            libs__globals__succeeded = (libs__globals__V_4_4 == libs__globals__V_7_7);
#line 153 "globals.m"
            if (libs__globals__succeeded)
#line 5570 "libs.globals.c"
              libs__globals__succeeded = (libs__globals__V_5_5 == libs__globals__V_8_8);
#line 153 "globals.m"
          }
#line 153 "globals.m"
      }
#line 153 "globals.m"
    return libs__globals__succeeded;
#line 153 "globals.m"
  }
#line 153 "globals.m"
}

#line 128 "globals.m"
void MR_CALL 
libs__globals____Compare____c_compiler_type_0_0(
#line 128 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 128 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 128 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 128 "globals.m"
{
#line 128 "globals.m"
  {
#line 128 "globals.m"
    MR_bool libs__globals__succeeded;
#line 128 "globals.m"
    MR_Integer libs__globals__CastX_56 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 128 "globals.m"
    MR_Integer libs__globals__CastY_57 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 128 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_56 == libs__globals__CastY_57);
#line 128 "globals.m"
    if (libs__globals__succeeded)
#line 5607 "libs.globals.c"
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 128 "globals.m"
    else
#line 128 "globals.m"
      if ((libs__globals__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 128 "globals.m"
        if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 128 "globals.m"
          *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 128 "globals.m"
        else
#line 128 "globals.m"
          if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 128 "globals.m"
            *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 128 "globals.m"
          else
#line 128 "globals.m"
            if (((MR_tag((MR_Word) libs__globals__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5627 "libs.globals.c"
              *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 128 "globals.m"
            else
#line 128 "globals.m"
              if (((MR_tag((MR_Word) libs__globals__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5633 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 128 "globals.m"
              else
#line 5637 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 128 "globals.m"
      else
#line 128 "globals.m"
        if ((libs__globals__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 128 "globals.m"
          if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 128 "globals.m"
            *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 128 "globals.m"
          else
#line 128 "globals.m"
            if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 128 "globals.m"
              *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 128 "globals.m"
            else
#line 128 "globals.m"
              if (((MR_tag((MR_Word) libs__globals__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5657 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 128 "globals.m"
              else
#line 128 "globals.m"
                if (((MR_tag((MR_Word) libs__globals__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5663 "libs.globals.c"
                  *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 128 "globals.m"
                else
#line 5667 "libs.globals.c"
                  *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 128 "globals.m"
        else
#line 128 "globals.m"
          if (((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 128 "globals.m"
            {
#line 128 "globals.m"
              MR_Word libs__globals__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__HeadVar__2_2, (MR_Integer) 0)));

#line 128 "globals.m"
              if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5680 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 128 "globals.m"
              else
#line 128 "globals.m"
                if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 5686 "libs.globals.c"
                  *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 128 "globals.m"
                else
#line 128 "globals.m"
                  if (((MR_tag((MR_Word) libs__globals__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 128 "globals.m"
                    {
#line 128 "globals.m"
                      MR_Word libs__globals__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__HeadVar__3_3, (MR_Integer) 0)));

#line 128 "globals.m"
                      {
#line 128 "globals.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[0], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__V_63_63)), ((MR_Box) (libs__globals__V_49_49)));
#line 128 "globals.m"
                        return;
                      }
#line 128 "globals.m"
                    }
#line 128 "globals.m"
                  else
#line 128 "globals.m"
                    if (((MR_tag((MR_Word) libs__globals__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5710 "libs.globals.c"
                      *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 128 "globals.m"
                    else
#line 5714 "libs.globals.c"
                      *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 128 "globals.m"
            }
#line 128 "globals.m"
          else
#line 128 "globals.m"
            if (((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 128 "globals.m"
              {
#line 128 "globals.m"
                MR_Word libs__globals__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__globals__HeadVar__2_2, (MR_Integer) 0)));

#line 128 "globals.m"
                if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5729 "libs.globals.c"
                  *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 128 "globals.m"
                else
#line 128 "globals.m"
                  if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 5735 "libs.globals.c"
                    *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 128 "globals.m"
                  else
#line 128 "globals.m"
                    if (((MR_tag((MR_Word) libs__globals__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5741 "libs.globals.c"
                      *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 128 "globals.m"
                    else
#line 128 "globals.m"
                      if (((MR_tag((MR_Word) libs__globals__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 128 "globals.m"
                        {
#line 128 "globals.m"
                          MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__globals__HeadVar__3_3, (MR_Integer) 0)));

#line 128 "globals.m"
                          {
#line 128 "globals.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[1], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__V_64_64)), ((MR_Box) (libs__globals__V_31_31)));
#line 128 "globals.m"
                            return;
                          }
#line 128 "globals.m"
                        }
#line 128 "globals.m"
                      else
#line 5763 "libs.globals.c"
                        *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 128 "globals.m"
              }
#line 128 "globals.m"
            else
#line 128 "globals.m"
              {
#line 128 "globals.m"
                MR_Word libs__globals__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 2)));
#line 128 "globals.m"
                MR_Word libs__globals__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 128 "globals.m"
                MR_Word libs__globals__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));

#line 128 "globals.m"
                if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5780 "libs.globals.c"
                  *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 128 "globals.m"
                else
#line 128 "globals.m"
                  if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 5786 "libs.globals.c"
                    *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 128 "globals.m"
                  else
#line 128 "globals.m"
                    if (((MR_tag((MR_Word) libs__globals__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5792 "libs.globals.c"
                      *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 128 "globals.m"
                    else
#line 128 "globals.m"
                      if (((MR_tag((MR_Word) libs__globals__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5798 "libs.globals.c"
                        *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 128 "globals.m"
                      else
#line 128 "globals.m"
                        {
#line 128 "globals.m"
                          MR_Word libs__globals__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 0)));
#line 128 "globals.m"
                          MR_Word libs__globals__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 1)));
#line 128 "globals.m"
                          MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 2)));
#line 128 "globals.m"
                          MR_Word libs__globals__V_10_10;

#line 128 "globals.m"
                          {
#line 128 "globals.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[0], &libs__globals__V_10_10, ((MR_Box) (libs__globals__V_67_67)), ((MR_Box) (libs__globals__V_7_7)));
                          }
#line 5818 "libs.globals.c"
                          libs__globals__succeeded = (libs__globals__V_10_10 == (MR_Integer) 0);
#line 128 "globals.m"
                          libs__globals__succeeded = !(libs__globals__succeeded);
#line 128 "globals.m"
                          if (libs__globals__succeeded)
#line 128 "globals.m"
                            *libs__globals__HeadVar__1_1 = libs__globals__V_10_10;
#line 128 "globals.m"
                          else
#line 128 "globals.m"
                            {
#line 128 "globals.m"
                              MR_Word libs__globals__V_11_11;

#line 128 "globals.m"
                              {
#line 128 "globals.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[0], &libs__globals__V_11_11, ((MR_Box) (libs__globals__V_66_66)), ((MR_Box) (libs__globals__V_8_8)));
                              }
#line 5838 "libs.globals.c"
                              libs__globals__succeeded = (libs__globals__V_11_11 == (MR_Integer) 0);
#line 128 "globals.m"
                              libs__globals__succeeded = !(libs__globals__succeeded);
#line 128 "globals.m"
                              if (libs__globals__succeeded)
#line 128 "globals.m"
                                *libs__globals__HeadVar__1_1 = libs__globals__V_11_11;
#line 128 "globals.m"
                              else
#line 128 "globals.m"
                                {
#line 128 "globals.m"
                                  {
#line 128 "globals.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[0], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__V_65_65)), ((MR_Box) (libs__globals__V_9_9)));
#line 128 "globals.m"
                                    return;
                                  }
#line 128 "globals.m"
                                }
#line 128 "globals.m"
                            }
#line 128 "globals.m"
                        }
#line 128 "globals.m"
              }
#line 128 "globals.m"
  }
#line 128 "globals.m"
}

#line 128 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____c_compiler_type_0_0(
#line 128 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 128 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 128 "globals.m"
{
#line 128 "globals.m"
  {
#line 128 "globals.m"
    MR_bool libs__globals__succeeded;
#line 128 "globals.m"
    MR_Integer libs__globals__CastX_17 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 128 "globals.m"
    MR_Integer libs__globals__CastY_18 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 128 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_17 == libs__globals__CastY_18);
#line 128 "globals.m"
    if (libs__globals__succeeded)
#line 128 "globals.m"
      libs__globals__succeeded = MR_TRUE;
#line 128 "globals.m"
    else
#line 128 "globals.m"
      if ((libs__globals__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 128 "globals.m"
        {
#line 128 "globals.m"
          MR_Integer libs__globals__CastX_11 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 128 "globals.m"
          MR_Integer libs__globals__CastY_12 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 128 "globals.m"
          libs__globals__succeeded = (libs__globals__CastY_12 == libs__globals__CastX_11);
#line 128 "globals.m"
        }
#line 128 "globals.m"
      else
#line 128 "globals.m"
        if ((libs__globals__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 128 "globals.m"
          {
#line 128 "globals.m"
            MR_Integer libs__globals__CastX_15 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 128 "globals.m"
            MR_Integer libs__globals__CastY_16 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 128 "globals.m"
            libs__globals__succeeded = (libs__globals__CastY_16 == libs__globals__CastX_15);
#line 128 "globals.m"
          }
#line 128 "globals.m"
        else
#line 128 "globals.m"
          if (((MR_tag((MR_Word) libs__globals__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 128 "globals.m"
            {
#line 128 "globals.m"
              MR_Word libs__globals__TypeInfo_19_19;
#line 128 "globals.m"
              MR_Word libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 128 "globals.m"
              MR_Word libs__globals__V_14_14;

#line 128 "globals.m"
              libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 128 "globals.m"
              if (libs__globals__succeeded)
#line 128 "globals.m"
                {
#line 128 "globals.m"
                  libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 5945 "libs.globals.c"
                  libs__globals__TypeInfo_19_19 = (MR_Word) &libs__globals_scalar_common_1[0];
#line 5947 "libs.globals.c"
                  {
#line 5949 "libs.globals.c"
                    return libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_19_19, ((MR_Box) (libs__globals__V_13_13)), ((MR_Box) (libs__globals__V_14_14)));
                  }
#line 128 "globals.m"
                }
#line 128 "globals.m"
            }
#line 128 "globals.m"
          else
#line 128 "globals.m"
            if (((MR_tag((MR_Word) libs__globals__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 128 "globals.m"
              {
#line 128 "globals.m"
                MR_Word libs__globals__TypeInfo_20_20;
#line 128 "globals.m"
                MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 128 "globals.m"
                MR_Word libs__globals__V_10_10;

#line 128 "globals.m"
                libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 128 "globals.m"
                if (libs__globals__succeeded)
#line 128 "globals.m"
                  {
#line 128 "globals.m"
                    libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 5977 "libs.globals.c"
                    libs__globals__TypeInfo_20_20 = (MR_Word) &libs__globals_scalar_common_1[1];
#line 5979 "libs.globals.c"
                    {
#line 5981 "libs.globals.c"
                      return libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_20_20, ((MR_Box) (libs__globals__V_9_9)), ((MR_Box) (libs__globals__V_10_10)));
                    }
#line 128 "globals.m"
                  }
#line 128 "globals.m"
              }
#line 128 "globals.m"
            else
#line 128 "globals.m"
              {
#line 128 "globals.m"
                MR_Word libs__globals__TypeInfo_21_21;
#line 128 "globals.m"
                MR_Word libs__globals__TypeInfo_22_22;
#line 128 "globals.m"
                MR_Word libs__globals__TypeInfo_23_23;
#line 128 "globals.m"
                MR_Word libs__globals__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 128 "globals.m"
                MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 1)));
#line 128 "globals.m"
                MR_Word libs__globals__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 2)));
#line 128 "globals.m"
                MR_Word libs__globals__V_6_6;
#line 128 "globals.m"
                MR_Word libs__globals__V_7_7;
#line 128 "globals.m"
                MR_Word libs__globals__V_8_8;

#line 128 "globals.m"
                libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 128 "globals.m"
                if (libs__globals__succeeded)
#line 128 "globals.m"
                  {
#line 128 "globals.m"
                    libs__globals__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 128 "globals.m"
                    libs__globals__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 128 "globals.m"
                    libs__globals__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 2)));
#line 6023 "libs.globals.c"
                    libs__globals__TypeInfo_21_21 = (MR_Word) &libs__globals_scalar_common_1[0];
#line 6025 "libs.globals.c"
                    {
#line 6027 "libs.globals.c"
                      libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_21_21, ((MR_Box) (libs__globals__V_3_3)), ((MR_Box) (libs__globals__V_6_6)));
                    }
#line 128 "globals.m"
                    if (libs__globals__succeeded)
#line 128 "globals.m"
                      {
#line 6034 "libs.globals.c"
                        libs__globals__TypeInfo_22_22 = (MR_Word) &libs__globals_scalar_common_1[0];
#line 6036 "libs.globals.c"
                        {
#line 6038 "libs.globals.c"
                          libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_22_22, ((MR_Box) (libs__globals__V_4_4)), ((MR_Box) (libs__globals__V_7_7)));
                        }
#line 128 "globals.m"
                        if (libs__globals__succeeded)
#line 128 "globals.m"
                          {
#line 6045 "libs.globals.c"
                            libs__globals__TypeInfo_23_23 = (MR_Word) &libs__globals_scalar_common_1[0];
#line 6047 "libs.globals.c"
                            {
#line 6049 "libs.globals.c"
                              return libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_23_23, ((MR_Box) (libs__globals__V_5_5)), ((MR_Box) (libs__globals__V_8_8)));
                            }
#line 128 "globals.m"
                          }
#line 128 "globals.m"
                      }
#line 128 "globals.m"
                  }
#line 128 "globals.m"
              }
#line 128 "globals.m"
    return libs__globals__succeeded;
#line 128 "globals.m"
  }
#line 128 "globals.m"
}

#line 884 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_maybe_source_file_map_1_p_0(
#line 884 "globals.m"
  MR_Word libs__globals__X_1)
#line 884 "globals.m"
{
#line 884 "globals.m"
  {
#line 884 "globals.m"
    MR_bool libs__globals__succeeded;

#line 884 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_set_maybe_source_file_map_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 884 "globals.m"
libs__globals__mutable_variable_maybe_source_file_map = X;

#line 6090 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 884 "globals.m"
}
#line 884 "globals.m"
  }
#line 884 "globals.m"
}

#line 884 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_maybe_source_file_map_1_p_0(
#line 884 "globals.m"
  MR_Word * libs__globals__X_1)
#line 884 "globals.m"
{
#line 884 "globals.m"
  {
#line 884 "globals.m"
    MR_bool libs__globals__succeeded;

#line 884 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_get_maybe_source_file_map_1_p_0

	MR_Word X;

		{
#line 884 "globals.m"
X = libs__globals__mutable_variable_maybe_source_file_map;

#line 6123 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
#line 884 "globals.m"
}
#line 884 "globals.m"
  }
#line 884 "globals.m"
}

#line 884 "globals.m"
static void MR_CALL 
libs__globals__unlock_maybe_source_file_map_0_p_0(void)
#line 884 "globals.m"
{
#line 884 "globals.m"
  {
#line 884 "globals.m"
    MR_bool libs__globals__succeeded;

#line 884 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_maybe_source_file_map_0_p_0


		{
#line 884 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 6157 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 884 "globals.m"
}
#line 884 "globals.m"
  }
#line 884 "globals.m"
}

#line 884 "globals.m"
static void MR_CALL 
libs__globals__lock_maybe_source_file_map_0_p_0(void)
#line 884 "globals.m"
{
#line 884 "globals.m"
  {
#line 884 "globals.m"
    MR_bool libs__globals__succeeded;

#line 884 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_maybe_source_file_map_0_p_0


		{
#line 884 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 6190 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 884 "globals.m"
}
#line 884 "globals.m"
  }
#line 884 "globals.m"
}

#line 884 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_maybe_source_file_map_0_p_0(void)
#line 884 "globals.m"
{
#line 884 "globals.m"
  {
#line 884 "globals.m"
    MR_bool libs__globals__succeeded;

#line 884 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_maybe_source_file_map_0_p_0


		{
#line 884 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_maybe_source_file_map_lock, MR_MUTEX_ATTR);
#endif

#line 6222 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 884 "globals.m"
}
#line 884 "globals.m"
  }
#line 884 "globals.m"
}

#line 884 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_maybe_source_file_map_0_p_0(void)
#line 884 "globals.m"
{
#line 884 "globals.m"
  {
#line 884 "globals.m"
    MR_bool libs__globals__succeeded;

#line 884 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_source_file_map_0_p_0


		{
#line 884 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_maybe_source_file_map_lock, MR_MUTEX_ATTR);
#endif

#line 6254 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 884 "globals.m"
}
#line 884 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_source_file_map_0_p_0


		{
#line 884 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 6272 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 884 "globals.m"
}
#line 884 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_source_file_map_0_p_0

	MR_Word X;

	X =  (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) ;
		{
#line 884 "globals.m"
libs__globals__mutable_variable_maybe_source_file_map = X;

#line 6289 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 884 "globals.m"
}
#line 884 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_source_file_map_0_p_0


		{
#line 884 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 6307 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 884 "globals.m"
}
#line 884 "globals.m"
  }
#line 884 "globals.m"
}

#line 881 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_disable_generate_item_version_numbers_1_p_0(
#line 881 "globals.m"
  MR_Word libs__globals__X_1)
#line 881 "globals.m"
{
#line 881 "globals.m"
  {
#line 881 "globals.m"
    MR_bool libs__globals__succeeded;

#line 881 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_set_disable_generate_item_version_numbers_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 881 "globals.m"
libs__globals__mutable_variable_disable_generate_item_version_numbers = X;

#line 6341 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 881 "globals.m"
}
#line 881 "globals.m"
  }
#line 881 "globals.m"
}

#line 881 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_disable_generate_item_version_numbers_1_p_0(
#line 881 "globals.m"
  MR_Word * libs__globals__X_1)
#line 881 "globals.m"
{
#line 881 "globals.m"
  {
#line 881 "globals.m"
    MR_bool libs__globals__succeeded;

#line 881 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_get_disable_generate_item_version_numbers_1_p_0

	MR_Word X;

		{
#line 881 "globals.m"
X = libs__globals__mutable_variable_disable_generate_item_version_numbers;

#line 6374 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
#line 881 "globals.m"
}
#line 881 "globals.m"
  }
#line 881 "globals.m"
}

#line 881 "globals.m"
static void MR_CALL 
libs__globals__unlock_disable_generate_item_version_numbers_0_p_0(void)
#line 881 "globals.m"
{
#line 881 "globals.m"
  {
#line 881 "globals.m"
    MR_bool libs__globals__succeeded;

#line 881 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_disable_generate_item_version_numbers_0_p_0


		{
#line 881 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 6408 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 881 "globals.m"
}
#line 881 "globals.m"
  }
#line 881 "globals.m"
}

#line 881 "globals.m"
static void MR_CALL 
libs__globals__lock_disable_generate_item_version_numbers_0_p_0(void)
#line 881 "globals.m"
{
#line 881 "globals.m"
  {
#line 881 "globals.m"
    MR_bool libs__globals__succeeded;

#line 881 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_disable_generate_item_version_numbers_0_p_0


		{
#line 881 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 6441 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 881 "globals.m"
}
#line 881 "globals.m"
  }
#line 881 "globals.m"
}

#line 881 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_disable_generate_item_version_numbers_0_p_0(void)
#line 881 "globals.m"
{
#line 881 "globals.m"
  {
#line 881 "globals.m"
    MR_bool libs__globals__succeeded;

#line 881 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_disable_generate_item_version_numbers_0_p_0


		{
#line 881 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock, MR_MUTEX_ATTR);
#endif

#line 6473 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 881 "globals.m"
}
#line 881 "globals.m"
  }
#line 881 "globals.m"
}

#line 881 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0(void)
#line 881 "globals.m"
{
#line 881 "globals.m"
  {
#line 881 "globals.m"
    MR_bool libs__globals__succeeded;

#line 881 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0


		{
#line 881 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock, MR_MUTEX_ATTR);
#endif

#line 6505 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 881 "globals.m"
}
#line 881 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0


		{
#line 881 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 6523 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 881 "globals.m"
}
#line 881 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 881 "globals.m"
libs__globals__mutable_variable_disable_generate_item_version_numbers = X;

#line 6540 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 881 "globals.m"
}
#line 881 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0


		{
#line 881 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 6558 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 881 "globals.m"
}
#line 881 "globals.m"
  }
#line 881 "globals.m"
}

#line 878 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_disable_smart_recompilation_1_p_0(
#line 878 "globals.m"
  MR_Word libs__globals__X_1)
#line 878 "globals.m"
{
#line 878 "globals.m"
  {
#line 878 "globals.m"
    MR_bool libs__globals__succeeded;

#line 878 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_set_disable_smart_recompilation_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 878 "globals.m"
libs__globals__mutable_variable_disable_smart_recompilation = X;

#line 6592 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 878 "globals.m"
}
#line 878 "globals.m"
  }
#line 878 "globals.m"
}

#line 878 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_disable_smart_recompilation_1_p_0(
#line 878 "globals.m"
  MR_Word * libs__globals__X_1)
#line 878 "globals.m"
{
#line 878 "globals.m"
  {
#line 878 "globals.m"
    MR_bool libs__globals__succeeded;

#line 878 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_get_disable_smart_recompilation_1_p_0

	MR_Word X;

		{
#line 878 "globals.m"
X = libs__globals__mutable_variable_disable_smart_recompilation;

#line 6625 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
#line 878 "globals.m"
}
#line 878 "globals.m"
  }
#line 878 "globals.m"
}

#line 878 "globals.m"
static void MR_CALL 
libs__globals__unlock_disable_smart_recompilation_0_p_0(void)
#line 878 "globals.m"
{
#line 878 "globals.m"
  {
#line 878 "globals.m"
    MR_bool libs__globals__succeeded;

#line 878 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_disable_smart_recompilation_0_p_0


		{
#line 878 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 6659 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 878 "globals.m"
}
#line 878 "globals.m"
  }
#line 878 "globals.m"
}

#line 878 "globals.m"
static void MR_CALL 
libs__globals__lock_disable_smart_recompilation_0_p_0(void)
#line 878 "globals.m"
{
#line 878 "globals.m"
  {
#line 878 "globals.m"
    MR_bool libs__globals__succeeded;

#line 878 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_disable_smart_recompilation_0_p_0


		{
#line 878 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 6692 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 878 "globals.m"
}
#line 878 "globals.m"
  }
#line 878 "globals.m"
}

#line 878 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_disable_smart_recompilation_0_p_0(void)
#line 878 "globals.m"
{
#line 878 "globals.m"
  {
#line 878 "globals.m"
    MR_bool libs__globals__succeeded;

#line 878 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_disable_smart_recompilation_0_p_0


		{
#line 878 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_disable_smart_recompilation_lock, MR_MUTEX_ATTR);
#endif

#line 6724 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 878 "globals.m"
}
#line 878 "globals.m"
  }
#line 878 "globals.m"
}

#line 878 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0(void)
#line 878 "globals.m"
{
#line 878 "globals.m"
  {
#line 878 "globals.m"
    MR_bool libs__globals__succeeded;

#line 878 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0


		{
#line 878 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_disable_smart_recompilation_lock, MR_MUTEX_ATTR);
#endif

#line 6756 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 878 "globals.m"
}
#line 878 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0


		{
#line 878 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 6774 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 878 "globals.m"
}
#line 878 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 878 "globals.m"
libs__globals__mutable_variable_disable_smart_recompilation = X;

#line 6791 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 878 "globals.m"
}
#line 878 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0


		{
#line 878 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 6809 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 878 "globals.m"
}
#line 878 "globals.m"
  }
#line 878 "globals.m"
}

#line 875 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_extra_error_info_1_p_0(
#line 875 "globals.m"
  MR_Word libs__globals__X_1)
#line 875 "globals.m"
{
#line 875 "globals.m"
  {
#line 875 "globals.m"
    MR_bool libs__globals__succeeded;

#line 875 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_set_extra_error_info_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 875 "globals.m"
libs__globals__mutable_variable_extra_error_info = X;

#line 6843 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 875 "globals.m"
}
#line 875 "globals.m"
  }
#line 875 "globals.m"
}

#line 875 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_extra_error_info_1_p_0(
#line 875 "globals.m"
  MR_Word * libs__globals__X_1)
#line 875 "globals.m"
{
#line 875 "globals.m"
  {
#line 875 "globals.m"
    MR_bool libs__globals__succeeded;

#line 875 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_get_extra_error_info_1_p_0

	MR_Word X;

		{
#line 875 "globals.m"
X = libs__globals__mutable_variable_extra_error_info;

#line 6876 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
#line 875 "globals.m"
}
#line 875 "globals.m"
  }
#line 875 "globals.m"
}

#line 875 "globals.m"
static void MR_CALL 
libs__globals__unlock_extra_error_info_0_p_0(void)
#line 875 "globals.m"
{
#line 875 "globals.m"
  {
#line 875 "globals.m"
    MR_bool libs__globals__succeeded;

#line 875 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_extra_error_info_0_p_0


		{
#line 875 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 6910 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 875 "globals.m"
}
#line 875 "globals.m"
  }
#line 875 "globals.m"
}

#line 875 "globals.m"
static void MR_CALL 
libs__globals__lock_extra_error_info_0_p_0(void)
#line 875 "globals.m"
{
#line 875 "globals.m"
  {
#line 875 "globals.m"
    MR_bool libs__globals__succeeded;

#line 875 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_extra_error_info_0_p_0


		{
#line 875 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 6943 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 875 "globals.m"
}
#line 875 "globals.m"
  }
#line 875 "globals.m"
}

#line 875 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_extra_error_info_0_p_0(void)
#line 875 "globals.m"
{
#line 875 "globals.m"
  {
#line 875 "globals.m"
    MR_bool libs__globals__succeeded;

#line 875 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_extra_error_info_0_p_0


		{
#line 875 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_extra_error_info_lock, MR_MUTEX_ATTR);
#endif

#line 6975 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 875 "globals.m"
}
#line 875 "globals.m"
  }
#line 875 "globals.m"
}

#line 875 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_extra_error_info_0_p_0(void)
#line 875 "globals.m"
{
#line 875 "globals.m"
  {
#line 875 "globals.m"
    MR_bool libs__globals__succeeded;

#line 875 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_extra_error_info_0_p_0


		{
#line 875 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_extra_error_info_lock, MR_MUTEX_ATTR);
#endif

#line 7007 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 875 "globals.m"
}
#line 875 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_extra_error_info_0_p_0


		{
#line 875 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 7025 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 875 "globals.m"
}
#line 875 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_extra_error_info_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 875 "globals.m"
libs__globals__mutable_variable_extra_error_info = X;

#line 7042 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 875 "globals.m"
}
#line 875 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_extra_error_info_0_p_0


		{
#line 875 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 7060 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 875 "globals.m"
}
#line 875 "globals.m"
  }
#line 875 "globals.m"
}

#line 869 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_maybe_from_ground_term_threshold_1_p_0(
#line 869 "globals.m"
  MR_Word libs__globals__X_1)
#line 869 "globals.m"
{
#line 869 "globals.m"
  {
#line 869 "globals.m"
    MR_bool libs__globals__succeeded;

#line 869 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_set_maybe_from_ground_term_threshold_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 869 "globals.m"
libs__globals__mutable_variable_maybe_from_ground_term_threshold = X;

#line 7094 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 869 "globals.m"
}
#line 869 "globals.m"
  }
#line 869 "globals.m"
}

#line 869 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_maybe_from_ground_term_threshold_1_p_0(
#line 869 "globals.m"
  MR_Word * libs__globals__X_1)
#line 869 "globals.m"
{
#line 869 "globals.m"
  {
#line 869 "globals.m"
    MR_bool libs__globals__succeeded;

#line 869 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_get_maybe_from_ground_term_threshold_1_p_0

	MR_Word X;

		{
#line 869 "globals.m"
X = libs__globals__mutable_variable_maybe_from_ground_term_threshold;

#line 7127 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
#line 869 "globals.m"
}
#line 869 "globals.m"
  }
#line 869 "globals.m"
}

#line 869 "globals.m"
static void MR_CALL 
libs__globals__unlock_maybe_from_ground_term_threshold_0_p_0(void)
#line 869 "globals.m"
{
#line 869 "globals.m"
  {
#line 869 "globals.m"
    MR_bool libs__globals__succeeded;

#line 869 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_maybe_from_ground_term_threshold_0_p_0


		{
#line 869 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 7161 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 869 "globals.m"
}
#line 869 "globals.m"
  }
#line 869 "globals.m"
}

#line 869 "globals.m"
static void MR_CALL 
libs__globals__lock_maybe_from_ground_term_threshold_0_p_0(void)
#line 869 "globals.m"
{
#line 869 "globals.m"
  {
#line 869 "globals.m"
    MR_bool libs__globals__succeeded;

#line 869 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_maybe_from_ground_term_threshold_0_p_0


		{
#line 869 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 7194 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 869 "globals.m"
}
#line 869 "globals.m"
  }
#line 869 "globals.m"
}

#line 869 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_maybe_from_ground_term_threshold_0_p_0(void)
#line 869 "globals.m"
{
#line 869 "globals.m"
  {
#line 869 "globals.m"
    MR_bool libs__globals__succeeded;

#line 869 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_maybe_from_ground_term_threshold_0_p_0


		{
#line 869 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock, MR_MUTEX_ATTR);
#endif

#line 7226 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 869 "globals.m"
}
#line 869 "globals.m"
  }
#line 869 "globals.m"
}

#line 869 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0(void)
#line 869 "globals.m"
{
#line 869 "globals.m"
  {
#line 869 "globals.m"
    MR_bool libs__globals__succeeded;

#line 869 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0


		{
#line 869 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock, MR_MUTEX_ATTR);
#endif

#line 7258 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 869 "globals.m"
}
#line 869 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0


		{
#line 869 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 7276 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 869 "globals.m"
}
#line 869 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0

	MR_Word X;

	X =  (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) ;
		{
#line 869 "globals.m"
libs__globals__mutable_variable_maybe_from_ground_term_threshold = X;

#line 7293 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 869 "globals.m"
}
#line 869 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0


		{
#line 869 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 7311 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 869 "globals.m"
}
#line 869 "globals.m"
  }
#line 869 "globals.m"
}

#line 864 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_solver_auto_init_supported_1_p_0(
#line 864 "globals.m"
  MR_Word libs__globals__X_1)
#line 864 "globals.m"
{
#line 864 "globals.m"
  {
#line 864 "globals.m"
    MR_bool libs__globals__succeeded;

#line 864 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_set_solver_auto_init_supported_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 864 "globals.m"
MR_set_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_solver_auto_init_supported);

#line 7345 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 864 "globals.m"
}
#line 864 "globals.m"
  }
#line 864 "globals.m"
}

#line 864 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_solver_auto_init_supported_1_p_0(
#line 864 "globals.m"
  MR_Word * libs__globals__X_1)
#line 864 "globals.m"
{
#line 864 "globals.m"
  {
#line 864 "globals.m"
    MR_bool libs__globals__succeeded;

#line 864 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_get_solver_auto_init_supported_1_p_0

	MR_Word X;

		{
#line 864 "globals.m"
MR_get_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_solver_auto_init_supported);

#line 7378 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
#line 864 "globals.m"
}
#line 864 "globals.m"
  }
#line 864 "globals.m"
}

#line 864 "globals.m"
static void MR_CALL 
libs__globals__unlock_solver_auto_init_supported_0_p_0(void)
#line 864 "globals.m"
{
#line 864 "globals.m"
  {
#line 864 "globals.m"
    MR_bool libs__globals__succeeded;

#line 864 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_solver_auto_init_supported_0_p_0


		{
#line 864 "globals.m"

#line 7408 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 864 "globals.m"
}
#line 864 "globals.m"
  }
#line 864 "globals.m"
}

#line 864 "globals.m"
static void MR_CALL 
libs__globals__lock_solver_auto_init_supported_0_p_0(void)
#line 864 "globals.m"
{
#line 864 "globals.m"
  {
#line 864 "globals.m"
    MR_bool libs__globals__succeeded;

#line 864 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_solver_auto_init_supported_0_p_0


		{
#line 864 "globals.m"

#line 7437 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 864 "globals.m"
}
#line 864 "globals.m"
  }
#line 864 "globals.m"
}

#line 864 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_solver_auto_init_supported_0_p_0(void)
#line 864 "globals.m"
{
#line 864 "globals.m"
  {
#line 864 "globals.m"
    MR_bool libs__globals__succeeded;

#line 864 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_solver_auto_init_supported_0_p_0


		{
#line 864 "globals.m"
libs__globals__mutable_variable_solver_auto_init_supported = MR_new_thread_local_mutable_index();

#line 7467 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 864 "globals.m"
}
#line 864 "globals.m"
  }
#line 864 "globals.m"
}

#line 864 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0(void)
#line 864 "globals.m"
{
#line 864 "globals.m"
  {
#line 864 "globals.m"
    MR_bool libs__globals__succeeded;

#line 864 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0


		{
#line 864 "globals.m"
libs__globals__mutable_variable_solver_auto_init_supported = MR_new_thread_local_mutable_index();

#line 7497 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 864 "globals.m"
}
#line 864 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0


		{
#line 864 "globals.m"

#line 7511 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 864 "globals.m"
}
#line 864 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 864 "globals.m"
MR_set_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_solver_auto_init_supported);

#line 7528 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 864 "globals.m"
}
#line 864 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0


		{
#line 864 "globals.m"

#line 7542 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 864 "globals.m"
}
#line 864 "globals.m"
  }
#line 864 "globals.m"
}

#line 371 "globals.m"
void MR_CALL 
libs__globals__io_set_maybe_source_file_map_3_p_0(
#line 371 "globals.m"
  MR_Word libs__globals__MaybeSourceFileMap_4)
#line 371 "globals.m"
{
#line 884 "globals.m"
  {
#line 884 "globals.m"
    MR_bool libs__globals__succeeded;

#line 884 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_maybe_source_file_map_3_p_0


		{
#line 884 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 7577 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 884 "globals.m"
}
#line 884 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_maybe_source_file_map_3_p_0

	MR_Word X;

	X =  libs__globals__MaybeSourceFileMap_4 ;
		{
#line 884 "globals.m"
libs__globals__mutable_variable_maybe_source_file_map = X;

#line 7594 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 884 "globals.m"
}
#line 884 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_maybe_source_file_map_3_p_0


		{
#line 884 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 7612 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 884 "globals.m"
}
#line 884 "globals.m"
  }
#line 371 "globals.m"
}

#line 368 "globals.m"
void MR_CALL 
libs__globals__io_get_maybe_source_file_map_3_p_0(
#line 368 "globals.m"
  MR_Word * libs__globals__MaybeSourceFileMap_4)
#line 368 "globals.m"
{
#line 884 "globals.m"
  {
#line 884 "globals.m"
    MR_bool libs__globals__succeeded;

#line 884 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_maybe_source_file_map_3_p_0


		{
#line 884 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 7647 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 884 "globals.m"
}
#line 884 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_maybe_source_file_map_3_p_0

	MR_Word X;

		{
#line 884 "globals.m"
X = libs__globals__mutable_variable_maybe_source_file_map;

#line 7663 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__MaybeSourceFileMap_4  = X;
#line 884 "globals.m"
}
#line 884 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_maybe_source_file_map_3_p_0


		{
#line 884 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 7682 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 884 "globals.m"
}
#line 884 "globals.m"
  }
#line 368 "globals.m"
}

#line 365 "globals.m"
void MR_CALL 
libs__globals__io_set_disable_generate_item_version_numbers_3_p_0(
#line 365 "globals.m"
  MR_Word libs__globals__DisableItemVerions_4)
#line 365 "globals.m"
{
#line 881 "globals.m"
  {
#line 881 "globals.m"
    MR_bool libs__globals__succeeded;

#line 881 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_disable_generate_item_version_numbers_3_p_0


		{
#line 881 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 7717 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 881 "globals.m"
}
#line 881 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_disable_generate_item_version_numbers_3_p_0

	MR_Word X;

	X =  libs__globals__DisableItemVerions_4 ;
		{
#line 881 "globals.m"
libs__globals__mutable_variable_disable_generate_item_version_numbers = X;

#line 7734 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 881 "globals.m"
}
#line 881 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_disable_generate_item_version_numbers_3_p_0


		{
#line 881 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 7752 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 881 "globals.m"
}
#line 881 "globals.m"
  }
#line 365 "globals.m"
}

#line 362 "globals.m"
void MR_CALL 
libs__globals__io_get_disable_generate_item_version_numbers_3_p_0(
#line 362 "globals.m"
  MR_Word * libs__globals__DisableItemVerions_4)
#line 362 "globals.m"
{
#line 881 "globals.m"
  {
#line 881 "globals.m"
    MR_bool libs__globals__succeeded;

#line 881 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_disable_generate_item_version_numbers_3_p_0


		{
#line 881 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 7787 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 881 "globals.m"
}
#line 881 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_disable_generate_item_version_numbers_3_p_0

	MR_Word X;

		{
#line 881 "globals.m"
X = libs__globals__mutable_variable_disable_generate_item_version_numbers;

#line 7803 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__DisableItemVerions_4  = X;
#line 881 "globals.m"
}
#line 881 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_disable_generate_item_version_numbers_3_p_0


		{
#line 881 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 7822 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 881 "globals.m"
}
#line 881 "globals.m"
  }
#line 362 "globals.m"
}

#line 360 "globals.m"
void MR_CALL 
libs__globals__io_set_disable_smart_recompilation_3_p_0(
#line 360 "globals.m"
  MR_Word libs__globals__DisableSmartRecomp_4)
#line 360 "globals.m"
{
#line 878 "globals.m"
  {
#line 878 "globals.m"
    MR_bool libs__globals__succeeded;

#line 878 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_disable_smart_recompilation_3_p_0


		{
#line 878 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 7857 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 878 "globals.m"
}
#line 878 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_disable_smart_recompilation_3_p_0

	MR_Word X;

	X =  libs__globals__DisableSmartRecomp_4 ;
		{
#line 878 "globals.m"
libs__globals__mutable_variable_disable_smart_recompilation = X;

#line 7874 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 878 "globals.m"
}
#line 878 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_disable_smart_recompilation_3_p_0


		{
#line 878 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 7892 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 878 "globals.m"
}
#line 878 "globals.m"
  }
#line 360 "globals.m"
}

#line 358 "globals.m"
void MR_CALL 
libs__globals__io_get_disable_smart_recompilation_3_p_0(
#line 358 "globals.m"
  MR_Word * libs__globals__DisableSmartRecomp_4)
#line 358 "globals.m"
{
#line 878 "globals.m"
  {
#line 878 "globals.m"
    MR_bool libs__globals__succeeded;

#line 878 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_disable_smart_recompilation_3_p_0


		{
#line 878 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 7927 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 878 "globals.m"
}
#line 878 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_disable_smart_recompilation_3_p_0

	MR_Word X;

		{
#line 878 "globals.m"
X = libs__globals__mutable_variable_disable_smart_recompilation;

#line 7943 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__DisableSmartRecomp_4  = X;
#line 878 "globals.m"
}
#line 878 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_disable_smart_recompilation_3_p_0


		{
#line 878 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 7962 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 878 "globals.m"
}
#line 878 "globals.m"
  }
#line 358 "globals.m"
}

#line 356 "globals.m"
void MR_CALL 
libs__globals__io_set_extra_error_info_3_p_0(
#line 356 "globals.m"
  MR_Word libs__globals__ExtraErrorInfo_4)
#line 356 "globals.m"
{
#line 875 "globals.m"
  {
#line 875 "globals.m"
    MR_bool libs__globals__succeeded;

#line 875 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_extra_error_info_3_p_0


		{
#line 875 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 7997 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 875 "globals.m"
}
#line 875 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_extra_error_info_3_p_0

	MR_Word X;

	X =  libs__globals__ExtraErrorInfo_4 ;
		{
#line 875 "globals.m"
libs__globals__mutable_variable_extra_error_info = X;

#line 8014 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 875 "globals.m"
}
#line 875 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_extra_error_info_3_p_0


		{
#line 875 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 8032 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 875 "globals.m"
}
#line 875 "globals.m"
  }
#line 356 "globals.m"
}

#line 354 "globals.m"
void MR_CALL 
libs__globals__io_get_extra_error_info_3_p_0(
#line 354 "globals.m"
  MR_Word * libs__globals__ExtraErrorInfo_4)
#line 354 "globals.m"
{
#line 875 "globals.m"
  {
#line 875 "globals.m"
    MR_bool libs__globals__succeeded;

#line 875 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_extra_error_info_3_p_0


		{
#line 875 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 8067 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 875 "globals.m"
}
#line 875 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_extra_error_info_3_p_0

	MR_Word X;

		{
#line 875 "globals.m"
X = libs__globals__mutable_variable_extra_error_info;

#line 8083 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__ExtraErrorInfo_4  = X;
#line 875 "globals.m"
}
#line 875 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_extra_error_info_3_p_0


		{
#line 875 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 8102 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 875 "globals.m"
}
#line 875 "globals.m"
  }
#line 354 "globals.m"
}

#line 352 "globals.m"
MR_Word MR_CALL 
libs__globals__get_maybe_from_ground_term_threshold_0_f_0(void)
#line 352 "globals.m"
{
#line 901 "globals.m"
  {
#line 901 "globals.m"
    MR_bool libs__globals__succeeded;
#line 901 "globals.m"
    MR_Word libs__globals__MaybeThreshold_2;

#line 869 "globals.m"
{
#define MR_PROC_LABEL libs__globals__get_maybe_from_ground_term_threshold_0_f_0


		{
#line 869 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 8137 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 869 "globals.m"
}
#line 869 "globals.m"
{
#define MR_PROC_LABEL libs__globals__get_maybe_from_ground_term_threshold_0_f_0

	MR_Word X;

		{
#line 869 "globals.m"
X = libs__globals__mutable_variable_maybe_from_ground_term_threshold;

#line 8153 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 libs__globals__MaybeThreshold_2  = X;
#line 869 "globals.m"
}
#line 869 "globals.m"
{
#define MR_PROC_LABEL libs__globals__get_maybe_from_ground_term_threshold_0_f_0


		{
#line 869 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 8172 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 869 "globals.m"
}
#line 901 "globals.m"
    return libs__globals__MaybeThreshold_2;
#line 901 "globals.m"
  }
#line 352 "globals.m"
}

#line 347 "globals.m"
void MR_CALL 
libs__globals__semipure_get_solver_auto_init_supported_1_p_0(
#line 347 "globals.m"
  MR_Word * libs__globals__AutoInitSupported_2)
#line 347 "globals.m"
{
#line 864 "globals.m"
  {
#line 864 "globals.m"
    MR_bool libs__globals__succeeded;

#line 864 "globals.m"
{
#define MR_PROC_LABEL libs__globals__semipure_get_solver_auto_init_supported_1_p_0


		{
#line 864 "globals.m"

#line 8205 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 864 "globals.m"
}
#line 864 "globals.m"
{
#define MR_PROC_LABEL libs__globals__semipure_get_solver_auto_init_supported_1_p_0

	MR_Word X;

		{
#line 864 "globals.m"
MR_get_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_solver_auto_init_supported);

#line 8221 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__AutoInitSupported_2  = X;
#line 864 "globals.m"
}
#line 864 "globals.m"
{
#define MR_PROC_LABEL libs__globals__semipure_get_solver_auto_init_supported_1_p_0


		{
#line 864 "globals.m"

#line 8236 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 864 "globals.m"
}
#line 864 "globals.m"
  }
#line 347 "globals.m"
}

#line 342 "globals.m"
void MR_CALL 
libs__globals__globals_init_mutables_3_p_0(
#line 342 "globals.m"
  MR_Word libs__globals__Globals_4)
#line 342 "globals.m"
{
#line 889 "globals.m"
  {
#line 889 "globals.m"
    MR_bool libs__globals__succeeded;
#line 889 "globals.m"
    MR_Word libs__globals__AutoInitSupported_6;
#line 889 "globals.m"
    MR_Integer libs__globals__FromGroundTermThreshold_7;
#line 889 "globals.m"
    MR_Word libs__globals__V_13_13;

#line 890 "globals.m"
    {
#line 890 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_4, (MR_Integer) 295, &libs__globals__AutoInitSupported_6);
    }
#line 864 "globals.m"
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0


		{
#line 864 "globals.m"

#line 8278 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 864 "globals.m"
}
#line 864 "globals.m"
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0

	MR_Word X;

	X =  libs__globals__AutoInitSupported_6 ;
		{
#line 864 "globals.m"
MR_set_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_solver_auto_init_supported);

#line 8295 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 864 "globals.m"
}
#line 864 "globals.m"
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0


		{
#line 864 "globals.m"

#line 8309 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 864 "globals.m"
}
#line 893 "globals.m"
    {
#line 893 "globals.m"
      libs__globals__lookup_int_option_3_p_0(libs__globals__Globals_4, (MR_Integer) 343, &libs__globals__FromGroundTermThreshold_7);
    }
#line 895 "globals.m"
    {
#line 895 "globals.m"
      libs__globals__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 895 "globals.m"
      MR_hl_field(MR_mktag(1), libs__globals__V_13_13, 0) = ((MR_Box) (libs__globals__FromGroundTermThreshold_7));
#line 895 "globals.m"
    }
#line 869 "globals.m"
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0


		{
#line 869 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 8340 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 869 "globals.m"
}
#line 869 "globals.m"
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0

	MR_Word X;

	X =  libs__globals__V_13_13 ;
		{
#line 869 "globals.m"
libs__globals__mutable_variable_maybe_from_ground_term_threshold = X;

#line 8357 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 869 "globals.m"
}
#line 869 "globals.m"
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0


		{
#line 869 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 8375 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 869 "globals.m"
}
#line 889 "globals.m"
  }
#line 342 "globals.m"
}

#line 338 "globals.m"
void MR_CALL 
libs__globals__double_width_floats_on_det_stack_2_p_0(
#line 338 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 338 "globals.m"
  MR_Word * libs__globals__FloatDwords_4)
#line 338 "globals.m"
{
#line 831 "globals.m"
  {
#line 831 "globals.m"
    MR_bool libs__globals__succeeded;
#line 831 "globals.m"
    MR_Integer libs__globals__TargetWordBits_5;
#line 831 "globals.m"
    MR_Word libs__globals__SinglePrecFloat_6;

#line 832 "globals.m"
    {
#line 832 "globals.m"
      libs__globals__lookup_int_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 236, &libs__globals__TargetWordBits_5);
    }
#line 833 "globals.m"
    {
#line 833 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 220, &libs__globals__SinglePrecFloat_6);
    }
#line 834 "globals.m"
    libs__globals__succeeded = (libs__globals__TargetWordBits_5 == (MR_Integer) 64);
#line 836 "globals.m"
    if (libs__globals__succeeded)
#line 835 "globals.m"
      *libs__globals__FloatDwords_4 = (MR_Integer) 0;
#line 836 "globals.m"
    else
#line 844 "globals.m"
      {
#line 836 "globals.m"
        libs__globals__succeeded = (libs__globals__TargetWordBits_5 == (MR_Integer) 32);
#line 844 "globals.m"
        if (libs__globals__succeeded)
#line 840 "globals.m"
          if ((libs__globals__SinglePrecFloat_6 == (MR_Integer) 0))
#line 842 "globals.m"
            *libs__globals__FloatDwords_4 = (MR_Integer) 1;
#line 840 "globals.m"
          else
#line 839 "globals.m"
            *libs__globals__FloatDwords_4 = (MR_Integer) 0;
#line 844 "globals.m"
        else
#line 845 "globals.m"
          {
#line 845 "globals.m"
            {
#line 845 "globals.m"
              mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.double_width_floats_on_det_stack\'/2", (MR_String) "bits_per_word not 32 or 64");
#line 845 "globals.m"
              return;
            }
#line 845 "globals.m"
          }
#line 844 "globals.m"
      }
#line 831 "globals.m"
  }
#line 338 "globals.m"
}

#line 334 "globals.m"
void MR_CALL 
libs__globals__get_any_intermod_2_p_0(
#line 334 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 334 "globals.m"
  MR_Word * libs__globals__AnyIntermod_4)
#line 334 "globals.m"
{
#line 826 "globals.m"
  {
#line 826 "globals.m"
    MR_bool libs__globals__succeeded;
#line 826 "globals.m"
    MR_Word libs__globals__IntermodOpt_5;
#line 826 "globals.m"
    MR_Word libs__globals__IntermodAnalysis_6;

#line 827 "globals.m"
    {
#line 827 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 325, &libs__globals__IntermodOpt_5);
    }
#line 828 "globals.m"
    {
#line 828 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 330, &libs__globals__IntermodAnalysis_6);
    }
#line 829 "globals.m"
    {
#line 829 "globals.m"
      *libs__globals__AnyIntermod_4 = mercury__bool__or_2_f_0(libs__globals__IntermodOpt_5, libs__globals__IntermodAnalysis_6);
    }
#line 826 "globals.m"
  }
#line 334 "globals.m"
}

#line 332 "globals.m"
void MR_CALL 
libs__globals__current_grade_supports_concurrency_2_p_0(
#line 332 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 332 "globals.m"
  MR_Word * libs__globals__ThreadsSupported_4)
#line 332 "globals.m"
{
#line 799 "globals.m"
  {
#line 799 "globals.m"
    MR_bool libs__globals__succeeded;
#line 799 "globals.m"
    MR_Word libs__globals__Target_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 643 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 643 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 643 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 643 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 643 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 643 "globals.m"
    MR_Word libs__globals__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 643 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 643 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 643 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 643 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 643 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 643 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 643 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 643 "globals.m"
    MR_Word libs__globals__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 643 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 643 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 643 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 643 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));

#line 813 "globals.m"
    if ((libs__globals__Target_5 == (MR_Integer) 0))
#line 802 "globals.m"
      {
#line 802 "globals.m"
        MR_Word libs__globals__HighLevelCode_6;

#line 803 "globals.m"
        {
#line 803 "globals.m"
          libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 250, &libs__globals__HighLevelCode_6);
        }
#line 808 "globals.m"
        if ((libs__globals__HighLevelCode_6 == (MR_Integer) 0))
#line 807 "globals.m"
          *libs__globals__ThreadsSupported_4 = (MR_Integer) 1;
#line 808 "globals.m"
        else
#line 809 "globals.m"
          {
#line 810 "globals.m"
            {
#line 810 "globals.m"
              libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 212, libs__globals__ThreadsSupported_4);
#line 810 "globals.m"
              return;
            }
#line 809 "globals.m"
          }
#line 802 "globals.m"
      }
#line 813 "globals.m"
    else
#line 813 "globals.m"
      if ((libs__globals__Target_5 == (MR_Integer) 4))
#line 823 "globals.m"
        *libs__globals__ThreadsSupported_4 = (MR_Integer) 0;
#line 813 "globals.m"
      else
#line 819 "globals.m"
        *libs__globals__ThreadsSupported_4 = (MR_Integer) 1;
#line 799 "globals.m"
  }
#line 332 "globals.m"
}

#line 326 "globals.m"
void MR_CALL 
libs__globals__current_grade_supports_par_conj_2_p_0(
#line 326 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 326 "globals.m"
  MR_Word * libs__globals__ParConjSupported_4)
#line 326 "globals.m"
{
#line 783 "globals.m"
  {
#line 783 "globals.m"
    MR_bool libs__globals__succeeded;
#line 783 "globals.m"
    MR_Word libs__globals__Target_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 783 "globals.m"
    MR_Word libs__globals__HighLevelCode_6;
#line 783 "globals.m"
    MR_Word libs__globals__Parallel_7;
#line 783 "globals.m"
    MR_Word libs__globals__UseTrail_8;
#line 643 "globals.m"
    MR_Word libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 643 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 643 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 643 "globals.m"
    MR_Word libs__globals__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 643 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 643 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 643 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 643 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 643 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 643 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 643 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 643 "globals.m"
    MR_Word libs__globals__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 643 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 643 "globals.m"
    MR_Word libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 643 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 643 "globals.m"
    MR_Word libs__globals__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 643 "globals.m"
    MR_Word libs__globals__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 643 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));

#line 785 "globals.m"
    {
#line 785 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 250, &libs__globals__HighLevelCode_6);
    }
#line 786 "globals.m"
    {
#line 786 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 212, &libs__globals__Parallel_7);
    }
#line 787 "globals.m"
    {
#line 787 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 214, &libs__globals__UseTrail_8);
    }
#line 789 "globals.m"
    libs__globals__succeeded = (libs__globals__Target_5 == (MR_Integer) 0);
#line 789 "globals.m"
    if (libs__globals__succeeded)
#line 789 "globals.m"
      {
#line 790 "globals.m"
        libs__globals__succeeded = (libs__globals__HighLevelCode_6 == (MR_Integer) 0);
#line 789 "globals.m"
        if (libs__globals__succeeded)
#line 789 "globals.m"
          {
#line 791 "globals.m"
            libs__globals__succeeded = (libs__globals__Parallel_7 == (MR_Integer) 1);
#line 789 "globals.m"
            if (libs__globals__succeeded)
#line 792 "globals.m"
              libs__globals__succeeded = (libs__globals__UseTrail_8 == (MR_Integer) 0);
#line 789 "globals.m"
          }
#line 789 "globals.m"
      }
#line 795 "globals.m"
    if (libs__globals__succeeded)
#line 794 "globals.m"
      *libs__globals__ParConjSupported_4 = (MR_Integer) 1;
#line 795 "globals.m"
    else
#line 796 "globals.m"
      *libs__globals__ParConjSupported_4 = (MR_Integer) 0;
#line 783 "globals.m"
  }
#line 326 "globals.m"
}

#line 321 "globals.m"
void MR_CALL 
libs__globals__current_grade_supports_tabling_2_p_0(
#line 321 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 321 "globals.m"
  MR_Word * libs__globals__TablingSupported_4)
#line 321 "globals.m"
{
#line 766 "globals.m"
  {
#line 766 "globals.m"
    MR_bool libs__globals__succeeded;
#line 766 "globals.m"
    MR_Word libs__globals__Target_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 766 "globals.m"
    MR_Word libs__globals__GC_Method_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 766 "globals.m"
    MR_Word libs__globals__HighLevelData_7;
#line 643 "globals.m"
    MR_Word libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 643 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 643 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 643 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 643 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 643 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 643 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 643 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 643 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 643 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 643 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 643 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 643 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 643 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 643 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 643 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 643 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));

#line 769 "globals.m"
    {
#line 769 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 251, &libs__globals__HighLevelData_7);
    }
#line 771 "globals.m"
    libs__globals__succeeded = (libs__globals__Target_5 == (MR_Integer) 0);
#line 771 "globals.m"
    if (libs__globals__succeeded)
#line 771 "globals.m"
      {
#line 772 "globals.m"
        libs__globals__succeeded = (libs__globals__GC_Method_6 == (MR_Integer) 6);
#line 772 "globals.m"
        libs__globals__succeeded = !(libs__globals__succeeded);
#line 771 "globals.m"
        if (libs__globals__succeeded)
#line 773 "globals.m"
          libs__globals__succeeded = (libs__globals__HighLevelData_7 == (MR_Integer) 0);
#line 771 "globals.m"
      }
#line 776 "globals.m"
    if (libs__globals__succeeded)
#line 775 "globals.m"
      *libs__globals__TablingSupported_4 = (MR_Integer) 1;
#line 776 "globals.m"
    else
#line 777 "globals.m"
      *libs__globals__TablingSupported_4 = (MR_Integer) 0;
#line 766 "globals.m"
  }
#line 321 "globals.m"
}

#line 317 "globals.m"
void MR_CALL 
libs__globals__want_return_var_layouts_2_p_0(
#line 317 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 317 "globals.m"
  MR_Word * libs__globals__WantReturnLayouts_4)
#line 317 "globals.m"
{
#line 762 "globals.m"
  {
#line 762 "globals.m"
    MR_bool libs__globals__succeeded;

#line 753 "globals.m"
    {
#line 753 "globals.m"
      MR_Word libs__globals__GC_Method_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 644 "globals.m"
      MR_Word libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 644 "globals.m"
      MR_Word libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 644 "globals.m"
      MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 644 "globals.m"
      MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 644 "globals.m"
      MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 644 "globals.m"
      MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 644 "globals.m"
      MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 644 "globals.m"
      MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 644 "globals.m"
      MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 644 "globals.m"
      MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 644 "globals.m"
      MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 644 "globals.m"
      MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 644 "globals.m"
      MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 644 "globals.m"
      MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 644 "globals.m"
      MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 644 "globals.m"
      MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 644 "globals.m"
      MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 644 "globals.m"
      MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));

#line 754 "globals.m"
      libs__globals__succeeded = (libs__globals__GC_Method_5 == (MR_Integer) 6);
#line 753 "globals.m"
    }
#line 755 "globals.m"
    if (!(libs__globals__succeeded))
#line 756 "globals.m"
      {
#line 756 "globals.m"
        MR_Word libs__globals__TraceLevel_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 756 "globals.m"
        MR_Word libs__globals__TraceSuppress_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 756 "globals.m"
        MR_Word libs__globals__V_8_8;
#line 648 "globals.m"
        MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 648 "globals.m"
        MR_Word libs__globals__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 648 "globals.m"
        MR_Word libs__globals__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 648 "globals.m"
        MR_Word libs__globals__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 648 "globals.m"
        MR_Word libs__globals__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 648 "globals.m"
        MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 648 "globals.m"
        MR_Word libs__globals__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 648 "globals.m"
        MR_Word libs__globals__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 648 "globals.m"
        MR_Word libs__globals__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 648 "globals.m"
        MR_Word libs__globals__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 648 "globals.m"
        MR_Word libs__globals__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 648 "globals.m"
        MR_Word libs__globals__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 648 "globals.m"
        MR_Word libs__globals__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 648 "globals.m"
        MR_Word libs__globals__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 648 "globals.m"
        MR_Word libs__globals__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 648 "globals.m"
        MR_Word libs__globals__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 648 "globals.m"
        MR_Word libs__globals__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));

#line 758 "globals.m"
        {
#line 758 "globals.m"
          libs__globals__V_8_8 = libs__trace_params__trace_needs_return_info_2_f_0(libs__globals__TraceLevel_6, libs__globals__TraceSuppress_7);
        }
#line 758 "globals.m"
        libs__globals__succeeded = (libs__globals__V_8_8 == (MR_Integer) 1);
#line 756 "globals.m"
      }
#line 762 "globals.m"
    if (libs__globals__succeeded)
#line 761 "globals.m"
      *libs__globals__WantReturnLayouts_4 = (MR_Integer) 1;
#line 762 "globals.m"
    else
#line 763 "globals.m"
      *libs__globals__WantReturnLayouts_4 = (MR_Integer) 0;
#line 762 "globals.m"
  }
#line 317 "globals.m"
}

#line 306 "globals.m"
void MR_CALL 
libs__globals__lookup_accumulating_option_3_p_0(
#line 306 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 306 "globals.m"
  MR_Word libs__globals__Option_5,
#line 306 "globals.m"
  MR_Word * libs__globals__Value_6)
#line 306 "globals.m"
{
#line 738 "globals.m"
  {
#line 738 "globals.m"
    MR_bool libs__globals__succeeded;
#line 738 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 738 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 642 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)));
#line 642 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 642 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)));
#line 642 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 642 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 642 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 642 "globals.m"
    MR_Word libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
#line 642 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 702 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 742 "globals.m"
    MR_Word libs__globals__Accumulating_8;

#line 702 "globals.m"
    {
#line 702 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 702 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 740 "globals.m"
    libs__globals__succeeded = ((((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 740 "globals.m"
    if (libs__globals__succeeded)
#line 740 "globals.m"
      {
#line 740 "globals.m"
        libs__globals__Accumulating_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 1)));
#line 741 "globals.m"
        *libs__globals__Value_6 = libs__globals__Accumulating_8;
#line 740 "globals.m"
      }
#line 740 "globals.m"
    else
#line 743 "globals.m"
      {
#line 743 "globals.m"
        {
#line 743 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_accumulating_option\'/3", (MR_String) "invalid accumulating option");
#line 743 "globals.m"
          return;
        }
#line 743 "globals.m"
      }
#line 738 "globals.m"
  }
#line 306 "globals.m"
}

#line 304 "globals.m"
void MR_CALL 
libs__globals__lookup_maybe_string_option_3_p_0(
#line 304 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 304 "globals.m"
  MR_Word libs__globals__Option_5,
#line 304 "globals.m"
  MR_Word * libs__globals__Value_6)
#line 304 "globals.m"
{
#line 730 "globals.m"
  {
#line 730 "globals.m"
    MR_bool libs__globals__succeeded;
#line 730 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 730 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 642 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)));
#line 642 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 642 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)));
#line 642 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 642 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 642 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 642 "globals.m"
    MR_Word libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
#line 642 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 702 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 734 "globals.m"
    MR_Word libs__globals__MaybeString_8;

#line 702 "globals.m"
    {
#line 702 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 702 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 732 "globals.m"
    libs__globals__succeeded = ((((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 732 "globals.m"
    if (libs__globals__succeeded)
#line 732 "globals.m"
      {
#line 732 "globals.m"
        libs__globals__MaybeString_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 1)));
#line 733 "globals.m"
        *libs__globals__Value_6 = libs__globals__MaybeString_8;
#line 732 "globals.m"
      }
#line 732 "globals.m"
    else
#line 735 "globals.m"
      {
#line 735 "globals.m"
        {
#line 735 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_maybe_string_option\'/3", (MR_String) "invalid maybe_string option");
#line 735 "globals.m"
          return;
        }
#line 735 "globals.m"
      }
#line 730 "globals.m"
  }
#line 304 "globals.m"
}

#line 303 "globals.m"
void MR_CALL 
libs__globals__lookup_string_option_3_p_0(
#line 303 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 303 "globals.m"
  MR_Word libs__globals__Option_5,
#line 303 "globals.m"
  MR_String * libs__globals__Value_6)
#line 303 "globals.m"
{
#line 714 "globals.m"
  {
#line 714 "globals.m"
    MR_bool libs__globals__succeeded;
#line 714 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 714 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 642 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)));
#line 642 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 642 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)));
#line 642 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 642 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 642 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 642 "globals.m"
    MR_Word libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
#line 642 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 702 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 718 "globals.m"
    MR_String libs__globals__String_8;

#line 702 "globals.m"
    {
#line 702 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 702 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 716 "globals.m"
    libs__globals__succeeded = ((((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 716 "globals.m"
    if (libs__globals__succeeded)
#line 716 "globals.m"
      {
#line 716 "globals.m"
        libs__globals__String_8 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 1)));
#line 717 "globals.m"
        *libs__globals__Value_6 = libs__globals__String_8;
#line 716 "globals.m"
      }
#line 716 "globals.m"
    else
#line 719 "globals.m"
      {
#line 719 "globals.m"
        {
#line 719 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_string_option\'/3", (MR_String) "invalid string option");
#line 719 "globals.m"
          return;
        }
#line 719 "globals.m"
      }
#line 714 "globals.m"
  }
#line 303 "globals.m"
}

#line 302 "globals.m"
void MR_CALL 
libs__globals__lookup_int_option_3_p_0(
#line 302 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 302 "globals.m"
  MR_Word libs__globals__Option_5,
#line 302 "globals.m"
  MR_Integer * libs__globals__Value_6)
#line 302 "globals.m"
{
#line 722 "globals.m"
  {
#line 722 "globals.m"
    MR_bool libs__globals__succeeded;
#line 722 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 722 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 642 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)));
#line 642 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 642 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)));
#line 642 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 642 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 642 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 642 "globals.m"
    MR_Word libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
#line 642 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 702 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 726 "globals.m"
    MR_Integer libs__globals__Int_8;

#line 702 "globals.m"
    {
#line 702 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 702 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 724 "globals.m"
    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 2)));
#line 724 "globals.m"
    if (libs__globals__succeeded)
#line 724 "globals.m"
      {
#line 724 "globals.m"
        libs__globals__Int_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), libs__globals__OptionData_7, (MR_Integer) 0)));
#line 725 "globals.m"
        *libs__globals__Value_6 = libs__globals__Int_8;
#line 724 "globals.m"
      }
#line 724 "globals.m"
    else
#line 727 "globals.m"
      {
#line 727 "globals.m"
        {
#line 727 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_int_option\'/3", (MR_String) "invalid int option");
#line 727 "globals.m"
          return;
        }
#line 727 "globals.m"
      }
#line 722 "globals.m"
  }
#line 302 "globals.m"
}

#line 301 "globals.m"
MR_bool MR_CALL 
libs__globals__lookup_bool_option_3_p_1(
#line 301 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 301 "globals.m"
  MR_Word libs__globals__Option_5,
#line 301 "globals.m"
  MR_Word libs__globals__Value_6)
#line 301 "globals.m"
{
#line 706 "globals.m"
  {
#line 706 "globals.m"
    MR_bool libs__globals__succeeded;
#line 706 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 706 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 642 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)));
#line 642 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 642 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)));
#line 642 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 642 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 642 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 642 "globals.m"
    MR_Word libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
#line 642 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 702 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 710 "globals.m"
    MR_Word libs__globals__Bool_8;

#line 702 "globals.m"
    {
#line 702 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 702 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 708 "globals.m"
    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 1)));
#line 708 "globals.m"
    if (libs__globals__succeeded)
#line 708 "globals.m"
      {
#line 708 "globals.m"
        libs__globals__Bool_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__OptionData_7, (MR_Integer) 0)));
#line 709 "globals.m"
        libs__globals__succeeded = (libs__globals__Value_6 == libs__globals__Bool_8);
#line 708 "globals.m"
      }
#line 708 "globals.m"
    else
#line 711 "globals.m"
      {
#line 711 "globals.m"
        {
#line 711 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_bool_option\'/3", (MR_String) "invalid bool option");
        }
#line 711 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 711 "globals.m"
      }
#line 706 "globals.m"
    return libs__globals__succeeded;
#line 706 "globals.m"
  }
#line 301 "globals.m"
}

#line 300 "globals.m"
void MR_CALL 
libs__globals__lookup_bool_option_3_p_0(
#line 300 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 300 "globals.m"
  MR_Word libs__globals__Option_5,
#line 300 "globals.m"
  MR_Word * libs__globals__Value_6)
#line 300 "globals.m"
{
#line 706 "globals.m"
  {
#line 706 "globals.m"
    MR_bool libs__globals__succeeded;
#line 706 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 706 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 642 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)));
#line 642 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 642 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)));
#line 642 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 642 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 642 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 642 "globals.m"
    MR_Word libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
#line 642 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 702 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 710 "globals.m"
    MR_Word libs__globals__Bool_8;

#line 702 "globals.m"
    {
#line 702 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 702 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 708 "globals.m"
    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 1)));
#line 708 "globals.m"
    if (libs__globals__succeeded)
#line 708 "globals.m"
      {
#line 708 "globals.m"
        libs__globals__Bool_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__OptionData_7, (MR_Integer) 0)));
#line 709 "globals.m"
        *libs__globals__Value_6 = libs__globals__Bool_8;
#line 708 "globals.m"
      }
#line 708 "globals.m"
    else
#line 711 "globals.m"
      {
#line 711 "globals.m"
        {
#line 711 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_bool_option\'/3", (MR_String) "invalid bool option");
#line 711 "globals.m"
          return;
        }
#line 711 "globals.m"
      }
#line 706 "globals.m"
  }
#line 300 "globals.m"
}

#line 297 "globals.m"
void MR_CALL 
libs__globals__lookup_option_3_p_0(
#line 297 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 297 "globals.m"
  MR_Word libs__globals__Option_5,
#line 297 "globals.m"
  MR_Word * libs__globals__OptionData_6)
#line 297 "globals.m"
{
#line 700 "globals.m"
  {
#line 700 "globals.m"
    MR_bool libs__globals__succeeded;
#line 700 "globals.m"
    MR_Word libs__globals__OptionTable_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 642 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)));
#line 642 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 642 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)));
#line 642 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 642 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 642 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 642 "globals.m"
    MR_Word libs__globals__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
#line 642 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 702 "globals.m"
    MR_Box libs__globals__conv0_OptionData_6;

#line 702 "globals.m"
    {
#line 702 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_7, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_6);
    }
#line 702 "globals.m"
    *libs__globals__OptionData_6 = ((MR_Word) libs__globals__conv0_OptionData_6);
#line 700 "globals.m"
  }
#line 297 "globals.m"
}

#line 294 "globals.m"
void MR_CALL 
libs__globals__set_file_install_cmd_3_p_0(
#line 294 "globals.m"
  MR_Word libs__globals__FileInstallCmd_4,
#line 294 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 294 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 294 "globals.m"
{
#line 698 "globals.m"
  {
#line 698 "globals.m"
    MR_bool libs__globals__succeeded;
#line 698 "globals.m"
    MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
#line 698 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 698 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 698 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 698 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 698 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 698 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 698 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)));
#line 698 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 698 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 698 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)));
#line 698 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
#line 698 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
#line 698 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
#line 698 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
#line 698 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 698 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 698 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 698 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));

#line 698 "globals.m"
    {
#line 698 "globals.m"
      MR_Word base;
#line 698 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 698 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
#line 698 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__V_9_9));
#line 698 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_10_10 | ((((libs__globals__V_11_11 << (MR_Integer) 3)) | ((((libs__globals__V_12_12 << (MR_Integer) 6)) | ((((libs__globals__V_13_13 << (MR_Integer) 8)) | ((((libs__globals__V_14_14 << (MR_Integer) 10)) | ((libs__globals__V_15_15 << (MR_Integer) 12)))))))))))));
#line 698 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_16_16));
#line 698 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__V_17_17 | ((libs__globals__V_18_18 << (MR_Integer) 2)))));
#line 698 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__V_19_19));
#line 698 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_20_20));
#line 698 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_21_21));
#line 698 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_22_22));
#line 698 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__V_23_23));
#line 698 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_24_24 | ((((libs__globals__V_25_25 << (MR_Integer) 3)) | ((libs__globals__V_26_26 << (MR_Integer) 6)))))));
#line 698 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__FileInstallCmd_4));
#line 698 "globals.m"
    }
#line 698 "globals.m"
  }
#line 294 "globals.m"
}

#line 292 "globals.m"
void MR_CALL 
libs__globals__set_maybe_feedback_info_3_p_0(
#line 292 "globals.m"
  MR_Word libs__globals__MaybeFeedback_4,
#line 292 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 292 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 292 "globals.m"
{
#line 695 "globals.m"
  {
#line 695 "globals.m"
    MR_bool libs__globals__succeeded;
#line 695 "globals.m"
    MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
#line 695 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)));
#line 695 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 695 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)));
#line 695 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
#line 695 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
#line 695 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
#line 695 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
#line 695 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));

#line 695 "globals.m"
    {
#line 695 "globals.m"
      MR_Word base;
#line 695 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 695 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
#line 695 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__V_9_9));
#line 695 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_10_10 | ((((libs__globals__V_11_11 << (MR_Integer) 3)) | ((((libs__globals__V_12_12 << (MR_Integer) 6)) | ((((libs__globals__V_13_13 << (MR_Integer) 8)) | ((((libs__globals__V_14_14 << (MR_Integer) 10)) | ((libs__globals__V_15_15 << (MR_Integer) 12)))))))))))));
#line 695 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_16_16));
#line 695 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__V_17_17 | ((libs__globals__V_18_18 << (MR_Integer) 2)))));
#line 695 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__V_19_19));
#line 695 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_20_20));
#line 695 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_21_21));
#line 695 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_22_22));
#line 695 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__MaybeFeedback_4));
#line 695 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_24_24 | ((((libs__globals__V_25_25 << (MR_Integer) 3)) | ((libs__globals__V_26_26 << (MR_Integer) 6)))))));
#line 695 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_27_27));
#line 695 "globals.m"
    }
#line 695 "globals.m"
  }
#line 292 "globals.m"
}

#line 290 "globals.m"
void MR_CALL 
libs__globals__set_ssdb_trace_level_3_p_0(
#line 290 "globals.m"
  MR_Word libs__globals__SSTraceLevel_4,
#line 290 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 290 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 290 "globals.m"
{
#line 692 "globals.m"
  {
#line 692 "globals.m"
    MR_bool libs__globals__succeeded;
#line 692 "globals.m"
    MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
#line 692 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 692 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 692 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 692 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 692 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 692 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 692 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)));
#line 692 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 692 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)));
#line 692 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
#line 692 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
#line 692 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
#line 692 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
#line 692 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 692 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 692 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 692 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
#line 692 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) & (MR_Integer) 3);

#line 692 "globals.m"
    {
#line 692 "globals.m"
      MR_Word base;
#line 692 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 692 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
#line 692 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__V_9_9));
#line 692 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_10_10 | ((((libs__globals__V_11_11 << (MR_Integer) 3)) | ((((libs__globals__V_12_12 << (MR_Integer) 6)) | ((((libs__globals__V_13_13 << (MR_Integer) 8)) | ((((libs__globals__V_14_14 << (MR_Integer) 10)) | ((libs__globals__V_15_15 << (MR_Integer) 12)))))))))))));
#line 692 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_16_16));
#line 692 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__SSTraceLevel_4 | ((libs__globals__V_18_18 << (MR_Integer) 2)))));
#line 692 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__V_19_19));
#line 692 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_20_20));
#line 692 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_21_21));
#line 692 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_22_22));
#line 692 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__V_23_23));
#line 692 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_24_24 | ((((libs__globals__V_25_25 << (MR_Integer) 3)) | ((libs__globals__V_26_26 << (MR_Integer) 6)))))));
#line 692 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_27_27));
#line 692 "globals.m"
    }
#line 692 "globals.m"
  }
#line 290 "globals.m"
}

#line 289 "globals.m"
void MR_CALL 
libs__globals__set_trace_level_none_2_p_0(
#line 289 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_4,
#line 289 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_5)
#line 289 "globals.m"
{
#line 688 "globals.m"
  {
#line 688 "globals.m"
    MR_bool libs__globals__succeeded;
#line 688 "globals.m"
    MR_Word libs__globals__V_7_7;
#line 689 "globals.m"
    MR_Word libs__globals__V_8_8;
#line 689 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 689 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 689 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 689 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 689 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 689 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 689 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 689 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 689 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 689 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 689 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 689 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 689 "globals.m"
    MR_Word libs__globals__V_22_22;
#line 689 "globals.m"
    MR_Word libs__globals__V_23_23;
#line 689 "globals.m"
    MR_Word libs__globals__V_24_24;
#line 689 "globals.m"
    MR_Word libs__globals__V_25_25;
#line 689 "globals.m"
    MR_Word libs__globals__V_26_26;
#line 689 "globals.m"
    MR_Word libs__globals__V_14_14;

#line 689 "globals.m"
    {
#line 689 "globals.m"
      libs__globals__V_7_7 = libs__trace_params__trace_level_none_0_f_0();
    }
#line 689 "globals.m"
    libs__globals__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 0)));
#line 689 "globals.m"
    libs__globals__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 689 "globals.m"
    libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 689 "globals.m"
    libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 689 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 689 "globals.m"
    libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 689 "globals.m"
    libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 689 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 2)));
#line 689 "globals.m"
    libs__globals__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 689 "globals.m"
    libs__globals__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 689 "globals.m"
    libs__globals__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 4)));
#line 689 "globals.m"
    libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 5)));
#line 689 "globals.m"
    libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 6)));
#line 689 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 7)));
#line 689 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 8)));
#line 689 "globals.m"
    libs__globals__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 689 "globals.m"
    libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 689 "globals.m"
    libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 689 "globals.m"
    libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 10)));
#line 689 "globals.m"
    {
#line 689 "globals.m"
      MR_Word base;
#line 689 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 689 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_5 = base;
#line 689 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__V_8_8));
#line 689 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_9_9 | ((((libs__globals__V_10_10 << (MR_Integer) 3)) | ((((libs__globals__V_11_11 << (MR_Integer) 6)) | ((((libs__globals__V_12_12 << (MR_Integer) 8)) | ((((libs__globals__V_13_13 << (MR_Integer) 10)) | ((libs__globals__V_7_7 << (MR_Integer) 12)))))))))))));
#line 689 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_15_15));
#line 689 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__V_16_16 | ((libs__globals__V_17_17 << (MR_Integer) 2)))));
#line 689 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__V_18_18));
#line 689 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_19_19));
#line 689 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_20_20));
#line 689 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_21_21));
#line 689 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__V_22_22));
#line 689 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_23_23 | ((((libs__globals__V_24_24 << (MR_Integer) 3)) | ((libs__globals__V_25_25 << (MR_Integer) 6)))))));
#line 689 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_26_26));
#line 689 "globals.m"
    }
#line 688 "globals.m"
  }
#line 289 "globals.m"
}

#line 288 "globals.m"
void MR_CALL 
libs__globals__set_trace_level_3_p_0(
#line 288 "globals.m"
  MR_Word libs__globals__TraceLevel_4,
#line 288 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 288 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 288 "globals.m"
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
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);

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
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_10_10 | ((((libs__globals__V_11_11 << (MR_Integer) 3)) | ((((libs__globals__V_12_12 << (MR_Integer) 6)) | ((((libs__globals__V_13_13 << (MR_Integer) 8)) | ((((libs__globals__V_14_14 << (MR_Integer) 10)) | ((libs__globals__TraceLevel_4 << (MR_Integer) 12)))))))))))));
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
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_27_27));
#line 687 "globals.m"
    }
#line 687 "globals.m"
  }
#line 288 "globals.m"
}

#line 287 "globals.m"
void MR_CALL 
libs__globals__set_tags_method_3_p_0(
#line 287 "globals.m"
  MR_Word libs__globals__Tags_Method_4,
#line 287 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 287 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 287 "globals.m"
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
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
#line 684 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 684 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 684 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 684 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
#line 684 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);

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
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_10_10 | ((((libs__globals__V_11_11 << (MR_Integer) 3)) | ((((libs__globals__Tags_Method_4 << (MR_Integer) 6)) | ((((libs__globals__V_13_13 << (MR_Integer) 8)) | ((((libs__globals__V_14_14 << (MR_Integer) 10)) | ((libs__globals__V_15_15 << (MR_Integer) 12)))))))))))));
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
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__V_23_23));
#line 684 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_24_24 | ((((libs__globals__V_25_25 << (MR_Integer) 3)) | ((libs__globals__V_26_26 << (MR_Integer) 6)))))));
#line 684 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_27_27));
#line 684 "globals.m"
    }
#line 684 "globals.m"
  }
#line 287 "globals.m"
}

#line 286 "globals.m"
void MR_CALL 
libs__globals__set_gc_method_3_p_0(
#line 286 "globals.m"
  MR_Word libs__globals__GC_Method_4,
#line 286 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 286 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 286 "globals.m"
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
    MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) & (MR_Integer) 3);
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
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);

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
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_10_10 | ((((libs__globals__GC_Method_4 << (MR_Integer) 3)) | ((((libs__globals__V_12_12 << (MR_Integer) 6)) | ((((libs__globals__V_13_13 << (MR_Integer) 8)) | ((((libs__globals__V_14_14 << (MR_Integer) 10)) | ((libs__globals__V_15_15 << (MR_Integer) 12)))))))))))));
#line 681 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_16_16));
#line 681 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__V_17_17 | ((libs__globals__V_18_18 << (MR_Integer) 2)))));
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
#line 286 "globals.m"
}

#line 285 "globals.m"
void MR_CALL 
libs__globals__set_options_3_p_0(
#line 285 "globals.m"
  MR_Word libs__globals__Options_4,
#line 285 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 285 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 285 "globals.m"
{
#line 673 "globals.m"
  {
#line 673 "globals.m"
    MR_bool libs__globals__succeeded;
#line 673 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 673 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 673 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
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
    MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));

#line 673 "globals.m"
    {
#line 673 "globals.m"
      MR_Word base;
#line 673 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 673 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
#line 673 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__Options_4));
#line 673 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_10_10 | ((((libs__globals__V_11_11 << (MR_Integer) 3)) | ((((libs__globals__V_12_12 << (MR_Integer) 6)) | ((((libs__globals__V_13_13 << (MR_Integer) 8)) | ((((libs__globals__V_14_14 << (MR_Integer) 10)) | ((libs__globals__V_15_15 << (MR_Integer) 12)))))))))))));
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
#line 285 "globals.m"
}

#line 283 "globals.m"
void MR_CALL 
libs__globals__set_option_4_p_0(
#line 283 "globals.m"
  MR_Word libs__globals__Option_5,
#line 283 "globals.m"
  MR_Word libs__globals__OptionData_6,
#line 283 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_10,
#line 283 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_11)
#line 283 "globals.m"
{
#line 675 "globals.m"
  {
#line 675 "globals.m"
    MR_bool libs__globals__succeeded;
#line 675 "globals.m"
    MR_Word libs__globals__OptionTable0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 0)));
#line 675 "globals.m"
    MR_Word libs__globals__OptionTable_9;
#line 642 "globals.m"
    MR_Word libs__globals__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)));
#line 642 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 642 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 642 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 4)));
#line 642 "globals.m"
    MR_Word libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 5)));
#line 642 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 6)));
#line 642 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 7)));
#line 642 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 8)));
#line 642 "globals.m"
    MR_Word libs__globals__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 642 "globals.m"
    MR_Word libs__globals__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 10)));
#line 673 "globals.m"
    MR_Word libs__globals__V_40_40;
#line 673 "globals.m"
    MR_Word libs__globals__V_41_41;
#line 673 "globals.m"
    MR_Word libs__globals__V_42_42;
#line 673 "globals.m"
    MR_Word libs__globals__V_43_43;
#line 673 "globals.m"
    MR_Word libs__globals__V_44_44;
#line 673 "globals.m"
    MR_Word libs__globals__V_45_45;
#line 673 "globals.m"
    MR_Word libs__globals__V_46_46;
#line 673 "globals.m"
    MR_Word libs__globals__V_47_47;
#line 673 "globals.m"
    MR_Word libs__globals__V_48_48;
#line 673 "globals.m"
    MR_Word libs__globals__V_49_49;
#line 673 "globals.m"
    MR_Word libs__globals__V_50_50;
#line 673 "globals.m"
    MR_Word libs__globals__V_51_51;
#line 673 "globals.m"
    MR_Word libs__globals__V_52_52;
#line 673 "globals.m"
    MR_Word libs__globals__V_53_53;
#line 673 "globals.m"
    MR_Word libs__globals__V_54_54;
#line 673 "globals.m"
    MR_Word libs__globals__V_55_55;
#line 673 "globals.m"
    MR_Word libs__globals__V_56_56;
#line 673 "globals.m"
    MR_Word libs__globals__V_57_57;
#line 673 "globals.m"
    MR_Word libs__globals__V_39_39;

#line 677 "globals.m"
    {
#line 677 "globals.m"
      mercury__map__set_4_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (libs__globals__Option_5)), ((MR_Box) (libs__globals__OptionData_6)), libs__globals__OptionTable0_8, &libs__globals__OptionTable_9);
    }
#line 673 "globals.m"
    libs__globals__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 0)));
#line 673 "globals.m"
    libs__globals__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 673 "globals.m"
    libs__globals__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 673 "globals.m"
    libs__globals__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 673 "globals.m"
    libs__globals__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 673 "globals.m"
    libs__globals__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 673 "globals.m"
    libs__globals__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 673 "globals.m"
    libs__globals__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)));
#line 673 "globals.m"
    libs__globals__V_47_47 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 673 "globals.m"
    libs__globals__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 673 "globals.m"
    libs__globals__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 4)));
#line 673 "globals.m"
    libs__globals__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 5)));
#line 673 "globals.m"
    libs__globals__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 6)));
#line 673 "globals.m"
    libs__globals__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 7)));
#line 673 "globals.m"
    libs__globals__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 8)));
#line 673 "globals.m"
    libs__globals__V_54_54 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 673 "globals.m"
    libs__globals__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 673 "globals.m"
    libs__globals__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 673 "globals.m"
    libs__globals__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 10)));
#line 673 "globals.m"
    {
#line 673 "globals.m"
      MR_Word base;
#line 673 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 673 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_11 = base;
#line 673 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__OptionTable_9));
#line 673 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_40_40 | ((((libs__globals__V_41_41 << (MR_Integer) 3)) | ((((libs__globals__V_42_42 << (MR_Integer) 6)) | ((((libs__globals__V_43_43 << (MR_Integer) 8)) | ((((libs__globals__V_44_44 << (MR_Integer) 10)) | ((libs__globals__V_45_45 << (MR_Integer) 12)))))))))))));
#line 673 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_46_46));
#line 673 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__V_47_47 | ((libs__globals__V_48_48 << (MR_Integer) 2)))));
#line 673 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__V_49_49));
#line 673 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_50_50));
#line 673 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_51_51));
#line 673 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_52_52));
#line 673 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__V_53_53));
#line 673 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_54_54 | ((((libs__globals__V_55_55 << (MR_Integer) 3)) | ((libs__globals__V_56_56 << (MR_Integer) 6)))))));
#line 673 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_57_57));
#line 673 "globals.m"
    }
#line 675 "globals.m"
  }
#line 283 "globals.m"
}

#line 281 "globals.m"
void MR_CALL 
libs__globals__get_file_install_cmd_2_p_0(
#line 281 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 281 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 281 "globals.m"
{
#line 660 "globals.m"
  {
#line 660 "globals.m"
    MR_bool libs__globals__succeeded;
#line 660 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 660 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 660 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 660 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 660 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 660 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 660 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 660 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 660 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 660 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 660 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 660 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 660 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 660 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 660 "globals.m"
    MR_Word libs__globals__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 660 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 660 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 660 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);

#line 660 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 660 "globals.m"
  }
#line 281 "globals.m"
}

#line 280 "globals.m"
void MR_CALL 
libs__globals__get_target_env_type_2_p_0(
#line 280 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 280 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 280 "globals.m"
{
#line 659 "globals.m"
  {
#line 659 "globals.m"
    MR_bool libs__globals__succeeded;
#line 659 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 659 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 659 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 659 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 659 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 659 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 659 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 659 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 659 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 659 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 659 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 659 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 659 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 659 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 659 "globals.m"
    MR_Word libs__globals__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 659 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 659 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 659 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 659 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 659 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 659 "globals.m"
  }
#line 280 "globals.m"
}

#line 279 "globals.m"
void MR_CALL 
libs__globals__get_system_env_type_2_p_0(
#line 279 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 279 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 279 "globals.m"
{
#line 658 "globals.m"
  {
#line 658 "globals.m"
    MR_bool libs__globals__succeeded;
#line 658 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 658 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 658 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 658 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 658 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 658 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 658 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 658 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 658 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 658 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 658 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 658 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 658 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 658 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 658 "globals.m"
    MR_Word libs__globals__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 658 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 658 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 658 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 658 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 658 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 658 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 658 "globals.m"
  }
#line 279 "globals.m"
}

#line 278 "globals.m"
void MR_CALL 
libs__globals__get_host_env_type_2_p_0(
#line 278 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 278 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 278 "globals.m"
{
#line 657 "globals.m"
  {
#line 657 "globals.m"
    MR_bool libs__globals__succeeded;
#line 657 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 657 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 657 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 657 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 657 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 657 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 657 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 657 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 657 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 657 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 657 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 657 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 657 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 657 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 657 "globals.m"
    MR_Word libs__globals__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 657 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 657 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 657 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 657 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 657 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 657 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 657 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 657 "globals.m"
  }
#line 278 "globals.m"
}

#line 277 "globals.m"
void MR_CALL 
libs__globals__get_maybe_feedback_info_2_p_0(
#line 277 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 277 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 277 "globals.m"
{
#line 656 "globals.m"
  {
#line 656 "globals.m"
    MR_bool libs__globals__succeeded;
#line 656 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 656 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 656 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 656 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 656 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 656 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 656 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 656 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 656 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 656 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 656 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 656 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 656 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 656 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 656 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 656 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 656 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 656 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 656 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 656 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 656 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 656 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 656 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 656 "globals.m"
  }
#line 277 "globals.m"
}

#line 275 "globals.m"
void MR_CALL 
libs__globals__get_maybe_il_version_number_2_p_0(
#line 275 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 275 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 275 "globals.m"
{
#line 655 "globals.m"
  {
#line 655 "globals.m"
    MR_bool libs__globals__succeeded;
#line 655 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 655 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 655 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 655 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 655 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 655 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 655 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 655 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 655 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 655 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 655 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 655 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 655 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 655 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 655 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 655 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 655 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 655 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 655 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 655 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 655 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 655 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 655 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 655 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 655 "globals.m"
  }
#line 275 "globals.m"
}

#line 274 "globals.m"
void MR_CALL 
libs__globals__get_reuse_strategy_2_p_0(
#line 274 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 274 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 274 "globals.m"
{
#line 654 "globals.m"
  {
#line 654 "globals.m"
    MR_bool libs__globals__succeeded;
#line 654 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 654 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 654 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 654 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 654 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 654 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 654 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 654 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 654 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 654 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 654 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 654 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 654 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 654 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 654 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 654 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 654 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 654 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 654 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 654 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 654 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 654 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 654 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 654 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 654 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 654 "globals.m"
  }
#line 274 "globals.m"
}

#line 272 "globals.m"
void MR_CALL 
libs__globals__get_csharp_compiler_type_2_p_0(
#line 272 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 272 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 272 "globals.m"
{
#line 653 "globals.m"
  {
#line 653 "globals.m"
    MR_bool libs__globals__succeeded;
#line 653 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 653 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 653 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 653 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 653 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 653 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 653 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 653 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 653 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 653 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 653 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 653 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 653 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 653 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 653 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 653 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 653 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 653 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 653 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 653 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 653 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 653 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 653 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 653 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 653 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 653 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 653 "globals.m"
  }
#line 272 "globals.m"
}

#line 271 "globals.m"
void MR_CALL 
libs__globals__get_c_compiler_type_2_p_0(
#line 271 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 271 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 271 "globals.m"
{
#line 652 "globals.m"
  {
#line 652 "globals.m"
    MR_bool libs__globals__succeeded;
#line 652 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 652 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 652 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 652 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 652 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 652 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 652 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 652 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 652 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 652 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 652 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 652 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 652 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 652 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 652 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 652 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 652 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 652 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 652 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 652 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 652 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 652 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 652 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 652 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 652 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 652 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 652 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 652 "globals.m"
  }
#line 271 "globals.m"
}

#line 270 "globals.m"
void MR_CALL 
libs__globals__get_maybe_thread_safe_2_p_0(
#line 270 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 270 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 270 "globals.m"
{
#line 651 "globals.m"
  {
#line 651 "globals.m"
    MR_bool libs__globals__succeeded;
#line 651 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 651 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 651 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 651 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 651 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 651 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 651 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 651 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 651 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 651 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 651 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 651 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 651 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 651 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 651 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 651 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 651 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 651 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 651 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 651 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 651 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 651 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 651 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 651 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 651 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 651 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 651 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 651 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 651 "globals.m"
  }
#line 270 "globals.m"
}

#line 269 "globals.m"
void MR_CALL 
libs__globals__get_ssdb_trace_level_2_p_0(
#line 269 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 269 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 269 "globals.m"
{
#line 650 "globals.m"
  {
#line 650 "globals.m"
    MR_bool libs__globals__succeeded;
#line 650 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 650 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 650 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 650 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 650 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 650 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 650 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 650 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 650 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 650 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 650 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 650 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 650 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 650 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 650 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 650 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 650 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 650 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 650 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 650 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 650 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 650 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 650 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 650 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 650 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 650 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 650 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 650 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 650 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 650 "globals.m"
  }
#line 269 "globals.m"
}

#line 268 "globals.m"
void MR_CALL 
libs__globals__get_trace_suppress_2_p_0(
#line 268 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 268 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 268 "globals.m"
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
    MR_Word libs__globals__V_11_11;
#line 649 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 649 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 649 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 649 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 649 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 649 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 649 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 649 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 649 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 649 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 649 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 649 "globals.m"
    libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 649 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 649 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 649 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 649 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 649 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 649 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 649 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 649 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 649 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 649 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 649 "globals.m"
  }
#line 268 "globals.m"
}

#line 267 "globals.m"
void MR_CALL 
libs__globals__get_trace_level_2_p_0(
#line 267 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 267 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 267 "globals.m"
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
    MR_Word libs__globals__V_10_10;
#line 648 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 648 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 648 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 648 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 648 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 648 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 648 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 648 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 648 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 648 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 648 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 648 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 648 "globals.m"
    libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 648 "globals.m"
    libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 648 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 648 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 648 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 648 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 648 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 648 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 648 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 648 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 648 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 648 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 648 "globals.m"
  }
#line 267 "globals.m"
}

#line 266 "globals.m"
void MR_CALL 
libs__globals__get_termination2_norm_2_p_0(
#line 266 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 266 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 266 "globals.m"
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
    MR_Word libs__globals__V_9_9;
#line 647 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 647 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 647 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 647 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 647 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 647 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 647 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 647 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 647 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 647 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 647 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 647 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 647 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 647 "globals.m"
    libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 647 "globals.m"
    libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 647 "globals.m"
    libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 647 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 647 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 647 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 647 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 647 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 647 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 647 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 647 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 647 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 647 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 647 "globals.m"
  }
#line 266 "globals.m"
}

#line 265 "globals.m"
void MR_CALL 
libs__globals__get_termination_norm_2_p_0(
#line 265 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 265 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 265 "globals.m"
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
    MR_Word libs__globals__V_8_8;
#line 646 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 646 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 646 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 646 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 646 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 646 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 646 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 646 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 646 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 646 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 646 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 646 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 646 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 646 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 646 "globals.m"
    libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 646 "globals.m"
    libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 646 "globals.m"
    libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 646 "globals.m"
    libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 646 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 646 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 646 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 646 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 646 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 646 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 646 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 646 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 646 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 646 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 646 "globals.m"
  }
#line 265 "globals.m"
}

#line 264 "globals.m"
void MR_CALL 
libs__globals__get_tags_method_2_p_0(
#line 264 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 264 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 264 "globals.m"
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
    MR_Word libs__globals__V_7_7;
#line 645 "globals.m"
    MR_Word libs__globals__V_8_8;
#line 645 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 645 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 645 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 645 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 645 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 645 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 645 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 645 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 645 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 645 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 645 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 645 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 645 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 645 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 645 "globals.m"
    libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 645 "globals.m"
    libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 645 "globals.m"
    libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 645 "globals.m"
    libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 645 "globals.m"
    libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 645 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 645 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 645 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 645 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 645 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 645 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
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
#line 264 "globals.m"
}

#line 263 "globals.m"
void MR_CALL 
libs__globals__get_gc_method_2_p_0(
#line 263 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 263 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 263 "globals.m"
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
    MR_Word libs__globals__V_6_6;
#line 644 "globals.m"
    MR_Word libs__globals__V_7_7;
#line 644 "globals.m"
    MR_Word libs__globals__V_8_8;
#line 644 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 644 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 644 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 644 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 644 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 644 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 644 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 644 "globals.m"
    MR_Word libs__globals__V_16_16;
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
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 644 "globals.m"
    libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 644 "globals.m"
    libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 644 "globals.m"
    libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 644 "globals.m"
    libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 644 "globals.m"
    libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 644 "globals.m"
    libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 644 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 644 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 644 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 644 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 644 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
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
#line 263 "globals.m"
}

#line 665 "globals.m"
static MR_Box MR_CALL 
libs__globals__get_backend_foreign_languages_2_p_0_1(
#line 665 "globals.m"
  MR_Box libs__globals__closure_arg,
#line 665 "globals.m"
  MR_Box libs__globals__wrapper_arg_1)
#line 665 "globals.m"
{
#line 665 "globals.m"
  {
#line 665 "globals.m"
    MR_Box libs__globals__wrapper_arg_2;
#line 665 "globals.m"
    MR_Box libs__globals__closure = libs__globals__closure_arg;
#line 665 "globals.m"
    MR_Word libs__globals__conv0_HeadVar__2_12;

#line 665 "globals.m"
    {
#line 665 "globals.m"
      libs__globals__conv0_HeadVar__2_12 = libs__globals__IntroducedFrom__func__get_backend_foreign_languages__668__1_1_f_0(((MR_String) libs__globals__wrapper_arg_1));
    }
#line 665 "globals.m"
    libs__globals__wrapper_arg_2 = ((MR_Box) (libs__globals__conv0_HeadVar__2_12));
#line 665 "globals.m"
    return libs__globals__wrapper_arg_2;
#line 665 "globals.m"
  }
#line 665 "globals.m"
}

#line 261 "globals.m"
void MR_CALL 
libs__globals__get_backend_foreign_languages_2_p_0(
#line 261 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 261 "globals.m"
  MR_Word * libs__globals__ForeignLangs_4)
#line 261 "globals.m"
{
#line 663 "globals.m"
  {
#line 663 "globals.m"
    MR_bool libs__globals__succeeded;
#line 663 "globals.m"
    MR_Word libs__globals__LangStrs_5;

#line 664 "globals.m"
    {
#line 664 "globals.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 261, &libs__globals__LangStrs_5);
    }
#line 665 "globals.m"
    {
#line 665 "globals.m"
      *libs__globals__ForeignLangs_4 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &libs__globals_scalar_common_2[4], libs__globals__LangStrs_5);
    }
#line 663 "globals.m"
  }
#line 261 "globals.m"
}

#line 260 "globals.m"
void MR_CALL 
libs__globals__get_target_2_p_0(
#line 260 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 260 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 260 "globals.m"
{
#line 643 "globals.m"
  {
#line 643 "globals.m"
    MR_bool libs__globals__succeeded;
#line 643 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 643 "globals.m"
    MR_Word libs__globals__V_5_5;
#line 643 "globals.m"
    MR_Word libs__globals__V_6_6;
#line 643 "globals.m"
    MR_Word libs__globals__V_7_7;
#line 643 "globals.m"
    MR_Word libs__globals__V_8_8;
#line 643 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 643 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 643 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 643 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 643 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 643 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 643 "globals.m"
    MR_Word libs__globals__V_15_15;
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
    *libs__globals__HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 643 "globals.m"
    libs__globals__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 643 "globals.m"
    libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 643 "globals.m"
    libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 643 "globals.m"
    libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 643 "globals.m"
    libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 643 "globals.m"
    libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 643 "globals.m"
    libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 643 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 643 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 643 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 643 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
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
#line 642 "globals.m"
  {
#line 642 "globals.m"
    MR_bool libs__globals__succeeded;
#line 642 "globals.m"
    MR_Word libs__globals__V_4_4;
#line 642 "globals.m"
    MR_Word libs__globals__V_5_5;
#line 642 "globals.m"
    MR_Word libs__globals__V_6_6;
#line 642 "globals.m"
    MR_Word libs__globals__V_7_7;
#line 642 "globals.m"
    MR_Word libs__globals__V_8_8;
#line 642 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 642 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 642 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 642 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 642 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 642 "globals.m"
    MR_Word libs__globals__V_14_14;
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
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 642 "globals.m"
    libs__globals__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 642 "globals.m"
    libs__globals__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 642 "globals.m"
    libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 642 "globals.m"
    libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 642 "globals.m"
    libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 642 "globals.m"
    libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 642 "globals.m"
    libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 642 "globals.m"
    libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 642 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 642 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 642 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
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
#line 259 "globals.m"
}

#line 251 "globals.m"
void MR_CALL 
libs__globals__globals_init_20_p_0(
#line 251 "globals.m"
  MR_Word libs__globals__Options_21,
#line 251 "globals.m"
  MR_Word libs__globals__Target_22,
#line 251 "globals.m"
  MR_Word libs__globals__GC_Method_23,
#line 251 "globals.m"
  MR_Word libs__globals__TagsMethod_24,
#line 251 "globals.m"
  MR_Word libs__globals__TerminationNorm_25,
#line 251 "globals.m"
  MR_Word libs__globals__Termination2Norm_26,
#line 251 "globals.m"
  MR_Word libs__globals__TraceLevel_27,
#line 251 "globals.m"
  MR_Word libs__globals__TraceSuppress_28,
#line 251 "globals.m"
  MR_Word libs__globals__SSTraceLevel_29,
#line 251 "globals.m"
  MR_Word libs__globals__MaybeThreadSafe_30,
#line 251 "globals.m"
  MR_Word libs__globals__C_CompilerType_31,
#line 251 "globals.m"
  MR_Word libs__globals__CSharp_CompilerType_32,
#line 251 "globals.m"
  MR_Word libs__globals__ReuseStrategy_33,
#line 251 "globals.m"
  MR_Word libs__globals__MaybeILVersion_34,
#line 251 "globals.m"
  MR_Word libs__globals__MaybeFeedback_35,
#line 251 "globals.m"
  MR_Word libs__globals__HostEnvType_36,
#line 251 "globals.m"
  MR_Word libs__globals__SystemEnvType_37,
#line 251 "globals.m"
  MR_Word libs__globals__TargetEnvType_38,
#line 251 "globals.m"
  MR_Word libs__globals__FileInstallCmd_39,
#line 251 "globals.m"
  MR_Word * libs__globals__Globals_40)
#line 251 "globals.m"
{
#line 635 "globals.m"
  {
#line 635 "globals.m"
    MR_bool libs__globals__succeeded;

#line 635 "globals.m"
    {
#line 635 "globals.m"
      MR_Word base;
#line 635 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 635 "globals.m"
      *libs__globals__Globals_40 = base;
#line 635 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__Options_21));
#line 635 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__Target_22 | ((((libs__globals__GC_Method_23 << (MR_Integer) 3)) | ((((libs__globals__TagsMethod_24 << (MR_Integer) 6)) | ((((libs__globals__TerminationNorm_25 << (MR_Integer) 8)) | ((((libs__globals__Termination2Norm_26 << (MR_Integer) 10)) | ((libs__globals__TraceLevel_27 << (MR_Integer) 12)))))))))))));
#line 635 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__TraceSuppress_28));
#line 635 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__SSTraceLevel_29 | ((libs__globals__MaybeThreadSafe_30 << (MR_Integer) 2)))));
#line 635 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__C_CompilerType_31));
#line 635 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__CSharp_CompilerType_32));
#line 635 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__ReuseStrategy_33));
#line 635 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__MaybeILVersion_34));
#line 635 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__MaybeFeedback_35));
#line 635 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__HostEnvType_36 | ((((libs__globals__SystemEnvType_37 << (MR_Integer) 3)) | ((libs__globals__TargetEnvType_38 << (MR_Integer) 6)))))));
#line 635 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__FileInstallCmd_39));
#line 635 "globals.m"
    }
#line 635 "globals.m"
  }
#line 251 "globals.m"
}

#line 235 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_ssdb_trace_level_3_p_0(
#line 235 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 235 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 235 "globals.m"
  MR_Word * libs__globals__HeadVar__3_3)
#line 235 "globals.m"
{
#line 567 "globals.m"
  {
#line 567 "globals.m"
    MR_bool libs__globals__succeeded;

#line 567 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "deep") == 0))
#line 571 "globals.m"
      {
#line 571 "globals.m"
        *libs__globals__HeadVar__3_3 = (MR_Integer) 2;
#line 571 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 571 "globals.m"
      }
#line 567 "globals.m"
    else
#line 567 "globals.m"
      if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "none") == 0))
#line 569 "globals.m"
        {
#line 569 "globals.m"
          *libs__globals__HeadVar__3_3 = (MR_Integer) 0;
#line 569 "globals.m"
          libs__globals__succeeded = MR_TRUE;
#line 569 "globals.m"
        }
#line 567 "globals.m"
      else
#line 567 "globals.m"
        if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "default") == 0))
#line 567 "globals.m"
          {
#line 567 "globals.m"
            if ((libs__globals__HeadVar__2_2 == (MR_Integer) 0))
#line 568 "globals.m"
              *libs__globals__HeadVar__3_3 = (MR_Integer) 0;
#line 567 "globals.m"
            else
#line 567 "globals.m"
              *libs__globals__HeadVar__3_3 = (MR_Integer) 2;
#line 567 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 567 "globals.m"
          }
#line 567 "globals.m"
        else
#line 567 "globals.m"
          if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "shallow") == 0))
#line 570 "globals.m"
            {
#line 570 "globals.m"
              *libs__globals__HeadVar__3_3 = (MR_Integer) 1;
#line 570 "globals.m"
              libs__globals__succeeded = MR_TRUE;
#line 570 "globals.m"
            }
#line 567 "globals.m"
          else
#line 567 "globals.m"
            libs__globals__succeeded = MR_FALSE;
#line 567 "globals.m"
    return libs__globals__succeeded;
#line 567 "globals.m"
  }
#line 235 "globals.m"
}

#line 234 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_env_type_2_p_0(
#line 234 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 234 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 234 "globals.m"
{
#line 561 "globals.m"
  {
#line 561 "globals.m"
    MR_bool libs__globals__succeeded;

#line 561 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "msys") == 0))
#line 563 "globals.m"
      {
#line 563 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 2;
#line 563 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 563 "globals.m"
      }
#line 561 "globals.m"
    else
#line 561 "globals.m"
      if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "posix") == 0))
#line 561 "globals.m"
        {
#line 561 "globals.m"
          *libs__globals__HeadVar__2_2 = (MR_Integer) 0;
#line 561 "globals.m"
          libs__globals__succeeded = MR_TRUE;
#line 561 "globals.m"
        }
#line 561 "globals.m"
      else
#line 561 "globals.m"
        if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "cygwin") == 0))
#line 562 "globals.m"
          {
#line 562 "globals.m"
            *libs__globals__HeadVar__2_2 = (MR_Integer) 1;
#line 562 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 562 "globals.m"
          }
#line 561 "globals.m"
        else
#line 561 "globals.m"
          if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "windows") == 0))
#line 564 "globals.m"
            {
#line 564 "globals.m"
              *libs__globals__HeadVar__2_2 = (MR_Integer) 3;
#line 564 "globals.m"
              libs__globals__succeeded = MR_TRUE;
#line 564 "globals.m"
            }
#line 561 "globals.m"
          else
#line 561 "globals.m"
            if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "powershell") == 0))
#line 565 "globals.m"
              {
#line 565 "globals.m"
                *libs__globals__HeadVar__2_2 = (MR_Integer) 4;
#line 565 "globals.m"
                libs__globals__succeeded = MR_TRUE;
#line 565 "globals.m"
              }
#line 561 "globals.m"
            else
#line 561 "globals.m"
              libs__globals__succeeded = MR_FALSE;
#line 561 "globals.m"
    return libs__globals__succeeded;
#line 561 "globals.m"
  }
#line 234 "globals.m"
}

#line 232 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_reuse_strategy_3_p_0(
#line 232 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 232 "globals.m"
  MR_Integer libs__globals__NCells_2,
#line 232 "globals.m"
  MR_Word * libs__globals__HeadVar__3_3)
#line 232 "globals.m"
{
#line 573 "globals.m"
  {
#line 573 "globals.m"
    MR_bool libs__globals__succeeded;

#line 573 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "same_cons_id") == 0))
#line 573 "globals.m"
      {
#line 573 "globals.m"
        *libs__globals__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 573 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 573 "globals.m"
      }
#line 573 "globals.m"
    else
#line 573 "globals.m"
      if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "within_n_cells_difference") == 0))
#line 574 "globals.m"
        {
#line 574 "globals.m"
          {
#line 574 "globals.m"
            MR_Word base;
#line 574 "globals.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 574 "globals.m"
            *libs__globals__HeadVar__3_3 = base;
#line 574 "globals.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__globals__NCells_2));
#line 574 "globals.m"
          }
#line 574 "globals.m"
          libs__globals__succeeded = MR_TRUE;
#line 574 "globals.m"
        }
#line 573 "globals.m"
      else
#line 573 "globals.m"
        libs__globals__succeeded = MR_FALSE;
#line 573 "globals.m"
    return libs__globals__succeeded;
#line 573 "globals.m"
  }
#line 232 "globals.m"
}

#line 230 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_csharp_compiler_type_2_p_0(
#line 230 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 230 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 230 "globals.m"
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
#line 230 "globals.m"
}

#line 457 "globals.m"
static MR_bool MR_CALL 
libs__globals__convert_c_compiler_type_2_p_0_1(
#line 457 "globals.m"
  MR_Box libs__globals__closure_arg,
#line 457 "globals.m"
  MR_Box libs__globals__wrapper_arg_1)
#line 457 "globals.m"
{
#line 457 "globals.m"
  {
#line 457 "globals.m"
    MR_bool libs__globals__succeeded;
#line 457 "globals.m"
    MR_Box libs__globals__closure = libs__globals__closure_arg;

#line 457 "globals.m"
    {
#line 457 "globals.m"
      return libs__globals__succeeded = libs__globals__IntroducedFrom__pred__convert_c_compiler_type_with_version__457__1_1_p_0(((MR_Char) (MR_Word) libs__globals__wrapper_arg_1));
    }
#line 457 "globals.m"
    return libs__globals__succeeded;
#line 457 "globals.m"
  }
#line 457 "globals.m"
}

#line 228 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_c_compiler_type_2_p_0(
#line 228 "globals.m"
  MR_String libs__globals__CC_Str_3,
#line 228 "globals.m"
  MR_Word * libs__globals__C_CompilerType_4)
#line 228 "globals.m"
{
#line 435 "globals.m"
  {
#line 435 "globals.m"
    MR_bool libs__globals__succeeded;
#line 435 "globals.m"
    MR_Word libs__globals__C_CompilerType0_5;

#line 446 "globals.m"
    if ((strcmp(libs__globals__CC_Str_3, (MR_String) "cl") == 0))
#line 449 "globals.m"
      {
#line 449 "globals.m"
        libs__globals__C_CompilerType0_5 = (MR_Word) MR_mkword(MR_mktag(3), &libs__globals_scalar_common_3[0]);
#line 449 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 449 "globals.m"
      }
#line 446 "globals.m"
    else
#line 446 "globals.m"
      if ((strcmp(libs__globals__CC_Str_3, (MR_String) "gcc") == 0))
#line 446 "globals.m"
        {
#line 446 "globals.m"
          libs__globals__C_CompilerType0_5 = (MR_Word) MR_mkword(MR_mktag(1), &libs__globals_scalar_common_2[2]);
#line 446 "globals.m"
          libs__globals__succeeded = MR_TRUE;
#line 446 "globals.m"
        }
#line 446 "globals.m"
      else
#line 446 "globals.m"
        if ((strcmp(libs__globals__CC_Str_3, (MR_String) "lcc") == 0))
#line 448 "globals.m"
          {
#line 448 "globals.m"
            libs__globals__C_CompilerType0_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 448 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 448 "globals.m"
          }
#line 446 "globals.m"
        else
#line 446 "globals.m"
          if ((strcmp(libs__globals__CC_Str_3, (MR_String) "msvc") == 0))
#line 450 "globals.m"
            {
#line 450 "globals.m"
              libs__globals__C_CompilerType0_5 = (MR_Word) MR_mkword(MR_mktag(3), &libs__globals_scalar_common_3[0]);
#line 450 "globals.m"
              libs__globals__succeeded = MR_TRUE;
#line 450 "globals.m"
            }
#line 446 "globals.m"
          else
#line 446 "globals.m"
            if ((strcmp(libs__globals__CC_Str_3, (MR_String) "clang") == 0))
#line 447 "globals.m"
              {
#line 447 "globals.m"
                libs__globals__C_CompilerType0_5 = (MR_Word) MR_mkword(MR_mktag(2), &libs__globals_scalar_common_3[1]);
#line 447 "globals.m"
                libs__globals__succeeded = MR_TRUE;
#line 447 "globals.m"
              }
#line 446 "globals.m"
            else
#line 446 "globals.m"
              if ((strcmp(libs__globals__CC_Str_3, (MR_String) "unknown") == 0))
#line 451 "globals.m"
                {
#line 451 "globals.m"
                  libs__globals__C_CompilerType0_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 451 "globals.m"
                  libs__globals__succeeded = MR_TRUE;
#line 451 "globals.m"
                }
#line 446 "globals.m"
              else
#line 446 "globals.m"
                libs__globals__succeeded = MR_FALSE;
#line 435 "globals.m"
    if (libs__globals__succeeded)
#line 434 "globals.m"
      {
#line 434 "globals.m"
        *libs__globals__C_CompilerType_4 = libs__globals__C_CompilerType0_5;
#line 434 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 434 "globals.m"
      }
#line 435 "globals.m"
    else
#line 456 "globals.m"
      {
#line 456 "globals.m"
        MR_Word libs__globals__Tokens_14;
#line 461 "globals.m"
        MR_String libs__globals__Major_16;
#line 461 "globals.m"
        MR_String libs__globals__Minor_17;
#line 461 "globals.m"
        MR_String libs__globals__Patch_18;
#line 459 "globals.m"
        MR_String libs__globals__V_22_22;
#line 459 "globals.m"
        MR_Word libs__globals__V_23_23;
#line 459 "globals.m"
        MR_Word libs__globals__V_24_24;
#line 459 "globals.m"
        MR_Word libs__globals__V_25_25;
#line 459 "globals.m"
        MR_Word libs__globals__V_26_26;

#line 457 "globals.m"
        {
#line 457 "globals.m"
          libs__globals__Tokens_14 = mercury__string__words_separator_2_f_0((MR_Word) &libs__globals_scalar_common_2[3], libs__globals__CC_Str_3);
        }
#line 459 "globals.m"
        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__Tokens_14)) == (MR_mktag((MR_Integer) 1)));
#line 459 "globals.m"
        if (libs__globals__succeeded)
#line 459 "globals.m"
          {
#line 459 "globals.m"
            libs__globals__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_14, (MR_Integer) 0)));
#line 459 "globals.m"
            libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_14, (MR_Integer) 1)));
#line 459 "globals.m"
            libs__globals__succeeded = (strcmp(libs__globals__V_22_22, (MR_String) "gcc") == 0);
#line 459 "globals.m"
            if (libs__globals__succeeded)
#line 459 "globals.m"
              {
#line 459 "globals.m"
                libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 459 "globals.m"
                if (libs__globals__succeeded)
#line 459 "globals.m"
                  {
#line 459 "globals.m"
                    libs__globals__Major_16 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_23_23, (MR_Integer) 0)));
#line 459 "globals.m"
                    libs__globals__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_23_23, (MR_Integer) 1)));
#line 459 "globals.m"
                    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 459 "globals.m"
                    if (libs__globals__succeeded)
#line 459 "globals.m"
                      {
#line 459 "globals.m"
                        libs__globals__Minor_17 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_24_24, (MR_Integer) 0)));
#line 459 "globals.m"
                        libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_24_24, (MR_Integer) 1)));
#line 459 "globals.m"
                        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 459 "globals.m"
                        if (libs__globals__succeeded)
#line 459 "globals.m"
                          {
#line 459 "globals.m"
                            libs__globals__Patch_18 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_25_25, (MR_Integer) 0)));
#line 459 "globals.m"
                            libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_25_25, (MR_Integer) 1)));
#line 459 "globals.m"
                            libs__globals__succeeded = (libs__globals__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 459 "globals.m"
                          }
#line 459 "globals.m"
                      }
#line 459 "globals.m"
                  }
#line 459 "globals.m"
              }
#line 459 "globals.m"
          }
#line 461 "globals.m"
        if (libs__globals__succeeded)
#line 497 "globals.m"
          {
#line 492 "globals.m"
            libs__globals__succeeded = (strcmp(libs__globals__Major_16, (MR_String) "u") == 0);
#line 492 "globals.m"
            if (libs__globals__succeeded)
#line 492 "globals.m"
              {
#line 493 "globals.m"
                libs__globals__succeeded = (strcmp(libs__globals__Minor_17, (MR_String) "u") == 0);
#line 492 "globals.m"
                if (libs__globals__succeeded)
#line 494 "globals.m"
                  libs__globals__succeeded = (strcmp(libs__globals__Patch_18, (MR_String) "u") == 0);
#line 492 "globals.m"
              }
#line 497 "globals.m"
            if (libs__globals__succeeded)
#line 496 "globals.m"
              {
#line 496 "globals.m"
                *libs__globals__C_CompilerType_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__globals_scalar_common_2[2]);
#line 496 "globals.m"
                libs__globals__succeeded = MR_TRUE;
#line 496 "globals.m"
              }
#line 497 "globals.m"
            else
#line 524 "globals.m"
              {
#line 524 "globals.m"
                MR_Integer libs__globals__Major_47;
#line 498 "globals.m"
                MR_Integer libs__globals__V_53_53;

#line 498 "globals.m"
                {
#line 498 "globals.m"
                  libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Major_16, &libs__globals__Major_47);
                }
#line 498 "globals.m"
                if (libs__globals__succeeded)
#line 498 "globals.m"
                  {
#line 499 "globals.m"
                    libs__globals__V_53_53 = (MR_Integer) 2;
#line 499 "globals.m"
                    libs__globals__succeeded = (libs__globals__Major_47 >= libs__globals__V_53_53);
#line 498 "globals.m"
                  }
#line 524 "globals.m"
                if (libs__globals__succeeded)
#line 505 "globals.m"
                  {
#line 502 "globals.m"
                    libs__globals__succeeded = (strcmp(libs__globals__Minor_17, (MR_String) "u") == 0);
#line 505 "globals.m"
                    if (libs__globals__succeeded)
#line 504 "globals.m"
                      {
#line 504 "globals.m"
                        MR_Word libs__globals__V_54_54;

#line 504 "globals.m"
                        {
#line 504 "globals.m"
                          libs__globals__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 504 "globals.m"
                          MR_hl_field(MR_mktag(1), libs__globals__V_54_54, 0) = ((MR_Box) (libs__globals__Major_47));
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
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__globals__V_54_54));
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
                        MR_Integer libs__globals__Minor_48;
#line 506 "globals.m"
                        MR_Integer libs__globals__V_57_57;

#line 506 "globals.m"
                        {
#line 506 "globals.m"
                          libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Minor_17, &libs__globals__Minor_48);
                        }
#line 506 "globals.m"
                        if (libs__globals__succeeded)
#line 506 "globals.m"
                          {
#line 507 "globals.m"
                            libs__globals__V_57_57 = (MR_Integer) 0;
#line 507 "globals.m"
                            libs__globals__succeeded = (libs__globals__Minor_48 >= libs__globals__V_57_57);
#line 506 "globals.m"
                          }
#line 521 "globals.m"
                        if (libs__globals__succeeded)
#line 513 "globals.m"
                          {
#line 510 "globals.m"
                            libs__globals__succeeded = (strcmp(libs__globals__Patch_18, (MR_String) "u") == 0);
#line 513 "globals.m"
                            if (libs__globals__succeeded)
#line 512 "globals.m"
                              {
#line 512 "globals.m"
                                MR_Word libs__globals__V_58_58;
#line 512 "globals.m"
                                MR_Word libs__globals__V_59_59;

#line 512 "globals.m"
                                {
#line 512 "globals.m"
                                  libs__globals__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 512 "globals.m"
                                  MR_hl_field(MR_mktag(1), libs__globals__V_58_58, 0) = ((MR_Box) (libs__globals__Major_47));
#line 512 "globals.m"
                                }
#line 512 "globals.m"
                                {
#line 512 "globals.m"
                                  libs__globals__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 512 "globals.m"
                                  MR_hl_field(MR_mktag(1), libs__globals__V_59_59, 0) = ((MR_Box) (libs__globals__Minor_48));
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
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__globals__V_58_58));
#line 512 "globals.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__globals__V_59_59));
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
                                MR_Integer libs__globals__Patch_49;
#line 514 "globals.m"
                                MR_Integer libs__globals__V_61_61;

#line 514 "globals.m"
                                {
#line 514 "globals.m"
                                  libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Patch_18, &libs__globals__Patch_49);
                                }
#line 514 "globals.m"
                                if (libs__globals__succeeded)
#line 514 "globals.m"
                                  {
#line 515 "globals.m"
                                    libs__globals__V_61_61 = (MR_Integer) 0;
#line 515 "globals.m"
                                    libs__globals__succeeded = (libs__globals__Patch_49 >= libs__globals__V_61_61);
#line 514 "globals.m"
                                  }
#line 518 "globals.m"
                                if (libs__globals__succeeded)
#line 517 "globals.m"
                                  {
#line 517 "globals.m"
                                    MR_Word libs__globals__V_62_62;
#line 517 "globals.m"
                                    MR_Word libs__globals__V_63_63;
#line 517 "globals.m"
                                    MR_Word libs__globals__V_64_64;

#line 517 "globals.m"
                                    {
#line 517 "globals.m"
                                      libs__globals__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 517 "globals.m"
                                      MR_hl_field(MR_mktag(1), libs__globals__V_62_62, 0) = ((MR_Box) (libs__globals__Major_47));
#line 517 "globals.m"
                                    }
#line 517 "globals.m"
                                    {
#line 517 "globals.m"
                                      libs__globals__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 517 "globals.m"
                                      MR_hl_field(MR_mktag(1), libs__globals__V_63_63, 0) = ((MR_Box) (libs__globals__Minor_48));
#line 517 "globals.m"
                                    }
#line 517 "globals.m"
                                    {
#line 517 "globals.m"
                                      libs__globals__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 517 "globals.m"
                                      MR_hl_field(MR_mktag(1), libs__globals__V_64_64, 0) = ((MR_Box) (libs__globals__Patch_49));
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
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__globals__V_62_62));
#line 517 "globals.m"
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__globals__V_63_63));
#line 517 "globals.m"
                                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (libs__globals__V_64_64));
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
#line 461 "globals.m"
        else
#line 463 "globals.m"
          {
#line 463 "globals.m"
            MR_String libs__globals__Major_40;
#line 463 "globals.m"
            MR_String libs__globals__Minor_41;
#line 463 "globals.m"
            MR_String libs__globals__Patch_42;
#line 461 "globals.m"
            MR_String libs__globals__V_27_27;
#line 461 "globals.m"
            MR_Word libs__globals__V_28_28;
#line 461 "globals.m"
            MR_Word libs__globals__V_29_29;
#line 461 "globals.m"
            MR_Word libs__globals__V_30_30;
#line 461 "globals.m"
            MR_Word libs__globals__V_31_31;

#line 461 "globals.m"
            libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__Tokens_14)) == (MR_mktag((MR_Integer) 1)));
#line 461 "globals.m"
            if (libs__globals__succeeded)
#line 461 "globals.m"
              {
#line 461 "globals.m"
                libs__globals__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_14, (MR_Integer) 0)));
#line 461 "globals.m"
                libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_14, (MR_Integer) 1)));
#line 461 "globals.m"
                libs__globals__succeeded = (strcmp(libs__globals__V_27_27, (MR_String) "clang") == 0);
#line 461 "globals.m"
                if (libs__globals__succeeded)
#line 461 "globals.m"
                  {
#line 461 "globals.m"
                    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 461 "globals.m"
                    if (libs__globals__succeeded)
#line 461 "globals.m"
                      {
#line 461 "globals.m"
                        libs__globals__Major_40 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_28_28, (MR_Integer) 0)));
#line 461 "globals.m"
                        libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_28_28, (MR_Integer) 1)));
#line 461 "globals.m"
                        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 461 "globals.m"
                        if (libs__globals__succeeded)
#line 461 "globals.m"
                          {
#line 461 "globals.m"
                            libs__globals__Minor_41 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_29_29, (MR_Integer) 0)));
#line 461 "globals.m"
                            libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_29_29, (MR_Integer) 1)));
#line 461 "globals.m"
                            libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 461 "globals.m"
                            if (libs__globals__succeeded)
#line 461 "globals.m"
                              {
#line 461 "globals.m"
                                libs__globals__Patch_42 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_30_30, (MR_Integer) 0)));
#line 461 "globals.m"
                                libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_30_30, (MR_Integer) 1)));
#line 461 "globals.m"
                                libs__globals__succeeded = (libs__globals__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 461 "globals.m"
                              }
#line 461 "globals.m"
                          }
#line 461 "globals.m"
                      }
#line 461 "globals.m"
                  }
#line 461 "globals.m"
              }
#line 463 "globals.m"
            if (libs__globals__succeeded)
#line 537 "globals.m"
              {
#line 537 "globals.m"
                MR_Integer libs__globals__Major_69;
#line 537 "globals.m"
                MR_Integer libs__globals__Minor_70;
#line 537 "globals.m"
                MR_Integer libs__globals__Patch_71;
#line 537 "globals.m"
                MR_Word libs__globals__ClangVersion_72;
#line 537 "globals.m"
                MR_Integer libs__globals__V_73_73;
#line 537 "globals.m"
                MR_Integer libs__globals__V_74_74;
#line 537 "globals.m"
                MR_Integer libs__globals__V_75_75;
#line 537 "globals.m"
                MR_Word libs__globals__V_76_76;

#line 538 "globals.m"
                {
#line 538 "globals.m"
                  libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Major_40, &libs__globals__Major_69);
                }
#line 537 "globals.m"
                if (libs__globals__succeeded)
#line 537 "globals.m"
                  {
#line 539 "globals.m"
                    {
#line 539 "globals.m"
                      libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Minor_41, &libs__globals__Minor_70);
                    }
#line 537 "globals.m"
                    if (libs__globals__succeeded)
#line 537 "globals.m"
                      {
#line 540 "globals.m"
                        {
#line 540 "globals.m"
                          libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Patch_42, &libs__globals__Patch_71);
                        }
#line 537 "globals.m"
                        if (libs__globals__succeeded)
#line 537 "globals.m"
                          {
#line 541 "globals.m"
                            libs__globals__V_73_73 = (MR_Integer) 0;
#line 541 "globals.m"
                            libs__globals__succeeded = (libs__globals__Major_69 >= libs__globals__V_73_73);
#line 537 "globals.m"
                            if (libs__globals__succeeded)
#line 537 "globals.m"
                              {
#line 541 "globals.m"
                                libs__globals__V_74_74 = (MR_Integer) 0;
#line 541 "globals.m"
                                libs__globals__succeeded = (libs__globals__Minor_70 >= libs__globals__V_74_74);
#line 537 "globals.m"
                                if (libs__globals__succeeded)
#line 537 "globals.m"
                                  {
#line 541 "globals.m"
                                    libs__globals__V_75_75 = (MR_Integer) 0;
#line 541 "globals.m"
                                    libs__globals__succeeded = (libs__globals__Patch_71 >= libs__globals__V_75_75);
#line 537 "globals.m"
                                    if (libs__globals__succeeded)
#line 537 "globals.m"
                                      {
#line 542 "globals.m"
                                        {
#line 542 "globals.m"
                                          libs__globals__ClangVersion_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 542 "globals.m"
                                          MR_hl_field(MR_mktag(0), libs__globals__ClangVersion_72, 0) = ((MR_Box) (libs__globals__Major_69));
#line 542 "globals.m"
                                          MR_hl_field(MR_mktag(0), libs__globals__ClangVersion_72, 1) = ((MR_Box) (libs__globals__Minor_70));
#line 542 "globals.m"
                                          MR_hl_field(MR_mktag(0), libs__globals__ClangVersion_72, 2) = ((MR_Box) (libs__globals__Patch_71));
#line 542 "globals.m"
                                        }
#line 543 "globals.m"
                                        {
#line 543 "globals.m"
                                          libs__globals__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 543 "globals.m"
                                          MR_hl_field(MR_mktag(1), libs__globals__V_76_76, 0) = ((MR_Box) (libs__globals__ClangVersion_72));
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
                                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (libs__globals__V_76_76));
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
#line 463 "globals.m"
            else
#line 465 "globals.m"
              {
#line 465 "globals.m"
                MR_String libs__globals__Version_19;
#line 463 "globals.m"
                MR_String libs__globals__V_32_32;
#line 463 "globals.m"
                MR_Word libs__globals__V_33_33;
#line 463 "globals.m"
                MR_Word libs__globals__V_34_34;

#line 463 "globals.m"
                libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__Tokens_14)) == (MR_mktag((MR_Integer) 1)));
#line 463 "globals.m"
                if (libs__globals__succeeded)
#line 463 "globals.m"
                  {
#line 463 "globals.m"
                    libs__globals__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_14, (MR_Integer) 0)));
#line 463 "globals.m"
                    libs__globals__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_14, (MR_Integer) 1)));
#line 463 "globals.m"
                    libs__globals__succeeded = (strcmp(libs__globals__V_32_32, (MR_String) "cl") == 0);
#line 463 "globals.m"
                    if (libs__globals__succeeded)
#line 463 "globals.m"
                      {
#line 463 "globals.m"
                        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 463 "globals.m"
                        if (libs__globals__succeeded)
#line 463 "globals.m"
                          {
#line 463 "globals.m"
                            libs__globals__Version_19 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_33_33, (MR_Integer) 0)));
#line 463 "globals.m"
                            libs__globals__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_33_33, (MR_Integer) 1)));
#line 463 "globals.m"
                            libs__globals__succeeded = (libs__globals__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 463 "globals.m"
                          }
#line 463 "globals.m"
                      }
#line 463 "globals.m"
                  }
#line 465 "globals.m"
                if (libs__globals__succeeded)
#line 552 "globals.m"
                  {
#line 552 "globals.m"
                    MR_Integer libs__globals__Version_79;
#line 552 "globals.m"
                    MR_Integer libs__globals__V_80_80;
#line 552 "globals.m"
                    MR_Word libs__globals__V_81_81;

#line 553 "globals.m"
                    {
#line 553 "globals.m"
                      libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Version_19, &libs__globals__Version_79);
                    }
#line 552 "globals.m"
                    if (libs__globals__succeeded)
#line 552 "globals.m"
                      {
#line 554 "globals.m"
                        libs__globals__V_80_80 = (MR_Integer) 0;
#line 554 "globals.m"
                        libs__globals__succeeded = (libs__globals__Version_79 > libs__globals__V_80_80);
#line 552 "globals.m"
                        if (libs__globals__succeeded)
#line 552 "globals.m"
                          {
#line 555 "globals.m"
                            {
#line 555 "globals.m"
                              libs__globals__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 555 "globals.m"
                              MR_hl_field(MR_mktag(1), libs__globals__V_81_81, 0) = ((MR_Box) (libs__globals__Version_79));
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
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (libs__globals__V_81_81));
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
#line 465 "globals.m"
                else
#line 467 "globals.m"
                  {
#line 467 "globals.m"
                    MR_String libs__globals__Version_39;
#line 465 "globals.m"
                    MR_String libs__globals__V_35_35;
#line 465 "globals.m"
                    MR_Word libs__globals__V_36_36;
#line 465 "globals.m"
                    MR_Word libs__globals__V_37_37;

#line 465 "globals.m"
                    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__Tokens_14)) == (MR_mktag((MR_Integer) 1)));
#line 465 "globals.m"
                    if (libs__globals__succeeded)
#line 465 "globals.m"
                      {
#line 465 "globals.m"
                        libs__globals__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_14, (MR_Integer) 0)));
#line 465 "globals.m"
                        libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_14, (MR_Integer) 1)));
#line 465 "globals.m"
                        libs__globals__succeeded = (strcmp(libs__globals__V_35_35, (MR_String) "msvc") == 0);
#line 465 "globals.m"
                        if (libs__globals__succeeded)
#line 465 "globals.m"
                          {
#line 465 "globals.m"
                            libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 465 "globals.m"
                            if (libs__globals__succeeded)
#line 465 "globals.m"
                              {
#line 465 "globals.m"
                                libs__globals__Version_39 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_36_36, (MR_Integer) 0)));
#line 465 "globals.m"
                                libs__globals__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_36_36, (MR_Integer) 1)));
#line 465 "globals.m"
                                libs__globals__succeeded = (libs__globals__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 465 "globals.m"
                              }
#line 465 "globals.m"
                          }
#line 465 "globals.m"
                      }
#line 467 "globals.m"
                    if (libs__globals__succeeded)
#line 552 "globals.m"
                      {
#line 552 "globals.m"
                        MR_Integer libs__globals__Version_84;
#line 552 "globals.m"
                        MR_Integer libs__globals__V_85_85;
#line 552 "globals.m"
                        MR_Word libs__globals__V_86_86;

#line 553 "globals.m"
                        {
#line 553 "globals.m"
                          libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Version_39, &libs__globals__Version_84);
                        }
#line 552 "globals.m"
                        if (libs__globals__succeeded)
#line 552 "globals.m"
                          {
#line 554 "globals.m"
                            libs__globals__V_85_85 = (MR_Integer) 0;
#line 554 "globals.m"
                            libs__globals__succeeded = (libs__globals__Version_84 > libs__globals__V_85_85);
#line 552 "globals.m"
                            if (libs__globals__succeeded)
#line 552 "globals.m"
                              {
#line 555 "globals.m"
                                {
#line 555 "globals.m"
                                  libs__globals__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 555 "globals.m"
                                  MR_hl_field(MR_mktag(1), libs__globals__V_86_86, 0) = ((MR_Box) (libs__globals__Version_84));
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
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (libs__globals__V_86_86));
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
#line 467 "globals.m"
                    else
#line 468 "globals.m"
                      {
#line 468 "globals.m"
                        return libs__globals__succeeded = mercury__builtin__false_0_p_0();
                      }
#line 467 "globals.m"
                  }
#line 465 "globals.m"
              }
#line 463 "globals.m"
          }
#line 456 "globals.m"
      }
#line 435 "globals.m"
    return libs__globals__succeeded;
#line 435 "globals.m"
  }
#line 228 "globals.m"
}

#line 226 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_maybe_thread_safe_2_p_0(
#line 226 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 226 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 226 "globals.m"
{
#line 429 "globals.m"
  {
#line 429 "globals.m"
    MR_bool libs__globals__succeeded;

#line 429 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "no") == 0))
#line 430 "globals.m"
      {
#line 430 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 0;
#line 430 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 430 "globals.m"
      }
#line 429 "globals.m"
    else
#line 429 "globals.m"
      if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "yes") == 0))
#line 429 "globals.m"
        {
#line 429 "globals.m"
          *libs__globals__HeadVar__2_2 = (MR_Integer) 1;
#line 429 "globals.m"
          libs__globals__succeeded = MR_TRUE;
#line 429 "globals.m"
        }
#line 429 "globals.m"
      else
#line 429 "globals.m"
        libs__globals__succeeded = MR_FALSE;
#line 429 "globals.m"
    return libs__globals__succeeded;
#line 429 "globals.m"
  }
#line 226 "globals.m"
}

#line 225 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_termination_norm_2_p_0(
#line 225 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 225 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 225 "globals.m"
{
#line 424 "globals.m"
  {
#line 424 "globals.m"
    MR_bool libs__globals__succeeded;

#line 424 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "total") == 0))
#line 425 "globals.m"
      {
#line 425 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 1;
#line 425 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 425 "globals.m"
      }
#line 424 "globals.m"
    else
#line 424 "globals.m"
      if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "simple") == 0))
#line 424 "globals.m"
        {
#line 424 "globals.m"
          *libs__globals__HeadVar__2_2 = (MR_Integer) 0;
#line 424 "globals.m"
          libs__globals__succeeded = MR_TRUE;
#line 424 "globals.m"
        }
#line 424 "globals.m"
      else
#line 424 "globals.m"
        if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "num-data-elems") == 0))
#line 426 "globals.m"
          {
#line 426 "globals.m"
            *libs__globals__HeadVar__2_2 = (MR_Integer) 2;
#line 426 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 426 "globals.m"
          }
#line 424 "globals.m"
        else
#line 424 "globals.m"
          if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "size-data-elems") == 0))
#line 427 "globals.m"
            {
#line 427 "globals.m"
              *libs__globals__HeadVar__2_2 = (MR_Integer) 3;
#line 427 "globals.m"
              libs__globals__succeeded = MR_TRUE;
#line 427 "globals.m"
            }
#line 424 "globals.m"
          else
#line 424 "globals.m"
            libs__globals__succeeded = MR_FALSE;
#line 424 "globals.m"
    return libs__globals__succeeded;
#line 424 "globals.m"
  }
#line 225 "globals.m"
}

#line 224 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_tags_method_2_p_0(
#line 224 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 224 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 224 "globals.m"
{
#line 420 "globals.m"
  {
#line 420 "globals.m"
    MR_bool libs__globals__succeeded;

#line 420 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "low") == 0))
#line 421 "globals.m"
      {
#line 421 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 1;
#line 421 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 421 "globals.m"
      }
#line 420 "globals.m"
    else
#line 420 "globals.m"
      if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "high") == 0))
#line 422 "globals.m"
        {
#line 422 "globals.m"
          *libs__globals__HeadVar__2_2 = (MR_Integer) 2;
#line 422 "globals.m"
          libs__globals__succeeded = MR_TRUE;
#line 422 "globals.m"
        }
#line 420 "globals.m"
      else
#line 420 "globals.m"
        if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "none") == 0))
#line 420 "globals.m"
          {
#line 420 "globals.m"
            *libs__globals__HeadVar__2_2 = (MR_Integer) 0;
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
#line 224 "globals.m"
}

#line 223 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_gc_method_2_p_0(
#line 223 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 223 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 223 "globals.m"
{
#line 411 "globals.m"
  {
#line 411 "globals.m"
    MR_bool libs__globals__succeeded;

#line 411 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "hgc") == 0))
#line 415 "globals.m"
      {
#line 415 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 4;
#line 415 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 415 "globals.m"
      }
#line 411 "globals.m"
    else
#line 411 "globals.m"
      if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "mps") == 0))
#line 416 "globals.m"
        {
#line 416 "globals.m"
          *libs__globals__HeadVar__2_2 = (MR_Integer) 5;
#line 416 "globals.m"
          libs__globals__succeeded = MR_TRUE;
#line 416 "globals.m"
        }
#line 411 "globals.m"
      else
#line 411 "globals.m"
        if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "none") == 0))
#line 411 "globals.m"
          {
#line 411 "globals.m"
            *libs__globals__HeadVar__2_2 = (MR_Integer) 1;
#line 411 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 411 "globals.m"
          }
#line 411 "globals.m"
        else
#line 411 "globals.m"
          if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "boehm") == 0))
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
            if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "accurate") == 0))
#line 417 "globals.m"
              {
#line 417 "globals.m"
                *libs__globals__HeadVar__2_2 = (MR_Integer) 6;
#line 417 "globals.m"
                libs__globals__succeeded = MR_TRUE;
#line 417 "globals.m"
              }
#line 411 "globals.m"
            else
#line 411 "globals.m"
              if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "automatic") == 0))
#line 418 "globals.m"
                {
#line 418 "globals.m"
                  *libs__globals__HeadVar__2_2 = (MR_Integer) 0;
#line 418 "globals.m"
                  libs__globals__succeeded = MR_TRUE;
#line 418 "globals.m"
                }
#line 411 "globals.m"
              else
#line 411 "globals.m"
                if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "boehm_debug") == 0))
#line 414 "globals.m"
                  {
#line 414 "globals.m"
                    *libs__globals__HeadVar__2_2 = (MR_Integer) 3;
#line 414 "globals.m"
                    libs__globals__succeeded = MR_TRUE;
#line 414 "globals.m"
                  }
#line 411 "globals.m"
                else
#line 411 "globals.m"
                  if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "conservative") == 0))
#line 412 "globals.m"
                    {
#line 412 "globals.m"
                      *libs__globals__HeadVar__2_2 = (MR_Integer) 2;
#line 412 "globals.m"
                      libs__globals__succeeded = MR_TRUE;
#line 412 "globals.m"
                    }
#line 411 "globals.m"
                  else
#line 411 "globals.m"
                    libs__globals__succeeded = MR_FALSE;
#line 411 "globals.m"
    return libs__globals__succeeded;
#line 411 "globals.m"
  }
#line 223 "globals.m"
}

#line 222 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_foreign_language_2_p_0(
#line 222 "globals.m"
  MR_String libs__globals__String_3,
#line 222 "globals.m"
  MR_Word * libs__globals__ForeignLanguage_4)
#line 222 "globals.m"
{
#line 397 "globals.m"
  {
#line 397 "globals.m"
    MR_bool libs__globals__succeeded;
#line 397 "globals.m"
    MR_String libs__globals__V_5_5;

#line 398 "globals.m"
    {
#line 398 "globals.m"
      libs__globals__V_5_5 = mercury__string__to_lower_1_f_0(libs__globals__String_3);
    }
#line 403 "globals.m"
    if ((strcmp(libs__globals__V_5_5, (MR_String) "c") == 0))
#line 403 "globals.m"
      {
#line 403 "globals.m"
        *libs__globals__ForeignLanguage_4 = (MR_Integer) 0;
#line 403 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 403 "globals.m"
      }
#line 403 "globals.m"
    else
#line 403 "globals.m"
      if ((strcmp(libs__globals__V_5_5, (MR_String) "c#") == 0))
#line 404 "globals.m"
        {
#line 404 "globals.m"
          *libs__globals__ForeignLanguage_4 = (MR_Integer) 1;
#line 404 "globals.m"
          libs__globals__succeeded = MR_TRUE;
#line 404 "globals.m"
        }
#line 403 "globals.m"
      else
#line 403 "globals.m"
        if ((strcmp(libs__globals__V_5_5, (MR_String) "il") == 0))
#line 407 "globals.m"
          {
#line 407 "globals.m"
            *libs__globals__ForeignLanguage_4 = (MR_Integer) 3;
#line 407 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 407 "globals.m"
          }
#line 403 "globals.m"
        else
#line 403 "globals.m"
          if ((strcmp(libs__globals__V_5_5, (MR_String) "java") == 0))
#line 408 "globals.m"
            {
#line 408 "globals.m"
              *libs__globals__ForeignLanguage_4 = (MR_Integer) 2;
#line 408 "globals.m"
              libs__globals__succeeded = MR_TRUE;
#line 408 "globals.m"
            }
#line 403 "globals.m"
          else
#line 403 "globals.m"
            if ((strcmp(libs__globals__V_5_5, (MR_String) "csharp") == 0))
#line 405 "globals.m"
              {
#line 405 "globals.m"
                *libs__globals__ForeignLanguage_4 = (MR_Integer) 1;
#line 405 "globals.m"
                libs__globals__succeeded = MR_TRUE;
#line 405 "globals.m"
              }
#line 403 "globals.m"
            else
#line 403 "globals.m"
              if ((strcmp(libs__globals__V_5_5, (MR_String) "erlang") == 0))
#line 409 "globals.m"
                {
#line 409 "globals.m"
                  *libs__globals__ForeignLanguage_4 = (MR_Integer) 4;
#line 409 "globals.m"
                  libs__globals__succeeded = MR_TRUE;
#line 409 "globals.m"
                }
#line 403 "globals.m"
              else
#line 403 "globals.m"
                if ((strcmp(libs__globals__V_5_5, (MR_String) "c sharp") == 0))
#line 406 "globals.m"
                  {
#line 406 "globals.m"
                    *libs__globals__ForeignLanguage_4 = (MR_Integer) 1;
#line 406 "globals.m"
                    libs__globals__succeeded = MR_TRUE;
#line 406 "globals.m"
                  }
#line 403 "globals.m"
                else
#line 403 "globals.m"
                  libs__globals__succeeded = MR_FALSE;
#line 397 "globals.m"
    return libs__globals__succeeded;
#line 397 "globals.m"
  }
#line 222 "globals.m"
}

#line 221 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_target_2_p_0(
#line 221 "globals.m"
  MR_String libs__globals__String_3,
#line 221 "globals.m"
  MR_Word * libs__globals__Target_4)
#line 221 "globals.m"
{
#line 385 "globals.m"
  {
#line 385 "globals.m"
    MR_bool libs__globals__succeeded;
#line 385 "globals.m"
    MR_String libs__globals__V_5_5;

#line 386 "globals.m"
    {
#line 386 "globals.m"
      libs__globals__V_5_5 = mercury__string__to_lower_1_f_0(libs__globals__String_3);
    }
#line 390 "globals.m"
    if ((strcmp(libs__globals__V_5_5, (MR_String) "c") == 0))
#line 393 "globals.m"
      {
#line 393 "globals.m"
        *libs__globals__Target_4 = (MR_Integer) 0;
#line 393 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 393 "globals.m"
      }
#line 390 "globals.m"
    else
#line 390 "globals.m"
      if ((strcmp(libs__globals__V_5_5, (MR_String) "il") == 0))
#line 392 "globals.m"
        {
#line 392 "globals.m"
          *libs__globals__Target_4 = (MR_Integer) 1;
#line 392 "globals.m"
          libs__globals__succeeded = MR_TRUE;
#line 392 "globals.m"
        }
#line 390 "globals.m"
      else
#line 390 "globals.m"
        if ((strcmp(libs__globals__V_5_5, (MR_String) "java") == 0))
#line 391 "globals.m"
          {
#line 391 "globals.m"
            *libs__globals__Target_4 = (MR_Integer) 3;
#line 391 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 391 "globals.m"
          }
#line 390 "globals.m"
        else
#line 390 "globals.m"
          if ((strcmp(libs__globals__V_5_5, (MR_String) "csharp") == 0))
#line 390 "globals.m"
            {
#line 390 "globals.m"
              *libs__globals__Target_4 = (MR_Integer) 2;
#line 390 "globals.m"
              libs__globals__succeeded = MR_TRUE;
#line 390 "globals.m"
            }
#line 390 "globals.m"
          else
#line 390 "globals.m"
            if ((strcmp(libs__globals__V_5_5, (MR_String) "erlang") == 0))
#line 395 "globals.m"
              {
#line 395 "globals.m"
                *libs__globals__Target_4 = (MR_Integer) 5;
#line 395 "globals.m"
                libs__globals__succeeded = MR_TRUE;
#line 395 "globals.m"
              }
#line 390 "globals.m"
            else
#line 390 "globals.m"
              if ((strcmp(libs__globals__V_5_5, (MR_String) "x86_64") == 0))
#line 394 "globals.m"
                {
#line 394 "globals.m"
                  *libs__globals__Target_4 = (MR_Integer) 4;
#line 394 "globals.m"
                  libs__globals__succeeded = MR_TRUE;
#line 394 "globals.m"
                }
#line 390 "globals.m"
              else
#line 390 "globals.m"
                libs__globals__succeeded = MR_FALSE;
#line 385 "globals.m"
    return libs__globals__succeeded;
#line 385 "globals.m"
  }
#line 221 "globals.m"
}

#line 111 "globals.m"
MR_Word MR_CALL 
libs__globals__gc_is_conservative_1_f_0(
#line 111 "globals.m"
  MR_Word libs__globals__HeadVar__1_1)
#line 111 "globals.m"
{
#line 596 "globals.m"
  {
#line 596 "globals.m"
    MR_bool libs__globals__succeeded;
#line 596 "globals.m"
    MR_Word libs__globals__HeadVar__2_2;

#line 596 "globals.m"
    if ((libs__globals__HeadVar__1_1 == (MR_Integer) 6))
#line 601 "globals.m"
      libs__globals__HeadVar__2_2 = (MR_Integer) 0;
#line 596 "globals.m"
    else
#line 596 "globals.m"
      if ((libs__globals__HeadVar__1_1 == (MR_Integer) 0))
#line 602 "globals.m"
        libs__globals__HeadVar__2_2 = (MR_Integer) 0;
#line 596 "globals.m"
      else
#line 596 "globals.m"
        if ((libs__globals__HeadVar__1_1 == (MR_Integer) 2))
#line 596 "globals.m"
          libs__globals__HeadVar__2_2 = (MR_Integer) 1;
#line 596 "globals.m"
        else
#line 596 "globals.m"
          if ((libs__globals__HeadVar__1_1 == (MR_Integer) 3))
#line 597 "globals.m"
            libs__globals__HeadVar__2_2 = (MR_Integer) 1;
#line 596 "globals.m"
          else
#line 596 "globals.m"
            if ((libs__globals__HeadVar__1_1 == (MR_Integer) 4))
#line 598 "globals.m"
              libs__globals__HeadVar__2_2 = (MR_Integer) 1;
#line 596 "globals.m"
            else
#line 596 "globals.m"
              if ((libs__globals__HeadVar__1_1 == (MR_Integer) 5))
#line 599 "globals.m"
                libs__globals__HeadVar__2_2 = (MR_Integer) 1;
#line 596 "globals.m"
              else
#line 600 "globals.m"
                libs__globals__HeadVar__2_2 = (MR_Integer) 0;
#line 596 "globals.m"
    return libs__globals__HeadVar__2_2;
#line 596 "globals.m"
  }
#line 111 "globals.m"
}

#line 71 "globals.m"
MR_String MR_CALL 
libs__globals__simple_foreign_language_string_1_f_0(
#line 71 "globals.m"
  MR_Word libs__globals__HeadVar__1_1)
#line 71 "globals.m"
{
#line 590 "globals.m"
  {
#line 590 "globals.m"
    MR_bool libs__globals__succeeded;
#line 590 "globals.m"
    MR_String libs__globals__HeadVar__2_2;

#line 590 "globals.m"
    if ((libs__globals__HeadVar__1_1 == (MR_Integer) 0))
#line 590 "globals.m"
      libs__globals__HeadVar__2_2 = (MR_String) "c";
#line 590 "globals.m"
    else
#line 590 "globals.m"
      if ((libs__globals__HeadVar__1_1 == (MR_Integer) 1))
#line 591 "globals.m"
        libs__globals__HeadVar__2_2 = (MR_String) "csharp";
#line 590 "globals.m"
      else
#line 590 "globals.m"
        if ((libs__globals__HeadVar__1_1 == (MR_Integer) 4))
#line 594 "globals.m"
          libs__globals__HeadVar__2_2 = (MR_String) "erlang";
#line 590 "globals.m"
        else
#line 590 "globals.m"
          if ((libs__globals__HeadVar__1_1 == (MR_Integer) 3))
#line 592 "globals.m"
            libs__globals__HeadVar__2_2 = (MR_String) "il";
#line 590 "globals.m"
          else
#line 593 "globals.m"
            libs__globals__HeadVar__2_2 = (MR_String) "java";
#line 590 "globals.m"
    return libs__globals__HeadVar__2_2;
#line 590 "globals.m"
  }
#line 71 "globals.m"
}

#line 66 "globals.m"
MR_String MR_CALL 
libs__globals__foreign_language_string_1_f_0(
#line 66 "globals.m"
  MR_Word libs__globals__HeadVar__1_1)
#line 66 "globals.m"
{
#line 584 "globals.m"
  {
#line 584 "globals.m"
    MR_bool libs__globals__succeeded;
#line 584 "globals.m"
    MR_String libs__globals__HeadVar__2_2;

#line 584 "globals.m"
    if ((libs__globals__HeadVar__1_1 == (MR_Integer) 0))
#line 584 "globals.m"
      libs__globals__HeadVar__2_2 = (MR_String) "C";
#line 584 "globals.m"
    else
#line 584 "globals.m"
      if ((libs__globals__HeadVar__1_1 == (MR_Integer) 1))
#line 585 "globals.m"
        libs__globals__HeadVar__2_2 = (MR_String) "C#";
#line 584 "globals.m"
      else
#line 584 "globals.m"
        if ((libs__globals__HeadVar__1_1 == (MR_Integer) 4))
#line 588 "globals.m"
          libs__globals__HeadVar__2_2 = (MR_String) "Erlang";
#line 584 "globals.m"
        else
#line 584 "globals.m"
          if ((libs__globals__HeadVar__1_1 == (MR_Integer) 3))
#line 586 "globals.m"
            libs__globals__HeadVar__2_2 = (MR_String) "IL";
#line 584 "globals.m"
          else
#line 587 "globals.m"
            libs__globals__HeadVar__2_2 = (MR_String) "Java";
#line 584 "globals.m"
    return libs__globals__HeadVar__2_2;
#line 584 "globals.m"
  }
#line 66 "globals.m"
}

#line 61 "globals.m"
MR_String MR_CALL 
libs__globals__compilation_target_string_1_f_0(
#line 61 "globals.m"
  MR_Word libs__globals__HeadVar__1_1)
#line 61 "globals.m"
{
#line 577 "globals.m"
  {
#line 577 "globals.m"
    MR_bool libs__globals__succeeded;
#line 577 "globals.m"
    MR_String libs__globals__HeadVar__2_2;

#line 577 "globals.m"
    if ((libs__globals__HeadVar__1_1 == (MR_Integer) 0))
#line 577 "globals.m"
      libs__globals__HeadVar__2_2 = (MR_String) "C";
#line 577 "globals.m"
    else
#line 577 "globals.m"
      if ((libs__globals__HeadVar__1_1 == (MR_Integer) 2))
#line 578 "globals.m"
        libs__globals__HeadVar__2_2 = (MR_String) "C#";
#line 577 "globals.m"
      else
#line 577 "globals.m"
        if ((libs__globals__HeadVar__1_1 == (MR_Integer) 5))
#line 582 "globals.m"
          libs__globals__HeadVar__2_2 = (MR_String) "Erlang";
#line 577 "globals.m"
        else
#line 577 "globals.m"
          if ((libs__globals__HeadVar__1_1 == (MR_Integer) 1))
#line 579 "globals.m"
            libs__globals__HeadVar__2_2 = (MR_String) "IL";
#line 577 "globals.m"
          else
#line 577 "globals.m"
            if ((libs__globals__HeadVar__1_1 == (MR_Integer) 3))
#line 580 "globals.m"
              libs__globals__HeadVar__2_2 = (MR_String) "Java";
#line 577 "globals.m"
            else
#line 581 "globals.m"
              libs__globals__HeadVar__2_2 = (MR_String) "x86_64";
#line 577 "globals.m"
    return libs__globals__HeadVar__2_2;
#line 577 "globals.m"
  }
#line 61 "globals.m"
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
