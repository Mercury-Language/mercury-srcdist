/*
** Automatically generated from `globals.m'
** by the Mercury compiler,
** version rotd-2015-09-28
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










#line 145 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 148 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_0[3];

#line 151 "libs.globals.c"
static const MR_ConstString libs__globals__libs__globals__field_names_c_compiler_type_0_0[3];

#line 154 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_0;

#line 157 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1libs__globals__type_ctor_info_clang_version_0;

#line 160 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_1[1];

#line 163 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_1;

#line 166 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_2[1];

#line 169 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_2;

#line 172 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_3;

#line 175 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_0[1];

#line 178 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_1[1];

#line 181 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_2[1];

#line 184 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_3[1];

#line 187 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_c_compiler_type_0[4];

#line 190 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_c_compiler_type_0[4];

#line 193 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_c_compiler_type_0[4];

#line 196 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_clang_version_0_0[3];

#line 199 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_clang_version_0_0;

#line 202 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_clang_version_0_0[1];

#line 205 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_clang_version_0[1];

#line 208 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_clang_version_0[1];

#line 211 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_clang_version_0[1];

#line 214 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_0;

#line 217 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_1;

#line 220 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_2;

#line 223 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_3;

#line 226 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_compilation_target_0[4];

#line 229 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_compilation_target_0[4];

#line 232 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_compilation_target_0[4];

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
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_foreign_language_0[4];

#line 316 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_foreign_language_0[4];

#line 319 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_foreign_language_0[4];

#line 322 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_0;

#line 325 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_1;

#line 328 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_2;

#line 331 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_3;

#line 334 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_4;

#line 337 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_5;

#line 340 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_gc_method_0[6];

#line 343 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_gc_method_0[6];

#line 346 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_gc_method_0[6];

#line 349 "libs.globals.c"
static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0;

#line 352 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0;

#line 355 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1mdbcomp__feedback__type_ctor_info_feedback_info_0;

#line 358 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__list__ti_list_1libs__globals__type_ctor_info_line_number_range_0;

#line 361 "libs.globals.c"
static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1libs__globals__type_ctor_info_line_number_range_0;

#line 364 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_globals_0_0[19];

#line 367 "libs.globals.c"
static const MR_ConstString libs__globals__libs__globals__field_names_globals_0_0[19];

#line 370 "libs.globals.c"
static const MR_DuArgLocn libs__globals__libs__globals__field_locns_globals_0_0[19];

#line 373 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_globals_0_0;

#line 376 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_globals_0_0[1];

#line 379 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_globals_0[1];

#line 382 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_globals_0[1];

#line 385 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_globals_0[1];

#line 388 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_line_number_range_0_0[2];

#line 391 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_line_number_range_0_0;

#line 394 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_line_number_range_0_0[1];

#line 397 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_line_number_range_0[1];

#line 400 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_line_number_range_0[1];

#line 403 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_line_number_range_0[1];

#line 406 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_0;

#line 409 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_reuse_strategy_0_1[1];

#line 412 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_1;

#line 415 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_0[1];

#line 418 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_1[1];

#line 421 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_reuse_strategy_0[2];

#line 424 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_reuse_strategy_0[2];

#line 427 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_reuse_strategy_0[2];

#line 430 "libs.globals.c"
static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 433 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_0;

#line 436 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_1;

#line 439 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_2;

#line 442 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_ssdb_trace_level_0[3];

#line 445 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_ssdb_trace_level_0[3];

#line 448 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_ssdb_trace_level_0[3];

#line 451 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_0;

#line 454 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_1;

#line 457 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_2;

#line 460 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_tags_method_0[3];

#line 463 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_tags_method_0[3];

#line 466 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_tags_method_0[3];

#line 469 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_0;

#line 472 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_1;

#line 475 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_2;

#line 478 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_3;

#line 481 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_termination_norm_0[4];

#line 484 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_termination_norm_0[4];

#line 487 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_termination_norm_0[4];

#line 490 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____c_compiler_type_0_0_10001(
#line 493 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 495 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 498 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____c_compiler_type_0_0_10001(
#line 501 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 503 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 505 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 508 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____clang_version_0_0_10001(
#line 511 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 513 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 516 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____clang_version_0_0_10001(
#line 519 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 521 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 523 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 526 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____compilation_target_0_0_10001(
#line 529 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 531 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 534 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____compilation_target_0_0_10001(
#line 537 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 539 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 541 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 544 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____csharp_compiler_type_0_0_10001(
#line 547 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 549 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 552 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____csharp_compiler_type_0_0_10001(
#line 555 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 557 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 559 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 562 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____env_type_0_0_10001(
#line 565 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 567 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 570 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____env_type_0_0_10001(
#line 573 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 575 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 577 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 580 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____file_install_cmd_0_0_10001(
#line 583 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 585 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 588 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____file_install_cmd_0_0_10001(
#line 591 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 593 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 595 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 598 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____foreign_language_0_0_10001(
#line 601 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 603 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 606 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____foreign_language_0_0_10001(
#line 609 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 611 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 613 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 616 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____gc_method_0_0_10001(
#line 619 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 621 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 624 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____gc_method_0_0_10001(
#line 627 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 629 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 631 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 634 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____globals_0_0_10001(
#line 637 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 639 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 642 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____globals_0_0_10001(
#line 645 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 647 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 649 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 652 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____limit_error_contexts_map_0_0_10001(
#line 655 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 657 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 660 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____limit_error_contexts_map_0_0_10001(
#line 663 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 665 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 667 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 670 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____line_number_range_0_0_10001(
#line 673 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 675 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 678 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____line_number_range_0_0_10001(
#line 681 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 683 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 685 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 688 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____may_be_thread_safe_0_0_10001(
#line 691 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 693 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 696 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____may_be_thread_safe_0_0_10001(
#line 699 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 701 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 703 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 706 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____reuse_strategy_0_0_10001(
#line 709 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 711 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 714 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____reuse_strategy_0_0_10001(
#line 717 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 719 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 721 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 724 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____source_file_map_0_0_10001(
#line 727 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 729 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 732 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____source_file_map_0_0_10001(
#line 735 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 737 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 739 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 742 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____ssdb_trace_level_0_0_10001(
#line 745 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 747 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 750 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____ssdb_trace_level_0_0_10001(
#line 753 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 755 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 757 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 760 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____tags_method_0_0_10001(
#line 763 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 765 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 768 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____tags_method_0_0_10001(
#line 771 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 773 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 775 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 778 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____termination_norm_0_0_10001(
#line 781 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 783 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 786 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____termination_norm_0_0_10001(
#line 789 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 791 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 793 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 449 "globals.m"
static MR_bool MR_CALL 
libs__globals__IntroducedFrom__pred__convert_c_compiler_type_with_version__449__1_1_p_0(
#line 449 "globals.m"
  MR_Char libs__globals__HeadVar__1_12);

#line 720 "globals.m"
static MR_Word MR_CALL 
libs__globals__IntroducedFrom__func__get_backend_foreign_languages__720__1_1_f_0(
#line 720 "globals.m"
  MR_String libs__globals__HeadVar__1_11);

#line 945 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_maybe_source_file_map_1_p_0(
#line 945 "globals.m"
  MR_Word libs__globals__X_1);

#line 945 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_maybe_source_file_map_1_p_0(
#line 945 "globals.m"
  MR_Word * libs__globals__X_1);

#line 945 "globals.m"
static void MR_CALL 
libs__globals__unlock_maybe_source_file_map_0_p_0(void);

#line 945 "globals.m"
static void MR_CALL 
libs__globals__lock_maybe_source_file_map_0_p_0(void);

#line 945 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_maybe_source_file_map_0_p_0(void);

#line 945 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_maybe_source_file_map_0_p_0(void);

#line 942 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_disable_generate_item_version_numbers_1_p_0(
#line 942 "globals.m"
  MR_Word libs__globals__X_1);

#line 942 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_disable_generate_item_version_numbers_1_p_0(
#line 942 "globals.m"
  MR_Word * libs__globals__X_1);

#line 942 "globals.m"
static void MR_CALL 
libs__globals__unlock_disable_generate_item_version_numbers_0_p_0(void);

#line 942 "globals.m"
static void MR_CALL 
libs__globals__lock_disable_generate_item_version_numbers_0_p_0(void);

#line 942 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0(void);

#line 942 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_disable_generate_item_version_numbers_0_p_0(void);

#line 939 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_disable_smart_recompilation_1_p_0(
#line 939 "globals.m"
  MR_Word libs__globals__X_1);

#line 939 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_disable_smart_recompilation_1_p_0(
#line 939 "globals.m"
  MR_Word * libs__globals__X_1);

#line 939 "globals.m"
static void MR_CALL 
libs__globals__unlock_disable_smart_recompilation_0_p_0(void);

#line 939 "globals.m"
static void MR_CALL 
libs__globals__lock_disable_smart_recompilation_0_p_0(void);

#line 939 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0(void);

#line 939 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_disable_smart_recompilation_0_p_0(void);

#line 936 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_some_errors_were_context_limited_1_p_0(
#line 936 "globals.m"
  MR_Word libs__globals__X_1);

#line 936 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_some_errors_were_context_limited_1_p_0(
#line 936 "globals.m"
  MR_Word * libs__globals__X_1);

#line 936 "globals.m"
static void MR_CALL 
libs__globals__unlock_some_errors_were_context_limited_0_p_0(void);

#line 936 "globals.m"
static void MR_CALL 
libs__globals__lock_some_errors_were_context_limited_0_p_0(void);

#line 936 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_some_errors_were_context_limited_0_p_0(void);

#line 936 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_some_errors_were_context_limited_0_p_0(void);

#line 930 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_extra_error_info_1_p_0(
#line 930 "globals.m"
  MR_Word libs__globals__X_1);

#line 930 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_extra_error_info_1_p_0(
#line 930 "globals.m"
  MR_Word * libs__globals__X_1);

#line 930 "globals.m"
static void MR_CALL 
libs__globals__unlock_extra_error_info_0_p_0(void);

#line 930 "globals.m"
static void MR_CALL 
libs__globals__lock_extra_error_info_0_p_0(void);

#line 930 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_extra_error_info_0_p_0(void);

#line 930 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_extra_error_info_0_p_0(void);

#line 924 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_maybe_from_ground_term_threshold_1_p_0(
#line 924 "globals.m"
  MR_Word libs__globals__X_1);

#line 924 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_maybe_from_ground_term_threshold_1_p_0(
#line 924 "globals.m"
  MR_Word * libs__globals__X_1);

#line 924 "globals.m"
static void MR_CALL 
libs__globals__unlock_maybe_from_ground_term_threshold_0_p_0(void);

#line 924 "globals.m"
static void MR_CALL 
libs__globals__lock_maybe_from_ground_term_threshold_0_p_0(void);

#line 924 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0(void);

#line 924 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_maybe_from_ground_term_threshold_0_p_0(void);

#line 919 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_solver_auto_init_supported_1_p_0(
#line 919 "globals.m"
  MR_Word libs__globals__X_1);

#line 919 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_solver_auto_init_supported_1_p_0(
#line 919 "globals.m"
  MR_Word * libs__globals__X_1);

#line 919 "globals.m"
static void MR_CALL 
libs__globals__unlock_solver_auto_init_supported_0_p_0(void);

#line 919 "globals.m"
static void MR_CALL 
libs__globals__lock_solver_auto_init_supported_0_p_0(void);

#line 919 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0(void);

#line 919 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_solver_auto_init_supported_0_p_0(void);

#line 610 "globals.m"
static MR_bool MR_CALL 
libs__globals__convert_line_number_range_2_p_0(
#line 610 "globals.m"
  MR_String libs__globals__RangeStr_3,
#line 610 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2);

#line 595 "globals.m"
static void MR_CALL 
libs__globals__find_file_name_and_line_range_chars_4_p_0(
#line 595 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 595 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_LineRangeChars_0_2,
#line 595 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_LineRangeChars_3,
#line 595 "globals.m"
  MR_Word * libs__globals__HeadVar__4_4);

#line 587 "globals.m"
static MR_bool MR_CALL 
libs__globals__convert_limit_error_contexts_acc_5_p_0_1(
#line 587 "globals.m"
  MR_Box libs__globals__closure_arg,
#line 587 "globals.m"
  MR_Box libs__globals__wrapper_arg_1,
#line 587 "globals.m"
  MR_Box * libs__globals__wrapper_arg_2);

#line 567 "globals.m"
static void MR_CALL 
libs__globals__convert_limit_error_contexts_acc_5_p_0(
#line 567 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 567 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_RevBadOptions_0_2,
#line 567 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_RevBadOptions_3,
#line 567 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Map_0_4,
#line 567 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Map_5);

#line 717 "globals.m"
static MR_Box MR_CALL 
libs__globals__get_backend_foreign_languages_2_p_0_1(
#line 717 "globals.m"
  MR_Box libs__globals__closure_arg,
#line 717 "globals.m"
  MR_Box libs__globals__wrapper_arg_1);

#line 449 "globals.m"
static MR_bool MR_CALL 
libs__globals__convert_c_compiler_type_2_p_0_1(
#line 449 "globals.m"
  MR_Box libs__globals__closure_arg,
#line 449 "globals.m"
  MR_Box libs__globals__wrapper_arg_1);


static /* final */ const MR_Box libs__globals_scalar_common_1[5][2];

static /* final */ const MR_Box libs__globals_scalar_common_2[7][3];

static /* final */ const MR_Box libs__globals_scalar_common_10[2][1];

static /* final */ const MR_Box libs__globals_scalar_common_12[1][4];

static /* final */ const MR_Box libs__globals_scalar_common_15[2][5];


#line 632 "globals.m"
/* sealed */ struct libs__globals__vector_common_type_3_0_s {
#line 632 "globals.m"
  const MR_Word libs__globals__vector_common_type_3_0__vct_3_f_0;
#line 632 "globals.m"
};

static /* final */ const struct libs__globals__vector_common_type_3_0_s libs__globals_vector_common_3[4];

#line 637 "globals.m"
/* sealed */ struct libs__globals__vector_common_type_4_0_s {
#line 637 "globals.m"
  const MR_String libs__globals__vector_common_type_4_0__vct_4_f_0;
#line 637 "globals.m"
};

static /* final */ const struct libs__globals__vector_common_type_4_0_s libs__globals_vector_common_4[12];

#line 652 "globals.m"
/* sealed */ struct libs__globals__vector_common_type_5_0_s {
#line 652 "globals.m"
  const MR_Word libs__globals__vector_common_type_5_0__vct_5_f_0;
#line 652 "globals.m"
};

static /* final */ const struct libs__globals__vector_common_type_5_0_s libs__globals_vector_common_5[6];

#line 392 "globals.m"
/* sealed */ struct libs__globals__vector_common_type_6_0_s {
#line 392 "globals.m"
  const MR_String libs__globals__vector_common_type_6_0__vct_6_f_0;
#line 392 "globals.m"
  const MR_Word libs__globals__vector_common_type_6_0__vct_6_f_1;
#line 392 "globals.m"
};

static /* final */ const struct libs__globals__vector_common_type_6_0_s libs__globals_vector_common_6[4];

#line 403 "globals.m"
/* sealed */ struct libs__globals__vector_common_type_7_0_s {
#line 403 "globals.m"
  const MR_String libs__globals__vector_common_type_7_0__vct_7_f_0;
#line 403 "globals.m"
  const MR_Word libs__globals__vector_common_type_7_0__vct_7_f_1;
#line 403 "globals.m"
};

static /* final */ const struct libs__globals__vector_common_type_7_0_s libs__globals_vector_common_7[6];

#line 410 "globals.m"
/* sealed */ struct libs__globals__vector_common_type_8_0_s {
#line 410 "globals.m"
  const MR_String libs__globals__vector_common_type_8_0__vct_8_f_0;
#line 410 "globals.m"
  const MR_Word libs__globals__vector_common_type_8_0__vct_8_f_1;
#line 410 "globals.m"
};

static /* final */ const struct libs__globals__vector_common_type_8_0_s libs__globals_vector_common_8[7];

#line 422 "globals.m"
/* sealed */ struct libs__globals__vector_common_type_9_0_s {
#line 422 "globals.m"
  const MR_String libs__globals__vector_common_type_9_0__vct_9_f_0;
#line 422 "globals.m"
  const MR_Word libs__globals__vector_common_type_9_0__vct_9_f_1;
#line 422 "globals.m"
};

static /* final */ const struct libs__globals__vector_common_type_9_0_s libs__globals_vector_common_9[4];

#line 440 "globals.m"
/* sealed */ struct libs__globals__vector_common_type_11_0_s {
#line 440 "globals.m"
  const MR_String libs__globals__vector_common_type_11_0__vct_11_f_0;
#line 440 "globals.m"
  const MR_Word libs__globals__vector_common_type_11_0__vct_11_f_1;
#line 440 "globals.m"
};

static /* final */ const struct libs__globals__vector_common_type_11_0_s libs__globals_vector_common_11[4];

#line 550 "globals.m"
/* sealed */ struct libs__globals__vector_common_type_13_0_s {
#line 550 "globals.m"
  const MR_String libs__globals__vector_common_type_13_0__vct_13_f_0;
#line 550 "globals.m"
  const MR_Word libs__globals__vector_common_type_13_0__vct_13_f_1;
#line 550 "globals.m"
};

static /* final */ const struct libs__globals__vector_common_type_13_0_s libs__globals_vector_common_13[5];

#line 556 "globals.m"
/* sealed */ struct libs__globals__vector_common_type_14_0_s {
#line 556 "globals.m"
  const MR_String libs__globals__vector_common_type_14_0__vct_14_f_0;
#line 556 "globals.m"
  const MR_Integer libs__globals__vector_common_type_14_0__vct_14_f_1;
#line 556 "globals.m"
};

static /* final */ const struct libs__globals__vector_common_type_14_0_s libs__globals_vector_common_14[4];



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

static /* final */ const MR_Box libs__globals_scalar_common_2[7][3] = {
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
    ((MR_Box) (&libs__globals_scalar_common_12[0])),
    ((MR_Box) (libs__globals__convert_c_compiler_type_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&libs__globals_scalar_common_15[0])),
    ((MR_Box) (libs__globals__get_backend_foreign_languages_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&libs__globals_scalar_common_15[1])),
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

static /* final */ const MR_Box libs__globals_scalar_common_12[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box libs__globals_scalar_common_15[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_line_number_range_0))
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

static /* final */ const struct libs__globals__vector_common_type_13_0_s libs__globals_vector_common_13[5] = {
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

static /* final */ const struct libs__globals__vector_common_type_14_0_s libs__globals_vector_common_14[4] = {
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
#line 919 "globals.m"
MR_Unsigned libs__globals__mutable_variable_solver_auto_init_supported;

#line 924 "globals.m"
MR_Word libs__globals__mutable_variable_maybe_from_ground_term_threshold;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock;
#endif

#line 930 "globals.m"
MR_Word libs__globals__mutable_variable_extra_error_info;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_extra_error_info_lock;
#endif

#line 936 "globals.m"
MR_Word libs__globals__mutable_variable_some_errors_were_context_limited;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_some_errors_were_context_limited_lock;
#endif

#line 939 "globals.m"
MR_Word libs__globals__mutable_variable_disable_smart_recompilation;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_disable_smart_recompilation_lock;
#endif

#line 942 "globals.m"
MR_Word libs__globals__mutable_variable_disable_generate_item_version_numbers;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_disable_generate_item_version_numbers_lock;
#endif

#line 945 "globals.m"
MR_Word libs__globals__mutable_variable_maybe_source_file_map;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_maybe_source_file_map_lock;
#endif

#line 919 "globals.m"
void 
libs__globals__user_init_pred_0(void)
#line 919 "globals.m"
{
#line 919 "globals.m"
	libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0();
}

#line 924 "globals.m"
void 
libs__globals__user_init_pred_1(void)
#line 924 "globals.m"
{
#line 924 "globals.m"
	libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0();
}

#line 930 "globals.m"
void 
libs__globals__user_init_pred_2(void)
#line 930 "globals.m"
{
#line 930 "globals.m"
	libs__globals__initialise_mutable_extra_error_info_0_p_0();
}

#line 936 "globals.m"
void 
libs__globals__user_init_pred_3(void)
#line 936 "globals.m"
{
#line 936 "globals.m"
	libs__globals__initialise_mutable_some_errors_were_context_limited_0_p_0();
}

#line 939 "globals.m"
void 
libs__globals__user_init_pred_4(void)
#line 939 "globals.m"
{
#line 939 "globals.m"
	libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0();
}

#line 942 "globals.m"
void 
libs__globals__user_init_pred_5(void)
#line 942 "globals.m"
{
#line 942 "globals.m"
	libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0();
}

#line 945 "globals.m"
void 
libs__globals__user_init_pred_6(void)
#line 945 "globals.m"
{
#line 945 "globals.m"
	libs__globals__initialise_mutable_maybe_source_file_map_0_p_0();
}


#line 1627 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1635 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_0[3] = {
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

#line 1642 "libs.globals.c"
static const MR_ConstString libs__globals__libs__globals__field_names_c_compiler_type_0_0[3] = {
  (MR_String) "gcc_major_ver",
  (MR_String) "gcc_minor_ver",
  (MR_String) "gcc_patch_level"
};

#line 1649 "libs.globals.c"
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

#line 1664 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1libs__globals__type_ctor_info_clang_version_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &libs__globals__libs__globals__type_ctor_info_clang_version_0
  }
};

#line 1672 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_1[1] = {
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1libs__globals__type_ctor_info_clang_version_0
};

#line 1677 "libs.globals.c"
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

#line 1692 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_2[1] = {
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

#line 1697 "libs.globals.c"
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

#line 1712 "libs.globals.c"
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

#line 1727 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_3
};

#line 1732 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_1[1] = {
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_0
};

#line 1737 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_2[1] = {
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_1
};

#line 1742 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_3[1] = {
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_2
};

#line 1747 "libs.globals.c"
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

#line 1771 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_c_compiler_type_0[4] = {
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_2,
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_1,
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_0,
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_3
};

#line 1779 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_c_compiler_type_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 3
};

#line 1787 "libs.globals.c"
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

#line 1804 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_clang_version_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1811 "libs.globals.c"
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

#line 1826 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_clang_version_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_clang_version_0_0
};

#line 1831 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_clang_version_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_clang_version_0_0
  }
};

#line 1840 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_clang_version_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_clang_version_0_0
};

#line 1845 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_clang_version_0[1] = {
  (MR_Integer) 0
};

#line 1850 "libs.globals.c"
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

#line 1867 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_0 = {
  (MR_String) "target_c",
  (MR_Integer) 0
};

#line 1873 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_1 = {
  (MR_String) "target_csharp",
  (MR_Integer) 1
};

#line 1879 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_2 = {
  (MR_String) "target_java",
  (MR_Integer) 2
};

#line 1885 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_3 = {
  (MR_String) "target_erlang",
  (MR_Integer) 3
};

#line 1891 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_compilation_target_0[4] = {
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_0,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_1,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_2,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_3
};

#line 1899 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_compilation_target_0[4] = {
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_0,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_1,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_3,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_2
};

#line 1907 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_compilation_target_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 1915 "libs.globals.c"
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

#line 1932 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_0 = {
  (MR_String) "csharp_microsoft",
  (MR_Integer) 0
};

#line 1938 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_1 = {
  (MR_String) "csharp_mono",
  (MR_Integer) 1
};

#line 1944 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_2 = {
  (MR_String) "csharp_unknown",
  (MR_Integer) 2
};

#line 1950 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_csharp_compiler_type_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_0,
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_1,
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_2
};

#line 1957 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_csharp_compiler_type_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_0,
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_1,
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_2
};

#line 1964 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_csharp_compiler_type_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1971 "libs.globals.c"
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

#line 1988 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_0 = {
  (MR_String) "env_type_posix",
  (MR_Integer) 0
};

#line 1994 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_1 = {
  (MR_String) "env_type_cygwin",
  (MR_Integer) 1
};

#line 2000 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_2 = {
  (MR_String) "env_type_msys",
  (MR_Integer) 2
};

#line 2006 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_3 = {
  (MR_String) "env_type_win_cmd",
  (MR_Integer) 3
};

#line 2012 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_4 = {
  (MR_String) "env_type_powershell",
  (MR_Integer) 4
};

#line 2018 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_env_type_0[5] = {
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_0,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_1,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_2,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_3,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_4
};

#line 2027 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_env_type_0[5] = {
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_1,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_2,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_0,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_4,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_3
};

#line 2036 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_env_type_0[5] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 3
};

#line 2045 "libs.globals.c"
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

#line 2062 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_file_install_cmd_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2068 "libs.globals.c"
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

#line 2083 "libs.globals.c"
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

#line 2098 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_file_install_cmd_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_1
};

#line 2103 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_file_install_cmd_0_1[1] = {
  &libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_0
};

#line 2108 "libs.globals.c"
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

#line 2122 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_file_install_cmd_0[2] = {
  &libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_1,
  &libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_0
};

#line 2128 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_file_install_cmd_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2134 "libs.globals.c"
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

#line 2151 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_0 = {
  (MR_String) "lang_c",
  (MR_Integer) 0
};

#line 2157 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_1 = {
  (MR_String) "lang_csharp",
  (MR_Integer) 1
};

#line 2163 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_2 = {
  (MR_String) "lang_java",
  (MR_Integer) 2
};

#line 2169 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_3 = {
  (MR_String) "lang_erlang",
  (MR_Integer) 3
};

#line 2175 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_foreign_language_0[4] = {
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_0,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_1,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_2,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_3
};

#line 2183 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_foreign_language_0[4] = {
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_0,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_1,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_3,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_2
};

#line 2191 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_foreign_language_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 2199 "libs.globals.c"
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

#line 2216 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_0 = {
  (MR_String) "gc_automatic",
  (MR_Integer) 0
};

#line 2222 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_1 = {
  (MR_String) "gc_none",
  (MR_Integer) 1
};

#line 2228 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_2 = {
  (MR_String) "gc_boehm",
  (MR_Integer) 2
};

#line 2234 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_3 = {
  (MR_String) "gc_boehm_debug",
  (MR_Integer) 3
};

#line 2240 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_4 = {
  (MR_String) "gc_hgc",
  (MR_Integer) 4
};

#line 2246 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_5 = {
  (MR_String) "gc_accurate",
  (MR_Integer) 5
};

#line 2252 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_gc_method_0[6] = {
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_0,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_1,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_2,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_3,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_4,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_5
};

#line 2262 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_gc_method_0[6] = {
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_5,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_0,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_2,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_3,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_4,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_1
};

#line 2272 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_gc_method_0[6] = {
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 0
};

#line 2282 "libs.globals.c"
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

#line 2299 "libs.globals.c"
static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_TypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 2308 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0
  }
};

#line 2316 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1mdbcomp__feedback__type_ctor_info_feedback_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_0
  }
};

#line 2324 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__list__ti_list_1libs__globals__type_ctor_info_line_number_range_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &libs__globals__libs__globals__type_ctor_info_line_number_range_0
  }
};

#line 2332 "libs.globals.c"
static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1libs__globals__type_ctor_info_line_number_range_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &libs__globals__list__ti_list_1libs__globals__type_ctor_info_line_number_range_0
  }
};

#line 2341 "libs.globals.c"
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
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1mdbcomp__feedback__type_ctor_info_feedback_info_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_env_type_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_env_type_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_env_type_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_file_install_cmd_0,
  (MR_PseudoTypeInfo) &libs__globals__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1libs__globals__type_ctor_info_line_number_range_0
};

#line 2364 "libs.globals.c"
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
  (MR_String) "g_maybe_feedback",
  (MR_String) "g_host_env_type",
  (MR_String) "g_system_env_type",
  (MR_String) "g_target_env_type",
  (MR_String) "g_file_install_cmd",
  (MR_String) "g_limit_error_contexts_map"
};

#line 2387 "libs.globals.c"
static const MR_DuArgLocn libs__globals__libs__globals__field_locns_globals_0_0[19] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 2,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 5,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 7,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 9,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 11,
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
    (MR_Integer) 3
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 3,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 6,
    (MR_Integer) 3
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
  }
};

#line 2486 "libs.globals.c"
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

#line 2501 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_globals_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_globals_0_0
};

#line 2506 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_globals_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_globals_0_0
  }
};

#line 2515 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_globals_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_globals_0_0
};

#line 2520 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_globals_0[1] = {
  (MR_Integer) 0
};

#line 2525 "libs.globals.c"
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

#line 2542 "libs.globals.c"
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

#line 2559 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_line_number_range_0_0[2] = {
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

#line 2565 "libs.globals.c"
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

#line 2580 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_line_number_range_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_line_number_range_0_0
};

#line 2585 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_line_number_range_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_line_number_range_0_0
  }
};

#line 2594 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_line_number_range_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_line_number_range_0_0
};

#line 2599 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_line_number_range_0[1] = {
  (MR_Integer) 0
};

#line 2604 "libs.globals.c"
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

#line 2621 "libs.globals.c"
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

#line 2638 "libs.globals.c"
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

#line 2653 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_reuse_strategy_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2658 "libs.globals.c"
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

#line 2673 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_0
};

#line 2678 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_1[1] = {
  &libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_1
};

#line 2683 "libs.globals.c"
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

#line 2697 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_reuse_strategy_0[2] = {
  &libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_0,
  &libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_1
};

#line 2703 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_reuse_strategy_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2709 "libs.globals.c"
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

#line 2726 "libs.globals.c"
static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2735 "libs.globals.c"
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

#line 2752 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_0 = {
  (MR_String) "none",
  (MR_Integer) 0
};

#line 2758 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_1 = {
  (MR_String) "shallow",
  (MR_Integer) 1
};

#line 2764 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_2 = {
  (MR_String) "deep",
  (MR_Integer) 2
};

#line 2770 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_ssdb_trace_level_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_0,
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_1,
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_2
};

#line 2777 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_ssdb_trace_level_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_2,
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_0,
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_1
};

#line 2784 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_ssdb_trace_level_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2791 "libs.globals.c"
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

#line 2808 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_0 = {
  (MR_String) "tags_none",
  (MR_Integer) 0
};

#line 2814 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_1 = {
  (MR_String) "tags_low",
  (MR_Integer) 1
};

#line 2820 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_2 = {
  (MR_String) "tags_high",
  (MR_Integer) 2
};

#line 2826 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_tags_method_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_0,
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_1,
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_2
};

#line 2833 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_tags_method_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_2,
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_1,
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_0
};

#line 2840 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_tags_method_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2847 "libs.globals.c"
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

#line 2864 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_0 = {
  (MR_String) "norm_simple",
  (MR_Integer) 0
};

#line 2870 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_1 = {
  (MR_String) "norm_total",
  (MR_Integer) 1
};

#line 2876 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_2 = {
  (MR_String) "norm_num_data_elems",
  (MR_Integer) 2
};

#line 2882 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_3 = {
  (MR_String) "norm_size_data_elems",
  (MR_Integer) 3
};

#line 2888 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_termination_norm_0[4] = {
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_0,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_1,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_2,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_3
};

#line 2896 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_termination_norm_0[4] = {
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_2,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_0,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_3,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_1
};

#line 2904 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_termination_norm_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 2912 "libs.globals.c"
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

#line 2929 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____c_compiler_type_0_0_10001(
#line 2932 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 2934 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 2936 "libs.globals.c"
{
#line 2938 "libs.globals.c"
  {
#line 2940 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 2943 "libs.globals.c"
    {
#line 2945 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____c_compiler_type_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 2948 "libs.globals.c"
    return libs__globals__succeeded;
#line 2950 "libs.globals.c"
  }
#line 2952 "libs.globals.c"
}

#line 2955 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____c_compiler_type_0_0_10001(
#line 2958 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 2960 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 2962 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 2964 "libs.globals.c"
{
#line 2966 "libs.globals.c"
  {
#line 2968 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 2971 "libs.globals.c"
    {
#line 2973 "libs.globals.c"
      libs__globals____Compare____c_compiler_type_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 2976 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 2978 "libs.globals.c"
  }
#line 2980 "libs.globals.c"
}

#line 2983 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____clang_version_0_0_10001(
#line 2986 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 2988 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 2990 "libs.globals.c"
{
#line 2992 "libs.globals.c"
  {
#line 2994 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 2997 "libs.globals.c"
    {
#line 2999 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____clang_version_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3002 "libs.globals.c"
    return libs__globals__succeeded;
#line 3004 "libs.globals.c"
  }
#line 3006 "libs.globals.c"
}

#line 3009 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____clang_version_0_0_10001(
#line 3012 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3014 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3016 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3018 "libs.globals.c"
{
#line 3020 "libs.globals.c"
  {
#line 3022 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3025 "libs.globals.c"
    {
#line 3027 "libs.globals.c"
      libs__globals____Compare____clang_version_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3030 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3032 "libs.globals.c"
  }
#line 3034 "libs.globals.c"
}

#line 3037 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____compilation_target_0_0_10001(
#line 3040 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3042 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3044 "libs.globals.c"
{
#line 3046 "libs.globals.c"
  {
#line 3048 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3051 "libs.globals.c"
    {
#line 3053 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____compilation_target_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3056 "libs.globals.c"
    return libs__globals__succeeded;
#line 3058 "libs.globals.c"
  }
#line 3060 "libs.globals.c"
}

#line 3063 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____compilation_target_0_0_10001(
#line 3066 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3068 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3070 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3072 "libs.globals.c"
{
#line 3074 "libs.globals.c"
  {
#line 3076 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3079 "libs.globals.c"
    {
#line 3081 "libs.globals.c"
      libs__globals____Compare____compilation_target_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3084 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3086 "libs.globals.c"
  }
#line 3088 "libs.globals.c"
}

#line 3091 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____csharp_compiler_type_0_0_10001(
#line 3094 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3096 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3098 "libs.globals.c"
{
#line 3100 "libs.globals.c"
  {
#line 3102 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3105 "libs.globals.c"
    {
#line 3107 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____csharp_compiler_type_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3110 "libs.globals.c"
    return libs__globals__succeeded;
#line 3112 "libs.globals.c"
  }
#line 3114 "libs.globals.c"
}

#line 3117 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____csharp_compiler_type_0_0_10001(
#line 3120 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3122 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3124 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3126 "libs.globals.c"
{
#line 3128 "libs.globals.c"
  {
#line 3130 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3133 "libs.globals.c"
    {
#line 3135 "libs.globals.c"
      libs__globals____Compare____csharp_compiler_type_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3138 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3140 "libs.globals.c"
  }
#line 3142 "libs.globals.c"
}

#line 3145 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____env_type_0_0_10001(
#line 3148 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3150 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3152 "libs.globals.c"
{
#line 3154 "libs.globals.c"
  {
#line 3156 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3159 "libs.globals.c"
    {
#line 3161 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____env_type_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3164 "libs.globals.c"
    return libs__globals__succeeded;
#line 3166 "libs.globals.c"
  }
#line 3168 "libs.globals.c"
}

#line 3171 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____env_type_0_0_10001(
#line 3174 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3176 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3178 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3180 "libs.globals.c"
{
#line 3182 "libs.globals.c"
  {
#line 3184 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3187 "libs.globals.c"
    {
#line 3189 "libs.globals.c"
      libs__globals____Compare____env_type_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3192 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3194 "libs.globals.c"
  }
#line 3196 "libs.globals.c"
}

#line 3199 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____file_install_cmd_0_0_10001(
#line 3202 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3204 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3206 "libs.globals.c"
{
#line 3208 "libs.globals.c"
  {
#line 3210 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3213 "libs.globals.c"
    {
#line 3215 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____file_install_cmd_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3218 "libs.globals.c"
    return libs__globals__succeeded;
#line 3220 "libs.globals.c"
  }
#line 3222 "libs.globals.c"
}

#line 3225 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____file_install_cmd_0_0_10001(
#line 3228 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3230 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3232 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3234 "libs.globals.c"
{
#line 3236 "libs.globals.c"
  {
#line 3238 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3241 "libs.globals.c"
    {
#line 3243 "libs.globals.c"
      libs__globals____Compare____file_install_cmd_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3246 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3248 "libs.globals.c"
  }
#line 3250 "libs.globals.c"
}

#line 3253 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____foreign_language_0_0_10001(
#line 3256 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3258 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3260 "libs.globals.c"
{
#line 3262 "libs.globals.c"
  {
#line 3264 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3267 "libs.globals.c"
    {
#line 3269 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____foreign_language_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3272 "libs.globals.c"
    return libs__globals__succeeded;
#line 3274 "libs.globals.c"
  }
#line 3276 "libs.globals.c"
}

#line 3279 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____foreign_language_0_0_10001(
#line 3282 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3284 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3286 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3288 "libs.globals.c"
{
#line 3290 "libs.globals.c"
  {
#line 3292 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3295 "libs.globals.c"
    {
#line 3297 "libs.globals.c"
      libs__globals____Compare____foreign_language_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3300 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3302 "libs.globals.c"
  }
#line 3304 "libs.globals.c"
}

#line 3307 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____gc_method_0_0_10001(
#line 3310 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3312 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3314 "libs.globals.c"
{
#line 3316 "libs.globals.c"
  {
#line 3318 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3321 "libs.globals.c"
    {
#line 3323 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____gc_method_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3326 "libs.globals.c"
    return libs__globals__succeeded;
#line 3328 "libs.globals.c"
  }
#line 3330 "libs.globals.c"
}

#line 3333 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____gc_method_0_0_10001(
#line 3336 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3338 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3340 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3342 "libs.globals.c"
{
#line 3344 "libs.globals.c"
  {
#line 3346 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3349 "libs.globals.c"
    {
#line 3351 "libs.globals.c"
      libs__globals____Compare____gc_method_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3354 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3356 "libs.globals.c"
  }
#line 3358 "libs.globals.c"
}

#line 3361 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____globals_0_0_10001(
#line 3364 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3366 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3368 "libs.globals.c"
{
#line 3370 "libs.globals.c"
  {
#line 3372 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3375 "libs.globals.c"
    {
#line 3377 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____globals_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3380 "libs.globals.c"
    return libs__globals__succeeded;
#line 3382 "libs.globals.c"
  }
#line 3384 "libs.globals.c"
}

#line 3387 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____globals_0_0_10001(
#line 3390 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3392 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3394 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3396 "libs.globals.c"
{
#line 3398 "libs.globals.c"
  {
#line 3400 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3403 "libs.globals.c"
    {
#line 3405 "libs.globals.c"
      libs__globals____Compare____globals_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3408 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3410 "libs.globals.c"
  }
#line 3412 "libs.globals.c"
}

#line 3415 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____limit_error_contexts_map_0_0_10001(
#line 3418 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3420 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3422 "libs.globals.c"
{
#line 3424 "libs.globals.c"
  {
#line 3426 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3429 "libs.globals.c"
    {
#line 3431 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____limit_error_contexts_map_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3434 "libs.globals.c"
    return libs__globals__succeeded;
#line 3436 "libs.globals.c"
  }
#line 3438 "libs.globals.c"
}

#line 3441 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____limit_error_contexts_map_0_0_10001(
#line 3444 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3446 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3448 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3450 "libs.globals.c"
{
#line 3452 "libs.globals.c"
  {
#line 3454 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3457 "libs.globals.c"
    {
#line 3459 "libs.globals.c"
      libs__globals____Compare____limit_error_contexts_map_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3462 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3464 "libs.globals.c"
  }
#line 3466 "libs.globals.c"
}

#line 3469 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____line_number_range_0_0_10001(
#line 3472 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3474 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3476 "libs.globals.c"
{
#line 3478 "libs.globals.c"
  {
#line 3480 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3483 "libs.globals.c"
    {
#line 3485 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____line_number_range_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3488 "libs.globals.c"
    return libs__globals__succeeded;
#line 3490 "libs.globals.c"
  }
#line 3492 "libs.globals.c"
}

#line 3495 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____line_number_range_0_0_10001(
#line 3498 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3500 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3502 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3504 "libs.globals.c"
{
#line 3506 "libs.globals.c"
  {
#line 3508 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3511 "libs.globals.c"
    {
#line 3513 "libs.globals.c"
      libs__globals____Compare____line_number_range_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3516 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3518 "libs.globals.c"
  }
#line 3520 "libs.globals.c"
}

#line 3523 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____may_be_thread_safe_0_0_10001(
#line 3526 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3528 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3530 "libs.globals.c"
{
#line 3532 "libs.globals.c"
  {
#line 3534 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3537 "libs.globals.c"
    {
#line 3539 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____may_be_thread_safe_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3542 "libs.globals.c"
    return libs__globals__succeeded;
#line 3544 "libs.globals.c"
  }
#line 3546 "libs.globals.c"
}

#line 3549 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____may_be_thread_safe_0_0_10001(
#line 3552 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3554 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3556 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3558 "libs.globals.c"
{
#line 3560 "libs.globals.c"
  {
#line 3562 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3565 "libs.globals.c"
    {
#line 3567 "libs.globals.c"
      libs__globals____Compare____may_be_thread_safe_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3570 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3572 "libs.globals.c"
  }
#line 3574 "libs.globals.c"
}

#line 3577 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____reuse_strategy_0_0_10001(
#line 3580 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3582 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3584 "libs.globals.c"
{
#line 3586 "libs.globals.c"
  {
#line 3588 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3591 "libs.globals.c"
    {
#line 3593 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____reuse_strategy_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3596 "libs.globals.c"
    return libs__globals__succeeded;
#line 3598 "libs.globals.c"
  }
#line 3600 "libs.globals.c"
}

#line 3603 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____reuse_strategy_0_0_10001(
#line 3606 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3608 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3610 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3612 "libs.globals.c"
{
#line 3614 "libs.globals.c"
  {
#line 3616 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3619 "libs.globals.c"
    {
#line 3621 "libs.globals.c"
      libs__globals____Compare____reuse_strategy_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3624 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3626 "libs.globals.c"
  }
#line 3628 "libs.globals.c"
}

#line 3631 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____source_file_map_0_0_10001(
#line 3634 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3636 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3638 "libs.globals.c"
{
#line 3640 "libs.globals.c"
  {
#line 3642 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3645 "libs.globals.c"
    {
#line 3647 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____source_file_map_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3650 "libs.globals.c"
    return libs__globals__succeeded;
#line 3652 "libs.globals.c"
  }
#line 3654 "libs.globals.c"
}

#line 3657 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____source_file_map_0_0_10001(
#line 3660 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3662 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3664 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3666 "libs.globals.c"
{
#line 3668 "libs.globals.c"
  {
#line 3670 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3673 "libs.globals.c"
    {
#line 3675 "libs.globals.c"
      libs__globals____Compare____source_file_map_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3678 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3680 "libs.globals.c"
  }
#line 3682 "libs.globals.c"
}

#line 3685 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____ssdb_trace_level_0_0_10001(
#line 3688 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3690 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3692 "libs.globals.c"
{
#line 3694 "libs.globals.c"
  {
#line 3696 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3699 "libs.globals.c"
    {
#line 3701 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____ssdb_trace_level_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3704 "libs.globals.c"
    return libs__globals__succeeded;
#line 3706 "libs.globals.c"
  }
#line 3708 "libs.globals.c"
}

#line 3711 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____ssdb_trace_level_0_0_10001(
#line 3714 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3716 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3718 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3720 "libs.globals.c"
{
#line 3722 "libs.globals.c"
  {
#line 3724 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3727 "libs.globals.c"
    {
#line 3729 "libs.globals.c"
      libs__globals____Compare____ssdb_trace_level_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3732 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3734 "libs.globals.c"
  }
#line 3736 "libs.globals.c"
}

#line 3739 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____tags_method_0_0_10001(
#line 3742 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3744 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3746 "libs.globals.c"
{
#line 3748 "libs.globals.c"
  {
#line 3750 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3753 "libs.globals.c"
    {
#line 3755 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____tags_method_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3758 "libs.globals.c"
    return libs__globals__succeeded;
#line 3760 "libs.globals.c"
  }
#line 3762 "libs.globals.c"
}

#line 3765 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____tags_method_0_0_10001(
#line 3768 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3770 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3772 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3774 "libs.globals.c"
{
#line 3776 "libs.globals.c"
  {
#line 3778 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3781 "libs.globals.c"
    {
#line 3783 "libs.globals.c"
      libs__globals____Compare____tags_method_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3786 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3788 "libs.globals.c"
  }
#line 3790 "libs.globals.c"
}

#line 3793 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____termination_norm_0_0_10001(
#line 3796 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3798 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3800 "libs.globals.c"
{
#line 3802 "libs.globals.c"
  {
#line 3804 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3807 "libs.globals.c"
    {
#line 3809 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____termination_norm_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3812 "libs.globals.c"
    return libs__globals__succeeded;
#line 3814 "libs.globals.c"
  }
#line 3816 "libs.globals.c"
}

#line 3819 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____termination_norm_0_0_10001(
#line 3822 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3824 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3826 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3828 "libs.globals.c"
{
#line 3830 "libs.globals.c"
  {
#line 3832 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3835 "libs.globals.c"
    {
#line 3837 "libs.globals.c"
      libs__globals____Compare____termination_norm_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3840 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3842 "libs.globals.c"
  }
#line 3844 "libs.globals.c"
}

#line 449 "globals.m"
static MR_bool MR_CALL 
libs__globals__IntroducedFrom__pred__convert_c_compiler_type_with_version__449__1_1_p_0(
#line 449 "globals.m"
  MR_Char libs__globals__HeadVar__1_12)
#line 449 "globals.m"
{
#line 449 "globals.m"
  {
#line 449 "globals.m"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__1_12 == (MR_Char) 95);

#line 449 "globals.m"
    return libs__globals__succeeded;
#line 449 "globals.m"
  }
#line 449 "globals.m"
}

#line 720 "globals.m"
static MR_Word MR_CALL 
libs__globals__IntroducedFrom__func__get_backend_foreign_languages__720__1_1_f_0(
#line 720 "globals.m"
  MR_String libs__globals__HeadVar__1_11)
#line 720 "globals.m"
{
#line 720 "globals.m"
  {
#line 720 "globals.m"
    MR_bool libs__globals__succeeded;
#line 720 "globals.m"
    MR_Word libs__globals__HeadVar__2_12;
#line 720 "globals.m"
    MR_Word libs__globals__ForeignLang0_8;

#line 718 "globals.m"
    {
#line 718 "globals.m"
      libs__globals__succeeded = libs__globals__convert_foreign_language_2_p_0(libs__globals__HeadVar__1_11, &libs__globals__ForeignLang0_8);
    }
#line 720 "globals.m"
    if (libs__globals__succeeded)
#line 719 "globals.m"
      libs__globals__HeadVar__2_12 = libs__globals__ForeignLang0_8;
#line 720 "globals.m"
    else
#line 721 "globals.m"
      {
#line 721 "globals.m"
        {
#line 721 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.get_backend_foreign_languages\'/2", (MR_String) "invalid foreign_language string");
        }
#line 721 "globals.m"
      }
#line 720 "globals.m"
    return libs__globals__HeadVar__2_12;
#line 720 "globals.m"
  }
#line 720 "globals.m"
}

#line 111 "globals.m"
void MR_CALL 
libs__globals____Compare____termination_norm_0_0(
#line 111 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 111 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 111 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 111 "globals.m"
{
#line 111 "globals.m"
  {
#line 111 "globals.m"
    MR_bool libs__globals__succeeded;
#line 111 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 111 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 111 "globals.m"
    {
#line 111 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 111 "globals.m"
      return;
    }
#line 111 "globals.m"
  }
#line 111 "globals.m"
}

#line 111 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____termination_norm_0_0(
#line 111 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 111 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 111 "globals.m"
{
#line 3950 "libs.globals.c"
  {
#line 3952 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 3955 "libs.globals.c"
    return libs__globals__succeeded;
#line 3957 "libs.globals.c"
  }
#line 111 "globals.m"
}

#line 106 "globals.m"
void MR_CALL 
libs__globals____Compare____tags_method_0_0(
#line 106 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 106 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 106 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 106 "globals.m"
{
#line 106 "globals.m"
  {
#line 106 "globals.m"
    MR_bool libs__globals__succeeded;
#line 106 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 106 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 106 "globals.m"
    {
#line 106 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 106 "globals.m"
      return;
    }
#line 106 "globals.m"
  }
#line 106 "globals.m"
}

#line 106 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____tags_method_0_0(
#line 106 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 106 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 106 "globals.m"
{
#line 4003 "libs.globals.c"
  {
#line 4005 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 4008 "libs.globals.c"
    return libs__globals__succeeded;
#line 4010 "libs.globals.c"
  }
#line 106 "globals.m"
}

#line 184 "globals.m"
void MR_CALL 
libs__globals____Compare____ssdb_trace_level_0_0(
#line 184 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 184 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 184 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 184 "globals.m"
{
#line 184 "globals.m"
  {
#line 184 "globals.m"
    MR_bool libs__globals__succeeded;
#line 184 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 184 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 184 "globals.m"
    {
#line 184 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 184 "globals.m"
      return;
    }
#line 184 "globals.m"
  }
#line 184 "globals.m"
}

#line 184 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____ssdb_trace_level_0_0(
#line 184 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 184 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 184 "globals.m"
{
#line 4056 "libs.globals.c"
  {
#line 4058 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 4061 "libs.globals.c"
    return libs__globals__succeeded;
#line 4063 "libs.globals.c"
  }
#line 184 "globals.m"
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
      mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_2[2], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__Cast_HeadVar1_4)), ((MR_Box) (libs__globals__Cast_HeadVar2_5)));
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
      return libs__globals__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__globals_scalar_common_2[2], ((MR_Box) (libs__globals__Cast_HeadVar1_3)), ((MR_Box) (libs__globals__Cast_HeadVar2_4)));
    }
#line 210 "globals.m"
    return libs__globals__succeeded;
#line 210 "globals.m"
  }
#line 210 "globals.m"
}

#line 153 "globals.m"
void MR_CALL 
libs__globals____Compare____reuse_strategy_0_0(
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
    MR_Integer libs__globals__CastX_8 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 153 "globals.m"
    MR_Integer libs__globals__CastY_9 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 153 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_8 == libs__globals__CastY_9);
#line 153 "globals.m"
    if (libs__globals__succeeded)
#line 4154 "libs.globals.c"
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 153 "globals.m"
    else
#line 153 "globals.m"
    if ((libs__globals__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 153 "globals.m"
      if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 153 "globals.m"
        *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 153 "globals.m"
      else
#line 4166 "libs.globals.c"
        *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "globals.m"
    else
#line 153 "globals.m"
      {
#line 153 "globals.m"
        MR_Integer libs__globals__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));

#line 153 "globals.m"
        if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4177 "libs.globals.c"
          *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "globals.m"
        else
#line 153 "globals.m"
          {
#line 153 "globals.m"
            MR_Integer libs__globals__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 0)));

#line 153 "globals.m"
            {
#line 153 "globals.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__V_11_11, libs__globals__V_7_7);
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
libs__globals____Unify____reuse_strategy_0_0(
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
    MR_Integer libs__globals__CastX_7 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 153 "globals.m"
    MR_Integer libs__globals__CastY_8 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 153 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_7 == libs__globals__CastY_8);
#line 153 "globals.m"
    if (libs__globals__succeeded)
#line 153 "globals.m"
      libs__globals__succeeded = MR_TRUE;
#line 153 "globals.m"
    else
#line 153 "globals.m"
    if ((libs__globals__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 153 "globals.m"
      {
#line 153 "globals.m"
        MR_Integer libs__globals__CastX_3 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 153 "globals.m"
        MR_Integer libs__globals__CastY_4 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 153 "globals.m"
        libs__globals__succeeded = (libs__globals__CastY_4 == libs__globals__CastX_3);
#line 153 "globals.m"
      }
#line 153 "globals.m"
    else
#line 153 "globals.m"
      {
#line 153 "globals.m"
        MR_Integer libs__globals__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 153 "globals.m"
        MR_Integer libs__globals__V_6_6;

#line 153 "globals.m"
        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 153 "globals.m"
        if (libs__globals__succeeded)
#line 153 "globals.m"
          {
#line 153 "globals.m"
            libs__globals__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 4258 "libs.globals.c"
            libs__globals__succeeded = (libs__globals__V_5_5 == libs__globals__V_6_6);
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

#line 117 "globals.m"
void MR_CALL 
libs__globals____Compare____may_be_thread_safe_0_0(
#line 117 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 117 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 117 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 117 "globals.m"
{
#line 117 "globals.m"
  {
#line 117 "globals.m"
    MR_bool libs__globals__succeeded;
#line 117 "globals.m"
    MR_Word libs__globals__Cast_HeadVar1_4 = libs__globals__HeadVar__2_2;
#line 117 "globals.m"
    MR_Word libs__globals__Cast_HeadVar2_5 = libs__globals__HeadVar__3_3;
#line 117 "globals.m"
    MR_Integer libs__globals__V_7_7 = (MR_Integer) libs__globals__Cast_HeadVar1_4;
#line 117 "globals.m"
    MR_Integer libs__globals__V_8_8 = (MR_Integer) libs__globals__Cast_HeadVar2_5;

#line 117 "globals.m"
    {
#line 117 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__V_7_7, libs__globals__V_8_8);
#line 117 "globals.m"
      return;
    }
#line 117 "globals.m"
  }
#line 117 "globals.m"
}

#line 117 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____may_be_thread_safe_0_0(
#line 117 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 117 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 117 "globals.m"
{
#line 117 "globals.m"
  {
#line 117 "globals.m"
    MR_bool libs__globals__succeeded;
#line 117 "globals.m"
    MR_Word libs__globals__Cast_HeadVar1_3 = libs__globals__HeadVar__1_1;
#line 117 "globals.m"
    MR_Word libs__globals__Cast_HeadVar2_4 = libs__globals__HeadVar__2_2;

#line 117 "globals.m"
    libs__globals__succeeded = (libs__globals__Cast_HeadVar1_3 == libs__globals__Cast_HeadVar2_4);
#line 117 "globals.m"
    return libs__globals__succeeded;
#line 117 "globals.m"
  }
#line 117 "globals.m"
}

#line 212 "globals.m"
void MR_CALL 
libs__globals____Compare____line_number_range_0_0(
#line 212 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 212 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 212 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 212 "globals.m"
{
#line 212 "globals.m"
  {
#line 212 "globals.m"
    MR_bool libs__globals__succeeded;
#line 212 "globals.m"
    MR_Integer libs__globals__CastX_9 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 212 "globals.m"
    MR_Integer libs__globals__CastY_10 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 212 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_9 == libs__globals__CastY_10);
#line 212 "globals.m"
    if (libs__globals__succeeded)
#line 4358 "libs.globals.c"
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 212 "globals.m"
    else
#line 212 "globals.m"
      {
#line 212 "globals.m"
        MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 212 "globals.m"
        MR_Word libs__globals__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 212 "globals.m"
        MR_Word libs__globals__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 0)));
#line 212 "globals.m"
        MR_Word libs__globals__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)));
#line 212 "globals.m"
        MR_Word libs__globals__V_8_8;

#line 212 "globals.m"
        {
#line 212 "globals.m"
          mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[1], &libs__globals__V_8_8, ((MR_Box) (libs__globals__V_4_4)), ((MR_Box) (libs__globals__V_6_6)));
        }
#line 4380 "libs.globals.c"
        libs__globals__succeeded = (libs__globals__V_8_8 == (MR_Integer) 0);
#line 212 "globals.m"
        libs__globals__succeeded = !(libs__globals__succeeded);
#line 212 "globals.m"
        if (libs__globals__succeeded)
#line 212 "globals.m"
          *libs__globals__HeadVar__1_1 = libs__globals__V_8_8;
#line 212 "globals.m"
        else
#line 212 "globals.m"
          {
#line 212 "globals.m"
            {
#line 212 "globals.m"
              mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[1], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__V_5_5)), ((MR_Box) (libs__globals__V_7_7)));
#line 212 "globals.m"
              return;
            }
#line 212 "globals.m"
          }
#line 212 "globals.m"
      }
#line 212 "globals.m"
  }
#line 212 "globals.m"
}

#line 212 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____line_number_range_0_0(
#line 212 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 212 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 212 "globals.m"
{
#line 212 "globals.m"
  {
#line 212 "globals.m"
    MR_bool libs__globals__succeeded;
#line 212 "globals.m"
    MR_Integer libs__globals__CastX_7 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 212 "globals.m"
    MR_Integer libs__globals__CastY_8 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 212 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_7 == libs__globals__CastY_8);
#line 212 "globals.m"
    if (libs__globals__succeeded)
#line 212 "globals.m"
      libs__globals__succeeded = MR_TRUE;
#line 212 "globals.m"
    else
#line 212 "globals.m"
      {
#line 212 "globals.m"
        MR_Word libs__globals__TypeInfo_10_10;
#line 212 "globals.m"
        MR_Word libs__globals__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 212 "globals.m"
        MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)));
#line 212 "globals.m"
        MR_Word libs__globals__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 212 "globals.m"
        MR_Word libs__globals__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)));

#line 4447 "libs.globals.c"
        {
#line 4449 "libs.globals.c"
          libs__globals__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__globals_scalar_common_1[1], ((MR_Box) (libs__globals__V_3_3)), ((MR_Box) (libs__globals__V_5_5)));
        }
#line 212 "globals.m"
        if (libs__globals__succeeded)
#line 212 "globals.m"
          {
#line 4456 "libs.globals.c"
            libs__globals__TypeInfo_10_10 = (MR_Word) &libs__globals_scalar_common_1[1];
#line 4458 "libs.globals.c"
            {
#line 4460 "libs.globals.c"
              return libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_10_10, ((MR_Box) (libs__globals__V_4_4)), ((MR_Box) (libs__globals__V_6_6)));
            }
#line 212 "globals.m"
          }
#line 212 "globals.m"
      }
#line 212 "globals.m"
    return libs__globals__succeeded;
#line 212 "globals.m"
  }
#line 212 "globals.m"
}

#line 223 "globals.m"
void MR_CALL 
libs__globals____Compare____limit_error_contexts_map_0_0(
#line 223 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 223 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 223 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 223 "globals.m"
{
#line 223 "globals.m"
  {
#line 223 "globals.m"
    MR_bool libs__globals__succeeded;
#line 223 "globals.m"
    MR_Word libs__globals__Cast_HeadVar1_4 = libs__globals__HeadVar__2_2;
#line 223 "globals.m"
    MR_Word libs__globals__Cast_HeadVar2_5 = libs__globals__HeadVar__3_3;

#line 223 "globals.m"
    {
#line 223 "globals.m"
      mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_2[1], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__Cast_HeadVar1_4)), ((MR_Box) (libs__globals__Cast_HeadVar2_5)));
#line 223 "globals.m"
      return;
    }
#line 223 "globals.m"
  }
#line 223 "globals.m"
}

#line 223 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____limit_error_contexts_map_0_0(
#line 223 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 223 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 223 "globals.m"
{
#line 223 "globals.m"
  {
#line 223 "globals.m"
    MR_bool libs__globals__succeeded;
#line 223 "globals.m"
    MR_Word libs__globals__Cast_HeadVar1_3 = libs__globals__HeadVar__1_1;
#line 223 "globals.m"
    MR_Word libs__globals__Cast_HeadVar2_4 = libs__globals__HeadVar__2_2;

#line 223 "globals.m"
    {
#line 223 "globals.m"
      return libs__globals__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__globals_scalar_common_2[1], ((MR_Box) (libs__globals__Cast_HeadVar1_3)), ((MR_Box) (libs__globals__Cast_HeadVar2_4)));
    }
#line 223 "globals.m"
    return libs__globals__succeeded;
#line 223 "globals.m"
  }
#line 223 "globals.m"
}

#line 661 "globals.m"
void MR_CALL 
libs__globals____Compare____globals_0_0(
#line 661 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 661 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 661 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 661 "globals.m"
{
#line 661 "globals.m"
  {
#line 661 "globals.m"
    MR_bool libs__globals__succeeded;
#line 661 "globals.m"
    MR_Integer libs__globals__CastX_60 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 661 "globals.m"
    MR_Integer libs__globals__CastY_61 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 661 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_60 == libs__globals__CastY_61);
#line 661 "globals.m"
    if (libs__globals__succeeded)
#line 4560 "libs.globals.c"
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 661 "globals.m"
    else
#line 661 "globals.m"
      {
#line 661 "globals.m"
        MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 661 "globals.m"
        MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 661 "globals.m"
        MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 661 "globals.m"
        MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 661 "globals.m"
        MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 661 "globals.m"
        MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 661 "globals.m"
        MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 661 "globals.m"
        MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)));
#line 661 "globals.m"
        MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 661 "globals.m"
        MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 661 "globals.m"
        MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 4)));
#line 661 "globals.m"
        MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 5)));
#line 661 "globals.m"
        MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 6)));
#line 661 "globals.m"
        MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 7)));
#line 661 "globals.m"
        MR_Word libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 661 "globals.m"
        MR_Word libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 661 "globals.m"
        MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 661 "globals.m"
        MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 9)));
#line 661 "globals.m"
        MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 10)));
#line 661 "globals.m"
        MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 0)));
#line 661 "globals.m"
        MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 661 "globals.m"
        MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 661 "globals.m"
        MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 661 "globals.m"
        MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 661 "globals.m"
        MR_Word libs__globals__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 661 "globals.m"
        MR_Word libs__globals__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 661 "globals.m"
        MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 2)));
#line 661 "globals.m"
        MR_Word libs__globals__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 661 "globals.m"
        MR_Word libs__globals__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 661 "globals.m"
        MR_Word libs__globals__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 4)));
#line 661 "globals.m"
        MR_Word libs__globals__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 5)));
#line 661 "globals.m"
        MR_Word libs__globals__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 6)));
#line 661 "globals.m"
        MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 7)));
#line 661 "globals.m"
        MR_Word libs__globals__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 661 "globals.m"
        MR_Word libs__globals__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 661 "globals.m"
        MR_Word libs__globals__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 661 "globals.m"
        MR_Word libs__globals__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 9)));
#line 661 "globals.m"
        MR_Word libs__globals__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 10)));
#line 661 "globals.m"
        MR_Word libs__globals__V_42_42;

#line 661 "globals.m"
        {
#line 661 "globals.m"
          mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_2[0], &libs__globals__V_42_42, ((MR_Box) (libs__globals__V_4_4)), ((MR_Box) (libs__globals__V_23_23)));
        }
#line 4650 "libs.globals.c"
        libs__globals__succeeded = (libs__globals__V_42_42 == (MR_Integer) 0);
#line 661 "globals.m"
        libs__globals__succeeded = !(libs__globals__succeeded);
#line 661 "globals.m"
        if (libs__globals__succeeded)
#line 661 "globals.m"
          *libs__globals__HeadVar__1_1 = libs__globals__V_42_42;
#line 661 "globals.m"
        else
#line 661 "globals.m"
          {
#line 661 "globals.m"
            MR_Word libs__globals__V_43_43;
#line 661 "globals.m"
            MR_Integer libs__globals__V_81_81 = (MR_Integer) libs__globals__V_5_5;
#line 661 "globals.m"
            MR_Integer libs__globals__V_82_82 = (MR_Integer) libs__globals__V_24_24;

#line 661 "globals.m"
            {
#line 661 "globals.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_43_43, libs__globals__V_81_81, libs__globals__V_82_82);
            }
#line 4674 "libs.globals.c"
            libs__globals__succeeded = (libs__globals__V_43_43 == (MR_Integer) 0);
#line 661 "globals.m"
            libs__globals__succeeded = !(libs__globals__succeeded);
#line 661 "globals.m"
            if (libs__globals__succeeded)
#line 661 "globals.m"
              *libs__globals__HeadVar__1_1 = libs__globals__V_43_43;
#line 661 "globals.m"
            else
#line 661 "globals.m"
              {
#line 661 "globals.m"
                MR_Word libs__globals__V_44_44;
#line 661 "globals.m"
                MR_Integer libs__globals__V_83_83 = (MR_Integer) libs__globals__V_6_6;
#line 661 "globals.m"
                MR_Integer libs__globals__V_84_84 = (MR_Integer) libs__globals__V_25_25;

#line 661 "globals.m"
                {
#line 661 "globals.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_44_44, libs__globals__V_83_83, libs__globals__V_84_84);
                }
#line 4698 "libs.globals.c"
                libs__globals__succeeded = (libs__globals__V_44_44 == (MR_Integer) 0);
#line 661 "globals.m"
                libs__globals__succeeded = !(libs__globals__succeeded);
#line 661 "globals.m"
                if (libs__globals__succeeded)
#line 661 "globals.m"
                  *libs__globals__HeadVar__1_1 = libs__globals__V_44_44;
#line 661 "globals.m"
                else
#line 661 "globals.m"
                  {
#line 661 "globals.m"
                    MR_Word libs__globals__V_45_45;
#line 661 "globals.m"
                    MR_Integer libs__globals__V_85_85 = (MR_Integer) libs__globals__V_7_7;
#line 661 "globals.m"
                    MR_Integer libs__globals__V_86_86 = (MR_Integer) libs__globals__V_26_26;

#line 661 "globals.m"
                    {
#line 661 "globals.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_45_45, libs__globals__V_85_85, libs__globals__V_86_86);
                    }
#line 4722 "libs.globals.c"
                    libs__globals__succeeded = (libs__globals__V_45_45 == (MR_Integer) 0);
#line 661 "globals.m"
                    libs__globals__succeeded = !(libs__globals__succeeded);
#line 661 "globals.m"
                    if (libs__globals__succeeded)
#line 661 "globals.m"
                      *libs__globals__HeadVar__1_1 = libs__globals__V_45_45;
#line 661 "globals.m"
                    else
#line 661 "globals.m"
                      {
#line 661 "globals.m"
                        MR_Word libs__globals__V_46_46;
#line 661 "globals.m"
                        MR_Integer libs__globals__V_87_87 = (MR_Integer) libs__globals__V_8_8;
#line 661 "globals.m"
                        MR_Integer libs__globals__V_88_88 = (MR_Integer) libs__globals__V_27_27;

#line 661 "globals.m"
                        {
#line 661 "globals.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_46_46, libs__globals__V_87_87, libs__globals__V_88_88);
                        }
#line 4746 "libs.globals.c"
                        libs__globals__succeeded = (libs__globals__V_46_46 == (MR_Integer) 0);
#line 661 "globals.m"
                        libs__globals__succeeded = !(libs__globals__succeeded);
#line 661 "globals.m"
                        if (libs__globals__succeeded)
#line 661 "globals.m"
                          *libs__globals__HeadVar__1_1 = libs__globals__V_46_46;
#line 661 "globals.m"
                        else
#line 661 "globals.m"
                          {
#line 661 "globals.m"
                            MR_Word libs__globals__V_47_47;
#line 661 "globals.m"
                            MR_Integer libs__globals__V_89_89 = (MR_Integer) libs__globals__V_9_9;
#line 661 "globals.m"
                            MR_Integer libs__globals__V_90_90 = (MR_Integer) libs__globals__V_28_28;

#line 661 "globals.m"
                            {
#line 661 "globals.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_47_47, libs__globals__V_89_89, libs__globals__V_90_90);
                            }
#line 4770 "libs.globals.c"
                            libs__globals__succeeded = (libs__globals__V_47_47 == (MR_Integer) 0);
#line 661 "globals.m"
                            libs__globals__succeeded = !(libs__globals__succeeded);
#line 661 "globals.m"
                            if (libs__globals__succeeded)
#line 661 "globals.m"
                              *libs__globals__HeadVar__1_1 = libs__globals__V_47_47;
#line 661 "globals.m"
                            else
#line 661 "globals.m"
                              {
#line 661 "globals.m"
                                MR_Word libs__globals__V_48_48;

#line 661 "globals.m"
                                {
#line 661 "globals.m"
                                  libs__trace_params____Compare____trace_level_0_0(&libs__globals__V_48_48, libs__globals__V_10_10, libs__globals__V_29_29);
                                }
#line 4790 "libs.globals.c"
                                libs__globals__succeeded = (libs__globals__V_48_48 == (MR_Integer) 0);
#line 661 "globals.m"
                                libs__globals__succeeded = !(libs__globals__succeeded);
#line 661 "globals.m"
                                if (libs__globals__succeeded)
#line 661 "globals.m"
                                  *libs__globals__HeadVar__1_1 = libs__globals__V_48_48;
#line 661 "globals.m"
                                else
#line 661 "globals.m"
                                  {
#line 661 "globals.m"
                                    MR_Word libs__globals__V_49_49;

#line 661 "globals.m"
                                    {
#line 661 "globals.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[3], &libs__globals__V_49_49, ((MR_Box) (libs__globals__V_11_11)), ((MR_Box) (libs__globals__V_30_30)));
                                    }
#line 4810 "libs.globals.c"
                                    libs__globals__succeeded = (libs__globals__V_49_49 == (MR_Integer) 0);
#line 661 "globals.m"
                                    libs__globals__succeeded = !(libs__globals__succeeded);
#line 661 "globals.m"
                                    if (libs__globals__succeeded)
#line 661 "globals.m"
                                      *libs__globals__HeadVar__1_1 = libs__globals__V_49_49;
#line 661 "globals.m"
                                    else
#line 661 "globals.m"
                                      {
#line 661 "globals.m"
                                        MR_Word libs__globals__V_50_50;
#line 661 "globals.m"
                                        MR_Integer libs__globals__V_91_91 = (MR_Integer) libs__globals__V_12_12;
#line 661 "globals.m"
                                        MR_Integer libs__globals__V_92_92 = (MR_Integer) libs__globals__V_31_31;

#line 661 "globals.m"
                                        {
#line 661 "globals.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_50_50, libs__globals__V_91_91, libs__globals__V_92_92);
                                        }
#line 4834 "libs.globals.c"
                                        libs__globals__succeeded = (libs__globals__V_50_50 == (MR_Integer) 0);
#line 661 "globals.m"
                                        libs__globals__succeeded = !(libs__globals__succeeded);
#line 661 "globals.m"
                                        if (libs__globals__succeeded)
#line 661 "globals.m"
                                          *libs__globals__HeadVar__1_1 = libs__globals__V_50_50;
#line 661 "globals.m"
                                        else
#line 661 "globals.m"
                                          {
#line 661 "globals.m"
                                            MR_Word libs__globals__V_51_51;
#line 661 "globals.m"
                                            MR_Integer libs__globals__V_93_93 = (MR_Integer) libs__globals__V_13_13;
#line 661 "globals.m"
                                            MR_Integer libs__globals__V_94_94 = (MR_Integer) libs__globals__V_32_32;

#line 661 "globals.m"
                                            {
#line 661 "globals.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_51_51, libs__globals__V_93_93, libs__globals__V_94_94);
                                            }
#line 4858 "libs.globals.c"
                                            libs__globals__succeeded = (libs__globals__V_51_51 == (MR_Integer) 0);
#line 661 "globals.m"
                                            libs__globals__succeeded = !(libs__globals__succeeded);
#line 661 "globals.m"
                                            if (libs__globals__succeeded)
#line 661 "globals.m"
                                              *libs__globals__HeadVar__1_1 = libs__globals__V_51_51;
#line 661 "globals.m"
                                            else
#line 661 "globals.m"
                                              {
#line 661 "globals.m"
                                                MR_Word libs__globals__V_52_52;

#line 661 "globals.m"
                                                {
#line 661 "globals.m"
                                                  libs__globals____Compare____c_compiler_type_0_0(&libs__globals__V_52_52, libs__globals__V_14_14, libs__globals__V_33_33);
                                                }
#line 4878 "libs.globals.c"
                                                libs__globals__succeeded = (libs__globals__V_52_52 == (MR_Integer) 0);
#line 661 "globals.m"
                                                libs__globals__succeeded = !(libs__globals__succeeded);
#line 661 "globals.m"
                                                if (libs__globals__succeeded)
#line 661 "globals.m"
                                                  *libs__globals__HeadVar__1_1 = libs__globals__V_52_52;
#line 661 "globals.m"
                                                else
#line 661 "globals.m"
                                                  {
#line 661 "globals.m"
                                                    MR_Word libs__globals__V_53_53;
#line 661 "globals.m"
                                                    MR_Integer libs__globals__V_95_95 = (MR_Integer) libs__globals__V_15_15;
#line 661 "globals.m"
                                                    MR_Integer libs__globals__V_96_96 = (MR_Integer) libs__globals__V_34_34;

#line 661 "globals.m"
                                                    {
#line 661 "globals.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_53_53, libs__globals__V_95_95, libs__globals__V_96_96);
                                                    }
#line 4902 "libs.globals.c"
                                                    libs__globals__succeeded = (libs__globals__V_53_53 == (MR_Integer) 0);
#line 661 "globals.m"
                                                    libs__globals__succeeded = !(libs__globals__succeeded);
#line 661 "globals.m"
                                                    if (libs__globals__succeeded)
#line 661 "globals.m"
                                                      *libs__globals__HeadVar__1_1 = libs__globals__V_53_53;
#line 661 "globals.m"
                                                    else
#line 661 "globals.m"
                                                      {
#line 661 "globals.m"
                                                        MR_Word libs__globals__V_54_54;

#line 661 "globals.m"
                                                        {
#line 661 "globals.m"
                                                          libs__globals____Compare____reuse_strategy_0_0(&libs__globals__V_54_54, libs__globals__V_16_16, libs__globals__V_35_35);
                                                        }
#line 4922 "libs.globals.c"
                                                        libs__globals__succeeded = (libs__globals__V_54_54 == (MR_Integer) 0);
#line 661 "globals.m"
                                                        libs__globals__succeeded = !(libs__globals__succeeded);
#line 661 "globals.m"
                                                        if (libs__globals__succeeded)
#line 661 "globals.m"
                                                          *libs__globals__HeadVar__1_1 = libs__globals__V_54_54;
#line 661 "globals.m"
                                                        else
#line 661 "globals.m"
                                                          {
#line 661 "globals.m"
                                                            MR_Word libs__globals__V_55_55;

#line 661 "globals.m"
                                                            {
#line 661 "globals.m"
                                                              mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[4], &libs__globals__V_55_55, ((MR_Box) (libs__globals__V_17_17)), ((MR_Box) (libs__globals__V_36_36)));
                                                            }
#line 4942 "libs.globals.c"
                                                            libs__globals__succeeded = (libs__globals__V_55_55 == (MR_Integer) 0);
#line 661 "globals.m"
                                                            libs__globals__succeeded = !(libs__globals__succeeded);
#line 661 "globals.m"
                                                            if (libs__globals__succeeded)
#line 661 "globals.m"
                                                              *libs__globals__HeadVar__1_1 = libs__globals__V_55_55;
#line 661 "globals.m"
                                                            else
#line 661 "globals.m"
                                                              {
#line 661 "globals.m"
                                                                MR_Word libs__globals__V_56_56;
#line 661 "globals.m"
                                                                MR_Integer libs__globals__V_97_97 = (MR_Integer) libs__globals__V_18_18;
#line 661 "globals.m"
                                                                MR_Integer libs__globals__V_98_98 = (MR_Integer) libs__globals__V_37_37;

#line 661 "globals.m"
                                                                {
#line 661 "globals.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_56_56, libs__globals__V_97_97, libs__globals__V_98_98);
                                                                }
#line 4966 "libs.globals.c"
                                                                libs__globals__succeeded = (libs__globals__V_56_56 == (MR_Integer) 0);
#line 661 "globals.m"
                                                                libs__globals__succeeded = !(libs__globals__succeeded);
#line 661 "globals.m"
                                                                if (libs__globals__succeeded)
#line 661 "globals.m"
                                                                  *libs__globals__HeadVar__1_1 = libs__globals__V_56_56;
#line 661 "globals.m"
                                                                else
#line 661 "globals.m"
                                                                  {
#line 661 "globals.m"
                                                                    MR_Word libs__globals__V_57_57;
#line 661 "globals.m"
                                                                    MR_Integer libs__globals__V_99_99 = (MR_Integer) libs__globals__V_19_19;
#line 661 "globals.m"
                                                                    MR_Integer libs__globals__V_100_100 = (MR_Integer) libs__globals__V_38_38;

#line 661 "globals.m"
                                                                    {
#line 661 "globals.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_57_57, libs__globals__V_99_99, libs__globals__V_100_100);
                                                                    }
#line 4990 "libs.globals.c"
                                                                    libs__globals__succeeded = (libs__globals__V_57_57 == (MR_Integer) 0);
#line 661 "globals.m"
                                                                    libs__globals__succeeded = !(libs__globals__succeeded);
#line 661 "globals.m"
                                                                    if (libs__globals__succeeded)
#line 661 "globals.m"
                                                                      *libs__globals__HeadVar__1_1 = libs__globals__V_57_57;
#line 661 "globals.m"
                                                                    else
#line 661 "globals.m"
                                                                      {
#line 661 "globals.m"
                                                                        MR_Word libs__globals__V_58_58;
#line 661 "globals.m"
                                                                        MR_Integer libs__globals__V_101_101 = (MR_Integer) libs__globals__V_20_20;
#line 661 "globals.m"
                                                                        MR_Integer libs__globals__V_102_102 = (MR_Integer) libs__globals__V_39_39;

#line 661 "globals.m"
                                                                        {
#line 661 "globals.m"
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_58_58, libs__globals__V_101_101, libs__globals__V_102_102);
                                                                        }
#line 5014 "libs.globals.c"
                                                                        libs__globals__succeeded = (libs__globals__V_58_58 == (MR_Integer) 0);
#line 661 "globals.m"
                                                                        libs__globals__succeeded = !(libs__globals__succeeded);
#line 661 "globals.m"
                                                                        if (libs__globals__succeeded)
#line 661 "globals.m"
                                                                          *libs__globals__HeadVar__1_1 = libs__globals__V_58_58;
#line 661 "globals.m"
                                                                        else
#line 661 "globals.m"
                                                                          {
#line 661 "globals.m"
                                                                            MR_Word libs__globals__V_59_59;

#line 661 "globals.m"
                                                                            {
#line 661 "globals.m"
                                                                              libs__globals____Compare____file_install_cmd_0_0(&libs__globals__V_59_59, libs__globals__V_21_21, libs__globals__V_40_40);
                                                                            }
#line 5034 "libs.globals.c"
                                                                            libs__globals__succeeded = (libs__globals__V_59_59 == (MR_Integer) 0);
#line 661 "globals.m"
                                                                            libs__globals__succeeded = !(libs__globals__succeeded);
#line 661 "globals.m"
                                                                            if (libs__globals__succeeded)
#line 661 "globals.m"
                                                                              *libs__globals__HeadVar__1_1 = libs__globals__V_59_59;
#line 661 "globals.m"
                                                                            else
#line 661 "globals.m"
                                                                              {
#line 661 "globals.m"
                                                                                {
#line 661 "globals.m"
                                                                                  mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_2[1], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__V_22_22)), ((MR_Box) (libs__globals__V_41_41)));
#line 661 "globals.m"
                                                                                  return;
                                                                                }
#line 661 "globals.m"
                                                                              }
#line 661 "globals.m"
                                                                          }
#line 661 "globals.m"
                                                                      }
#line 661 "globals.m"
                                                                  }
#line 661 "globals.m"
                                                              }
#line 661 "globals.m"
                                                          }
#line 661 "globals.m"
                                                      }
#line 661 "globals.m"
                                                  }
#line 661 "globals.m"
                                              }
#line 661 "globals.m"
                                          }
#line 661 "globals.m"
                                      }
#line 661 "globals.m"
                                  }
#line 661 "globals.m"
                              }
#line 661 "globals.m"
                          }
#line 661 "globals.m"
                      }
#line 661 "globals.m"
                  }
#line 661 "globals.m"
              }
#line 661 "globals.m"
          }
#line 661 "globals.m"
      }
#line 661 "globals.m"
  }
#line 661 "globals.m"
}

#line 661 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____globals_0_0(
#line 661 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 661 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 661 "globals.m"
{
#line 661 "globals.m"
  {
#line 661 "globals.m"
    MR_bool libs__globals__succeeded;
#line 661 "globals.m"
    MR_Integer libs__globals__CastX_41 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 661 "globals.m"
    MR_Integer libs__globals__CastY_42 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 661 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_41 == libs__globals__CastY_42);
#line 661 "globals.m"
    if (libs__globals__succeeded)
#line 661 "globals.m"
      libs__globals__succeeded = MR_TRUE;
#line 661 "globals.m"
    else
#line 661 "globals.m"
      {
#line 661 "globals.m"
        MR_Word libs__globals__TypeInfo_45_45;
#line 661 "globals.m"
        MR_Word libs__globals__TypeInfo_46_46;
#line 661 "globals.m"
        MR_Word libs__globals__TypeInfo_47_47;
#line 661 "globals.m"
        MR_Word libs__globals__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 661 "globals.m"
        MR_Word libs__globals__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 661 "globals.m"
        MR_Word libs__globals__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 661 "globals.m"
        MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 661 "globals.m"
        MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 661 "globals.m"
        MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 661 "globals.m"
        MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 661 "globals.m"
        MR_Word libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 2)));
#line 661 "globals.m"
        MR_Word libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 661 "globals.m"
        MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 661 "globals.m"
        MR_Word libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 4)));
#line 661 "globals.m"
        MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 5)));
#line 661 "globals.m"
        MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 6)));
#line 661 "globals.m"
        MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 7)));
#line 661 "globals.m"
        MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 661 "globals.m"
        MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 661 "globals.m"
        MR_Word libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 661 "globals.m"
        MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 9)));
#line 661 "globals.m"
        MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 10)));
#line 661 "globals.m"
        MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 661 "globals.m"
        MR_Word libs__globals__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 661 "globals.m"
        MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 661 "globals.m"
        MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 661 "globals.m"
        MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 661 "globals.m"
        MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 661 "globals.m"
        MR_Word libs__globals__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 661 "globals.m"
        MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)));
#line 661 "globals.m"
        MR_Word libs__globals__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 661 "globals.m"
        MR_Word libs__globals__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 661 "globals.m"
        MR_Word libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 4)));
#line 661 "globals.m"
        MR_Word libs__globals__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 5)));
#line 661 "globals.m"
        MR_Word libs__globals__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 6)));
#line 661 "globals.m"
        MR_Word libs__globals__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 7)));
#line 661 "globals.m"
        MR_Word libs__globals__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 661 "globals.m"
        MR_Word libs__globals__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 661 "globals.m"
        MR_Word libs__globals__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 661 "globals.m"
        MR_Word libs__globals__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 9)));
#line 661 "globals.m"
        MR_Word libs__globals__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 10)));

#line 5207 "libs.globals.c"
        {
#line 5209 "libs.globals.c"
          libs__globals__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__globals_scalar_common_2[0], ((MR_Box) (libs__globals__V_3_3)), ((MR_Box) (libs__globals__V_22_22)));
        }
#line 661 "globals.m"
        if (libs__globals__succeeded)
#line 661 "globals.m"
          {
#line 5216 "libs.globals.c"
            libs__globals__succeeded = (libs__globals__V_4_4 == libs__globals__V_23_23);
#line 661 "globals.m"
            if (libs__globals__succeeded)
#line 661 "globals.m"
              {
#line 5222 "libs.globals.c"
                libs__globals__succeeded = (libs__globals__V_5_5 == libs__globals__V_24_24);
#line 661 "globals.m"
                if (libs__globals__succeeded)
#line 661 "globals.m"
                  {
#line 5228 "libs.globals.c"
                    libs__globals__succeeded = (libs__globals__V_6_6 == libs__globals__V_25_25);
#line 661 "globals.m"
                    if (libs__globals__succeeded)
#line 661 "globals.m"
                      {
#line 5234 "libs.globals.c"
                        libs__globals__succeeded = (libs__globals__V_7_7 == libs__globals__V_26_26);
#line 661 "globals.m"
                        if (libs__globals__succeeded)
#line 661 "globals.m"
                          {
#line 5240 "libs.globals.c"
                            libs__globals__succeeded = (libs__globals__V_8_8 == libs__globals__V_27_27);
#line 661 "globals.m"
                            if (libs__globals__succeeded)
#line 661 "globals.m"
                              {
#line 5246 "libs.globals.c"
                                {
#line 5248 "libs.globals.c"
                                  libs__globals__succeeded = libs__trace_params____Unify____trace_level_0_0(libs__globals__V_9_9, libs__globals__V_28_28);
                                }
#line 661 "globals.m"
                                if (libs__globals__succeeded)
#line 661 "globals.m"
                                  {
#line 5255 "libs.globals.c"
                                    libs__globals__TypeInfo_45_45 = (MR_Word) &libs__globals_scalar_common_1[3];
#line 5257 "libs.globals.c"
                                    {
#line 5259 "libs.globals.c"
                                      libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_45_45, ((MR_Box) (libs__globals__V_10_10)), ((MR_Box) (libs__globals__V_29_29)));
                                    }
#line 661 "globals.m"
                                    if (libs__globals__succeeded)
#line 661 "globals.m"
                                      {
#line 5266 "libs.globals.c"
                                        libs__globals__succeeded = (libs__globals__V_11_11 == libs__globals__V_30_30);
#line 661 "globals.m"
                                        if (libs__globals__succeeded)
#line 661 "globals.m"
                                          {
#line 5272 "libs.globals.c"
                                            libs__globals__succeeded = (libs__globals__V_12_12 == libs__globals__V_31_31);
#line 661 "globals.m"
                                            if (libs__globals__succeeded)
#line 661 "globals.m"
                                              {
#line 5278 "libs.globals.c"
                                                {
#line 5280 "libs.globals.c"
                                                  libs__globals__succeeded = libs__globals____Unify____c_compiler_type_0_0(libs__globals__V_13_13, libs__globals__V_32_32);
                                                }
#line 661 "globals.m"
                                                if (libs__globals__succeeded)
#line 661 "globals.m"
                                                  {
#line 5287 "libs.globals.c"
                                                    libs__globals__succeeded = (libs__globals__V_14_14 == libs__globals__V_33_33);
#line 661 "globals.m"
                                                    if (libs__globals__succeeded)
#line 661 "globals.m"
                                                      {
#line 5293 "libs.globals.c"
                                                        {
#line 5295 "libs.globals.c"
                                                          libs__globals__succeeded = libs__globals____Unify____reuse_strategy_0_0(libs__globals__V_15_15, libs__globals__V_34_34);
                                                        }
#line 661 "globals.m"
                                                        if (libs__globals__succeeded)
#line 661 "globals.m"
                                                          {
#line 5302 "libs.globals.c"
                                                            libs__globals__TypeInfo_46_46 = (MR_Word) &libs__globals_scalar_common_1[4];
#line 5304 "libs.globals.c"
                                                            {
#line 5306 "libs.globals.c"
                                                              libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_46_46, ((MR_Box) (libs__globals__V_16_16)), ((MR_Box) (libs__globals__V_35_35)));
                                                            }
#line 661 "globals.m"
                                                            if (libs__globals__succeeded)
#line 661 "globals.m"
                                                              {
#line 5313 "libs.globals.c"
                                                                libs__globals__succeeded = (libs__globals__V_17_17 == libs__globals__V_36_36);
#line 661 "globals.m"
                                                                if (libs__globals__succeeded)
#line 661 "globals.m"
                                                                  {
#line 5319 "libs.globals.c"
                                                                    libs__globals__succeeded = (libs__globals__V_18_18 == libs__globals__V_37_37);
#line 661 "globals.m"
                                                                    if (libs__globals__succeeded)
#line 661 "globals.m"
                                                                      {
#line 5325 "libs.globals.c"
                                                                        libs__globals__succeeded = (libs__globals__V_19_19 == libs__globals__V_38_38);
#line 661 "globals.m"
                                                                        if (libs__globals__succeeded)
#line 661 "globals.m"
                                                                          {
#line 5331 "libs.globals.c"
                                                                            {
#line 5333 "libs.globals.c"
                                                                              libs__globals__succeeded = libs__globals____Unify____file_install_cmd_0_0(libs__globals__V_20_20, libs__globals__V_39_39);
                                                                            }
#line 661 "globals.m"
                                                                            if (libs__globals__succeeded)
#line 661 "globals.m"
                                                                              {
#line 5340 "libs.globals.c"
                                                                                libs__globals__TypeInfo_47_47 = (MR_Word) &libs__globals_scalar_common_2[1];
#line 5342 "libs.globals.c"
                                                                                {
#line 5344 "libs.globals.c"
                                                                                  return libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_47_47, ((MR_Box) (libs__globals__V_21_21)), ((MR_Box) (libs__globals__V_40_40)));
                                                                                }
#line 661 "globals.m"
                                                                              }
#line 661 "globals.m"
                                                                          }
#line 661 "globals.m"
                                                                      }
#line 661 "globals.m"
                                                                  }
#line 661 "globals.m"
                                                              }
#line 661 "globals.m"
                                                          }
#line 661 "globals.m"
                                                      }
#line 661 "globals.m"
                                                  }
#line 661 "globals.m"
                                              }
#line 661 "globals.m"
                                          }
#line 661 "globals.m"
                                      }
#line 661 "globals.m"
                                  }
#line 661 "globals.m"
                              }
#line 661 "globals.m"
                          }
#line 661 "globals.m"
                      }
#line 661 "globals.m"
                  }
#line 661 "globals.m"
              }
#line 661 "globals.m"
          }
#line 661 "globals.m"
      }
#line 661 "globals.m"
    return libs__globals__succeeded;
#line 661 "globals.m"
  }
#line 661 "globals.m"
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
#line 5433 "libs.globals.c"
  {
#line 5435 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 5438 "libs.globals.c"
    return libs__globals__succeeded;
#line 5440 "libs.globals.c"
  }
#line 79 "globals.m"
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
#line 5486 "libs.globals.c"
  {
#line 5488 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 5491 "libs.globals.c"
    return libs__globals__succeeded;
#line 5493 "libs.globals.c"
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
#line 5522 "libs.globals.c"
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
#line 5534 "libs.globals.c"
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
#line 5547 "libs.globals.c"
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
#line 5565 "libs.globals.c"
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
#line 5653 "libs.globals.c"
            libs__globals__succeeded = (strcmp(libs__globals__V_3_3, libs__globals__V_5_5) == 0);
#line 196 "globals.m"
            if (libs__globals__succeeded)
#line 5657 "libs.globals.c"
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

#line 164 "globals.m"
void MR_CALL 
libs__globals____Compare____env_type_0_0(
#line 164 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 164 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 164 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 164 "globals.m"
{
#line 164 "globals.m"
  {
#line 164 "globals.m"
    MR_bool libs__globals__succeeded;
#line 164 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 164 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 164 "globals.m"
    {
#line 164 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 164 "globals.m"
      return;
    }
#line 164 "globals.m"
  }
#line 164 "globals.m"
}

#line 164 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____env_type_0_0(
#line 164 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 164 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 164 "globals.m"
{
#line 5711 "libs.globals.c"
  {
#line 5713 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 5716 "libs.globals.c"
    return libs__globals__succeeded;
#line 5718 "libs.globals.c"
  }
#line 164 "globals.m"
}

#line 139 "globals.m"
void MR_CALL 
libs__globals____Compare____csharp_compiler_type_0_0(
#line 139 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 139 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 139 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 139 "globals.m"
{
#line 139 "globals.m"
  {
#line 139 "globals.m"
    MR_bool libs__globals__succeeded;
#line 139 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 139 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 139 "globals.m"
    {
#line 139 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 139 "globals.m"
      return;
    }
#line 139 "globals.m"
  }
#line 139 "globals.m"
}

#line 139 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____csharp_compiler_type_0_0(
#line 139 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 139 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 139 "globals.m"
{
#line 5764 "libs.globals.c"
  {
#line 5766 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 5769 "libs.globals.c"
    return libs__globals__succeeded;
#line 5771 "libs.globals.c"
  }
#line 139 "globals.m"
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
#line 5817 "libs.globals.c"
  {
#line 5819 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 5822 "libs.globals.c"
    return libs__globals__succeeded;
#line 5824 "libs.globals.c"
  }
#line 40 "globals.m"
}

#line 145 "globals.m"
void MR_CALL 
libs__globals____Compare____clang_version_0_0(
#line 145 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 145 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 145 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 145 "globals.m"
{
#line 145 "globals.m"
  {
#line 145 "globals.m"
    MR_bool libs__globals__succeeded;
#line 145 "globals.m"
    MR_Integer libs__globals__CastX_12 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 145 "globals.m"
    MR_Integer libs__globals__CastY_13 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 145 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_12 == libs__globals__CastY_13);
#line 145 "globals.m"
    if (libs__globals__succeeded)
#line 5853 "libs.globals.c"
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 145 "globals.m"
    else
#line 145 "globals.m"
      {
#line 145 "globals.m"
        MR_Integer libs__globals__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 145 "globals.m"
        MR_Integer libs__globals__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 145 "globals.m"
        MR_Integer libs__globals__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)));
#line 145 "globals.m"
        MR_Integer libs__globals__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 0)));
#line 145 "globals.m"
        MR_Integer libs__globals__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)));
#line 145 "globals.m"
        MR_Integer libs__globals__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 2)));
#line 145 "globals.m"
        MR_Word libs__globals__V_10_10;

#line 145 "globals.m"
        {
#line 145 "globals.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_10_10, libs__globals__V_4_4, libs__globals__V_7_7);
        }
#line 5879 "libs.globals.c"
        libs__globals__succeeded = (libs__globals__V_10_10 == (MR_Integer) 0);
#line 145 "globals.m"
        libs__globals__succeeded = !(libs__globals__succeeded);
#line 145 "globals.m"
        if (libs__globals__succeeded)
#line 145 "globals.m"
          *libs__globals__HeadVar__1_1 = libs__globals__V_10_10;
#line 145 "globals.m"
        else
#line 145 "globals.m"
          {
#line 145 "globals.m"
            MR_Word libs__globals__V_11_11;

#line 145 "globals.m"
            {
#line 145 "globals.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_11_11, libs__globals__V_5_5, libs__globals__V_8_8);
            }
#line 5899 "libs.globals.c"
            libs__globals__succeeded = (libs__globals__V_11_11 == (MR_Integer) 0);
#line 145 "globals.m"
            libs__globals__succeeded = !(libs__globals__succeeded);
#line 145 "globals.m"
            if (libs__globals__succeeded)
#line 145 "globals.m"
              *libs__globals__HeadVar__1_1 = libs__globals__V_11_11;
#line 145 "globals.m"
            else
#line 145 "globals.m"
              {
#line 145 "globals.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__V_6_6, libs__globals__V_9_9);
#line 145 "globals.m"
                return;
              }
#line 145 "globals.m"
          }
#line 145 "globals.m"
      }
#line 145 "globals.m"
  }
#line 145 "globals.m"
}

#line 145 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____clang_version_0_0(
#line 145 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 145 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 145 "globals.m"
{
#line 145 "globals.m"
  {
#line 145 "globals.m"
    MR_bool libs__globals__succeeded;
#line 145 "globals.m"
    MR_Integer libs__globals__CastX_9 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 145 "globals.m"
    MR_Integer libs__globals__CastY_10 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 145 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_9 == libs__globals__CastY_10);
#line 145 "globals.m"
    if (libs__globals__succeeded)
#line 145 "globals.m"
      libs__globals__succeeded = MR_TRUE;
#line 145 "globals.m"
    else
#line 145 "globals.m"
      {
#line 145 "globals.m"
        MR_Integer libs__globals__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 145 "globals.m"
        MR_Integer libs__globals__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)));
#line 145 "globals.m"
        MR_Integer libs__globals__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 2)));
#line 145 "globals.m"
        MR_Integer libs__globals__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 145 "globals.m"
        MR_Integer libs__globals__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 145 "globals.m"
        MR_Integer libs__globals__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)));

#line 5966 "libs.globals.c"
        libs__globals__succeeded = (libs__globals__V_3_3 == libs__globals__V_6_6);
#line 145 "globals.m"
        if (libs__globals__succeeded)
#line 145 "globals.m"
          {
#line 5972 "libs.globals.c"
            libs__globals__succeeded = (libs__globals__V_4_4 == libs__globals__V_7_7);
#line 145 "globals.m"
            if (libs__globals__succeeded)
#line 5976 "libs.globals.c"
              libs__globals__succeeded = (libs__globals__V_5_5 == libs__globals__V_8_8);
#line 145 "globals.m"
          }
#line 145 "globals.m"
      }
#line 145 "globals.m"
    return libs__globals__succeeded;
#line 145 "globals.m"
  }
#line 145 "globals.m"
}

#line 121 "globals.m"
void MR_CALL 
libs__globals____Compare____c_compiler_type_0_0(
#line 121 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 121 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 121 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 121 "globals.m"
{
#line 121 "globals.m"
  {
#line 121 "globals.m"
    MR_bool libs__globals__succeeded;
#line 121 "globals.m"
    MR_Integer libs__globals__CastX_46 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 121 "globals.m"
    MR_Integer libs__globals__CastY_47 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 121 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_46 == libs__globals__CastY_47);
#line 121 "globals.m"
    if (libs__globals__succeeded)
#line 6013 "libs.globals.c"
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 121 "globals.m"
    else
#line 121 "globals.m"
#line 121 "globals.m"
      switch (MR_tag((MR_Word) libs__globals__HeadVar__2_2)) {
#line 121 "globals.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 121 "globals.m"
        case (MR_Integer) 0:
#line 121 "globals.m"
#line 121 "globals.m"
          switch (MR_tag((MR_Word) libs__globals__HeadVar__3_3)) {
#line 121 "globals.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 121 "globals.m"
            case (MR_Integer) 0:
#line 121 "globals.m"
              *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 121 "globals.m"
              break;
#line 121 "globals.m"
            case (MR_Integer) 1:
#line 6037 "libs.globals.c"
              *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 121 "globals.m"
              break;
#line 121 "globals.m"
            case (MR_Integer) 2:
#line 6043 "libs.globals.c"
              *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 121 "globals.m"
              break;
#line 121 "globals.m"
            case (MR_Integer) 3:
#line 6049 "libs.globals.c"
              *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 121 "globals.m"
              break;
#line 121 "globals.m"
          }
#line 121 "globals.m"
          break;
#line 121 "globals.m"
        case (MR_Integer) 1:
#line 121 "globals.m"
          {
#line 121 "globals.m"
            MR_Word libs__globals__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 2)));
#line 121 "globals.m"
            MR_Word libs__globals__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 121 "globals.m"
            MR_Word libs__globals__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));

#line 121 "globals.m"
#line 121 "globals.m"
            switch (MR_tag((MR_Word) libs__globals__HeadVar__3_3)) {
#line 121 "globals.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 121 "globals.m"
              case (MR_Integer) 0:
#line 6075 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 121 "globals.m"
                break;
#line 121 "globals.m"
              case (MR_Integer) 1:
#line 121 "globals.m"
                {
#line 121 "globals.m"
                  MR_Word libs__globals__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 0)));
#line 121 "globals.m"
                  MR_Word libs__globals__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 1)));
#line 121 "globals.m"
                  MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 2)));
#line 121 "globals.m"
                  MR_Word libs__globals__V_10_10;

#line 121 "globals.m"
                  {
#line 121 "globals.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[1], &libs__globals__V_10_10, ((MR_Box) (libs__globals__V_57_57)), ((MR_Box) (libs__globals__V_7_7)));
                  }
#line 6097 "libs.globals.c"
                  libs__globals__succeeded = (libs__globals__V_10_10 == (MR_Integer) 0);
#line 121 "globals.m"
                  libs__globals__succeeded = !(libs__globals__succeeded);
#line 121 "globals.m"
                  if (libs__globals__succeeded)
#line 121 "globals.m"
                    *libs__globals__HeadVar__1_1 = libs__globals__V_10_10;
#line 121 "globals.m"
                  else
#line 121 "globals.m"
                    {
#line 121 "globals.m"
                      MR_Word libs__globals__V_11_11;

#line 121 "globals.m"
                      {
#line 121 "globals.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[1], &libs__globals__V_11_11, ((MR_Box) (libs__globals__V_56_56)), ((MR_Box) (libs__globals__V_8_8)));
                      }
#line 6117 "libs.globals.c"
                      libs__globals__succeeded = (libs__globals__V_11_11 == (MR_Integer) 0);
#line 121 "globals.m"
                      libs__globals__succeeded = !(libs__globals__succeeded);
#line 121 "globals.m"
                      if (libs__globals__succeeded)
#line 121 "globals.m"
                        *libs__globals__HeadVar__1_1 = libs__globals__V_11_11;
#line 121 "globals.m"
                      else
#line 121 "globals.m"
                        {
#line 121 "globals.m"
                          {
#line 121 "globals.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[1], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__V_55_55)), ((MR_Box) (libs__globals__V_9_9)));
#line 121 "globals.m"
                            return;
                          }
#line 121 "globals.m"
                        }
#line 121 "globals.m"
                    }
#line 121 "globals.m"
                }
#line 121 "globals.m"
                break;
#line 121 "globals.m"
              case (MR_Integer) 2:
#line 6146 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 121 "globals.m"
                break;
#line 121 "globals.m"
              case (MR_Integer) 3:
#line 6152 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 121 "globals.m"
                break;
#line 121 "globals.m"
            }
#line 121 "globals.m"
          }
#line 121 "globals.m"
          break;
#line 121 "globals.m"
        case (MR_Integer) 2:
#line 121 "globals.m"
          {
#line 121 "globals.m"
            MR_Word libs__globals__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__globals__HeadVar__2_2, (MR_Integer) 0)));

#line 121 "globals.m"
#line 121 "globals.m"
            switch (MR_tag((MR_Word) libs__globals__HeadVar__3_3)) {
#line 121 "globals.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 121 "globals.m"
              case (MR_Integer) 0:
#line 6176 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 121 "globals.m"
                break;
#line 121 "globals.m"
              case (MR_Integer) 1:
#line 6182 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 121 "globals.m"
                break;
#line 121 "globals.m"
              case (MR_Integer) 2:
#line 121 "globals.m"
                {
#line 121 "globals.m"
                  MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__globals__HeadVar__3_3, (MR_Integer) 0)));

#line 121 "globals.m"
                  {
#line 121 "globals.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[2], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__V_54_54)), ((MR_Box) (libs__globals__V_28_28)));
#line 121 "globals.m"
                    return;
                  }
#line 121 "globals.m"
                }
#line 121 "globals.m"
                break;
#line 121 "globals.m"
              case (MR_Integer) 3:
#line 6206 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 121 "globals.m"
                break;
#line 121 "globals.m"
            }
#line 121 "globals.m"
          }
#line 121 "globals.m"
          break;
#line 121 "globals.m"
        case (MR_Integer) 3:
#line 121 "globals.m"
          {
#line 121 "globals.m"
            MR_Word libs__globals__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__HeadVar__2_2, (MR_Integer) 0)));

#line 121 "globals.m"
#line 121 "globals.m"
            switch (MR_tag((MR_Word) libs__globals__HeadVar__3_3)) {
#line 121 "globals.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 121 "globals.m"
              case (MR_Integer) 0:
#line 6230 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 121 "globals.m"
                break;
#line 121 "globals.m"
              case (MR_Integer) 1:
#line 6236 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 121 "globals.m"
                break;
#line 121 "globals.m"
              case (MR_Integer) 2:
#line 6242 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 121 "globals.m"
                break;
#line 121 "globals.m"
              case (MR_Integer) 3:
#line 121 "globals.m"
                {
#line 121 "globals.m"
                  MR_Word libs__globals__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__HeadVar__3_3, (MR_Integer) 0)));

#line 121 "globals.m"
                  {
#line 121 "globals.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[1], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__V_53_53)), ((MR_Box) (libs__globals__V_39_39)));
#line 121 "globals.m"
                    return;
                  }
#line 121 "globals.m"
                }
#line 121 "globals.m"
                break;
#line 121 "globals.m"
            }
#line 121 "globals.m"
          }
#line 121 "globals.m"
          break;
#line 121 "globals.m"
      }
#line 121 "globals.m"
  }
#line 121 "globals.m"
}

#line 121 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____c_compiler_type_0_0(
#line 121 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 121 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 121 "globals.m"
{
#line 121 "globals.m"
  {
#line 121 "globals.m"
    MR_bool libs__globals__succeeded;
#line 121 "globals.m"
    MR_Integer libs__globals__CastX_15 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 121 "globals.m"
    MR_Integer libs__globals__CastY_16 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 121 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_15 == libs__globals__CastY_16);
#line 121 "globals.m"
    if (libs__globals__succeeded)
#line 121 "globals.m"
      libs__globals__succeeded = MR_TRUE;
#line 121 "globals.m"
    else
#line 121 "globals.m"
#line 121 "globals.m"
      switch (MR_tag((MR_Word) libs__globals__HeadVar__1_1)) {
#line 121 "globals.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 121 "globals.m"
        case (MR_Integer) 0:
#line 121 "globals.m"
          {
#line 121 "globals.m"
            MR_Integer libs__globals__CastX_13 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 121 "globals.m"
            MR_Integer libs__globals__CastY_14 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 121 "globals.m"
            libs__globals__succeeded = (libs__globals__CastY_14 == libs__globals__CastX_13);
#line 121 "globals.m"
          }
#line 121 "globals.m"
          break;
#line 121 "globals.m"
        case (MR_Integer) 1:
#line 121 "globals.m"
          {
#line 121 "globals.m"
            MR_Word libs__globals__TypeInfo_19_19;
#line 121 "globals.m"
            MR_Word libs__globals__TypeInfo_20_20;
#line 121 "globals.m"
            MR_Word libs__globals__TypeInfo_21_21;
#line 121 "globals.m"
            MR_Word libs__globals__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 121 "globals.m"
            MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 1)));
#line 121 "globals.m"
            MR_Word libs__globals__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 2)));
#line 121 "globals.m"
            MR_Word libs__globals__V_6_6;
#line 121 "globals.m"
            MR_Word libs__globals__V_7_7;
#line 121 "globals.m"
            MR_Word libs__globals__V_8_8;

#line 121 "globals.m"
            libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 121 "globals.m"
            if (libs__globals__succeeded)
#line 121 "globals.m"
              {
#line 121 "globals.m"
                libs__globals__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 121 "globals.m"
                libs__globals__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 121 "globals.m"
                libs__globals__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 2)));
#line 6358 "libs.globals.c"
                libs__globals__TypeInfo_19_19 = (MR_Word) &libs__globals_scalar_common_1[1];
#line 6360 "libs.globals.c"
                {
#line 6362 "libs.globals.c"
                  libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_19_19, ((MR_Box) (libs__globals__V_3_3)), ((MR_Box) (libs__globals__V_6_6)));
                }
#line 121 "globals.m"
                if (libs__globals__succeeded)
#line 121 "globals.m"
                  {
#line 6369 "libs.globals.c"
                    libs__globals__TypeInfo_20_20 = (MR_Word) &libs__globals_scalar_common_1[1];
#line 6371 "libs.globals.c"
                    {
#line 6373 "libs.globals.c"
                      libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_20_20, ((MR_Box) (libs__globals__V_4_4)), ((MR_Box) (libs__globals__V_7_7)));
                    }
#line 121 "globals.m"
                    if (libs__globals__succeeded)
#line 121 "globals.m"
                      {
#line 6380 "libs.globals.c"
                        libs__globals__TypeInfo_21_21 = (MR_Word) &libs__globals_scalar_common_1[1];
#line 6382 "libs.globals.c"
                        {
#line 6384 "libs.globals.c"
                          return libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_21_21, ((MR_Box) (libs__globals__V_5_5)), ((MR_Box) (libs__globals__V_8_8)));
                        }
#line 121 "globals.m"
                      }
#line 121 "globals.m"
                  }
#line 121 "globals.m"
              }
#line 121 "globals.m"
          }
#line 121 "globals.m"
          break;
#line 121 "globals.m"
        case (MR_Integer) 2:
#line 121 "globals.m"
          {
#line 121 "globals.m"
            MR_Word libs__globals__TypeInfo_18_18;
#line 121 "globals.m"
            MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 121 "globals.m"
            MR_Word libs__globals__V_10_10;

#line 121 "globals.m"
            libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 121 "globals.m"
            if (libs__globals__succeeded)
#line 121 "globals.m"
              {
#line 121 "globals.m"
                libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 6416 "libs.globals.c"
                libs__globals__TypeInfo_18_18 = (MR_Word) &libs__globals_scalar_common_1[2];
#line 6418 "libs.globals.c"
                {
#line 6420 "libs.globals.c"
                  return libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_18_18, ((MR_Box) (libs__globals__V_9_9)), ((MR_Box) (libs__globals__V_10_10)));
                }
#line 121 "globals.m"
              }
#line 121 "globals.m"
          }
#line 121 "globals.m"
          break;
#line 121 "globals.m"
        case (MR_Integer) 3:
#line 121 "globals.m"
          {
#line 121 "globals.m"
            MR_Word libs__globals__TypeInfo_17_17;
#line 121 "globals.m"
            MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 121 "globals.m"
            MR_Word libs__globals__V_12_12;

#line 121 "globals.m"
            libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 121 "globals.m"
            if (libs__globals__succeeded)
#line 121 "globals.m"
              {
#line 121 "globals.m"
                libs__globals__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 6448 "libs.globals.c"
                libs__globals__TypeInfo_17_17 = (MR_Word) &libs__globals_scalar_common_1[1];
#line 6450 "libs.globals.c"
                {
#line 6452 "libs.globals.c"
                  return libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_17_17, ((MR_Box) (libs__globals__V_11_11)), ((MR_Box) (libs__globals__V_12_12)));
                }
#line 121 "globals.m"
              }
#line 121 "globals.m"
          }
#line 121 "globals.m"
          break;
#line 121 "globals.m"
      }
#line 121 "globals.m"
    return libs__globals__succeeded;
#line 121 "globals.m"
  }
#line 121 "globals.m"
}

#line 945 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_maybe_source_file_map_1_p_0(
#line 945 "globals.m"
  MR_Word libs__globals__X_1)
#line 945 "globals.m"
{
#line 945 "globals.m"
  {
#line 945 "globals.m"
    MR_bool libs__globals__succeeded;

#line 945 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_set_maybe_source_file_map_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 945 "globals.m"
libs__globals__mutable_variable_maybe_source_file_map = X;

#line 6493 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 945 "globals.m"
}
#line 945 "globals.m"
  }
#line 945 "globals.m"
}

#line 945 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_maybe_source_file_map_1_p_0(
#line 945 "globals.m"
  MR_Word * libs__globals__X_1)
#line 945 "globals.m"
{
#line 945 "globals.m"
  {
#line 945 "globals.m"
    MR_bool libs__globals__succeeded;

#line 945 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_get_maybe_source_file_map_1_p_0

	MR_Word X;

		{
#line 945 "globals.m"
X = libs__globals__mutable_variable_maybe_source_file_map;

#line 6526 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
#line 945 "globals.m"
}
#line 945 "globals.m"
  }
#line 945 "globals.m"
}

#line 945 "globals.m"
static void MR_CALL 
libs__globals__unlock_maybe_source_file_map_0_p_0(void)
#line 945 "globals.m"
{
#line 945 "globals.m"
  {
#line 945 "globals.m"
    MR_bool libs__globals__succeeded;

#line 945 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_maybe_source_file_map_0_p_0


		{
#line 945 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                    "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 6560 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 945 "globals.m"
}
#line 945 "globals.m"
  }
#line 945 "globals.m"
}

#line 945 "globals.m"
static void MR_CALL 
libs__globals__lock_maybe_source_file_map_0_p_0(void)
#line 945 "globals.m"
{
#line 945 "globals.m"
  {
#line 945 "globals.m"
    MR_bool libs__globals__succeeded;

#line 945 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_maybe_source_file_map_0_p_0


		{
#line 945 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                    "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 6593 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 945 "globals.m"
}
#line 945 "globals.m"
  }
#line 945 "globals.m"
}

#line 945 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_maybe_source_file_map_0_p_0(void)
#line 945 "globals.m"
{
#line 945 "globals.m"
  {
#line 945 "globals.m"
    MR_bool libs__globals__succeeded;

#line 945 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_source_file_map_0_p_0


		{
#line 945 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_maybe_source_file_map_lock, MR_MUTEX_ATTR);
#endif

#line 6625 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 945 "globals.m"
}
#line 945 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_source_file_map_0_p_0


		{
#line 945 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                    "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 6643 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 945 "globals.m"
}
#line 945 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_source_file_map_0_p_0

	MR_Word X;

	X =  (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) ;
		{
#line 945 "globals.m"
libs__globals__mutable_variable_maybe_source_file_map = X;

#line 6660 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 945 "globals.m"
}
#line 945 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_source_file_map_0_p_0


		{
#line 945 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                    "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 6678 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 945 "globals.m"
}
#line 945 "globals.m"
  }
#line 945 "globals.m"
}

#line 945 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_maybe_source_file_map_0_p_0(void)
#line 945 "globals.m"
{
#line 945 "globals.m"
  {
#line 945 "globals.m"
    MR_bool libs__globals__succeeded;

#line 945 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_maybe_source_file_map_0_p_0


		{
#line 945 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_maybe_source_file_map_lock, MR_MUTEX_ATTR);
#endif

#line 6710 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 945 "globals.m"
}
#line 945 "globals.m"
  }
#line 945 "globals.m"
}

#line 942 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_disable_generate_item_version_numbers_1_p_0(
#line 942 "globals.m"
  MR_Word libs__globals__X_1)
#line 942 "globals.m"
{
#line 942 "globals.m"
  {
#line 942 "globals.m"
    MR_bool libs__globals__succeeded;

#line 942 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_set_disable_generate_item_version_numbers_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 942 "globals.m"
libs__globals__mutable_variable_disable_generate_item_version_numbers = X;

#line 6744 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 942 "globals.m"
}
#line 942 "globals.m"
  }
#line 942 "globals.m"
}

#line 942 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_disable_generate_item_version_numbers_1_p_0(
#line 942 "globals.m"
  MR_Word * libs__globals__X_1)
#line 942 "globals.m"
{
#line 942 "globals.m"
  {
#line 942 "globals.m"
    MR_bool libs__globals__succeeded;

#line 942 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_get_disable_generate_item_version_numbers_1_p_0

	MR_Word X;

		{
#line 942 "globals.m"
X = libs__globals__mutable_variable_disable_generate_item_version_numbers;

#line 6777 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
#line 942 "globals.m"
}
#line 942 "globals.m"
  }
#line 942 "globals.m"
}

#line 942 "globals.m"
static void MR_CALL 
libs__globals__unlock_disable_generate_item_version_numbers_0_p_0(void)
#line 942 "globals.m"
{
#line 942 "globals.m"
  {
#line 942 "globals.m"
    MR_bool libs__globals__succeeded;

#line 942 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_disable_generate_item_version_numbers_0_p_0


		{
#line 942 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                    "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 6811 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 942 "globals.m"
}
#line 942 "globals.m"
  }
#line 942 "globals.m"
}

#line 942 "globals.m"
static void MR_CALL 
libs__globals__lock_disable_generate_item_version_numbers_0_p_0(void)
#line 942 "globals.m"
{
#line 942 "globals.m"
  {
#line 942 "globals.m"
    MR_bool libs__globals__succeeded;

#line 942 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_disable_generate_item_version_numbers_0_p_0


		{
#line 942 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                    "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 6844 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 942 "globals.m"
}
#line 942 "globals.m"
  }
#line 942 "globals.m"
}

#line 942 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0(void)
#line 942 "globals.m"
{
#line 942 "globals.m"
  {
#line 942 "globals.m"
    MR_bool libs__globals__succeeded;

#line 942 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0


		{
#line 942 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock, MR_MUTEX_ATTR);
#endif

#line 6876 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 942 "globals.m"
}
#line 942 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0


		{
#line 942 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                    "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 6894 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 942 "globals.m"
}
#line 942 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 942 "globals.m"
libs__globals__mutable_variable_disable_generate_item_version_numbers = X;

#line 6911 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 942 "globals.m"
}
#line 942 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0


		{
#line 942 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                    "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 6929 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 942 "globals.m"
}
#line 942 "globals.m"
  }
#line 942 "globals.m"
}

#line 942 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_disable_generate_item_version_numbers_0_p_0(void)
#line 942 "globals.m"
{
#line 942 "globals.m"
  {
#line 942 "globals.m"
    MR_bool libs__globals__succeeded;

#line 942 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_disable_generate_item_version_numbers_0_p_0


		{
#line 942 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock, MR_MUTEX_ATTR);
#endif

#line 6961 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 942 "globals.m"
}
#line 942 "globals.m"
  }
#line 942 "globals.m"
}

#line 939 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_disable_smart_recompilation_1_p_0(
#line 939 "globals.m"
  MR_Word libs__globals__X_1)
#line 939 "globals.m"
{
#line 939 "globals.m"
  {
#line 939 "globals.m"
    MR_bool libs__globals__succeeded;

#line 939 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_set_disable_smart_recompilation_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 939 "globals.m"
libs__globals__mutable_variable_disable_smart_recompilation = X;

#line 6995 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 939 "globals.m"
}
#line 939 "globals.m"
  }
#line 939 "globals.m"
}

#line 939 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_disable_smart_recompilation_1_p_0(
#line 939 "globals.m"
  MR_Word * libs__globals__X_1)
#line 939 "globals.m"
{
#line 939 "globals.m"
  {
#line 939 "globals.m"
    MR_bool libs__globals__succeeded;

#line 939 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_get_disable_smart_recompilation_1_p_0

	MR_Word X;

		{
#line 939 "globals.m"
X = libs__globals__mutable_variable_disable_smart_recompilation;

#line 7028 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
#line 939 "globals.m"
}
#line 939 "globals.m"
  }
#line 939 "globals.m"
}

#line 939 "globals.m"
static void MR_CALL 
libs__globals__unlock_disable_smart_recompilation_0_p_0(void)
#line 939 "globals.m"
{
#line 939 "globals.m"
  {
#line 939 "globals.m"
    MR_bool libs__globals__succeeded;

#line 939 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_disable_smart_recompilation_0_p_0


		{
#line 939 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                    "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 7062 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 939 "globals.m"
}
#line 939 "globals.m"
  }
#line 939 "globals.m"
}

#line 939 "globals.m"
static void MR_CALL 
libs__globals__lock_disable_smart_recompilation_0_p_0(void)
#line 939 "globals.m"
{
#line 939 "globals.m"
  {
#line 939 "globals.m"
    MR_bool libs__globals__succeeded;

#line 939 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_disable_smart_recompilation_0_p_0


		{
#line 939 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                    "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 7095 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 939 "globals.m"
}
#line 939 "globals.m"
  }
#line 939 "globals.m"
}

#line 939 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0(void)
#line 939 "globals.m"
{
#line 939 "globals.m"
  {
#line 939 "globals.m"
    MR_bool libs__globals__succeeded;

#line 939 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0


		{
#line 939 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_disable_smart_recompilation_lock, MR_MUTEX_ATTR);
#endif

#line 7127 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 939 "globals.m"
}
#line 939 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0


		{
#line 939 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                    "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 7145 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 939 "globals.m"
}
#line 939 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 939 "globals.m"
libs__globals__mutable_variable_disable_smart_recompilation = X;

#line 7162 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 939 "globals.m"
}
#line 939 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0


		{
#line 939 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                    "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 7180 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 939 "globals.m"
}
#line 939 "globals.m"
  }
#line 939 "globals.m"
}

#line 939 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_disable_smart_recompilation_0_p_0(void)
#line 939 "globals.m"
{
#line 939 "globals.m"
  {
#line 939 "globals.m"
    MR_bool libs__globals__succeeded;

#line 939 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_disable_smart_recompilation_0_p_0


		{
#line 939 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_disable_smart_recompilation_lock, MR_MUTEX_ATTR);
#endif

#line 7212 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 939 "globals.m"
}
#line 939 "globals.m"
  }
#line 939 "globals.m"
}

#line 936 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_some_errors_were_context_limited_1_p_0(
#line 936 "globals.m"
  MR_Word libs__globals__X_1)
#line 936 "globals.m"
{
#line 936 "globals.m"
  {
#line 936 "globals.m"
    MR_bool libs__globals__succeeded;

#line 936 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_set_some_errors_were_context_limited_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 936 "globals.m"
libs__globals__mutable_variable_some_errors_were_context_limited = X;

#line 7246 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 936 "globals.m"
}
#line 936 "globals.m"
  }
#line 936 "globals.m"
}

#line 936 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_some_errors_were_context_limited_1_p_0(
#line 936 "globals.m"
  MR_Word * libs__globals__X_1)
#line 936 "globals.m"
{
#line 936 "globals.m"
  {
#line 936 "globals.m"
    MR_bool libs__globals__succeeded;

#line 936 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_get_some_errors_were_context_limited_1_p_0

	MR_Word X;

		{
#line 936 "globals.m"
X = libs__globals__mutable_variable_some_errors_were_context_limited;

#line 7279 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
#line 936 "globals.m"
}
#line 936 "globals.m"
  }
#line 936 "globals.m"
}

#line 936 "globals.m"
static void MR_CALL 
libs__globals__unlock_some_errors_were_context_limited_0_p_0(void)
#line 936 "globals.m"
{
#line 936 "globals.m"
  {
#line 936 "globals.m"
    MR_bool libs__globals__succeeded;

#line 936 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_some_errors_were_context_limited_0_p_0


		{
#line 936 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_some_errors_were_context_limited_lock,
                    "libs__globals__mutable_variable_some_errors_were_context_limited_lock");
#endif

#line 7313 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 936 "globals.m"
}
#line 936 "globals.m"
  }
#line 936 "globals.m"
}

#line 936 "globals.m"
static void MR_CALL 
libs__globals__lock_some_errors_were_context_limited_0_p_0(void)
#line 936 "globals.m"
{
#line 936 "globals.m"
  {
#line 936 "globals.m"
    MR_bool libs__globals__succeeded;

#line 936 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_some_errors_were_context_limited_0_p_0


		{
#line 936 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_some_errors_were_context_limited_lock,
                    "libs__globals__mutable_variable_some_errors_were_context_limited_lock");
#endif

#line 7346 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 936 "globals.m"
}
#line 936 "globals.m"
  }
#line 936 "globals.m"
}

#line 936 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_some_errors_were_context_limited_0_p_0(void)
#line 936 "globals.m"
{
#line 936 "globals.m"
  {
#line 936 "globals.m"
    MR_bool libs__globals__succeeded;

#line 936 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_some_errors_were_context_limited_0_p_0


		{
#line 936 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_some_errors_were_context_limited_lock, MR_MUTEX_ATTR);
#endif

#line 7378 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 936 "globals.m"
}
#line 936 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_some_errors_were_context_limited_0_p_0


		{
#line 936 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_some_errors_were_context_limited_lock,
                    "libs__globals__mutable_variable_some_errors_were_context_limited_lock");
#endif

#line 7396 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 936 "globals.m"
}
#line 936 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_some_errors_were_context_limited_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 936 "globals.m"
libs__globals__mutable_variable_some_errors_were_context_limited = X;

#line 7413 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 936 "globals.m"
}
#line 936 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_some_errors_were_context_limited_0_p_0


		{
#line 936 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_some_errors_were_context_limited_lock,
                    "libs__globals__mutable_variable_some_errors_were_context_limited_lock");
#endif

#line 7431 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 936 "globals.m"
}
#line 936 "globals.m"
  }
#line 936 "globals.m"
}

#line 936 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_some_errors_were_context_limited_0_p_0(void)
#line 936 "globals.m"
{
#line 936 "globals.m"
  {
#line 936 "globals.m"
    MR_bool libs__globals__succeeded;

#line 936 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_some_errors_were_context_limited_0_p_0


		{
#line 936 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_some_errors_were_context_limited_lock, MR_MUTEX_ATTR);
#endif

#line 7463 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 936 "globals.m"
}
#line 936 "globals.m"
  }
#line 936 "globals.m"
}

#line 930 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_extra_error_info_1_p_0(
#line 930 "globals.m"
  MR_Word libs__globals__X_1)
#line 930 "globals.m"
{
#line 930 "globals.m"
  {
#line 930 "globals.m"
    MR_bool libs__globals__succeeded;

#line 930 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_set_extra_error_info_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 930 "globals.m"
libs__globals__mutable_variable_extra_error_info = X;

#line 7497 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 930 "globals.m"
}
#line 930 "globals.m"
  }
#line 930 "globals.m"
}

#line 930 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_extra_error_info_1_p_0(
#line 930 "globals.m"
  MR_Word * libs__globals__X_1)
#line 930 "globals.m"
{
#line 930 "globals.m"
  {
#line 930 "globals.m"
    MR_bool libs__globals__succeeded;

#line 930 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_get_extra_error_info_1_p_0

	MR_Word X;

		{
#line 930 "globals.m"
X = libs__globals__mutable_variable_extra_error_info;

#line 7530 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
#line 930 "globals.m"
}
#line 930 "globals.m"
  }
#line 930 "globals.m"
}

#line 930 "globals.m"
static void MR_CALL 
libs__globals__unlock_extra_error_info_0_p_0(void)
#line 930 "globals.m"
{
#line 930 "globals.m"
  {
#line 930 "globals.m"
    MR_bool libs__globals__succeeded;

#line 930 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_extra_error_info_0_p_0


		{
#line 930 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                    "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 7564 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 930 "globals.m"
}
#line 930 "globals.m"
  }
#line 930 "globals.m"
}

#line 930 "globals.m"
static void MR_CALL 
libs__globals__lock_extra_error_info_0_p_0(void)
#line 930 "globals.m"
{
#line 930 "globals.m"
  {
#line 930 "globals.m"
    MR_bool libs__globals__succeeded;

#line 930 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_extra_error_info_0_p_0


		{
#line 930 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                    "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 7597 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 930 "globals.m"
}
#line 930 "globals.m"
  }
#line 930 "globals.m"
}

#line 930 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_extra_error_info_0_p_0(void)
#line 930 "globals.m"
{
#line 930 "globals.m"
  {
#line 930 "globals.m"
    MR_bool libs__globals__succeeded;

#line 930 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_extra_error_info_0_p_0


		{
#line 930 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_extra_error_info_lock, MR_MUTEX_ATTR);
#endif

#line 7629 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 930 "globals.m"
}
#line 930 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_extra_error_info_0_p_0


		{
#line 930 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                    "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 7647 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 930 "globals.m"
}
#line 930 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_extra_error_info_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 930 "globals.m"
libs__globals__mutable_variable_extra_error_info = X;

#line 7664 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 930 "globals.m"
}
#line 930 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_extra_error_info_0_p_0


		{
#line 930 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                    "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 7682 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 930 "globals.m"
}
#line 930 "globals.m"
  }
#line 930 "globals.m"
}

#line 930 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_extra_error_info_0_p_0(void)
#line 930 "globals.m"
{
#line 930 "globals.m"
  {
#line 930 "globals.m"
    MR_bool libs__globals__succeeded;

#line 930 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_extra_error_info_0_p_0


		{
#line 930 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_extra_error_info_lock, MR_MUTEX_ATTR);
#endif

#line 7714 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 930 "globals.m"
}
#line 930 "globals.m"
  }
#line 930 "globals.m"
}

#line 924 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_maybe_from_ground_term_threshold_1_p_0(
#line 924 "globals.m"
  MR_Word libs__globals__X_1)
#line 924 "globals.m"
{
#line 924 "globals.m"
  {
#line 924 "globals.m"
    MR_bool libs__globals__succeeded;

#line 924 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_set_maybe_from_ground_term_threshold_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 924 "globals.m"
libs__globals__mutable_variable_maybe_from_ground_term_threshold = X;

#line 7748 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 924 "globals.m"
}
#line 924 "globals.m"
  }
#line 924 "globals.m"
}

#line 924 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_maybe_from_ground_term_threshold_1_p_0(
#line 924 "globals.m"
  MR_Word * libs__globals__X_1)
#line 924 "globals.m"
{
#line 924 "globals.m"
  {
#line 924 "globals.m"
    MR_bool libs__globals__succeeded;

#line 924 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_get_maybe_from_ground_term_threshold_1_p_0

	MR_Word X;

		{
#line 924 "globals.m"
X = libs__globals__mutable_variable_maybe_from_ground_term_threshold;

#line 7781 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
#line 924 "globals.m"
}
#line 924 "globals.m"
  }
#line 924 "globals.m"
}

#line 924 "globals.m"
static void MR_CALL 
libs__globals__unlock_maybe_from_ground_term_threshold_0_p_0(void)
#line 924 "globals.m"
{
#line 924 "globals.m"
  {
#line 924 "globals.m"
    MR_bool libs__globals__succeeded;

#line 924 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_maybe_from_ground_term_threshold_0_p_0


		{
#line 924 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                    "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 7815 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 924 "globals.m"
}
#line 924 "globals.m"
  }
#line 924 "globals.m"
}

#line 924 "globals.m"
static void MR_CALL 
libs__globals__lock_maybe_from_ground_term_threshold_0_p_0(void)
#line 924 "globals.m"
{
#line 924 "globals.m"
  {
#line 924 "globals.m"
    MR_bool libs__globals__succeeded;

#line 924 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_maybe_from_ground_term_threshold_0_p_0


		{
#line 924 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                    "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 7848 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 924 "globals.m"
}
#line 924 "globals.m"
  }
#line 924 "globals.m"
}

#line 924 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0(void)
#line 924 "globals.m"
{
#line 924 "globals.m"
  {
#line 924 "globals.m"
    MR_bool libs__globals__succeeded;

#line 924 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0


		{
#line 924 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock, MR_MUTEX_ATTR);
#endif

#line 7880 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 924 "globals.m"
}
#line 924 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0


		{
#line 924 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                    "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 7898 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 924 "globals.m"
}
#line 924 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0

	MR_Word X;

	X =  (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) ;
		{
#line 924 "globals.m"
libs__globals__mutable_variable_maybe_from_ground_term_threshold = X;

#line 7915 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 924 "globals.m"
}
#line 924 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0


		{
#line 924 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                    "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 7933 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 924 "globals.m"
}
#line 924 "globals.m"
  }
#line 924 "globals.m"
}

#line 924 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_maybe_from_ground_term_threshold_0_p_0(void)
#line 924 "globals.m"
{
#line 924 "globals.m"
  {
#line 924 "globals.m"
    MR_bool libs__globals__succeeded;

#line 924 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_maybe_from_ground_term_threshold_0_p_0


		{
#line 924 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock, MR_MUTEX_ATTR);
#endif

#line 7965 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 924 "globals.m"
}
#line 924 "globals.m"
  }
#line 924 "globals.m"
}

#line 919 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_solver_auto_init_supported_1_p_0(
#line 919 "globals.m"
  MR_Word libs__globals__X_1)
#line 919 "globals.m"
{
#line 919 "globals.m"
  {
#line 919 "globals.m"
    MR_bool libs__globals__succeeded;

#line 919 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_set_solver_auto_init_supported_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 919 "globals.m"
MR_set_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_solver_auto_init_supported);

#line 7999 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 919 "globals.m"
}
#line 919 "globals.m"
  }
#line 919 "globals.m"
}

#line 919 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_solver_auto_init_supported_1_p_0(
#line 919 "globals.m"
  MR_Word * libs__globals__X_1)
#line 919 "globals.m"
{
#line 919 "globals.m"
  {
#line 919 "globals.m"
    MR_bool libs__globals__succeeded;

#line 919 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_get_solver_auto_init_supported_1_p_0

	MR_Word X;

		{
#line 919 "globals.m"
MR_get_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_solver_auto_init_supported);

#line 8032 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
#line 919 "globals.m"
}
#line 919 "globals.m"
  }
#line 919 "globals.m"
}

#line 919 "globals.m"
static void MR_CALL 
libs__globals__unlock_solver_auto_init_supported_0_p_0(void)
#line 919 "globals.m"
{
#line 919 "globals.m"
  {
#line 919 "globals.m"
    MR_bool libs__globals__succeeded;

#line 919 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_solver_auto_init_supported_0_p_0


		{
#line 919 "globals.m"

#line 8062 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 919 "globals.m"
}
#line 919 "globals.m"
  }
#line 919 "globals.m"
}

#line 919 "globals.m"
static void MR_CALL 
libs__globals__lock_solver_auto_init_supported_0_p_0(void)
#line 919 "globals.m"
{
#line 919 "globals.m"
  {
#line 919 "globals.m"
    MR_bool libs__globals__succeeded;

#line 919 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_solver_auto_init_supported_0_p_0


		{
#line 919 "globals.m"

#line 8091 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 919 "globals.m"
}
#line 919 "globals.m"
  }
#line 919 "globals.m"
}

#line 919 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0(void)
#line 919 "globals.m"
{
#line 919 "globals.m"
  {
#line 919 "globals.m"
    MR_bool libs__globals__succeeded;

#line 919 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0


		{
#line 919 "globals.m"
libs__globals__mutable_variable_solver_auto_init_supported = MR_new_thread_local_mutable_index();

#line 8121 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 919 "globals.m"
}
#line 919 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0


		{
#line 919 "globals.m"

#line 8135 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 919 "globals.m"
}
#line 919 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 919 "globals.m"
MR_set_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_solver_auto_init_supported);

#line 8152 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 919 "globals.m"
}
#line 919 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0


		{
#line 919 "globals.m"

#line 8166 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 919 "globals.m"
}
#line 919 "globals.m"
  }
#line 919 "globals.m"
}

#line 919 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_solver_auto_init_supported_0_p_0(void)
#line 919 "globals.m"
{
#line 919 "globals.m"
  {
#line 919 "globals.m"
    MR_bool libs__globals__succeeded;

#line 919 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_solver_auto_init_supported_0_p_0


		{
#line 919 "globals.m"
libs__globals__mutable_variable_solver_auto_init_supported = MR_new_thread_local_mutable_index();

#line 8196 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 919 "globals.m"
}
#line 919 "globals.m"
  }
#line 919 "globals.m"
}

#line 610 "globals.m"
static MR_bool MR_CALL 
libs__globals__convert_line_number_range_2_p_0(
#line 610 "globals.m"
  MR_String libs__globals__RangeStr_3,
#line 610 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 610 "globals.m"
{
#line 613 "globals.m"
  {
#line 613 "globals.m"
    MR_bool libs__globals__succeeded;
#line 613 "globals.m"
    MR_Word libs__globals__MaybeMin_4;
#line 613 "globals.m"
    MR_Word libs__globals__MaybeMax_5;
#line 613 "globals.m"
    MR_String libs__globals__MinStr_6;
#line 613 "globals.m"
    MR_String libs__globals__MaxStr_7;
#line 613 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 613 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 613 "globals.m"
    MR_Word libs__globals__V_13_13;

#line 614 "globals.m"
    {
#line 614 "globals.m"
      libs__globals__V_10_10 = mercury__string__split_at_char_2_f_0((MR_Char) 45, libs__globals__RangeStr_3);
    }
#line 614 "globals.m"
    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 614 "globals.m"
    if (libs__globals__succeeded)
#line 614 "globals.m"
      {
#line 614 "globals.m"
        libs__globals__MinStr_6 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_10_10, (MR_Integer) 0)));
#line 614 "globals.m"
        libs__globals__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_10_10, (MR_Integer) 1)));
#line 614 "globals.m"
        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 614 "globals.m"
        if (libs__globals__succeeded)
#line 614 "globals.m"
          {
#line 614 "globals.m"
            libs__globals__MaxStr_7 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_12_12, (MR_Integer) 0)));
#line 614 "globals.m"
            libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_12_12, (MR_Integer) 1)));
#line 614 "globals.m"
            libs__globals__succeeded = (libs__globals__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 613 "globals.m"
            if (libs__globals__succeeded)
#line 613 "globals.m"
              {
#line 615 "globals.m"
                libs__globals__succeeded = (strcmp(libs__globals__MinStr_6, (MR_String) "") == 0);
#line 617 "globals.m"
                if (libs__globals__succeeded)
#line 616 "globals.m"
                  {
#line 616 "globals.m"
                    libs__globals__MaybeMin_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 616 "globals.m"
                    libs__globals__succeeded = MR_TRUE;
#line 616 "globals.m"
                  }
#line 617 "globals.m"
                else
#line 618 "globals.m"
                  {
#line 618 "globals.m"
                    MR_Integer libs__globals__Min_8;

#line 618 "globals.m"
                    {
#line 618 "globals.m"
                      libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__MinStr_6, &libs__globals__Min_8);
                    }
#line 618 "globals.m"
                    if (libs__globals__succeeded)
#line 618 "globals.m"
                      {
#line 619 "globals.m"
                        {
#line 619 "globals.m"
                          libs__globals__MaybeMin_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 619 "globals.m"
                          MR_hl_field(MR_mktag(1), libs__globals__MaybeMin_4, 0) = ((MR_Box) (libs__globals__Min_8));
#line 619 "globals.m"
                        }
#line 619 "globals.m"
                        libs__globals__succeeded = MR_TRUE;
#line 618 "globals.m"
                      }
#line 618 "globals.m"
                  }
#line 613 "globals.m"
                if (libs__globals__succeeded)
#line 613 "globals.m"
                  {
#line 621 "globals.m"
                    libs__globals__succeeded = (strcmp(libs__globals__MaxStr_7, (MR_String) "") == 0);
#line 623 "globals.m"
                    if (libs__globals__succeeded)
#line 622 "globals.m"
                      {
#line 622 "globals.m"
                        libs__globals__MaybeMax_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 622 "globals.m"
                        libs__globals__succeeded = MR_TRUE;
#line 622 "globals.m"
                      }
#line 623 "globals.m"
                    else
#line 624 "globals.m"
                      {
#line 624 "globals.m"
                        MR_Integer libs__globals__Max_9;

#line 624 "globals.m"
                        {
#line 624 "globals.m"
                          libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__MaxStr_7, &libs__globals__Max_9);
                        }
#line 624 "globals.m"
                        if (libs__globals__succeeded)
#line 624 "globals.m"
                          {
#line 625 "globals.m"
                            {
#line 625 "globals.m"
                              libs__globals__MaybeMax_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 625 "globals.m"
                              MR_hl_field(MR_mktag(1), libs__globals__MaybeMax_5, 0) = ((MR_Box) (libs__globals__Max_9));
#line 625 "globals.m"
                            }
#line 625 "globals.m"
                            libs__globals__succeeded = MR_TRUE;
#line 624 "globals.m"
                          }
#line 624 "globals.m"
                      }
#line 613 "globals.m"
                    if (libs__globals__succeeded)
#line 613 "globals.m"
                      {
#line 613 "globals.m"
                        {
#line 613 "globals.m"
                          MR_Word base;
#line 613 "globals.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 613 "globals.m"
                          *libs__globals__HeadVar__2_2 = base;
#line 613 "globals.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__MaybeMin_4));
#line 613 "globals.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__globals__MaybeMax_5));
#line 613 "globals.m"
                        }
#line 613 "globals.m"
                        libs__globals__succeeded = MR_TRUE;
#line 613 "globals.m"
                      }
#line 613 "globals.m"
                  }
#line 613 "globals.m"
              }
#line 614 "globals.m"
          }
#line 614 "globals.m"
      }
#line 613 "globals.m"
    return libs__globals__succeeded;
#line 613 "globals.m"
  }
#line 610 "globals.m"
}

#line 595 "globals.m"
static void MR_CALL 
libs__globals__find_file_name_and_line_range_chars_4_p_0(
#line 595 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 595 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_LineRangeChars_0_2,
#line 595 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_LineRangeChars_3,
#line 595 "globals.m"
  MR_Word * libs__globals__HeadVar__4_4)
#line 595 "globals.m"
{
#line 598 "globals.m"
  while (MR_TRUE)
#line 598 "globals.m"
    {
#line 598 "globals.m"
      /* tailcall optimized into a loop */
#line 598 "globals.m"
      {
#line 598 "globals.m"
        MR_bool libs__globals__succeeded;

#line 598 "globals.m"
        if ((libs__globals__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 598 "globals.m"
          {
#line 598 "globals.m"
            *libs__globals__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 598 "globals.m"
            *libs__globals__STATE_VARIABLE_LineRangeChars_3 = libs__globals__STATE_VARIABLE_LineRangeChars_0_2;
#line 598 "globals.m"
          }
#line 598 "globals.m"
        else
#line 600 "globals.m"
          {
#line 600 "globals.m"
            MR_Char libs__globals__RevChar_8 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 600 "globals.m"
            MR_Word libs__globals__RevChars_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 1)));

#line 601 "globals.m"
            libs__globals__succeeded = (libs__globals__RevChar_8 == (MR_Char) 58);
#line 603 "globals.m"
            if (libs__globals__succeeded)
#line 602 "globals.m"
              {
#line 602 "globals.m"
                *libs__globals__HeadVar__4_4 = libs__globals__RevChars_9;
#line 602 "globals.m"
                *libs__globals__STATE_VARIABLE_LineRangeChars_3 = libs__globals__STATE_VARIABLE_LineRangeChars_0_2;
#line 602 "globals.m"
              }
#line 603 "globals.m"
            else
#line 605 "globals.m"
              {
#line 605 "globals.m"
                MR_Word libs__globals__STATE_VARIABLE_LineRangeChars_14_14;

#line 605 "globals.m"
                {
#line 605 "globals.m"
                  libs__globals__STATE_VARIABLE_LineRangeChars_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "globals.m"
                  MR_hl_field(MR_mktag(1), libs__globals__STATE_VARIABLE_LineRangeChars_14_14, 0) = ((MR_Box) (MR_Word) (libs__globals__RevChar_8));
#line 605 "globals.m"
                  MR_hl_field(MR_mktag(1), libs__globals__STATE_VARIABLE_LineRangeChars_14_14, 1) = ((MR_Box) (libs__globals__STATE_VARIABLE_LineRangeChars_0_2));
#line 605 "globals.m"
                }
#line 606 "globals.m"
                /* direct tailcall eliminated */
#line 606 "globals.m"
                {
#line 606 "globals.m"
                  MR_Word libs__globals__HeadVar__1__tmp_copy_1 = libs__globals__RevChars_9;
#line 606 "globals.m"
                  MR_Word libs__globals__STATE_VARIABLE_LineRangeChars_0__tmp_copy_2 = libs__globals__STATE_VARIABLE_LineRangeChars_14_14;

#line 606 "globals.m"
                  libs__globals__STATE_VARIABLE_LineRangeChars_0_2 = libs__globals__STATE_VARIABLE_LineRangeChars_0__tmp_copy_2;
#line 606 "globals.m"
                  libs__globals__HeadVar__1_1 = libs__globals__HeadVar__1__tmp_copy_1;
#line 606 "globals.m"
                }
#line 606 "globals.m"
                continue;
#line 605 "globals.m"
              }
#line 600 "globals.m"
          }
#line 598 "globals.m"
      }
#line 598 "globals.m"
      break;
#line 598 "globals.m"
    }
#line 595 "globals.m"
}

#line 587 "globals.m"
static MR_bool MR_CALL 
libs__globals__convert_limit_error_contexts_acc_5_p_0_1(
#line 587 "globals.m"
  MR_Box libs__globals__closure_arg,
#line 587 "globals.m"
  MR_Box libs__globals__wrapper_arg_1,
#line 587 "globals.m"
  MR_Box * libs__globals__wrapper_arg_2)
#line 587 "globals.m"
{
#line 587 "globals.m"
  {
#line 587 "globals.m"
    MR_bool libs__globals__succeeded;
#line 587 "globals.m"
    MR_Box libs__globals__closure = libs__globals__closure_arg;
#line 587 "globals.m"
    MR_Word libs__globals__conv0_HeadVar__2_2;

#line 587 "globals.m"
    {
#line 587 "globals.m"
      libs__globals__succeeded = libs__globals__convert_line_number_range_2_p_0(((MR_String) libs__globals__wrapper_arg_1), &libs__globals__conv0_HeadVar__2_2);
    }
#line 587 "globals.m"
    if (libs__globals__succeeded)
#line 587 "globals.m"
      {
#line 587 "globals.m"
        *libs__globals__wrapper_arg_2 = ((MR_Box) (libs__globals__conv0_HeadVar__2_2));
#line 587 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 587 "globals.m"
      }
#line 587 "globals.m"
    return libs__globals__succeeded;
#line 587 "globals.m"
  }
#line 587 "globals.m"
}

#line 567 "globals.m"
static void MR_CALL 
libs__globals__convert_limit_error_contexts_acc_5_p_0(
#line 567 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 567 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_RevBadOptions_0_2,
#line 567 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_RevBadOptions_3,
#line 567 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Map_0_4,
#line 567 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Map_5)
#line 567 "globals.m"
{
#line 571 "globals.m"
  while (MR_TRUE)
#line 571 "globals.m"
    {
#line 571 "globals.m"
      /* tailcall optimized into a loop */
#line 571 "globals.m"
      {
#line 571 "globals.m"
        MR_bool libs__globals__succeeded;

#line 571 "globals.m"
        if ((libs__globals__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 571 "globals.m"
          {
#line 571 "globals.m"
            *libs__globals__STATE_VARIABLE_Map_5 = libs__globals__STATE_VARIABLE_Map_0_4;
#line 571 "globals.m"
            *libs__globals__STATE_VARIABLE_RevBadOptions_3 = libs__globals__STATE_VARIABLE_RevBadOptions_0_2;
#line 571 "globals.m"
          }
#line 571 "globals.m"
        else
#line 572 "globals.m"
          {
#line 572 "globals.m"
            MR_String libs__globals__Option_12 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 572 "globals.m"
            MR_Word libs__globals__Options_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 1)));
#line 572 "globals.m"
            MR_Word libs__globals__OptionChars_16;
#line 572 "globals.m"
            MR_Word libs__globals__RevOptionChars_17;
#line 572 "globals.m"
            MR_Word libs__globals__LineRangeChars_18;
#line 572 "globals.m"
            MR_Word libs__globals__RevFileNameChars_19;
#line 572 "globals.m"
            MR_String libs__globals__FileName_20;
#line 572 "globals.m"
            MR_String libs__globals__LineRangeStr_21;
#line 572 "globals.m"
            MR_Word libs__globals__STATE_VARIABLE_Map_31_31;
#line 572 "globals.m"
            MR_Word libs__globals__STATE_VARIABLE_RevBadOptions_32_32;
#line 590 "globals.m"
            MR_Word libs__globals__LineNumberRanges_23;
#line 586 "globals.m"
            MR_Word libs__globals__LineRangeStrs_22;

#line 573 "globals.m"
            {
#line 573 "globals.m"
              mercury__string__to_char_list_2_p_0(libs__globals__Option_12, &libs__globals__OptionChars_16);
            }
#line 580 "globals.m"
            {
#line 580 "globals.m"
              mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, libs__globals__OptionChars_16, &libs__globals__RevOptionChars_17);
            }
#line 581 "globals.m"
            {
#line 581 "globals.m"
              libs__globals__find_file_name_and_line_range_chars_4_p_0(libs__globals__RevOptionChars_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__globals__LineRangeChars_18, &libs__globals__RevFileNameChars_19);
            }
#line 583 "globals.m"
            {
#line 583 "globals.m"
              libs__globals__FileName_20 = mercury__string__from_rev_char_list_1_f_0(libs__globals__RevFileNameChars_19);
            }
#line 584 "globals.m"
            {
#line 584 "globals.m"
              libs__globals__LineRangeStr_21 = mercury__string__from_char_list_1_f_0(libs__globals__LineRangeChars_18);
            }
#line 586 "globals.m"
            {
#line 586 "globals.m"
              libs__globals__LineRangeStrs_22 = mercury__string__split_at_char_2_f_0((MR_Char) 44, libs__globals__LineRangeStr_21);
            }
#line 587 "globals.m"
            {
#line 587 "globals.m"
              libs__globals__succeeded = mercury__list__map_3_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &libs__globals__libs__globals__type_ctor_info_line_number_range_0, (MR_Word) &libs__globals_scalar_common_2[6], libs__globals__LineRangeStrs_22, &libs__globals__LineNumberRanges_23);
            }
#line 590 "globals.m"
            if (libs__globals__succeeded)
#line 589 "globals.m"
              {
#line 589 "globals.m"
                {
#line 589 "globals.m"
                  mercury__map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &libs__globals_scalar_common_1[0], ((MR_Box) (libs__globals__FileName_20)), ((MR_Box) (libs__globals__LineNumberRanges_23)), libs__globals__STATE_VARIABLE_Map_0_4, &libs__globals__STATE_VARIABLE_Map_31_31);
                }
#line 589 "globals.m"
                libs__globals__STATE_VARIABLE_RevBadOptions_32_32 = libs__globals__STATE_VARIABLE_RevBadOptions_0_2;
#line 589 "globals.m"
              }
#line 590 "globals.m"
            else
#line 591 "globals.m"
              {
#line 591 "globals.m"
                {
#line 591 "globals.m"
                  libs__globals__STATE_VARIABLE_RevBadOptions_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 591 "globals.m"
                  MR_hl_field(MR_mktag(1), libs__globals__STATE_VARIABLE_RevBadOptions_32_32, 0) = ((MR_Box) (libs__globals__Option_12));
#line 591 "globals.m"
                  MR_hl_field(MR_mktag(1), libs__globals__STATE_VARIABLE_RevBadOptions_32_32, 1) = ((MR_Box) (libs__globals__STATE_VARIABLE_RevBadOptions_0_2));
#line 591 "globals.m"
                }
#line 591 "globals.m"
                libs__globals__STATE_VARIABLE_Map_31_31 = libs__globals__STATE_VARIABLE_Map_0_4;
#line 591 "globals.m"
              }
#line 593 "globals.m"
            /* direct tailcall eliminated */
#line 593 "globals.m"
            {
#line 593 "globals.m"
              MR_Word libs__globals__HeadVar__1__tmp_copy_1 = libs__globals__Options_13;
#line 593 "globals.m"
              MR_Word libs__globals__STATE_VARIABLE_RevBadOptions_0__tmp_copy_2 = libs__globals__STATE_VARIABLE_RevBadOptions_32_32;
#line 593 "globals.m"
              MR_Word libs__globals__STATE_VARIABLE_Map_0__tmp_copy_4 = libs__globals__STATE_VARIABLE_Map_31_31;

#line 593 "globals.m"
              libs__globals__STATE_VARIABLE_Map_0_4 = libs__globals__STATE_VARIABLE_Map_0__tmp_copy_4;
#line 593 "globals.m"
              libs__globals__STATE_VARIABLE_RevBadOptions_0_2 = libs__globals__STATE_VARIABLE_RevBadOptions_0__tmp_copy_2;
#line 593 "globals.m"
              libs__globals__HeadVar__1_1 = libs__globals__HeadVar__1__tmp_copy_1;
#line 593 "globals.m"
            }
#line 593 "globals.m"
            continue;
#line 572 "globals.m"
          }
#line 571 "globals.m"
      }
#line 571 "globals.m"
      break;
#line 571 "globals.m"
    }
#line 567 "globals.m"
}

#line 372 "globals.m"
void MR_CALL 
libs__globals__io_set_maybe_source_file_map_3_p_0(
#line 372 "globals.m"
  MR_Word libs__globals__MaybeSourceFileMap_4)
#line 372 "globals.m"
{
#line 945 "globals.m"
  {
#line 945 "globals.m"
    MR_bool libs__globals__succeeded;

#line 945 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_maybe_source_file_map_3_p_0


		{
#line 945 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                    "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 8722 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 945 "globals.m"
}
#line 945 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_maybe_source_file_map_3_p_0

	MR_Word X;

	X =  libs__globals__MaybeSourceFileMap_4 ;
		{
#line 945 "globals.m"
libs__globals__mutable_variable_maybe_source_file_map = X;

#line 8739 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 945 "globals.m"
}
#line 945 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_maybe_source_file_map_3_p_0


		{
#line 945 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                    "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 8757 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 945 "globals.m"
}
#line 945 "globals.m"
  }
#line 372 "globals.m"
}

#line 370 "globals.m"
void MR_CALL 
libs__globals__io_get_maybe_source_file_map_3_p_0(
#line 370 "globals.m"
  MR_Word * libs__globals__MaybeSourceFileMap_4)
#line 370 "globals.m"
{
#line 945 "globals.m"
  {
#line 945 "globals.m"
    MR_bool libs__globals__succeeded;

#line 945 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_maybe_source_file_map_3_p_0


		{
#line 945 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                    "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 8792 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 945 "globals.m"
}
#line 945 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_maybe_source_file_map_3_p_0

	MR_Word X;

		{
#line 945 "globals.m"
X = libs__globals__mutable_variable_maybe_source_file_map;

#line 8808 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__MaybeSourceFileMap_4  = X;
#line 945 "globals.m"
}
#line 945 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_maybe_source_file_map_3_p_0


		{
#line 945 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                    "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 8827 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 945 "globals.m"
}
#line 945 "globals.m"
  }
#line 370 "globals.m"
}

#line 367 "globals.m"
void MR_CALL 
libs__globals__io_set_disable_generate_item_version_numbers_3_p_0(
#line 367 "globals.m"
  MR_Word libs__globals__DisableItemVerions_4)
#line 367 "globals.m"
{
#line 942 "globals.m"
  {
#line 942 "globals.m"
    MR_bool libs__globals__succeeded;

#line 942 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_disable_generate_item_version_numbers_3_p_0


		{
#line 942 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                    "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 8862 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 942 "globals.m"
}
#line 942 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_disable_generate_item_version_numbers_3_p_0

	MR_Word X;

	X =  libs__globals__DisableItemVerions_4 ;
		{
#line 942 "globals.m"
libs__globals__mutable_variable_disable_generate_item_version_numbers = X;

#line 8879 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 942 "globals.m"
}
#line 942 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_disable_generate_item_version_numbers_3_p_0


		{
#line 942 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                    "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 8897 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 942 "globals.m"
}
#line 942 "globals.m"
  }
#line 367 "globals.m"
}

#line 365 "globals.m"
void MR_CALL 
libs__globals__io_get_disable_generate_item_version_numbers_3_p_0(
#line 365 "globals.m"
  MR_Word * libs__globals__DisableItemVerions_4)
#line 365 "globals.m"
{
#line 942 "globals.m"
  {
#line 942 "globals.m"
    MR_bool libs__globals__succeeded;

#line 942 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_disable_generate_item_version_numbers_3_p_0


		{
#line 942 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                    "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 8932 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 942 "globals.m"
}
#line 942 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_disable_generate_item_version_numbers_3_p_0

	MR_Word X;

		{
#line 942 "globals.m"
X = libs__globals__mutable_variable_disable_generate_item_version_numbers;

#line 8948 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__DisableItemVerions_4  = X;
#line 942 "globals.m"
}
#line 942 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_disable_generate_item_version_numbers_3_p_0


		{
#line 942 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                    "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 8967 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 942 "globals.m"
}
#line 942 "globals.m"
  }
#line 365 "globals.m"
}

#line 363 "globals.m"
void MR_CALL 
libs__globals__io_set_disable_smart_recompilation_3_p_0(
#line 363 "globals.m"
  MR_Word libs__globals__DisableSmartRecomp_4)
#line 363 "globals.m"
{
#line 939 "globals.m"
  {
#line 939 "globals.m"
    MR_bool libs__globals__succeeded;

#line 939 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_disable_smart_recompilation_3_p_0


		{
#line 939 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                    "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 9002 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 939 "globals.m"
}
#line 939 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_disable_smart_recompilation_3_p_0

	MR_Word X;

	X =  libs__globals__DisableSmartRecomp_4 ;
		{
#line 939 "globals.m"
libs__globals__mutable_variable_disable_smart_recompilation = X;

#line 9019 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 939 "globals.m"
}
#line 939 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_disable_smart_recompilation_3_p_0


		{
#line 939 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                    "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 9037 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 939 "globals.m"
}
#line 939 "globals.m"
  }
#line 363 "globals.m"
}

#line 362 "globals.m"
void MR_CALL 
libs__globals__io_get_disable_smart_recompilation_3_p_0(
#line 362 "globals.m"
  MR_Word * libs__globals__DisableSmartRecomp_4)
#line 362 "globals.m"
{
#line 939 "globals.m"
  {
#line 939 "globals.m"
    MR_bool libs__globals__succeeded;

#line 939 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_disable_smart_recompilation_3_p_0


		{
#line 939 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                    "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 9072 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 939 "globals.m"
}
#line 939 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_disable_smart_recompilation_3_p_0

	MR_Word X;

		{
#line 939 "globals.m"
X = libs__globals__mutable_variable_disable_smart_recompilation;

#line 9088 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__DisableSmartRecomp_4  = X;
#line 939 "globals.m"
}
#line 939 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_disable_smart_recompilation_3_p_0


		{
#line 939 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                    "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 9107 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 939 "globals.m"
}
#line 939 "globals.m"
  }
#line 362 "globals.m"
}

#line 359 "globals.m"
void MR_CALL 
libs__globals__io_set_some_errors_were_context_limited_3_p_0(
#line 359 "globals.m"
  MR_Word libs__globals__SomeErrorsWereContextLimited_4)
#line 359 "globals.m"
{
#line 936 "globals.m"
  {
#line 936 "globals.m"
    MR_bool libs__globals__succeeded;

#line 936 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_some_errors_were_context_limited_3_p_0


		{
#line 936 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_some_errors_were_context_limited_lock,
                    "libs__globals__mutable_variable_some_errors_were_context_limited_lock");
#endif

#line 9142 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 936 "globals.m"
}
#line 936 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_some_errors_were_context_limited_3_p_0

	MR_Word X;

	X =  libs__globals__SomeErrorsWereContextLimited_4 ;
		{
#line 936 "globals.m"
libs__globals__mutable_variable_some_errors_were_context_limited = X;

#line 9159 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 936 "globals.m"
}
#line 936 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_some_errors_were_context_limited_3_p_0


		{
#line 936 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_some_errors_were_context_limited_lock,
                    "libs__globals__mutable_variable_some_errors_were_context_limited_lock");
#endif

#line 9177 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 936 "globals.m"
}
#line 936 "globals.m"
  }
#line 359 "globals.m"
}

#line 357 "globals.m"
void MR_CALL 
libs__globals__io_get_some_errors_were_context_limited_3_p_0(
#line 357 "globals.m"
  MR_Word * libs__globals__SomeErrorsWereContextLimited_4)
#line 357 "globals.m"
{
#line 936 "globals.m"
  {
#line 936 "globals.m"
    MR_bool libs__globals__succeeded;

#line 936 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_some_errors_were_context_limited_3_p_0


		{
#line 936 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_some_errors_were_context_limited_lock,
                    "libs__globals__mutable_variable_some_errors_were_context_limited_lock");
#endif

#line 9212 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 936 "globals.m"
}
#line 936 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_some_errors_were_context_limited_3_p_0

	MR_Word X;

		{
#line 936 "globals.m"
X = libs__globals__mutable_variable_some_errors_were_context_limited;

#line 9228 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__SomeErrorsWereContextLimited_4  = X;
#line 936 "globals.m"
}
#line 936 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_some_errors_were_context_limited_3_p_0


		{
#line 936 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_some_errors_were_context_limited_lock,
                    "libs__globals__mutable_variable_some_errors_were_context_limited_lock");
#endif

#line 9247 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 936 "globals.m"
}
#line 936 "globals.m"
  }
#line 357 "globals.m"
}

#line 355 "globals.m"
void MR_CALL 
libs__globals__io_set_extra_error_info_3_p_0(
#line 355 "globals.m"
  MR_Word libs__globals__ExtraErrorInfo_4)
#line 355 "globals.m"
{
#line 930 "globals.m"
  {
#line 930 "globals.m"
    MR_bool libs__globals__succeeded;

#line 930 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_extra_error_info_3_p_0


		{
#line 930 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                    "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 9282 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 930 "globals.m"
}
#line 930 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_extra_error_info_3_p_0

	MR_Word X;

	X =  libs__globals__ExtraErrorInfo_4 ;
		{
#line 930 "globals.m"
libs__globals__mutable_variable_extra_error_info = X;

#line 9299 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 930 "globals.m"
}
#line 930 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_extra_error_info_3_p_0


		{
#line 930 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                    "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 9317 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 930 "globals.m"
}
#line 930 "globals.m"
  }
#line 355 "globals.m"
}

#line 354 "globals.m"
void MR_CALL 
libs__globals__io_get_extra_error_info_3_p_0(
#line 354 "globals.m"
  MR_Word * libs__globals__ExtraErrorInfo_4)
#line 354 "globals.m"
{
#line 930 "globals.m"
  {
#line 930 "globals.m"
    MR_bool libs__globals__succeeded;

#line 930 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_extra_error_info_3_p_0


		{
#line 930 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                    "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 9352 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 930 "globals.m"
}
#line 930 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_extra_error_info_3_p_0

	MR_Word X;

		{
#line 930 "globals.m"
X = libs__globals__mutable_variable_extra_error_info;

#line 9368 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__ExtraErrorInfo_4  = X;
#line 930 "globals.m"
}
#line 930 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_extra_error_info_3_p_0


		{
#line 930 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                    "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 9387 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 930 "globals.m"
}
#line 930 "globals.m"
  }
#line 354 "globals.m"
}

#line 352 "globals.m"
MR_Word MR_CALL 
libs__globals__get_maybe_from_ground_term_threshold_0_f_0(void)
#line 352 "globals.m"
{
#line 962 "globals.m"
  {
#line 962 "globals.m"
    MR_bool libs__globals__succeeded;
#line 962 "globals.m"
    MR_Word libs__globals__MaybeThreshold_2;

#line 924 "globals.m"
{
#define MR_PROC_LABEL libs__globals__get_maybe_from_ground_term_threshold_0_f_0


		{
#line 924 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                    "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 9422 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 924 "globals.m"
}
#line 924 "globals.m"
{
#define MR_PROC_LABEL libs__globals__get_maybe_from_ground_term_threshold_0_f_0

	MR_Word X;

		{
#line 924 "globals.m"
X = libs__globals__mutable_variable_maybe_from_ground_term_threshold;

#line 9438 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 libs__globals__MaybeThreshold_2  = X;
#line 924 "globals.m"
}
#line 924 "globals.m"
{
#define MR_PROC_LABEL libs__globals__get_maybe_from_ground_term_threshold_0_f_0


		{
#line 924 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                    "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 9457 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 924 "globals.m"
}
#line 962 "globals.m"
    return libs__globals__MaybeThreshold_2;
#line 962 "globals.m"
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
#line 919 "globals.m"
  {
#line 919 "globals.m"
    MR_bool libs__globals__succeeded;

#line 919 "globals.m"
{
#define MR_PROC_LABEL libs__globals__semipure_get_solver_auto_init_supported_1_p_0


		{
#line 919 "globals.m"

#line 9490 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 919 "globals.m"
}
#line 919 "globals.m"
{
#define MR_PROC_LABEL libs__globals__semipure_get_solver_auto_init_supported_1_p_0

	MR_Word X;

		{
#line 919 "globals.m"
MR_get_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_solver_auto_init_supported);

#line 9506 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__AutoInitSupported_2  = X;
#line 919 "globals.m"
}
#line 919 "globals.m"
{
#define MR_PROC_LABEL libs__globals__semipure_get_solver_auto_init_supported_1_p_0


		{
#line 919 "globals.m"

#line 9521 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 919 "globals.m"
}
#line 919 "globals.m"
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
#line 950 "globals.m"
  {
#line 950 "globals.m"
    MR_bool libs__globals__succeeded;
#line 950 "globals.m"
    MR_Word libs__globals__AutoInitSupported_6;
#line 950 "globals.m"
    MR_Integer libs__globals__FromGroundTermThreshold_7;
#line 950 "globals.m"
    MR_Word libs__globals__V_13_13;

#line 951 "globals.m"
    {
#line 951 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_4, (MR_Integer) 291, &libs__globals__AutoInitSupported_6);
    }
#line 919 "globals.m"
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0


		{
#line 919 "globals.m"

#line 9563 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 919 "globals.m"
}
#line 919 "globals.m"
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0

	MR_Word X;

	X =  libs__globals__AutoInitSupported_6 ;
		{
#line 919 "globals.m"
MR_set_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_solver_auto_init_supported);

#line 9580 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 919 "globals.m"
}
#line 919 "globals.m"
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0


		{
#line 919 "globals.m"

#line 9594 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 919 "globals.m"
}
#line 954 "globals.m"
    {
#line 954 "globals.m"
      libs__globals__lookup_int_option_3_p_0(libs__globals__Globals_4, (MR_Integer) 339, &libs__globals__FromGroundTermThreshold_7);
    }
#line 956 "globals.m"
    {
#line 956 "globals.m"
      libs__globals__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 956 "globals.m"
      MR_hl_field(MR_mktag(1), libs__globals__V_13_13, 0) = ((MR_Box) (libs__globals__FromGroundTermThreshold_7));
#line 956 "globals.m"
    }
#line 924 "globals.m"
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0


		{
#line 924 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                    "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 9625 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 924 "globals.m"
}
#line 924 "globals.m"
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0

	MR_Word X;

	X =  libs__globals__V_13_13 ;
		{
#line 924 "globals.m"
libs__globals__mutable_variable_maybe_from_ground_term_threshold = X;

#line 9642 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 924 "globals.m"
}
#line 924 "globals.m"
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0


		{
#line 924 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                    "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 9660 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 924 "globals.m"
}
#line 950 "globals.m"
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
#line 886 "globals.m"
  {
#line 886 "globals.m"
    MR_bool libs__globals__succeeded;
#line 886 "globals.m"
    MR_Integer libs__globals__TargetWordBits_5;
#line 886 "globals.m"
    MR_Word libs__globals__SinglePrecFloat_6;

#line 887 "globals.m"
    {
#line 887 "globals.m"
      libs__globals__lookup_int_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 237, &libs__globals__TargetWordBits_5);
    }
#line 888 "globals.m"
    {
#line 888 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 221, &libs__globals__SinglePrecFloat_6);
    }
#line 889 "globals.m"
    libs__globals__succeeded = (libs__globals__TargetWordBits_5 == (MR_Integer) 64);
#line 891 "globals.m"
    if (libs__globals__succeeded)
#line 890 "globals.m"
      *libs__globals__FloatDwords_4 = (MR_Integer) 0;
#line 891 "globals.m"
    else
#line 899 "globals.m"
      {
#line 891 "globals.m"
        libs__globals__succeeded = (libs__globals__TargetWordBits_5 == (MR_Integer) 32);
#line 899 "globals.m"
        if (libs__globals__succeeded)
#line 895 "globals.m"
#line 895 "globals.m"
          switch (libs__globals__SinglePrecFloat_6) {
#line 895 "globals.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 895 "globals.m"
            case (MR_Integer) 0:
#line 897 "globals.m"
              *libs__globals__FloatDwords_4 = (MR_Integer) 1;
#line 895 "globals.m"
              break;
#line 895 "globals.m"
            case (MR_Integer) 1:
#line 894 "globals.m"
              *libs__globals__FloatDwords_4 = (MR_Integer) 0;
#line 895 "globals.m"
              break;
#line 895 "globals.m"
          }
#line 899 "globals.m"
        else
#line 900 "globals.m"
          {
#line 900 "globals.m"
            {
#line 900 "globals.m"
              mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.double_width_floats_on_det_stack\'/2", (MR_String) "bits_per_word not 32 or 64");
#line 900 "globals.m"
              return;
            }
#line 900 "globals.m"
          }
#line 899 "globals.m"
      }
#line 886 "globals.m"
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
#line 881 "globals.m"
  {
#line 881 "globals.m"
    MR_bool libs__globals__succeeded;
#line 881 "globals.m"
    MR_Word libs__globals__IntermodOpt_5;
#line 881 "globals.m"
    MR_Word libs__globals__IntermodAnalysis_6;

#line 882 "globals.m"
    {
#line 882 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 321, &libs__globals__IntermodOpt_5);
    }
#line 883 "globals.m"
    {
#line 883 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 326, &libs__globals__IntermodAnalysis_6);
    }
#line 884 "globals.m"
    {
#line 884 "globals.m"
      *libs__globals__AnyIntermod_4 = mercury__bool__or_2_f_0(libs__globals__IntermodOpt_5, libs__globals__IntermodAnalysis_6);
    }
#line 881 "globals.m"
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
#line 859 "globals.m"
  {
#line 859 "globals.m"
    MR_bool libs__globals__succeeded;
#line 859 "globals.m"
    MR_Word libs__globals__Target_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 696 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 696 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 696 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 696 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 696 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 696 "globals.m"
    MR_Word libs__globals__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 696 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 696 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 696 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 696 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 696 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 696 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 696 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 696 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 696 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 696 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 696 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)));
#line 696 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));

#line 873 "globals.m"
#line 873 "globals.m"
    switch (libs__globals__Target_5) {
#line 873 "globals.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 873 "globals.m"
      case (MR_Integer) 0:
#line 862 "globals.m"
        {
#line 862 "globals.m"
          MR_Word libs__globals__HighLevelCode_6;

#line 863 "globals.m"
          {
#line 863 "globals.m"
            libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 251, &libs__globals__HighLevelCode_6);
          }
#line 868 "globals.m"
#line 868 "globals.m"
          switch (libs__globals__HighLevelCode_6) {
#line 868 "globals.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 868 "globals.m"
            case (MR_Integer) 0:
#line 867 "globals.m"
              *libs__globals__ThreadsSupported_4 = (MR_Integer) 1;
#line 868 "globals.m"
              break;
#line 868 "globals.m"
            case (MR_Integer) 1:
#line 869 "globals.m"
              {
#line 870 "globals.m"
                {
#line 870 "globals.m"
                  libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 213, libs__globals__ThreadsSupported_4);
#line 870 "globals.m"
                  return;
                }
#line 869 "globals.m"
              }
#line 868 "globals.m"
              break;
#line 868 "globals.m"
          }
#line 862 "globals.m"
        }
#line 873 "globals.m"
        break;
#line 873 "globals.m"
      case (MR_Integer) 1:
#line 873 "globals.m"
      case (MR_Integer) 3:
#line 873 "globals.m"
      case (MR_Integer) 2:
#line 878 "globals.m"
        *libs__globals__ThreadsSupported_4 = (MR_Integer) 1;
#line 873 "globals.m"
        break;
#line 873 "globals.m"
    }
#line 859 "globals.m"
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
#line 840 "globals.m"
  {
#line 840 "globals.m"
    MR_bool libs__globals__succeeded;
#line 840 "globals.m"
    MR_Word libs__globals__Target_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 840 "globals.m"
    MR_Word libs__globals__HighLevelCode_6;
#line 840 "globals.m"
    MR_Word libs__globals__Parallel_7;
#line 840 "globals.m"
    MR_Word libs__globals__UseTrail_8;
#line 696 "globals.m"
    MR_Word libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 696 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 696 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 696 "globals.m"
    MR_Word libs__globals__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 696 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 696 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 696 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 696 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 696 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 696 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 696 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 696 "globals.m"
    MR_Word libs__globals__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 696 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 696 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 696 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 696 "globals.m"
    MR_Word libs__globals__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 696 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)));
#line 696 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));

#line 845 "globals.m"
    {
#line 845 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 251, &libs__globals__HighLevelCode_6);
    }
#line 846 "globals.m"
    {
#line 846 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 213, &libs__globals__Parallel_7);
    }
#line 847 "globals.m"
    {
#line 847 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 215, &libs__globals__UseTrail_8);
    }
#line 849 "globals.m"
    libs__globals__succeeded = (libs__globals__Target_5 == (MR_Integer) 0);
#line 849 "globals.m"
    if (libs__globals__succeeded)
#line 849 "globals.m"
      {
#line 850 "globals.m"
        libs__globals__succeeded = (libs__globals__HighLevelCode_6 == (MR_Integer) 0);
#line 849 "globals.m"
        if (libs__globals__succeeded)
#line 849 "globals.m"
          {
#line 851 "globals.m"
            libs__globals__succeeded = (libs__globals__Parallel_7 == (MR_Integer) 1);
#line 849 "globals.m"
            if (libs__globals__succeeded)
#line 852 "globals.m"
              libs__globals__succeeded = (libs__globals__UseTrail_8 == (MR_Integer) 0);
#line 849 "globals.m"
          }
#line 849 "globals.m"
      }
#line 855 "globals.m"
    if (libs__globals__succeeded)
#line 854 "globals.m"
      *libs__globals__ParConjSupported_4 = (MR_Integer) 1;
#line 855 "globals.m"
    else
#line 856 "globals.m"
      *libs__globals__ParConjSupported_4 = (MR_Integer) 0;
#line 840 "globals.m"
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
#line 826 "globals.m"
  {
#line 826 "globals.m"
    MR_bool libs__globals__succeeded;
#line 826 "globals.m"
    MR_Word libs__globals__Target_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 826 "globals.m"
    MR_Word libs__globals__GC_Method_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 826 "globals.m"
    MR_Word libs__globals__HighLevelData_7;
#line 696 "globals.m"
    MR_Word libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 696 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 696 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 696 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 696 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 696 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 696 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 696 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 696 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 696 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 696 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 696 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 696 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 696 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 696 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 696 "globals.m"
    MR_Word libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)));
#line 696 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));

#line 829 "globals.m"
    {
#line 829 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 252, &libs__globals__HighLevelData_7);
    }
#line 831 "globals.m"
    libs__globals__succeeded = (libs__globals__Target_5 == (MR_Integer) 0);
#line 831 "globals.m"
    if (libs__globals__succeeded)
#line 831 "globals.m"
      {
#line 832 "globals.m"
        libs__globals__succeeded = (libs__globals__GC_Method_6 == (MR_Integer) 5);
#line 832 "globals.m"
        libs__globals__succeeded = !(libs__globals__succeeded);
#line 831 "globals.m"
        if (libs__globals__succeeded)
#line 833 "globals.m"
          libs__globals__succeeded = (libs__globals__HighLevelData_7 == (MR_Integer) 0);
#line 831 "globals.m"
      }
#line 836 "globals.m"
    if (libs__globals__succeeded)
#line 835 "globals.m"
      *libs__globals__TablingSupported_4 = (MR_Integer) 1;
#line 836 "globals.m"
    else
#line 837 "globals.m"
      *libs__globals__TablingSupported_4 = (MR_Integer) 0;
#line 826 "globals.m"
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
#line 822 "globals.m"
  {
#line 822 "globals.m"
    MR_bool libs__globals__succeeded;

#line 813 "globals.m"
    {
#line 813 "globals.m"
      MR_Word libs__globals__GC_Method_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 697 "globals.m"
      MR_Word libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 697 "globals.m"
      MR_Word libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 697 "globals.m"
      MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 697 "globals.m"
      MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 697 "globals.m"
      MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 697 "globals.m"
      MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 697 "globals.m"
      MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 697 "globals.m"
      MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 697 "globals.m"
      MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 697 "globals.m"
      MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 697 "globals.m"
      MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 697 "globals.m"
      MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 697 "globals.m"
      MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 697 "globals.m"
      MR_Word libs__globals__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 697 "globals.m"
      MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 697 "globals.m"
      MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 697 "globals.m"
      MR_Word libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)));
#line 697 "globals.m"
      MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));

#line 814 "globals.m"
      libs__globals__succeeded = (libs__globals__GC_Method_5 == (MR_Integer) 5);
#line 813 "globals.m"
    }
#line 815 "globals.m"
    if (!(libs__globals__succeeded))
#line 816 "globals.m"
      {
#line 816 "globals.m"
        MR_Word libs__globals__TraceLevel_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 816 "globals.m"
        MR_Word libs__globals__TraceSuppress_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 816 "globals.m"
        MR_Word libs__globals__V_8_8;
#line 701 "globals.m"
        MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 701 "globals.m"
        MR_Word libs__globals__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 701 "globals.m"
        MR_Word libs__globals__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 701 "globals.m"
        MR_Word libs__globals__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 701 "globals.m"
        MR_Word libs__globals__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 701 "globals.m"
        MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 701 "globals.m"
        MR_Word libs__globals__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 701 "globals.m"
        MR_Word libs__globals__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 701 "globals.m"
        MR_Word libs__globals__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 701 "globals.m"
        MR_Word libs__globals__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 701 "globals.m"
        MR_Word libs__globals__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 701 "globals.m"
        MR_Word libs__globals__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 701 "globals.m"
        MR_Word libs__globals__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 701 "globals.m"
        MR_Word libs__globals__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 701 "globals.m"
        MR_Word libs__globals__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 701 "globals.m"
        MR_Word libs__globals__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)));
#line 701 "globals.m"
        MR_Word libs__globals__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));

#line 818 "globals.m"
        {
#line 818 "globals.m"
          libs__globals__V_8_8 = libs__trace_params__trace_needs_return_info_2_f_0(libs__globals__TraceLevel_6, libs__globals__TraceSuppress_7);
        }
#line 818 "globals.m"
        libs__globals__succeeded = (libs__globals__V_8_8 == (MR_Integer) 1);
#line 816 "globals.m"
      }
#line 822 "globals.m"
    if (libs__globals__succeeded)
#line 821 "globals.m"
      *libs__globals__WantReturnLayouts_4 = (MR_Integer) 1;
#line 822 "globals.m"
    else
#line 823 "globals.m"
      *libs__globals__WantReturnLayouts_4 = (MR_Integer) 0;
#line 822 "globals.m"
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
#line 798 "globals.m"
  {
#line 798 "globals.m"
    MR_bool libs__globals__succeeded;
#line 798 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 798 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 695 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)));
#line 695 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 695 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)));
#line 695 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 695 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 695 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 695 "globals.m"
    MR_Word libs__globals__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)));
#line 695 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 754 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 802 "globals.m"
    MR_Word libs__globals__Accumulating_8;

#line 754 "globals.m"
    {
#line 754 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 754 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 800 "globals.m"
    libs__globals__succeeded = ((((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 800 "globals.m"
    if (libs__globals__succeeded)
#line 800 "globals.m"
      {
#line 800 "globals.m"
        libs__globals__Accumulating_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 1)));
#line 801 "globals.m"
        *libs__globals__Value_6 = libs__globals__Accumulating_8;
#line 800 "globals.m"
      }
#line 800 "globals.m"
    else
#line 803 "globals.m"
      {
#line 803 "globals.m"
        {
#line 803 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_accumulating_option\'/3", (MR_String) "invalid accumulating option");
#line 803 "globals.m"
          return;
        }
#line 803 "globals.m"
      }
#line 798 "globals.m"
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
#line 790 "globals.m"
  {
#line 790 "globals.m"
    MR_bool libs__globals__succeeded;
#line 790 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 790 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 695 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)));
#line 695 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 695 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)));
#line 695 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 695 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 695 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 695 "globals.m"
    MR_Word libs__globals__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)));
#line 695 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 754 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 794 "globals.m"
    MR_Word libs__globals__MaybeString_8;

#line 754 "globals.m"
    {
#line 754 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 754 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 792 "globals.m"
    libs__globals__succeeded = ((((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 792 "globals.m"
    if (libs__globals__succeeded)
#line 792 "globals.m"
      {
#line 792 "globals.m"
        libs__globals__MaybeString_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 1)));
#line 793 "globals.m"
        *libs__globals__Value_6 = libs__globals__MaybeString_8;
#line 792 "globals.m"
      }
#line 792 "globals.m"
    else
#line 795 "globals.m"
      {
#line 795 "globals.m"
        {
#line 795 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_maybe_string_option\'/3", (MR_String) "invalid maybe_string option");
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
libs__globals__lookup_string_option_3_p_0(
#line 303 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 303 "globals.m"
  MR_Word libs__globals__Option_5,
#line 303 "globals.m"
  MR_String * libs__globals__Value_6)
#line 303 "globals.m"
{
#line 766 "globals.m"
  {
#line 766 "globals.m"
    MR_bool libs__globals__succeeded;
#line 766 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 766 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 695 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)));
#line 695 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 695 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)));
#line 695 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 695 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 695 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 695 "globals.m"
    MR_Word libs__globals__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)));
#line 695 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 754 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 770 "globals.m"
    MR_String libs__globals__String_8;

#line 754 "globals.m"
    {
#line 754 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 754 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 768 "globals.m"
    libs__globals__succeeded = ((((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 768 "globals.m"
    if (libs__globals__succeeded)
#line 768 "globals.m"
      {
#line 768 "globals.m"
        libs__globals__String_8 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 1)));
#line 769 "globals.m"
        *libs__globals__Value_6 = libs__globals__String_8;
#line 768 "globals.m"
      }
#line 768 "globals.m"
    else
#line 771 "globals.m"
      {
#line 771 "globals.m"
        {
#line 771 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_string_option\'/3", (MR_String) "invalid string option");
#line 771 "globals.m"
          return;
        }
#line 771 "globals.m"
      }
#line 766 "globals.m"
  }
#line 303 "globals.m"
}

#line 301 "globals.m"
void MR_CALL 
libs__globals__lookup_maybe_int_option_3_p_0(
#line 301 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 301 "globals.m"
  MR_Word libs__globals__Option_5,
#line 301 "globals.m"
  MR_Word * libs__globals__Value_6)
#line 301 "globals.m"
{
#line 782 "globals.m"
  {
#line 782 "globals.m"
    MR_bool libs__globals__succeeded;
#line 782 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 782 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 695 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)));
#line 695 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 695 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)));
#line 695 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 695 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 695 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 695 "globals.m"
    MR_Word libs__globals__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)));
#line 695 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 754 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 786 "globals.m"
    MR_Word libs__globals__MaybeInt_8;

#line 754 "globals.m"
    {
#line 754 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 754 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 784 "globals.m"
    libs__globals__succeeded = ((((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 784 "globals.m"
    if (libs__globals__succeeded)
#line 784 "globals.m"
      {
#line 784 "globals.m"
        libs__globals__MaybeInt_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 1)));
#line 785 "globals.m"
        *libs__globals__Value_6 = libs__globals__MaybeInt_8;
#line 784 "globals.m"
      }
#line 784 "globals.m"
    else
#line 787 "globals.m"
      {
#line 787 "globals.m"
        {
#line 787 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_maybe_int_option\'/3", (MR_String) "invalid maybe_int option");
#line 787 "globals.m"
          return;
        }
#line 787 "globals.m"
      }
#line 782 "globals.m"
  }
#line 301 "globals.m"
}

#line 300 "globals.m"
void MR_CALL 
libs__globals__lookup_int_option_3_p_0(
#line 300 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 300 "globals.m"
  MR_Word libs__globals__Option_5,
#line 300 "globals.m"
  MR_Integer * libs__globals__Value_6)
#line 300 "globals.m"
{
#line 774 "globals.m"
  {
#line 774 "globals.m"
    MR_bool libs__globals__succeeded;
#line 774 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 774 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 695 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)));
#line 695 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 695 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)));
#line 695 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 695 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 695 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 695 "globals.m"
    MR_Word libs__globals__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)));
#line 695 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 754 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 778 "globals.m"
    MR_Integer libs__globals__Int_8;

#line 754 "globals.m"
    {
#line 754 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 754 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 776 "globals.m"
    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 2)));
#line 776 "globals.m"
    if (libs__globals__succeeded)
#line 776 "globals.m"
      {
#line 776 "globals.m"
        libs__globals__Int_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), libs__globals__OptionData_7, (MR_Integer) 0)));
#line 777 "globals.m"
        *libs__globals__Value_6 = libs__globals__Int_8;
#line 776 "globals.m"
      }
#line 776 "globals.m"
    else
#line 779 "globals.m"
      {
#line 779 "globals.m"
        {
#line 779 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_int_option\'/3", (MR_String) "invalid int option");
#line 779 "globals.m"
          return;
        }
#line 779 "globals.m"
      }
#line 774 "globals.m"
  }
#line 300 "globals.m"
}

#line 299 "globals.m"
MR_bool MR_CALL 
libs__globals__lookup_bool_option_3_p_1(
#line 299 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 299 "globals.m"
  MR_Word libs__globals__Option_5,
#line 299 "globals.m"
  MR_Word libs__globals__Value_6)
#line 299 "globals.m"
{
#line 758 "globals.m"
  {
#line 758 "globals.m"
    MR_bool libs__globals__succeeded;
#line 758 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 758 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 695 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)));
#line 695 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 695 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)));
#line 695 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 695 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 695 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 695 "globals.m"
    MR_Word libs__globals__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)));
#line 695 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 754 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 762 "globals.m"
    MR_Word libs__globals__Bool_8;

#line 754 "globals.m"
    {
#line 754 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 754 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 760 "globals.m"
    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 1)));
#line 760 "globals.m"
    if (libs__globals__succeeded)
#line 760 "globals.m"
      {
#line 760 "globals.m"
        libs__globals__Bool_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__OptionData_7, (MR_Integer) 0)));
#line 761 "globals.m"
        libs__globals__succeeded = (libs__globals__Value_6 == libs__globals__Bool_8);
#line 760 "globals.m"
      }
#line 760 "globals.m"
    else
#line 763 "globals.m"
      {
#line 763 "globals.m"
        {
#line 763 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_bool_option\'/3", (MR_String) "invalid bool option");
        }
#line 763 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 763 "globals.m"
      }
#line 758 "globals.m"
    return libs__globals__succeeded;
#line 758 "globals.m"
  }
#line 299 "globals.m"
}

#line 298 "globals.m"
void MR_CALL 
libs__globals__lookup_bool_option_3_p_0(
#line 298 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 298 "globals.m"
  MR_Word libs__globals__Option_5,
#line 298 "globals.m"
  MR_Word * libs__globals__Value_6)
#line 298 "globals.m"
{
#line 758 "globals.m"
  {
#line 758 "globals.m"
    MR_bool libs__globals__succeeded;
#line 758 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 758 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 695 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)));
#line 695 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 695 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)));
#line 695 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 695 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 695 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 695 "globals.m"
    MR_Word libs__globals__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)));
#line 695 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 754 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 762 "globals.m"
    MR_Word libs__globals__Bool_8;

#line 754 "globals.m"
    {
#line 754 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 754 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 760 "globals.m"
    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 1)));
#line 760 "globals.m"
    if (libs__globals__succeeded)
#line 760 "globals.m"
      {
#line 760 "globals.m"
        libs__globals__Bool_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__OptionData_7, (MR_Integer) 0)));
#line 761 "globals.m"
        *libs__globals__Value_6 = libs__globals__Bool_8;
#line 760 "globals.m"
      }
#line 760 "globals.m"
    else
#line 763 "globals.m"
      {
#line 763 "globals.m"
        {
#line 763 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_bool_option\'/3", (MR_String) "invalid bool option");
#line 763 "globals.m"
          return;
        }
#line 763 "globals.m"
      }
#line 758 "globals.m"
  }
#line 298 "globals.m"
}

#line 295 "globals.m"
void MR_CALL 
libs__globals__lookup_option_3_p_0(
#line 295 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 295 "globals.m"
  MR_Word libs__globals__Option_5,
#line 295 "globals.m"
  MR_Word * libs__globals__OptionData_6)
#line 295 "globals.m"
{
#line 752 "globals.m"
  {
#line 752 "globals.m"
    MR_bool libs__globals__succeeded;
#line 752 "globals.m"
    MR_Word libs__globals__OptionTable_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 695 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)));
#line 695 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 695 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)));
#line 695 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 695 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 695 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 695 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)));
#line 695 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 754 "globals.m"
    MR_Box libs__globals__conv0_OptionData_6;

#line 754 "globals.m"
    {
#line 754 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_7, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_6);
    }
#line 754 "globals.m"
    *libs__globals__OptionData_6 = ((MR_Word) libs__globals__conv0_OptionData_6);
#line 752 "globals.m"
  }
#line 295 "globals.m"
}

#line 292 "globals.m"
void MR_CALL 
libs__globals__set_file_install_cmd_3_p_0(
#line 292 "globals.m"
  MR_Word libs__globals__FileInstallCmd_4,
#line 292 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 292 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 292 "globals.m"
{
#line 750 "globals.m"
  {
#line 750 "globals.m"
    MR_bool libs__globals__succeeded;
#line 750 "globals.m"
    MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
#line 750 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 750 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 750 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 750 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 750 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 750 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 750 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)));
#line 750 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 750 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 750 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)));
#line 750 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
#line 750 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
#line 750 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
#line 750 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 750 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 750 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 750 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
#line 750 "globals.m"
    MR_Word libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)));

#line 750 "globals.m"
    {
#line 750 "globals.m"
      MR_Word base;
#line 750 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 750 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
#line 750 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__V_9_9));
#line 750 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_10_10 | ((((libs__globals__V_11_11 << (MR_Integer) 2)) | ((((libs__globals__V_12_12 << (MR_Integer) 5)) | ((((libs__globals__V_13_13 << (MR_Integer) 7)) | ((((libs__globals__V_14_14 << (MR_Integer) 9)) | ((libs__globals__V_15_15 << (MR_Integer) 11)))))))))))));
#line 750 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_16_16));
#line 750 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__V_17_17 | ((libs__globals__V_18_18 << (MR_Integer) 2)))));
#line 750 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__V_19_19));
#line 750 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_20_20));
#line 750 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_21_21));
#line 750 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_22_22));
#line 750 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((libs__globals__V_23_23 | ((((libs__globals__V_24_24 << (MR_Integer) 3)) | ((libs__globals__V_25_25 << (MR_Integer) 6)))))));
#line 750 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (libs__globals__FileInstallCmd_4));
#line 750 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_27_27));
#line 750 "globals.m"
    }
#line 750 "globals.m"
  }
#line 292 "globals.m"
}

#line 290 "globals.m"
void MR_CALL 
libs__globals__set_maybe_feedback_info_3_p_0(
#line 290 "globals.m"
  MR_Word libs__globals__MaybeFeedback_4,
#line 290 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 290 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 290 "globals.m"
{
#line 747 "globals.m"
  {
#line 747 "globals.m"
    MR_bool libs__globals__succeeded;
#line 747 "globals.m"
    MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
#line 747 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 747 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 747 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 747 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 747 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 747 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 747 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)));
#line 747 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 747 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 747 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)));
#line 747 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
#line 747 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
#line 747 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 747 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 747 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 747 "globals.m"
    MR_Word libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)));
#line 747 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
#line 747 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));

#line 747 "globals.m"
    {
#line 747 "globals.m"
      MR_Word base;
#line 747 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 747 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
#line 747 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__V_9_9));
#line 747 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_10_10 | ((((libs__globals__V_11_11 << (MR_Integer) 2)) | ((((libs__globals__V_12_12 << (MR_Integer) 5)) | ((((libs__globals__V_13_13 << (MR_Integer) 7)) | ((((libs__globals__V_14_14 << (MR_Integer) 9)) | ((libs__globals__V_15_15 << (MR_Integer) 11)))))))))))));
#line 747 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_16_16));
#line 747 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__V_17_17 | ((libs__globals__V_18_18 << (MR_Integer) 2)))));
#line 747 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__V_19_19));
#line 747 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_20_20));
#line 747 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_21_21));
#line 747 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__MaybeFeedback_4));
#line 747 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((libs__globals__V_23_23 | ((((libs__globals__V_24_24 << (MR_Integer) 3)) | ((libs__globals__V_25_25 << (MR_Integer) 6)))))));
#line 747 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (libs__globals__V_26_26));
#line 747 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_27_27));
#line 747 "globals.m"
    }
#line 747 "globals.m"
  }
#line 290 "globals.m"
}

#line 288 "globals.m"
void MR_CALL 
libs__globals__set_ssdb_trace_level_3_p_0(
#line 288 "globals.m"
  MR_Word libs__globals__SSTraceLevel_4,
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
    MR_Word libs__globals__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 744 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 744 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 744 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 744 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 744 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 744 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)));
#line 744 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 744 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)));
#line 744 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
#line 744 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
#line 744 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
#line 744 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 744 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 744 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 744 "globals.m"
    MR_Word libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)));
#line 744 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
#line 744 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) & (MR_Integer) 3);

#line 744 "globals.m"
    {
#line 744 "globals.m"
      MR_Word base;
#line 744 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 744 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
#line 744 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__V_9_9));
#line 744 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_10_10 | ((((libs__globals__V_11_11 << (MR_Integer) 2)) | ((((libs__globals__V_12_12 << (MR_Integer) 5)) | ((((libs__globals__V_13_13 << (MR_Integer) 7)) | ((((libs__globals__V_14_14 << (MR_Integer) 9)) | ((libs__globals__V_15_15 << (MR_Integer) 11)))))))))))));
#line 744 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_16_16));
#line 744 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__SSTraceLevel_4 | ((libs__globals__V_18_18 << (MR_Integer) 2)))));
#line 744 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__V_19_19));
#line 744 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_20_20));
#line 744 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_21_21));
#line 744 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_22_22));
#line 744 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((libs__globals__V_23_23 | ((((libs__globals__V_24_24 << (MR_Integer) 3)) | ((libs__globals__V_25_25 << (MR_Integer) 6)))))));
#line 744 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (libs__globals__V_26_26));
#line 744 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_27_27));
#line 744 "globals.m"
    }
#line 744 "globals.m"
  }
#line 288 "globals.m"
}

#line 287 "globals.m"
void MR_CALL 
libs__globals__set_trace_level_none_2_p_0(
#line 287 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_4,
#line 287 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_5)
#line 287 "globals.m"
{
#line 740 "globals.m"
  {
#line 740 "globals.m"
    MR_bool libs__globals__succeeded;
#line 740 "globals.m"
    MR_Word libs__globals__V_7_7;
#line 741 "globals.m"
    MR_Word libs__globals__V_8_8;
#line 741 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 741 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 741 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 741 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 741 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 741 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 741 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 741 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 741 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 741 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 741 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 741 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 741 "globals.m"
    MR_Word libs__globals__V_22_22;
#line 741 "globals.m"
    MR_Word libs__globals__V_23_23;
#line 741 "globals.m"
    MR_Word libs__globals__V_24_24;
#line 741 "globals.m"
    MR_Word libs__globals__V_25_25;
#line 741 "globals.m"
    MR_Word libs__globals__V_26_26;
#line 741 "globals.m"
    MR_Word libs__globals__V_14_14;

#line 741 "globals.m"
    {
#line 741 "globals.m"
      libs__globals__V_7_7 = libs__trace_params__trace_level_none_0_f_0();
    }
#line 741 "globals.m"
    libs__globals__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 0)));
#line 741 "globals.m"
    libs__globals__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 741 "globals.m"
    libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 741 "globals.m"
    libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 741 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 741 "globals.m"
    libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 741 "globals.m"
    libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 741 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 2)));
#line 741 "globals.m"
    libs__globals__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 741 "globals.m"
    libs__globals__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 741 "globals.m"
    libs__globals__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 4)));
#line 741 "globals.m"
    libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 5)));
#line 741 "globals.m"
    libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 6)));
#line 741 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 7)));
#line 741 "globals.m"
    libs__globals__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 741 "globals.m"
    libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 741 "globals.m"
    libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 741 "globals.m"
    libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 9)));
#line 741 "globals.m"
    libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 10)));
#line 741 "globals.m"
    {
#line 741 "globals.m"
      MR_Word base;
#line 741 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 741 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_5 = base;
#line 741 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__V_8_8));
#line 741 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_9_9 | ((((libs__globals__V_10_10 << (MR_Integer) 2)) | ((((libs__globals__V_11_11 << (MR_Integer) 5)) | ((((libs__globals__V_12_12 << (MR_Integer) 7)) | ((((libs__globals__V_13_13 << (MR_Integer) 9)) | ((libs__globals__V_7_7 << (MR_Integer) 11)))))))))))));
#line 741 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_15_15));
#line 741 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__V_16_16 | ((libs__globals__V_17_17 << (MR_Integer) 2)))));
#line 741 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__V_18_18));
#line 741 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_19_19));
#line 741 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_20_20));
#line 741 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_21_21));
#line 741 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((libs__globals__V_22_22 | ((((libs__globals__V_23_23 << (MR_Integer) 3)) | ((libs__globals__V_24_24 << (MR_Integer) 6)))))));
#line 741 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (libs__globals__V_25_25));
#line 741 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_26_26));
#line 741 "globals.m"
    }
#line 740 "globals.m"
  }
#line 287 "globals.m"
}

#line 286 "globals.m"
void MR_CALL 
libs__globals__set_trace_level_3_p_0(
#line 286 "globals.m"
  MR_Word libs__globals__TraceLevel_4,
#line 286 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 286 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 286 "globals.m"
{
#line 739 "globals.m"
  {
#line 739 "globals.m"
    MR_bool libs__globals__succeeded;
#line 739 "globals.m"
    MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
#line 739 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 739 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 739 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 739 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 739 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 739 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)));
#line 739 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 739 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 739 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)));
#line 739 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
#line 739 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
#line 739 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
#line 739 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 739 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 739 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 739 "globals.m"
    MR_Word libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)));
#line 739 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
#line 739 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);

#line 739 "globals.m"
    {
#line 739 "globals.m"
      MR_Word base;
#line 739 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 739 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
#line 739 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__V_9_9));
#line 739 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_10_10 | ((((libs__globals__V_11_11 << (MR_Integer) 2)) | ((((libs__globals__V_12_12 << (MR_Integer) 5)) | ((((libs__globals__V_13_13 << (MR_Integer) 7)) | ((((libs__globals__V_14_14 << (MR_Integer) 9)) | ((libs__globals__TraceLevel_4 << (MR_Integer) 11)))))))))))));
#line 739 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_16_16));
#line 739 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__V_17_17 | ((libs__globals__V_18_18 << (MR_Integer) 2)))));
#line 739 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__V_19_19));
#line 739 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_20_20));
#line 739 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_21_21));
#line 739 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_22_22));
#line 739 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((libs__globals__V_23_23 | ((((libs__globals__V_24_24 << (MR_Integer) 3)) | ((libs__globals__V_25_25 << (MR_Integer) 6)))))));
#line 739 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (libs__globals__V_26_26));
#line 739 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_27_27));
#line 739 "globals.m"
    }
#line 739 "globals.m"
  }
#line 286 "globals.m"
}

#line 285 "globals.m"
void MR_CALL 
libs__globals__set_tags_method_3_p_0(
#line 285 "globals.m"
  MR_Word libs__globals__Tags_Method_4,
#line 285 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 285 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 285 "globals.m"
{
#line 736 "globals.m"
  {
#line 736 "globals.m"
    MR_bool libs__globals__succeeded;
#line 736 "globals.m"
    MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
#line 736 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 736 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 736 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 736 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 736 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 736 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)));
#line 736 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 736 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 736 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)));
#line 736 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
#line 736 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
#line 736 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
#line 736 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 736 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 736 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 736 "globals.m"
    MR_Word libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)));
#line 736 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
#line 736 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);

#line 736 "globals.m"
    {
#line 736 "globals.m"
      MR_Word base;
#line 736 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 736 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
#line 736 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__V_9_9));
#line 736 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_10_10 | ((((libs__globals__V_11_11 << (MR_Integer) 2)) | ((((libs__globals__Tags_Method_4 << (MR_Integer) 5)) | ((((libs__globals__V_13_13 << (MR_Integer) 7)) | ((((libs__globals__V_14_14 << (MR_Integer) 9)) | ((libs__globals__V_15_15 << (MR_Integer) 11)))))))))))));
#line 736 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_16_16));
#line 736 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__V_17_17 | ((libs__globals__V_18_18 << (MR_Integer) 2)))));
#line 736 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__V_19_19));
#line 736 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_20_20));
#line 736 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_21_21));
#line 736 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_22_22));
#line 736 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((libs__globals__V_23_23 | ((((libs__globals__V_24_24 << (MR_Integer) 3)) | ((libs__globals__V_25_25 << (MR_Integer) 6)))))));
#line 736 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (libs__globals__V_26_26));
#line 736 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_27_27));
#line 736 "globals.m"
    }
#line 736 "globals.m"
  }
#line 285 "globals.m"
}

#line 284 "globals.m"
void MR_CALL 
libs__globals__set_gc_method_3_p_0(
#line 284 "globals.m"
  MR_Word libs__globals__GC_Method_4,
#line 284 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 284 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 284 "globals.m"
{
#line 733 "globals.m"
  {
#line 733 "globals.m"
    MR_bool libs__globals__succeeded;
#line 733 "globals.m"
    MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
#line 733 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 733 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 733 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 733 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 733 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 733 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)));
#line 733 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 733 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 733 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)));
#line 733 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
#line 733 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
#line 733 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
#line 733 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 733 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 733 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 733 "globals.m"
    MR_Word libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)));
#line 733 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
#line 733 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);

#line 733 "globals.m"
    {
#line 733 "globals.m"
      MR_Word base;
#line 733 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 733 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__V_9_9));
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_10_10 | ((((libs__globals__GC_Method_4 << (MR_Integer) 2)) | ((((libs__globals__V_12_12 << (MR_Integer) 5)) | ((((libs__globals__V_13_13 << (MR_Integer) 7)) | ((((libs__globals__V_14_14 << (MR_Integer) 9)) | ((libs__globals__V_15_15 << (MR_Integer) 11)))))))))))));
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_16_16));
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__V_17_17 | ((libs__globals__V_18_18 << (MR_Integer) 2)))));
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__V_19_19));
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_20_20));
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_21_21));
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_22_22));
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((libs__globals__V_23_23 | ((((libs__globals__V_24_24 << (MR_Integer) 3)) | ((libs__globals__V_25_25 << (MR_Integer) 6)))))));
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (libs__globals__V_26_26));
#line 733 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_27_27));
#line 733 "globals.m"
    }
#line 733 "globals.m"
  }
#line 284 "globals.m"
}

#line 283 "globals.m"
void MR_CALL 
libs__globals__set_options_3_p_0(
#line 283 "globals.m"
  MR_Word libs__globals__Options_4,
#line 283 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 283 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 283 "globals.m"
{
#line 725 "globals.m"
  {
#line 725 "globals.m"
    MR_bool libs__globals__succeeded;
#line 725 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 725 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 725 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 725 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 725 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 725 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 725 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)));
#line 725 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 725 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 725 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)));
#line 725 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
#line 725 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
#line 725 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
#line 725 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 725 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 725 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 725 "globals.m"
    MR_Word libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)));
#line 725 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
#line 725 "globals.m"
    MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));

#line 725 "globals.m"
    {
#line 725 "globals.m"
      MR_Word base;
#line 725 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 725 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
#line 725 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__Options_4));
#line 725 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_10_10 | ((((libs__globals__V_11_11 << (MR_Integer) 2)) | ((((libs__globals__V_12_12 << (MR_Integer) 5)) | ((((libs__globals__V_13_13 << (MR_Integer) 7)) | ((((libs__globals__V_14_14 << (MR_Integer) 9)) | ((libs__globals__V_15_15 << (MR_Integer) 11)))))))))))));
#line 725 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_16_16));
#line 725 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__V_17_17 | ((libs__globals__V_18_18 << (MR_Integer) 2)))));
#line 725 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__V_19_19));
#line 725 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_20_20));
#line 725 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_21_21));
#line 725 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_22_22));
#line 725 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((libs__globals__V_23_23 | ((((libs__globals__V_24_24 << (MR_Integer) 3)) | ((libs__globals__V_25_25 << (MR_Integer) 6)))))));
#line 725 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (libs__globals__V_26_26));
#line 725 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_27_27));
#line 725 "globals.m"
    }
#line 725 "globals.m"
  }
#line 283 "globals.m"
}

#line 281 "globals.m"
void MR_CALL 
libs__globals__set_option_4_p_0(
#line 281 "globals.m"
  MR_Word libs__globals__Option_5,
#line 281 "globals.m"
  MR_Word libs__globals__OptionData_6,
#line 281 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_10,
#line 281 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_11)
#line 281 "globals.m"
{
#line 727 "globals.m"
  {
#line 727 "globals.m"
    MR_bool libs__globals__succeeded;
#line 727 "globals.m"
    MR_Word libs__globals__OptionTable0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 0)));
#line 727 "globals.m"
    MR_Word libs__globals__OptionTable_9;
#line 695 "globals.m"
    MR_Word libs__globals__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)));
#line 695 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 695 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 695 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 4)));
#line 695 "globals.m"
    MR_Word libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 5)));
#line 695 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 6)));
#line 695 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 7)));
#line 695 "globals.m"
    MR_Word libs__globals__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 695 "globals.m"
    MR_Word libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)));
#line 695 "globals.m"
    MR_Word libs__globals__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 10)));
#line 725 "globals.m"
    MR_Word libs__globals__V_40_40;
#line 725 "globals.m"
    MR_Word libs__globals__V_41_41;
#line 725 "globals.m"
    MR_Word libs__globals__V_42_42;
#line 725 "globals.m"
    MR_Word libs__globals__V_43_43;
#line 725 "globals.m"
    MR_Word libs__globals__V_44_44;
#line 725 "globals.m"
    MR_Word libs__globals__V_45_45;
#line 725 "globals.m"
    MR_Word libs__globals__V_46_46;
#line 725 "globals.m"
    MR_Word libs__globals__V_47_47;
#line 725 "globals.m"
    MR_Word libs__globals__V_48_48;
#line 725 "globals.m"
    MR_Word libs__globals__V_49_49;
#line 725 "globals.m"
    MR_Word libs__globals__V_50_50;
#line 725 "globals.m"
    MR_Word libs__globals__V_51_51;
#line 725 "globals.m"
    MR_Word libs__globals__V_52_52;
#line 725 "globals.m"
    MR_Word libs__globals__V_53_53;
#line 725 "globals.m"
    MR_Word libs__globals__V_54_54;
#line 725 "globals.m"
    MR_Word libs__globals__V_55_55;
#line 725 "globals.m"
    MR_Word libs__globals__V_56_56;
#line 725 "globals.m"
    MR_Word libs__globals__V_57_57;
#line 725 "globals.m"
    MR_Word libs__globals__V_39_39;

#line 729 "globals.m"
    {
#line 729 "globals.m"
      mercury__map__set_4_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (libs__globals__Option_5)), ((MR_Box) (libs__globals__OptionData_6)), libs__globals__OptionTable0_8, &libs__globals__OptionTable_9);
    }
#line 725 "globals.m"
    libs__globals__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 0)));
#line 725 "globals.m"
    libs__globals__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 725 "globals.m"
    libs__globals__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 725 "globals.m"
    libs__globals__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 725 "globals.m"
    libs__globals__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 725 "globals.m"
    libs__globals__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 725 "globals.m"
    libs__globals__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 725 "globals.m"
    libs__globals__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)));
#line 725 "globals.m"
    libs__globals__V_47_47 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 725 "globals.m"
    libs__globals__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 725 "globals.m"
    libs__globals__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 4)));
#line 725 "globals.m"
    libs__globals__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 5)));
#line 725 "globals.m"
    libs__globals__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 6)));
#line 725 "globals.m"
    libs__globals__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 7)));
#line 725 "globals.m"
    libs__globals__V_53_53 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 725 "globals.m"
    libs__globals__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 725 "globals.m"
    libs__globals__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 725 "globals.m"
    libs__globals__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)));
#line 725 "globals.m"
    libs__globals__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 10)));
#line 725 "globals.m"
    {
#line 725 "globals.m"
      MR_Word base;
#line 725 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 725 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_11 = base;
#line 725 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__OptionTable_9));
#line 725 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_40_40 | ((((libs__globals__V_41_41 << (MR_Integer) 2)) | ((((libs__globals__V_42_42 << (MR_Integer) 5)) | ((((libs__globals__V_43_43 << (MR_Integer) 7)) | ((((libs__globals__V_44_44 << (MR_Integer) 9)) | ((libs__globals__V_45_45 << (MR_Integer) 11)))))))))))));
#line 725 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_46_46));
#line 725 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__V_47_47 | ((libs__globals__V_48_48 << (MR_Integer) 2)))));
#line 725 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__V_49_49));
#line 725 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_50_50));
#line 725 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_51_51));
#line 725 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_52_52));
#line 725 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((libs__globals__V_53_53 | ((((libs__globals__V_54_54 << (MR_Integer) 3)) | ((libs__globals__V_55_55 << (MR_Integer) 6)))))));
#line 725 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (libs__globals__V_56_56));
#line 725 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_57_57));
#line 725 "globals.m"
    }
#line 727 "globals.m"
  }
#line 281 "globals.m"
}

#line 278 "globals.m"
void MR_CALL 
libs__globals__get_limit_error_contexts_map_2_p_0(
#line 278 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 278 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 278 "globals.m"
{
#line 713 "globals.m"
  {
#line 713 "globals.m"
    MR_bool libs__globals__succeeded;
#line 713 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 713 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 713 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 713 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 713 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 713 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 713 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 713 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 713 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 713 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 713 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 713 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 713 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 713 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 713 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 713 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 713 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 713 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)));

#line 713 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 713 "globals.m"
  }
#line 278 "globals.m"
}

#line 277 "globals.m"
void MR_CALL 
libs__globals__get_file_install_cmd_2_p_0(
#line 277 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 277 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 277 "globals.m"
{
#line 712 "globals.m"
  {
#line 712 "globals.m"
    MR_bool libs__globals__succeeded;
#line 712 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 712 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 712 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 712 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 712 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 712 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 712 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 712 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 712 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 712 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 712 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 712 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 712 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 712 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 712 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 712 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 712 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 712 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 712 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)));
#line 712 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 712 "globals.m"
  }
#line 277 "globals.m"
}

#line 276 "globals.m"
void MR_CALL 
libs__globals__get_target_env_type_2_p_0(
#line 276 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 276 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 276 "globals.m"
{
#line 711 "globals.m"
  {
#line 711 "globals.m"
    MR_bool libs__globals__succeeded;
#line 711 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 711 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 711 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 711 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 711 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 711 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 711 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 711 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 711 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 711 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 711 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 711 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 711 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 711 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 711 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 711 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 711 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 711 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 711 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 711 "globals.m"
    libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)));
#line 711 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 711 "globals.m"
  }
#line 276 "globals.m"
}

#line 275 "globals.m"
void MR_CALL 
libs__globals__get_system_env_type_2_p_0(
#line 275 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 275 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 275 "globals.m"
{
#line 710 "globals.m"
  {
#line 710 "globals.m"
    MR_bool libs__globals__succeeded;
#line 710 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 710 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 710 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 710 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 710 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 710 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 710 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 710 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 710 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 710 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 710 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 710 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 710 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 710 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 710 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 710 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 710 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 710 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 710 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 710 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 710 "globals.m"
    libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)));
#line 710 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 710 "globals.m"
  }
#line 275 "globals.m"
}

#line 274 "globals.m"
void MR_CALL 
libs__globals__get_host_env_type_2_p_0(
#line 274 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 274 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 274 "globals.m"
{
#line 709 "globals.m"
  {
#line 709 "globals.m"
    MR_bool libs__globals__succeeded;
#line 709 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 709 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 709 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 709 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 709 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 709 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 709 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 709 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 709 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 709 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 709 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 709 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 709 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 709 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 709 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 709 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 709 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 709 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 709 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 709 "globals.m"
    libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 709 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 709 "globals.m"
    libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)));
#line 709 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 709 "globals.m"
  }
#line 274 "globals.m"
}

#line 273 "globals.m"
void MR_CALL 
libs__globals__get_maybe_feedback_info_2_p_0(
#line 273 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 273 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 273 "globals.m"
{
#line 708 "globals.m"
  {
#line 708 "globals.m"
    MR_bool libs__globals__succeeded;
#line 708 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 708 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 708 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 708 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 708 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 708 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 708 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 708 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 708 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 708 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 708 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 708 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 708 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
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
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 708 "globals.m"
    libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 708 "globals.m"
    libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 708 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 708 "globals.m"
    libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)));
#line 708 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 708 "globals.m"
  }
#line 273 "globals.m"
}

#line 272 "globals.m"
void MR_CALL 
libs__globals__get_reuse_strategy_2_p_0(
#line 272 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 272 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 272 "globals.m"
{
#line 707 "globals.m"
  {
#line 707 "globals.m"
    MR_bool libs__globals__succeeded;
#line 707 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 707 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 707 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 707 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 707 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 707 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 707 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
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
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 707 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 707 "globals.m"
    libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 707 "globals.m"
    libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 707 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 707 "globals.m"
    libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)));
#line 707 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 707 "globals.m"
  }
#line 272 "globals.m"
}

#line 270 "globals.m"
void MR_CALL 
libs__globals__get_csharp_compiler_type_2_p_0(
#line 270 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 270 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 270 "globals.m"
{
#line 706 "globals.m"
  {
#line 706 "globals.m"
    MR_bool libs__globals__succeeded;
#line 706 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 706 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 706 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 706 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 706 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 706 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 706 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 706 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 706 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 706 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 706 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 706 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 706 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 706 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 706 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 706 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 706 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 706 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 706 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 706 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 706 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 706 "globals.m"
    libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 706 "globals.m"
    libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 706 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 706 "globals.m"
    libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)));
#line 706 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 706 "globals.m"
  }
#line 270 "globals.m"
}

#line 269 "globals.m"
void MR_CALL 
libs__globals__get_c_compiler_type_2_p_0(
#line 269 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 269 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 269 "globals.m"
{
#line 705 "globals.m"
  {
#line 705 "globals.m"
    MR_bool libs__globals__succeeded;
#line 705 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 705 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 705 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 705 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 705 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 705 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 705 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 705 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 705 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 705 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 705 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 705 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 705 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 705 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 705 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 705 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 705 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 705 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 705 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 705 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 705 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 705 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 705 "globals.m"
    libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 705 "globals.m"
    libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 705 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 705 "globals.m"
    libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)));
#line 705 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 705 "globals.m"
  }
#line 269 "globals.m"
}

#line 268 "globals.m"
void MR_CALL 
libs__globals__get_maybe_thread_safe_2_p_0(
#line 268 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 268 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 268 "globals.m"
{
#line 704 "globals.m"
  {
#line 704 "globals.m"
    MR_bool libs__globals__succeeded;
#line 704 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 704 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 704 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 704 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 704 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 704 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 704 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 704 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 704 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 704 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 704 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 704 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 704 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 704 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 704 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 704 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 704 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 704 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 704 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 704 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 704 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 704 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 704 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 704 "globals.m"
    libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 704 "globals.m"
    libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 704 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 704 "globals.m"
    libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)));
#line 704 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 704 "globals.m"
  }
#line 268 "globals.m"
}

#line 267 "globals.m"
void MR_CALL 
libs__globals__get_ssdb_trace_level_2_p_0(
#line 267 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 267 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 267 "globals.m"
{
#line 703 "globals.m"
  {
#line 703 "globals.m"
    MR_bool libs__globals__succeeded;
#line 703 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 703 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 703 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 703 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 703 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 703 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 703 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 703 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 703 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 703 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 703 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 703 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 703 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 703 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 703 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 703 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 703 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 703 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 703 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 703 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 703 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 703 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 703 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 703 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 703 "globals.m"
    libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 703 "globals.m"
    libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 703 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 703 "globals.m"
    libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)));
#line 703 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 703 "globals.m"
  }
#line 267 "globals.m"
}

#line 266 "globals.m"
void MR_CALL 
libs__globals__get_trace_suppress_2_p_0(
#line 266 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 266 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 266 "globals.m"
{
#line 702 "globals.m"
  {
#line 702 "globals.m"
    MR_bool libs__globals__succeeded;
#line 702 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 702 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 702 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 702 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 702 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 702 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 702 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 702 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 702 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 702 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 702 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 702 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 702 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 702 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 702 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 702 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 702 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 702 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 702 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 702 "globals.m"
    libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 702 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 702 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 702 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 702 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 702 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 702 "globals.m"
    libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 702 "globals.m"
    libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 702 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 702 "globals.m"
    libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)));
#line 702 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 702 "globals.m"
  }
#line 266 "globals.m"
}

#line 265 "globals.m"
void MR_CALL 
libs__globals__get_trace_level_2_p_0(
#line 265 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 265 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 265 "globals.m"
{
#line 701 "globals.m"
  {
#line 701 "globals.m"
    MR_bool libs__globals__succeeded;
#line 701 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 701 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 701 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 701 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 701 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 701 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 701 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 701 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 701 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 701 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 701 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 701 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 701 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 701 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 701 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 701 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 701 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 701 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 701 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 701 "globals.m"
    libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 701 "globals.m"
    libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 701 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 701 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 701 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 701 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 701 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 701 "globals.m"
    libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 701 "globals.m"
    libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 701 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 701 "globals.m"
    libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)));
#line 701 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 701 "globals.m"
  }
#line 265 "globals.m"
}

#line 264 "globals.m"
void MR_CALL 
libs__globals__get_termination2_norm_2_p_0(
#line 264 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 264 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 264 "globals.m"
{
#line 700 "globals.m"
  {
#line 700 "globals.m"
    MR_bool libs__globals__succeeded;
#line 700 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 700 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 700 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 700 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 700 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 700 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 700 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 700 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 700 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 700 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 700 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 700 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 700 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 700 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 700 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 700 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 700 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 700 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 700 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 700 "globals.m"
    libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 700 "globals.m"
    libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 700 "globals.m"
    libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 700 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 700 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 700 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 700 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 700 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 700 "globals.m"
    libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 700 "globals.m"
    libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 700 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 700 "globals.m"
    libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)));
#line 700 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 700 "globals.m"
  }
#line 264 "globals.m"
}

#line 263 "globals.m"
void MR_CALL 
libs__globals__get_termination_norm_2_p_0(
#line 263 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 263 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 263 "globals.m"
{
#line 699 "globals.m"
  {
#line 699 "globals.m"
    MR_bool libs__globals__succeeded;
#line 699 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 699 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 699 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 699 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 699 "globals.m"
    MR_Word libs__globals__V_8_8;
#line 699 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 699 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 699 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 699 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 699 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 699 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 699 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 699 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 699 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 699 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 699 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 699 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 699 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 699 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 699 "globals.m"
    libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 699 "globals.m"
    libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 699 "globals.m"
    libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 699 "globals.m"
    libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 699 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 699 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 699 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 699 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 699 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 699 "globals.m"
    libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 699 "globals.m"
    libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 699 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 699 "globals.m"
    libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)));
#line 699 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 699 "globals.m"
  }
#line 263 "globals.m"
}

#line 262 "globals.m"
void MR_CALL 
libs__globals__get_tags_method_2_p_0(
#line 262 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 262 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 262 "globals.m"
{
#line 698 "globals.m"
  {
#line 698 "globals.m"
    MR_bool libs__globals__succeeded;
#line 698 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 698 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 698 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 698 "globals.m"
    MR_Word libs__globals__V_7_7;
#line 698 "globals.m"
    MR_Word libs__globals__V_8_8;
#line 698 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 698 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 698 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 698 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 698 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 698 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 698 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 698 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 698 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 698 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 698 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 698 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 698 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 698 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 698 "globals.m"
    libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 698 "globals.m"
    libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 698 "globals.m"
    libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 698 "globals.m"
    libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 698 "globals.m"
    libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 698 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 698 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 698 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 698 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 698 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 698 "globals.m"
    libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 698 "globals.m"
    libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 698 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 698 "globals.m"
    libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)));
#line 698 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 698 "globals.m"
  }
#line 262 "globals.m"
}

#line 261 "globals.m"
void MR_CALL 
libs__globals__get_gc_method_2_p_0(
#line 261 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 261 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 261 "globals.m"
{
#line 697 "globals.m"
  {
#line 697 "globals.m"
    MR_bool libs__globals__succeeded;
#line 697 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 697 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 697 "globals.m"
    MR_Word libs__globals__V_6_6;
#line 697 "globals.m"
    MR_Word libs__globals__V_7_7;
#line 697 "globals.m"
    MR_Word libs__globals__V_8_8;
#line 697 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 697 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 697 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 697 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 697 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 697 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 697 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 697 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 697 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 697 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 697 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 697 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 697 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 697 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 697 "globals.m"
    libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 697 "globals.m"
    libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 697 "globals.m"
    libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 697 "globals.m"
    libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 697 "globals.m"
    libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 697 "globals.m"
    libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 697 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 697 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 697 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 697 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 697 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 697 "globals.m"
    libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 697 "globals.m"
    libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 697 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 697 "globals.m"
    libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)));
#line 697 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 697 "globals.m"
  }
#line 261 "globals.m"
}

#line 717 "globals.m"
static MR_Box MR_CALL 
libs__globals__get_backend_foreign_languages_2_p_0_1(
#line 717 "globals.m"
  MR_Box libs__globals__closure_arg,
#line 717 "globals.m"
  MR_Box libs__globals__wrapper_arg_1)
#line 717 "globals.m"
{
#line 717 "globals.m"
  {
#line 717 "globals.m"
    MR_Box libs__globals__wrapper_arg_2;
#line 717 "globals.m"
    MR_Box libs__globals__closure = libs__globals__closure_arg;
#line 717 "globals.m"
    MR_Word libs__globals__conv0_HeadVar__2_12;

#line 717 "globals.m"
    {
#line 717 "globals.m"
      libs__globals__conv0_HeadVar__2_12 = libs__globals__IntroducedFrom__func__get_backend_foreign_languages__720__1_1_f_0(((MR_String) libs__globals__wrapper_arg_1));
    }
#line 717 "globals.m"
    libs__globals__wrapper_arg_2 = ((MR_Box) (libs__globals__conv0_HeadVar__2_12));
#line 717 "globals.m"
    return libs__globals__wrapper_arg_2;
#line 717 "globals.m"
  }
#line 717 "globals.m"
}

#line 259 "globals.m"
void MR_CALL 
libs__globals__get_backend_foreign_languages_2_p_0(
#line 259 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 259 "globals.m"
  MR_Word * libs__globals__ForeignLangs_4)
#line 259 "globals.m"
{
#line 715 "globals.m"
  {
#line 715 "globals.m"
    MR_bool libs__globals__succeeded;
#line 715 "globals.m"
    MR_Word libs__globals__LangStrs_5;

#line 716 "globals.m"
    {
#line 716 "globals.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 258, &libs__globals__LangStrs_5);
    }
#line 717 "globals.m"
    {
#line 717 "globals.m"
      *libs__globals__ForeignLangs_4 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &libs__globals_scalar_common_2[5], libs__globals__LangStrs_5);
    }
#line 715 "globals.m"
  }
#line 259 "globals.m"
}

#line 258 "globals.m"
void MR_CALL 
libs__globals__get_target_2_p_0(
#line 258 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 258 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 258 "globals.m"
{
#line 696 "globals.m"
  {
#line 696 "globals.m"
    MR_bool libs__globals__succeeded;
#line 696 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 696 "globals.m"
    MR_Word libs__globals__V_5_5;
#line 696 "globals.m"
    MR_Word libs__globals__V_6_6;
#line 696 "globals.m"
    MR_Word libs__globals__V_7_7;
#line 696 "globals.m"
    MR_Word libs__globals__V_8_8;
#line 696 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 696 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 696 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 696 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 696 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 696 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 696 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 696 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 696 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 696 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 696 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 696 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 696 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 696 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 696 "globals.m"
    libs__globals__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 696 "globals.m"
    libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 696 "globals.m"
    libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 696 "globals.m"
    libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 696 "globals.m"
    libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 696 "globals.m"
    libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 696 "globals.m"
    libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 696 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 696 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 696 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 696 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 696 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 696 "globals.m"
    libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 696 "globals.m"
    libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 696 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 696 "globals.m"
    libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)));
#line 696 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 696 "globals.m"
  }
#line 258 "globals.m"
}

#line 257 "globals.m"
void MR_CALL 
libs__globals__get_options_2_p_0(
#line 257 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 257 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 257 "globals.m"
{
#line 695 "globals.m"
  {
#line 695 "globals.m"
    MR_bool libs__globals__succeeded;
#line 695 "globals.m"
    MR_Word libs__globals__V_4_4;
#line 695 "globals.m"
    MR_Word libs__globals__V_5_5;
#line 695 "globals.m"
    MR_Word libs__globals__V_6_6;
#line 695 "globals.m"
    MR_Word libs__globals__V_7_7;
#line 695 "globals.m"
    MR_Word libs__globals__V_8_8;
#line 695 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 695 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 695 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 695 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 695 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 695 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 695 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 695 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 695 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 695 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 695 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 695 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 695 "globals.m"
    MR_Word libs__globals__V_21_21;

#line 695 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 695 "globals.m"
    libs__globals__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 695 "globals.m"
    libs__globals__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 695 "globals.m"
    libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
#line 695 "globals.m"
    libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
#line 695 "globals.m"
    libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
#line 695 "globals.m"
    libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
#line 695 "globals.m"
    libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 695 "globals.m"
    libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 695 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 695 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 695 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 695 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 695 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 695 "globals.m"
    libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) & (MR_Integer) 7);
#line 695 "globals.m"
    libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 695 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 695 "globals.m"
    libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)));
#line 695 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 695 "globals.m"
  }
#line 257 "globals.m"
}

#line 249 "globals.m"
void MR_CALL 
libs__globals__globals_init_20_p_0(
#line 249 "globals.m"
  MR_Word libs__globals__Options_21,
#line 249 "globals.m"
  MR_Word libs__globals__Target_22,
#line 249 "globals.m"
  MR_Word libs__globals__GC_Method_23,
#line 249 "globals.m"
  MR_Word libs__globals__TagsMethod_24,
#line 249 "globals.m"
  MR_Word libs__globals__TerminationNorm_25,
#line 249 "globals.m"
  MR_Word libs__globals__Termination2Norm_26,
#line 249 "globals.m"
  MR_Word libs__globals__TraceLevel_27,
#line 249 "globals.m"
  MR_Word libs__globals__TraceSuppress_28,
#line 249 "globals.m"
  MR_Word libs__globals__SSTraceLevel_29,
#line 249 "globals.m"
  MR_Word libs__globals__MaybeThreadSafe_30,
#line 249 "globals.m"
  MR_Word libs__globals__C_CompilerType_31,
#line 249 "globals.m"
  MR_Word libs__globals__CSharp_CompilerType_32,
#line 249 "globals.m"
  MR_Word libs__globals__ReuseStrategy_33,
#line 249 "globals.m"
  MR_Word libs__globals__MaybeFeedback_34,
#line 249 "globals.m"
  MR_Word libs__globals__HostEnvType_35,
#line 249 "globals.m"
  MR_Word libs__globals__SystemEnvType_36,
#line 249 "globals.m"
  MR_Word libs__globals__TargetEnvType_37,
#line 249 "globals.m"
  MR_Word libs__globals__FileInstallCmd_38,
#line 249 "globals.m"
  MR_Word libs__globals__LimitErrorContextsMap_39,
#line 249 "globals.m"
  MR_Word * libs__globals__Globals_40)
#line 249 "globals.m"
{
#line 689 "globals.m"
  {
#line 689 "globals.m"
    MR_bool libs__globals__succeeded;

#line 689 "globals.m"
    {
#line 689 "globals.m"
      MR_Word base;
#line 689 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 689 "globals.m"
      *libs__globals__Globals_40 = base;
#line 689 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__Options_21));
#line 689 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__Target_22 | ((((libs__globals__GC_Method_23 << (MR_Integer) 2)) | ((((libs__globals__TagsMethod_24 << (MR_Integer) 5)) | ((((libs__globals__TerminationNorm_25 << (MR_Integer) 7)) | ((((libs__globals__Termination2Norm_26 << (MR_Integer) 9)) | ((libs__globals__TraceLevel_27 << (MR_Integer) 11)))))))))))));
#line 689 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__TraceSuppress_28));
#line 689 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__SSTraceLevel_29 | ((libs__globals__MaybeThreadSafe_30 << (MR_Integer) 2)))));
#line 689 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__C_CompilerType_31));
#line 689 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__CSharp_CompilerType_32));
#line 689 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__ReuseStrategy_33));
#line 689 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__MaybeFeedback_34));
#line 689 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((libs__globals__HostEnvType_35 | ((((libs__globals__SystemEnvType_36 << (MR_Integer) 3)) | ((libs__globals__TargetEnvType_37 << (MR_Integer) 6)))))));
#line 689 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (libs__globals__FileInstallCmd_38));
#line 689 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__LimitErrorContextsMap_39));
#line 689 "globals.m"
    }
#line 689 "globals.m"
  }
#line 249 "globals.m"
}

#line 241 "globals.m"
void MR_CALL 
libs__globals__convert_limit_error_contexts_3_p_0(
#line 241 "globals.m"
  MR_Word libs__globals__Options_4,
#line 241 "globals.m"
  MR_Word * libs__globals__BadOptions_5,
#line 241 "globals.m"
  MR_Word * libs__globals__Map_6)
#line 241 "globals.m"
{
#line 562 "globals.m"
  {
#line 562 "globals.m"
    MR_bool libs__globals__succeeded;
#line 562 "globals.m"
    MR_Word libs__globals__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 562 "globals.m"
    MR_Word libs__globals__RevBadOptions_7;
#line 562 "globals.m"
    MR_Word libs__globals__V_9_9;

#line 564 "globals.m"
    {
#line 564 "globals.m"
      libs__globals__V_9_9 = mercury__map__init_0_f_0(libs__globals__TypeCtorInfo_10_10, (MR_Word) &libs__globals_scalar_common_1[0]);
    }
#line 563 "globals.m"
    {
#line 563 "globals.m"
      libs__globals__convert_limit_error_contexts_acc_5_p_0(libs__globals__Options_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__globals__RevBadOptions_7, libs__globals__V_9_9, libs__globals__Map_6);
    }
#line 565 "globals.m"
    {
#line 565 "globals.m"
      mercury__list__reverse_2_p_0(libs__globals__TypeCtorInfo_10_10, libs__globals__RevBadOptions_7, libs__globals__BadOptions_5);
#line 565 "globals.m"
      return;
    }
#line 562 "globals.m"
  }
#line 241 "globals.m"
}

#line 239 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_ssdb_trace_level_3_p_0(
#line 239 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 239 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 239 "globals.m"
  MR_Word * libs__globals__HeadVar__3_3)
#line 239 "globals.m"
{
#line 556 "globals.m"
  {
#line 556 "globals.m"
    MR_bool libs__globals__succeeded;
#line 556 "globals.m"
    MR_Integer libs__globals__lo_0;
#line 556 "globals.m"
    MR_Integer libs__globals__hi_1;
#line 556 "globals.m"
    MR_Integer libs__globals__mid_2;
#line 556 "globals.m"
    MR_Integer libs__globals__result_3;

#line 556 "globals.m"
    /* binary string jump switch */
#line 556 "globals.m"
    libs__globals__lo_0 = (MR_Integer) 0;
#line 556 "globals.m"
    libs__globals__hi_1 = (MR_Integer) 3;
#line 556 "globals.m"
    do
#line 556 "globals.m"
      {
#line 556 "globals.m"
        libs__globals__mid_2 = (((libs__globals__lo_0 + libs__globals__hi_1)) / (MR_Integer) 2);
#line 556 "globals.m"
        libs__globals__result_3 = MR_strcmp(libs__globals__HeadVar__1_1, ((&libs__globals_vector_common_14[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_14_0__vct_14_f_0);
#line 556 "globals.m"
        if ((libs__globals__result_3 == (MR_Integer) 0))
#line 556 "globals.m"
          {
#line 556 "globals.m"
#line 556 "globals.m"
            switch (((&libs__globals_vector_common_14[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_14_0__vct_14_f_1) {
#line 556 "globals.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 556 "globals.m"
              case (MR_Integer) 0:
#line 560 "globals.m"
                {
#line 560 "globals.m"
                  /* case "deep" */
#line 560 "globals.m"
                  *libs__globals__HeadVar__3_3 = (MR_Integer) 2;
#line 560 "globals.m"
                  libs__globals__succeeded = MR_TRUE;
#line 560 "globals.m"
                }
#line 556 "globals.m"
                break;
#line 556 "globals.m"
              case (MR_Integer) 1:
#line 556 "globals.m"
                {
#line 556 "globals.m"
                  /* case "default" */
#line 556 "globals.m"
#line 556 "globals.m"
                  switch (libs__globals__HeadVar__2_2) {
#line 556 "globals.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 556 "globals.m"
                    case (MR_Integer) 0:
#line 557 "globals.m"
                      *libs__globals__HeadVar__3_3 = (MR_Integer) 0;
#line 556 "globals.m"
                      break;
#line 556 "globals.m"
                    case (MR_Integer) 1:
#line 556 "globals.m"
                      *libs__globals__HeadVar__3_3 = (MR_Integer) 2;
#line 556 "globals.m"
                      break;
#line 556 "globals.m"
                  }
#line 556 "globals.m"
                  libs__globals__succeeded = MR_TRUE;
#line 556 "globals.m"
                }
#line 556 "globals.m"
                break;
#line 556 "globals.m"
              case (MR_Integer) 2:
#line 558 "globals.m"
                {
#line 558 "globals.m"
                  /* case "none" */
#line 558 "globals.m"
                  *libs__globals__HeadVar__3_3 = (MR_Integer) 0;
#line 558 "globals.m"
                  libs__globals__succeeded = MR_TRUE;
#line 558 "globals.m"
                }
#line 556 "globals.m"
                break;
#line 556 "globals.m"
              case (MR_Integer) 3:
#line 559 "globals.m"
                {
#line 559 "globals.m"
                  /* case "shallow" */
#line 559 "globals.m"
                  *libs__globals__HeadVar__3_3 = (MR_Integer) 1;
#line 559 "globals.m"
                  libs__globals__succeeded = MR_TRUE;
#line 559 "globals.m"
                }
#line 556 "globals.m"
                break;
#line 556 "globals.m"
            }
#line 556 "globals.m"
            /* jump out of search loop */
#line 556 "globals.m"
            goto label_0;
#line 556 "globals.m"
          }
#line 556 "globals.m"
        else
#line 556 "globals.m"
        if ((libs__globals__result_3 < (MR_Integer) 0))
#line 556 "globals.m"
          libs__globals__hi_1 = (libs__globals__mid_2 - (MR_Integer) 1);
#line 556 "globals.m"
        else
#line 556 "globals.m"
          libs__globals__lo_0 = (libs__globals__mid_2 + (MR_Integer) 1);
#line 556 "globals.m"
      }
#line 556 "globals.m"
    while ((libs__globals__lo_0 <= libs__globals__hi_1));
#line 556 "globals.m"
    libs__globals__succeeded = MR_FALSE;
#line 556 "globals.m"
  label_0:;
#line 556 "globals.m"
    return libs__globals__succeeded;
#line 556 "globals.m"
  }
#line 239 "globals.m"
}

#line 238 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_env_type_2_p_0(
#line 238 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 238 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 238 "globals.m"
{
#line 550 "globals.m"
  {
#line 550 "globals.m"
    MR_bool libs__globals__succeeded;
#line 550 "globals.m"
    MR_Integer libs__globals__lo_0;
#line 550 "globals.m"
    MR_Integer libs__globals__hi_1;
#line 550 "globals.m"
    MR_Integer libs__globals__mid_2;
#line 550 "globals.m"
    MR_Integer libs__globals__result_3;

#line 550 "globals.m"
    /* binary string simple lookup switch */
#line 550 "globals.m"
    libs__globals__lo_0 = (MR_Integer) 0;
#line 550 "globals.m"
    libs__globals__hi_1 = (MR_Integer) 4;
#line 550 "globals.m"
    do
#line 550 "globals.m"
      {
#line 550 "globals.m"
        libs__globals__mid_2 = (((libs__globals__lo_0 + libs__globals__hi_1)) / (MR_Integer) 2);
#line 550 "globals.m"
        libs__globals__result_3 = MR_strcmp(libs__globals__HeadVar__1_1, ((&libs__globals_vector_common_13[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_13_0__vct_13_f_0);
#line 550 "globals.m"
        if ((libs__globals__result_3 == (MR_Integer) 0))
#line 550 "globals.m"
          {
#line 550 "globals.m"
            *libs__globals__HeadVar__2_2 = ((&libs__globals_vector_common_13[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_13_0__vct_13_f_1;
#line 550 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 550 "globals.m"
            /* jump out of search loop */
#line 550 "globals.m"
            goto label_0;
#line 550 "globals.m"
          }
#line 550 "globals.m"
        else
#line 550 "globals.m"
        if ((libs__globals__result_3 < (MR_Integer) 0))
#line 550 "globals.m"
          libs__globals__hi_1 = (libs__globals__mid_2 - (MR_Integer) 1);
#line 550 "globals.m"
        else
#line 550 "globals.m"
          libs__globals__lo_0 = (libs__globals__mid_2 + (MR_Integer) 1);
#line 550 "globals.m"
      }
#line 550 "globals.m"
    while ((libs__globals__lo_0 <= libs__globals__hi_1));
#line 550 "globals.m"
    libs__globals__succeeded = MR_FALSE;
#line 550 "globals.m"
  label_0:;
#line 550 "globals.m"
    return libs__globals__succeeded;
#line 550 "globals.m"
  }
#line 238 "globals.m"
}

#line 236 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_reuse_strategy_3_p_0(
#line 236 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 236 "globals.m"
  MR_Integer libs__globals__NCells_2,
#line 236 "globals.m"
  MR_Word * libs__globals__HeadVar__3_3)
#line 236 "globals.m"
{
#line 628 "globals.m"
  {
#line 628 "globals.m"
    MR_bool libs__globals__succeeded;

#line 628 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "same_cons_id") == 0))
#line 628 "globals.m"
      {
#line 628 "globals.m"
        *libs__globals__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 628 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 628 "globals.m"
      }
#line 628 "globals.m"
    else
#line 628 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "within_n_cells_difference") == 0))
#line 630 "globals.m"
      {
#line 630 "globals.m"
        {
#line 630 "globals.m"
          MR_Word base;
#line 630 "globals.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 630 "globals.m"
          *libs__globals__HeadVar__3_3 = base;
#line 630 "globals.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__globals__NCells_2));
#line 630 "globals.m"
        }
#line 630 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 630 "globals.m"
      }
#line 628 "globals.m"
    else
#line 628 "globals.m"
      libs__globals__succeeded = MR_FALSE;
#line 628 "globals.m"
    return libs__globals__succeeded;
#line 628 "globals.m"
  }
#line 236 "globals.m"
}

#line 234 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_csharp_compiler_type_2_p_0(
#line 234 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 234 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 234 "globals.m"
{
#line 546 "globals.m"
  {
#line 546 "globals.m"
    MR_bool libs__globals__succeeded;

#line 546 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "mono") == 0))
#line 547 "globals.m"
      {
#line 547 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 1;
#line 547 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 547 "globals.m"
      }
#line 546 "globals.m"
    else
#line 546 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "unknown") == 0))
#line 548 "globals.m"
      {
#line 548 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 2;
#line 548 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 548 "globals.m"
      }
#line 546 "globals.m"
    else
#line 546 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "microsoft") == 0))
#line 546 "globals.m"
      {
#line 546 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 0;
#line 546 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 546 "globals.m"
      }
#line 546 "globals.m"
    else
#line 546 "globals.m"
      libs__globals__succeeded = MR_FALSE;
#line 546 "globals.m"
    return libs__globals__succeeded;
#line 546 "globals.m"
  }
#line 234 "globals.m"
}

#line 449 "globals.m"
static MR_bool MR_CALL 
libs__globals__convert_c_compiler_type_2_p_0_1(
#line 449 "globals.m"
  MR_Box libs__globals__closure_arg,
#line 449 "globals.m"
  MR_Box libs__globals__wrapper_arg_1)
#line 449 "globals.m"
{
#line 449 "globals.m"
  {
#line 449 "globals.m"
    MR_bool libs__globals__succeeded;
#line 449 "globals.m"
    MR_Box libs__globals__closure = libs__globals__closure_arg;

#line 449 "globals.m"
    {
#line 449 "globals.m"
      return libs__globals__succeeded = libs__globals__IntroducedFrom__pred__convert_c_compiler_type_with_version__449__1_1_p_0(((MR_Char) (MR_Word) libs__globals__wrapper_arg_1));
    }
#line 449 "globals.m"
    return libs__globals__succeeded;
#line 449 "globals.m"
  }
#line 449 "globals.m"
}

#line 232 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_c_compiler_type_2_p_0(
#line 232 "globals.m"
  MR_String libs__globals__CC_Str_3,
#line 232 "globals.m"
  MR_Word * libs__globals__C_CompilerType_4)
#line 232 "globals.m"
{
#line 433 "globals.m"
  {
#line 433 "globals.m"
    MR_bool libs__globals__succeeded;
#line 433 "globals.m"
    MR_Word libs__globals__C_CompilerType0_5;
#line 440 "globals.m"
    MR_Integer libs__globals__lo_0;
#line 440 "globals.m"
    MR_Integer libs__globals__hi_1;
#line 440 "globals.m"
    MR_Integer libs__globals__mid_2;
#line 440 "globals.m"
    MR_Integer libs__globals__result_3;

#line 440 "globals.m"
    /* binary string simple lookup switch */
#line 440 "globals.m"
    libs__globals__lo_0 = (MR_Integer) 0;
#line 440 "globals.m"
    libs__globals__hi_1 = (MR_Integer) 3;
#line 440 "globals.m"
    do
#line 440 "globals.m"
      {
#line 440 "globals.m"
        libs__globals__mid_2 = (((libs__globals__lo_0 + libs__globals__hi_1)) / (MR_Integer) 2);
#line 440 "globals.m"
        libs__globals__result_3 = MR_strcmp(libs__globals__CC_Str_3, ((&libs__globals_vector_common_11[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_11_0__vct_11_f_0);
#line 440 "globals.m"
        if ((libs__globals__result_3 == (MR_Integer) 0))
#line 440 "globals.m"
          {
#line 440 "globals.m"
            libs__globals__C_CompilerType0_5 = ((&libs__globals_vector_common_11[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_11_0__vct_11_f_1;
#line 440 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 440 "globals.m"
            /* jump out of search loop */
#line 440 "globals.m"
            goto label_0;
#line 440 "globals.m"
          }
#line 440 "globals.m"
        else
#line 440 "globals.m"
        if ((libs__globals__result_3 < (MR_Integer) 0))
#line 440 "globals.m"
          libs__globals__hi_1 = (libs__globals__mid_2 - (MR_Integer) 1);
#line 440 "globals.m"
        else
#line 440 "globals.m"
          libs__globals__lo_0 = (libs__globals__mid_2 + (MR_Integer) 1);
#line 440 "globals.m"
      }
#line 440 "globals.m"
    while ((libs__globals__lo_0 <= libs__globals__hi_1));
#line 440 "globals.m"
    libs__globals__succeeded = MR_FALSE;
#line 440 "globals.m"
  label_0:;
#line 433 "globals.m"
    if (libs__globals__succeeded)
#line 432 "globals.m"
      {
#line 432 "globals.m"
        *libs__globals__C_CompilerType_4 = libs__globals__C_CompilerType0_5;
#line 432 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 432 "globals.m"
      }
#line 433 "globals.m"
    else
#line 448 "globals.m"
      {
#line 448 "globals.m"
        MR_Word libs__globals__Tokens_13;
#line 453 "globals.m"
        MR_String libs__globals__Major_15;
#line 453 "globals.m"
        MR_String libs__globals__Minor_16;
#line 453 "globals.m"
        MR_String libs__globals__Patch_17;
#line 451 "globals.m"
        MR_String libs__globals__V_21_21;
#line 451 "globals.m"
        MR_Word libs__globals__V_22_22;
#line 451 "globals.m"
        MR_Word libs__globals__V_23_23;
#line 451 "globals.m"
        MR_Word libs__globals__V_24_24;
#line 451 "globals.m"
        MR_Word libs__globals__V_25_25;

#line 449 "globals.m"
        {
#line 449 "globals.m"
          libs__globals__Tokens_13 = mercury__string__words_separator_2_f_0((MR_Word) &libs__globals_scalar_common_2[4], libs__globals__CC_Str_3);
        }
#line 451 "globals.m"
        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__Tokens_13)) == (MR_mktag((MR_Integer) 1)));
#line 451 "globals.m"
        if (libs__globals__succeeded)
#line 451 "globals.m"
          {
#line 451 "globals.m"
            libs__globals__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_13, (MR_Integer) 0)));
#line 451 "globals.m"
            libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_13, (MR_Integer) 1)));
#line 451 "globals.m"
            libs__globals__succeeded = (strcmp(libs__globals__V_21_21, (MR_String) "gcc") == 0);
#line 451 "globals.m"
            if (libs__globals__succeeded)
#line 451 "globals.m"
              {
#line 451 "globals.m"
                libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 451 "globals.m"
                if (libs__globals__succeeded)
#line 451 "globals.m"
                  {
#line 451 "globals.m"
                    libs__globals__Major_15 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_22_22, (MR_Integer) 0)));
#line 451 "globals.m"
                    libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_22_22, (MR_Integer) 1)));
#line 451 "globals.m"
                    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 451 "globals.m"
                    if (libs__globals__succeeded)
#line 451 "globals.m"
                      {
#line 451 "globals.m"
                        libs__globals__Minor_16 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_23_23, (MR_Integer) 0)));
#line 451 "globals.m"
                        libs__globals__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_23_23, (MR_Integer) 1)));
#line 451 "globals.m"
                        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 451 "globals.m"
                        if (libs__globals__succeeded)
#line 451 "globals.m"
                          {
#line 451 "globals.m"
                            libs__globals__Patch_17 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_24_24, (MR_Integer) 0)));
#line 451 "globals.m"
                            libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_24_24, (MR_Integer) 1)));
#line 451 "globals.m"
                            libs__globals__succeeded = (libs__globals__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 451 "globals.m"
                          }
#line 451 "globals.m"
                      }
#line 451 "globals.m"
                  }
#line 451 "globals.m"
              }
#line 451 "globals.m"
          }
#line 453 "globals.m"
        if (libs__globals__succeeded)
#line 486 "globals.m"
          {
#line 481 "globals.m"
            libs__globals__succeeded = (strcmp(libs__globals__Major_15, (MR_String) "u") == 0);
#line 481 "globals.m"
            if (libs__globals__succeeded)
#line 481 "globals.m"
              {
#line 482 "globals.m"
                libs__globals__succeeded = (strcmp(libs__globals__Minor_16, (MR_String) "u") == 0);
#line 481 "globals.m"
                if (libs__globals__succeeded)
#line 483 "globals.m"
                  libs__globals__succeeded = (strcmp(libs__globals__Patch_17, (MR_String) "u") == 0);
#line 481 "globals.m"
              }
#line 486 "globals.m"
            if (libs__globals__succeeded)
#line 485 "globals.m"
              {
#line 485 "globals.m"
                *libs__globals__C_CompilerType_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__globals_scalar_common_2[3]);
#line 485 "globals.m"
                libs__globals__succeeded = MR_TRUE;
#line 485 "globals.m"
              }
#line 486 "globals.m"
            else
#line 513 "globals.m"
              {
#line 513 "globals.m"
                MR_Integer libs__globals__Major_42;
#line 487 "globals.m"
                MR_Integer libs__globals__V_48_48;

#line 487 "globals.m"
                {
#line 487 "globals.m"
                  libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Major_15, &libs__globals__Major_42);
                }
#line 487 "globals.m"
                if (libs__globals__succeeded)
#line 487 "globals.m"
                  {
#line 488 "globals.m"
                    libs__globals__V_48_48 = (MR_Integer) 2;
#line 488 "globals.m"
                    libs__globals__succeeded = (libs__globals__Major_42 >= libs__globals__V_48_48);
#line 487 "globals.m"
                  }
#line 513 "globals.m"
                if (libs__globals__succeeded)
#line 494 "globals.m"
                  {
#line 491 "globals.m"
                    libs__globals__succeeded = (strcmp(libs__globals__Minor_16, (MR_String) "u") == 0);
#line 494 "globals.m"
                    if (libs__globals__succeeded)
#line 493 "globals.m"
                      {
#line 493 "globals.m"
                        MR_Word libs__globals__V_49_49;

#line 493 "globals.m"
                        {
#line 493 "globals.m"
                          libs__globals__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 493 "globals.m"
                          MR_hl_field(MR_mktag(1), libs__globals__V_49_49, 0) = ((MR_Box) (libs__globals__Major_42));
#line 493 "globals.m"
                        }
#line 493 "globals.m"
                        {
#line 493 "globals.m"
                          MR_Word base;
#line 493 "globals.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 493 "globals.m"
                          *libs__globals__C_CompilerType_4 = base;
#line 493 "globals.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__globals__V_49_49));
#line 493 "globals.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 493 "globals.m"
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 493 "globals.m"
                        }
#line 493 "globals.m"
                        libs__globals__succeeded = MR_TRUE;
#line 493 "globals.m"
                      }
#line 494 "globals.m"
                    else
#line 510 "globals.m"
                      {
#line 510 "globals.m"
                        MR_Integer libs__globals__Minor_43;
#line 495 "globals.m"
                        MR_Integer libs__globals__V_52_52;

#line 495 "globals.m"
                        {
#line 495 "globals.m"
                          libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Minor_16, &libs__globals__Minor_43);
                        }
#line 495 "globals.m"
                        if (libs__globals__succeeded)
#line 495 "globals.m"
                          {
#line 496 "globals.m"
                            libs__globals__V_52_52 = (MR_Integer) 0;
#line 496 "globals.m"
                            libs__globals__succeeded = (libs__globals__Minor_43 >= libs__globals__V_52_52);
#line 495 "globals.m"
                          }
#line 510 "globals.m"
                        if (libs__globals__succeeded)
#line 502 "globals.m"
                          {
#line 499 "globals.m"
                            libs__globals__succeeded = (strcmp(libs__globals__Patch_17, (MR_String) "u") == 0);
#line 502 "globals.m"
                            if (libs__globals__succeeded)
#line 501 "globals.m"
                              {
#line 501 "globals.m"
                                MR_Word libs__globals__V_53_53;
#line 501 "globals.m"
                                MR_Word libs__globals__V_54_54;

#line 501 "globals.m"
                                {
#line 501 "globals.m"
                                  libs__globals__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 501 "globals.m"
                                  MR_hl_field(MR_mktag(1), libs__globals__V_53_53, 0) = ((MR_Box) (libs__globals__Major_42));
#line 501 "globals.m"
                                }
#line 501 "globals.m"
                                {
#line 501 "globals.m"
                                  libs__globals__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 501 "globals.m"
                                  MR_hl_field(MR_mktag(1), libs__globals__V_54_54, 0) = ((MR_Box) (libs__globals__Minor_43));
#line 501 "globals.m"
                                }
#line 501 "globals.m"
                                {
#line 501 "globals.m"
                                  MR_Word base;
#line 501 "globals.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 501 "globals.m"
                                  *libs__globals__C_CompilerType_4 = base;
#line 501 "globals.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__globals__V_53_53));
#line 501 "globals.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__globals__V_54_54));
#line 501 "globals.m"
                                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 501 "globals.m"
                                }
#line 501 "globals.m"
                                libs__globals__succeeded = MR_TRUE;
#line 501 "globals.m"
                              }
#line 502 "globals.m"
                            else
#line 507 "globals.m"
                              {
#line 507 "globals.m"
                                MR_Integer libs__globals__Patch_44;
#line 503 "globals.m"
                                MR_Integer libs__globals__V_56_56;

#line 503 "globals.m"
                                {
#line 503 "globals.m"
                                  libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Patch_17, &libs__globals__Patch_44);
                                }
#line 503 "globals.m"
                                if (libs__globals__succeeded)
#line 503 "globals.m"
                                  {
#line 504 "globals.m"
                                    libs__globals__V_56_56 = (MR_Integer) 0;
#line 504 "globals.m"
                                    libs__globals__succeeded = (libs__globals__Patch_44 >= libs__globals__V_56_56);
#line 503 "globals.m"
                                  }
#line 507 "globals.m"
                                if (libs__globals__succeeded)
#line 506 "globals.m"
                                  {
#line 506 "globals.m"
                                    MR_Word libs__globals__V_57_57;
#line 506 "globals.m"
                                    MR_Word libs__globals__V_58_58;
#line 506 "globals.m"
                                    MR_Word libs__globals__V_59_59;

#line 506 "globals.m"
                                    {
#line 506 "globals.m"
                                      libs__globals__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 506 "globals.m"
                                      MR_hl_field(MR_mktag(1), libs__globals__V_57_57, 0) = ((MR_Box) (libs__globals__Major_42));
#line 506 "globals.m"
                                    }
#line 506 "globals.m"
                                    {
#line 506 "globals.m"
                                      libs__globals__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 506 "globals.m"
                                      MR_hl_field(MR_mktag(1), libs__globals__V_58_58, 0) = ((MR_Box) (libs__globals__Minor_43));
#line 506 "globals.m"
                                    }
#line 506 "globals.m"
                                    {
#line 506 "globals.m"
                                      libs__globals__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 506 "globals.m"
                                      MR_hl_field(MR_mktag(1), libs__globals__V_59_59, 0) = ((MR_Box) (libs__globals__Patch_44));
#line 506 "globals.m"
                                    }
#line 506 "globals.m"
                                    {
#line 506 "globals.m"
                                      MR_Word base;
#line 506 "globals.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 506 "globals.m"
                                      *libs__globals__C_CompilerType_4 = base;
#line 506 "globals.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__globals__V_57_57));
#line 506 "globals.m"
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__globals__V_58_58));
#line 506 "globals.m"
                                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (libs__globals__V_59_59));
#line 506 "globals.m"
                                    }
#line 506 "globals.m"
                                    libs__globals__succeeded = MR_TRUE;
#line 506 "globals.m"
                                  }
#line 507 "globals.m"
                                else
#line 508 "globals.m"
                                  {
#line 508 "globals.m"
                                    return libs__globals__succeeded = mercury__builtin__false_0_p_0();
                                  }
#line 507 "globals.m"
                              }
#line 502 "globals.m"
                          }
#line 510 "globals.m"
                        else
#line 511 "globals.m"
                          {
#line 511 "globals.m"
                            return libs__globals__succeeded = mercury__builtin__false_0_p_0();
                          }
#line 510 "globals.m"
                      }
#line 494 "globals.m"
                  }
#line 513 "globals.m"
                else
#line 514 "globals.m"
                  {
#line 514 "globals.m"
                    return libs__globals__succeeded = mercury__builtin__false_0_p_0();
                  }
#line 513 "globals.m"
              }
#line 486 "globals.m"
          }
#line 453 "globals.m"
        else
#line 455 "globals.m"
          {
#line 455 "globals.m"
            MR_String libs__globals__Major_35;
#line 455 "globals.m"
            MR_String libs__globals__Minor_36;
#line 455 "globals.m"
            MR_String libs__globals__Patch_37;
#line 453 "globals.m"
            MR_String libs__globals__V_26_26;
#line 453 "globals.m"
            MR_Word libs__globals__V_27_27;
#line 453 "globals.m"
            MR_Word libs__globals__V_28_28;
#line 453 "globals.m"
            MR_Word libs__globals__V_29_29;
#line 453 "globals.m"
            MR_Word libs__globals__V_30_30;

#line 453 "globals.m"
            libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__Tokens_13)) == (MR_mktag((MR_Integer) 1)));
#line 453 "globals.m"
            if (libs__globals__succeeded)
#line 453 "globals.m"
              {
#line 453 "globals.m"
                libs__globals__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_13, (MR_Integer) 0)));
#line 453 "globals.m"
                libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_13, (MR_Integer) 1)));
#line 453 "globals.m"
                libs__globals__succeeded = (strcmp(libs__globals__V_26_26, (MR_String) "clang") == 0);
#line 453 "globals.m"
                if (libs__globals__succeeded)
#line 453 "globals.m"
                  {
#line 453 "globals.m"
                    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 453 "globals.m"
                    if (libs__globals__succeeded)
#line 453 "globals.m"
                      {
#line 453 "globals.m"
                        libs__globals__Major_35 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_27_27, (MR_Integer) 0)));
#line 453 "globals.m"
                        libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_27_27, (MR_Integer) 1)));
#line 453 "globals.m"
                        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 453 "globals.m"
                        if (libs__globals__succeeded)
#line 453 "globals.m"
                          {
#line 453 "globals.m"
                            libs__globals__Minor_36 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_28_28, (MR_Integer) 0)));
#line 453 "globals.m"
                            libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_28_28, (MR_Integer) 1)));
#line 453 "globals.m"
                            libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 453 "globals.m"
                            if (libs__globals__succeeded)
#line 453 "globals.m"
                              {
#line 453 "globals.m"
                                libs__globals__Patch_37 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_29_29, (MR_Integer) 0)));
#line 453 "globals.m"
                                libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_29_29, (MR_Integer) 1)));
#line 453 "globals.m"
                                libs__globals__succeeded = (libs__globals__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 453 "globals.m"
                              }
#line 453 "globals.m"
                          }
#line 453 "globals.m"
                      }
#line 453 "globals.m"
                  }
#line 453 "globals.m"
              }
#line 455 "globals.m"
            if (libs__globals__succeeded)
#line 526 "globals.m"
              {
#line 526 "globals.m"
                MR_Integer libs__globals__Major_64;
#line 526 "globals.m"
                MR_Integer libs__globals__Minor_65;
#line 526 "globals.m"
                MR_Integer libs__globals__Patch_66;
#line 526 "globals.m"
                MR_Word libs__globals__ClangVersion_67;
#line 526 "globals.m"
                MR_Integer libs__globals__V_68_68;
#line 526 "globals.m"
                MR_Integer libs__globals__V_69_69;
#line 526 "globals.m"
                MR_Integer libs__globals__V_70_70;
#line 526 "globals.m"
                MR_Word libs__globals__V_71_71;

#line 527 "globals.m"
                {
#line 527 "globals.m"
                  libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Major_35, &libs__globals__Major_64);
                }
#line 526 "globals.m"
                if (libs__globals__succeeded)
#line 526 "globals.m"
                  {
#line 528 "globals.m"
                    {
#line 528 "globals.m"
                      libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Minor_36, &libs__globals__Minor_65);
                    }
#line 526 "globals.m"
                    if (libs__globals__succeeded)
#line 526 "globals.m"
                      {
#line 529 "globals.m"
                        {
#line 529 "globals.m"
                          libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Patch_37, &libs__globals__Patch_66);
                        }
#line 526 "globals.m"
                        if (libs__globals__succeeded)
#line 526 "globals.m"
                          {
#line 530 "globals.m"
                            libs__globals__V_68_68 = (MR_Integer) 0;
#line 530 "globals.m"
                            libs__globals__succeeded = (libs__globals__Major_64 >= libs__globals__V_68_68);
#line 526 "globals.m"
                            if (libs__globals__succeeded)
#line 526 "globals.m"
                              {
#line 530 "globals.m"
                                libs__globals__V_69_69 = (MR_Integer) 0;
#line 530 "globals.m"
                                libs__globals__succeeded = (libs__globals__Minor_65 >= libs__globals__V_69_69);
#line 526 "globals.m"
                                if (libs__globals__succeeded)
#line 526 "globals.m"
                                  {
#line 530 "globals.m"
                                    libs__globals__V_70_70 = (MR_Integer) 0;
#line 530 "globals.m"
                                    libs__globals__succeeded = (libs__globals__Patch_66 >= libs__globals__V_70_70);
#line 526 "globals.m"
                                    if (libs__globals__succeeded)
#line 526 "globals.m"
                                      {
#line 531 "globals.m"
                                        {
#line 531 "globals.m"
                                          libs__globals__ClangVersion_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 531 "globals.m"
                                          MR_hl_field(MR_mktag(0), libs__globals__ClangVersion_67, 0) = ((MR_Box) (libs__globals__Major_64));
#line 531 "globals.m"
                                          MR_hl_field(MR_mktag(0), libs__globals__ClangVersion_67, 1) = ((MR_Box) (libs__globals__Minor_65));
#line 531 "globals.m"
                                          MR_hl_field(MR_mktag(0), libs__globals__ClangVersion_67, 2) = ((MR_Box) (libs__globals__Patch_66));
#line 531 "globals.m"
                                        }
#line 532 "globals.m"
                                        {
#line 532 "globals.m"
                                          libs__globals__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 532 "globals.m"
                                          MR_hl_field(MR_mktag(1), libs__globals__V_71_71, 0) = ((MR_Box) (libs__globals__ClangVersion_67));
#line 532 "globals.m"
                                        }
#line 532 "globals.m"
                                        {
#line 532 "globals.m"
                                          MR_Word base;
#line 532 "globals.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 532 "globals.m"
                                          *libs__globals__C_CompilerType_4 = base;
#line 532 "globals.m"
                                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (libs__globals__V_71_71));
#line 532 "globals.m"
                                        }
#line 532 "globals.m"
                                        libs__globals__succeeded = MR_TRUE;
#line 526 "globals.m"
                                      }
#line 526 "globals.m"
                                  }
#line 526 "globals.m"
                              }
#line 526 "globals.m"
                          }
#line 526 "globals.m"
                      }
#line 526 "globals.m"
                  }
#line 526 "globals.m"
              }
#line 455 "globals.m"
            else
#line 457 "globals.m"
              {
#line 457 "globals.m"
                MR_String libs__globals__Version_18;
#line 455 "globals.m"
                MR_String libs__globals__V_31_31;
#line 455 "globals.m"
                MR_Word libs__globals__V_32_32;
#line 455 "globals.m"
                MR_Word libs__globals__V_33_33;

#line 455 "globals.m"
                libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__Tokens_13)) == (MR_mktag((MR_Integer) 1)));
#line 455 "globals.m"
                if (libs__globals__succeeded)
#line 455 "globals.m"
                  {
#line 455 "globals.m"
                    libs__globals__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_13, (MR_Integer) 0)));
#line 455 "globals.m"
                    libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_13, (MR_Integer) 1)));
#line 455 "globals.m"
                    libs__globals__succeeded = (strcmp(libs__globals__V_31_31, (MR_String) "msvc") == 0);
#line 455 "globals.m"
                    if (libs__globals__succeeded)
#line 455 "globals.m"
                      {
#line 455 "globals.m"
                        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 455 "globals.m"
                        if (libs__globals__succeeded)
#line 455 "globals.m"
                          {
#line 455 "globals.m"
                            libs__globals__Version_18 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_32_32, (MR_Integer) 0)));
#line 455 "globals.m"
                            libs__globals__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_32_32, (MR_Integer) 1)));
#line 455 "globals.m"
                            libs__globals__succeeded = (libs__globals__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 455 "globals.m"
                          }
#line 455 "globals.m"
                      }
#line 455 "globals.m"
                  }
#line 457 "globals.m"
                if (libs__globals__succeeded)
#line 541 "globals.m"
                  {
#line 541 "globals.m"
                    MR_Integer libs__globals__Version_74;
#line 541 "globals.m"
                    MR_Integer libs__globals__V_75_75;
#line 541 "globals.m"
                    MR_Word libs__globals__V_76_76;

#line 542 "globals.m"
                    {
#line 542 "globals.m"
                      libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Version_18, &libs__globals__Version_74);
                    }
#line 541 "globals.m"
                    if (libs__globals__succeeded)
#line 541 "globals.m"
                      {
#line 543 "globals.m"
                        libs__globals__V_75_75 = (MR_Integer) 0;
#line 543 "globals.m"
                        libs__globals__succeeded = (libs__globals__Version_74 > libs__globals__V_75_75);
#line 541 "globals.m"
                        if (libs__globals__succeeded)
#line 541 "globals.m"
                          {
#line 544 "globals.m"
                            {
#line 544 "globals.m"
                              libs__globals__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 544 "globals.m"
                              MR_hl_field(MR_mktag(1), libs__globals__V_76_76, 0) = ((MR_Box) (libs__globals__Version_74));
#line 544 "globals.m"
                            }
#line 544 "globals.m"
                            {
#line 544 "globals.m"
                              MR_Word base;
#line 544 "globals.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 544 "globals.m"
                              *libs__globals__C_CompilerType_4 = base;
#line 544 "globals.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (libs__globals__V_76_76));
#line 544 "globals.m"
                            }
#line 544 "globals.m"
                            libs__globals__succeeded = MR_TRUE;
#line 541 "globals.m"
                          }
#line 541 "globals.m"
                      }
#line 541 "globals.m"
                  }
#line 457 "globals.m"
                else
#line 458 "globals.m"
                  {
#line 458 "globals.m"
                    return libs__globals__succeeded = mercury__builtin__false_0_p_0();
                  }
#line 457 "globals.m"
              }
#line 455 "globals.m"
          }
#line 448 "globals.m"
      }
#line 433 "globals.m"
    return libs__globals__succeeded;
#line 433 "globals.m"
  }
#line 232 "globals.m"
}

#line 230 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_maybe_thread_safe_2_p_0(
#line 230 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 230 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 230 "globals.m"
{
#line 427 "globals.m"
  {
#line 427 "globals.m"
    MR_bool libs__globals__succeeded;

#line 427 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "no") == 0))
#line 428 "globals.m"
      {
#line 428 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 0;
#line 428 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 428 "globals.m"
      }
#line 427 "globals.m"
    else
#line 427 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "yes") == 0))
#line 427 "globals.m"
      {
#line 427 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 1;
#line 427 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 427 "globals.m"
      }
#line 427 "globals.m"
    else
#line 427 "globals.m"
      libs__globals__succeeded = MR_FALSE;
#line 427 "globals.m"
    return libs__globals__succeeded;
#line 427 "globals.m"
  }
#line 230 "globals.m"
}

#line 229 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_termination_norm_2_p_0(
#line 229 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 229 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 229 "globals.m"
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
    libs__globals__hi_1 = (MR_Integer) 3;
#line 422 "globals.m"
    do
#line 422 "globals.m"
      {
#line 422 "globals.m"
        libs__globals__mid_2 = (((libs__globals__lo_0 + libs__globals__hi_1)) / (MR_Integer) 2);
#line 422 "globals.m"
        libs__globals__result_3 = MR_strcmp(libs__globals__HeadVar__1_1, ((&libs__globals_vector_common_9[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_9_0__vct_9_f_0);
#line 422 "globals.m"
        if ((libs__globals__result_3 == (MR_Integer) 0))
#line 422 "globals.m"
          {
#line 422 "globals.m"
            *libs__globals__HeadVar__2_2 = ((&libs__globals_vector_common_9[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_9_0__vct_9_f_1;
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
#line 229 "globals.m"
}

#line 228 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_tags_method_2_p_0(
#line 228 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 228 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 228 "globals.m"
{
#line 418 "globals.m"
  {
#line 418 "globals.m"
    MR_bool libs__globals__succeeded;

#line 418 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "low") == 0))
#line 419 "globals.m"
      {
#line 419 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 1;
#line 419 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 419 "globals.m"
      }
#line 418 "globals.m"
    else
#line 418 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "high") == 0))
#line 420 "globals.m"
      {
#line 420 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 2;
#line 420 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 420 "globals.m"
      }
#line 418 "globals.m"
    else
#line 418 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "none") == 0))
#line 418 "globals.m"
      {
#line 418 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 0;
#line 418 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 418 "globals.m"
      }
#line 418 "globals.m"
    else
#line 418 "globals.m"
      libs__globals__succeeded = MR_FALSE;
#line 418 "globals.m"
    return libs__globals__succeeded;
#line 418 "globals.m"
  }
#line 228 "globals.m"
}

#line 227 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_gc_method_2_p_0(
#line 227 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 227 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 227 "globals.m"
{
#line 410 "globals.m"
  {
#line 410 "globals.m"
    MR_bool libs__globals__succeeded;
#line 410 "globals.m"
    MR_Integer libs__globals__lo_0;
#line 410 "globals.m"
    MR_Integer libs__globals__hi_1;
#line 410 "globals.m"
    MR_Integer libs__globals__mid_2;
#line 410 "globals.m"
    MR_Integer libs__globals__result_3;

#line 410 "globals.m"
    /* binary string simple lookup switch */
#line 410 "globals.m"
    libs__globals__lo_0 = (MR_Integer) 0;
#line 410 "globals.m"
    libs__globals__hi_1 = (MR_Integer) 6;
#line 410 "globals.m"
    do
#line 410 "globals.m"
      {
#line 410 "globals.m"
        libs__globals__mid_2 = (((libs__globals__lo_0 + libs__globals__hi_1)) / (MR_Integer) 2);
#line 410 "globals.m"
        libs__globals__result_3 = MR_strcmp(libs__globals__HeadVar__1_1, ((&libs__globals_vector_common_8[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_8_0__vct_8_f_0);
#line 410 "globals.m"
        if ((libs__globals__result_3 == (MR_Integer) 0))
#line 410 "globals.m"
          {
#line 410 "globals.m"
            *libs__globals__HeadVar__2_2 = ((&libs__globals_vector_common_8[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_8_0__vct_8_f_1;
#line 410 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 410 "globals.m"
            /* jump out of search loop */
#line 410 "globals.m"
            goto label_0;
#line 410 "globals.m"
          }
#line 410 "globals.m"
        else
#line 410 "globals.m"
        if ((libs__globals__result_3 < (MR_Integer) 0))
#line 410 "globals.m"
          libs__globals__hi_1 = (libs__globals__mid_2 - (MR_Integer) 1);
#line 410 "globals.m"
        else
#line 410 "globals.m"
          libs__globals__lo_0 = (libs__globals__mid_2 + (MR_Integer) 1);
#line 410 "globals.m"
      }
#line 410 "globals.m"
    while ((libs__globals__lo_0 <= libs__globals__hi_1));
#line 410 "globals.m"
    libs__globals__succeeded = MR_FALSE;
#line 410 "globals.m"
  label_0:;
#line 410 "globals.m"
    return libs__globals__succeeded;
#line 410 "globals.m"
  }
#line 227 "globals.m"
}

#line 226 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_foreign_language_2_p_0(
#line 226 "globals.m"
  MR_String libs__globals__String_3,
#line 226 "globals.m"
  MR_Word * libs__globals__ForeignLanguage_4)
#line 226 "globals.m"
{
#line 397 "globals.m"
  {
#line 397 "globals.m"
    MR_bool libs__globals__succeeded;
#line 397 "globals.m"
    MR_String libs__globals__V_5_5;
#line 403 "globals.m"
    MR_Integer libs__globals__lo_0;
#line 403 "globals.m"
    MR_Integer libs__globals__hi_1;
#line 403 "globals.m"
    MR_Integer libs__globals__mid_2;
#line 403 "globals.m"
    MR_Integer libs__globals__result_3;

#line 398 "globals.m"
    {
#line 398 "globals.m"
      libs__globals__V_5_5 = mercury__string__to_lower_1_f_0(libs__globals__String_3);
    }
#line 403 "globals.m"
    /* binary string simple lookup switch */
#line 403 "globals.m"
    libs__globals__lo_0 = (MR_Integer) 0;
#line 403 "globals.m"
    libs__globals__hi_1 = (MR_Integer) 5;
#line 403 "globals.m"
    do
#line 403 "globals.m"
      {
#line 403 "globals.m"
        libs__globals__mid_2 = (((libs__globals__lo_0 + libs__globals__hi_1)) / (MR_Integer) 2);
#line 403 "globals.m"
        libs__globals__result_3 = MR_strcmp(libs__globals__V_5_5, ((&libs__globals_vector_common_7[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_7_0__vct_7_f_0);
#line 403 "globals.m"
        if ((libs__globals__result_3 == (MR_Integer) 0))
#line 403 "globals.m"
          {
#line 403 "globals.m"
            *libs__globals__ForeignLanguage_4 = ((&libs__globals_vector_common_7[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_7_0__vct_7_f_1;
#line 403 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 403 "globals.m"
            /* jump out of search loop */
#line 403 "globals.m"
            goto label_0;
#line 403 "globals.m"
          }
#line 403 "globals.m"
        else
#line 403 "globals.m"
        if ((libs__globals__result_3 < (MR_Integer) 0))
#line 403 "globals.m"
          libs__globals__hi_1 = (libs__globals__mid_2 - (MR_Integer) 1);
#line 403 "globals.m"
        else
#line 403 "globals.m"
          libs__globals__lo_0 = (libs__globals__mid_2 + (MR_Integer) 1);
#line 403 "globals.m"
      }
#line 403 "globals.m"
    while ((libs__globals__lo_0 <= libs__globals__hi_1));
#line 403 "globals.m"
    libs__globals__succeeded = MR_FALSE;
#line 403 "globals.m"
  label_0:;
#line 397 "globals.m"
    return libs__globals__succeeded;
#line 397 "globals.m"
  }
#line 226 "globals.m"
}

#line 225 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_target_2_p_0(
#line 225 "globals.m"
  MR_String libs__globals__String_3,
#line 225 "globals.m"
  MR_Word * libs__globals__Target_4)
#line 225 "globals.m"
{
#line 387 "globals.m"
  {
#line 387 "globals.m"
    MR_bool libs__globals__succeeded;
#line 387 "globals.m"
    MR_String libs__globals__V_5_5;
#line 392 "globals.m"
    MR_Integer libs__globals__lo_0;
#line 392 "globals.m"
    MR_Integer libs__globals__hi_1;
#line 392 "globals.m"
    MR_Integer libs__globals__mid_2;
#line 392 "globals.m"
    MR_Integer libs__globals__result_3;

#line 388 "globals.m"
    {
#line 388 "globals.m"
      libs__globals__V_5_5 = mercury__string__to_lower_1_f_0(libs__globals__String_3);
    }
#line 392 "globals.m"
    /* binary string simple lookup switch */
#line 392 "globals.m"
    libs__globals__lo_0 = (MR_Integer) 0;
#line 392 "globals.m"
    libs__globals__hi_1 = (MR_Integer) 3;
#line 392 "globals.m"
    do
#line 392 "globals.m"
      {
#line 392 "globals.m"
        libs__globals__mid_2 = (((libs__globals__lo_0 + libs__globals__hi_1)) / (MR_Integer) 2);
#line 392 "globals.m"
        libs__globals__result_3 = MR_strcmp(libs__globals__V_5_5, ((&libs__globals_vector_common_6[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_6_0__vct_6_f_0);
#line 392 "globals.m"
        if ((libs__globals__result_3 == (MR_Integer) 0))
#line 392 "globals.m"
          {
#line 392 "globals.m"
            *libs__globals__Target_4 = ((&libs__globals_vector_common_6[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_6_0__vct_6_f_1;
#line 392 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 392 "globals.m"
            /* jump out of search loop */
#line 392 "globals.m"
            goto label_0;
#line 392 "globals.m"
          }
#line 392 "globals.m"
        else
#line 392 "globals.m"
        if ((libs__globals__result_3 < (MR_Integer) 0))
#line 392 "globals.m"
          libs__globals__hi_1 = (libs__globals__mid_2 - (MR_Integer) 1);
#line 392 "globals.m"
        else
#line 392 "globals.m"
          libs__globals__lo_0 = (libs__globals__mid_2 + (MR_Integer) 1);
#line 392 "globals.m"
      }
#line 392 "globals.m"
    while ((libs__globals__lo_0 <= libs__globals__hi_1));
#line 392 "globals.m"
    libs__globals__succeeded = MR_FALSE;
#line 392 "globals.m"
  label_0:;
#line 387 "globals.m"
    return libs__globals__succeeded;
#line 387 "globals.m"
  }
#line 225 "globals.m"
}

#line 104 "globals.m"
MR_Word MR_CALL 
libs__globals__gc_is_conservative_1_f_0(
#line 104 "globals.m"
  MR_Word libs__globals__HeadVar__1_1)
#line 104 "globals.m"
{
#line 652 "globals.m"
  {
#line 652 "globals.m"
    MR_bool libs__globals__succeeded;
#line 652 "globals.m"
    MR_Word libs__globals__HeadVar__2_2 = ((&libs__globals_vector_common_5[0 + libs__globals__HeadVar__1_1]))->libs__globals__vector_common_type_5_0__vct_5_f_0;

#line 652 "globals.m"
    return libs__globals__HeadVar__2_2;
#line 652 "globals.m"
  }
#line 104 "globals.m"
}

#line 71 "globals.m"
MR_String MR_CALL 
libs__globals__simple_foreign_language_string_1_f_0(
#line 71 "globals.m"
  MR_Word libs__globals__HeadVar__1_1)
#line 71 "globals.m"
{
#line 647 "globals.m"
  {
#line 647 "globals.m"
    MR_bool libs__globals__succeeded;
#line 647 "globals.m"
    MR_String libs__globals__HeadVar__2_2 = ((&libs__globals_vector_common_4[8 + libs__globals__HeadVar__1_1]))->libs__globals__vector_common_type_4_0__vct_4_f_0;

#line 647 "globals.m"
    return libs__globals__HeadVar__2_2;
#line 647 "globals.m"
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
#line 642 "globals.m"
  {
#line 642 "globals.m"
    MR_bool libs__globals__succeeded;
#line 642 "globals.m"
    MR_String libs__globals__HeadVar__2_2 = ((&libs__globals_vector_common_4[4 + libs__globals__HeadVar__1_1]))->libs__globals__vector_common_type_4_0__vct_4_f_0;

#line 642 "globals.m"
    return libs__globals__HeadVar__2_2;
#line 642 "globals.m"
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
#line 637 "globals.m"
  {
#line 637 "globals.m"
    MR_bool libs__globals__succeeded;
#line 637 "globals.m"
    MR_String libs__globals__HeadVar__2_2 = ((&libs__globals_vector_common_4[0 + libs__globals__HeadVar__1_1]))->libs__globals__vector_common_type_4_0__vct_4_f_0;

#line 637 "globals.m"
    return libs__globals__HeadVar__2_2;
#line 637 "globals.m"
  }
#line 61 "globals.m"
}

#line 55 "globals.m"
MR_Word MR_CALL 
libs__globals__target_lang_to_foreign_export_lang_1_f_0(
#line 55 "globals.m"
  MR_Word libs__globals__HeadVar__1_1)
#line 55 "globals.m"
{
#line 632 "globals.m"
  {
#line 632 "globals.m"
    MR_bool libs__globals__succeeded;
#line 632 "globals.m"
    MR_Word libs__globals__HeadVar__2_2 = ((&libs__globals_vector_common_3[0 + libs__globals__HeadVar__1_1]))->libs__globals__vector_common_type_3_0__vct_3_f_0;

#line 632 "globals.m"
    return libs__globals__HeadVar__2_2;
#line 632 "globals.m"
  }
#line 55 "globals.m"
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
