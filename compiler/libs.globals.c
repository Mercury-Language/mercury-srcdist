/*
** Automatically generated from `globals.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_4;

#line 229 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_compilation_target_0[5];

#line 232 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_compilation_target_0[5];

#line 235 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_compilation_target_0[5];

#line 238 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_0;

#line 241 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_1;

#line 244 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_2;

#line 247 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_csharp_compiler_type_0[3];

#line 250 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_csharp_compiler_type_0[3];

#line 253 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_csharp_compiler_type_0[3];

#line 256 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_0;

#line 259 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_1;

#line 262 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_2;

#line 265 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_3;

#line 268 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_4;

#line 271 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_env_type_0[5];

#line 274 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_env_type_0[5];

#line 277 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_env_type_0[5];

#line 280 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_file_install_cmd_0_0[2];

#line 283 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_0;

#line 286 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_1;

#line 289 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_file_install_cmd_0_0[1];

#line 292 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_file_install_cmd_0_1[1];

#line 295 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_file_install_cmd_0[2];

#line 298 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_file_install_cmd_0[2];

#line 301 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_file_install_cmd_0[2];

#line 304 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_0;

#line 307 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_1;

#line 310 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_2;

#line 313 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_3;

#line 316 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_4;

#line 319 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_foreign_language_0[5];

#line 322 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_foreign_language_0[5];

#line 325 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_foreign_language_0[5];

#line 328 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_0;

#line 331 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_1;

#line 334 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_2;

#line 337 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_3;

#line 340 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_4;

#line 343 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_5;

#line 346 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_gc_method_0[6];

#line 349 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_gc_method_0[6];

#line 352 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_gc_method_0[6];

#line 355 "libs.globals.c"
static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0;

#line 358 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0;

#line 361 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1libs__globals__type_ctor_info_il_version_number_0;

#line 364 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1mdbcomp__feedback__type_ctor_info_feedback_info_0;

#line 367 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__list__ti_list_1libs__globals__type_ctor_info_line_number_range_0;

#line 370 "libs.globals.c"
static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1libs__globals__type_ctor_info_line_number_range_0;

#line 373 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_globals_0_0[20];

#line 376 "libs.globals.c"
static const MR_ConstString libs__globals__libs__globals__field_names_globals_0_0[20];

#line 379 "libs.globals.c"
static const MR_DuArgLocn libs__globals__libs__globals__field_locns_globals_0_0[20];

#line 382 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_globals_0_0;

#line 385 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_globals_0_0[1];

#line 388 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_globals_0[1];

#line 391 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_globals_0[1];

#line 394 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_globals_0[1];

#line 397 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_il_version_number_0_0[4];

#line 400 "libs.globals.c"
static const MR_ConstString libs__globals__libs__globals__field_names_il_version_number_0_0[4];

#line 403 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_il_version_number_0_0;

#line 406 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_il_version_number_0_0[1];

#line 409 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_il_version_number_0[1];

#line 412 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_il_version_number_0[1];

#line 415 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_il_version_number_0[1];

#line 418 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_line_number_range_0_0[2];

#line 421 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_line_number_range_0_0;

#line 424 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_line_number_range_0_0[1];

#line 427 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_line_number_range_0[1];

#line 430 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_line_number_range_0[1];

#line 433 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_line_number_range_0[1];

#line 436 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_0;

#line 439 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_reuse_strategy_0_1[1];

#line 442 "libs.globals.c"
static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_1;

#line 445 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_0[1];

#line 448 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_1[1];

#line 451 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_reuse_strategy_0[2];

#line 454 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_reuse_strategy_0[2];

#line 457 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_reuse_strategy_0[2];

#line 460 "libs.globals.c"
static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 463 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_0;

#line 466 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_1;

#line 469 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_2;

#line 472 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_ssdb_trace_level_0[3];

#line 475 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_ssdb_trace_level_0[3];

#line 478 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_ssdb_trace_level_0[3];

#line 481 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_0;

#line 484 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_1;

#line 487 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_2;

#line 490 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_tags_method_0[3];

#line 493 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_tags_method_0[3];

#line 496 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_tags_method_0[3];

#line 499 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_0;

#line 502 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_1;

#line 505 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_2;

#line 508 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_3;

#line 511 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_termination_norm_0[4];

#line 514 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_termination_norm_0[4];

#line 517 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_termination_norm_0[4];

#line 520 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____c_compiler_type_0_0_10001(
#line 523 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 525 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 528 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____c_compiler_type_0_0_10001(
#line 531 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 533 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 535 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 538 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____clang_version_0_0_10001(
#line 541 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 543 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 546 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____clang_version_0_0_10001(
#line 549 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 551 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 553 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 556 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____compilation_target_0_0_10001(
#line 559 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 561 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 564 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____compilation_target_0_0_10001(
#line 567 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 569 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 571 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 574 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____csharp_compiler_type_0_0_10001(
#line 577 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 579 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 582 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____csharp_compiler_type_0_0_10001(
#line 585 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 587 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 589 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 592 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____env_type_0_0_10001(
#line 595 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 597 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 600 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____env_type_0_0_10001(
#line 603 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 605 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 607 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 610 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____file_install_cmd_0_0_10001(
#line 613 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 615 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 618 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____file_install_cmd_0_0_10001(
#line 621 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 623 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 625 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 628 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____foreign_language_0_0_10001(
#line 631 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 633 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 636 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____foreign_language_0_0_10001(
#line 639 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 641 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 643 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 646 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____gc_method_0_0_10001(
#line 649 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 651 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 654 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____gc_method_0_0_10001(
#line 657 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 659 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 661 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 664 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____globals_0_0_10001(
#line 667 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 669 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 672 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____globals_0_0_10001(
#line 675 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 677 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 679 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 682 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____il_version_number_0_0_10001(
#line 685 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 687 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 690 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____il_version_number_0_0_10001(
#line 693 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 695 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 697 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 700 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____limit_error_contexts_map_0_0_10001(
#line 703 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 705 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 708 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____limit_error_contexts_map_0_0_10001(
#line 711 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 713 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 715 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 718 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____line_number_range_0_0_10001(
#line 721 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 723 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 726 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____line_number_range_0_0_10001(
#line 729 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 731 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 733 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 736 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____may_be_thread_safe_0_0_10001(
#line 739 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 741 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 744 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____may_be_thread_safe_0_0_10001(
#line 747 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 749 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 751 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 754 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____reuse_strategy_0_0_10001(
#line 757 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 759 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 762 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____reuse_strategy_0_0_10001(
#line 765 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 767 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 769 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 772 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____source_file_map_0_0_10001(
#line 775 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 777 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 780 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____source_file_map_0_0_10001(
#line 783 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 785 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 787 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 790 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____ssdb_trace_level_0_0_10001(
#line 793 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 795 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 798 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____ssdb_trace_level_0_0_10001(
#line 801 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 803 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 805 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 808 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____tags_method_0_0_10001(
#line 811 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 813 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 816 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____tags_method_0_0_10001(
#line 819 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 821 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 823 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 826 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____termination_norm_0_0_10001(
#line 829 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 831 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2);

#line 834 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____termination_norm_0_0_10001(
#line 837 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 839 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 841 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3);

#line 465 "globals.m"
static MR_bool MR_CALL 
libs__globals__IntroducedFrom__pred__convert_c_compiler_type_with_version__465__1_1_p_0(
#line 465 "globals.m"
  MR_Char libs__globals__HeadVar__1_12);

#line 744 "globals.m"
static MR_Word MR_CALL 
libs__globals__IntroducedFrom__func__get_backend_foreign_languages__744__1_1_f_0(
#line 744 "globals.m"
  MR_String libs__globals__HeadVar__1_11);

#line 970 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_maybe_source_file_map_1_p_0(
#line 970 "globals.m"
  MR_Word libs__globals__X_1);

#line 970 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_maybe_source_file_map_1_p_0(
#line 970 "globals.m"
  MR_Word * libs__globals__X_1);

#line 970 "globals.m"
static void MR_CALL 
libs__globals__unlock_maybe_source_file_map_0_p_0(void);

#line 970 "globals.m"
static void MR_CALL 
libs__globals__lock_maybe_source_file_map_0_p_0(void);

#line 970 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_maybe_source_file_map_0_p_0(void);

#line 970 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_maybe_source_file_map_0_p_0(void);

#line 967 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_disable_generate_item_version_numbers_1_p_0(
#line 967 "globals.m"
  MR_Word libs__globals__X_1);

#line 967 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_disable_generate_item_version_numbers_1_p_0(
#line 967 "globals.m"
  MR_Word * libs__globals__X_1);

#line 967 "globals.m"
static void MR_CALL 
libs__globals__unlock_disable_generate_item_version_numbers_0_p_0(void);

#line 967 "globals.m"
static void MR_CALL 
libs__globals__lock_disable_generate_item_version_numbers_0_p_0(void);

#line 967 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0(void);

#line 967 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_disable_generate_item_version_numbers_0_p_0(void);

#line 964 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_disable_smart_recompilation_1_p_0(
#line 964 "globals.m"
  MR_Word libs__globals__X_1);

#line 964 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_disable_smart_recompilation_1_p_0(
#line 964 "globals.m"
  MR_Word * libs__globals__X_1);

#line 964 "globals.m"
static void MR_CALL 
libs__globals__unlock_disable_smart_recompilation_0_p_0(void);

#line 964 "globals.m"
static void MR_CALL 
libs__globals__lock_disable_smart_recompilation_0_p_0(void);

#line 964 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0(void);

#line 964 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_disable_smart_recompilation_0_p_0(void);

#line 961 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_some_errors_were_context_limited_1_p_0(
#line 961 "globals.m"
  MR_Word libs__globals__X_1);

#line 961 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_some_errors_were_context_limited_1_p_0(
#line 961 "globals.m"
  MR_Word * libs__globals__X_1);

#line 961 "globals.m"
static void MR_CALL 
libs__globals__unlock_some_errors_were_context_limited_0_p_0(void);

#line 961 "globals.m"
static void MR_CALL 
libs__globals__lock_some_errors_were_context_limited_0_p_0(void);

#line 961 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_some_errors_were_context_limited_0_p_0(void);

#line 961 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_some_errors_were_context_limited_0_p_0(void);

#line 955 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_extra_error_info_1_p_0(
#line 955 "globals.m"
  MR_Word libs__globals__X_1);

#line 955 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_extra_error_info_1_p_0(
#line 955 "globals.m"
  MR_Word * libs__globals__X_1);

#line 955 "globals.m"
static void MR_CALL 
libs__globals__unlock_extra_error_info_0_p_0(void);

#line 955 "globals.m"
static void MR_CALL 
libs__globals__lock_extra_error_info_0_p_0(void);

#line 955 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_extra_error_info_0_p_0(void);

#line 955 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_extra_error_info_0_p_0(void);

#line 949 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_maybe_from_ground_term_threshold_1_p_0(
#line 949 "globals.m"
  MR_Word libs__globals__X_1);

#line 949 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_maybe_from_ground_term_threshold_1_p_0(
#line 949 "globals.m"
  MR_Word * libs__globals__X_1);

#line 949 "globals.m"
static void MR_CALL 
libs__globals__unlock_maybe_from_ground_term_threshold_0_p_0(void);

#line 949 "globals.m"
static void MR_CALL 
libs__globals__lock_maybe_from_ground_term_threshold_0_p_0(void);

#line 949 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0(void);

#line 949 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_maybe_from_ground_term_threshold_0_p_0(void);

#line 944 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_solver_auto_init_supported_1_p_0(
#line 944 "globals.m"
  MR_Word libs__globals__X_1);

#line 944 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_solver_auto_init_supported_1_p_0(
#line 944 "globals.m"
  MR_Word * libs__globals__X_1);

#line 944 "globals.m"
static void MR_CALL 
libs__globals__unlock_solver_auto_init_supported_0_p_0(void);

#line 944 "globals.m"
static void MR_CALL 
libs__globals__lock_solver_auto_init_supported_0_p_0(void);

#line 944 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0(void);

#line 944 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_solver_auto_init_supported_0_p_0(void);

#line 626 "globals.m"
static MR_bool MR_CALL 
libs__globals__convert_line_number_range_2_p_0(
#line 626 "globals.m"
  MR_String libs__globals__RangeStr_3,
#line 626 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2);

#line 611 "globals.m"
static void MR_CALL 
libs__globals__find_file_name_and_line_range_chars_4_p_0(
#line 611 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 611 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_LineRangeChars_0_2,
#line 611 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_LineRangeChars_3,
#line 611 "globals.m"
  MR_Word * libs__globals__HeadVar__4_4);

#line 603 "globals.m"
static MR_bool MR_CALL 
libs__globals__convert_limit_error_contexts_acc_5_p_0_1(
#line 603 "globals.m"
  MR_Box libs__globals__closure_arg,
#line 603 "globals.m"
  MR_Box libs__globals__wrapper_arg_1,
#line 603 "globals.m"
  MR_Box * libs__globals__wrapper_arg_2);

#line 583 "globals.m"
static void MR_CALL 
libs__globals__convert_limit_error_contexts_acc_5_p_0(
#line 583 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 583 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_RevBadOptions_0_2,
#line 583 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_RevBadOptions_3,
#line 583 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Map_0_4,
#line 583 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Map_5);

#line 741 "globals.m"
static MR_Box MR_CALL 
libs__globals__get_backend_foreign_languages_2_p_0_1(
#line 741 "globals.m"
  MR_Box libs__globals__closure_arg,
#line 741 "globals.m"
  MR_Box libs__globals__wrapper_arg_1);

#line 465 "globals.m"
static MR_bool MR_CALL 
libs__globals__convert_c_compiler_type_2_p_0_1(
#line 465 "globals.m"
  MR_Box libs__globals__closure_arg,
#line 465 "globals.m"
  MR_Box libs__globals__wrapper_arg_1);


static /* final */ const MR_Box libs__globals_scalar_common_1[6][2];

static /* final */ const MR_Box libs__globals_scalar_common_2[7][3];

static /* final */ const MR_Box libs__globals_scalar_common_10[2][1];

static /* final */ const MR_Box libs__globals_scalar_common_12[1][4];

static /* final */ const MR_Box libs__globals_scalar_common_15[2][5];


#line 648 "globals.m"
/* sealed */ struct libs__globals__vector_common_type_3_0_s {
#line 648 "globals.m"
  const MR_Word libs__globals__vector_common_type_3_0__vct_3_f_0;
#line 648 "globals.m"
};

static /* final */ const struct libs__globals__vector_common_type_3_0_s libs__globals_vector_common_3[5];

#line 654 "globals.m"
/* sealed */ struct libs__globals__vector_common_type_4_0_s {
#line 654 "globals.m"
  const MR_String libs__globals__vector_common_type_4_0__vct_4_f_0;
#line 654 "globals.m"
};

static /* final */ const struct libs__globals__vector_common_type_4_0_s libs__globals_vector_common_4[15];

#line 672 "globals.m"
/* sealed */ struct libs__globals__vector_common_type_5_0_s {
#line 672 "globals.m"
  const MR_Word libs__globals__vector_common_type_5_0__vct_5_f_0;
#line 672 "globals.m"
};

static /* final */ const struct libs__globals__vector_common_type_5_0_s libs__globals_vector_common_5[6];

#line 406 "globals.m"
/* sealed */ struct libs__globals__vector_common_type_6_0_s {
#line 406 "globals.m"
  const MR_String libs__globals__vector_common_type_6_0__vct_6_f_0;
#line 406 "globals.m"
  const MR_Word libs__globals__vector_common_type_6_0__vct_6_f_1;
#line 406 "globals.m"
};

static /* final */ const struct libs__globals__vector_common_type_6_0_s libs__globals_vector_common_6[5];

#line 418 "globals.m"
/* sealed */ struct libs__globals__vector_common_type_7_0_s {
#line 418 "globals.m"
  const MR_String libs__globals__vector_common_type_7_0__vct_7_f_0;
#line 418 "globals.m"
  const MR_Word libs__globals__vector_common_type_7_0__vct_7_f_1;
#line 418 "globals.m"
};

static /* final */ const struct libs__globals__vector_common_type_7_0_s libs__globals_vector_common_7[7];

#line 426 "globals.m"
/* sealed */ struct libs__globals__vector_common_type_8_0_s {
#line 426 "globals.m"
  const MR_String libs__globals__vector_common_type_8_0__vct_8_f_0;
#line 426 "globals.m"
  const MR_Word libs__globals__vector_common_type_8_0__vct_8_f_1;
#line 426 "globals.m"
};

static /* final */ const struct libs__globals__vector_common_type_8_0_s libs__globals_vector_common_8[7];

#line 438 "globals.m"
/* sealed */ struct libs__globals__vector_common_type_9_0_s {
#line 438 "globals.m"
  const MR_String libs__globals__vector_common_type_9_0__vct_9_f_0;
#line 438 "globals.m"
  const MR_Word libs__globals__vector_common_type_9_0__vct_9_f_1;
#line 438 "globals.m"
};

static /* final */ const struct libs__globals__vector_common_type_9_0_s libs__globals_vector_common_9[4];

#line 456 "globals.m"
/* sealed */ struct libs__globals__vector_common_type_11_0_s {
#line 456 "globals.m"
  const MR_String libs__globals__vector_common_type_11_0__vct_11_f_0;
#line 456 "globals.m"
  const MR_Word libs__globals__vector_common_type_11_0__vct_11_f_1;
#line 456 "globals.m"
};

static /* final */ const struct libs__globals__vector_common_type_11_0_s libs__globals_vector_common_11[4];

#line 566 "globals.m"
/* sealed */ struct libs__globals__vector_common_type_13_0_s {
#line 566 "globals.m"
  const MR_String libs__globals__vector_common_type_13_0__vct_13_f_0;
#line 566 "globals.m"
  const MR_Word libs__globals__vector_common_type_13_0__vct_13_f_1;
#line 566 "globals.m"
};

static /* final */ const struct libs__globals__vector_common_type_13_0_s libs__globals_vector_common_13[5];

#line 572 "globals.m"
/* sealed */ struct libs__globals__vector_common_type_14_0_s {
#line 572 "globals.m"
  const MR_String libs__globals__vector_common_type_14_0__vct_14_f_0;
#line 572 "globals.m"
  const MR_Integer libs__globals__vector_common_type_14_0__vct_14_f_1;
#line 572 "globals.m"
};

static /* final */ const struct libs__globals__vector_common_type_14_0_s libs__globals_vector_common_14[4];



static /* final */ const MR_Box libs__globals_scalar_common_1[6][2] = {
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
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_il_version_number_0))
  },
  /* row 5 */
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


static /* final */ const struct libs__globals__vector_common_type_3_0_s libs__globals_vector_common_3[5] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 3 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 2 },
  /* row 4 */   {     (MR_Integer) 4 },
};

static /* final */ const struct libs__globals__vector_common_type_4_0_s libs__globals_vector_common_4[15] = {
  /* row 0 */   {     (MR_String) "C" },
  /* row 1 */   {     (MR_String) "IL" },
  /* row 2 */   {     (MR_String) "C#" },
  /* row 3 */   {     (MR_String) "Java" },
  /* row 4 */   {     (MR_String) "Erlang" },
  /* row 5 */   {     (MR_String) "C" },
  /* row 6 */   {     (MR_String) "C#" },
  /* row 7 */   {     (MR_String) "Java" },
  /* row 8 */   {     (MR_String) "IL" },
  /* row 9 */   {     (MR_String) "Erlang" },
  /* row 10 */   {     (MR_String) "c" },
  /* row 11 */   {     (MR_String) "csharp" },
  /* row 12 */   {     (MR_String) "java" },
  /* row 13 */   {     (MR_String) "il" },
  /* row 14 */   {     (MR_String) "erlang" },
};

static /* final */ const struct libs__globals__vector_common_type_5_0_s libs__globals_vector_common_5[6] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 0 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 1 },
  /* row 4 */   {     (MR_Integer) 1 },
  /* row 5 */   {     (MR_Integer) 0 },
};

static /* final */ const struct libs__globals__vector_common_type_6_0_s libs__globals_vector_common_6[5] = {
  /* row 0 */
  {
    (MR_String) "c",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "csharp",
    (MR_Integer) 2
  },
  /* row 2 */
  {
    (MR_String) "erlang",
    (MR_Integer) 4
  },
  /* row 3 */
  {
    (MR_String) "il",
    (MR_Integer) 1
  },
  /* row 4 */
  {
    (MR_String) "java",
    (MR_Integer) 3
  },
};

static /* final */ const struct libs__globals__vector_common_type_7_0_s libs__globals_vector_common_7[7] = {
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
    (MR_Integer) 4
  },
  /* row 5 */
  {
    (MR_String) "il",
    (MR_Integer) 3
  },
  /* row 6 */
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
#line 944 "globals.m"
MR_Unsigned libs__globals__mutable_variable_solver_auto_init_supported;

#line 949 "globals.m"
MR_Word libs__globals__mutable_variable_maybe_from_ground_term_threshold;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock;
#endif

#line 955 "globals.m"
MR_Word libs__globals__mutable_variable_extra_error_info;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_extra_error_info_lock;
#endif

#line 961 "globals.m"
MR_Word libs__globals__mutable_variable_some_errors_were_context_limited;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_some_errors_were_context_limited_lock;
#endif

#line 964 "globals.m"
MR_Word libs__globals__mutable_variable_disable_smart_recompilation;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_disable_smart_recompilation_lock;
#endif

#line 967 "globals.m"
MR_Word libs__globals__mutable_variable_disable_generate_item_version_numbers;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_disable_generate_item_version_numbers_lock;
#endif

#line 970 "globals.m"
MR_Word libs__globals__mutable_variable_maybe_source_file_map;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_maybe_source_file_map_lock;
#endif

#line 944 "globals.m"
void 
libs__globals__user_init_pred_0(void)
#line 944 "globals.m"
{
#line 944 "globals.m"
	libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0();
}

#line 949 "globals.m"
void 
libs__globals__user_init_pred_1(void)
#line 949 "globals.m"
{
#line 949 "globals.m"
	libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0();
}

#line 955 "globals.m"
void 
libs__globals__user_init_pred_2(void)
#line 955 "globals.m"
{
#line 955 "globals.m"
	libs__globals__initialise_mutable_extra_error_info_0_p_0();
}

#line 961 "globals.m"
void 
libs__globals__user_init_pred_3(void)
#line 961 "globals.m"
{
#line 961 "globals.m"
	libs__globals__initialise_mutable_some_errors_were_context_limited_0_p_0();
}

#line 964 "globals.m"
void 
libs__globals__user_init_pred_4(void)
#line 964 "globals.m"
{
#line 964 "globals.m"
	libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0();
}

#line 967 "globals.m"
void 
libs__globals__user_init_pred_5(void)
#line 967 "globals.m"
{
#line 967 "globals.m"
	libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0();
}

#line 970 "globals.m"
void 
libs__globals__user_init_pred_6(void)
#line 970 "globals.m"
{
#line 970 "globals.m"
	libs__globals__initialise_mutable_maybe_source_file_map_0_p_0();
}


#line 1694 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1702 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_0[3] = {
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

#line 1709 "libs.globals.c"
static const MR_ConstString libs__globals__libs__globals__field_names_c_compiler_type_0_0[3] = {
  (MR_String) "gcc_major_ver",
  (MR_String) "gcc_minor_ver",
  (MR_String) "gcc_patch_level"
};

#line 1716 "libs.globals.c"
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

#line 1731 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1libs__globals__type_ctor_info_clang_version_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &libs__globals__libs__globals__type_ctor_info_clang_version_0
  }
};

#line 1739 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_1[1] = {
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1libs__globals__type_ctor_info_clang_version_0
};

#line 1744 "libs.globals.c"
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

#line 1759 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_2[1] = {
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

#line 1764 "libs.globals.c"
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

#line 1779 "libs.globals.c"
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

#line 1794 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_3
};

#line 1799 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_1[1] = {
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_0
};

#line 1804 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_2[1] = {
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_1
};

#line 1809 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_3[1] = {
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_2
};

#line 1814 "libs.globals.c"
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

#line 1838 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_c_compiler_type_0[4] = {
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_2,
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_1,
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_0,
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_3
};

#line 1846 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_c_compiler_type_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 3
};

#line 1854 "libs.globals.c"
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

#line 1871 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_clang_version_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1878 "libs.globals.c"
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

#line 1893 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_clang_version_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_clang_version_0_0
};

#line 1898 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_clang_version_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_clang_version_0_0
  }
};

#line 1907 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_clang_version_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_clang_version_0_0
};

#line 1912 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_clang_version_0[1] = {
  (MR_Integer) 0
};

#line 1917 "libs.globals.c"
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

#line 1934 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_0 = {
  (MR_String) "target_c",
  (MR_Integer) 0
};

#line 1940 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_1 = {
  (MR_String) "target_il",
  (MR_Integer) 1
};

#line 1946 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_2 = {
  (MR_String) "target_csharp",
  (MR_Integer) 2
};

#line 1952 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_3 = {
  (MR_String) "target_java",
  (MR_Integer) 3
};

#line 1958 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_4 = {
  (MR_String) "target_erlang",
  (MR_Integer) 4
};

#line 1964 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_compilation_target_0[5] = {
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_0,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_1,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_2,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_3,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_4
};

#line 1973 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_compilation_target_0[5] = {
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_0,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_2,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_4,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_1,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_3
};

#line 1982 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_compilation_target_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 2
};

#line 1991 "libs.globals.c"
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
  (MR_Integer) 5,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_compilation_target_0
};

#line 2008 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_0 = {
  (MR_String) "csharp_microsoft",
  (MR_Integer) 0
};

#line 2014 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_1 = {
  (MR_String) "csharp_mono",
  (MR_Integer) 1
};

#line 2020 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_2 = {
  (MR_String) "csharp_unknown",
  (MR_Integer) 2
};

#line 2026 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_csharp_compiler_type_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_0,
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_1,
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_2
};

#line 2033 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_csharp_compiler_type_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_0,
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_1,
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_2
};

#line 2040 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_csharp_compiler_type_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 2047 "libs.globals.c"
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

#line 2064 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_0 = {
  (MR_String) "env_type_posix",
  (MR_Integer) 0
};

#line 2070 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_1 = {
  (MR_String) "env_type_cygwin",
  (MR_Integer) 1
};

#line 2076 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_2 = {
  (MR_String) "env_type_msys",
  (MR_Integer) 2
};

#line 2082 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_3 = {
  (MR_String) "env_type_win_cmd",
  (MR_Integer) 3
};

#line 2088 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_4 = {
  (MR_String) "env_type_powershell",
  (MR_Integer) 4
};

#line 2094 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_env_type_0[5] = {
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_0,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_1,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_2,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_3,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_4
};

#line 2103 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_env_type_0[5] = {
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_1,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_2,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_0,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_4,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_3
};

#line 2112 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_env_type_0[5] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 3
};

#line 2121 "libs.globals.c"
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

#line 2138 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_file_install_cmd_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2144 "libs.globals.c"
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

#line 2159 "libs.globals.c"
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

#line 2174 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_file_install_cmd_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_1
};

#line 2179 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_file_install_cmd_0_1[1] = {
  &libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_0
};

#line 2184 "libs.globals.c"
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

#line 2198 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_file_install_cmd_0[2] = {
  &libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_1,
  &libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_0
};

#line 2204 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_file_install_cmd_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2210 "libs.globals.c"
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

#line 2227 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_0 = {
  (MR_String) "lang_c",
  (MR_Integer) 0
};

#line 2233 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_1 = {
  (MR_String) "lang_csharp",
  (MR_Integer) 1
};

#line 2239 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_2 = {
  (MR_String) "lang_java",
  (MR_Integer) 2
};

#line 2245 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_3 = {
  (MR_String) "lang_il",
  (MR_Integer) 3
};

#line 2251 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_4 = {
  (MR_String) "lang_erlang",
  (MR_Integer) 4
};

#line 2257 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_foreign_language_0[5] = {
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_0,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_1,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_2,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_3,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_4
};

#line 2266 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_foreign_language_0[5] = {
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_0,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_1,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_4,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_3,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_2
};

#line 2275 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_foreign_language_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 2284 "libs.globals.c"
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
  (MR_Integer) 5,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_foreign_language_0
};

#line 2301 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_0 = {
  (MR_String) "gc_automatic",
  (MR_Integer) 0
};

#line 2307 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_1 = {
  (MR_String) "gc_none",
  (MR_Integer) 1
};

#line 2313 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_2 = {
  (MR_String) "gc_boehm",
  (MR_Integer) 2
};

#line 2319 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_3 = {
  (MR_String) "gc_boehm_debug",
  (MR_Integer) 3
};

#line 2325 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_4 = {
  (MR_String) "gc_hgc",
  (MR_Integer) 4
};

#line 2331 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_5 = {
  (MR_String) "gc_accurate",
  (MR_Integer) 5
};

#line 2337 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_gc_method_0[6] = {
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_0,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_1,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_2,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_3,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_4,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_5
};

#line 2347 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_gc_method_0[6] = {
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_5,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_0,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_2,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_3,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_4,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_1
};

#line 2357 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_gc_method_0[6] = {
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 0
};

#line 2367 "libs.globals.c"
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

#line 2384 "libs.globals.c"
static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_TypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 2393 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0
  }
};

#line 2401 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1libs__globals__type_ctor_info_il_version_number_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &libs__globals__libs__globals__type_ctor_info_il_version_number_0
  }
};

#line 2409 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1mdbcomp__feedback__type_ctor_info_feedback_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_0
  }
};

#line 2417 "libs.globals.c"
static const MR_FA_TypeInfo_Struct1 libs__globals__list__ti_list_1libs__globals__type_ctor_info_line_number_range_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &libs__globals__libs__globals__type_ctor_info_line_number_range_0
  }
};

#line 2425 "libs.globals.c"
static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1libs__globals__type_ctor_info_line_number_range_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &libs__globals__list__ti_list_1libs__globals__type_ctor_info_line_number_range_0
  }
};

#line 2434 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_globals_0_0[20] = {
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
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_file_install_cmd_0,
  (MR_PseudoTypeInfo) &libs__globals__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1libs__globals__type_ctor_info_line_number_range_0
};

#line 2458 "libs.globals.c"
static const MR_ConstString libs__globals__libs__globals__field_names_globals_0_0[20] = {
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
  (MR_String) "g_file_install_cmd",
  (MR_String) "g_limit_error_contexts_map"
};

#line 2482 "libs.globals.c"
static const MR_DuArgLocn libs__globals__libs__globals__field_locns_globals_0_0[20] = {
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
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

#line 2586 "libs.globals.c"
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

#line 2601 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_globals_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_globals_0_0
};

#line 2606 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_globals_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_globals_0_0
  }
};

#line 2615 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_globals_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_globals_0_0
};

#line 2620 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_globals_0[1] = {
  (MR_Integer) 0
};

#line 2625 "libs.globals.c"
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

#line 2642 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_il_version_number_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2650 "libs.globals.c"
static const MR_ConstString libs__globals__libs__globals__field_names_il_version_number_0_0[4] = {
  (MR_String) "ivn_major",
  (MR_String) "ivn_minor",
  (MR_String) "ivn_build",
  (MR_String) "ivn_revision"
};

#line 2658 "libs.globals.c"
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

#line 2673 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_il_version_number_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_il_version_number_0_0
};

#line 2678 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_il_version_number_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_il_version_number_0_0
  }
};

#line 2687 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_il_version_number_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_il_version_number_0_0
};

#line 2692 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_il_version_number_0[1] = {
  (MR_Integer) 0
};

#line 2697 "libs.globals.c"
const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_il_version_number_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__globals____Unify____il_version_number_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____il_version_number_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "il_version_number",
  {     libs__globals__libs__globals__du_name_ordered_il_version_number_0 },
  {     libs__globals__libs__globals__du_ptag_ordered_il_version_number_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_il_version_number_0
};

#line 2714 "libs.globals.c"
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

#line 2731 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_line_number_range_0_0[2] = {
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

#line 2737 "libs.globals.c"
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

#line 2752 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_line_number_range_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_line_number_range_0_0
};

#line 2757 "libs.globals.c"
static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_line_number_range_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_line_number_range_0_0
  }
};

#line 2766 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_line_number_range_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_line_number_range_0_0
};

#line 2771 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_line_number_range_0[1] = {
  (MR_Integer) 0
};

#line 2776 "libs.globals.c"
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

#line 2793 "libs.globals.c"
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

#line 2810 "libs.globals.c"
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

#line 2825 "libs.globals.c"
static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_reuse_strategy_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2830 "libs.globals.c"
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

#line 2845 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_0
};

#line 2850 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_1[1] = {
  &libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_1
};

#line 2855 "libs.globals.c"
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

#line 2869 "libs.globals.c"
static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_reuse_strategy_0[2] = {
  &libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_0,
  &libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_1
};

#line 2875 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_reuse_strategy_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2881 "libs.globals.c"
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

#line 2898 "libs.globals.c"
static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2907 "libs.globals.c"
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

#line 2924 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_0 = {
  (MR_String) "none",
  (MR_Integer) 0
};

#line 2930 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_1 = {
  (MR_String) "shallow",
  (MR_Integer) 1
};

#line 2936 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_2 = {
  (MR_String) "deep",
  (MR_Integer) 2
};

#line 2942 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_ssdb_trace_level_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_0,
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_1,
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_2
};

#line 2949 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_ssdb_trace_level_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_2,
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_0,
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_1
};

#line 2956 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_ssdb_trace_level_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2963 "libs.globals.c"
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

#line 2980 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_0 = {
  (MR_String) "tags_none",
  (MR_Integer) 0
};

#line 2986 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_1 = {
  (MR_String) "tags_low",
  (MR_Integer) 1
};

#line 2992 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_2 = {
  (MR_String) "tags_high",
  (MR_Integer) 2
};

#line 2998 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_tags_method_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_0,
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_1,
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_2
};

#line 3005 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_tags_method_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_2,
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_1,
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_0
};

#line 3012 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_tags_method_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3019 "libs.globals.c"
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

#line 3036 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_0 = {
  (MR_String) "norm_simple",
  (MR_Integer) 0
};

#line 3042 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_1 = {
  (MR_String) "norm_total",
  (MR_Integer) 1
};

#line 3048 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_2 = {
  (MR_String) "norm_num_data_elems",
  (MR_Integer) 2
};

#line 3054 "libs.globals.c"
static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_3 = {
  (MR_String) "norm_size_data_elems",
  (MR_Integer) 3
};

#line 3060 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_termination_norm_0[4] = {
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_0,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_1,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_2,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_3
};

#line 3068 "libs.globals.c"
static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_termination_norm_0[4] = {
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_2,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_0,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_3,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_1
};

#line 3076 "libs.globals.c"
static const MR_Integer libs__globals__libs__globals__functor_number_map_termination_norm_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 3084 "libs.globals.c"
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

#line 3101 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____c_compiler_type_0_0_10001(
#line 3104 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3106 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3108 "libs.globals.c"
{
#line 3110 "libs.globals.c"
  {
#line 3112 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3115 "libs.globals.c"
    {
#line 3117 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____c_compiler_type_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3120 "libs.globals.c"
    return libs__globals__succeeded;
#line 3122 "libs.globals.c"
  }
#line 3124 "libs.globals.c"
}

#line 3127 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____c_compiler_type_0_0_10001(
#line 3130 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3132 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3134 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3136 "libs.globals.c"
{
#line 3138 "libs.globals.c"
  {
#line 3140 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3143 "libs.globals.c"
    {
#line 3145 "libs.globals.c"
      libs__globals____Compare____c_compiler_type_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3148 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3150 "libs.globals.c"
  }
#line 3152 "libs.globals.c"
}

#line 3155 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____clang_version_0_0_10001(
#line 3158 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3160 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3162 "libs.globals.c"
{
#line 3164 "libs.globals.c"
  {
#line 3166 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3169 "libs.globals.c"
    {
#line 3171 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____clang_version_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3174 "libs.globals.c"
    return libs__globals__succeeded;
#line 3176 "libs.globals.c"
  }
#line 3178 "libs.globals.c"
}

#line 3181 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____clang_version_0_0_10001(
#line 3184 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3186 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3188 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3190 "libs.globals.c"
{
#line 3192 "libs.globals.c"
  {
#line 3194 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3197 "libs.globals.c"
    {
#line 3199 "libs.globals.c"
      libs__globals____Compare____clang_version_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3202 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3204 "libs.globals.c"
  }
#line 3206 "libs.globals.c"
}

#line 3209 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____compilation_target_0_0_10001(
#line 3212 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3214 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3216 "libs.globals.c"
{
#line 3218 "libs.globals.c"
  {
#line 3220 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3223 "libs.globals.c"
    {
#line 3225 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____compilation_target_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3228 "libs.globals.c"
    return libs__globals__succeeded;
#line 3230 "libs.globals.c"
  }
#line 3232 "libs.globals.c"
}

#line 3235 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____compilation_target_0_0_10001(
#line 3238 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3240 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3242 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3244 "libs.globals.c"
{
#line 3246 "libs.globals.c"
  {
#line 3248 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3251 "libs.globals.c"
    {
#line 3253 "libs.globals.c"
      libs__globals____Compare____compilation_target_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3256 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3258 "libs.globals.c"
  }
#line 3260 "libs.globals.c"
}

#line 3263 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____csharp_compiler_type_0_0_10001(
#line 3266 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3268 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3270 "libs.globals.c"
{
#line 3272 "libs.globals.c"
  {
#line 3274 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3277 "libs.globals.c"
    {
#line 3279 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____csharp_compiler_type_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3282 "libs.globals.c"
    return libs__globals__succeeded;
#line 3284 "libs.globals.c"
  }
#line 3286 "libs.globals.c"
}

#line 3289 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____csharp_compiler_type_0_0_10001(
#line 3292 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3294 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3296 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3298 "libs.globals.c"
{
#line 3300 "libs.globals.c"
  {
#line 3302 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3305 "libs.globals.c"
    {
#line 3307 "libs.globals.c"
      libs__globals____Compare____csharp_compiler_type_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3310 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3312 "libs.globals.c"
  }
#line 3314 "libs.globals.c"
}

#line 3317 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____env_type_0_0_10001(
#line 3320 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3322 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3324 "libs.globals.c"
{
#line 3326 "libs.globals.c"
  {
#line 3328 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3331 "libs.globals.c"
    {
#line 3333 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____env_type_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3336 "libs.globals.c"
    return libs__globals__succeeded;
#line 3338 "libs.globals.c"
  }
#line 3340 "libs.globals.c"
}

#line 3343 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____env_type_0_0_10001(
#line 3346 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3348 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3350 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3352 "libs.globals.c"
{
#line 3354 "libs.globals.c"
  {
#line 3356 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3359 "libs.globals.c"
    {
#line 3361 "libs.globals.c"
      libs__globals____Compare____env_type_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3364 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3366 "libs.globals.c"
  }
#line 3368 "libs.globals.c"
}

#line 3371 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____file_install_cmd_0_0_10001(
#line 3374 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3376 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3378 "libs.globals.c"
{
#line 3380 "libs.globals.c"
  {
#line 3382 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3385 "libs.globals.c"
    {
#line 3387 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____file_install_cmd_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3390 "libs.globals.c"
    return libs__globals__succeeded;
#line 3392 "libs.globals.c"
  }
#line 3394 "libs.globals.c"
}

#line 3397 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____file_install_cmd_0_0_10001(
#line 3400 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3402 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3404 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3406 "libs.globals.c"
{
#line 3408 "libs.globals.c"
  {
#line 3410 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3413 "libs.globals.c"
    {
#line 3415 "libs.globals.c"
      libs__globals____Compare____file_install_cmd_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3418 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3420 "libs.globals.c"
  }
#line 3422 "libs.globals.c"
}

#line 3425 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____foreign_language_0_0_10001(
#line 3428 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3430 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3432 "libs.globals.c"
{
#line 3434 "libs.globals.c"
  {
#line 3436 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3439 "libs.globals.c"
    {
#line 3441 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____foreign_language_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3444 "libs.globals.c"
    return libs__globals__succeeded;
#line 3446 "libs.globals.c"
  }
#line 3448 "libs.globals.c"
}

#line 3451 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____foreign_language_0_0_10001(
#line 3454 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3456 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3458 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3460 "libs.globals.c"
{
#line 3462 "libs.globals.c"
  {
#line 3464 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3467 "libs.globals.c"
    {
#line 3469 "libs.globals.c"
      libs__globals____Compare____foreign_language_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3472 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3474 "libs.globals.c"
  }
#line 3476 "libs.globals.c"
}

#line 3479 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____gc_method_0_0_10001(
#line 3482 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3484 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3486 "libs.globals.c"
{
#line 3488 "libs.globals.c"
  {
#line 3490 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3493 "libs.globals.c"
    {
#line 3495 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____gc_method_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3498 "libs.globals.c"
    return libs__globals__succeeded;
#line 3500 "libs.globals.c"
  }
#line 3502 "libs.globals.c"
}

#line 3505 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____gc_method_0_0_10001(
#line 3508 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3510 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3512 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3514 "libs.globals.c"
{
#line 3516 "libs.globals.c"
  {
#line 3518 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3521 "libs.globals.c"
    {
#line 3523 "libs.globals.c"
      libs__globals____Compare____gc_method_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3526 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3528 "libs.globals.c"
  }
#line 3530 "libs.globals.c"
}

#line 3533 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____globals_0_0_10001(
#line 3536 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3538 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3540 "libs.globals.c"
{
#line 3542 "libs.globals.c"
  {
#line 3544 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3547 "libs.globals.c"
    {
#line 3549 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____globals_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3552 "libs.globals.c"
    return libs__globals__succeeded;
#line 3554 "libs.globals.c"
  }
#line 3556 "libs.globals.c"
}

#line 3559 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____globals_0_0_10001(
#line 3562 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3564 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3566 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3568 "libs.globals.c"
{
#line 3570 "libs.globals.c"
  {
#line 3572 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3575 "libs.globals.c"
    {
#line 3577 "libs.globals.c"
      libs__globals____Compare____globals_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3580 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3582 "libs.globals.c"
  }
#line 3584 "libs.globals.c"
}

#line 3587 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____il_version_number_0_0_10001(
#line 3590 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3592 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3594 "libs.globals.c"
{
#line 3596 "libs.globals.c"
  {
#line 3598 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3601 "libs.globals.c"
    {
#line 3603 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____il_version_number_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3606 "libs.globals.c"
    return libs__globals__succeeded;
#line 3608 "libs.globals.c"
  }
#line 3610 "libs.globals.c"
}

#line 3613 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____il_version_number_0_0_10001(
#line 3616 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3618 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3620 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3622 "libs.globals.c"
{
#line 3624 "libs.globals.c"
  {
#line 3626 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3629 "libs.globals.c"
    {
#line 3631 "libs.globals.c"
      libs__globals____Compare____il_version_number_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3634 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3636 "libs.globals.c"
  }
#line 3638 "libs.globals.c"
}

#line 3641 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____limit_error_contexts_map_0_0_10001(
#line 3644 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3646 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3648 "libs.globals.c"
{
#line 3650 "libs.globals.c"
  {
#line 3652 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3655 "libs.globals.c"
    {
#line 3657 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____limit_error_contexts_map_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3660 "libs.globals.c"
    return libs__globals__succeeded;
#line 3662 "libs.globals.c"
  }
#line 3664 "libs.globals.c"
}

#line 3667 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____limit_error_contexts_map_0_0_10001(
#line 3670 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3672 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3674 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3676 "libs.globals.c"
{
#line 3678 "libs.globals.c"
  {
#line 3680 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3683 "libs.globals.c"
    {
#line 3685 "libs.globals.c"
      libs__globals____Compare____limit_error_contexts_map_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3688 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3690 "libs.globals.c"
  }
#line 3692 "libs.globals.c"
}

#line 3695 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____line_number_range_0_0_10001(
#line 3698 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3700 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3702 "libs.globals.c"
{
#line 3704 "libs.globals.c"
  {
#line 3706 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3709 "libs.globals.c"
    {
#line 3711 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____line_number_range_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3714 "libs.globals.c"
    return libs__globals__succeeded;
#line 3716 "libs.globals.c"
  }
#line 3718 "libs.globals.c"
}

#line 3721 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____line_number_range_0_0_10001(
#line 3724 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3726 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3728 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3730 "libs.globals.c"
{
#line 3732 "libs.globals.c"
  {
#line 3734 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3737 "libs.globals.c"
    {
#line 3739 "libs.globals.c"
      libs__globals____Compare____line_number_range_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3742 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3744 "libs.globals.c"
  }
#line 3746 "libs.globals.c"
}

#line 3749 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____may_be_thread_safe_0_0_10001(
#line 3752 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3754 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3756 "libs.globals.c"
{
#line 3758 "libs.globals.c"
  {
#line 3760 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3763 "libs.globals.c"
    {
#line 3765 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____may_be_thread_safe_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3768 "libs.globals.c"
    return libs__globals__succeeded;
#line 3770 "libs.globals.c"
  }
#line 3772 "libs.globals.c"
}

#line 3775 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____may_be_thread_safe_0_0_10001(
#line 3778 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3780 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3782 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3784 "libs.globals.c"
{
#line 3786 "libs.globals.c"
  {
#line 3788 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3791 "libs.globals.c"
    {
#line 3793 "libs.globals.c"
      libs__globals____Compare____may_be_thread_safe_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3796 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3798 "libs.globals.c"
  }
#line 3800 "libs.globals.c"
}

#line 3803 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____reuse_strategy_0_0_10001(
#line 3806 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3808 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3810 "libs.globals.c"
{
#line 3812 "libs.globals.c"
  {
#line 3814 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3817 "libs.globals.c"
    {
#line 3819 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____reuse_strategy_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3822 "libs.globals.c"
    return libs__globals__succeeded;
#line 3824 "libs.globals.c"
  }
#line 3826 "libs.globals.c"
}

#line 3829 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____reuse_strategy_0_0_10001(
#line 3832 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3834 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3836 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3838 "libs.globals.c"
{
#line 3840 "libs.globals.c"
  {
#line 3842 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3845 "libs.globals.c"
    {
#line 3847 "libs.globals.c"
      libs__globals____Compare____reuse_strategy_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3850 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3852 "libs.globals.c"
  }
#line 3854 "libs.globals.c"
}

#line 3857 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____source_file_map_0_0_10001(
#line 3860 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3862 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3864 "libs.globals.c"
{
#line 3866 "libs.globals.c"
  {
#line 3868 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3871 "libs.globals.c"
    {
#line 3873 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____source_file_map_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3876 "libs.globals.c"
    return libs__globals__succeeded;
#line 3878 "libs.globals.c"
  }
#line 3880 "libs.globals.c"
}

#line 3883 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____source_file_map_0_0_10001(
#line 3886 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3888 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3890 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3892 "libs.globals.c"
{
#line 3894 "libs.globals.c"
  {
#line 3896 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3899 "libs.globals.c"
    {
#line 3901 "libs.globals.c"
      libs__globals____Compare____source_file_map_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3904 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3906 "libs.globals.c"
  }
#line 3908 "libs.globals.c"
}

#line 3911 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____ssdb_trace_level_0_0_10001(
#line 3914 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3916 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3918 "libs.globals.c"
{
#line 3920 "libs.globals.c"
  {
#line 3922 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3925 "libs.globals.c"
    {
#line 3927 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____ssdb_trace_level_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3930 "libs.globals.c"
    return libs__globals__succeeded;
#line 3932 "libs.globals.c"
  }
#line 3934 "libs.globals.c"
}

#line 3937 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____ssdb_trace_level_0_0_10001(
#line 3940 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3942 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3944 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 3946 "libs.globals.c"
{
#line 3948 "libs.globals.c"
  {
#line 3950 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 3953 "libs.globals.c"
    {
#line 3955 "libs.globals.c"
      libs__globals____Compare____ssdb_trace_level_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 3958 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 3960 "libs.globals.c"
  }
#line 3962 "libs.globals.c"
}

#line 3965 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____tags_method_0_0_10001(
#line 3968 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 3970 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 3972 "libs.globals.c"
{
#line 3974 "libs.globals.c"
  {
#line 3976 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 3979 "libs.globals.c"
    {
#line 3981 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____tags_method_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 3984 "libs.globals.c"
    return libs__globals__succeeded;
#line 3986 "libs.globals.c"
  }
#line 3988 "libs.globals.c"
}

#line 3991 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____tags_method_0_0_10001(
#line 3994 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 3996 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 3998 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 4000 "libs.globals.c"
{
#line 4002 "libs.globals.c"
  {
#line 4004 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 4007 "libs.globals.c"
    {
#line 4009 "libs.globals.c"
      libs__globals____Compare____tags_method_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 4012 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 4014 "libs.globals.c"
  }
#line 4016 "libs.globals.c"
}

#line 4019 "libs.globals.c"
static MR_bool MR_CALL 
libs__globals____Unify____termination_norm_0_0_10001(
#line 4022 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_1,
#line 4024 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2)
#line 4026 "libs.globals.c"
{
#line 4028 "libs.globals.c"
  {
#line 4030 "libs.globals.c"
    MR_bool libs__globals__succeeded;

#line 4033 "libs.globals.c"
    {
#line 4035 "libs.globals.c"
      libs__globals__succeeded = libs__globals____Unify____termination_norm_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
#line 4038 "libs.globals.c"
    return libs__globals__succeeded;
#line 4040 "libs.globals.c"
  }
#line 4042 "libs.globals.c"
}

#line 4045 "libs.globals.c"
static void MR_CALL 
libs__globals____Compare____termination_norm_0_0_10001(
#line 4048 "libs.globals.c"
  MR_Box * libs__globals__wrapper_arg_1,
#line 4050 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_2,
#line 4052 "libs.globals.c"
  MR_Box libs__globals__wrapper_arg_3)
#line 4054 "libs.globals.c"
{
#line 4056 "libs.globals.c"
  {
#line 4058 "libs.globals.c"
    MR_Word libs__globals__conv0_HeadVar__1_1;

#line 4061 "libs.globals.c"
    {
#line 4063 "libs.globals.c"
      libs__globals____Compare____termination_norm_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
#line 4066 "libs.globals.c"
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
#line 4068 "libs.globals.c"
  }
#line 4070 "libs.globals.c"
}

#line 465 "globals.m"
static MR_bool MR_CALL 
libs__globals__IntroducedFrom__pred__convert_c_compiler_type_with_version__465__1_1_p_0(
#line 465 "globals.m"
  MR_Char libs__globals__HeadVar__1_12)
#line 465 "globals.m"
{
#line 465 "globals.m"
  {
#line 465 "globals.m"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__1_12 == (MR_Char) 95);

#line 465 "globals.m"
    return libs__globals__succeeded;
#line 465 "globals.m"
  }
#line 465 "globals.m"
}

#line 744 "globals.m"
static MR_Word MR_CALL 
libs__globals__IntroducedFrom__func__get_backend_foreign_languages__744__1_1_f_0(
#line 744 "globals.m"
  MR_String libs__globals__HeadVar__1_11)
#line 744 "globals.m"
{
#line 744 "globals.m"
  {
#line 744 "globals.m"
    MR_bool libs__globals__succeeded;
#line 744 "globals.m"
    MR_Word libs__globals__HeadVar__2_12;
#line 744 "globals.m"
    MR_Word libs__globals__ForeignLang0_8;

#line 742 "globals.m"
    {
#line 742 "globals.m"
      libs__globals__succeeded = libs__globals__convert_foreign_language_2_p_0(libs__globals__HeadVar__1_11, &libs__globals__ForeignLang0_8);
    }
#line 744 "globals.m"
    if (libs__globals__succeeded)
#line 743 "globals.m"
      libs__globals__HeadVar__2_12 = libs__globals__ForeignLang0_8;
#line 744 "globals.m"
    else
#line 745 "globals.m"
      {
#line 745 "globals.m"
        {
#line 745 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.get_backend_foreign_languages\'/2", (MR_String) "invalid foreign_language string");
        }
#line 745 "globals.m"
      }
#line 744 "globals.m"
    return libs__globals__HeadVar__2_12;
#line 744 "globals.m"
  }
#line 744 "globals.m"
}

#line 114 "globals.m"
void MR_CALL 
libs__globals____Compare____termination_norm_0_0(
#line 114 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 114 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 114 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 114 "globals.m"
{
#line 114 "globals.m"
  {
#line 114 "globals.m"
    MR_bool libs__globals__succeeded;
#line 114 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 114 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 114 "globals.m"
    {
#line 114 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 114 "globals.m"
      return;
    }
#line 114 "globals.m"
  }
#line 114 "globals.m"
}

#line 114 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____termination_norm_0_0(
#line 114 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 114 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 114 "globals.m"
{
#line 4176 "libs.globals.c"
  {
#line 4178 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 4181 "libs.globals.c"
    return libs__globals__succeeded;
#line 4183 "libs.globals.c"
  }
#line 114 "globals.m"
}

#line 109 "globals.m"
void MR_CALL 
libs__globals____Compare____tags_method_0_0(
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
libs__globals____Unify____tags_method_0_0(
#line 109 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 109 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 109 "globals.m"
{
#line 4229 "libs.globals.c"
  {
#line 4231 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 4234 "libs.globals.c"
    return libs__globals__succeeded;
#line 4236 "libs.globals.c"
  }
#line 109 "globals.m"
}

#line 187 "globals.m"
void MR_CALL 
libs__globals____Compare____ssdb_trace_level_0_0(
#line 187 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 187 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 187 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 187 "globals.m"
{
#line 187 "globals.m"
  {
#line 187 "globals.m"
    MR_bool libs__globals__succeeded;
#line 187 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 187 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 187 "globals.m"
    {
#line 187 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 187 "globals.m"
      return;
    }
#line 187 "globals.m"
  }
#line 187 "globals.m"
}

#line 187 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____ssdb_trace_level_0_0(
#line 187 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 187 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 187 "globals.m"
{
#line 4282 "libs.globals.c"
  {
#line 4284 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 4287 "libs.globals.c"
    return libs__globals__succeeded;
#line 4289 "libs.globals.c"
  }
#line 187 "globals.m"
}

#line 213 "globals.m"
void MR_CALL 
libs__globals____Compare____source_file_map_0_0(
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
    MR_Word libs__globals__Cast_HeadVar1_4 = libs__globals__HeadVar__2_2;
#line 213 "globals.m"
    MR_Word libs__globals__Cast_HeadVar2_5 = libs__globals__HeadVar__3_3;

#line 213 "globals.m"
    {
#line 213 "globals.m"
      mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_2[2], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__Cast_HeadVar1_4)), ((MR_Box) (libs__globals__Cast_HeadVar2_5)));
#line 213 "globals.m"
      return;
    }
#line 213 "globals.m"
  }
#line 213 "globals.m"
}

#line 213 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____source_file_map_0_0(
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
    MR_Word libs__globals__Cast_HeadVar1_3 = libs__globals__HeadVar__1_1;
#line 213 "globals.m"
    MR_Word libs__globals__Cast_HeadVar2_4 = libs__globals__HeadVar__2_2;

#line 213 "globals.m"
    {
#line 213 "globals.m"
      return libs__globals__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__globals_scalar_common_2[2], ((MR_Box) (libs__globals__Cast_HeadVar1_3)), ((MR_Box) (libs__globals__Cast_HeadVar2_4)));
    }
#line 213 "globals.m"
    return libs__globals__succeeded;
#line 213 "globals.m"
  }
#line 213 "globals.m"
}

#line 156 "globals.m"
void MR_CALL 
libs__globals____Compare____reuse_strategy_0_0(
#line 156 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 156 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 156 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 156 "globals.m"
{
#line 156 "globals.m"
  {
#line 156 "globals.m"
    MR_bool libs__globals__succeeded;
#line 156 "globals.m"
    MR_Integer libs__globals__CastX_8 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 156 "globals.m"
    MR_Integer libs__globals__CastY_9 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 156 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_8 == libs__globals__CastY_9);
#line 156 "globals.m"
    if (libs__globals__succeeded)
#line 4380 "libs.globals.c"
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 156 "globals.m"
    else
#line 156 "globals.m"
    if ((libs__globals__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 156 "globals.m"
      if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 156 "globals.m"
        *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 156 "globals.m"
      else
#line 4392 "libs.globals.c"
        *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 156 "globals.m"
    else
#line 156 "globals.m"
      {
#line 156 "globals.m"
        MR_Integer libs__globals__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));

#line 156 "globals.m"
        if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4403 "libs.globals.c"
          *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 156 "globals.m"
        else
#line 156 "globals.m"
          {
#line 156 "globals.m"
            MR_Integer libs__globals__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 0)));

#line 156 "globals.m"
            {
#line 156 "globals.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__V_11_11, libs__globals__V_7_7);
#line 156 "globals.m"
              return;
            }
#line 156 "globals.m"
          }
#line 156 "globals.m"
      }
#line 156 "globals.m"
  }
#line 156 "globals.m"
}

#line 156 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____reuse_strategy_0_0(
#line 156 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 156 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 156 "globals.m"
{
#line 156 "globals.m"
  {
#line 156 "globals.m"
    MR_bool libs__globals__succeeded;
#line 156 "globals.m"
    MR_Integer libs__globals__CastX_7 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 156 "globals.m"
    MR_Integer libs__globals__CastY_8 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 156 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_7 == libs__globals__CastY_8);
#line 156 "globals.m"
    if (libs__globals__succeeded)
#line 156 "globals.m"
      libs__globals__succeeded = MR_TRUE;
#line 156 "globals.m"
    else
#line 156 "globals.m"
    if ((libs__globals__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 156 "globals.m"
      {
#line 156 "globals.m"
        MR_Integer libs__globals__CastX_3 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 156 "globals.m"
        MR_Integer libs__globals__CastY_4 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 156 "globals.m"
        libs__globals__succeeded = (libs__globals__CastY_4 == libs__globals__CastX_3);
#line 156 "globals.m"
      }
#line 156 "globals.m"
    else
#line 156 "globals.m"
      {
#line 156 "globals.m"
        MR_Integer libs__globals__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 156 "globals.m"
        MR_Integer libs__globals__V_6_6;

#line 156 "globals.m"
        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 156 "globals.m"
        if (libs__globals__succeeded)
#line 156 "globals.m"
          {
#line 156 "globals.m"
            libs__globals__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 4484 "libs.globals.c"
            libs__globals__succeeded = (libs__globals__V_5_5 == libs__globals__V_6_6);
#line 156 "globals.m"
          }
#line 156 "globals.m"
      }
#line 156 "globals.m"
    return libs__globals__succeeded;
#line 156 "globals.m"
  }
#line 156 "globals.m"
}

#line 120 "globals.m"
void MR_CALL 
libs__globals____Compare____may_be_thread_safe_0_0(
#line 120 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 120 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 120 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 120 "globals.m"
{
#line 120 "globals.m"
  {
#line 120 "globals.m"
    MR_bool libs__globals__succeeded;
#line 120 "globals.m"
    MR_Word libs__globals__Cast_HeadVar1_4 = libs__globals__HeadVar__2_2;
#line 120 "globals.m"
    MR_Word libs__globals__Cast_HeadVar2_5 = libs__globals__HeadVar__3_3;
#line 120 "globals.m"
    MR_Integer libs__globals__V_7_7 = (MR_Integer) libs__globals__Cast_HeadVar1_4;
#line 120 "globals.m"
    MR_Integer libs__globals__V_8_8 = (MR_Integer) libs__globals__Cast_HeadVar2_5;

#line 120 "globals.m"
    {
#line 120 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__V_7_7, libs__globals__V_8_8);
#line 120 "globals.m"
      return;
    }
#line 120 "globals.m"
  }
#line 120 "globals.m"
}

#line 120 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____may_be_thread_safe_0_0(
#line 120 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 120 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 120 "globals.m"
{
#line 120 "globals.m"
  {
#line 120 "globals.m"
    MR_bool libs__globals__succeeded;
#line 120 "globals.m"
    MR_Word libs__globals__Cast_HeadVar1_3 = libs__globals__HeadVar__1_1;
#line 120 "globals.m"
    MR_Word libs__globals__Cast_HeadVar2_4 = libs__globals__HeadVar__2_2;

#line 120 "globals.m"
    libs__globals__succeeded = (libs__globals__Cast_HeadVar1_3 == libs__globals__Cast_HeadVar2_4);
#line 120 "globals.m"
    return libs__globals__succeeded;
#line 120 "globals.m"
  }
#line 120 "globals.m"
}

#line 215 "globals.m"
void MR_CALL 
libs__globals____Compare____line_number_range_0_0(
#line 215 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 215 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 215 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 215 "globals.m"
{
#line 215 "globals.m"
  {
#line 215 "globals.m"
    MR_bool libs__globals__succeeded;
#line 215 "globals.m"
    MR_Integer libs__globals__CastX_9 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 215 "globals.m"
    MR_Integer libs__globals__CastY_10 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 215 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_9 == libs__globals__CastY_10);
#line 215 "globals.m"
    if (libs__globals__succeeded)
#line 4584 "libs.globals.c"
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 215 "globals.m"
    else
#line 215 "globals.m"
      {
#line 215 "globals.m"
        MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 215 "globals.m"
        MR_Word libs__globals__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 215 "globals.m"
        MR_Word libs__globals__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 0)));
#line 215 "globals.m"
        MR_Word libs__globals__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)));
#line 215 "globals.m"
        MR_Word libs__globals__V_8_8;

#line 215 "globals.m"
        {
#line 215 "globals.m"
          mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[1], &libs__globals__V_8_8, ((MR_Box) (libs__globals__V_4_4)), ((MR_Box) (libs__globals__V_6_6)));
        }
#line 4606 "libs.globals.c"
        libs__globals__succeeded = (libs__globals__V_8_8 == (MR_Integer) 0);
#line 215 "globals.m"
        libs__globals__succeeded = !(libs__globals__succeeded);
#line 215 "globals.m"
        if (libs__globals__succeeded)
#line 215 "globals.m"
          *libs__globals__HeadVar__1_1 = libs__globals__V_8_8;
#line 215 "globals.m"
        else
#line 215 "globals.m"
          {
#line 215 "globals.m"
            {
#line 215 "globals.m"
              mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[1], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__V_5_5)), ((MR_Box) (libs__globals__V_7_7)));
#line 215 "globals.m"
              return;
            }
#line 215 "globals.m"
          }
#line 215 "globals.m"
      }
#line 215 "globals.m"
  }
#line 215 "globals.m"
}

#line 215 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____line_number_range_0_0(
#line 215 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 215 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 215 "globals.m"
{
#line 215 "globals.m"
  {
#line 215 "globals.m"
    MR_bool libs__globals__succeeded;
#line 215 "globals.m"
    MR_Integer libs__globals__CastX_7 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 215 "globals.m"
    MR_Integer libs__globals__CastY_8 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 215 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_7 == libs__globals__CastY_8);
#line 215 "globals.m"
    if (libs__globals__succeeded)
#line 215 "globals.m"
      libs__globals__succeeded = MR_TRUE;
#line 215 "globals.m"
    else
#line 215 "globals.m"
      {
#line 215 "globals.m"
        MR_Word libs__globals__TypeInfo_10_10;
#line 215 "globals.m"
        MR_Word libs__globals__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 215 "globals.m"
        MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)));
#line 215 "globals.m"
        MR_Word libs__globals__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 215 "globals.m"
        MR_Word libs__globals__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)));

#line 4673 "libs.globals.c"
        {
#line 4675 "libs.globals.c"
          libs__globals__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__globals_scalar_common_1[1], ((MR_Box) (libs__globals__V_3_3)), ((MR_Box) (libs__globals__V_5_5)));
        }
#line 215 "globals.m"
        if (libs__globals__succeeded)
#line 215 "globals.m"
          {
#line 4682 "libs.globals.c"
            libs__globals__TypeInfo_10_10 = (MR_Word) &libs__globals_scalar_common_1[1];
#line 4684 "libs.globals.c"
            {
#line 4686 "libs.globals.c"
              return libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_10_10, ((MR_Box) (libs__globals__V_4_4)), ((MR_Box) (libs__globals__V_6_6)));
            }
#line 215 "globals.m"
          }
#line 215 "globals.m"
      }
#line 215 "globals.m"
    return libs__globals__succeeded;
#line 215 "globals.m"
  }
#line 215 "globals.m"
}

#line 226 "globals.m"
void MR_CALL 
libs__globals____Compare____limit_error_contexts_map_0_0(
#line 226 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 226 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 226 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 226 "globals.m"
{
#line 226 "globals.m"
  {
#line 226 "globals.m"
    MR_bool libs__globals__succeeded;
#line 226 "globals.m"
    MR_Word libs__globals__Cast_HeadVar1_4 = libs__globals__HeadVar__2_2;
#line 226 "globals.m"
    MR_Word libs__globals__Cast_HeadVar2_5 = libs__globals__HeadVar__3_3;

#line 226 "globals.m"
    {
#line 226 "globals.m"
      mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_2[1], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__Cast_HeadVar1_4)), ((MR_Box) (libs__globals__Cast_HeadVar2_5)));
#line 226 "globals.m"
      return;
    }
#line 226 "globals.m"
  }
#line 226 "globals.m"
}

#line 226 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____limit_error_contexts_map_0_0(
#line 226 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 226 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 226 "globals.m"
{
#line 226 "globals.m"
  {
#line 226 "globals.m"
    MR_bool libs__globals__succeeded;
#line 226 "globals.m"
    MR_Word libs__globals__Cast_HeadVar1_3 = libs__globals__HeadVar__1_1;
#line 226 "globals.m"
    MR_Word libs__globals__Cast_HeadVar2_4 = libs__globals__HeadVar__2_2;

#line 226 "globals.m"
    {
#line 226 "globals.m"
      return libs__globals__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__globals_scalar_common_2[1], ((MR_Box) (libs__globals__Cast_HeadVar1_3)), ((MR_Box) (libs__globals__Cast_HeadVar2_4)));
    }
#line 226 "globals.m"
    return libs__globals__succeeded;
#line 226 "globals.m"
  }
#line 226 "globals.m"
}

#line 252 "globals.m"
void MR_CALL 
libs__globals____Compare____il_version_number_0_0(
#line 252 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 252 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 252 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 252 "globals.m"
{
#line 252 "globals.m"
  {
#line 252 "globals.m"
    MR_bool libs__globals__succeeded;
#line 252 "globals.m"
    MR_Integer libs__globals__CastX_15 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 252 "globals.m"
    MR_Integer libs__globals__CastY_16 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 252 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_15 == libs__globals__CastY_16);
#line 252 "globals.m"
    if (libs__globals__succeeded)
#line 4786 "libs.globals.c"
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 252 "globals.m"
    else
#line 252 "globals.m"
      {
#line 252 "globals.m"
        MR_Integer libs__globals__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 252 "globals.m"
        MR_Integer libs__globals__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 252 "globals.m"
        MR_Integer libs__globals__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)));
#line 252 "globals.m"
        MR_Integer libs__globals__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 3)));
#line 252 "globals.m"
        MR_Integer libs__globals__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 0)));
#line 252 "globals.m"
        MR_Integer libs__globals__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)));
#line 252 "globals.m"
        MR_Integer libs__globals__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 2)));
#line 252 "globals.m"
        MR_Integer libs__globals__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 3)));
#line 252 "globals.m"
        MR_Word libs__globals__V_12_12;

#line 252 "globals.m"
        {
#line 252 "globals.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_12_12, libs__globals__V_4_4, libs__globals__V_8_8);
        }
#line 4816 "libs.globals.c"
        libs__globals__succeeded = (libs__globals__V_12_12 == (MR_Integer) 0);
#line 252 "globals.m"
        libs__globals__succeeded = !(libs__globals__succeeded);
#line 252 "globals.m"
        if (libs__globals__succeeded)
#line 252 "globals.m"
          *libs__globals__HeadVar__1_1 = libs__globals__V_12_12;
#line 252 "globals.m"
        else
#line 252 "globals.m"
          {
#line 252 "globals.m"
            MR_Word libs__globals__V_13_13;

#line 252 "globals.m"
            {
#line 252 "globals.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_13_13, libs__globals__V_5_5, libs__globals__V_9_9);
            }
#line 4836 "libs.globals.c"
            libs__globals__succeeded = (libs__globals__V_13_13 == (MR_Integer) 0);
#line 252 "globals.m"
            libs__globals__succeeded = !(libs__globals__succeeded);
#line 252 "globals.m"
            if (libs__globals__succeeded)
#line 252 "globals.m"
              *libs__globals__HeadVar__1_1 = libs__globals__V_13_13;
#line 252 "globals.m"
            else
#line 252 "globals.m"
              {
#line 252 "globals.m"
                MR_Word libs__globals__V_14_14;

#line 252 "globals.m"
                {
#line 252 "globals.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_14_14, libs__globals__V_6_6, libs__globals__V_10_10);
                }
#line 4856 "libs.globals.c"
                libs__globals__succeeded = (libs__globals__V_14_14 == (MR_Integer) 0);
#line 252 "globals.m"
                libs__globals__succeeded = !(libs__globals__succeeded);
#line 252 "globals.m"
                if (libs__globals__succeeded)
#line 252 "globals.m"
                  *libs__globals__HeadVar__1_1 = libs__globals__V_14_14;
#line 252 "globals.m"
                else
#line 252 "globals.m"
                  {
#line 252 "globals.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__V_7_7, libs__globals__V_11_11);
#line 252 "globals.m"
                    return;
                  }
#line 252 "globals.m"
              }
#line 252 "globals.m"
          }
#line 252 "globals.m"
      }
#line 252 "globals.m"
  }
#line 252 "globals.m"
}

#line 252 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____il_version_number_0_0(
#line 252 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 252 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 252 "globals.m"
{
#line 252 "globals.m"
  {
#line 252 "globals.m"
    MR_bool libs__globals__succeeded;
#line 252 "globals.m"
    MR_Integer libs__globals__CastX_11 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 252 "globals.m"
    MR_Integer libs__globals__CastY_12 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 252 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_11 == libs__globals__CastY_12);
#line 252 "globals.m"
    if (libs__globals__succeeded)
#line 252 "globals.m"
      libs__globals__succeeded = MR_TRUE;
#line 252 "globals.m"
    else
#line 252 "globals.m"
      {
#line 252 "globals.m"
        MR_Integer libs__globals__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 252 "globals.m"
        MR_Integer libs__globals__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)));
#line 252 "globals.m"
        MR_Integer libs__globals__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 2)));
#line 252 "globals.m"
        MR_Integer libs__globals__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 3)));
#line 252 "globals.m"
        MR_Integer libs__globals__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 252 "globals.m"
        MR_Integer libs__globals__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 252 "globals.m"
        MR_Integer libs__globals__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)));
#line 252 "globals.m"
        MR_Integer libs__globals__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 3)));

#line 4929 "libs.globals.c"
        libs__globals__succeeded = (libs__globals__V_3_3 == libs__globals__V_7_7);
#line 252 "globals.m"
        if (libs__globals__succeeded)
#line 252 "globals.m"
          {
#line 4935 "libs.globals.c"
            libs__globals__succeeded = (libs__globals__V_4_4 == libs__globals__V_8_8);
#line 252 "globals.m"
            if (libs__globals__succeeded)
#line 252 "globals.m"
              {
#line 4941 "libs.globals.c"
                libs__globals__succeeded = (libs__globals__V_5_5 == libs__globals__V_9_9);
#line 252 "globals.m"
                if (libs__globals__succeeded)
#line 4945 "libs.globals.c"
                  libs__globals__succeeded = (libs__globals__V_6_6 == libs__globals__V_10_10);
#line 252 "globals.m"
              }
#line 252 "globals.m"
          }
#line 252 "globals.m"
      }
#line 252 "globals.m"
    return libs__globals__succeeded;
#line 252 "globals.m"
  }
#line 252 "globals.m"
}

#line 681 "globals.m"
void MR_CALL 
libs__globals____Compare____globals_0_0(
#line 681 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 681 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 681 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 681 "globals.m"
{
#line 681 "globals.m"
  {
#line 681 "globals.m"
    MR_bool libs__globals__succeeded;
#line 681 "globals.m"
    MR_Integer libs__globals__CastX_63 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 681 "globals.m"
    MR_Integer libs__globals__CastY_64 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 681 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_63 == libs__globals__CastY_64);
#line 681 "globals.m"
    if (libs__globals__succeeded)
#line 4984 "libs.globals.c"
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 681 "globals.m"
    else
#line 681 "globals.m"
      {
#line 681 "globals.m"
        MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 681 "globals.m"
        MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 681 "globals.m"
        MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 681 "globals.m"
        MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 681 "globals.m"
        MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 681 "globals.m"
        MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 681 "globals.m"
        MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 681 "globals.m"
        MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)));
#line 681 "globals.m"
        MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 681 "globals.m"
        MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 681 "globals.m"
        MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 4)));
#line 681 "globals.m"
        MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 5)));
#line 681 "globals.m"
        MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 6)));
#line 681 "globals.m"
        MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 7)));
#line 681 "globals.m"
        MR_Word libs__globals__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 8)));
#line 681 "globals.m"
        MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 681 "globals.m"
        MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 681 "globals.m"
        MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 681 "globals.m"
        MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 10)));
#line 681 "globals.m"
        MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 11)));
#line 681 "globals.m"
        MR_Word libs__globals__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 0)));
#line 681 "globals.m"
        MR_Word libs__globals__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 681 "globals.m"
        MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 681 "globals.m"
        MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 681 "globals.m"
        MR_Word libs__globals__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 681 "globals.m"
        MR_Word libs__globals__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 681 "globals.m"
        MR_Word libs__globals__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 681 "globals.m"
        MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 2)));
#line 681 "globals.m"
        MR_Word libs__globals__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 681 "globals.m"
        MR_Word libs__globals__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 681 "globals.m"
        MR_Word libs__globals__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 4)));
#line 681 "globals.m"
        MR_Word libs__globals__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 5)));
#line 681 "globals.m"
        MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 6)));
#line 681 "globals.m"
        MR_Word libs__globals__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 7)));
#line 681 "globals.m"
        MR_Word libs__globals__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 8)));
#line 681 "globals.m"
        MR_Word libs__globals__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 681 "globals.m"
        MR_Word libs__globals__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 681 "globals.m"
        MR_Word libs__globals__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 681 "globals.m"
        MR_Word libs__globals__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 10)));
#line 681 "globals.m"
        MR_Word libs__globals__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 11)));
#line 681 "globals.m"
        MR_Word libs__globals__V_44_44;

#line 681 "globals.m"
        {
#line 681 "globals.m"
          mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_2[0], &libs__globals__V_44_44, ((MR_Box) (libs__globals__V_4_4)), ((MR_Box) (libs__globals__V_24_24)));
        }
#line 5078 "libs.globals.c"
        libs__globals__succeeded = (libs__globals__V_44_44 == (MR_Integer) 0);
#line 681 "globals.m"
        libs__globals__succeeded = !(libs__globals__succeeded);
#line 681 "globals.m"
        if (libs__globals__succeeded)
#line 681 "globals.m"
          *libs__globals__HeadVar__1_1 = libs__globals__V_44_44;
#line 681 "globals.m"
        else
#line 681 "globals.m"
          {
#line 681 "globals.m"
            MR_Word libs__globals__V_45_45;
#line 681 "globals.m"
            MR_Integer libs__globals__V_85_85 = (MR_Integer) libs__globals__V_5_5;
#line 681 "globals.m"
            MR_Integer libs__globals__V_86_86 = (MR_Integer) libs__globals__V_25_25;

#line 681 "globals.m"
            {
#line 681 "globals.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_45_45, libs__globals__V_85_85, libs__globals__V_86_86);
            }
#line 5102 "libs.globals.c"
            libs__globals__succeeded = (libs__globals__V_45_45 == (MR_Integer) 0);
#line 681 "globals.m"
            libs__globals__succeeded = !(libs__globals__succeeded);
#line 681 "globals.m"
            if (libs__globals__succeeded)
#line 681 "globals.m"
              *libs__globals__HeadVar__1_1 = libs__globals__V_45_45;
#line 681 "globals.m"
            else
#line 681 "globals.m"
              {
#line 681 "globals.m"
                MR_Word libs__globals__V_46_46;
#line 681 "globals.m"
                MR_Integer libs__globals__V_87_87 = (MR_Integer) libs__globals__V_6_6;
#line 681 "globals.m"
                MR_Integer libs__globals__V_88_88 = (MR_Integer) libs__globals__V_26_26;

#line 681 "globals.m"
                {
#line 681 "globals.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_46_46, libs__globals__V_87_87, libs__globals__V_88_88);
                }
#line 5126 "libs.globals.c"
                libs__globals__succeeded = (libs__globals__V_46_46 == (MR_Integer) 0);
#line 681 "globals.m"
                libs__globals__succeeded = !(libs__globals__succeeded);
#line 681 "globals.m"
                if (libs__globals__succeeded)
#line 681 "globals.m"
                  *libs__globals__HeadVar__1_1 = libs__globals__V_46_46;
#line 681 "globals.m"
                else
#line 681 "globals.m"
                  {
#line 681 "globals.m"
                    MR_Word libs__globals__V_47_47;
#line 681 "globals.m"
                    MR_Integer libs__globals__V_89_89 = (MR_Integer) libs__globals__V_7_7;
#line 681 "globals.m"
                    MR_Integer libs__globals__V_90_90 = (MR_Integer) libs__globals__V_27_27;

#line 681 "globals.m"
                    {
#line 681 "globals.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_47_47, libs__globals__V_89_89, libs__globals__V_90_90);
                    }
#line 5150 "libs.globals.c"
                    libs__globals__succeeded = (libs__globals__V_47_47 == (MR_Integer) 0);
#line 681 "globals.m"
                    libs__globals__succeeded = !(libs__globals__succeeded);
#line 681 "globals.m"
                    if (libs__globals__succeeded)
#line 681 "globals.m"
                      *libs__globals__HeadVar__1_1 = libs__globals__V_47_47;
#line 681 "globals.m"
                    else
#line 681 "globals.m"
                      {
#line 681 "globals.m"
                        MR_Word libs__globals__V_48_48;
#line 681 "globals.m"
                        MR_Integer libs__globals__V_91_91 = (MR_Integer) libs__globals__V_8_8;
#line 681 "globals.m"
                        MR_Integer libs__globals__V_92_92 = (MR_Integer) libs__globals__V_28_28;

#line 681 "globals.m"
                        {
#line 681 "globals.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_48_48, libs__globals__V_91_91, libs__globals__V_92_92);
                        }
#line 5174 "libs.globals.c"
                        libs__globals__succeeded = (libs__globals__V_48_48 == (MR_Integer) 0);
#line 681 "globals.m"
                        libs__globals__succeeded = !(libs__globals__succeeded);
#line 681 "globals.m"
                        if (libs__globals__succeeded)
#line 681 "globals.m"
                          *libs__globals__HeadVar__1_1 = libs__globals__V_48_48;
#line 681 "globals.m"
                        else
#line 681 "globals.m"
                          {
#line 681 "globals.m"
                            MR_Word libs__globals__V_49_49;
#line 681 "globals.m"
                            MR_Integer libs__globals__V_93_93 = (MR_Integer) libs__globals__V_9_9;
#line 681 "globals.m"
                            MR_Integer libs__globals__V_94_94 = (MR_Integer) libs__globals__V_29_29;

#line 681 "globals.m"
                            {
#line 681 "globals.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_49_49, libs__globals__V_93_93, libs__globals__V_94_94);
                            }
#line 5198 "libs.globals.c"
                            libs__globals__succeeded = (libs__globals__V_49_49 == (MR_Integer) 0);
#line 681 "globals.m"
                            libs__globals__succeeded = !(libs__globals__succeeded);
#line 681 "globals.m"
                            if (libs__globals__succeeded)
#line 681 "globals.m"
                              *libs__globals__HeadVar__1_1 = libs__globals__V_49_49;
#line 681 "globals.m"
                            else
#line 681 "globals.m"
                              {
#line 681 "globals.m"
                                MR_Word libs__globals__V_50_50;

#line 681 "globals.m"
                                {
#line 681 "globals.m"
                                  libs__trace_params____Compare____trace_level_0_0(&libs__globals__V_50_50, libs__globals__V_10_10, libs__globals__V_30_30);
                                }
#line 5218 "libs.globals.c"
                                libs__globals__succeeded = (libs__globals__V_50_50 == (MR_Integer) 0);
#line 681 "globals.m"
                                libs__globals__succeeded = !(libs__globals__succeeded);
#line 681 "globals.m"
                                if (libs__globals__succeeded)
#line 681 "globals.m"
                                  *libs__globals__HeadVar__1_1 = libs__globals__V_50_50;
#line 681 "globals.m"
                                else
#line 681 "globals.m"
                                  {
#line 681 "globals.m"
                                    MR_Word libs__globals__V_51_51;

#line 681 "globals.m"
                                    {
#line 681 "globals.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[3], &libs__globals__V_51_51, ((MR_Box) (libs__globals__V_11_11)), ((MR_Box) (libs__globals__V_31_31)));
                                    }
#line 5238 "libs.globals.c"
                                    libs__globals__succeeded = (libs__globals__V_51_51 == (MR_Integer) 0);
#line 681 "globals.m"
                                    libs__globals__succeeded = !(libs__globals__succeeded);
#line 681 "globals.m"
                                    if (libs__globals__succeeded)
#line 681 "globals.m"
                                      *libs__globals__HeadVar__1_1 = libs__globals__V_51_51;
#line 681 "globals.m"
                                    else
#line 681 "globals.m"
                                      {
#line 681 "globals.m"
                                        MR_Word libs__globals__V_52_52;
#line 681 "globals.m"
                                        MR_Integer libs__globals__V_95_95 = (MR_Integer) libs__globals__V_12_12;
#line 681 "globals.m"
                                        MR_Integer libs__globals__V_96_96 = (MR_Integer) libs__globals__V_32_32;

#line 681 "globals.m"
                                        {
#line 681 "globals.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_52_52, libs__globals__V_95_95, libs__globals__V_96_96);
                                        }
#line 5262 "libs.globals.c"
                                        libs__globals__succeeded = (libs__globals__V_52_52 == (MR_Integer) 0);
#line 681 "globals.m"
                                        libs__globals__succeeded = !(libs__globals__succeeded);
#line 681 "globals.m"
                                        if (libs__globals__succeeded)
#line 681 "globals.m"
                                          *libs__globals__HeadVar__1_1 = libs__globals__V_52_52;
#line 681 "globals.m"
                                        else
#line 681 "globals.m"
                                          {
#line 681 "globals.m"
                                            MR_Word libs__globals__V_53_53;
#line 681 "globals.m"
                                            MR_Integer libs__globals__V_97_97 = (MR_Integer) libs__globals__V_13_13;
#line 681 "globals.m"
                                            MR_Integer libs__globals__V_98_98 = (MR_Integer) libs__globals__V_33_33;

#line 681 "globals.m"
                                            {
#line 681 "globals.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_53_53, libs__globals__V_97_97, libs__globals__V_98_98);
                                            }
#line 5286 "libs.globals.c"
                                            libs__globals__succeeded = (libs__globals__V_53_53 == (MR_Integer) 0);
#line 681 "globals.m"
                                            libs__globals__succeeded = !(libs__globals__succeeded);
#line 681 "globals.m"
                                            if (libs__globals__succeeded)
#line 681 "globals.m"
                                              *libs__globals__HeadVar__1_1 = libs__globals__V_53_53;
#line 681 "globals.m"
                                            else
#line 681 "globals.m"
                                              {
#line 681 "globals.m"
                                                MR_Word libs__globals__V_54_54;

#line 681 "globals.m"
                                                {
#line 681 "globals.m"
                                                  libs__globals____Compare____c_compiler_type_0_0(&libs__globals__V_54_54, libs__globals__V_14_14, libs__globals__V_34_34);
                                                }
#line 5306 "libs.globals.c"
                                                libs__globals__succeeded = (libs__globals__V_54_54 == (MR_Integer) 0);
#line 681 "globals.m"
                                                libs__globals__succeeded = !(libs__globals__succeeded);
#line 681 "globals.m"
                                                if (libs__globals__succeeded)
#line 681 "globals.m"
                                                  *libs__globals__HeadVar__1_1 = libs__globals__V_54_54;
#line 681 "globals.m"
                                                else
#line 681 "globals.m"
                                                  {
#line 681 "globals.m"
                                                    MR_Word libs__globals__V_55_55;
#line 681 "globals.m"
                                                    MR_Integer libs__globals__V_99_99 = (MR_Integer) libs__globals__V_15_15;
#line 681 "globals.m"
                                                    MR_Integer libs__globals__V_100_100 = (MR_Integer) libs__globals__V_35_35;

#line 681 "globals.m"
                                                    {
#line 681 "globals.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_55_55, libs__globals__V_99_99, libs__globals__V_100_100);
                                                    }
#line 5330 "libs.globals.c"
                                                    libs__globals__succeeded = (libs__globals__V_55_55 == (MR_Integer) 0);
#line 681 "globals.m"
                                                    libs__globals__succeeded = !(libs__globals__succeeded);
#line 681 "globals.m"
                                                    if (libs__globals__succeeded)
#line 681 "globals.m"
                                                      *libs__globals__HeadVar__1_1 = libs__globals__V_55_55;
#line 681 "globals.m"
                                                    else
#line 681 "globals.m"
                                                      {
#line 681 "globals.m"
                                                        MR_Word libs__globals__V_56_56;

#line 681 "globals.m"
                                                        {
#line 681 "globals.m"
                                                          libs__globals____Compare____reuse_strategy_0_0(&libs__globals__V_56_56, libs__globals__V_16_16, libs__globals__V_36_36);
                                                        }
#line 5350 "libs.globals.c"
                                                        libs__globals__succeeded = (libs__globals__V_56_56 == (MR_Integer) 0);
#line 681 "globals.m"
                                                        libs__globals__succeeded = !(libs__globals__succeeded);
#line 681 "globals.m"
                                                        if (libs__globals__succeeded)
#line 681 "globals.m"
                                                          *libs__globals__HeadVar__1_1 = libs__globals__V_56_56;
#line 681 "globals.m"
                                                        else
#line 681 "globals.m"
                                                          {
#line 681 "globals.m"
                                                            MR_Word libs__globals__V_57_57;

#line 681 "globals.m"
                                                            {
#line 681 "globals.m"
                                                              mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[4], &libs__globals__V_57_57, ((MR_Box) (libs__globals__V_17_17)), ((MR_Box) (libs__globals__V_37_37)));
                                                            }
#line 5370 "libs.globals.c"
                                                            libs__globals__succeeded = (libs__globals__V_57_57 == (MR_Integer) 0);
#line 681 "globals.m"
                                                            libs__globals__succeeded = !(libs__globals__succeeded);
#line 681 "globals.m"
                                                            if (libs__globals__succeeded)
#line 681 "globals.m"
                                                              *libs__globals__HeadVar__1_1 = libs__globals__V_57_57;
#line 681 "globals.m"
                                                            else
#line 681 "globals.m"
                                                              {
#line 681 "globals.m"
                                                                MR_Word libs__globals__V_58_58;

#line 681 "globals.m"
                                                                {
#line 681 "globals.m"
                                                                  mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[5], &libs__globals__V_58_58, ((MR_Box) (libs__globals__V_18_18)), ((MR_Box) (libs__globals__V_38_38)));
                                                                }
#line 5390 "libs.globals.c"
                                                                libs__globals__succeeded = (libs__globals__V_58_58 == (MR_Integer) 0);
#line 681 "globals.m"
                                                                libs__globals__succeeded = !(libs__globals__succeeded);
#line 681 "globals.m"
                                                                if (libs__globals__succeeded)
#line 681 "globals.m"
                                                                  *libs__globals__HeadVar__1_1 = libs__globals__V_58_58;
#line 681 "globals.m"
                                                                else
#line 681 "globals.m"
                                                                  {
#line 681 "globals.m"
                                                                    MR_Word libs__globals__V_59_59;
#line 681 "globals.m"
                                                                    MR_Integer libs__globals__V_101_101 = (MR_Integer) libs__globals__V_19_19;
#line 681 "globals.m"
                                                                    MR_Integer libs__globals__V_102_102 = (MR_Integer) libs__globals__V_39_39;

#line 681 "globals.m"
                                                                    {
#line 681 "globals.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_59_59, libs__globals__V_101_101, libs__globals__V_102_102);
                                                                    }
#line 5414 "libs.globals.c"
                                                                    libs__globals__succeeded = (libs__globals__V_59_59 == (MR_Integer) 0);
#line 681 "globals.m"
                                                                    libs__globals__succeeded = !(libs__globals__succeeded);
#line 681 "globals.m"
                                                                    if (libs__globals__succeeded)
#line 681 "globals.m"
                                                                      *libs__globals__HeadVar__1_1 = libs__globals__V_59_59;
#line 681 "globals.m"
                                                                    else
#line 681 "globals.m"
                                                                      {
#line 681 "globals.m"
                                                                        MR_Word libs__globals__V_60_60;
#line 681 "globals.m"
                                                                        MR_Integer libs__globals__V_103_103 = (MR_Integer) libs__globals__V_20_20;
#line 681 "globals.m"
                                                                        MR_Integer libs__globals__V_104_104 = (MR_Integer) libs__globals__V_40_40;

#line 681 "globals.m"
                                                                        {
#line 681 "globals.m"
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_60_60, libs__globals__V_103_103, libs__globals__V_104_104);
                                                                        }
#line 5438 "libs.globals.c"
                                                                        libs__globals__succeeded = (libs__globals__V_60_60 == (MR_Integer) 0);
#line 681 "globals.m"
                                                                        libs__globals__succeeded = !(libs__globals__succeeded);
#line 681 "globals.m"
                                                                        if (libs__globals__succeeded)
#line 681 "globals.m"
                                                                          *libs__globals__HeadVar__1_1 = libs__globals__V_60_60;
#line 681 "globals.m"
                                                                        else
#line 681 "globals.m"
                                                                          {
#line 681 "globals.m"
                                                                            MR_Word libs__globals__V_61_61;
#line 681 "globals.m"
                                                                            MR_Integer libs__globals__V_105_105 = (MR_Integer) libs__globals__V_21_21;
#line 681 "globals.m"
                                                                            MR_Integer libs__globals__V_106_106 = (MR_Integer) libs__globals__V_41_41;

#line 681 "globals.m"
                                                                            {
#line 681 "globals.m"
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_61_61, libs__globals__V_105_105, libs__globals__V_106_106);
                                                                            }
#line 5462 "libs.globals.c"
                                                                            libs__globals__succeeded = (libs__globals__V_61_61 == (MR_Integer) 0);
#line 681 "globals.m"
                                                                            libs__globals__succeeded = !(libs__globals__succeeded);
#line 681 "globals.m"
                                                                            if (libs__globals__succeeded)
#line 681 "globals.m"
                                                                              *libs__globals__HeadVar__1_1 = libs__globals__V_61_61;
#line 681 "globals.m"
                                                                            else
#line 681 "globals.m"
                                                                              {
#line 681 "globals.m"
                                                                                MR_Word libs__globals__V_62_62;

#line 681 "globals.m"
                                                                                {
#line 681 "globals.m"
                                                                                  libs__globals____Compare____file_install_cmd_0_0(&libs__globals__V_62_62, libs__globals__V_22_22, libs__globals__V_42_42);
                                                                                }
#line 5482 "libs.globals.c"
                                                                                libs__globals__succeeded = (libs__globals__V_62_62 == (MR_Integer) 0);
#line 681 "globals.m"
                                                                                libs__globals__succeeded = !(libs__globals__succeeded);
#line 681 "globals.m"
                                                                                if (libs__globals__succeeded)
#line 681 "globals.m"
                                                                                  *libs__globals__HeadVar__1_1 = libs__globals__V_62_62;
#line 681 "globals.m"
                                                                                else
#line 681 "globals.m"
                                                                                  {
#line 681 "globals.m"
                                                                                    {
#line 681 "globals.m"
                                                                                      mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_2[1], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__V_23_23)), ((MR_Box) (libs__globals__V_43_43)));
#line 681 "globals.m"
                                                                                      return;
                                                                                    }
#line 681 "globals.m"
                                                                                  }
#line 681 "globals.m"
                                                                              }
#line 681 "globals.m"
                                                                          }
#line 681 "globals.m"
                                                                      }
#line 681 "globals.m"
                                                                  }
#line 681 "globals.m"
                                                              }
#line 681 "globals.m"
                                                          }
#line 681 "globals.m"
                                                      }
#line 681 "globals.m"
                                                  }
#line 681 "globals.m"
                                              }
#line 681 "globals.m"
                                          }
#line 681 "globals.m"
                                      }
#line 681 "globals.m"
                                  }
#line 681 "globals.m"
                              }
#line 681 "globals.m"
                          }
#line 681 "globals.m"
                      }
#line 681 "globals.m"
                  }
#line 681 "globals.m"
              }
#line 681 "globals.m"
          }
#line 681 "globals.m"
      }
#line 681 "globals.m"
  }
#line 681 "globals.m"
}

#line 681 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____globals_0_0(
#line 681 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 681 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 681 "globals.m"
{
#line 681 "globals.m"
  {
#line 681 "globals.m"
    MR_bool libs__globals__succeeded;
#line 681 "globals.m"
    MR_Integer libs__globals__CastX_43 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 681 "globals.m"
    MR_Integer libs__globals__CastY_44 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 681 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_43 == libs__globals__CastY_44);
#line 681 "globals.m"
    if (libs__globals__succeeded)
#line 681 "globals.m"
      libs__globals__succeeded = MR_TRUE;
#line 681 "globals.m"
    else
#line 681 "globals.m"
      {
#line 681 "globals.m"
        MR_Word libs__globals__TypeInfo_47_47;
#line 681 "globals.m"
        MR_Word libs__globals__TypeInfo_48_48;
#line 681 "globals.m"
        MR_Word libs__globals__TypeInfo_49_49;
#line 681 "globals.m"
        MR_Word libs__globals__TypeInfo_50_50;
#line 681 "globals.m"
        MR_Word libs__globals__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 681 "globals.m"
        MR_Word libs__globals__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 681 "globals.m"
        MR_Word libs__globals__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 681 "globals.m"
        MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 681 "globals.m"
        MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 681 "globals.m"
        MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 681 "globals.m"
        MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 681 "globals.m"
        MR_Word libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 2)));
#line 681 "globals.m"
        MR_Word libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 681 "globals.m"
        MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 681 "globals.m"
        MR_Word libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 4)));
#line 681 "globals.m"
        MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 5)));
#line 681 "globals.m"
        MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 6)));
#line 681 "globals.m"
        MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 7)));
#line 681 "globals.m"
        MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 8)));
#line 681 "globals.m"
        MR_Word libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 681 "globals.m"
        MR_Word libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 681 "globals.m"
        MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 681 "globals.m"
        MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 10)));
#line 681 "globals.m"
        MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 11)));
#line 681 "globals.m"
        MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 681 "globals.m"
        MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 681 "globals.m"
        MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 681 "globals.m"
        MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 681 "globals.m"
        MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 681 "globals.m"
        MR_Word libs__globals__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 681 "globals.m"
        MR_Word libs__globals__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 681 "globals.m"
        MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)));
#line 681 "globals.m"
        MR_Word libs__globals__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 681 "globals.m"
        MR_Word libs__globals__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 681 "globals.m"
        MR_Word libs__globals__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 4)));
#line 681 "globals.m"
        MR_Word libs__globals__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 5)));
#line 681 "globals.m"
        MR_Word libs__globals__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 6)));
#line 681 "globals.m"
        MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 7)));
#line 681 "globals.m"
        MR_Word libs__globals__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 8)));
#line 681 "globals.m"
        MR_Word libs__globals__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 681 "globals.m"
        MR_Word libs__globals__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 681 "globals.m"
        MR_Word libs__globals__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 681 "globals.m"
        MR_Word libs__globals__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 10)));
#line 681 "globals.m"
        MR_Word libs__globals__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 11)));

#line 5663 "libs.globals.c"
        {
#line 5665 "libs.globals.c"
          libs__globals__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__globals_scalar_common_2[0], ((MR_Box) (libs__globals__V_3_3)), ((MR_Box) (libs__globals__V_23_23)));
        }
#line 681 "globals.m"
        if (libs__globals__succeeded)
#line 681 "globals.m"
          {
#line 5672 "libs.globals.c"
            libs__globals__succeeded = (libs__globals__V_4_4 == libs__globals__V_24_24);
#line 681 "globals.m"
            if (libs__globals__succeeded)
#line 681 "globals.m"
              {
#line 5678 "libs.globals.c"
                libs__globals__succeeded = (libs__globals__V_5_5 == libs__globals__V_25_25);
#line 681 "globals.m"
                if (libs__globals__succeeded)
#line 681 "globals.m"
                  {
#line 5684 "libs.globals.c"
                    libs__globals__succeeded = (libs__globals__V_6_6 == libs__globals__V_26_26);
#line 681 "globals.m"
                    if (libs__globals__succeeded)
#line 681 "globals.m"
                      {
#line 5690 "libs.globals.c"
                        libs__globals__succeeded = (libs__globals__V_7_7 == libs__globals__V_27_27);
#line 681 "globals.m"
                        if (libs__globals__succeeded)
#line 681 "globals.m"
                          {
#line 5696 "libs.globals.c"
                            libs__globals__succeeded = (libs__globals__V_8_8 == libs__globals__V_28_28);
#line 681 "globals.m"
                            if (libs__globals__succeeded)
#line 681 "globals.m"
                              {
#line 5702 "libs.globals.c"
                                {
#line 5704 "libs.globals.c"
                                  libs__globals__succeeded = libs__trace_params____Unify____trace_level_0_0(libs__globals__V_9_9, libs__globals__V_29_29);
                                }
#line 681 "globals.m"
                                if (libs__globals__succeeded)
#line 681 "globals.m"
                                  {
#line 5711 "libs.globals.c"
                                    libs__globals__TypeInfo_47_47 = (MR_Word) &libs__globals_scalar_common_1[3];
#line 5713 "libs.globals.c"
                                    {
#line 5715 "libs.globals.c"
                                      libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_47_47, ((MR_Box) (libs__globals__V_10_10)), ((MR_Box) (libs__globals__V_30_30)));
                                    }
#line 681 "globals.m"
                                    if (libs__globals__succeeded)
#line 681 "globals.m"
                                      {
#line 5722 "libs.globals.c"
                                        libs__globals__succeeded = (libs__globals__V_11_11 == libs__globals__V_31_31);
#line 681 "globals.m"
                                        if (libs__globals__succeeded)
#line 681 "globals.m"
                                          {
#line 5728 "libs.globals.c"
                                            libs__globals__succeeded = (libs__globals__V_12_12 == libs__globals__V_32_32);
#line 681 "globals.m"
                                            if (libs__globals__succeeded)
#line 681 "globals.m"
                                              {
#line 5734 "libs.globals.c"
                                                {
#line 5736 "libs.globals.c"
                                                  libs__globals__succeeded = libs__globals____Unify____c_compiler_type_0_0(libs__globals__V_13_13, libs__globals__V_33_33);
                                                }
#line 681 "globals.m"
                                                if (libs__globals__succeeded)
#line 681 "globals.m"
                                                  {
#line 5743 "libs.globals.c"
                                                    libs__globals__succeeded = (libs__globals__V_14_14 == libs__globals__V_34_34);
#line 681 "globals.m"
                                                    if (libs__globals__succeeded)
#line 681 "globals.m"
                                                      {
#line 5749 "libs.globals.c"
                                                        {
#line 5751 "libs.globals.c"
                                                          libs__globals__succeeded = libs__globals____Unify____reuse_strategy_0_0(libs__globals__V_15_15, libs__globals__V_35_35);
                                                        }
#line 681 "globals.m"
                                                        if (libs__globals__succeeded)
#line 681 "globals.m"
                                                          {
#line 5758 "libs.globals.c"
                                                            libs__globals__TypeInfo_48_48 = (MR_Word) &libs__globals_scalar_common_1[4];
#line 5760 "libs.globals.c"
                                                            {
#line 5762 "libs.globals.c"
                                                              libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_48_48, ((MR_Box) (libs__globals__V_16_16)), ((MR_Box) (libs__globals__V_36_36)));
                                                            }
#line 681 "globals.m"
                                                            if (libs__globals__succeeded)
#line 681 "globals.m"
                                                              {
#line 5769 "libs.globals.c"
                                                                libs__globals__TypeInfo_49_49 = (MR_Word) &libs__globals_scalar_common_1[5];
#line 5771 "libs.globals.c"
                                                                {
#line 5773 "libs.globals.c"
                                                                  libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_49_49, ((MR_Box) (libs__globals__V_17_17)), ((MR_Box) (libs__globals__V_37_37)));
                                                                }
#line 681 "globals.m"
                                                                if (libs__globals__succeeded)
#line 681 "globals.m"
                                                                  {
#line 5780 "libs.globals.c"
                                                                    libs__globals__succeeded = (libs__globals__V_18_18 == libs__globals__V_38_38);
#line 681 "globals.m"
                                                                    if (libs__globals__succeeded)
#line 681 "globals.m"
                                                                      {
#line 5786 "libs.globals.c"
                                                                        libs__globals__succeeded = (libs__globals__V_19_19 == libs__globals__V_39_39);
#line 681 "globals.m"
                                                                        if (libs__globals__succeeded)
#line 681 "globals.m"
                                                                          {
#line 5792 "libs.globals.c"
                                                                            libs__globals__succeeded = (libs__globals__V_20_20 == libs__globals__V_40_40);
#line 681 "globals.m"
                                                                            if (libs__globals__succeeded)
#line 681 "globals.m"
                                                                              {
#line 5798 "libs.globals.c"
                                                                                {
#line 5800 "libs.globals.c"
                                                                                  libs__globals__succeeded = libs__globals____Unify____file_install_cmd_0_0(libs__globals__V_21_21, libs__globals__V_41_41);
                                                                                }
#line 681 "globals.m"
                                                                                if (libs__globals__succeeded)
#line 681 "globals.m"
                                                                                  {
#line 5807 "libs.globals.c"
                                                                                    libs__globals__TypeInfo_50_50 = (MR_Word) &libs__globals_scalar_common_2[1];
#line 5809 "libs.globals.c"
                                                                                    {
#line 5811 "libs.globals.c"
                                                                                      return libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_50_50, ((MR_Box) (libs__globals__V_22_22)), ((MR_Box) (libs__globals__V_42_42)));
                                                                                    }
#line 681 "globals.m"
                                                                                  }
#line 681 "globals.m"
                                                                              }
#line 681 "globals.m"
                                                                          }
#line 681 "globals.m"
                                                                      }
#line 681 "globals.m"
                                                                  }
#line 681 "globals.m"
                                                              }
#line 681 "globals.m"
                                                          }
#line 681 "globals.m"
                                                      }
#line 681 "globals.m"
                                                  }
#line 681 "globals.m"
                                              }
#line 681 "globals.m"
                                          }
#line 681 "globals.m"
                                      }
#line 681 "globals.m"
                                  }
#line 681 "globals.m"
                              }
#line 681 "globals.m"
                          }
#line 681 "globals.m"
                      }
#line 681 "globals.m"
                  }
#line 681 "globals.m"
              }
#line 681 "globals.m"
          }
#line 681 "globals.m"
      }
#line 681 "globals.m"
    return libs__globals__succeeded;
#line 681 "globals.m"
  }
#line 681 "globals.m"
}

#line 82 "globals.m"
void MR_CALL 
libs__globals____Compare____gc_method_0_0(
#line 82 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 82 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 82 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 82 "globals.m"
{
#line 82 "globals.m"
  {
#line 82 "globals.m"
    MR_bool libs__globals__succeeded;
#line 82 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 82 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 82 "globals.m"
    {
#line 82 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 82 "globals.m"
      return;
    }
#line 82 "globals.m"
  }
#line 82 "globals.m"
}

#line 82 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____gc_method_0_0(
#line 82 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 82 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 82 "globals.m"
{
#line 5902 "libs.globals.c"
  {
#line 5904 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 5907 "libs.globals.c"
    return libs__globals__succeeded;
#line 5909 "libs.globals.c"
  }
#line 82 "globals.m"
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
#line 5955 "libs.globals.c"
  {
#line 5957 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 5960 "libs.globals.c"
    return libs__globals__succeeded;
#line 5962 "libs.globals.c"
  }
#line 50 "globals.m"
}

#line 199 "globals.m"
void MR_CALL 
libs__globals____Compare____file_install_cmd_0_0(
#line 199 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 199 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 199 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 199 "globals.m"
{
#line 199 "globals.m"
  {
#line 199 "globals.m"
    MR_bool libs__globals__succeeded;
#line 199 "globals.m"
    MR_Integer libs__globals__CastX_13 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 199 "globals.m"
    MR_Integer libs__globals__CastY_14 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 199 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_13 == libs__globals__CastY_14);
#line 199 "globals.m"
    if (libs__globals__succeeded)
#line 5991 "libs.globals.c"
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 199 "globals.m"
    else
#line 199 "globals.m"
    if ((libs__globals__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 199 "globals.m"
      if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 199 "globals.m"
        *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 199 "globals.m"
      else
#line 6003 "libs.globals.c"
        *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 199 "globals.m"
    else
#line 199 "globals.m"
      {
#line 199 "globals.m"
        MR_String libs__globals__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 199 "globals.m"
        MR_String libs__globals__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));

#line 199 "globals.m"
        if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6016 "libs.globals.c"
          *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 199 "globals.m"
        else
#line 199 "globals.m"
          {
#line 199 "globals.m"
            MR_String libs__globals__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 0)));
#line 199 "globals.m"
            MR_String libs__globals__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 1)));
#line 199 "globals.m"
            MR_Word libs__globals__V_8_8;

#line 199 "globals.m"
            {
#line 199 "globals.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&libs__globals__V_8_8, libs__globals__V_18_18, libs__globals__V_6_6);
            }
#line 6034 "libs.globals.c"
            libs__globals__succeeded = (libs__globals__V_8_8 == (MR_Integer) 0);
#line 199 "globals.m"
            libs__globals__succeeded = !(libs__globals__succeeded);
#line 199 "globals.m"
            if (libs__globals__succeeded)
#line 199 "globals.m"
              *libs__globals__HeadVar__1_1 = libs__globals__V_8_8;
#line 199 "globals.m"
            else
#line 199 "globals.m"
              {
#line 199 "globals.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(libs__globals__HeadVar__1_1, libs__globals__V_17_17, libs__globals__V_7_7);
#line 199 "globals.m"
                return;
              }
#line 199 "globals.m"
          }
#line 199 "globals.m"
      }
#line 199 "globals.m"
  }
#line 199 "globals.m"
}

#line 199 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____file_install_cmd_0_0(
#line 199 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 199 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 199 "globals.m"
{
#line 199 "globals.m"
  {
#line 199 "globals.m"
    MR_bool libs__globals__succeeded;
#line 199 "globals.m"
    MR_Integer libs__globals__CastX_9 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 199 "globals.m"
    MR_Integer libs__globals__CastY_10 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 199 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_9 == libs__globals__CastY_10);
#line 199 "globals.m"
    if (libs__globals__succeeded)
#line 199 "globals.m"
      libs__globals__succeeded = MR_TRUE;
#line 199 "globals.m"
    else
#line 199 "globals.m"
    if ((libs__globals__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 199 "globals.m"
      {
#line 199 "globals.m"
        MR_Integer libs__globals__CastX_7 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 199 "globals.m"
        MR_Integer libs__globals__CastY_8 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 199 "globals.m"
        libs__globals__succeeded = (libs__globals__CastY_8 == libs__globals__CastX_7);
#line 199 "globals.m"
      }
#line 199 "globals.m"
    else
#line 199 "globals.m"
      {
#line 199 "globals.m"
        MR_String libs__globals__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 199 "globals.m"
        MR_String libs__globals__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 1)));
#line 199 "globals.m"
        MR_String libs__globals__V_5_5;
#line 199 "globals.m"
        MR_String libs__globals__V_6_6;

#line 199 "globals.m"
        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 199 "globals.m"
        if (libs__globals__succeeded)
#line 199 "globals.m"
          {
#line 199 "globals.m"
            libs__globals__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 199 "globals.m"
            libs__globals__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 6122 "libs.globals.c"
            libs__globals__succeeded = (strcmp(libs__globals__V_3_3, libs__globals__V_5_5) == 0);
#line 199 "globals.m"
            if (libs__globals__succeeded)
#line 6126 "libs.globals.c"
              libs__globals__succeeded = (strcmp(libs__globals__V_4_4, libs__globals__V_6_6) == 0);
#line 199 "globals.m"
          }
#line 199 "globals.m"
      }
#line 199 "globals.m"
    return libs__globals__succeeded;
#line 199 "globals.m"
  }
#line 199 "globals.m"
}

#line 167 "globals.m"
void MR_CALL 
libs__globals____Compare____env_type_0_0(
#line 167 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 167 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 167 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 167 "globals.m"
{
#line 167 "globals.m"
  {
#line 167 "globals.m"
    MR_bool libs__globals__succeeded;
#line 167 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 167 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 167 "globals.m"
    {
#line 167 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 167 "globals.m"
      return;
    }
#line 167 "globals.m"
  }
#line 167 "globals.m"
}

#line 167 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____env_type_0_0(
#line 167 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 167 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 167 "globals.m"
{
#line 6180 "libs.globals.c"
  {
#line 6182 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 6185 "libs.globals.c"
    return libs__globals__succeeded;
#line 6187 "libs.globals.c"
  }
#line 167 "globals.m"
}

#line 142 "globals.m"
void MR_CALL 
libs__globals____Compare____csharp_compiler_type_0_0(
#line 142 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 142 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 142 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 142 "globals.m"
{
#line 142 "globals.m"
  {
#line 142 "globals.m"
    MR_bool libs__globals__succeeded;
#line 142 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 142 "globals.m"
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 142 "globals.m"
    {
#line 142 "globals.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
#line 142 "globals.m"
      return;
    }
#line 142 "globals.m"
  }
#line 142 "globals.m"
}

#line 142 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____csharp_compiler_type_0_0(
#line 142 "globals.m"
  MR_Word libs__globals__HeadVar__2_1,
#line 142 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 142 "globals.m"
{
#line 6233 "libs.globals.c"
  {
#line 6235 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 6238 "libs.globals.c"
    return libs__globals__succeeded;
#line 6240 "libs.globals.c"
  }
#line 142 "globals.m"
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
#line 6286 "libs.globals.c"
  {
#line 6288 "libs.globals.c"
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

#line 6291 "libs.globals.c"
    return libs__globals__succeeded;
#line 6293 "libs.globals.c"
  }
#line 40 "globals.m"
}

#line 148 "globals.m"
void MR_CALL 
libs__globals____Compare____clang_version_0_0(
#line 148 "globals.m"
  MR_Word * libs__globals__HeadVar__1_1,
#line 148 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 148 "globals.m"
  MR_Word libs__globals__HeadVar__3_3)
#line 148 "globals.m"
{
#line 148 "globals.m"
  {
#line 148 "globals.m"
    MR_bool libs__globals__succeeded;
#line 148 "globals.m"
    MR_Integer libs__globals__CastX_12 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 148 "globals.m"
    MR_Integer libs__globals__CastY_13 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 148 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_12 == libs__globals__CastY_13);
#line 148 "globals.m"
    if (libs__globals__succeeded)
#line 6322 "libs.globals.c"
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 148 "globals.m"
    else
#line 148 "globals.m"
      {
#line 148 "globals.m"
        MR_Integer libs__globals__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 148 "globals.m"
        MR_Integer libs__globals__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 148 "globals.m"
        MR_Integer libs__globals__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)));
#line 148 "globals.m"
        MR_Integer libs__globals__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 0)));
#line 148 "globals.m"
        MR_Integer libs__globals__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)));
#line 148 "globals.m"
        MR_Integer libs__globals__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 2)));
#line 148 "globals.m"
        MR_Word libs__globals__V_10_10;

#line 148 "globals.m"
        {
#line 148 "globals.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_10_10, libs__globals__V_4_4, libs__globals__V_7_7);
        }
#line 6348 "libs.globals.c"
        libs__globals__succeeded = (libs__globals__V_10_10 == (MR_Integer) 0);
#line 148 "globals.m"
        libs__globals__succeeded = !(libs__globals__succeeded);
#line 148 "globals.m"
        if (libs__globals__succeeded)
#line 148 "globals.m"
          *libs__globals__HeadVar__1_1 = libs__globals__V_10_10;
#line 148 "globals.m"
        else
#line 148 "globals.m"
          {
#line 148 "globals.m"
            MR_Word libs__globals__V_11_11;

#line 148 "globals.m"
            {
#line 148 "globals.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__V_11_11, libs__globals__V_5_5, libs__globals__V_8_8);
            }
#line 6368 "libs.globals.c"
            libs__globals__succeeded = (libs__globals__V_11_11 == (MR_Integer) 0);
#line 148 "globals.m"
            libs__globals__succeeded = !(libs__globals__succeeded);
#line 148 "globals.m"
            if (libs__globals__succeeded)
#line 148 "globals.m"
              *libs__globals__HeadVar__1_1 = libs__globals__V_11_11;
#line 148 "globals.m"
            else
#line 148 "globals.m"
              {
#line 148 "globals.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__V_6_6, libs__globals__V_9_9);
#line 148 "globals.m"
                return;
              }
#line 148 "globals.m"
          }
#line 148 "globals.m"
      }
#line 148 "globals.m"
  }
#line 148 "globals.m"
}

#line 148 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____clang_version_0_0(
#line 148 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 148 "globals.m"
  MR_Word libs__globals__HeadVar__2_2)
#line 148 "globals.m"
{
#line 148 "globals.m"
  {
#line 148 "globals.m"
    MR_bool libs__globals__succeeded;
#line 148 "globals.m"
    MR_Integer libs__globals__CastX_9 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 148 "globals.m"
    MR_Integer libs__globals__CastY_10 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 148 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_9 == libs__globals__CastY_10);
#line 148 "globals.m"
    if (libs__globals__succeeded)
#line 148 "globals.m"
      libs__globals__succeeded = MR_TRUE;
#line 148 "globals.m"
    else
#line 148 "globals.m"
      {
#line 148 "globals.m"
        MR_Integer libs__globals__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 148 "globals.m"
        MR_Integer libs__globals__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)));
#line 148 "globals.m"
        MR_Integer libs__globals__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 2)));
#line 148 "globals.m"
        MR_Integer libs__globals__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 148 "globals.m"
        MR_Integer libs__globals__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 148 "globals.m"
        MR_Integer libs__globals__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)));

#line 6435 "libs.globals.c"
        libs__globals__succeeded = (libs__globals__V_3_3 == libs__globals__V_6_6);
#line 148 "globals.m"
        if (libs__globals__succeeded)
#line 148 "globals.m"
          {
#line 6441 "libs.globals.c"
            libs__globals__succeeded = (libs__globals__V_4_4 == libs__globals__V_7_7);
#line 148 "globals.m"
            if (libs__globals__succeeded)
#line 6445 "libs.globals.c"
              libs__globals__succeeded = (libs__globals__V_5_5 == libs__globals__V_8_8);
#line 148 "globals.m"
          }
#line 148 "globals.m"
      }
#line 148 "globals.m"
    return libs__globals__succeeded;
#line 148 "globals.m"
  }
#line 148 "globals.m"
}

#line 124 "globals.m"
void MR_CALL 
libs__globals____Compare____c_compiler_type_0_0(
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
    MR_Integer libs__globals__CastX_46 = (MR_Integer) libs__globals__HeadVar__2_2;
#line 124 "globals.m"
    MR_Integer libs__globals__CastY_47 = (MR_Integer) libs__globals__HeadVar__3_3;

#line 124 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_46 == libs__globals__CastY_47);
#line 124 "globals.m"
    if (libs__globals__succeeded)
#line 6482 "libs.globals.c"
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 124 "globals.m"
    else
#line 124 "globals.m"
#line 124 "globals.m"
      switch (MR_tag((MR_Word) libs__globals__HeadVar__2_2)) {
#line 124 "globals.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 124 "globals.m"
        case (MR_Integer) 0:
#line 124 "globals.m"
#line 124 "globals.m"
          switch (MR_tag((MR_Word) libs__globals__HeadVar__3_3)) {
#line 124 "globals.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 124 "globals.m"
            case (MR_Integer) 0:
#line 124 "globals.m"
              *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
#line 124 "globals.m"
              break;
#line 124 "globals.m"
            case (MR_Integer) 1:
#line 6506 "libs.globals.c"
              *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 124 "globals.m"
              break;
#line 124 "globals.m"
            case (MR_Integer) 2:
#line 6512 "libs.globals.c"
              *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 124 "globals.m"
              break;
#line 124 "globals.m"
            case (MR_Integer) 3:
#line 6518 "libs.globals.c"
              *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 124 "globals.m"
              break;
#line 124 "globals.m"
          }
#line 124 "globals.m"
          break;
#line 124 "globals.m"
        case (MR_Integer) 1:
#line 124 "globals.m"
          {
#line 124 "globals.m"
            MR_Word libs__globals__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 2)));
#line 124 "globals.m"
            MR_Word libs__globals__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 124 "globals.m"
            MR_Word libs__globals__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));

#line 124 "globals.m"
#line 124 "globals.m"
            switch (MR_tag((MR_Word) libs__globals__HeadVar__3_3)) {
#line 124 "globals.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 124 "globals.m"
              case (MR_Integer) 0:
#line 6544 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 124 "globals.m"
                break;
#line 124 "globals.m"
              case (MR_Integer) 1:
#line 124 "globals.m"
                {
#line 124 "globals.m"
                  MR_Word libs__globals__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 0)));
#line 124 "globals.m"
                  MR_Word libs__globals__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 1)));
#line 124 "globals.m"
                  MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 2)));
#line 124 "globals.m"
                  MR_Word libs__globals__V_10_10;

#line 124 "globals.m"
                  {
#line 124 "globals.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[1], &libs__globals__V_10_10, ((MR_Box) (libs__globals__V_57_57)), ((MR_Box) (libs__globals__V_7_7)));
                  }
#line 6566 "libs.globals.c"
                  libs__globals__succeeded = (libs__globals__V_10_10 == (MR_Integer) 0);
#line 124 "globals.m"
                  libs__globals__succeeded = !(libs__globals__succeeded);
#line 124 "globals.m"
                  if (libs__globals__succeeded)
#line 124 "globals.m"
                    *libs__globals__HeadVar__1_1 = libs__globals__V_10_10;
#line 124 "globals.m"
                  else
#line 124 "globals.m"
                    {
#line 124 "globals.m"
                      MR_Word libs__globals__V_11_11;

#line 124 "globals.m"
                      {
#line 124 "globals.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[1], &libs__globals__V_11_11, ((MR_Box) (libs__globals__V_56_56)), ((MR_Box) (libs__globals__V_8_8)));
                      }
#line 6586 "libs.globals.c"
                      libs__globals__succeeded = (libs__globals__V_11_11 == (MR_Integer) 0);
#line 124 "globals.m"
                      libs__globals__succeeded = !(libs__globals__succeeded);
#line 124 "globals.m"
                      if (libs__globals__succeeded)
#line 124 "globals.m"
                        *libs__globals__HeadVar__1_1 = libs__globals__V_11_11;
#line 124 "globals.m"
                      else
#line 124 "globals.m"
                        {
#line 124 "globals.m"
                          {
#line 124 "globals.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[1], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__V_55_55)), ((MR_Box) (libs__globals__V_9_9)));
#line 124 "globals.m"
                            return;
                          }
#line 124 "globals.m"
                        }
#line 124 "globals.m"
                    }
#line 124 "globals.m"
                }
#line 124 "globals.m"
                break;
#line 124 "globals.m"
              case (MR_Integer) 2:
#line 6615 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 124 "globals.m"
                break;
#line 124 "globals.m"
              case (MR_Integer) 3:
#line 6621 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 124 "globals.m"
                break;
#line 124 "globals.m"
            }
#line 124 "globals.m"
          }
#line 124 "globals.m"
          break;
#line 124 "globals.m"
        case (MR_Integer) 2:
#line 124 "globals.m"
          {
#line 124 "globals.m"
            MR_Word libs__globals__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__globals__HeadVar__2_2, (MR_Integer) 0)));

#line 124 "globals.m"
#line 124 "globals.m"
            switch (MR_tag((MR_Word) libs__globals__HeadVar__3_3)) {
#line 124 "globals.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 124 "globals.m"
              case (MR_Integer) 0:
#line 6645 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 124 "globals.m"
                break;
#line 124 "globals.m"
              case (MR_Integer) 1:
#line 6651 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 124 "globals.m"
                break;
#line 124 "globals.m"
              case (MR_Integer) 2:
#line 124 "globals.m"
                {
#line 124 "globals.m"
                  MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__globals__HeadVar__3_3, (MR_Integer) 0)));

#line 124 "globals.m"
                  {
#line 124 "globals.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[2], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__V_54_54)), ((MR_Box) (libs__globals__V_28_28)));
#line 124 "globals.m"
                    return;
                  }
#line 124 "globals.m"
                }
#line 124 "globals.m"
                break;
#line 124 "globals.m"
              case (MR_Integer) 3:
#line 6675 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 124 "globals.m"
                break;
#line 124 "globals.m"
            }
#line 124 "globals.m"
          }
#line 124 "globals.m"
          break;
#line 124 "globals.m"
        case (MR_Integer) 3:
#line 124 "globals.m"
          {
#line 124 "globals.m"
            MR_Word libs__globals__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__HeadVar__2_2, (MR_Integer) 0)));

#line 124 "globals.m"
#line 124 "globals.m"
            switch (MR_tag((MR_Word) libs__globals__HeadVar__3_3)) {
#line 124 "globals.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 124 "globals.m"
              case (MR_Integer) 0:
#line 6699 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
#line 124 "globals.m"
                break;
#line 124 "globals.m"
              case (MR_Integer) 1:
#line 6705 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 124 "globals.m"
                break;
#line 124 "globals.m"
              case (MR_Integer) 2:
#line 6711 "libs.globals.c"
                *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
#line 124 "globals.m"
                break;
#line 124 "globals.m"
              case (MR_Integer) 3:
#line 124 "globals.m"
                {
#line 124 "globals.m"
                  MR_Word libs__globals__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__HeadVar__3_3, (MR_Integer) 0)));

#line 124 "globals.m"
                  {
#line 124 "globals.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[1], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__V_53_53)), ((MR_Box) (libs__globals__V_39_39)));
#line 124 "globals.m"
                    return;
                  }
#line 124 "globals.m"
                }
#line 124 "globals.m"
                break;
#line 124 "globals.m"
            }
#line 124 "globals.m"
          }
#line 124 "globals.m"
          break;
#line 124 "globals.m"
      }
#line 124 "globals.m"
  }
#line 124 "globals.m"
}

#line 124 "globals.m"
MR_bool MR_CALL 
libs__globals____Unify____c_compiler_type_0_0(
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
    MR_Integer libs__globals__CastX_15 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 124 "globals.m"
    MR_Integer libs__globals__CastY_16 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 124 "globals.m"
    libs__globals__succeeded = (libs__globals__CastX_15 == libs__globals__CastY_16);
#line 124 "globals.m"
    if (libs__globals__succeeded)
#line 124 "globals.m"
      libs__globals__succeeded = MR_TRUE;
#line 124 "globals.m"
    else
#line 124 "globals.m"
#line 124 "globals.m"
      switch (MR_tag((MR_Word) libs__globals__HeadVar__1_1)) {
#line 124 "globals.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 124 "globals.m"
        case (MR_Integer) 0:
#line 124 "globals.m"
          {
#line 124 "globals.m"
            MR_Integer libs__globals__CastX_13 = (MR_Integer) libs__globals__HeadVar__1_1;
#line 124 "globals.m"
            MR_Integer libs__globals__CastY_14 = (MR_Integer) libs__globals__HeadVar__2_2;

#line 124 "globals.m"
            libs__globals__succeeded = (libs__globals__CastY_14 == libs__globals__CastX_13);
#line 124 "globals.m"
          }
#line 124 "globals.m"
          break;
#line 124 "globals.m"
        case (MR_Integer) 1:
#line 124 "globals.m"
          {
#line 124 "globals.m"
            MR_Word libs__globals__TypeInfo_19_19;
#line 124 "globals.m"
            MR_Word libs__globals__TypeInfo_20_20;
#line 124 "globals.m"
            MR_Word libs__globals__TypeInfo_21_21;
#line 124 "globals.m"
            MR_Word libs__globals__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 124 "globals.m"
            MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 1)));
#line 124 "globals.m"
            MR_Word libs__globals__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 2)));
#line 124 "globals.m"
            MR_Word libs__globals__V_6_6;
#line 124 "globals.m"
            MR_Word libs__globals__V_7_7;
#line 124 "globals.m"
            MR_Word libs__globals__V_8_8;

#line 124 "globals.m"
            libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 124 "globals.m"
            if (libs__globals__succeeded)
#line 124 "globals.m"
              {
#line 124 "globals.m"
                libs__globals__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 124 "globals.m"
                libs__globals__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
#line 124 "globals.m"
                libs__globals__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 2)));
#line 6827 "libs.globals.c"
                libs__globals__TypeInfo_19_19 = (MR_Word) &libs__globals_scalar_common_1[1];
#line 6829 "libs.globals.c"
                {
#line 6831 "libs.globals.c"
                  libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_19_19, ((MR_Box) (libs__globals__V_3_3)), ((MR_Box) (libs__globals__V_6_6)));
                }
#line 124 "globals.m"
                if (libs__globals__succeeded)
#line 124 "globals.m"
                  {
#line 6838 "libs.globals.c"
                    libs__globals__TypeInfo_20_20 = (MR_Word) &libs__globals_scalar_common_1[1];
#line 6840 "libs.globals.c"
                    {
#line 6842 "libs.globals.c"
                      libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_20_20, ((MR_Box) (libs__globals__V_4_4)), ((MR_Box) (libs__globals__V_7_7)));
                    }
#line 124 "globals.m"
                    if (libs__globals__succeeded)
#line 124 "globals.m"
                      {
#line 6849 "libs.globals.c"
                        libs__globals__TypeInfo_21_21 = (MR_Word) &libs__globals_scalar_common_1[1];
#line 6851 "libs.globals.c"
                        {
#line 6853 "libs.globals.c"
                          return libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_21_21, ((MR_Box) (libs__globals__V_5_5)), ((MR_Box) (libs__globals__V_8_8)));
                        }
#line 124 "globals.m"
                      }
#line 124 "globals.m"
                  }
#line 124 "globals.m"
              }
#line 124 "globals.m"
          }
#line 124 "globals.m"
          break;
#line 124 "globals.m"
        case (MR_Integer) 2:
#line 124 "globals.m"
          {
#line 124 "globals.m"
            MR_Word libs__globals__TypeInfo_18_18;
#line 124 "globals.m"
            MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 124 "globals.m"
            MR_Word libs__globals__V_10_10;

#line 124 "globals.m"
            libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 124 "globals.m"
            if (libs__globals__succeeded)
#line 124 "globals.m"
              {
#line 124 "globals.m"
                libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 6885 "libs.globals.c"
                libs__globals__TypeInfo_18_18 = (MR_Word) &libs__globals_scalar_common_1[2];
#line 6887 "libs.globals.c"
                {
#line 6889 "libs.globals.c"
                  return libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_18_18, ((MR_Box) (libs__globals__V_9_9)), ((MR_Box) (libs__globals__V_10_10)));
                }
#line 124 "globals.m"
              }
#line 124 "globals.m"
          }
#line 124 "globals.m"
          break;
#line 124 "globals.m"
        case (MR_Integer) 3:
#line 124 "globals.m"
          {
#line 124 "globals.m"
            MR_Word libs__globals__TypeInfo_17_17;
#line 124 "globals.m"
            MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 124 "globals.m"
            MR_Word libs__globals__V_12_12;

#line 124 "globals.m"
            libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 124 "globals.m"
            if (libs__globals__succeeded)
#line 124 "globals.m"
              {
#line 124 "globals.m"
                libs__globals__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
#line 6917 "libs.globals.c"
                libs__globals__TypeInfo_17_17 = (MR_Word) &libs__globals_scalar_common_1[1];
#line 6919 "libs.globals.c"
                {
#line 6921 "libs.globals.c"
                  return libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_17_17, ((MR_Box) (libs__globals__V_11_11)), ((MR_Box) (libs__globals__V_12_12)));
                }
#line 124 "globals.m"
              }
#line 124 "globals.m"
          }
#line 124 "globals.m"
          break;
#line 124 "globals.m"
      }
#line 124 "globals.m"
    return libs__globals__succeeded;
#line 124 "globals.m"
  }
#line 124 "globals.m"
}

#line 970 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_maybe_source_file_map_1_p_0(
#line 970 "globals.m"
  MR_Word libs__globals__X_1)
#line 970 "globals.m"
{
#line 970 "globals.m"
  {
#line 970 "globals.m"
    MR_bool libs__globals__succeeded;

#line 970 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_set_maybe_source_file_map_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 970 "globals.m"
libs__globals__mutable_variable_maybe_source_file_map = X;

#line 6962 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 970 "globals.m"
}
#line 970 "globals.m"
  }
#line 970 "globals.m"
}

#line 970 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_maybe_source_file_map_1_p_0(
#line 970 "globals.m"
  MR_Word * libs__globals__X_1)
#line 970 "globals.m"
{
#line 970 "globals.m"
  {
#line 970 "globals.m"
    MR_bool libs__globals__succeeded;

#line 970 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_get_maybe_source_file_map_1_p_0

	MR_Word X;

		{
#line 970 "globals.m"
X = libs__globals__mutable_variable_maybe_source_file_map;

#line 6995 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
#line 970 "globals.m"
}
#line 970 "globals.m"
  }
#line 970 "globals.m"
}

#line 970 "globals.m"
static void MR_CALL 
libs__globals__unlock_maybe_source_file_map_0_p_0(void)
#line 970 "globals.m"
{
#line 970 "globals.m"
  {
#line 970 "globals.m"
    MR_bool libs__globals__succeeded;

#line 970 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_maybe_source_file_map_0_p_0


		{
#line 970 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                    "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 7029 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 970 "globals.m"
}
#line 970 "globals.m"
  }
#line 970 "globals.m"
}

#line 970 "globals.m"
static void MR_CALL 
libs__globals__lock_maybe_source_file_map_0_p_0(void)
#line 970 "globals.m"
{
#line 970 "globals.m"
  {
#line 970 "globals.m"
    MR_bool libs__globals__succeeded;

#line 970 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_maybe_source_file_map_0_p_0


		{
#line 970 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                    "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 7062 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 970 "globals.m"
}
#line 970 "globals.m"
  }
#line 970 "globals.m"
}

#line 970 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_maybe_source_file_map_0_p_0(void)
#line 970 "globals.m"
{
#line 970 "globals.m"
  {
#line 970 "globals.m"
    MR_bool libs__globals__succeeded;

#line 970 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_source_file_map_0_p_0


		{
#line 970 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_maybe_source_file_map_lock, MR_MUTEX_ATTR);
#endif

#line 7094 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 970 "globals.m"
}
#line 970 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_source_file_map_0_p_0


		{
#line 970 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                    "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 7112 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 970 "globals.m"
}
#line 970 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_source_file_map_0_p_0

	MR_Word X;

	X =  (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) ;
		{
#line 970 "globals.m"
libs__globals__mutable_variable_maybe_source_file_map = X;

#line 7129 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 970 "globals.m"
}
#line 970 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_source_file_map_0_p_0


		{
#line 970 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                    "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 7147 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 970 "globals.m"
}
#line 970 "globals.m"
  }
#line 970 "globals.m"
}

#line 970 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_maybe_source_file_map_0_p_0(void)
#line 970 "globals.m"
{
#line 970 "globals.m"
  {
#line 970 "globals.m"
    MR_bool libs__globals__succeeded;

#line 970 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_maybe_source_file_map_0_p_0


		{
#line 970 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_maybe_source_file_map_lock, MR_MUTEX_ATTR);
#endif

#line 7179 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 970 "globals.m"
}
#line 970 "globals.m"
  }
#line 970 "globals.m"
}

#line 967 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_disable_generate_item_version_numbers_1_p_0(
#line 967 "globals.m"
  MR_Word libs__globals__X_1)
#line 967 "globals.m"
{
#line 967 "globals.m"
  {
#line 967 "globals.m"
    MR_bool libs__globals__succeeded;

#line 967 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_set_disable_generate_item_version_numbers_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 967 "globals.m"
libs__globals__mutable_variable_disable_generate_item_version_numbers = X;

#line 7213 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 967 "globals.m"
}
#line 967 "globals.m"
  }
#line 967 "globals.m"
}

#line 967 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_disable_generate_item_version_numbers_1_p_0(
#line 967 "globals.m"
  MR_Word * libs__globals__X_1)
#line 967 "globals.m"
{
#line 967 "globals.m"
  {
#line 967 "globals.m"
    MR_bool libs__globals__succeeded;

#line 967 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_get_disable_generate_item_version_numbers_1_p_0

	MR_Word X;

		{
#line 967 "globals.m"
X = libs__globals__mutable_variable_disable_generate_item_version_numbers;

#line 7246 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
#line 967 "globals.m"
}
#line 967 "globals.m"
  }
#line 967 "globals.m"
}

#line 967 "globals.m"
static void MR_CALL 
libs__globals__unlock_disable_generate_item_version_numbers_0_p_0(void)
#line 967 "globals.m"
{
#line 967 "globals.m"
  {
#line 967 "globals.m"
    MR_bool libs__globals__succeeded;

#line 967 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_disable_generate_item_version_numbers_0_p_0


		{
#line 967 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                    "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 7280 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 967 "globals.m"
}
#line 967 "globals.m"
  }
#line 967 "globals.m"
}

#line 967 "globals.m"
static void MR_CALL 
libs__globals__lock_disable_generate_item_version_numbers_0_p_0(void)
#line 967 "globals.m"
{
#line 967 "globals.m"
  {
#line 967 "globals.m"
    MR_bool libs__globals__succeeded;

#line 967 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_disable_generate_item_version_numbers_0_p_0


		{
#line 967 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                    "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 7313 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 967 "globals.m"
}
#line 967 "globals.m"
  }
#line 967 "globals.m"
}

#line 967 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0(void)
#line 967 "globals.m"
{
#line 967 "globals.m"
  {
#line 967 "globals.m"
    MR_bool libs__globals__succeeded;

#line 967 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0


		{
#line 967 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock, MR_MUTEX_ATTR);
#endif

#line 7345 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 967 "globals.m"
}
#line 967 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0


		{
#line 967 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                    "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 7363 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 967 "globals.m"
}
#line 967 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 967 "globals.m"
libs__globals__mutable_variable_disable_generate_item_version_numbers = X;

#line 7380 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 967 "globals.m"
}
#line 967 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0


		{
#line 967 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                    "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 7398 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 967 "globals.m"
}
#line 967 "globals.m"
  }
#line 967 "globals.m"
}

#line 967 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_disable_generate_item_version_numbers_0_p_0(void)
#line 967 "globals.m"
{
#line 967 "globals.m"
  {
#line 967 "globals.m"
    MR_bool libs__globals__succeeded;

#line 967 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_disable_generate_item_version_numbers_0_p_0


		{
#line 967 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock, MR_MUTEX_ATTR);
#endif

#line 7430 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 967 "globals.m"
}
#line 967 "globals.m"
  }
#line 967 "globals.m"
}

#line 964 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_disable_smart_recompilation_1_p_0(
#line 964 "globals.m"
  MR_Word libs__globals__X_1)
#line 964 "globals.m"
{
#line 964 "globals.m"
  {
#line 964 "globals.m"
    MR_bool libs__globals__succeeded;

#line 964 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_set_disable_smart_recompilation_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 964 "globals.m"
libs__globals__mutable_variable_disable_smart_recompilation = X;

#line 7464 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 964 "globals.m"
}
#line 964 "globals.m"
  }
#line 964 "globals.m"
}

#line 964 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_disable_smart_recompilation_1_p_0(
#line 964 "globals.m"
  MR_Word * libs__globals__X_1)
#line 964 "globals.m"
{
#line 964 "globals.m"
  {
#line 964 "globals.m"
    MR_bool libs__globals__succeeded;

#line 964 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_get_disable_smart_recompilation_1_p_0

	MR_Word X;

		{
#line 964 "globals.m"
X = libs__globals__mutable_variable_disable_smart_recompilation;

#line 7497 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
#line 964 "globals.m"
}
#line 964 "globals.m"
  }
#line 964 "globals.m"
}

#line 964 "globals.m"
static void MR_CALL 
libs__globals__unlock_disable_smart_recompilation_0_p_0(void)
#line 964 "globals.m"
{
#line 964 "globals.m"
  {
#line 964 "globals.m"
    MR_bool libs__globals__succeeded;

#line 964 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_disable_smart_recompilation_0_p_0


		{
#line 964 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                    "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 7531 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 964 "globals.m"
}
#line 964 "globals.m"
  }
#line 964 "globals.m"
}

#line 964 "globals.m"
static void MR_CALL 
libs__globals__lock_disable_smart_recompilation_0_p_0(void)
#line 964 "globals.m"
{
#line 964 "globals.m"
  {
#line 964 "globals.m"
    MR_bool libs__globals__succeeded;

#line 964 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_disable_smart_recompilation_0_p_0


		{
#line 964 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                    "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 7564 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 964 "globals.m"
}
#line 964 "globals.m"
  }
#line 964 "globals.m"
}

#line 964 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0(void)
#line 964 "globals.m"
{
#line 964 "globals.m"
  {
#line 964 "globals.m"
    MR_bool libs__globals__succeeded;

#line 964 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0


		{
#line 964 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_disable_smart_recompilation_lock, MR_MUTEX_ATTR);
#endif

#line 7596 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 964 "globals.m"
}
#line 964 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0


		{
#line 964 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                    "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 7614 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 964 "globals.m"
}
#line 964 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 964 "globals.m"
libs__globals__mutable_variable_disable_smart_recompilation = X;

#line 7631 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 964 "globals.m"
}
#line 964 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0


		{
#line 964 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                    "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 7649 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 964 "globals.m"
}
#line 964 "globals.m"
  }
#line 964 "globals.m"
}

#line 964 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_disable_smart_recompilation_0_p_0(void)
#line 964 "globals.m"
{
#line 964 "globals.m"
  {
#line 964 "globals.m"
    MR_bool libs__globals__succeeded;

#line 964 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_disable_smart_recompilation_0_p_0


		{
#line 964 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_disable_smart_recompilation_lock, MR_MUTEX_ATTR);
#endif

#line 7681 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 964 "globals.m"
}
#line 964 "globals.m"
  }
#line 964 "globals.m"
}

#line 961 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_some_errors_were_context_limited_1_p_0(
#line 961 "globals.m"
  MR_Word libs__globals__X_1)
#line 961 "globals.m"
{
#line 961 "globals.m"
  {
#line 961 "globals.m"
    MR_bool libs__globals__succeeded;

#line 961 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_set_some_errors_were_context_limited_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 961 "globals.m"
libs__globals__mutable_variable_some_errors_were_context_limited = X;

#line 7715 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 961 "globals.m"
}
#line 961 "globals.m"
  }
#line 961 "globals.m"
}

#line 961 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_some_errors_were_context_limited_1_p_0(
#line 961 "globals.m"
  MR_Word * libs__globals__X_1)
#line 961 "globals.m"
{
#line 961 "globals.m"
  {
#line 961 "globals.m"
    MR_bool libs__globals__succeeded;

#line 961 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_get_some_errors_were_context_limited_1_p_0

	MR_Word X;

		{
#line 961 "globals.m"
X = libs__globals__mutable_variable_some_errors_were_context_limited;

#line 7748 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
#line 961 "globals.m"
}
#line 961 "globals.m"
  }
#line 961 "globals.m"
}

#line 961 "globals.m"
static void MR_CALL 
libs__globals__unlock_some_errors_were_context_limited_0_p_0(void)
#line 961 "globals.m"
{
#line 961 "globals.m"
  {
#line 961 "globals.m"
    MR_bool libs__globals__succeeded;

#line 961 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_some_errors_were_context_limited_0_p_0


		{
#line 961 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_some_errors_were_context_limited_lock,
                    "libs__globals__mutable_variable_some_errors_were_context_limited_lock");
#endif

#line 7782 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 961 "globals.m"
}
#line 961 "globals.m"
  }
#line 961 "globals.m"
}

#line 961 "globals.m"
static void MR_CALL 
libs__globals__lock_some_errors_were_context_limited_0_p_0(void)
#line 961 "globals.m"
{
#line 961 "globals.m"
  {
#line 961 "globals.m"
    MR_bool libs__globals__succeeded;

#line 961 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_some_errors_were_context_limited_0_p_0


		{
#line 961 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_some_errors_were_context_limited_lock,
                    "libs__globals__mutable_variable_some_errors_were_context_limited_lock");
#endif

#line 7815 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 961 "globals.m"
}
#line 961 "globals.m"
  }
#line 961 "globals.m"
}

#line 961 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_some_errors_were_context_limited_0_p_0(void)
#line 961 "globals.m"
{
#line 961 "globals.m"
  {
#line 961 "globals.m"
    MR_bool libs__globals__succeeded;

#line 961 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_some_errors_were_context_limited_0_p_0


		{
#line 961 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_some_errors_were_context_limited_lock, MR_MUTEX_ATTR);
#endif

#line 7847 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 961 "globals.m"
}
#line 961 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_some_errors_were_context_limited_0_p_0


		{
#line 961 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_some_errors_were_context_limited_lock,
                    "libs__globals__mutable_variable_some_errors_were_context_limited_lock");
#endif

#line 7865 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 961 "globals.m"
}
#line 961 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_some_errors_were_context_limited_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 961 "globals.m"
libs__globals__mutable_variable_some_errors_were_context_limited = X;

#line 7882 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 961 "globals.m"
}
#line 961 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_some_errors_were_context_limited_0_p_0


		{
#line 961 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_some_errors_were_context_limited_lock,
                    "libs__globals__mutable_variable_some_errors_were_context_limited_lock");
#endif

#line 7900 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 961 "globals.m"
}
#line 961 "globals.m"
  }
#line 961 "globals.m"
}

#line 961 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_some_errors_were_context_limited_0_p_0(void)
#line 961 "globals.m"
{
#line 961 "globals.m"
  {
#line 961 "globals.m"
    MR_bool libs__globals__succeeded;

#line 961 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_some_errors_were_context_limited_0_p_0


		{
#line 961 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_some_errors_were_context_limited_lock, MR_MUTEX_ATTR);
#endif

#line 7932 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 961 "globals.m"
}
#line 961 "globals.m"
  }
#line 961 "globals.m"
}

#line 955 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_extra_error_info_1_p_0(
#line 955 "globals.m"
  MR_Word libs__globals__X_1)
#line 955 "globals.m"
{
#line 955 "globals.m"
  {
#line 955 "globals.m"
    MR_bool libs__globals__succeeded;

#line 955 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_set_extra_error_info_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 955 "globals.m"
libs__globals__mutable_variable_extra_error_info = X;

#line 7966 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 955 "globals.m"
}
#line 955 "globals.m"
  }
#line 955 "globals.m"
}

#line 955 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_extra_error_info_1_p_0(
#line 955 "globals.m"
  MR_Word * libs__globals__X_1)
#line 955 "globals.m"
{
#line 955 "globals.m"
  {
#line 955 "globals.m"
    MR_bool libs__globals__succeeded;

#line 955 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_get_extra_error_info_1_p_0

	MR_Word X;

		{
#line 955 "globals.m"
X = libs__globals__mutable_variable_extra_error_info;

#line 7999 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
#line 955 "globals.m"
}
#line 955 "globals.m"
  }
#line 955 "globals.m"
}

#line 955 "globals.m"
static void MR_CALL 
libs__globals__unlock_extra_error_info_0_p_0(void)
#line 955 "globals.m"
{
#line 955 "globals.m"
  {
#line 955 "globals.m"
    MR_bool libs__globals__succeeded;

#line 955 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_extra_error_info_0_p_0


		{
#line 955 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                    "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 8033 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 955 "globals.m"
}
#line 955 "globals.m"
  }
#line 955 "globals.m"
}

#line 955 "globals.m"
static void MR_CALL 
libs__globals__lock_extra_error_info_0_p_0(void)
#line 955 "globals.m"
{
#line 955 "globals.m"
  {
#line 955 "globals.m"
    MR_bool libs__globals__succeeded;

#line 955 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_extra_error_info_0_p_0


		{
#line 955 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                    "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 8066 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 955 "globals.m"
}
#line 955 "globals.m"
  }
#line 955 "globals.m"
}

#line 955 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_extra_error_info_0_p_0(void)
#line 955 "globals.m"
{
#line 955 "globals.m"
  {
#line 955 "globals.m"
    MR_bool libs__globals__succeeded;

#line 955 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_extra_error_info_0_p_0


		{
#line 955 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_extra_error_info_lock, MR_MUTEX_ATTR);
#endif

#line 8098 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 955 "globals.m"
}
#line 955 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_extra_error_info_0_p_0


		{
#line 955 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                    "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 8116 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 955 "globals.m"
}
#line 955 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_extra_error_info_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 955 "globals.m"
libs__globals__mutable_variable_extra_error_info = X;

#line 8133 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 955 "globals.m"
}
#line 955 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_extra_error_info_0_p_0


		{
#line 955 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                    "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 8151 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 955 "globals.m"
}
#line 955 "globals.m"
  }
#line 955 "globals.m"
}

#line 955 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_extra_error_info_0_p_0(void)
#line 955 "globals.m"
{
#line 955 "globals.m"
  {
#line 955 "globals.m"
    MR_bool libs__globals__succeeded;

#line 955 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_extra_error_info_0_p_0


		{
#line 955 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_extra_error_info_lock, MR_MUTEX_ATTR);
#endif

#line 8183 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 955 "globals.m"
}
#line 955 "globals.m"
  }
#line 955 "globals.m"
}

#line 949 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_maybe_from_ground_term_threshold_1_p_0(
#line 949 "globals.m"
  MR_Word libs__globals__X_1)
#line 949 "globals.m"
{
#line 949 "globals.m"
  {
#line 949 "globals.m"
    MR_bool libs__globals__succeeded;

#line 949 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_set_maybe_from_ground_term_threshold_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 949 "globals.m"
libs__globals__mutable_variable_maybe_from_ground_term_threshold = X;

#line 8217 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 949 "globals.m"
}
#line 949 "globals.m"
  }
#line 949 "globals.m"
}

#line 949 "globals.m"
static void MR_CALL 
libs__globals__unsafe_get_maybe_from_ground_term_threshold_1_p_0(
#line 949 "globals.m"
  MR_Word * libs__globals__X_1)
#line 949 "globals.m"
{
#line 949 "globals.m"
  {
#line 949 "globals.m"
    MR_bool libs__globals__succeeded;

#line 949 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unsafe_get_maybe_from_ground_term_threshold_1_p_0

	MR_Word X;

		{
#line 949 "globals.m"
X = libs__globals__mutable_variable_maybe_from_ground_term_threshold;

#line 8250 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
#line 949 "globals.m"
}
#line 949 "globals.m"
  }
#line 949 "globals.m"
}

#line 949 "globals.m"
static void MR_CALL 
libs__globals__unlock_maybe_from_ground_term_threshold_0_p_0(void)
#line 949 "globals.m"
{
#line 949 "globals.m"
  {
#line 949 "globals.m"
    MR_bool libs__globals__succeeded;

#line 949 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_maybe_from_ground_term_threshold_0_p_0


		{
#line 949 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                    "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 8284 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 949 "globals.m"
}
#line 949 "globals.m"
  }
#line 949 "globals.m"
}

#line 949 "globals.m"
static void MR_CALL 
libs__globals__lock_maybe_from_ground_term_threshold_0_p_0(void)
#line 949 "globals.m"
{
#line 949 "globals.m"
  {
#line 949 "globals.m"
    MR_bool libs__globals__succeeded;

#line 949 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_maybe_from_ground_term_threshold_0_p_0


		{
#line 949 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                    "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 8317 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 949 "globals.m"
}
#line 949 "globals.m"
  }
#line 949 "globals.m"
}

#line 949 "globals.m"
static void MR_CALL 
libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0(void)
#line 949 "globals.m"
{
#line 949 "globals.m"
  {
#line 949 "globals.m"
    MR_bool libs__globals__succeeded;

#line 949 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0


		{
#line 949 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock, MR_MUTEX_ATTR);
#endif

#line 8349 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 949 "globals.m"
}
#line 949 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0


		{
#line 949 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                    "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 8367 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 949 "globals.m"
}
#line 949 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0

	MR_Word X;

	X =  (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) ;
		{
#line 949 "globals.m"
libs__globals__mutable_variable_maybe_from_ground_term_threshold = X;

#line 8384 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 949 "globals.m"
}
#line 949 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0


		{
#line 949 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                    "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 8402 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 949 "globals.m"
}
#line 949 "globals.m"
  }
#line 949 "globals.m"
}

#line 949 "globals.m"
static void MR_CALL 
libs__globals__pre_initialise_mutable_maybe_from_ground_term_threshold_0_p_0(void)
#line 949 "globals.m"
{
#line 949 "globals.m"
  {
#line 949 "globals.m"
    MR_bool libs__globals__succeeded;

#line 949 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_maybe_from_ground_term_threshold_0_p_0


		{
#line 949 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock, MR_MUTEX_ATTR);
#endif

#line 8434 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 949 "globals.m"
}
#line 949 "globals.m"
  }
#line 949 "globals.m"
}

#line 944 "globals.m"
static void MR_CALL 
libs__globals__unsafe_set_solver_auto_init_supported_1_p_0(
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
#define MR_PROC_LABEL libs__globals__unsafe_set_solver_auto_init_supported_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
#line 944 "globals.m"
MR_set_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_solver_auto_init_supported);

#line 8468 "libs.globals.c"

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
libs__globals__unsafe_get_solver_auto_init_supported_1_p_0(
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
#define MR_PROC_LABEL libs__globals__unsafe_get_solver_auto_init_supported_1_p_0

	MR_Word X;

		{
#line 944 "globals.m"
MR_get_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_solver_auto_init_supported);

#line 8501 "libs.globals.c"

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
libs__globals__unlock_solver_auto_init_supported_0_p_0(void)
#line 944 "globals.m"
{
#line 944 "globals.m"
  {
#line 944 "globals.m"
    MR_bool libs__globals__succeeded;

#line 944 "globals.m"
{
#define MR_PROC_LABEL libs__globals__unlock_solver_auto_init_supported_0_p_0


		{
#line 944 "globals.m"

#line 8531 "libs.globals.c"

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
libs__globals__lock_solver_auto_init_supported_0_p_0(void)
#line 944 "globals.m"
{
#line 944 "globals.m"
  {
#line 944 "globals.m"
    MR_bool libs__globals__succeeded;

#line 944 "globals.m"
{
#define MR_PROC_LABEL libs__globals__lock_solver_auto_init_supported_0_p_0


		{
#line 944 "globals.m"

#line 8560 "libs.globals.c"

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
libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0(void)
#line 944 "globals.m"
{
#line 944 "globals.m"
  {
#line 944 "globals.m"
    MR_bool libs__globals__succeeded;

#line 944 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0


		{
#line 944 "globals.m"
libs__globals__mutable_variable_solver_auto_init_supported = MR_new_thread_local_mutable_index();

#line 8590 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 944 "globals.m"
}
#line 944 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0


		{
#line 944 "globals.m"

#line 8604 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 944 "globals.m"
}
#line 944 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 944 "globals.m"
MR_set_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_solver_auto_init_supported);

#line 8621 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 944 "globals.m"
}
#line 944 "globals.m"
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_solver_auto_init_supported_0_p_0


		{
#line 944 "globals.m"

#line 8635 "libs.globals.c"

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
libs__globals__pre_initialise_mutable_solver_auto_init_supported_0_p_0(void)
#line 944 "globals.m"
{
#line 944 "globals.m"
  {
#line 944 "globals.m"
    MR_bool libs__globals__succeeded;

#line 944 "globals.m"
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_solver_auto_init_supported_0_p_0


		{
#line 944 "globals.m"
libs__globals__mutable_variable_solver_auto_init_supported = MR_new_thread_local_mutable_index();

#line 8665 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 944 "globals.m"
}
#line 944 "globals.m"
  }
#line 944 "globals.m"
}

#line 626 "globals.m"
static MR_bool MR_CALL 
libs__globals__convert_line_number_range_2_p_0(
#line 626 "globals.m"
  MR_String libs__globals__RangeStr_3,
#line 626 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 626 "globals.m"
{
#line 629 "globals.m"
  {
#line 629 "globals.m"
    MR_bool libs__globals__succeeded;
#line 629 "globals.m"
    MR_Word libs__globals__MaybeMin_4;
#line 629 "globals.m"
    MR_Word libs__globals__MaybeMax_5;
#line 629 "globals.m"
    MR_String libs__globals__MinStr_6;
#line 629 "globals.m"
    MR_String libs__globals__MaxStr_7;
#line 629 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 629 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 629 "globals.m"
    MR_Word libs__globals__V_13_13;

#line 630 "globals.m"
    {
#line 630 "globals.m"
      libs__globals__V_10_10 = mercury__string__split_at_char_2_f_0((MR_Char) 45, libs__globals__RangeStr_3);
    }
#line 630 "globals.m"
    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 630 "globals.m"
    if (libs__globals__succeeded)
#line 630 "globals.m"
      {
#line 630 "globals.m"
        libs__globals__MinStr_6 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_10_10, (MR_Integer) 0)));
#line 630 "globals.m"
        libs__globals__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_10_10, (MR_Integer) 1)));
#line 630 "globals.m"
        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 630 "globals.m"
        if (libs__globals__succeeded)
#line 630 "globals.m"
          {
#line 630 "globals.m"
            libs__globals__MaxStr_7 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_12_12, (MR_Integer) 0)));
#line 630 "globals.m"
            libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_12_12, (MR_Integer) 1)));
#line 630 "globals.m"
            libs__globals__succeeded = (libs__globals__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 629 "globals.m"
            if (libs__globals__succeeded)
#line 629 "globals.m"
              {
#line 631 "globals.m"
                libs__globals__succeeded = (strcmp(libs__globals__MinStr_6, (MR_String) "") == 0);
#line 633 "globals.m"
                if (libs__globals__succeeded)
#line 632 "globals.m"
                  {
#line 632 "globals.m"
                    libs__globals__MaybeMin_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 632 "globals.m"
                    libs__globals__succeeded = MR_TRUE;
#line 632 "globals.m"
                  }
#line 633 "globals.m"
                else
#line 634 "globals.m"
                  {
#line 634 "globals.m"
                    MR_Integer libs__globals__Min_8;

#line 634 "globals.m"
                    {
#line 634 "globals.m"
                      libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__MinStr_6, &libs__globals__Min_8);
                    }
#line 634 "globals.m"
                    if (libs__globals__succeeded)
#line 634 "globals.m"
                      {
#line 635 "globals.m"
                        {
#line 635 "globals.m"
                          libs__globals__MaybeMin_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 635 "globals.m"
                          MR_hl_field(MR_mktag(1), libs__globals__MaybeMin_4, 0) = ((MR_Box) (libs__globals__Min_8));
#line 635 "globals.m"
                        }
#line 635 "globals.m"
                        libs__globals__succeeded = MR_TRUE;
#line 634 "globals.m"
                      }
#line 634 "globals.m"
                  }
#line 629 "globals.m"
                if (libs__globals__succeeded)
#line 629 "globals.m"
                  {
#line 637 "globals.m"
                    libs__globals__succeeded = (strcmp(libs__globals__MaxStr_7, (MR_String) "") == 0);
#line 639 "globals.m"
                    if (libs__globals__succeeded)
#line 638 "globals.m"
                      {
#line 638 "globals.m"
                        libs__globals__MaybeMax_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 638 "globals.m"
                        libs__globals__succeeded = MR_TRUE;
#line 638 "globals.m"
                      }
#line 639 "globals.m"
                    else
#line 640 "globals.m"
                      {
#line 640 "globals.m"
                        MR_Integer libs__globals__Max_9;

#line 640 "globals.m"
                        {
#line 640 "globals.m"
                          libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__MaxStr_7, &libs__globals__Max_9);
                        }
#line 640 "globals.m"
                        if (libs__globals__succeeded)
#line 640 "globals.m"
                          {
#line 641 "globals.m"
                            {
#line 641 "globals.m"
                              libs__globals__MaybeMax_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 641 "globals.m"
                              MR_hl_field(MR_mktag(1), libs__globals__MaybeMax_5, 0) = ((MR_Box) (libs__globals__Max_9));
#line 641 "globals.m"
                            }
#line 641 "globals.m"
                            libs__globals__succeeded = MR_TRUE;
#line 640 "globals.m"
                          }
#line 640 "globals.m"
                      }
#line 629 "globals.m"
                    if (libs__globals__succeeded)
#line 629 "globals.m"
                      {
#line 629 "globals.m"
                        {
#line 629 "globals.m"
                          MR_Word base;
#line 629 "globals.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 629 "globals.m"
                          *libs__globals__HeadVar__2_2 = base;
#line 629 "globals.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__MaybeMin_4));
#line 629 "globals.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__globals__MaybeMax_5));
#line 629 "globals.m"
                        }
#line 629 "globals.m"
                        libs__globals__succeeded = MR_TRUE;
#line 629 "globals.m"
                      }
#line 629 "globals.m"
                  }
#line 629 "globals.m"
              }
#line 630 "globals.m"
          }
#line 630 "globals.m"
      }
#line 629 "globals.m"
    return libs__globals__succeeded;
#line 629 "globals.m"
  }
#line 626 "globals.m"
}

#line 611 "globals.m"
static void MR_CALL 
libs__globals__find_file_name_and_line_range_chars_4_p_0(
#line 611 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 611 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_LineRangeChars_0_2,
#line 611 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_LineRangeChars_3,
#line 611 "globals.m"
  MR_Word * libs__globals__HeadVar__4_4)
#line 611 "globals.m"
{
#line 614 "globals.m"
  while (MR_TRUE)
#line 614 "globals.m"
    {
#line 614 "globals.m"
      /* tailcall optimized into a loop */
#line 614 "globals.m"
      {
#line 614 "globals.m"
        MR_bool libs__globals__succeeded;

#line 614 "globals.m"
        if ((libs__globals__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 614 "globals.m"
          {
#line 614 "globals.m"
            *libs__globals__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 614 "globals.m"
            *libs__globals__STATE_VARIABLE_LineRangeChars_3 = libs__globals__STATE_VARIABLE_LineRangeChars_0_2;
#line 614 "globals.m"
          }
#line 614 "globals.m"
        else
#line 616 "globals.m"
          {
#line 616 "globals.m"
            MR_Char libs__globals__RevChar_8 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 616 "globals.m"
            MR_Word libs__globals__RevChars_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 1)));

#line 617 "globals.m"
            libs__globals__succeeded = (libs__globals__RevChar_8 == (MR_Char) 58);
#line 619 "globals.m"
            if (libs__globals__succeeded)
#line 618 "globals.m"
              {
#line 618 "globals.m"
                *libs__globals__HeadVar__4_4 = libs__globals__RevChars_9;
#line 618 "globals.m"
                *libs__globals__STATE_VARIABLE_LineRangeChars_3 = libs__globals__STATE_VARIABLE_LineRangeChars_0_2;
#line 618 "globals.m"
              }
#line 619 "globals.m"
            else
#line 621 "globals.m"
              {
#line 621 "globals.m"
                MR_Word libs__globals__STATE_VARIABLE_LineRangeChars_14_14;

#line 621 "globals.m"
                {
#line 621 "globals.m"
                  libs__globals__STATE_VARIABLE_LineRangeChars_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 621 "globals.m"
                  MR_hl_field(MR_mktag(1), libs__globals__STATE_VARIABLE_LineRangeChars_14_14, 0) = ((MR_Box) (MR_Word) (libs__globals__RevChar_8));
#line 621 "globals.m"
                  MR_hl_field(MR_mktag(1), libs__globals__STATE_VARIABLE_LineRangeChars_14_14, 1) = ((MR_Box) (libs__globals__STATE_VARIABLE_LineRangeChars_0_2));
#line 621 "globals.m"
                }
#line 622 "globals.m"
                /* direct tailcall eliminated */
#line 622 "globals.m"
                {
#line 622 "globals.m"
                  MR_Word libs__globals__HeadVar__1__tmp_copy_1 = libs__globals__RevChars_9;
#line 622 "globals.m"
                  MR_Word libs__globals__STATE_VARIABLE_LineRangeChars_0__tmp_copy_2 = libs__globals__STATE_VARIABLE_LineRangeChars_14_14;

#line 622 "globals.m"
                  libs__globals__STATE_VARIABLE_LineRangeChars_0_2 = libs__globals__STATE_VARIABLE_LineRangeChars_0__tmp_copy_2;
#line 622 "globals.m"
                  libs__globals__HeadVar__1_1 = libs__globals__HeadVar__1__tmp_copy_1;
#line 622 "globals.m"
                }
#line 622 "globals.m"
                continue;
#line 621 "globals.m"
              }
#line 616 "globals.m"
          }
#line 614 "globals.m"
      }
#line 614 "globals.m"
      break;
#line 614 "globals.m"
    }
#line 611 "globals.m"
}

#line 603 "globals.m"
static MR_bool MR_CALL 
libs__globals__convert_limit_error_contexts_acc_5_p_0_1(
#line 603 "globals.m"
  MR_Box libs__globals__closure_arg,
#line 603 "globals.m"
  MR_Box libs__globals__wrapper_arg_1,
#line 603 "globals.m"
  MR_Box * libs__globals__wrapper_arg_2)
#line 603 "globals.m"
{
#line 603 "globals.m"
  {
#line 603 "globals.m"
    MR_bool libs__globals__succeeded;
#line 603 "globals.m"
    MR_Box libs__globals__closure = libs__globals__closure_arg;
#line 603 "globals.m"
    MR_Word libs__globals__conv0_HeadVar__2_2;

#line 603 "globals.m"
    {
#line 603 "globals.m"
      libs__globals__succeeded = libs__globals__convert_line_number_range_2_p_0(((MR_String) libs__globals__wrapper_arg_1), &libs__globals__conv0_HeadVar__2_2);
    }
#line 603 "globals.m"
    if (libs__globals__succeeded)
#line 603 "globals.m"
      {
#line 603 "globals.m"
        *libs__globals__wrapper_arg_2 = ((MR_Box) (libs__globals__conv0_HeadVar__2_2));
#line 603 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 603 "globals.m"
      }
#line 603 "globals.m"
    return libs__globals__succeeded;
#line 603 "globals.m"
  }
#line 603 "globals.m"
}

#line 583 "globals.m"
static void MR_CALL 
libs__globals__convert_limit_error_contexts_acc_5_p_0(
#line 583 "globals.m"
  MR_Word libs__globals__HeadVar__1_1,
#line 583 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_RevBadOptions_0_2,
#line 583 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_RevBadOptions_3,
#line 583 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Map_0_4,
#line 583 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Map_5)
#line 583 "globals.m"
{
#line 587 "globals.m"
  while (MR_TRUE)
#line 587 "globals.m"
    {
#line 587 "globals.m"
      /* tailcall optimized into a loop */
#line 587 "globals.m"
      {
#line 587 "globals.m"
        MR_bool libs__globals__succeeded;

#line 587 "globals.m"
        if ((libs__globals__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 587 "globals.m"
          {
#line 587 "globals.m"
            *libs__globals__STATE_VARIABLE_Map_5 = libs__globals__STATE_VARIABLE_Map_0_4;
#line 587 "globals.m"
            *libs__globals__STATE_VARIABLE_RevBadOptions_3 = libs__globals__STATE_VARIABLE_RevBadOptions_0_2;
#line 587 "globals.m"
          }
#line 587 "globals.m"
        else
#line 588 "globals.m"
          {
#line 588 "globals.m"
            MR_String libs__globals__Option_12 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
#line 588 "globals.m"
            MR_Word libs__globals__Options_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 1)));
#line 588 "globals.m"
            MR_Word libs__globals__OptionChars_16;
#line 588 "globals.m"
            MR_Word libs__globals__RevOptionChars_17;
#line 588 "globals.m"
            MR_Word libs__globals__LineRangeChars_18;
#line 588 "globals.m"
            MR_Word libs__globals__RevFileNameChars_19;
#line 588 "globals.m"
            MR_String libs__globals__FileName_20;
#line 588 "globals.m"
            MR_String libs__globals__LineRangeStr_21;
#line 588 "globals.m"
            MR_Word libs__globals__STATE_VARIABLE_Map_31_31;
#line 588 "globals.m"
            MR_Word libs__globals__STATE_VARIABLE_RevBadOptions_32_32;
#line 606 "globals.m"
            MR_Word libs__globals__LineNumberRanges_23;
#line 602 "globals.m"
            MR_Word libs__globals__LineRangeStrs_22;

#line 589 "globals.m"
            {
#line 589 "globals.m"
              mercury__string__to_char_list_2_p_0(libs__globals__Option_12, &libs__globals__OptionChars_16);
            }
#line 596 "globals.m"
            {
#line 596 "globals.m"
              mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, libs__globals__OptionChars_16, &libs__globals__RevOptionChars_17);
            }
#line 597 "globals.m"
            {
#line 597 "globals.m"
              libs__globals__find_file_name_and_line_range_chars_4_p_0(libs__globals__RevOptionChars_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__globals__LineRangeChars_18, &libs__globals__RevFileNameChars_19);
            }
#line 599 "globals.m"
            {
#line 599 "globals.m"
              libs__globals__FileName_20 = mercury__string__from_rev_char_list_1_f_0(libs__globals__RevFileNameChars_19);
            }
#line 600 "globals.m"
            {
#line 600 "globals.m"
              libs__globals__LineRangeStr_21 = mercury__string__from_char_list_1_f_0(libs__globals__LineRangeChars_18);
            }
#line 602 "globals.m"
            {
#line 602 "globals.m"
              libs__globals__LineRangeStrs_22 = mercury__string__split_at_char_2_f_0((MR_Char) 44, libs__globals__LineRangeStr_21);
            }
#line 603 "globals.m"
            {
#line 603 "globals.m"
              libs__globals__succeeded = mercury__list__map_3_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &libs__globals__libs__globals__type_ctor_info_line_number_range_0, (MR_Word) &libs__globals_scalar_common_2[6], libs__globals__LineRangeStrs_22, &libs__globals__LineNumberRanges_23);
            }
#line 606 "globals.m"
            if (libs__globals__succeeded)
#line 605 "globals.m"
              {
#line 605 "globals.m"
                {
#line 605 "globals.m"
                  mercury__map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &libs__globals_scalar_common_1[0], ((MR_Box) (libs__globals__FileName_20)), ((MR_Box) (libs__globals__LineNumberRanges_23)), libs__globals__STATE_VARIABLE_Map_0_4, &libs__globals__STATE_VARIABLE_Map_31_31);
                }
#line 605 "globals.m"
                libs__globals__STATE_VARIABLE_RevBadOptions_32_32 = libs__globals__STATE_VARIABLE_RevBadOptions_0_2;
#line 605 "globals.m"
              }
#line 606 "globals.m"
            else
#line 607 "globals.m"
              {
#line 607 "globals.m"
                {
#line 607 "globals.m"
                  libs__globals__STATE_VARIABLE_RevBadOptions_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 607 "globals.m"
                  MR_hl_field(MR_mktag(1), libs__globals__STATE_VARIABLE_RevBadOptions_32_32, 0) = ((MR_Box) (libs__globals__Option_12));
#line 607 "globals.m"
                  MR_hl_field(MR_mktag(1), libs__globals__STATE_VARIABLE_RevBadOptions_32_32, 1) = ((MR_Box) (libs__globals__STATE_VARIABLE_RevBadOptions_0_2));
#line 607 "globals.m"
                }
#line 607 "globals.m"
                libs__globals__STATE_VARIABLE_Map_31_31 = libs__globals__STATE_VARIABLE_Map_0_4;
#line 607 "globals.m"
              }
#line 609 "globals.m"
            /* direct tailcall eliminated */
#line 609 "globals.m"
            {
#line 609 "globals.m"
              MR_Word libs__globals__HeadVar__1__tmp_copy_1 = libs__globals__Options_13;
#line 609 "globals.m"
              MR_Word libs__globals__STATE_VARIABLE_RevBadOptions_0__tmp_copy_2 = libs__globals__STATE_VARIABLE_RevBadOptions_32_32;
#line 609 "globals.m"
              MR_Word libs__globals__STATE_VARIABLE_Map_0__tmp_copy_4 = libs__globals__STATE_VARIABLE_Map_31_31;

#line 609 "globals.m"
              libs__globals__STATE_VARIABLE_Map_0_4 = libs__globals__STATE_VARIABLE_Map_0__tmp_copy_4;
#line 609 "globals.m"
              libs__globals__STATE_VARIABLE_RevBadOptions_0_2 = libs__globals__STATE_VARIABLE_RevBadOptions_0__tmp_copy_2;
#line 609 "globals.m"
              libs__globals__HeadVar__1_1 = libs__globals__HeadVar__1__tmp_copy_1;
#line 609 "globals.m"
            }
#line 609 "globals.m"
            continue;
#line 588 "globals.m"
          }
#line 587 "globals.m"
      }
#line 587 "globals.m"
      break;
#line 587 "globals.m"
    }
#line 583 "globals.m"
}

#line 386 "globals.m"
void MR_CALL 
libs__globals__io_set_maybe_source_file_map_3_p_0(
#line 386 "globals.m"
  MR_Word libs__globals__MaybeSourceFileMap_4)
#line 386 "globals.m"
{
#line 970 "globals.m"
  {
#line 970 "globals.m"
    MR_bool libs__globals__succeeded;

#line 970 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_maybe_source_file_map_3_p_0


		{
#line 970 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                    "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 9191 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 970 "globals.m"
}
#line 970 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_maybe_source_file_map_3_p_0

	MR_Word X;

	X =  libs__globals__MaybeSourceFileMap_4 ;
		{
#line 970 "globals.m"
libs__globals__mutable_variable_maybe_source_file_map = X;

#line 9208 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 970 "globals.m"
}
#line 970 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_maybe_source_file_map_3_p_0


		{
#line 970 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                    "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 9226 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 970 "globals.m"
}
#line 970 "globals.m"
  }
#line 386 "globals.m"
}

#line 384 "globals.m"
void MR_CALL 
libs__globals__io_get_maybe_source_file_map_3_p_0(
#line 384 "globals.m"
  MR_Word * libs__globals__MaybeSourceFileMap_4)
#line 384 "globals.m"
{
#line 970 "globals.m"
  {
#line 970 "globals.m"
    MR_bool libs__globals__succeeded;

#line 970 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_maybe_source_file_map_3_p_0


		{
#line 970 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                    "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 9261 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 970 "globals.m"
}
#line 970 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_maybe_source_file_map_3_p_0

	MR_Word X;

		{
#line 970 "globals.m"
X = libs__globals__mutable_variable_maybe_source_file_map;

#line 9277 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__MaybeSourceFileMap_4  = X;
#line 970 "globals.m"
}
#line 970 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_maybe_source_file_map_3_p_0


		{
#line 970 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                    "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif

#line 9296 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 970 "globals.m"
}
#line 970 "globals.m"
  }
#line 384 "globals.m"
}

#line 381 "globals.m"
void MR_CALL 
libs__globals__io_set_disable_generate_item_version_numbers_3_p_0(
#line 381 "globals.m"
  MR_Word libs__globals__DisableItemVerions_4)
#line 381 "globals.m"
{
#line 967 "globals.m"
  {
#line 967 "globals.m"
    MR_bool libs__globals__succeeded;

#line 967 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_disable_generate_item_version_numbers_3_p_0


		{
#line 967 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                    "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 9331 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 967 "globals.m"
}
#line 967 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_disable_generate_item_version_numbers_3_p_0

	MR_Word X;

	X =  libs__globals__DisableItemVerions_4 ;
		{
#line 967 "globals.m"
libs__globals__mutable_variable_disable_generate_item_version_numbers = X;

#line 9348 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 967 "globals.m"
}
#line 967 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_disable_generate_item_version_numbers_3_p_0


		{
#line 967 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                    "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 9366 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 967 "globals.m"
}
#line 967 "globals.m"
  }
#line 381 "globals.m"
}

#line 379 "globals.m"
void MR_CALL 
libs__globals__io_get_disable_generate_item_version_numbers_3_p_0(
#line 379 "globals.m"
  MR_Word * libs__globals__DisableItemVerions_4)
#line 379 "globals.m"
{
#line 967 "globals.m"
  {
#line 967 "globals.m"
    MR_bool libs__globals__succeeded;

#line 967 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_disable_generate_item_version_numbers_3_p_0


		{
#line 967 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                    "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 9401 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 967 "globals.m"
}
#line 967 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_disable_generate_item_version_numbers_3_p_0

	MR_Word X;

		{
#line 967 "globals.m"
X = libs__globals__mutable_variable_disable_generate_item_version_numbers;

#line 9417 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__DisableItemVerions_4  = X;
#line 967 "globals.m"
}
#line 967 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_disable_generate_item_version_numbers_3_p_0


		{
#line 967 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                    "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif

#line 9436 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 967 "globals.m"
}
#line 967 "globals.m"
  }
#line 379 "globals.m"
}

#line 377 "globals.m"
void MR_CALL 
libs__globals__io_set_disable_smart_recompilation_3_p_0(
#line 377 "globals.m"
  MR_Word libs__globals__DisableSmartRecomp_4)
#line 377 "globals.m"
{
#line 964 "globals.m"
  {
#line 964 "globals.m"
    MR_bool libs__globals__succeeded;

#line 964 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_disable_smart_recompilation_3_p_0


		{
#line 964 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                    "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 9471 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 964 "globals.m"
}
#line 964 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_disable_smart_recompilation_3_p_0

	MR_Word X;

	X =  libs__globals__DisableSmartRecomp_4 ;
		{
#line 964 "globals.m"
libs__globals__mutable_variable_disable_smart_recompilation = X;

#line 9488 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 964 "globals.m"
}
#line 964 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_disable_smart_recompilation_3_p_0


		{
#line 964 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                    "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 9506 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 964 "globals.m"
}
#line 964 "globals.m"
  }
#line 377 "globals.m"
}

#line 376 "globals.m"
void MR_CALL 
libs__globals__io_get_disable_smart_recompilation_3_p_0(
#line 376 "globals.m"
  MR_Word * libs__globals__DisableSmartRecomp_4)
#line 376 "globals.m"
{
#line 964 "globals.m"
  {
#line 964 "globals.m"
    MR_bool libs__globals__succeeded;

#line 964 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_disable_smart_recompilation_3_p_0


		{
#line 964 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                    "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 9541 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 964 "globals.m"
}
#line 964 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_disable_smart_recompilation_3_p_0

	MR_Word X;

		{
#line 964 "globals.m"
X = libs__globals__mutable_variable_disable_smart_recompilation;

#line 9557 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__DisableSmartRecomp_4  = X;
#line 964 "globals.m"
}
#line 964 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_disable_smart_recompilation_3_p_0


		{
#line 964 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                    "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif

#line 9576 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 964 "globals.m"
}
#line 964 "globals.m"
  }
#line 376 "globals.m"
}

#line 373 "globals.m"
void MR_CALL 
libs__globals__io_set_some_errors_were_context_limited_3_p_0(
#line 373 "globals.m"
  MR_Word libs__globals__SomeErrorsWereContextLimited_4)
#line 373 "globals.m"
{
#line 961 "globals.m"
  {
#line 961 "globals.m"
    MR_bool libs__globals__succeeded;

#line 961 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_some_errors_were_context_limited_3_p_0


		{
#line 961 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_some_errors_were_context_limited_lock,
                    "libs__globals__mutable_variable_some_errors_were_context_limited_lock");
#endif

#line 9611 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 961 "globals.m"
}
#line 961 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_some_errors_were_context_limited_3_p_0

	MR_Word X;

	X =  libs__globals__SomeErrorsWereContextLimited_4 ;
		{
#line 961 "globals.m"
libs__globals__mutable_variable_some_errors_were_context_limited = X;

#line 9628 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 961 "globals.m"
}
#line 961 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_some_errors_were_context_limited_3_p_0


		{
#line 961 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_some_errors_were_context_limited_lock,
                    "libs__globals__mutable_variable_some_errors_were_context_limited_lock");
#endif

#line 9646 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 961 "globals.m"
}
#line 961 "globals.m"
  }
#line 373 "globals.m"
}

#line 371 "globals.m"
void MR_CALL 
libs__globals__io_get_some_errors_were_context_limited_3_p_0(
#line 371 "globals.m"
  MR_Word * libs__globals__SomeErrorsWereContextLimited_4)
#line 371 "globals.m"
{
#line 961 "globals.m"
  {
#line 961 "globals.m"
    MR_bool libs__globals__succeeded;

#line 961 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_some_errors_were_context_limited_3_p_0


		{
#line 961 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_some_errors_were_context_limited_lock,
                    "libs__globals__mutable_variable_some_errors_were_context_limited_lock");
#endif

#line 9681 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 961 "globals.m"
}
#line 961 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_some_errors_were_context_limited_3_p_0

	MR_Word X;

		{
#line 961 "globals.m"
X = libs__globals__mutable_variable_some_errors_were_context_limited;

#line 9697 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__SomeErrorsWereContextLimited_4  = X;
#line 961 "globals.m"
}
#line 961 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_some_errors_were_context_limited_3_p_0


		{
#line 961 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_some_errors_were_context_limited_lock,
                    "libs__globals__mutable_variable_some_errors_were_context_limited_lock");
#endif

#line 9716 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 961 "globals.m"
}
#line 961 "globals.m"
  }
#line 371 "globals.m"
}

#line 369 "globals.m"
void MR_CALL 
libs__globals__io_set_extra_error_info_3_p_0(
#line 369 "globals.m"
  MR_Word libs__globals__ExtraErrorInfo_4)
#line 369 "globals.m"
{
#line 955 "globals.m"
  {
#line 955 "globals.m"
    MR_bool libs__globals__succeeded;

#line 955 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_extra_error_info_3_p_0


		{
#line 955 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                    "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 9751 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 955 "globals.m"
}
#line 955 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_extra_error_info_3_p_0

	MR_Word X;

	X =  libs__globals__ExtraErrorInfo_4 ;
		{
#line 955 "globals.m"
libs__globals__mutable_variable_extra_error_info = X;

#line 9768 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 955 "globals.m"
}
#line 955 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_set_extra_error_info_3_p_0


		{
#line 955 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                    "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 9786 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 955 "globals.m"
}
#line 955 "globals.m"
  }
#line 369 "globals.m"
}

#line 368 "globals.m"
void MR_CALL 
libs__globals__io_get_extra_error_info_3_p_0(
#line 368 "globals.m"
  MR_Word * libs__globals__ExtraErrorInfo_4)
#line 368 "globals.m"
{
#line 955 "globals.m"
  {
#line 955 "globals.m"
    MR_bool libs__globals__succeeded;

#line 955 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_extra_error_info_3_p_0


		{
#line 955 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                    "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 9821 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 955 "globals.m"
}
#line 955 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_extra_error_info_3_p_0

	MR_Word X;

		{
#line 955 "globals.m"
X = libs__globals__mutable_variable_extra_error_info;

#line 9837 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__ExtraErrorInfo_4  = X;
#line 955 "globals.m"
}
#line 955 "globals.m"
{
#define MR_PROC_LABEL libs__globals__io_get_extra_error_info_3_p_0


		{
#line 955 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                    "libs__globals__mutable_variable_extra_error_info_lock");
#endif

#line 9856 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 955 "globals.m"
}
#line 955 "globals.m"
  }
#line 368 "globals.m"
}

#line 366 "globals.m"
MR_Word MR_CALL 
libs__globals__get_maybe_from_ground_term_threshold_0_f_0(void)
#line 366 "globals.m"
{
#line 987 "globals.m"
  {
#line 987 "globals.m"
    MR_bool libs__globals__succeeded;
#line 987 "globals.m"
    MR_Word libs__globals__MaybeThreshold_2;

#line 949 "globals.m"
{
#define MR_PROC_LABEL libs__globals__get_maybe_from_ground_term_threshold_0_f_0


		{
#line 949 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                    "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 9891 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 949 "globals.m"
}
#line 949 "globals.m"
{
#define MR_PROC_LABEL libs__globals__get_maybe_from_ground_term_threshold_0_f_0

	MR_Word X;

		{
#line 949 "globals.m"
X = libs__globals__mutable_variable_maybe_from_ground_term_threshold;

#line 9907 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 libs__globals__MaybeThreshold_2  = X;
#line 949 "globals.m"
}
#line 949 "globals.m"
{
#define MR_PROC_LABEL libs__globals__get_maybe_from_ground_term_threshold_0_f_0


		{
#line 949 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                    "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 9926 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 949 "globals.m"
}
#line 987 "globals.m"
    return libs__globals__MaybeThreshold_2;
#line 987 "globals.m"
  }
#line 366 "globals.m"
}

#line 361 "globals.m"
void MR_CALL 
libs__globals__semipure_get_solver_auto_init_supported_1_p_0(
#line 361 "globals.m"
  MR_Word * libs__globals__AutoInitSupported_2)
#line 361 "globals.m"
{
#line 944 "globals.m"
  {
#line 944 "globals.m"
    MR_bool libs__globals__succeeded;

#line 944 "globals.m"
{
#define MR_PROC_LABEL libs__globals__semipure_get_solver_auto_init_supported_1_p_0


		{
#line 944 "globals.m"

#line 9959 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 944 "globals.m"
}
#line 944 "globals.m"
{
#define MR_PROC_LABEL libs__globals__semipure_get_solver_auto_init_supported_1_p_0

	MR_Word X;

		{
#line 944 "globals.m"
MR_get_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_solver_auto_init_supported);

#line 9975 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
	 *libs__globals__AutoInitSupported_2  = X;
#line 944 "globals.m"
}
#line 944 "globals.m"
{
#define MR_PROC_LABEL libs__globals__semipure_get_solver_auto_init_supported_1_p_0


		{
#line 944 "globals.m"

#line 9990 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 944 "globals.m"
}
#line 944 "globals.m"
  }
#line 361 "globals.m"
}

#line 356 "globals.m"
void MR_CALL 
libs__globals__globals_init_mutables_3_p_0(
#line 356 "globals.m"
  MR_Word libs__globals__Globals_4)
#line 356 "globals.m"
{
#line 975 "globals.m"
  {
#line 975 "globals.m"
    MR_bool libs__globals__succeeded;
#line 975 "globals.m"
    MR_Word libs__globals__AutoInitSupported_6;
#line 975 "globals.m"
    MR_Integer libs__globals__FromGroundTermThreshold_7;
#line 975 "globals.m"
    MR_Word libs__globals__V_13_13;

#line 976 "globals.m"
    {
#line 976 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_4, (MR_Integer) 300, &libs__globals__AutoInitSupported_6);
    }
#line 944 "globals.m"
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0


		{
#line 944 "globals.m"

#line 10032 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 944 "globals.m"
}
#line 944 "globals.m"
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0

	MR_Word X;

	X =  libs__globals__AutoInitSupported_6 ;
		{
#line 944 "globals.m"
MR_set_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_solver_auto_init_supported);

#line 10049 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 944 "globals.m"
}
#line 944 "globals.m"
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0


		{
#line 944 "globals.m"

#line 10063 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 944 "globals.m"
}
#line 979 "globals.m"
    {
#line 979 "globals.m"
      libs__globals__lookup_int_option_3_p_0(libs__globals__Globals_4, (MR_Integer) 348, &libs__globals__FromGroundTermThreshold_7);
    }
#line 981 "globals.m"
    {
#line 981 "globals.m"
      libs__globals__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 981 "globals.m"
      MR_hl_field(MR_mktag(1), libs__globals__V_13_13, 0) = ((MR_Box) (libs__globals__FromGroundTermThreshold_7));
#line 981 "globals.m"
    }
#line 949 "globals.m"
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0


		{
#line 949 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                    "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 10094 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 949 "globals.m"
}
#line 949 "globals.m"
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0

	MR_Word X;

	X =  libs__globals__V_13_13 ;
		{
#line 949 "globals.m"
libs__globals__mutable_variable_maybe_from_ground_term_threshold = X;

#line 10111 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 949 "globals.m"
}
#line 949 "globals.m"
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0


		{
#line 949 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                    "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif

#line 10129 "libs.globals.c"

		;}
#undef MR_PROC_LABEL
#line 949 "globals.m"
}
#line 975 "globals.m"
  }
#line 356 "globals.m"
}

#line 352 "globals.m"
void MR_CALL 
libs__globals__double_width_floats_on_det_stack_2_p_0(
#line 352 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 352 "globals.m"
  MR_Word * libs__globals__FloatDwords_4)
#line 352 "globals.m"
{
#line 911 "globals.m"
  {
#line 911 "globals.m"
    MR_bool libs__globals__succeeded;
#line 911 "globals.m"
    MR_Integer libs__globals__TargetWordBits_5;
#line 911 "globals.m"
    MR_Word libs__globals__SinglePrecFloat_6;

#line 912 "globals.m"
    {
#line 912 "globals.m"
      libs__globals__lookup_int_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 242, &libs__globals__TargetWordBits_5);
    }
#line 913 "globals.m"
    {
#line 913 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 226, &libs__globals__SinglePrecFloat_6);
    }
#line 914 "globals.m"
    libs__globals__succeeded = (libs__globals__TargetWordBits_5 == (MR_Integer) 64);
#line 916 "globals.m"
    if (libs__globals__succeeded)
#line 915 "globals.m"
      *libs__globals__FloatDwords_4 = (MR_Integer) 0;
#line 916 "globals.m"
    else
#line 924 "globals.m"
      {
#line 916 "globals.m"
        libs__globals__succeeded = (libs__globals__TargetWordBits_5 == (MR_Integer) 32);
#line 924 "globals.m"
        if (libs__globals__succeeded)
#line 920 "globals.m"
#line 920 "globals.m"
          switch (libs__globals__SinglePrecFloat_6) {
#line 920 "globals.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 920 "globals.m"
            case (MR_Integer) 0:
#line 922 "globals.m"
              *libs__globals__FloatDwords_4 = (MR_Integer) 1;
#line 920 "globals.m"
              break;
#line 920 "globals.m"
            case (MR_Integer) 1:
#line 919 "globals.m"
              *libs__globals__FloatDwords_4 = (MR_Integer) 0;
#line 920 "globals.m"
              break;
#line 920 "globals.m"
          }
#line 924 "globals.m"
        else
#line 925 "globals.m"
          {
#line 925 "globals.m"
            {
#line 925 "globals.m"
              mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.double_width_floats_on_det_stack\'/2", (MR_String) "bits_per_word not 32 or 64");
#line 925 "globals.m"
              return;
            }
#line 925 "globals.m"
          }
#line 924 "globals.m"
      }
#line 911 "globals.m"
  }
#line 352 "globals.m"
}

#line 348 "globals.m"
void MR_CALL 
libs__globals__get_any_intermod_2_p_0(
#line 348 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 348 "globals.m"
  MR_Word * libs__globals__AnyIntermod_4)
#line 348 "globals.m"
{
#line 906 "globals.m"
  {
#line 906 "globals.m"
    MR_bool libs__globals__succeeded;
#line 906 "globals.m"
    MR_Word libs__globals__IntermodOpt_5;
#line 906 "globals.m"
    MR_Word libs__globals__IntermodAnalysis_6;

#line 907 "globals.m"
    {
#line 907 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 330, &libs__globals__IntermodOpt_5);
    }
#line 908 "globals.m"
    {
#line 908 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 335, &libs__globals__IntermodAnalysis_6);
    }
#line 909 "globals.m"
    {
#line 909 "globals.m"
      *libs__globals__AnyIntermod_4 = mercury__bool__or_2_f_0(libs__globals__IntermodOpt_5, libs__globals__IntermodAnalysis_6);
    }
#line 906 "globals.m"
  }
#line 348 "globals.m"
}

#line 346 "globals.m"
void MR_CALL 
libs__globals__current_grade_supports_concurrency_2_p_0(
#line 346 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 346 "globals.m"
  MR_Word * libs__globals__ThreadsSupported_4)
#line 346 "globals.m"
{
#line 883 "globals.m"
  {
#line 883 "globals.m"
    MR_bool libs__globals__succeeded;
#line 883 "globals.m"
    MR_Word libs__globals__Target_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 719 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 719 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 719 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 719 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 719 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 719 "globals.m"
    MR_Word libs__globals__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 719 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 719 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 719 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 719 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 719 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 719 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 719 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 719 "globals.m"
    MR_Word libs__globals__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 719 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 719 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 719 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 719 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 719 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));

#line 897 "globals.m"
#line 897 "globals.m"
    switch (libs__globals__Target_5) {
#line 897 "globals.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 897 "globals.m"
      case (MR_Integer) 0:
#line 886 "globals.m"
        {
#line 886 "globals.m"
          MR_Word libs__globals__HighLevelCode_6;

#line 887 "globals.m"
          {
#line 887 "globals.m"
            libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 256, &libs__globals__HighLevelCode_6);
          }
#line 892 "globals.m"
#line 892 "globals.m"
          switch (libs__globals__HighLevelCode_6) {
#line 892 "globals.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 892 "globals.m"
            case (MR_Integer) 0:
#line 891 "globals.m"
              *libs__globals__ThreadsSupported_4 = (MR_Integer) 1;
#line 892 "globals.m"
              break;
#line 892 "globals.m"
            case (MR_Integer) 1:
#line 893 "globals.m"
              {
#line 894 "globals.m"
                {
#line 894 "globals.m"
                  libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 218, libs__globals__ThreadsSupported_4);
#line 894 "globals.m"
                  return;
                }
#line 893 "globals.m"
              }
#line 892 "globals.m"
              break;
#line 892 "globals.m"
          }
#line 886 "globals.m"
        }
#line 897 "globals.m"
        break;
#line 897 "globals.m"
      case (MR_Integer) 2:
#line 897 "globals.m"
      case (MR_Integer) 4:
#line 897 "globals.m"
      case (MR_Integer) 1:
#line 897 "globals.m"
      case (MR_Integer) 3:
#line 903 "globals.m"
        *libs__globals__ThreadsSupported_4 = (MR_Integer) 1;
#line 897 "globals.m"
        break;
#line 897 "globals.m"
    }
#line 883 "globals.m"
  }
#line 346 "globals.m"
}

#line 340 "globals.m"
void MR_CALL 
libs__globals__current_grade_supports_par_conj_2_p_0(
#line 340 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 340 "globals.m"
  MR_Word * libs__globals__ParConjSupported_4)
#line 340 "globals.m"
{
#line 864 "globals.m"
  {
#line 864 "globals.m"
    MR_bool libs__globals__succeeded;
#line 864 "globals.m"
    MR_Word libs__globals__Target_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 864 "globals.m"
    MR_Word libs__globals__HighLevelCode_6;
#line 864 "globals.m"
    MR_Word libs__globals__Parallel_7;
#line 864 "globals.m"
    MR_Word libs__globals__UseTrail_8;
#line 719 "globals.m"
    MR_Word libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 719 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 719 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 719 "globals.m"
    MR_Word libs__globals__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 719 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 719 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 719 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 719 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 719 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 719 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 719 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 719 "globals.m"
    MR_Word libs__globals__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 719 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 719 "globals.m"
    MR_Word libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 719 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 719 "globals.m"
    MR_Word libs__globals__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 719 "globals.m"
    MR_Word libs__globals__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 719 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 719 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));

#line 869 "globals.m"
    {
#line 869 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 256, &libs__globals__HighLevelCode_6);
    }
#line 870 "globals.m"
    {
#line 870 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 218, &libs__globals__Parallel_7);
    }
#line 871 "globals.m"
    {
#line 871 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 220, &libs__globals__UseTrail_8);
    }
#line 873 "globals.m"
    libs__globals__succeeded = (libs__globals__Target_5 == (MR_Integer) 0);
#line 873 "globals.m"
    if (libs__globals__succeeded)
#line 873 "globals.m"
      {
#line 874 "globals.m"
        libs__globals__succeeded = (libs__globals__HighLevelCode_6 == (MR_Integer) 0);
#line 873 "globals.m"
        if (libs__globals__succeeded)
#line 873 "globals.m"
          {
#line 875 "globals.m"
            libs__globals__succeeded = (libs__globals__Parallel_7 == (MR_Integer) 1);
#line 873 "globals.m"
            if (libs__globals__succeeded)
#line 876 "globals.m"
              libs__globals__succeeded = (libs__globals__UseTrail_8 == (MR_Integer) 0);
#line 873 "globals.m"
          }
#line 873 "globals.m"
      }
#line 879 "globals.m"
    if (libs__globals__succeeded)
#line 878 "globals.m"
      *libs__globals__ParConjSupported_4 = (MR_Integer) 1;
#line 879 "globals.m"
    else
#line 880 "globals.m"
      *libs__globals__ParConjSupported_4 = (MR_Integer) 0;
#line 864 "globals.m"
  }
#line 340 "globals.m"
}

#line 335 "globals.m"
void MR_CALL 
libs__globals__current_grade_supports_tabling_2_p_0(
#line 335 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 335 "globals.m"
  MR_Word * libs__globals__TablingSupported_4)
#line 335 "globals.m"
{
#line 850 "globals.m"
  {
#line 850 "globals.m"
    MR_bool libs__globals__succeeded;
#line 850 "globals.m"
    MR_Word libs__globals__Target_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 850 "globals.m"
    MR_Word libs__globals__GC_Method_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 850 "globals.m"
    MR_Word libs__globals__HighLevelData_7;
#line 719 "globals.m"
    MR_Word libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 719 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 719 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 719 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 719 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 719 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 719 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 719 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 719 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 719 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 719 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 719 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 719 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 719 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 719 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 719 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 719 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 719 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));

#line 853 "globals.m"
    {
#line 853 "globals.m"
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 257, &libs__globals__HighLevelData_7);
    }
#line 855 "globals.m"
    libs__globals__succeeded = (libs__globals__Target_5 == (MR_Integer) 0);
#line 855 "globals.m"
    if (libs__globals__succeeded)
#line 855 "globals.m"
      {
#line 856 "globals.m"
        libs__globals__succeeded = (libs__globals__GC_Method_6 == (MR_Integer) 5);
#line 856 "globals.m"
        libs__globals__succeeded = !(libs__globals__succeeded);
#line 855 "globals.m"
        if (libs__globals__succeeded)
#line 857 "globals.m"
          libs__globals__succeeded = (libs__globals__HighLevelData_7 == (MR_Integer) 0);
#line 855 "globals.m"
      }
#line 860 "globals.m"
    if (libs__globals__succeeded)
#line 859 "globals.m"
      *libs__globals__TablingSupported_4 = (MR_Integer) 1;
#line 860 "globals.m"
    else
#line 861 "globals.m"
      *libs__globals__TablingSupported_4 = (MR_Integer) 0;
#line 850 "globals.m"
  }
#line 335 "globals.m"
}

#line 331 "globals.m"
void MR_CALL 
libs__globals__want_return_var_layouts_2_p_0(
#line 331 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 331 "globals.m"
  MR_Word * libs__globals__WantReturnLayouts_4)
#line 331 "globals.m"
{
#line 846 "globals.m"
  {
#line 846 "globals.m"
    MR_bool libs__globals__succeeded;

#line 837 "globals.m"
    {
#line 837 "globals.m"
      MR_Word libs__globals__GC_Method_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 720 "globals.m"
      MR_Word libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 720 "globals.m"
      MR_Word libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 720 "globals.m"
      MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 720 "globals.m"
      MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 720 "globals.m"
      MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 720 "globals.m"
      MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 720 "globals.m"
      MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 720 "globals.m"
      MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 720 "globals.m"
      MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 720 "globals.m"
      MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 720 "globals.m"
      MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 720 "globals.m"
      MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 720 "globals.m"
      MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 720 "globals.m"
      MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 720 "globals.m"
      MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 720 "globals.m"
      MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 720 "globals.m"
      MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 720 "globals.m"
      MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 720 "globals.m"
      MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));

#line 838 "globals.m"
      libs__globals__succeeded = (libs__globals__GC_Method_5 == (MR_Integer) 5);
#line 837 "globals.m"
    }
#line 839 "globals.m"
    if (!(libs__globals__succeeded))
#line 840 "globals.m"
      {
#line 840 "globals.m"
        MR_Word libs__globals__TraceLevel_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 840 "globals.m"
        MR_Word libs__globals__TraceSuppress_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 840 "globals.m"
        MR_Word libs__globals__V_8_8;
#line 724 "globals.m"
        MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 724 "globals.m"
        MR_Word libs__globals__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 724 "globals.m"
        MR_Word libs__globals__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 724 "globals.m"
        MR_Word libs__globals__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 724 "globals.m"
        MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 724 "globals.m"
        MR_Word libs__globals__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 724 "globals.m"
        MR_Word libs__globals__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 724 "globals.m"
        MR_Word libs__globals__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 724 "globals.m"
        MR_Word libs__globals__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 724 "globals.m"
        MR_Word libs__globals__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 724 "globals.m"
        MR_Word libs__globals__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 724 "globals.m"
        MR_Word libs__globals__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 724 "globals.m"
        MR_Word libs__globals__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 724 "globals.m"
        MR_Word libs__globals__V_44_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 724 "globals.m"
        MR_Word libs__globals__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 724 "globals.m"
        MR_Word libs__globals__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 724 "globals.m"
        MR_Word libs__globals__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 724 "globals.m"
        MR_Word libs__globals__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));

#line 842 "globals.m"
        {
#line 842 "globals.m"
          libs__globals__V_8_8 = libs__trace_params__trace_needs_return_info_2_f_0(libs__globals__TraceLevel_6, libs__globals__TraceSuppress_7);
        }
#line 842 "globals.m"
        libs__globals__succeeded = (libs__globals__V_8_8 == (MR_Integer) 1);
#line 840 "globals.m"
      }
#line 846 "globals.m"
    if (libs__globals__succeeded)
#line 845 "globals.m"
      *libs__globals__WantReturnLayouts_4 = (MR_Integer) 1;
#line 846 "globals.m"
    else
#line 847 "globals.m"
      *libs__globals__WantReturnLayouts_4 = (MR_Integer) 0;
#line 846 "globals.m"
  }
#line 331 "globals.m"
}

#line 320 "globals.m"
void MR_CALL 
libs__globals__lookup_accumulating_option_3_p_0(
#line 320 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 320 "globals.m"
  MR_Word libs__globals__Option_5,
#line 320 "globals.m"
  MR_Word * libs__globals__Value_6)
#line 320 "globals.m"
{
#line 822 "globals.m"
  {
#line 822 "globals.m"
    MR_bool libs__globals__succeeded;
#line 822 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 822 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 718 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)));
#line 718 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 718 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)));
#line 718 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 718 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 718 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 718 "globals.m"
    MR_Word libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
#line 718 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 718 "globals.m"
    MR_Word libs__globals__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 11)));
#line 778 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 826 "globals.m"
    MR_Word libs__globals__Accumulating_8;

#line 778 "globals.m"
    {
#line 778 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 778 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 824 "globals.m"
    libs__globals__succeeded = ((((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 824 "globals.m"
    if (libs__globals__succeeded)
#line 824 "globals.m"
      {
#line 824 "globals.m"
        libs__globals__Accumulating_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 1)));
#line 825 "globals.m"
        *libs__globals__Value_6 = libs__globals__Accumulating_8;
#line 824 "globals.m"
      }
#line 824 "globals.m"
    else
#line 827 "globals.m"
      {
#line 827 "globals.m"
        {
#line 827 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_accumulating_option\'/3", (MR_String) "invalid accumulating option");
#line 827 "globals.m"
          return;
        }
#line 827 "globals.m"
      }
#line 822 "globals.m"
  }
#line 320 "globals.m"
}

#line 318 "globals.m"
void MR_CALL 
libs__globals__lookup_maybe_string_option_3_p_0(
#line 318 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 318 "globals.m"
  MR_Word libs__globals__Option_5,
#line 318 "globals.m"
  MR_Word * libs__globals__Value_6)
#line 318 "globals.m"
{
#line 814 "globals.m"
  {
#line 814 "globals.m"
    MR_bool libs__globals__succeeded;
#line 814 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 814 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 718 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)));
#line 718 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 718 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)));
#line 718 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 718 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 718 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 718 "globals.m"
    MR_Word libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
#line 718 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 718 "globals.m"
    MR_Word libs__globals__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 11)));
#line 778 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 818 "globals.m"
    MR_Word libs__globals__MaybeString_8;

#line 778 "globals.m"
    {
#line 778 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 778 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 816 "globals.m"
    libs__globals__succeeded = ((((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 816 "globals.m"
    if (libs__globals__succeeded)
#line 816 "globals.m"
      {
#line 816 "globals.m"
        libs__globals__MaybeString_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 1)));
#line 817 "globals.m"
        *libs__globals__Value_6 = libs__globals__MaybeString_8;
#line 816 "globals.m"
      }
#line 816 "globals.m"
    else
#line 819 "globals.m"
      {
#line 819 "globals.m"
        {
#line 819 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_maybe_string_option\'/3", (MR_String) "invalid maybe_string option");
#line 819 "globals.m"
          return;
        }
#line 819 "globals.m"
      }
#line 814 "globals.m"
  }
#line 318 "globals.m"
}

#line 317 "globals.m"
void MR_CALL 
libs__globals__lookup_string_option_3_p_0(
#line 317 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 317 "globals.m"
  MR_Word libs__globals__Option_5,
#line 317 "globals.m"
  MR_String * libs__globals__Value_6)
#line 317 "globals.m"
{
#line 790 "globals.m"
  {
#line 790 "globals.m"
    MR_bool libs__globals__succeeded;
#line 790 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 790 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 718 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)));
#line 718 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 718 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)));
#line 718 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 718 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 718 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 718 "globals.m"
    MR_Word libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
#line 718 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 718 "globals.m"
    MR_Word libs__globals__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 11)));
#line 778 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 794 "globals.m"
    MR_String libs__globals__String_8;

#line 778 "globals.m"
    {
#line 778 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 778 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 792 "globals.m"
    libs__globals__succeeded = ((((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 792 "globals.m"
    if (libs__globals__succeeded)
#line 792 "globals.m"
      {
#line 792 "globals.m"
        libs__globals__String_8 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 1)));
#line 793 "globals.m"
        *libs__globals__Value_6 = libs__globals__String_8;
#line 792 "globals.m"
      }
#line 792 "globals.m"
    else
#line 795 "globals.m"
      {
#line 795 "globals.m"
        {
#line 795 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_string_option\'/3", (MR_String) "invalid string option");
#line 795 "globals.m"
          return;
        }
#line 795 "globals.m"
      }
#line 790 "globals.m"
  }
#line 317 "globals.m"
}

#line 315 "globals.m"
void MR_CALL 
libs__globals__lookup_maybe_int_option_3_p_0(
#line 315 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 315 "globals.m"
  MR_Word libs__globals__Option_5,
#line 315 "globals.m"
  MR_Word * libs__globals__Value_6)
#line 315 "globals.m"
{
#line 806 "globals.m"
  {
#line 806 "globals.m"
    MR_bool libs__globals__succeeded;
#line 806 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 806 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 718 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)));
#line 718 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 718 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)));
#line 718 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 718 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 718 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 718 "globals.m"
    MR_Word libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
#line 718 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 718 "globals.m"
    MR_Word libs__globals__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 11)));
#line 778 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 810 "globals.m"
    MR_Word libs__globals__MaybeInt_8;

#line 778 "globals.m"
    {
#line 778 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 778 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 808 "globals.m"
    libs__globals__succeeded = ((((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 808 "globals.m"
    if (libs__globals__succeeded)
#line 808 "globals.m"
      {
#line 808 "globals.m"
        libs__globals__MaybeInt_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 1)));
#line 809 "globals.m"
        *libs__globals__Value_6 = libs__globals__MaybeInt_8;
#line 808 "globals.m"
      }
#line 808 "globals.m"
    else
#line 811 "globals.m"
      {
#line 811 "globals.m"
        {
#line 811 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_maybe_int_option\'/3", (MR_String) "invalid maybe_int option");
#line 811 "globals.m"
          return;
        }
#line 811 "globals.m"
      }
#line 806 "globals.m"
  }
#line 315 "globals.m"
}

#line 314 "globals.m"
void MR_CALL 
libs__globals__lookup_int_option_3_p_0(
#line 314 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 314 "globals.m"
  MR_Word libs__globals__Option_5,
#line 314 "globals.m"
  MR_Integer * libs__globals__Value_6)
#line 314 "globals.m"
{
#line 798 "globals.m"
  {
#line 798 "globals.m"
    MR_bool libs__globals__succeeded;
#line 798 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 798 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 718 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)));
#line 718 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 718 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)));
#line 718 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 718 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 718 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 718 "globals.m"
    MR_Word libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
#line 718 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 718 "globals.m"
    MR_Word libs__globals__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 11)));
#line 778 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 802 "globals.m"
    MR_Integer libs__globals__Int_8;

#line 778 "globals.m"
    {
#line 778 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 778 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 800 "globals.m"
    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 2)));
#line 800 "globals.m"
    if (libs__globals__succeeded)
#line 800 "globals.m"
      {
#line 800 "globals.m"
        libs__globals__Int_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), libs__globals__OptionData_7, (MR_Integer) 0)));
#line 801 "globals.m"
        *libs__globals__Value_6 = libs__globals__Int_8;
#line 800 "globals.m"
      }
#line 800 "globals.m"
    else
#line 803 "globals.m"
      {
#line 803 "globals.m"
        {
#line 803 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_int_option\'/3", (MR_String) "invalid int option");
#line 803 "globals.m"
          return;
        }
#line 803 "globals.m"
      }
#line 798 "globals.m"
  }
#line 314 "globals.m"
}

#line 313 "globals.m"
MR_bool MR_CALL 
libs__globals__lookup_bool_option_3_p_1(
#line 313 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 313 "globals.m"
  MR_Word libs__globals__Option_5,
#line 313 "globals.m"
  MR_Word libs__globals__Value_6)
#line 313 "globals.m"
{
#line 782 "globals.m"
  {
#line 782 "globals.m"
    MR_bool libs__globals__succeeded;
#line 782 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 782 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 718 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)));
#line 718 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 718 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)));
#line 718 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 718 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 718 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 718 "globals.m"
    MR_Word libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
#line 718 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 718 "globals.m"
    MR_Word libs__globals__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 11)));
#line 778 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 786 "globals.m"
    MR_Word libs__globals__Bool_8;

#line 778 "globals.m"
    {
#line 778 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 778 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 784 "globals.m"
    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 1)));
#line 784 "globals.m"
    if (libs__globals__succeeded)
#line 784 "globals.m"
      {
#line 784 "globals.m"
        libs__globals__Bool_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__OptionData_7, (MR_Integer) 0)));
#line 785 "globals.m"
        libs__globals__succeeded = (libs__globals__Value_6 == libs__globals__Bool_8);
#line 784 "globals.m"
      }
#line 784 "globals.m"
    else
#line 787 "globals.m"
      {
#line 787 "globals.m"
        {
#line 787 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_bool_option\'/3", (MR_String) "invalid bool option");
        }
#line 787 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 787 "globals.m"
      }
#line 782 "globals.m"
    return libs__globals__succeeded;
#line 782 "globals.m"
  }
#line 313 "globals.m"
}

#line 312 "globals.m"
void MR_CALL 
libs__globals__lookup_bool_option_3_p_0(
#line 312 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 312 "globals.m"
  MR_Word libs__globals__Option_5,
#line 312 "globals.m"
  MR_Word * libs__globals__Value_6)
#line 312 "globals.m"
{
#line 782 "globals.m"
  {
#line 782 "globals.m"
    MR_bool libs__globals__succeeded;
#line 782 "globals.m"
    MR_Word libs__globals__OptionData_7;
#line 782 "globals.m"
    MR_Word libs__globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 718 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)));
#line 718 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 718 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)));
#line 718 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 718 "globals.m"
    MR_Word libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 718 "globals.m"
    MR_Word libs__globals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 718 "globals.m"
    MR_Word libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
#line 718 "globals.m"
    MR_Word libs__globals__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 718 "globals.m"
    MR_Word libs__globals__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 11)));
#line 778 "globals.m"
    MR_Box libs__globals__conv0_OptionData_7;
#line 786 "globals.m"
    MR_Word libs__globals__Bool_8;

#line 778 "globals.m"
    {
#line 778 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_15, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
#line 778 "globals.m"
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
#line 784 "globals.m"
    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 1)));
#line 784 "globals.m"
    if (libs__globals__succeeded)
#line 784 "globals.m"
      {
#line 784 "globals.m"
        libs__globals__Bool_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__OptionData_7, (MR_Integer) 0)));
#line 785 "globals.m"
        *libs__globals__Value_6 = libs__globals__Bool_8;
#line 784 "globals.m"
      }
#line 784 "globals.m"
    else
#line 787 "globals.m"
      {
#line 787 "globals.m"
        {
#line 787 "globals.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_bool_option\'/3", (MR_String) "invalid bool option");
#line 787 "globals.m"
          return;
        }
#line 787 "globals.m"
      }
#line 782 "globals.m"
  }
#line 312 "globals.m"
}

#line 309 "globals.m"
void MR_CALL 
libs__globals__lookup_option_3_p_0(
#line 309 "globals.m"
  MR_Word libs__globals__Globals_4,
#line 309 "globals.m"
  MR_Word libs__globals__Option_5,
#line 309 "globals.m"
  MR_Word * libs__globals__OptionData_6)
#line 309 "globals.m"
{
#line 776 "globals.m"
  {
#line 776 "globals.m"
    MR_bool libs__globals__succeeded;
#line 776 "globals.m"
    MR_Word libs__globals__OptionTable_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
#line 718 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)));
#line 718 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 718 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)));
#line 718 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
#line 718 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
#line 718 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
#line 718 "globals.m"
    MR_Word libs__globals__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
#line 718 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
#line 718 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 11)));
#line 778 "globals.m"
    MR_Box libs__globals__conv0_OptionData_6;

#line 778 "globals.m"
    {
#line 778 "globals.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_7, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_6);
    }
#line 778 "globals.m"
    *libs__globals__OptionData_6 = ((MR_Word) libs__globals__conv0_OptionData_6);
#line 776 "globals.m"
  }
#line 309 "globals.m"
}

#line 306 "globals.m"
void MR_CALL 
libs__globals__set_file_install_cmd_3_p_0(
#line 306 "globals.m"
  MR_Word libs__globals__FileInstallCmd_4,
#line 306 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 306 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 306 "globals.m"
{
#line 774 "globals.m"
  {
#line 774 "globals.m"
    MR_bool libs__globals__succeeded;
#line 774 "globals.m"
    MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
#line 774 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 774 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 774 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 774 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 774 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 774 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 774 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)));
#line 774 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 774 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 774 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)));
#line 774 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
#line 774 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
#line 774 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
#line 774 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
#line 774 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 774 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 774 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 774 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 11)));
#line 774 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));

#line 774 "globals.m"
    {
#line 774 "globals.m"
      MR_Word base;
#line 774 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 774 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
#line 774 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__V_9_9));
#line 774 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_10_10 | ((((libs__globals__V_11_11 << (MR_Integer) 3)) | ((((libs__globals__V_12_12 << (MR_Integer) 6)) | ((((libs__globals__V_13_13 << (MR_Integer) 8)) | ((((libs__globals__V_14_14 << (MR_Integer) 10)) | ((libs__globals__V_15_15 << (MR_Integer) 12)))))))))))));
#line 774 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_16_16));
#line 774 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__V_17_17 | ((libs__globals__V_18_18 << (MR_Integer) 2)))));
#line 774 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__V_19_19));
#line 774 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_20_20));
#line 774 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_21_21));
#line 774 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_22_22));
#line 774 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__V_23_23));
#line 774 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_24_24 | ((((libs__globals__V_25_25 << (MR_Integer) 3)) | ((libs__globals__V_26_26 << (MR_Integer) 6)))))));
#line 774 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__FileInstallCmd_4));
#line 774 "globals.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (libs__globals__V_28_28));
#line 774 "globals.m"
    }
#line 774 "globals.m"
  }
#line 306 "globals.m"
}

#line 304 "globals.m"
void MR_CALL 
libs__globals__set_maybe_feedback_info_3_p_0(
#line 304 "globals.m"
  MR_Word libs__globals__MaybeFeedback_4,
#line 304 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 304 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 304 "globals.m"
{
#line 771 "globals.m"
  {
#line 771 "globals.m"
    MR_bool libs__globals__succeeded;
#line 771 "globals.m"
    MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
#line 771 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 771 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 771 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 771 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 771 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 771 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 771 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)));
#line 771 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 771 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 771 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)));
#line 771 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
#line 771 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
#line 771 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
#line 771 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 771 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 771 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 771 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
#line 771 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 11)));
#line 771 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));

#line 771 "globals.m"
    {
#line 771 "globals.m"
      MR_Word base;
#line 771 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 771 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
#line 771 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__V_9_9));
#line 771 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_10_10 | ((((libs__globals__V_11_11 << (MR_Integer) 3)) | ((((libs__globals__V_12_12 << (MR_Integer) 6)) | ((((libs__globals__V_13_13 << (MR_Integer) 8)) | ((((libs__globals__V_14_14 << (MR_Integer) 10)) | ((libs__globals__V_15_15 << (MR_Integer) 12)))))))))))));
#line 771 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_16_16));
#line 771 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__V_17_17 | ((libs__globals__V_18_18 << (MR_Integer) 2)))));
#line 771 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__V_19_19));
#line 771 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_20_20));
#line 771 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_21_21));
#line 771 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_22_22));
#line 771 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__MaybeFeedback_4));
#line 771 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_24_24 | ((((libs__globals__V_25_25 << (MR_Integer) 3)) | ((libs__globals__V_26_26 << (MR_Integer) 6)))))));
#line 771 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_27_27));
#line 771 "globals.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (libs__globals__V_28_28));
#line 771 "globals.m"
    }
#line 771 "globals.m"
  }
#line 304 "globals.m"
}

#line 302 "globals.m"
void MR_CALL 
libs__globals__set_ssdb_trace_level_3_p_0(
#line 302 "globals.m"
  MR_Word libs__globals__SSTraceLevel_4,
#line 302 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 302 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 302 "globals.m"
{
#line 768 "globals.m"
  {
#line 768 "globals.m"
    MR_bool libs__globals__succeeded;
#line 768 "globals.m"
    MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
#line 768 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 768 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 768 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 768 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 768 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 768 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 768 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)));
#line 768 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 768 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)));
#line 768 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
#line 768 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
#line 768 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
#line 768 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
#line 768 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 768 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 768 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 768 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
#line 768 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 11)));
#line 768 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) & (MR_Integer) 3);

#line 768 "globals.m"
    {
#line 768 "globals.m"
      MR_Word base;
#line 768 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 768 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
#line 768 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__V_9_9));
#line 768 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_10_10 | ((((libs__globals__V_11_11 << (MR_Integer) 3)) | ((((libs__globals__V_12_12 << (MR_Integer) 6)) | ((((libs__globals__V_13_13 << (MR_Integer) 8)) | ((((libs__globals__V_14_14 << (MR_Integer) 10)) | ((libs__globals__V_15_15 << (MR_Integer) 12)))))))))))));
#line 768 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_16_16));
#line 768 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__SSTraceLevel_4 | ((libs__globals__V_18_18 << (MR_Integer) 2)))));
#line 768 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__V_19_19));
#line 768 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_20_20));
#line 768 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_21_21));
#line 768 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_22_22));
#line 768 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__V_23_23));
#line 768 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_24_24 | ((((libs__globals__V_25_25 << (MR_Integer) 3)) | ((libs__globals__V_26_26 << (MR_Integer) 6)))))));
#line 768 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_27_27));
#line 768 "globals.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (libs__globals__V_28_28));
#line 768 "globals.m"
    }
#line 768 "globals.m"
  }
#line 302 "globals.m"
}

#line 301 "globals.m"
void MR_CALL 
libs__globals__set_trace_level_none_2_p_0(
#line 301 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_4,
#line 301 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_5)
#line 301 "globals.m"
{
#line 764 "globals.m"
  {
#line 764 "globals.m"
    MR_bool libs__globals__succeeded;
#line 764 "globals.m"
    MR_Word libs__globals__V_7_7;
#line 765 "globals.m"
    MR_Word libs__globals__V_8_8;
#line 765 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 765 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 765 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 765 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 765 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 765 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 765 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 765 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 765 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 765 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 765 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 765 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 765 "globals.m"
    MR_Word libs__globals__V_22_22;
#line 765 "globals.m"
    MR_Word libs__globals__V_23_23;
#line 765 "globals.m"
    MR_Word libs__globals__V_24_24;
#line 765 "globals.m"
    MR_Word libs__globals__V_25_25;
#line 765 "globals.m"
    MR_Word libs__globals__V_26_26;
#line 765 "globals.m"
    MR_Word libs__globals__V_27_27;
#line 765 "globals.m"
    MR_Word libs__globals__V_14_14;

#line 765 "globals.m"
    {
#line 765 "globals.m"
      libs__globals__V_7_7 = libs__trace_params__trace_level_none_0_f_0();
    }
#line 765 "globals.m"
    libs__globals__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 0)));
#line 765 "globals.m"
    libs__globals__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 765 "globals.m"
    libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 765 "globals.m"
    libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 765 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 765 "globals.m"
    libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 765 "globals.m"
    libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 765 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 2)));
#line 765 "globals.m"
    libs__globals__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 765 "globals.m"
    libs__globals__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 765 "globals.m"
    libs__globals__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 4)));
#line 765 "globals.m"
    libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 5)));
#line 765 "globals.m"
    libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 6)));
#line 765 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 7)));
#line 765 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 8)));
#line 765 "globals.m"
    libs__globals__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 765 "globals.m"
    libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 765 "globals.m"
    libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 765 "globals.m"
    libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 10)));
#line 765 "globals.m"
    libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 11)));
#line 765 "globals.m"
    {
#line 765 "globals.m"
      MR_Word base;
#line 765 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 765 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_5 = base;
#line 765 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__V_8_8));
#line 765 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_9_9 | ((((libs__globals__V_10_10 << (MR_Integer) 3)) | ((((libs__globals__V_11_11 << (MR_Integer) 6)) | ((((libs__globals__V_12_12 << (MR_Integer) 8)) | ((((libs__globals__V_13_13 << (MR_Integer) 10)) | ((libs__globals__V_7_7 << (MR_Integer) 12)))))))))))));
#line 765 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_15_15));
#line 765 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__V_16_16 | ((libs__globals__V_17_17 << (MR_Integer) 2)))));
#line 765 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__V_18_18));
#line 765 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_19_19));
#line 765 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_20_20));
#line 765 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_21_21));
#line 765 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__V_22_22));
#line 765 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_23_23 | ((((libs__globals__V_24_24 << (MR_Integer) 3)) | ((libs__globals__V_25_25 << (MR_Integer) 6)))))));
#line 765 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_26_26));
#line 765 "globals.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (libs__globals__V_27_27));
#line 765 "globals.m"
    }
#line 764 "globals.m"
  }
#line 301 "globals.m"
}

#line 300 "globals.m"
void MR_CALL 
libs__globals__set_trace_level_3_p_0(
#line 300 "globals.m"
  MR_Word libs__globals__TraceLevel_4,
#line 300 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 300 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 300 "globals.m"
{
#line 763 "globals.m"
  {
#line 763 "globals.m"
    MR_bool libs__globals__succeeded;
#line 763 "globals.m"
    MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
#line 763 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 763 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 763 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 763 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 763 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 763 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)));
#line 763 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 763 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 763 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)));
#line 763 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
#line 763 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
#line 763 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
#line 763 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
#line 763 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 763 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 763 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 763 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
#line 763 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 11)));
#line 763 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);

#line 763 "globals.m"
    {
#line 763 "globals.m"
      MR_Word base;
#line 763 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 763 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
#line 763 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__V_9_9));
#line 763 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_10_10 | ((((libs__globals__V_11_11 << (MR_Integer) 3)) | ((((libs__globals__V_12_12 << (MR_Integer) 6)) | ((((libs__globals__V_13_13 << (MR_Integer) 8)) | ((((libs__globals__V_14_14 << (MR_Integer) 10)) | ((libs__globals__TraceLevel_4 << (MR_Integer) 12)))))))))))));
#line 763 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_16_16));
#line 763 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__V_17_17 | ((libs__globals__V_18_18 << (MR_Integer) 2)))));
#line 763 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__V_19_19));
#line 763 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_20_20));
#line 763 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_21_21));
#line 763 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_22_22));
#line 763 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__V_23_23));
#line 763 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_24_24 | ((((libs__globals__V_25_25 << (MR_Integer) 3)) | ((libs__globals__V_26_26 << (MR_Integer) 6)))))));
#line 763 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_27_27));
#line 763 "globals.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (libs__globals__V_28_28));
#line 763 "globals.m"
    }
#line 763 "globals.m"
  }
#line 300 "globals.m"
}

#line 299 "globals.m"
void MR_CALL 
libs__globals__set_tags_method_3_p_0(
#line 299 "globals.m"
  MR_Word libs__globals__Tags_Method_4,
#line 299 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 299 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 299 "globals.m"
{
#line 760 "globals.m"
  {
#line 760 "globals.m"
    MR_bool libs__globals__succeeded;
#line 760 "globals.m"
    MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
#line 760 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 760 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 760 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 760 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 760 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 760 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)));
#line 760 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 760 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 760 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)));
#line 760 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
#line 760 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
#line 760 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
#line 760 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
#line 760 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 760 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 760 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 760 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
#line 760 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 11)));
#line 760 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);

#line 760 "globals.m"
    {
#line 760 "globals.m"
      MR_Word base;
#line 760 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 760 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
#line 760 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__V_9_9));
#line 760 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_10_10 | ((((libs__globals__V_11_11 << (MR_Integer) 3)) | ((((libs__globals__Tags_Method_4 << (MR_Integer) 6)) | ((((libs__globals__V_13_13 << (MR_Integer) 8)) | ((((libs__globals__V_14_14 << (MR_Integer) 10)) | ((libs__globals__V_15_15 << (MR_Integer) 12)))))))))))));
#line 760 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_16_16));
#line 760 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__V_17_17 | ((libs__globals__V_18_18 << (MR_Integer) 2)))));
#line 760 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__V_19_19));
#line 760 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_20_20));
#line 760 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_21_21));
#line 760 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_22_22));
#line 760 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__V_23_23));
#line 760 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_24_24 | ((((libs__globals__V_25_25 << (MR_Integer) 3)) | ((libs__globals__V_26_26 << (MR_Integer) 6)))))));
#line 760 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_27_27));
#line 760 "globals.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (libs__globals__V_28_28));
#line 760 "globals.m"
    }
#line 760 "globals.m"
  }
#line 299 "globals.m"
}

#line 298 "globals.m"
void MR_CALL 
libs__globals__set_gc_method_3_p_0(
#line 298 "globals.m"
  MR_Word libs__globals__GC_Method_4,
#line 298 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 298 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 298 "globals.m"
{
#line 757 "globals.m"
  {
#line 757 "globals.m"
    MR_bool libs__globals__succeeded;
#line 757 "globals.m"
    MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
#line 757 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 757 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 757 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 757 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 757 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 757 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)));
#line 757 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 757 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 757 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)));
#line 757 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
#line 757 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
#line 757 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
#line 757 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
#line 757 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 757 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 757 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 757 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
#line 757 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 11)));
#line 757 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);

#line 757 "globals.m"
    {
#line 757 "globals.m"
      MR_Word base;
#line 757 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 757 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
#line 757 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__V_9_9));
#line 757 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_10_10 | ((((libs__globals__GC_Method_4 << (MR_Integer) 3)) | ((((libs__globals__V_12_12 << (MR_Integer) 6)) | ((((libs__globals__V_13_13 << (MR_Integer) 8)) | ((((libs__globals__V_14_14 << (MR_Integer) 10)) | ((libs__globals__V_15_15 << (MR_Integer) 12)))))))))))));
#line 757 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_16_16));
#line 757 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__V_17_17 | ((libs__globals__V_18_18 << (MR_Integer) 2)))));
#line 757 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__V_19_19));
#line 757 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_20_20));
#line 757 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_21_21));
#line 757 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_22_22));
#line 757 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__V_23_23));
#line 757 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_24_24 | ((((libs__globals__V_25_25 << (MR_Integer) 3)) | ((libs__globals__V_26_26 << (MR_Integer) 6)))))));
#line 757 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_27_27));
#line 757 "globals.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (libs__globals__V_28_28));
#line 757 "globals.m"
    }
#line 757 "globals.m"
  }
#line 298 "globals.m"
}

#line 297 "globals.m"
void MR_CALL 
libs__globals__set_options_3_p_0(
#line 297 "globals.m"
  MR_Word libs__globals__Options_4,
#line 297 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
#line 297 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
#line 297 "globals.m"
{
#line 749 "globals.m"
  {
#line 749 "globals.m"
    MR_bool libs__globals__succeeded;
#line 749 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 749 "globals.m"
    MR_Word libs__globals__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 749 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 749 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 749 "globals.m"
    MR_Word libs__globals__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 749 "globals.m"
    MR_Word libs__globals__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 749 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)));
#line 749 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 749 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 749 "globals.m"
    MR_Word libs__globals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)));
#line 749 "globals.m"
    MR_Word libs__globals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
#line 749 "globals.m"
    MR_Word libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
#line 749 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
#line 749 "globals.m"
    MR_Word libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
#line 749 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 749 "globals.m"
    MR_Word libs__globals__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 749 "globals.m"
    MR_Word libs__globals__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 749 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
#line 749 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 11)));
#line 749 "globals.m"
    MR_Word libs__globals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));

#line 749 "globals.m"
    {
#line 749 "globals.m"
      MR_Word base;
#line 749 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 749 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__Options_4));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_10_10 | ((((libs__globals__V_11_11 << (MR_Integer) 3)) | ((((libs__globals__V_12_12 << (MR_Integer) 6)) | ((((libs__globals__V_13_13 << (MR_Integer) 8)) | ((((libs__globals__V_14_14 << (MR_Integer) 10)) | ((libs__globals__V_15_15 << (MR_Integer) 12)))))))))))));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_16_16));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__V_17_17 | ((libs__globals__V_18_18 << (MR_Integer) 2)))));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__V_19_19));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_20_20));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_21_21));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_22_22));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__V_23_23));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_24_24 | ((((libs__globals__V_25_25 << (MR_Integer) 3)) | ((libs__globals__V_26_26 << (MR_Integer) 6)))))));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_27_27));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (libs__globals__V_28_28));
#line 749 "globals.m"
    }
#line 749 "globals.m"
  }
#line 297 "globals.m"
}

#line 295 "globals.m"
void MR_CALL 
libs__globals__set_option_4_p_0(
#line 295 "globals.m"
  MR_Word libs__globals__Option_5,
#line 295 "globals.m"
  MR_Word libs__globals__OptionData_6,
#line 295 "globals.m"
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_10,
#line 295 "globals.m"
  MR_Word * libs__globals__STATE_VARIABLE_Globals_11)
#line 295 "globals.m"
{
#line 751 "globals.m"
  {
#line 751 "globals.m"
    MR_bool libs__globals__succeeded;
#line 751 "globals.m"
    MR_Word libs__globals__OptionTable0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 0)));
#line 751 "globals.m"
    MR_Word libs__globals__OptionTable_9;
#line 718 "globals.m"
    MR_Word libs__globals__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)));
#line 718 "globals.m"
    MR_Word libs__globals__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 718 "globals.m"
    MR_Word libs__globals__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 718 "globals.m"
    MR_Word libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 4)));
#line 718 "globals.m"
    MR_Word libs__globals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 5)));
#line 718 "globals.m"
    MR_Word libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 6)));
#line 718 "globals.m"
    MR_Word libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 7)));
#line 718 "globals.m"
    MR_Word libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 8)));
#line 718 "globals.m"
    MR_Word libs__globals__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 718 "globals.m"
    MR_Word libs__globals__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 10)));
#line 718 "globals.m"
    MR_Word libs__globals__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 11)));
#line 749 "globals.m"
    MR_Word libs__globals__V_41_41;
#line 749 "globals.m"
    MR_Word libs__globals__V_42_42;
#line 749 "globals.m"
    MR_Word libs__globals__V_43_43;
#line 749 "globals.m"
    MR_Word libs__globals__V_44_44;
#line 749 "globals.m"
    MR_Word libs__globals__V_45_45;
#line 749 "globals.m"
    MR_Word libs__globals__V_46_46;
#line 749 "globals.m"
    MR_Word libs__globals__V_47_47;
#line 749 "globals.m"
    MR_Word libs__globals__V_48_48;
#line 749 "globals.m"
    MR_Word libs__globals__V_49_49;
#line 749 "globals.m"
    MR_Word libs__globals__V_50_50;
#line 749 "globals.m"
    MR_Word libs__globals__V_51_51;
#line 749 "globals.m"
    MR_Word libs__globals__V_52_52;
#line 749 "globals.m"
    MR_Word libs__globals__V_53_53;
#line 749 "globals.m"
    MR_Word libs__globals__V_54_54;
#line 749 "globals.m"
    MR_Word libs__globals__V_55_55;
#line 749 "globals.m"
    MR_Word libs__globals__V_56_56;
#line 749 "globals.m"
    MR_Word libs__globals__V_57_57;
#line 749 "globals.m"
    MR_Word libs__globals__V_58_58;
#line 749 "globals.m"
    MR_Word libs__globals__V_59_59;
#line 749 "globals.m"
    MR_Word libs__globals__V_40_40;

#line 753 "globals.m"
    {
#line 753 "globals.m"
      mercury__map__set_4_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (libs__globals__Option_5)), ((MR_Box) (libs__globals__OptionData_6)), libs__globals__OptionTable0_8, &libs__globals__OptionTable_9);
    }
#line 749 "globals.m"
    libs__globals__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 0)));
#line 749 "globals.m"
    libs__globals__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 749 "globals.m"
    libs__globals__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 749 "globals.m"
    libs__globals__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 749 "globals.m"
    libs__globals__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 749 "globals.m"
    libs__globals__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 749 "globals.m"
    libs__globals__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 749 "globals.m"
    libs__globals__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)));
#line 749 "globals.m"
    libs__globals__V_48_48 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 749 "globals.m"
    libs__globals__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 749 "globals.m"
    libs__globals__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 4)));
#line 749 "globals.m"
    libs__globals__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 5)));
#line 749 "globals.m"
    libs__globals__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 6)));
#line 749 "globals.m"
    libs__globals__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 7)));
#line 749 "globals.m"
    libs__globals__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 8)));
#line 749 "globals.m"
    libs__globals__V_55_55 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 749 "globals.m"
    libs__globals__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 749 "globals.m"
    libs__globals__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 749 "globals.m"
    libs__globals__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 10)));
#line 749 "globals.m"
    libs__globals__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 11)));
#line 749 "globals.m"
    {
#line 749 "globals.m"
      MR_Word base;
#line 749 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 749 "globals.m"
      *libs__globals__STATE_VARIABLE_Globals_11 = base;
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__OptionTable_9));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__V_41_41 | ((((libs__globals__V_42_42 << (MR_Integer) 3)) | ((((libs__globals__V_43_43 << (MR_Integer) 6)) | ((((libs__globals__V_44_44 << (MR_Integer) 8)) | ((((libs__globals__V_45_45 << (MR_Integer) 10)) | ((libs__globals__V_46_46 << (MR_Integer) 12)))))))))))));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__V_47_47));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__V_48_48 | ((libs__globals__V_49_49 << (MR_Integer) 2)))));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__V_50_50));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__V_51_51));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__V_52_52));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__V_53_53));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__V_54_54));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__V_55_55 | ((((libs__globals__V_56_56 << (MR_Integer) 3)) | ((libs__globals__V_57_57 << (MR_Integer) 6)))))));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__V_58_58));
#line 749 "globals.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (libs__globals__V_59_59));
#line 749 "globals.m"
    }
#line 751 "globals.m"
  }
#line 295 "globals.m"
}

#line 292 "globals.m"
void MR_CALL 
libs__globals__get_limit_error_contexts_map_2_p_0(
#line 292 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 292 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 292 "globals.m"
{
#line 737 "globals.m"
  {
#line 737 "globals.m"
    MR_bool libs__globals__succeeded;
#line 737 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 737 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 737 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 737 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 737 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 737 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 737 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 737 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 737 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 737 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 737 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 737 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 737 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 737 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 737 "globals.m"
    MR_Word libs__globals__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 737 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 737 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 737 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 737 "globals.m"
    MR_Word libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));

#line 737 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 737 "globals.m"
  }
#line 292 "globals.m"
}

#line 291 "globals.m"
void MR_CALL 
libs__globals__get_file_install_cmd_2_p_0(
#line 291 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 291 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 291 "globals.m"
{
#line 736 "globals.m"
  {
#line 736 "globals.m"
    MR_bool libs__globals__succeeded;
#line 736 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 736 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 736 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 736 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 736 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 736 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 736 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 736 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 736 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 736 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 736 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 736 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 736 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 736 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 736 "globals.m"
    MR_Word libs__globals__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 736 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 736 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 736 "globals.m"
    MR_Word libs__globals__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 736 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 736 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 736 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 736 "globals.m"
  }
#line 291 "globals.m"
}

#line 290 "globals.m"
void MR_CALL 
libs__globals__get_target_env_type_2_p_0(
#line 290 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 290 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 290 "globals.m"
{
#line 735 "globals.m"
  {
#line 735 "globals.m"
    MR_bool libs__globals__succeeded;
#line 735 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 735 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 735 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 735 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 735 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 735 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 735 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 735 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 735 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 735 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 735 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 735 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 735 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 735 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 735 "globals.m"
    MR_Word libs__globals__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 735 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 735 "globals.m"
    MR_Word libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 735 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 735 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 735 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 735 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 735 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 735 "globals.m"
  }
#line 290 "globals.m"
}

#line 289 "globals.m"
void MR_CALL 
libs__globals__get_system_env_type_2_p_0(
#line 289 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 289 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 289 "globals.m"
{
#line 734 "globals.m"
  {
#line 734 "globals.m"
    MR_bool libs__globals__succeeded;
#line 734 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 734 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 734 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 734 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 734 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 734 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 734 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 734 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 734 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 734 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 734 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 734 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 734 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 734 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 734 "globals.m"
    MR_Word libs__globals__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 734 "globals.m"
    MR_Word libs__globals__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 734 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 734 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 734 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 734 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 734 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 734 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 734 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 734 "globals.m"
  }
#line 289 "globals.m"
}

#line 288 "globals.m"
void MR_CALL 
libs__globals__get_host_env_type_2_p_0(
#line 288 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 288 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 288 "globals.m"
{
#line 733 "globals.m"
  {
#line 733 "globals.m"
    MR_bool libs__globals__succeeded;
#line 733 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 733 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 733 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 733 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 733 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 733 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 733 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 733 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 733 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 733 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 733 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 733 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 733 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 733 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 733 "globals.m"
    MR_Word libs__globals__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 733 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 733 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 733 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 733 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 733 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 733 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 733 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 733 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 733 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 733 "globals.m"
  }
#line 288 "globals.m"
}

#line 287 "globals.m"
void MR_CALL 
libs__globals__get_maybe_feedback_info_2_p_0(
#line 287 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 287 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 287 "globals.m"
{
#line 732 "globals.m"
  {
#line 732 "globals.m"
    MR_bool libs__globals__succeeded;
#line 732 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 732 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 732 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 732 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 732 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 732 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 732 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 732 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 732 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 732 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 732 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 732 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 732 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 732 "globals.m"
    MR_Word libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 732 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 732 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 732 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 732 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 732 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 732 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 732 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 732 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 732 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 732 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 732 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 732 "globals.m"
  }
#line 287 "globals.m"
}

#line 285 "globals.m"
void MR_CALL 
libs__globals__get_maybe_il_version_number_2_p_0(
#line 285 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 285 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 285 "globals.m"
{
#line 731 "globals.m"
  {
#line 731 "globals.m"
    MR_bool libs__globals__succeeded;
#line 731 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 731 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 731 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 731 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 731 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 731 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 731 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 731 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 731 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 731 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 731 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 731 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 731 "globals.m"
    MR_Word libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 731 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 731 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 731 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 731 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 731 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 731 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 731 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 731 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 731 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 731 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 731 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 731 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 731 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 731 "globals.m"
  }
#line 285 "globals.m"
}

#line 284 "globals.m"
void MR_CALL 
libs__globals__get_reuse_strategy_2_p_0(
#line 284 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 284 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 284 "globals.m"
{
#line 730 "globals.m"
  {
#line 730 "globals.m"
    MR_bool libs__globals__succeeded;
#line 730 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 730 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 730 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 730 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 730 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 730 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 730 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 730 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 730 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 730 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 730 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 730 "globals.m"
    MR_Word libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 730 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 730 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 730 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 730 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 730 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 730 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 730 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 730 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 730 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 730 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 730 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 730 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 730 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 730 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 730 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 730 "globals.m"
  }
#line 284 "globals.m"
}

#line 282 "globals.m"
void MR_CALL 
libs__globals__get_csharp_compiler_type_2_p_0(
#line 282 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 282 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 282 "globals.m"
{
#line 729 "globals.m"
  {
#line 729 "globals.m"
    MR_bool libs__globals__succeeded;
#line 729 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 729 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 729 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 729 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 729 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 729 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 729 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 729 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 729 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 729 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 729 "globals.m"
    MR_Word libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 729 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 729 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 729 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 729 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 729 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 729 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 729 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 729 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 729 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 729 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 729 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 729 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 729 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 729 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 729 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 729 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 729 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 729 "globals.m"
  }
#line 282 "globals.m"
}

#line 281 "globals.m"
void MR_CALL 
libs__globals__get_c_compiler_type_2_p_0(
#line 281 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 281 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 281 "globals.m"
{
#line 728 "globals.m"
  {
#line 728 "globals.m"
    MR_bool libs__globals__succeeded;
#line 728 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 728 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 728 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 728 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 728 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 728 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 728 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 728 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 728 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 728 "globals.m"
    MR_Word libs__globals__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 728 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 728 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 728 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 728 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 728 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 728 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 728 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 728 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 728 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 728 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 728 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 728 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 728 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 728 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 728 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 728 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 728 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 728 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 728 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 728 "globals.m"
  }
#line 281 "globals.m"
}

#line 280 "globals.m"
void MR_CALL 
libs__globals__get_maybe_thread_safe_2_p_0(
#line 280 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 280 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 280 "globals.m"
{
#line 727 "globals.m"
  {
#line 727 "globals.m"
    MR_bool libs__globals__succeeded;
#line 727 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 727 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 727 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 727 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 727 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 727 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 727 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 727 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 727 "globals.m"
    MR_Word libs__globals__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 727 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 727 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 727 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 727 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 727 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 727 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 727 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 727 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 727 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 727 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 727 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 727 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 727 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 727 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 727 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 727 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 727 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 727 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 727 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 727 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 727 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 727 "globals.m"
  }
#line 280 "globals.m"
}

#line 279 "globals.m"
void MR_CALL 
libs__globals__get_ssdb_trace_level_2_p_0(
#line 279 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 279 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 279 "globals.m"
{
#line 726 "globals.m"
  {
#line 726 "globals.m"
    MR_bool libs__globals__succeeded;
#line 726 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 726 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 726 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 726 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 726 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 726 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 726 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 726 "globals.m"
    MR_Word libs__globals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 726 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 726 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 726 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 726 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 726 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 726 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 726 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 726 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 726 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 726 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 726 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 726 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 726 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 726 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 726 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 726 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 726 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 726 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 726 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 726 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 726 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 726 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 726 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 726 "globals.m"
  }
#line 279 "globals.m"
}

#line 278 "globals.m"
void MR_CALL 
libs__globals__get_trace_suppress_2_p_0(
#line 278 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 278 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 278 "globals.m"
{
#line 725 "globals.m"
  {
#line 725 "globals.m"
    MR_bool libs__globals__succeeded;
#line 725 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 725 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 725 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 725 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 725 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 725 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 725 "globals.m"
    MR_Word libs__globals__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 725 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 725 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 725 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 725 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 725 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 725 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 725 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 725 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 725 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 725 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 725 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 725 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 725 "globals.m"
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 725 "globals.m"
    libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 725 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 725 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 725 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 725 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 725 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 725 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 725 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 725 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 725 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 725 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 725 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 725 "globals.m"
  }
#line 278 "globals.m"
}

#line 277 "globals.m"
void MR_CALL 
libs__globals__get_trace_level_2_p_0(
#line 277 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 277 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 277 "globals.m"
{
#line 724 "globals.m"
  {
#line 724 "globals.m"
    MR_bool libs__globals__succeeded;
#line 724 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 724 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 724 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 724 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 724 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 724 "globals.m"
    MR_Word libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 724 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 724 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 724 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 724 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 724 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 724 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 724 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 724 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 724 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 724 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 724 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 724 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 724 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 724 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 724 "globals.m"
    libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 724 "globals.m"
    libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 724 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 724 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 724 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 724 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 724 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 724 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 724 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 724 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 724 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 724 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 724 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 724 "globals.m"
  }
#line 277 "globals.m"
}

#line 276 "globals.m"
void MR_CALL 
libs__globals__get_termination2_norm_2_p_0(
#line 276 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 276 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 276 "globals.m"
{
#line 723 "globals.m"
  {
#line 723 "globals.m"
    MR_bool libs__globals__succeeded;
#line 723 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 723 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 723 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 723 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 723 "globals.m"
    MR_Word libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 723 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 723 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 723 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 723 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 723 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 723 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 723 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 723 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 723 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 723 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 723 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 723 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 723 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 723 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 723 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 723 "globals.m"
    libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 723 "globals.m"
    libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 723 "globals.m"
    libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 723 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 723 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 723 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 723 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 723 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 723 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 723 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
#line 723 "globals.m"
    libs__globals__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 723 "globals.m"
    libs__globals__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
#line 723 "globals.m"
    libs__globals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
#line 723 "globals.m"
    libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
#line 723 "globals.m"
  }
#line 276 "globals.m"
}

#line 275 "globals.m"
void MR_CALL 
libs__globals__get_termination_norm_2_p_0(
#line 275 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 275 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 275 "globals.m"
{
#line 722 "globals.m"
  {
#line 722 "globals.m"
    MR_bool libs__globals__succeeded;
#line 722 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 722 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 722 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 722 "globals.m"
    MR_Word libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 722 "globals.m"
    MR_Word libs__globals__V_8_8;
#line 722 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 722 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 722 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 722 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 722 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 722 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 722 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 722 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 722 "globals.m"
    MR_Word libs__globals__V_17_17;
#line 722 "globals.m"
    MR_Word libs__globals__V_18_18;
#line 722 "globals.m"
    MR_Word libs__globals__V_19_19;
#line 722 "globals.m"
    MR_Word libs__globals__V_20_20;
#line 722 "globals.m"
    MR_Word libs__globals__V_21_21;
#line 722 "globals.m"
    MR_Word libs__globals__V_22_22;

#line 722 "globals.m"
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 722 "globals.m"
    libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 722 "globals.m"
    libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 722 "globals.m"
    libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 722 "globals.m"
    libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 722 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 722 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 722 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 722 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 722 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 722 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
#line 722 "globals.m"
    libs__globals__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
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
#line 275 "globals.m"
}

#line 274 "globals.m"
void MR_CALL 
libs__globals__get_tags_method_2_p_0(
#line 274 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 274 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 274 "globals.m"
{
#line 721 "globals.m"
  {
#line 721 "globals.m"
    MR_bool libs__globals__succeeded;
#line 721 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 721 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 721 "globals.m"
    MR_Word libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 721 "globals.m"
    MR_Word libs__globals__V_7_7;
#line 721 "globals.m"
    MR_Word libs__globals__V_8_8;
#line 721 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 721 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 721 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 721 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 721 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 721 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 721 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 721 "globals.m"
    MR_Word libs__globals__V_16_16;
#line 721 "globals.m"
    MR_Word libs__globals__V_17_17;
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
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 721 "globals.m"
    libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 721 "globals.m"
    libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 721 "globals.m"
    libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 721 "globals.m"
    libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 721 "globals.m"
    libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 721 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 721 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 721 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 721 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 721 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
#line 721 "globals.m"
    libs__globals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
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
#line 274 "globals.m"
}

#line 273 "globals.m"
void MR_CALL 
libs__globals__get_gc_method_2_p_0(
#line 273 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 273 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 273 "globals.m"
{
#line 720 "globals.m"
  {
#line 720 "globals.m"
    MR_bool libs__globals__succeeded;
#line 720 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 720 "globals.m"
    MR_Word libs__globals__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 720 "globals.m"
    MR_Word libs__globals__V_6_6;
#line 720 "globals.m"
    MR_Word libs__globals__V_7_7;
#line 720 "globals.m"
    MR_Word libs__globals__V_8_8;
#line 720 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 720 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 720 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 720 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 720 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 720 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 720 "globals.m"
    MR_Word libs__globals__V_15_15;
#line 720 "globals.m"
    MR_Word libs__globals__V_16_16;
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
    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 720 "globals.m"
    libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 720 "globals.m"
    libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 720 "globals.m"
    libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 720 "globals.m"
    libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 720 "globals.m"
    libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 720 "globals.m"
    libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 720 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 720 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 720 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 720 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
#line 720 "globals.m"
    libs__globals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
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
#line 273 "globals.m"
}

#line 741 "globals.m"
static MR_Box MR_CALL 
libs__globals__get_backend_foreign_languages_2_p_0_1(
#line 741 "globals.m"
  MR_Box libs__globals__closure_arg,
#line 741 "globals.m"
  MR_Box libs__globals__wrapper_arg_1)
#line 741 "globals.m"
{
#line 741 "globals.m"
  {
#line 741 "globals.m"
    MR_Box libs__globals__wrapper_arg_2;
#line 741 "globals.m"
    MR_Box libs__globals__closure = libs__globals__closure_arg;
#line 741 "globals.m"
    MR_Word libs__globals__conv0_HeadVar__2_12;

#line 741 "globals.m"
    {
#line 741 "globals.m"
      libs__globals__conv0_HeadVar__2_12 = libs__globals__IntroducedFrom__func__get_backend_foreign_languages__744__1_1_f_0(((MR_String) libs__globals__wrapper_arg_1));
    }
#line 741 "globals.m"
    libs__globals__wrapper_arg_2 = ((MR_Box) (libs__globals__conv0_HeadVar__2_12));
#line 741 "globals.m"
    return libs__globals__wrapper_arg_2;
#line 741 "globals.m"
  }
#line 741 "globals.m"
}

#line 271 "globals.m"
void MR_CALL 
libs__globals__get_backend_foreign_languages_2_p_0(
#line 271 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 271 "globals.m"
  MR_Word * libs__globals__ForeignLangs_4)
#line 271 "globals.m"
{
#line 739 "globals.m"
  {
#line 739 "globals.m"
    MR_bool libs__globals__succeeded;
#line 739 "globals.m"
    MR_Word libs__globals__LangStrs_5;

#line 740 "globals.m"
    {
#line 740 "globals.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 267, &libs__globals__LangStrs_5);
    }
#line 741 "globals.m"
    {
#line 741 "globals.m"
      *libs__globals__ForeignLangs_4 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &libs__globals_scalar_common_2[5], libs__globals__LangStrs_5);
    }
#line 739 "globals.m"
  }
#line 271 "globals.m"
}

#line 270 "globals.m"
void MR_CALL 
libs__globals__get_target_2_p_0(
#line 270 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 270 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 270 "globals.m"
{
#line 719 "globals.m"
  {
#line 719 "globals.m"
    MR_bool libs__globals__succeeded;
#line 719 "globals.m"
    MR_Word libs__globals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 719 "globals.m"
    MR_Word libs__globals__V_5_5;
#line 719 "globals.m"
    MR_Word libs__globals__V_6_6;
#line 719 "globals.m"
    MR_Word libs__globals__V_7_7;
#line 719 "globals.m"
    MR_Word libs__globals__V_8_8;
#line 719 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 719 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 719 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 719 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 719 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 719 "globals.m"
    MR_Word libs__globals__V_14_14;
#line 719 "globals.m"
    MR_Word libs__globals__V_15_15;
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
    *libs__globals__HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 719 "globals.m"
    libs__globals__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 719 "globals.m"
    libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 719 "globals.m"
    libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 719 "globals.m"
    libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 719 "globals.m"
    libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 719 "globals.m"
    libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 719 "globals.m"
    libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 719 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 719 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 719 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
#line 719 "globals.m"
    libs__globals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
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
#line 270 "globals.m"
}

#line 269 "globals.m"
void MR_CALL 
libs__globals__get_options_2_p_0(
#line 269 "globals.m"
  MR_Word libs__globals__Globals_3,
#line 269 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 269 "globals.m"
{
#line 718 "globals.m"
  {
#line 718 "globals.m"
    MR_bool libs__globals__succeeded;
#line 718 "globals.m"
    MR_Word libs__globals__V_4_4;
#line 718 "globals.m"
    MR_Word libs__globals__V_5_5;
#line 718 "globals.m"
    MR_Word libs__globals__V_6_6;
#line 718 "globals.m"
    MR_Word libs__globals__V_7_7;
#line 718 "globals.m"
    MR_Word libs__globals__V_8_8;
#line 718 "globals.m"
    MR_Word libs__globals__V_9_9;
#line 718 "globals.m"
    MR_Word libs__globals__V_10_10;
#line 718 "globals.m"
    MR_Word libs__globals__V_11_11;
#line 718 "globals.m"
    MR_Word libs__globals__V_12_12;
#line 718 "globals.m"
    MR_Word libs__globals__V_13_13;
#line 718 "globals.m"
    MR_Word libs__globals__V_14_14;
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
    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
#line 718 "globals.m"
    libs__globals__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 718 "globals.m"
    libs__globals__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
#line 718 "globals.m"
    libs__globals__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 718 "globals.m"
    libs__globals__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 8)) & (MR_Integer) 3);
#line 718 "globals.m"
    libs__globals__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 10)) & (MR_Integer) 3);
#line 718 "globals.m"
    libs__globals__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)))) >> (MR_Integer) 12)) & (MR_Integer) 7);
#line 718 "globals.m"
    libs__globals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)));
#line 718 "globals.m"
    libs__globals__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 718 "globals.m"
    libs__globals__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 718 "globals.m"
    libs__globals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)));
#line 718 "globals.m"
    libs__globals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
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
#line 269 "globals.m"
}

#line 260 "globals.m"
void MR_CALL 
libs__globals__globals_init_21_p_0(
#line 260 "globals.m"
  MR_Word libs__globals__Options_22,
#line 260 "globals.m"
  MR_Word libs__globals__Target_23,
#line 260 "globals.m"
  MR_Word libs__globals__GC_Method_24,
#line 260 "globals.m"
  MR_Word libs__globals__TagsMethod_25,
#line 260 "globals.m"
  MR_Word libs__globals__TerminationNorm_26,
#line 260 "globals.m"
  MR_Word libs__globals__Termination2Norm_27,
#line 260 "globals.m"
  MR_Word libs__globals__TraceLevel_28,
#line 260 "globals.m"
  MR_Word libs__globals__TraceSuppress_29,
#line 260 "globals.m"
  MR_Word libs__globals__SSTraceLevel_30,
#line 260 "globals.m"
  MR_Word libs__globals__MaybeThreadSafe_31,
#line 260 "globals.m"
  MR_Word libs__globals__C_CompilerType_32,
#line 260 "globals.m"
  MR_Word libs__globals__CSharp_CompilerType_33,
#line 260 "globals.m"
  MR_Word libs__globals__ReuseStrategy_34,
#line 260 "globals.m"
  MR_Word libs__globals__MaybeILVersion_35,
#line 260 "globals.m"
  MR_Word libs__globals__MaybeFeedback_36,
#line 260 "globals.m"
  MR_Word libs__globals__HostEnvType_37,
#line 260 "globals.m"
  MR_Word libs__globals__SystemEnvType_38,
#line 260 "globals.m"
  MR_Word libs__globals__TargetEnvType_39,
#line 260 "globals.m"
  MR_Word libs__globals__FileInstallCmd_40,
#line 260 "globals.m"
  MR_Word libs__globals__LimitErrorContextsMap_41,
#line 260 "globals.m"
  MR_Word * libs__globals__Globals_42)
#line 260 "globals.m"
{
#line 711 "globals.m"
  {
#line 711 "globals.m"
    MR_bool libs__globals__succeeded;

#line 711 "globals.m"
    {
#line 711 "globals.m"
      MR_Word base;
#line 711 "globals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 711 "globals.m"
      *libs__globals__Globals_42 = base;
#line 711 "globals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__Options_22));
#line 711 "globals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__globals__Target_23 | ((((libs__globals__GC_Method_24 << (MR_Integer) 3)) | ((((libs__globals__TagsMethod_25 << (MR_Integer) 6)) | ((((libs__globals__TerminationNorm_26 << (MR_Integer) 8)) | ((((libs__globals__Termination2Norm_27 << (MR_Integer) 10)) | ((libs__globals__TraceLevel_28 << (MR_Integer) 12)))))))))))));
#line 711 "globals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__globals__TraceSuppress_29));
#line 711 "globals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__globals__SSTraceLevel_30 | ((libs__globals__MaybeThreadSafe_31 << (MR_Integer) 2)))));
#line 711 "globals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__globals__C_CompilerType_32));
#line 711 "globals.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__CSharp_CompilerType_33));
#line 711 "globals.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__ReuseStrategy_34));
#line 711 "globals.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__MaybeILVersion_35));
#line 711 "globals.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__MaybeFeedback_36));
#line 711 "globals.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__HostEnvType_37 | ((((libs__globals__SystemEnvType_38 << (MR_Integer) 3)) | ((libs__globals__TargetEnvType_39 << (MR_Integer) 6)))))));
#line 711 "globals.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__FileInstallCmd_40));
#line 711 "globals.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (libs__globals__LimitErrorContextsMap_41));
#line 711 "globals.m"
    }
#line 711 "globals.m"
  }
#line 260 "globals.m"
}

#line 244 "globals.m"
void MR_CALL 
libs__globals__convert_limit_error_contexts_3_p_0(
#line 244 "globals.m"
  MR_Word libs__globals__Options_4,
#line 244 "globals.m"
  MR_Word * libs__globals__BadOptions_5,
#line 244 "globals.m"
  MR_Word * libs__globals__Map_6)
#line 244 "globals.m"
{
#line 578 "globals.m"
  {
#line 578 "globals.m"
    MR_bool libs__globals__succeeded;
#line 578 "globals.m"
    MR_Word libs__globals__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 578 "globals.m"
    MR_Word libs__globals__RevBadOptions_7;
#line 578 "globals.m"
    MR_Word libs__globals__V_9_9;

#line 580 "globals.m"
    {
#line 580 "globals.m"
      libs__globals__V_9_9 = mercury__map__init_0_f_0(libs__globals__TypeCtorInfo_10_10, (MR_Word) &libs__globals_scalar_common_1[0]);
    }
#line 579 "globals.m"
    {
#line 579 "globals.m"
      libs__globals__convert_limit_error_contexts_acc_5_p_0(libs__globals__Options_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__globals__RevBadOptions_7, libs__globals__V_9_9, libs__globals__Map_6);
    }
#line 581 "globals.m"
    {
#line 581 "globals.m"
      mercury__list__reverse_2_p_0(libs__globals__TypeCtorInfo_10_10, libs__globals__RevBadOptions_7, libs__globals__BadOptions_5);
#line 581 "globals.m"
      return;
    }
#line 578 "globals.m"
  }
#line 244 "globals.m"
}

#line 242 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_ssdb_trace_level_3_p_0(
#line 242 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 242 "globals.m"
  MR_Word libs__globals__HeadVar__2_2,
#line 242 "globals.m"
  MR_Word * libs__globals__HeadVar__3_3)
#line 242 "globals.m"
{
#line 572 "globals.m"
  {
#line 572 "globals.m"
    MR_bool libs__globals__succeeded;
#line 572 "globals.m"
    MR_Integer libs__globals__lo_0;
#line 572 "globals.m"
    MR_Integer libs__globals__hi_1;
#line 572 "globals.m"
    MR_Integer libs__globals__mid_2;
#line 572 "globals.m"
    MR_Integer libs__globals__result_3;

#line 572 "globals.m"
    /* binary string jump switch */
#line 572 "globals.m"
    libs__globals__lo_0 = (MR_Integer) 0;
#line 572 "globals.m"
    libs__globals__hi_1 = (MR_Integer) 3;
#line 572 "globals.m"
    do
#line 572 "globals.m"
      {
#line 572 "globals.m"
        libs__globals__mid_2 = (((libs__globals__lo_0 + libs__globals__hi_1)) / (MR_Integer) 2);
#line 572 "globals.m"
        libs__globals__result_3 = MR_strcmp(libs__globals__HeadVar__1_1, ((&libs__globals_vector_common_14[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_14_0__vct_14_f_0);
#line 572 "globals.m"
        if ((libs__globals__result_3 == (MR_Integer) 0))
#line 572 "globals.m"
          {
#line 572 "globals.m"
#line 572 "globals.m"
            switch (((&libs__globals_vector_common_14[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_14_0__vct_14_f_1) {
#line 572 "globals.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 572 "globals.m"
              case (MR_Integer) 0:
#line 576 "globals.m"
                {
#line 576 "globals.m"
                  /* case "deep" */
#line 576 "globals.m"
                  *libs__globals__HeadVar__3_3 = (MR_Integer) 2;
#line 576 "globals.m"
                  libs__globals__succeeded = MR_TRUE;
#line 576 "globals.m"
                }
#line 572 "globals.m"
                break;
#line 572 "globals.m"
              case (MR_Integer) 1:
#line 572 "globals.m"
                {
#line 572 "globals.m"
                  /* case "default" */
#line 572 "globals.m"
#line 572 "globals.m"
                  switch (libs__globals__HeadVar__2_2) {
#line 572 "globals.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 572 "globals.m"
                    case (MR_Integer) 0:
#line 573 "globals.m"
                      *libs__globals__HeadVar__3_3 = (MR_Integer) 0;
#line 572 "globals.m"
                      break;
#line 572 "globals.m"
                    case (MR_Integer) 1:
#line 572 "globals.m"
                      *libs__globals__HeadVar__3_3 = (MR_Integer) 2;
#line 572 "globals.m"
                      break;
#line 572 "globals.m"
                  }
#line 572 "globals.m"
                  libs__globals__succeeded = MR_TRUE;
#line 572 "globals.m"
                }
#line 572 "globals.m"
                break;
#line 572 "globals.m"
              case (MR_Integer) 2:
#line 574 "globals.m"
                {
#line 574 "globals.m"
                  /* case "none" */
#line 574 "globals.m"
                  *libs__globals__HeadVar__3_3 = (MR_Integer) 0;
#line 574 "globals.m"
                  libs__globals__succeeded = MR_TRUE;
#line 574 "globals.m"
                }
#line 572 "globals.m"
                break;
#line 572 "globals.m"
              case (MR_Integer) 3:
#line 575 "globals.m"
                {
#line 575 "globals.m"
                  /* case "shallow" */
#line 575 "globals.m"
                  *libs__globals__HeadVar__3_3 = (MR_Integer) 1;
#line 575 "globals.m"
                  libs__globals__succeeded = MR_TRUE;
#line 575 "globals.m"
                }
#line 572 "globals.m"
                break;
#line 572 "globals.m"
            }
#line 572 "globals.m"
            /* jump out of search loop */
#line 572 "globals.m"
            goto label_0;
#line 572 "globals.m"
          }
#line 572 "globals.m"
        else
#line 572 "globals.m"
        if ((libs__globals__result_3 < (MR_Integer) 0))
#line 572 "globals.m"
          libs__globals__hi_1 = (libs__globals__mid_2 - (MR_Integer) 1);
#line 572 "globals.m"
        else
#line 572 "globals.m"
          libs__globals__lo_0 = (libs__globals__mid_2 + (MR_Integer) 1);
#line 572 "globals.m"
      }
#line 572 "globals.m"
    while ((libs__globals__lo_0 <= libs__globals__hi_1));
#line 572 "globals.m"
    libs__globals__succeeded = MR_FALSE;
#line 572 "globals.m"
  label_0:;
#line 572 "globals.m"
    return libs__globals__succeeded;
#line 572 "globals.m"
  }
#line 242 "globals.m"
}

#line 241 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_env_type_2_p_0(
#line 241 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 241 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 241 "globals.m"
{
#line 566 "globals.m"
  {
#line 566 "globals.m"
    MR_bool libs__globals__succeeded;
#line 566 "globals.m"
    MR_Integer libs__globals__lo_0;
#line 566 "globals.m"
    MR_Integer libs__globals__hi_1;
#line 566 "globals.m"
    MR_Integer libs__globals__mid_2;
#line 566 "globals.m"
    MR_Integer libs__globals__result_3;

#line 566 "globals.m"
    /* binary string simple lookup switch */
#line 566 "globals.m"
    libs__globals__lo_0 = (MR_Integer) 0;
#line 566 "globals.m"
    libs__globals__hi_1 = (MR_Integer) 4;
#line 566 "globals.m"
    do
#line 566 "globals.m"
      {
#line 566 "globals.m"
        libs__globals__mid_2 = (((libs__globals__lo_0 + libs__globals__hi_1)) / (MR_Integer) 2);
#line 566 "globals.m"
        libs__globals__result_3 = MR_strcmp(libs__globals__HeadVar__1_1, ((&libs__globals_vector_common_13[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_13_0__vct_13_f_0);
#line 566 "globals.m"
        if ((libs__globals__result_3 == (MR_Integer) 0))
#line 566 "globals.m"
          {
#line 566 "globals.m"
            *libs__globals__HeadVar__2_2 = ((&libs__globals_vector_common_13[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_13_0__vct_13_f_1;
#line 566 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 566 "globals.m"
            /* jump out of search loop */
#line 566 "globals.m"
            goto label_0;
#line 566 "globals.m"
          }
#line 566 "globals.m"
        else
#line 566 "globals.m"
        if ((libs__globals__result_3 < (MR_Integer) 0))
#line 566 "globals.m"
          libs__globals__hi_1 = (libs__globals__mid_2 - (MR_Integer) 1);
#line 566 "globals.m"
        else
#line 566 "globals.m"
          libs__globals__lo_0 = (libs__globals__mid_2 + (MR_Integer) 1);
#line 566 "globals.m"
      }
#line 566 "globals.m"
    while ((libs__globals__lo_0 <= libs__globals__hi_1));
#line 566 "globals.m"
    libs__globals__succeeded = MR_FALSE;
#line 566 "globals.m"
  label_0:;
#line 566 "globals.m"
    return libs__globals__succeeded;
#line 566 "globals.m"
  }
#line 241 "globals.m"
}

#line 239 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_reuse_strategy_3_p_0(
#line 239 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 239 "globals.m"
  MR_Integer libs__globals__NCells_2,
#line 239 "globals.m"
  MR_Word * libs__globals__HeadVar__3_3)
#line 239 "globals.m"
{
#line 644 "globals.m"
  {
#line 644 "globals.m"
    MR_bool libs__globals__succeeded;

#line 644 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "same_cons_id") == 0))
#line 644 "globals.m"
      {
#line 644 "globals.m"
        *libs__globals__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 644 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 644 "globals.m"
      }
#line 644 "globals.m"
    else
#line 644 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "within_n_cells_difference") == 0))
#line 646 "globals.m"
      {
#line 646 "globals.m"
        {
#line 646 "globals.m"
          MR_Word base;
#line 646 "globals.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 646 "globals.m"
          *libs__globals__HeadVar__3_3 = base;
#line 646 "globals.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__globals__NCells_2));
#line 646 "globals.m"
        }
#line 646 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 646 "globals.m"
      }
#line 644 "globals.m"
    else
#line 644 "globals.m"
      libs__globals__succeeded = MR_FALSE;
#line 644 "globals.m"
    return libs__globals__succeeded;
#line 644 "globals.m"
  }
#line 239 "globals.m"
}

#line 237 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_csharp_compiler_type_2_p_0(
#line 237 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 237 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 237 "globals.m"
{
#line 562 "globals.m"
  {
#line 562 "globals.m"
    MR_bool libs__globals__succeeded;

#line 562 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "mono") == 0))
#line 563 "globals.m"
      {
#line 563 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 1;
#line 563 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 563 "globals.m"
      }
#line 562 "globals.m"
    else
#line 562 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "unknown") == 0))
#line 564 "globals.m"
      {
#line 564 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 2;
#line 564 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 564 "globals.m"
      }
#line 562 "globals.m"
    else
#line 562 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "microsoft") == 0))
#line 562 "globals.m"
      {
#line 562 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 0;
#line 562 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 562 "globals.m"
      }
#line 562 "globals.m"
    else
#line 562 "globals.m"
      libs__globals__succeeded = MR_FALSE;
#line 562 "globals.m"
    return libs__globals__succeeded;
#line 562 "globals.m"
  }
#line 237 "globals.m"
}

#line 465 "globals.m"
static MR_bool MR_CALL 
libs__globals__convert_c_compiler_type_2_p_0_1(
#line 465 "globals.m"
  MR_Box libs__globals__closure_arg,
#line 465 "globals.m"
  MR_Box libs__globals__wrapper_arg_1)
#line 465 "globals.m"
{
#line 465 "globals.m"
  {
#line 465 "globals.m"
    MR_bool libs__globals__succeeded;
#line 465 "globals.m"
    MR_Box libs__globals__closure = libs__globals__closure_arg;

#line 465 "globals.m"
    {
#line 465 "globals.m"
      return libs__globals__succeeded = libs__globals__IntroducedFrom__pred__convert_c_compiler_type_with_version__465__1_1_p_0(((MR_Char) (MR_Word) libs__globals__wrapper_arg_1));
    }
#line 465 "globals.m"
    return libs__globals__succeeded;
#line 465 "globals.m"
  }
#line 465 "globals.m"
}

#line 235 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_c_compiler_type_2_p_0(
#line 235 "globals.m"
  MR_String libs__globals__CC_Str_3,
#line 235 "globals.m"
  MR_Word * libs__globals__C_CompilerType_4)
#line 235 "globals.m"
{
#line 449 "globals.m"
  {
#line 449 "globals.m"
    MR_bool libs__globals__succeeded;
#line 449 "globals.m"
    MR_Word libs__globals__C_CompilerType0_5;
#line 456 "globals.m"
    MR_Integer libs__globals__lo_0;
#line 456 "globals.m"
    MR_Integer libs__globals__hi_1;
#line 456 "globals.m"
    MR_Integer libs__globals__mid_2;
#line 456 "globals.m"
    MR_Integer libs__globals__result_3;

#line 456 "globals.m"
    /* binary string simple lookup switch */
#line 456 "globals.m"
    libs__globals__lo_0 = (MR_Integer) 0;
#line 456 "globals.m"
    libs__globals__hi_1 = (MR_Integer) 3;
#line 456 "globals.m"
    do
#line 456 "globals.m"
      {
#line 456 "globals.m"
        libs__globals__mid_2 = (((libs__globals__lo_0 + libs__globals__hi_1)) / (MR_Integer) 2);
#line 456 "globals.m"
        libs__globals__result_3 = MR_strcmp(libs__globals__CC_Str_3, ((&libs__globals_vector_common_11[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_11_0__vct_11_f_0);
#line 456 "globals.m"
        if ((libs__globals__result_3 == (MR_Integer) 0))
#line 456 "globals.m"
          {
#line 456 "globals.m"
            libs__globals__C_CompilerType0_5 = ((&libs__globals_vector_common_11[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_11_0__vct_11_f_1;
#line 456 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 456 "globals.m"
            /* jump out of search loop */
#line 456 "globals.m"
            goto label_0;
#line 456 "globals.m"
          }
#line 456 "globals.m"
        else
#line 456 "globals.m"
        if ((libs__globals__result_3 < (MR_Integer) 0))
#line 456 "globals.m"
          libs__globals__hi_1 = (libs__globals__mid_2 - (MR_Integer) 1);
#line 456 "globals.m"
        else
#line 456 "globals.m"
          libs__globals__lo_0 = (libs__globals__mid_2 + (MR_Integer) 1);
#line 456 "globals.m"
      }
#line 456 "globals.m"
    while ((libs__globals__lo_0 <= libs__globals__hi_1));
#line 456 "globals.m"
    libs__globals__succeeded = MR_FALSE;
#line 456 "globals.m"
  label_0:;
#line 449 "globals.m"
    if (libs__globals__succeeded)
#line 448 "globals.m"
      {
#line 448 "globals.m"
        *libs__globals__C_CompilerType_4 = libs__globals__C_CompilerType0_5;
#line 448 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 448 "globals.m"
      }
#line 449 "globals.m"
    else
#line 464 "globals.m"
      {
#line 464 "globals.m"
        MR_Word libs__globals__Tokens_13;
#line 469 "globals.m"
        MR_String libs__globals__Major_15;
#line 469 "globals.m"
        MR_String libs__globals__Minor_16;
#line 469 "globals.m"
        MR_String libs__globals__Patch_17;
#line 467 "globals.m"
        MR_String libs__globals__V_21_21;
#line 467 "globals.m"
        MR_Word libs__globals__V_22_22;
#line 467 "globals.m"
        MR_Word libs__globals__V_23_23;
#line 467 "globals.m"
        MR_Word libs__globals__V_24_24;
#line 467 "globals.m"
        MR_Word libs__globals__V_25_25;

#line 465 "globals.m"
        {
#line 465 "globals.m"
          libs__globals__Tokens_13 = mercury__string__words_separator_2_f_0((MR_Word) &libs__globals_scalar_common_2[4], libs__globals__CC_Str_3);
        }
#line 467 "globals.m"
        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__Tokens_13)) == (MR_mktag((MR_Integer) 1)));
#line 467 "globals.m"
        if (libs__globals__succeeded)
#line 467 "globals.m"
          {
#line 467 "globals.m"
            libs__globals__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_13, (MR_Integer) 0)));
#line 467 "globals.m"
            libs__globals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_13, (MR_Integer) 1)));
#line 467 "globals.m"
            libs__globals__succeeded = (strcmp(libs__globals__V_21_21, (MR_String) "gcc") == 0);
#line 467 "globals.m"
            if (libs__globals__succeeded)
#line 467 "globals.m"
              {
#line 467 "globals.m"
                libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 467 "globals.m"
                if (libs__globals__succeeded)
#line 467 "globals.m"
                  {
#line 467 "globals.m"
                    libs__globals__Major_15 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_22_22, (MR_Integer) 0)));
#line 467 "globals.m"
                    libs__globals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_22_22, (MR_Integer) 1)));
#line 467 "globals.m"
                    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 467 "globals.m"
                    if (libs__globals__succeeded)
#line 467 "globals.m"
                      {
#line 467 "globals.m"
                        libs__globals__Minor_16 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_23_23, (MR_Integer) 0)));
#line 467 "globals.m"
                        libs__globals__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_23_23, (MR_Integer) 1)));
#line 467 "globals.m"
                        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 467 "globals.m"
                        if (libs__globals__succeeded)
#line 467 "globals.m"
                          {
#line 467 "globals.m"
                            libs__globals__Patch_17 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_24_24, (MR_Integer) 0)));
#line 467 "globals.m"
                            libs__globals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_24_24, (MR_Integer) 1)));
#line 467 "globals.m"
                            libs__globals__succeeded = (libs__globals__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 467 "globals.m"
                          }
#line 467 "globals.m"
                      }
#line 467 "globals.m"
                  }
#line 467 "globals.m"
              }
#line 467 "globals.m"
          }
#line 469 "globals.m"
        if (libs__globals__succeeded)
#line 502 "globals.m"
          {
#line 497 "globals.m"
            libs__globals__succeeded = (strcmp(libs__globals__Major_15, (MR_String) "u") == 0);
#line 497 "globals.m"
            if (libs__globals__succeeded)
#line 497 "globals.m"
              {
#line 498 "globals.m"
                libs__globals__succeeded = (strcmp(libs__globals__Minor_16, (MR_String) "u") == 0);
#line 497 "globals.m"
                if (libs__globals__succeeded)
#line 499 "globals.m"
                  libs__globals__succeeded = (strcmp(libs__globals__Patch_17, (MR_String) "u") == 0);
#line 497 "globals.m"
              }
#line 502 "globals.m"
            if (libs__globals__succeeded)
#line 501 "globals.m"
              {
#line 501 "globals.m"
                *libs__globals__C_CompilerType_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__globals_scalar_common_2[3]);
#line 501 "globals.m"
                libs__globals__succeeded = MR_TRUE;
#line 501 "globals.m"
              }
#line 502 "globals.m"
            else
#line 529 "globals.m"
              {
#line 529 "globals.m"
                MR_Integer libs__globals__Major_42;
#line 503 "globals.m"
                MR_Integer libs__globals__V_48_48;

#line 503 "globals.m"
                {
#line 503 "globals.m"
                  libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Major_15, &libs__globals__Major_42);
                }
#line 503 "globals.m"
                if (libs__globals__succeeded)
#line 503 "globals.m"
                  {
#line 504 "globals.m"
                    libs__globals__V_48_48 = (MR_Integer) 2;
#line 504 "globals.m"
                    libs__globals__succeeded = (libs__globals__Major_42 >= libs__globals__V_48_48);
#line 503 "globals.m"
                  }
#line 529 "globals.m"
                if (libs__globals__succeeded)
#line 510 "globals.m"
                  {
#line 507 "globals.m"
                    libs__globals__succeeded = (strcmp(libs__globals__Minor_16, (MR_String) "u") == 0);
#line 510 "globals.m"
                    if (libs__globals__succeeded)
#line 509 "globals.m"
                      {
#line 509 "globals.m"
                        MR_Word libs__globals__V_49_49;

#line 509 "globals.m"
                        {
#line 509 "globals.m"
                          libs__globals__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 509 "globals.m"
                          MR_hl_field(MR_mktag(1), libs__globals__V_49_49, 0) = ((MR_Box) (libs__globals__Major_42));
#line 509 "globals.m"
                        }
#line 509 "globals.m"
                        {
#line 509 "globals.m"
                          MR_Word base;
#line 509 "globals.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 509 "globals.m"
                          *libs__globals__C_CompilerType_4 = base;
#line 509 "globals.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__globals__V_49_49));
#line 509 "globals.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 509 "globals.m"
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 509 "globals.m"
                        }
#line 509 "globals.m"
                        libs__globals__succeeded = MR_TRUE;
#line 509 "globals.m"
                      }
#line 510 "globals.m"
                    else
#line 526 "globals.m"
                      {
#line 526 "globals.m"
                        MR_Integer libs__globals__Minor_43;
#line 511 "globals.m"
                        MR_Integer libs__globals__V_52_52;

#line 511 "globals.m"
                        {
#line 511 "globals.m"
                          libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Minor_16, &libs__globals__Minor_43);
                        }
#line 511 "globals.m"
                        if (libs__globals__succeeded)
#line 511 "globals.m"
                          {
#line 512 "globals.m"
                            libs__globals__V_52_52 = (MR_Integer) 0;
#line 512 "globals.m"
                            libs__globals__succeeded = (libs__globals__Minor_43 >= libs__globals__V_52_52);
#line 511 "globals.m"
                          }
#line 526 "globals.m"
                        if (libs__globals__succeeded)
#line 518 "globals.m"
                          {
#line 515 "globals.m"
                            libs__globals__succeeded = (strcmp(libs__globals__Patch_17, (MR_String) "u") == 0);
#line 518 "globals.m"
                            if (libs__globals__succeeded)
#line 517 "globals.m"
                              {
#line 517 "globals.m"
                                MR_Word libs__globals__V_53_53;
#line 517 "globals.m"
                                MR_Word libs__globals__V_54_54;

#line 517 "globals.m"
                                {
#line 517 "globals.m"
                                  libs__globals__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 517 "globals.m"
                                  MR_hl_field(MR_mktag(1), libs__globals__V_53_53, 0) = ((MR_Box) (libs__globals__Major_42));
#line 517 "globals.m"
                                }
#line 517 "globals.m"
                                {
#line 517 "globals.m"
                                  libs__globals__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 517 "globals.m"
                                  MR_hl_field(MR_mktag(1), libs__globals__V_54_54, 0) = ((MR_Box) (libs__globals__Minor_43));
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
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__globals__V_53_53));
#line 517 "globals.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__globals__V_54_54));
#line 517 "globals.m"
                                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 517 "globals.m"
                                }
#line 517 "globals.m"
                                libs__globals__succeeded = MR_TRUE;
#line 517 "globals.m"
                              }
#line 518 "globals.m"
                            else
#line 523 "globals.m"
                              {
#line 523 "globals.m"
                                MR_Integer libs__globals__Patch_44;
#line 519 "globals.m"
                                MR_Integer libs__globals__V_56_56;

#line 519 "globals.m"
                                {
#line 519 "globals.m"
                                  libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Patch_17, &libs__globals__Patch_44);
                                }
#line 519 "globals.m"
                                if (libs__globals__succeeded)
#line 519 "globals.m"
                                  {
#line 520 "globals.m"
                                    libs__globals__V_56_56 = (MR_Integer) 0;
#line 520 "globals.m"
                                    libs__globals__succeeded = (libs__globals__Patch_44 >= libs__globals__V_56_56);
#line 519 "globals.m"
                                  }
#line 523 "globals.m"
                                if (libs__globals__succeeded)
#line 522 "globals.m"
                                  {
#line 522 "globals.m"
                                    MR_Word libs__globals__V_57_57;
#line 522 "globals.m"
                                    MR_Word libs__globals__V_58_58;
#line 522 "globals.m"
                                    MR_Word libs__globals__V_59_59;

#line 522 "globals.m"
                                    {
#line 522 "globals.m"
                                      libs__globals__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 522 "globals.m"
                                      MR_hl_field(MR_mktag(1), libs__globals__V_57_57, 0) = ((MR_Box) (libs__globals__Major_42));
#line 522 "globals.m"
                                    }
#line 522 "globals.m"
                                    {
#line 522 "globals.m"
                                      libs__globals__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 522 "globals.m"
                                      MR_hl_field(MR_mktag(1), libs__globals__V_58_58, 0) = ((MR_Box) (libs__globals__Minor_43));
#line 522 "globals.m"
                                    }
#line 522 "globals.m"
                                    {
#line 522 "globals.m"
                                      libs__globals__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 522 "globals.m"
                                      MR_hl_field(MR_mktag(1), libs__globals__V_59_59, 0) = ((MR_Box) (libs__globals__Patch_44));
#line 522 "globals.m"
                                    }
#line 522 "globals.m"
                                    {
#line 522 "globals.m"
                                      MR_Word base;
#line 522 "globals.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 522 "globals.m"
                                      *libs__globals__C_CompilerType_4 = base;
#line 522 "globals.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__globals__V_57_57));
#line 522 "globals.m"
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__globals__V_58_58));
#line 522 "globals.m"
                                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (libs__globals__V_59_59));
#line 522 "globals.m"
                                    }
#line 522 "globals.m"
                                    libs__globals__succeeded = MR_TRUE;
#line 522 "globals.m"
                                  }
#line 523 "globals.m"
                                else
#line 524 "globals.m"
                                  {
#line 524 "globals.m"
                                    return libs__globals__succeeded = mercury__builtin__false_0_p_0();
                                  }
#line 523 "globals.m"
                              }
#line 518 "globals.m"
                          }
#line 526 "globals.m"
                        else
#line 527 "globals.m"
                          {
#line 527 "globals.m"
                            return libs__globals__succeeded = mercury__builtin__false_0_p_0();
                          }
#line 526 "globals.m"
                      }
#line 510 "globals.m"
                  }
#line 529 "globals.m"
                else
#line 530 "globals.m"
                  {
#line 530 "globals.m"
                    return libs__globals__succeeded = mercury__builtin__false_0_p_0();
                  }
#line 529 "globals.m"
              }
#line 502 "globals.m"
          }
#line 469 "globals.m"
        else
#line 471 "globals.m"
          {
#line 471 "globals.m"
            MR_String libs__globals__Major_35;
#line 471 "globals.m"
            MR_String libs__globals__Minor_36;
#line 471 "globals.m"
            MR_String libs__globals__Patch_37;
#line 469 "globals.m"
            MR_String libs__globals__V_26_26;
#line 469 "globals.m"
            MR_Word libs__globals__V_27_27;
#line 469 "globals.m"
            MR_Word libs__globals__V_28_28;
#line 469 "globals.m"
            MR_Word libs__globals__V_29_29;
#line 469 "globals.m"
            MR_Word libs__globals__V_30_30;

#line 469 "globals.m"
            libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__Tokens_13)) == (MR_mktag((MR_Integer) 1)));
#line 469 "globals.m"
            if (libs__globals__succeeded)
#line 469 "globals.m"
              {
#line 469 "globals.m"
                libs__globals__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_13, (MR_Integer) 0)));
#line 469 "globals.m"
                libs__globals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_13, (MR_Integer) 1)));
#line 469 "globals.m"
                libs__globals__succeeded = (strcmp(libs__globals__V_26_26, (MR_String) "clang") == 0);
#line 469 "globals.m"
                if (libs__globals__succeeded)
#line 469 "globals.m"
                  {
#line 469 "globals.m"
                    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 469 "globals.m"
                    if (libs__globals__succeeded)
#line 469 "globals.m"
                      {
#line 469 "globals.m"
                        libs__globals__Major_35 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_27_27, (MR_Integer) 0)));
#line 469 "globals.m"
                        libs__globals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_27_27, (MR_Integer) 1)));
#line 469 "globals.m"
                        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 469 "globals.m"
                        if (libs__globals__succeeded)
#line 469 "globals.m"
                          {
#line 469 "globals.m"
                            libs__globals__Minor_36 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_28_28, (MR_Integer) 0)));
#line 469 "globals.m"
                            libs__globals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_28_28, (MR_Integer) 1)));
#line 469 "globals.m"
                            libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 469 "globals.m"
                            if (libs__globals__succeeded)
#line 469 "globals.m"
                              {
#line 469 "globals.m"
                                libs__globals__Patch_37 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_29_29, (MR_Integer) 0)));
#line 469 "globals.m"
                                libs__globals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_29_29, (MR_Integer) 1)));
#line 469 "globals.m"
                                libs__globals__succeeded = (libs__globals__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 469 "globals.m"
                              }
#line 469 "globals.m"
                          }
#line 469 "globals.m"
                      }
#line 469 "globals.m"
                  }
#line 469 "globals.m"
              }
#line 471 "globals.m"
            if (libs__globals__succeeded)
#line 542 "globals.m"
              {
#line 542 "globals.m"
                MR_Integer libs__globals__Major_64;
#line 542 "globals.m"
                MR_Integer libs__globals__Minor_65;
#line 542 "globals.m"
                MR_Integer libs__globals__Patch_66;
#line 542 "globals.m"
                MR_Word libs__globals__ClangVersion_67;
#line 542 "globals.m"
                MR_Integer libs__globals__V_68_68;
#line 542 "globals.m"
                MR_Integer libs__globals__V_69_69;
#line 542 "globals.m"
                MR_Integer libs__globals__V_70_70;
#line 542 "globals.m"
                MR_Word libs__globals__V_71_71;

#line 543 "globals.m"
                {
#line 543 "globals.m"
                  libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Major_35, &libs__globals__Major_64);
                }
#line 542 "globals.m"
                if (libs__globals__succeeded)
#line 542 "globals.m"
                  {
#line 544 "globals.m"
                    {
#line 544 "globals.m"
                      libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Minor_36, &libs__globals__Minor_65);
                    }
#line 542 "globals.m"
                    if (libs__globals__succeeded)
#line 542 "globals.m"
                      {
#line 545 "globals.m"
                        {
#line 545 "globals.m"
                          libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Patch_37, &libs__globals__Patch_66);
                        }
#line 542 "globals.m"
                        if (libs__globals__succeeded)
#line 542 "globals.m"
                          {
#line 546 "globals.m"
                            libs__globals__V_68_68 = (MR_Integer) 0;
#line 546 "globals.m"
                            libs__globals__succeeded = (libs__globals__Major_64 >= libs__globals__V_68_68);
#line 542 "globals.m"
                            if (libs__globals__succeeded)
#line 542 "globals.m"
                              {
#line 546 "globals.m"
                                libs__globals__V_69_69 = (MR_Integer) 0;
#line 546 "globals.m"
                                libs__globals__succeeded = (libs__globals__Minor_65 >= libs__globals__V_69_69);
#line 542 "globals.m"
                                if (libs__globals__succeeded)
#line 542 "globals.m"
                                  {
#line 546 "globals.m"
                                    libs__globals__V_70_70 = (MR_Integer) 0;
#line 546 "globals.m"
                                    libs__globals__succeeded = (libs__globals__Patch_66 >= libs__globals__V_70_70);
#line 542 "globals.m"
                                    if (libs__globals__succeeded)
#line 542 "globals.m"
                                      {
#line 547 "globals.m"
                                        {
#line 547 "globals.m"
                                          libs__globals__ClangVersion_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 547 "globals.m"
                                          MR_hl_field(MR_mktag(0), libs__globals__ClangVersion_67, 0) = ((MR_Box) (libs__globals__Major_64));
#line 547 "globals.m"
                                          MR_hl_field(MR_mktag(0), libs__globals__ClangVersion_67, 1) = ((MR_Box) (libs__globals__Minor_65));
#line 547 "globals.m"
                                          MR_hl_field(MR_mktag(0), libs__globals__ClangVersion_67, 2) = ((MR_Box) (libs__globals__Patch_66));
#line 547 "globals.m"
                                        }
#line 548 "globals.m"
                                        {
#line 548 "globals.m"
                                          libs__globals__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 548 "globals.m"
                                          MR_hl_field(MR_mktag(1), libs__globals__V_71_71, 0) = ((MR_Box) (libs__globals__ClangVersion_67));
#line 548 "globals.m"
                                        }
#line 548 "globals.m"
                                        {
#line 548 "globals.m"
                                          MR_Word base;
#line 548 "globals.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 548 "globals.m"
                                          *libs__globals__C_CompilerType_4 = base;
#line 548 "globals.m"
                                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (libs__globals__V_71_71));
#line 548 "globals.m"
                                        }
#line 548 "globals.m"
                                        libs__globals__succeeded = MR_TRUE;
#line 542 "globals.m"
                                      }
#line 542 "globals.m"
                                  }
#line 542 "globals.m"
                              }
#line 542 "globals.m"
                          }
#line 542 "globals.m"
                      }
#line 542 "globals.m"
                  }
#line 542 "globals.m"
              }
#line 471 "globals.m"
            else
#line 473 "globals.m"
              {
#line 473 "globals.m"
                MR_String libs__globals__Version_18;
#line 471 "globals.m"
                MR_String libs__globals__V_31_31;
#line 471 "globals.m"
                MR_Word libs__globals__V_32_32;
#line 471 "globals.m"
                MR_Word libs__globals__V_33_33;

#line 471 "globals.m"
                libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__Tokens_13)) == (MR_mktag((MR_Integer) 1)));
#line 471 "globals.m"
                if (libs__globals__succeeded)
#line 471 "globals.m"
                  {
#line 471 "globals.m"
                    libs__globals__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_13, (MR_Integer) 0)));
#line 471 "globals.m"
                    libs__globals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_13, (MR_Integer) 1)));
#line 471 "globals.m"
                    libs__globals__succeeded = (strcmp(libs__globals__V_31_31, (MR_String) "msvc") == 0);
#line 471 "globals.m"
                    if (libs__globals__succeeded)
#line 471 "globals.m"
                      {
#line 471 "globals.m"
                        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 471 "globals.m"
                        if (libs__globals__succeeded)
#line 471 "globals.m"
                          {
#line 471 "globals.m"
                            libs__globals__Version_18 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__V_32_32, (MR_Integer) 0)));
#line 471 "globals.m"
                            libs__globals__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__V_32_32, (MR_Integer) 1)));
#line 471 "globals.m"
                            libs__globals__succeeded = (libs__globals__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 471 "globals.m"
                          }
#line 471 "globals.m"
                      }
#line 471 "globals.m"
                  }
#line 473 "globals.m"
                if (libs__globals__succeeded)
#line 557 "globals.m"
                  {
#line 557 "globals.m"
                    MR_Integer libs__globals__Version_74;
#line 557 "globals.m"
                    MR_Integer libs__globals__V_75_75;
#line 557 "globals.m"
                    MR_Word libs__globals__V_76_76;

#line 558 "globals.m"
                    {
#line 558 "globals.m"
                      libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Version_18, &libs__globals__Version_74);
                    }
#line 557 "globals.m"
                    if (libs__globals__succeeded)
#line 557 "globals.m"
                      {
#line 559 "globals.m"
                        libs__globals__V_75_75 = (MR_Integer) 0;
#line 559 "globals.m"
                        libs__globals__succeeded = (libs__globals__Version_74 > libs__globals__V_75_75);
#line 557 "globals.m"
                        if (libs__globals__succeeded)
#line 557 "globals.m"
                          {
#line 560 "globals.m"
                            {
#line 560 "globals.m"
                              libs__globals__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 560 "globals.m"
                              MR_hl_field(MR_mktag(1), libs__globals__V_76_76, 0) = ((MR_Box) (libs__globals__Version_74));
#line 560 "globals.m"
                            }
#line 560 "globals.m"
                            {
#line 560 "globals.m"
                              MR_Word base;
#line 560 "globals.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 560 "globals.m"
                              *libs__globals__C_CompilerType_4 = base;
#line 560 "globals.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (libs__globals__V_76_76));
#line 560 "globals.m"
                            }
#line 560 "globals.m"
                            libs__globals__succeeded = MR_TRUE;
#line 557 "globals.m"
                          }
#line 557 "globals.m"
                      }
#line 557 "globals.m"
                  }
#line 473 "globals.m"
                else
#line 474 "globals.m"
                  {
#line 474 "globals.m"
                    return libs__globals__succeeded = mercury__builtin__false_0_p_0();
                  }
#line 473 "globals.m"
              }
#line 471 "globals.m"
          }
#line 464 "globals.m"
      }
#line 449 "globals.m"
    return libs__globals__succeeded;
#line 449 "globals.m"
  }
#line 235 "globals.m"
}

#line 233 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_maybe_thread_safe_2_p_0(
#line 233 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 233 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 233 "globals.m"
{
#line 443 "globals.m"
  {
#line 443 "globals.m"
    MR_bool libs__globals__succeeded;

#line 443 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "no") == 0))
#line 444 "globals.m"
      {
#line 444 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 0;
#line 444 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 444 "globals.m"
      }
#line 443 "globals.m"
    else
#line 443 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "yes") == 0))
#line 443 "globals.m"
      {
#line 443 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 1;
#line 443 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 443 "globals.m"
      }
#line 443 "globals.m"
    else
#line 443 "globals.m"
      libs__globals__succeeded = MR_FALSE;
#line 443 "globals.m"
    return libs__globals__succeeded;
#line 443 "globals.m"
  }
#line 233 "globals.m"
}

#line 232 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_termination_norm_2_p_0(
#line 232 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 232 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 232 "globals.m"
{
#line 438 "globals.m"
  {
#line 438 "globals.m"
    MR_bool libs__globals__succeeded;
#line 438 "globals.m"
    MR_Integer libs__globals__lo_0;
#line 438 "globals.m"
    MR_Integer libs__globals__hi_1;
#line 438 "globals.m"
    MR_Integer libs__globals__mid_2;
#line 438 "globals.m"
    MR_Integer libs__globals__result_3;

#line 438 "globals.m"
    /* binary string simple lookup switch */
#line 438 "globals.m"
    libs__globals__lo_0 = (MR_Integer) 0;
#line 438 "globals.m"
    libs__globals__hi_1 = (MR_Integer) 3;
#line 438 "globals.m"
    do
#line 438 "globals.m"
      {
#line 438 "globals.m"
        libs__globals__mid_2 = (((libs__globals__lo_0 + libs__globals__hi_1)) / (MR_Integer) 2);
#line 438 "globals.m"
        libs__globals__result_3 = MR_strcmp(libs__globals__HeadVar__1_1, ((&libs__globals_vector_common_9[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_9_0__vct_9_f_0);
#line 438 "globals.m"
        if ((libs__globals__result_3 == (MR_Integer) 0))
#line 438 "globals.m"
          {
#line 438 "globals.m"
            *libs__globals__HeadVar__2_2 = ((&libs__globals_vector_common_9[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_9_0__vct_9_f_1;
#line 438 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 438 "globals.m"
            /* jump out of search loop */
#line 438 "globals.m"
            goto label_0;
#line 438 "globals.m"
          }
#line 438 "globals.m"
        else
#line 438 "globals.m"
        if ((libs__globals__result_3 < (MR_Integer) 0))
#line 438 "globals.m"
          libs__globals__hi_1 = (libs__globals__mid_2 - (MR_Integer) 1);
#line 438 "globals.m"
        else
#line 438 "globals.m"
          libs__globals__lo_0 = (libs__globals__mid_2 + (MR_Integer) 1);
#line 438 "globals.m"
      }
#line 438 "globals.m"
    while ((libs__globals__lo_0 <= libs__globals__hi_1));
#line 438 "globals.m"
    libs__globals__succeeded = MR_FALSE;
#line 438 "globals.m"
  label_0:;
#line 438 "globals.m"
    return libs__globals__succeeded;
#line 438 "globals.m"
  }
#line 232 "globals.m"
}

#line 231 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_tags_method_2_p_0(
#line 231 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 231 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 231 "globals.m"
{
#line 434 "globals.m"
  {
#line 434 "globals.m"
    MR_bool libs__globals__succeeded;

#line 434 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "low") == 0))
#line 435 "globals.m"
      {
#line 435 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 1;
#line 435 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 435 "globals.m"
      }
#line 434 "globals.m"
    else
#line 434 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "high") == 0))
#line 436 "globals.m"
      {
#line 436 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 2;
#line 436 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 436 "globals.m"
      }
#line 434 "globals.m"
    else
#line 434 "globals.m"
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "none") == 0))
#line 434 "globals.m"
      {
#line 434 "globals.m"
        *libs__globals__HeadVar__2_2 = (MR_Integer) 0;
#line 434 "globals.m"
        libs__globals__succeeded = MR_TRUE;
#line 434 "globals.m"
      }
#line 434 "globals.m"
    else
#line 434 "globals.m"
      libs__globals__succeeded = MR_FALSE;
#line 434 "globals.m"
    return libs__globals__succeeded;
#line 434 "globals.m"
  }
#line 231 "globals.m"
}

#line 230 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_gc_method_2_p_0(
#line 230 "globals.m"
  MR_String libs__globals__HeadVar__1_1,
#line 230 "globals.m"
  MR_Word * libs__globals__HeadVar__2_2)
#line 230 "globals.m"
{
#line 426 "globals.m"
  {
#line 426 "globals.m"
    MR_bool libs__globals__succeeded;
#line 426 "globals.m"
    MR_Integer libs__globals__lo_0;
#line 426 "globals.m"
    MR_Integer libs__globals__hi_1;
#line 426 "globals.m"
    MR_Integer libs__globals__mid_2;
#line 426 "globals.m"
    MR_Integer libs__globals__result_3;

#line 426 "globals.m"
    /* binary string simple lookup switch */
#line 426 "globals.m"
    libs__globals__lo_0 = (MR_Integer) 0;
#line 426 "globals.m"
    libs__globals__hi_1 = (MR_Integer) 6;
#line 426 "globals.m"
    do
#line 426 "globals.m"
      {
#line 426 "globals.m"
        libs__globals__mid_2 = (((libs__globals__lo_0 + libs__globals__hi_1)) / (MR_Integer) 2);
#line 426 "globals.m"
        libs__globals__result_3 = MR_strcmp(libs__globals__HeadVar__1_1, ((&libs__globals_vector_common_8[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_8_0__vct_8_f_0);
#line 426 "globals.m"
        if ((libs__globals__result_3 == (MR_Integer) 0))
#line 426 "globals.m"
          {
#line 426 "globals.m"
            *libs__globals__HeadVar__2_2 = ((&libs__globals_vector_common_8[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_8_0__vct_8_f_1;
#line 426 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 426 "globals.m"
            /* jump out of search loop */
#line 426 "globals.m"
            goto label_0;
#line 426 "globals.m"
          }
#line 426 "globals.m"
        else
#line 426 "globals.m"
        if ((libs__globals__result_3 < (MR_Integer) 0))
#line 426 "globals.m"
          libs__globals__hi_1 = (libs__globals__mid_2 - (MR_Integer) 1);
#line 426 "globals.m"
        else
#line 426 "globals.m"
          libs__globals__lo_0 = (libs__globals__mid_2 + (MR_Integer) 1);
#line 426 "globals.m"
      }
#line 426 "globals.m"
    while ((libs__globals__lo_0 <= libs__globals__hi_1));
#line 426 "globals.m"
    libs__globals__succeeded = MR_FALSE;
#line 426 "globals.m"
  label_0:;
#line 426 "globals.m"
    return libs__globals__succeeded;
#line 426 "globals.m"
  }
#line 230 "globals.m"
}

#line 229 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_foreign_language_2_p_0(
#line 229 "globals.m"
  MR_String libs__globals__String_3,
#line 229 "globals.m"
  MR_Word * libs__globals__ForeignLanguage_4)
#line 229 "globals.m"
{
#line 412 "globals.m"
  {
#line 412 "globals.m"
    MR_bool libs__globals__succeeded;
#line 412 "globals.m"
    MR_String libs__globals__V_5_5;
#line 418 "globals.m"
    MR_Integer libs__globals__lo_0;
#line 418 "globals.m"
    MR_Integer libs__globals__hi_1;
#line 418 "globals.m"
    MR_Integer libs__globals__mid_2;
#line 418 "globals.m"
    MR_Integer libs__globals__result_3;

#line 413 "globals.m"
    {
#line 413 "globals.m"
      libs__globals__V_5_5 = mercury__string__to_lower_1_f_0(libs__globals__String_3);
    }
#line 418 "globals.m"
    /* binary string simple lookup switch */
#line 418 "globals.m"
    libs__globals__lo_0 = (MR_Integer) 0;
#line 418 "globals.m"
    libs__globals__hi_1 = (MR_Integer) 6;
#line 418 "globals.m"
    do
#line 418 "globals.m"
      {
#line 418 "globals.m"
        libs__globals__mid_2 = (((libs__globals__lo_0 + libs__globals__hi_1)) / (MR_Integer) 2);
#line 418 "globals.m"
        libs__globals__result_3 = MR_strcmp(libs__globals__V_5_5, ((&libs__globals_vector_common_7[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_7_0__vct_7_f_0);
#line 418 "globals.m"
        if ((libs__globals__result_3 == (MR_Integer) 0))
#line 418 "globals.m"
          {
#line 418 "globals.m"
            *libs__globals__ForeignLanguage_4 = ((&libs__globals_vector_common_7[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_7_0__vct_7_f_1;
#line 418 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 418 "globals.m"
            /* jump out of search loop */
#line 418 "globals.m"
            goto label_0;
#line 418 "globals.m"
          }
#line 418 "globals.m"
        else
#line 418 "globals.m"
        if ((libs__globals__result_3 < (MR_Integer) 0))
#line 418 "globals.m"
          libs__globals__hi_1 = (libs__globals__mid_2 - (MR_Integer) 1);
#line 418 "globals.m"
        else
#line 418 "globals.m"
          libs__globals__lo_0 = (libs__globals__mid_2 + (MR_Integer) 1);
#line 418 "globals.m"
      }
#line 418 "globals.m"
    while ((libs__globals__lo_0 <= libs__globals__hi_1));
#line 418 "globals.m"
    libs__globals__succeeded = MR_FALSE;
#line 418 "globals.m"
  label_0:;
#line 412 "globals.m"
    return libs__globals__succeeded;
#line 412 "globals.m"
  }
#line 229 "globals.m"
}

#line 228 "globals.m"
MR_bool MR_CALL 
libs__globals__convert_target_2_p_0(
#line 228 "globals.m"
  MR_String libs__globals__String_3,
#line 228 "globals.m"
  MR_Word * libs__globals__Target_4)
#line 228 "globals.m"
{
#line 401 "globals.m"
  {
#line 401 "globals.m"
    MR_bool libs__globals__succeeded;
#line 401 "globals.m"
    MR_String libs__globals__V_5_5;
#line 406 "globals.m"
    MR_Integer libs__globals__lo_0;
#line 406 "globals.m"
    MR_Integer libs__globals__hi_1;
#line 406 "globals.m"
    MR_Integer libs__globals__mid_2;
#line 406 "globals.m"
    MR_Integer libs__globals__result_3;

#line 402 "globals.m"
    {
#line 402 "globals.m"
      libs__globals__V_5_5 = mercury__string__to_lower_1_f_0(libs__globals__String_3);
    }
#line 406 "globals.m"
    /* binary string simple lookup switch */
#line 406 "globals.m"
    libs__globals__lo_0 = (MR_Integer) 0;
#line 406 "globals.m"
    libs__globals__hi_1 = (MR_Integer) 4;
#line 406 "globals.m"
    do
#line 406 "globals.m"
      {
#line 406 "globals.m"
        libs__globals__mid_2 = (((libs__globals__lo_0 + libs__globals__hi_1)) / (MR_Integer) 2);
#line 406 "globals.m"
        libs__globals__result_3 = MR_strcmp(libs__globals__V_5_5, ((&libs__globals_vector_common_6[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_6_0__vct_6_f_0);
#line 406 "globals.m"
        if ((libs__globals__result_3 == (MR_Integer) 0))
#line 406 "globals.m"
          {
#line 406 "globals.m"
            *libs__globals__Target_4 = ((&libs__globals_vector_common_6[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_6_0__vct_6_f_1;
#line 406 "globals.m"
            libs__globals__succeeded = MR_TRUE;
#line 406 "globals.m"
            /* jump out of search loop */
#line 406 "globals.m"
            goto label_0;
#line 406 "globals.m"
          }
#line 406 "globals.m"
        else
#line 406 "globals.m"
        if ((libs__globals__result_3 < (MR_Integer) 0))
#line 406 "globals.m"
          libs__globals__hi_1 = (libs__globals__mid_2 - (MR_Integer) 1);
#line 406 "globals.m"
        else
#line 406 "globals.m"
          libs__globals__lo_0 = (libs__globals__mid_2 + (MR_Integer) 1);
#line 406 "globals.m"
      }
#line 406 "globals.m"
    while ((libs__globals__lo_0 <= libs__globals__hi_1));
#line 406 "globals.m"
    libs__globals__succeeded = MR_FALSE;
#line 406 "globals.m"
  label_0:;
#line 401 "globals.m"
    return libs__globals__succeeded;
#line 401 "globals.m"
  }
#line 228 "globals.m"
}

#line 107 "globals.m"
MR_Word MR_CALL 
libs__globals__gc_is_conservative_1_f_0(
#line 107 "globals.m"
  MR_Word libs__globals__HeadVar__1_1)
#line 107 "globals.m"
{
#line 672 "globals.m"
  {
#line 672 "globals.m"
    MR_bool libs__globals__succeeded;
#line 672 "globals.m"
    MR_Word libs__globals__HeadVar__2_2 = ((&libs__globals_vector_common_5[0 + libs__globals__HeadVar__1_1]))->libs__globals__vector_common_type_5_0__vct_5_f_0;

#line 672 "globals.m"
    return libs__globals__HeadVar__2_2;
#line 672 "globals.m"
  }
#line 107 "globals.m"
}

#line 74 "globals.m"
MR_String MR_CALL 
libs__globals__simple_foreign_language_string_1_f_0(
#line 74 "globals.m"
  MR_Word libs__globals__HeadVar__1_1)
#line 74 "globals.m"
{
#line 666 "globals.m"
  {
#line 666 "globals.m"
    MR_bool libs__globals__succeeded;
#line 666 "globals.m"
    MR_String libs__globals__HeadVar__2_2 = ((&libs__globals_vector_common_4[10 + libs__globals__HeadVar__1_1]))->libs__globals__vector_common_type_4_0__vct_4_f_0;

#line 666 "globals.m"
    return libs__globals__HeadVar__2_2;
#line 666 "globals.m"
  }
#line 74 "globals.m"
}

#line 69 "globals.m"
MR_String MR_CALL 
libs__globals__foreign_language_string_1_f_0(
#line 69 "globals.m"
  MR_Word libs__globals__HeadVar__1_1)
#line 69 "globals.m"
{
#line 660 "globals.m"
  {
#line 660 "globals.m"
    MR_bool libs__globals__succeeded;
#line 660 "globals.m"
    MR_String libs__globals__HeadVar__2_2 = ((&libs__globals_vector_common_4[5 + libs__globals__HeadVar__1_1]))->libs__globals__vector_common_type_4_0__vct_4_f_0;

#line 660 "globals.m"
    return libs__globals__HeadVar__2_2;
#line 660 "globals.m"
  }
#line 69 "globals.m"
}

#line 64 "globals.m"
MR_String MR_CALL 
libs__globals__compilation_target_string_1_f_0(
#line 64 "globals.m"
  MR_Word libs__globals__HeadVar__1_1)
#line 64 "globals.m"
{
#line 654 "globals.m"
  {
#line 654 "globals.m"
    MR_bool libs__globals__succeeded;
#line 654 "globals.m"
    MR_String libs__globals__HeadVar__2_2 = ((&libs__globals_vector_common_4[0 + libs__globals__HeadVar__1_1]))->libs__globals__vector_common_type_4_0__vct_4_f_0;

#line 654 "globals.m"
    return libs__globals__HeadVar__2_2;
#line 654 "globals.m"
  }
#line 64 "globals.m"
}

#line 58 "globals.m"
MR_Word MR_CALL 
libs__globals__target_lang_to_foreign_export_lang_1_f_0(
#line 58 "globals.m"
  MR_Word libs__globals__HeadVar__1_1)
#line 58 "globals.m"
{
#line 648 "globals.m"
  {
#line 648 "globals.m"
    MR_bool libs__globals__succeeded;
#line 648 "globals.m"
    MR_Word libs__globals__HeadVar__2_2 = ((&libs__globals_vector_common_3[0 + libs__globals__HeadVar__1_1]))->libs__globals__vector_common_type_3_0__vct_3_f_0;

#line 648 "globals.m"
    return libs__globals__HeadVar__2_2;
#line 648 "globals.m"
  }
#line 58 "globals.m"
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
