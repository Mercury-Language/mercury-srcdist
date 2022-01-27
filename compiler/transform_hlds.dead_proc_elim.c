/*
** Automatically generated from `dead_proc_elim.m'
** by the Mercury compiler,
** version rotd-2015-07-01
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


/* :- module transform_hlds.dead_proc_elim. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__dead_proc_elim__init
ENDINIT
*/

#include "transform_hlds.dead_proc_elim.mih"


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
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
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
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.try_expand.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
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
#include "check_hlds.simplify.simplify_proc.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 143 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0;

#line 146 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0__plain_transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0;

#line 149 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 152 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 155 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 158 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 161 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0;

#line 164 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 167 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 170 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_analyze_what_0_0;

#line 173 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_analyze_what_0_1;

#line 176 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_value_ordered_analyze_what_0[2];

#line 179 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_analyze_what_0[2];

#line 182 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_analyze_what_0[2];

#line 185 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_0[2];

#line 188 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_0;

#line 191 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_1[2];

#line 194 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_1;

#line 197 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_2[3];

#line 200 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_2;

#line 203 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_3[1];

#line 206 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_3;

#line 209 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_0[1];

#line 212 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_1[1];

#line 215 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_2[1];

#line 218 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_3[1];

#line 221 "transform_hlds.dead_proc_elim.c"
static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_entity_0[4];

#line 224 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_entity_0[4];

#line 227 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_entity_0[4];

#line 230 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__ti_queue_1transform_hlds__dead_proc_elim__type_ctor_info_entity_0;

#line 233 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1transform_hlds__dead_proc_elim__type_ctor_info_entity_0;

#line 236 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_0;

#line 239 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_1;

#line 242 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_value_ordered_maybe_elim_opt_imported_0[2];

#line 245 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_maybe_elim_opt_imported_0[2];

#line 248 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_elim_opt_imported_0[2];

#line 251 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_maybe_needed_0_0;

#line 254 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_maybe_needed_0_1[1];

#line 257 "transform_hlds.dead_proc_elim.c"
static const MR_ConstString transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_maybe_needed_0_1[1];

#line 260 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_maybe_needed_0_1;

#line 263 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_maybe_needed_0_0[1];

#line 266 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_maybe_needed_0_1[1];

#line 269 "transform_hlds.dead_proc_elim.c"
static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_maybe_needed_0[2];

#line 272 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_maybe_needed_0[2];

#line 275 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_needed_0[2];

#line 278 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__ti_tree234_2transform_hlds__dead_proc_elim__type_ctor_info_entity_0transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0;

#line 281 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 284 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 287 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 290 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_pred_elim_info_0_0[5];

#line 293 "transform_hlds.dead_proc_elim.c"
static const MR_ConstString transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_pred_elim_info_0_0[5];

#line 296 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_pred_elim_info_0_0;

#line 299 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_pred_elim_info_0_0[1];

#line 302 "transform_hlds.dead_proc_elim.c"
static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_pred_elim_info_0[1];

#line 305 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_pred_elim_info_0[1];

#line 308 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_pred_elim_info_0[1];

#line 311 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 314 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 317 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_proc_elim_info_0_0[5];

#line 320 "transform_hlds.dead_proc_elim.c"
static const MR_ConstString transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_proc_elim_info_0_0[5];

#line 323 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_proc_elim_info_0_0;

#line 326 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_proc_elim_info_0_0[1];

#line 329 "transform_hlds.dead_proc_elim.c"
static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_proc_elim_info_0[1];

#line 332 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_proc_elim_info_0[1];

#line 335 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_proc_elim_info_0[1];

#line 338 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____analyze_what_0_0_10001(
#line 341 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 343 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2);

#line 346 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____analyze_what_0_0_10001(
#line 349 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 351 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 353 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 356 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____entity_0_0_10001(
#line 359 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 361 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2);

#line 364 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____entity_0_0_10001(
#line 367 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 369 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 371 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 374 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____entity_queue_0_0_10001(
#line 377 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 379 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2);

#line 382 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____entity_queue_0_0_10001(
#line 385 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 387 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 389 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 392 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____examined_set_0_0_10001(
#line 395 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 397 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2);

#line 400 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____examined_set_0_0_10001(
#line 403 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 405 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 407 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 410 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_elim_opt_imported_0_0_10001(
#line 413 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 415 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2);

#line 418 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_elim_opt_imported_0_0_10001(
#line 421 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 423 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 425 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 428 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_needed_0_0_10001(
#line 431 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 433 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2);

#line 436 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_needed_0_0_10001(
#line 439 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 441 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 443 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 446 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____needed_map_0_0_10001(
#line 449 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 451 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2);

#line 454 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____needed_map_0_0_10001(
#line 457 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 459 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 461 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 464 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____pred_elim_info_0_0_10001(
#line 467 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 469 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2);

#line 472 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____pred_elim_info_0_0_10001(
#line 475 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 477 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 479 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 482 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____proc_elim_info_0_0_10001(
#line 485 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 487 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2);

#line 490 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____proc_elim_info_0_0_10001(
#line 493 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 495 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 497 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 847 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_proc_eliminate_pred__847__1_4_p_0(
#line 847 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ProcTable0_57,
#line 847 "dead_proc_elim.m"
  MR_Integer transform_hlds__dead_proc_elim__HeadVar__2_42,
#line 847 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_43,
#line 847 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__4_44);

#line 1044 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__1044__1_2_p_0(
#line 1044 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__NeededPreds_38,
#line 1044 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_80);

#line 1034 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__1034__1_4_p_0(
#line 1034 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__SpecMap0_31,
#line 1034 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_51,
#line 1034 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_52,
#line 1034 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__4_53);

#line 714 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____proc_elim_info_0_0(
#line 714 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 714 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 714 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_3);

#line 714 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____proc_elim_info_0_0(
#line 714 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 714 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2);

#line 978 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____pred_elim_info_0_0(
#line 978 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 978 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 978 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_3);

#line 978 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____pred_elim_info_0_0(
#line 978 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 978 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2);

#line 137 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____examined_set_0_0(
#line 137 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 137 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 137 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_3);

#line 137 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____examined_set_0_0(
#line 137 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 137 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2);

#line 136 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____entity_queue_0_0(
#line 136 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 136 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 136 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_3);

#line 136 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____entity_queue_0_0(
#line 136 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 136 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2);

#line 148 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____analyze_what_0_0(
#line 148 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 148 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 148 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_3);

#line 148 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____analyze_what_0_0(
#line 148 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_1,
#line 148 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2);

#line 1251 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_p_0(
#line 1251 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Name_4,
#line 1251 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_13,
#line 1251 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_14);

#line 1233 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_p_0(
#line 1233 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__RHS_4,
#line 1233 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22,
#line 1233 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_23);

#line 1196 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_4(
#line 1196 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1196 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1196 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1196 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 1222 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_3(
#line 1222 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1222 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1222 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1222 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 1188 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_2(
#line 1188 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1188 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1188 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1188 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 1185 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_1(
#line 1185 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1185 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1185 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1185 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 1179 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0(
#line 1179 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__GoalExpr_4,
#line 1179 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52,
#line 1179 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53);

#line 1172 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(
#line 1172 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Goal_4,
#line 1172 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_8,
#line 1172 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_9);

#line 1165 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_case_3_p_0(
#line 1165 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Case_4,
#line 1165 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_9,
#line 1165 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_10);

#line 1159 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_process_clause_3_p_0(
#line 1159 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Clause_4,
#line 1159 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_6,
#line 1159 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_7);

#line 1151 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_p_0_1(
#line 1151 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1151 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1151 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1151 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 1131 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_p_0(
#line 1131 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_15,
#line 1131 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_16);

#line 1067 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_p_0(
#line 1067 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__PredId_4,
#line 1067 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__DeadInfo0_5,
#line 1067 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__DeadInfo_6);

#line 1056 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_add_entity_5_p_0(
#line 1056 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 1056 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 1056 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 1056 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_0_4,
#line 1056 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_5);

#line 960 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_const_structs_4_p_0(
#line 960 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 960 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 960 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_0_3,
#line 960 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_4);

#line 941 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_type_ctor_infos_3_p_0(
#line 941 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 941 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 941 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__3_3);

#line 880 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_p_0(
#line 880 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__PredId_12,
#line 880 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Keep_13,
#line 880 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__WarnForThisPred_14,
#line 880 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ProcElimInfo_15,
#line 880 "dead_proc_elim.m"
  MR_Integer transform_hlds__dead_proc_elim__ProcId_16,
#line 880 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcTable_0_30,
#line 880 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcTable_31,
#line 880 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Changed_0_32,
#line 880 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Changed_33,
#line 880 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Specs_0_34,
#line 880 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Specs_35);

#line 847 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0_2(
#line 847 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 847 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 847 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 847 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 826 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0_1(
#line 826 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 826 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 826 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 826 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 826 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 826 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5,
#line 826 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_6,
#line 826 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_7);

#line 777 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0(
#line 777 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ElimOptImported_5,
#line 777 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__PredId_6,
#line 777 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_0_36,
#line 777 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_37);

#line 744 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_5_p_0_1(
#line 744 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 744 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 744 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 744 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 735 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_5_p_0(
#line 735 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ElimOptImported_6,
#line 735 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_22,
#line 735 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_23,
#line 735 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_24,
#line 735 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__Specs_9);

#line 534 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_p_0(
#line 534 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Goal_7,
#line 534 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__CurrProc_8,
#line 534 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96,
#line 534 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97,
#line 534 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98,
#line 534 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);

#line 524 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_cases_6_p_0(
#line 524 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 524 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 524 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3,
#line 524 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4,
#line 524 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5,
#line 524 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6);

#line 515 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_goals_6_p_0(
#line 515 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 515 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__CurrProc_2,
#line 515 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3,
#line 515 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4,
#line 515 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5,
#line 515 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6);

#line 465 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_proc_6_p_0(
#line 465 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 465 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ModuleInfo_9,
#line 465 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_22,
#line 465 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23,
#line 465 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24,
#line 465 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25);

#line 440 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_const_struct_args_5_p_0(
#line 440 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 440 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 440 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 440 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4,
#line 440 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5);

#line 409 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_refs_5_p_0(
#line 409 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 409 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 409 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 409 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4,
#line 409 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5);

#line 393 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim__find_type_ctor_info_5_p_0(
#line 393 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ModuleName_6,
#line 393 "dead_proc_elim.m"
  MR_String transform_hlds__dead_proc_elim__TypeName_7,
#line 393 "dead_proc_elim.m"
  MR_Integer transform_hlds__dead_proc_elim__TypeArity_8,
#line 393 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__4_4,
#line 393 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__Refs_11);

#line 332 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_6_p_0(
#line 332 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_22,
#line 332 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_0_23,
#line 332 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__AnalyzeWhat_9,
#line 332 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ModuleInfo_10,
#line 332 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24,
#line 332 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25);

#line 320 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__get_class_interface_pred_proc_5_p_0(
#line 320 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ClassProc_6,
#line 320 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_12,
#line 320 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_13,
#line 320 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_14,
#line 320 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_15);

#line 318 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0_1(
#line 318 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 318 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 318 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 318 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 318 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 318 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5);

#line 312 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0(
#line 312 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Class_6,
#line 312 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_10,
#line 312 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_11,
#line 312 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_12,
#line 312 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_13);

#line 309 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0_1(
#line 309 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 309 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 309 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 309 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 309 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 309 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5);

#line 296 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0(
#line 296 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Instance_6,
#line 296 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_20,
#line 296 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_21,
#line 296 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_22,
#line 296 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_23);

#line 294 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_p_0_2(
#line 294 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 294 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 294 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 294 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 294 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 294 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5);

#line 292 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_p_0_1(
#line 292 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 292 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 292 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 292 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 292 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 292 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5);

#line 284 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_p_0(
#line 284 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Classes_7,
#line 284 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Instances_8,
#line 284 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_14,
#line 284 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_15,
#line 284 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_16,
#line 284 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_17);

#line 250 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_type_ctor_infos_5_p_0(
#line 250 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 250 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 250 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 250 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4,
#line 250 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5);

#line 238 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_p_0(
#line 238 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 238 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 238 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 238 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4,
#line 238 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5);

#line 221 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_p_0(
#line 221 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 221 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 221 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 221 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4,
#line 221 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5);

#line 207 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_procs_6_p_0(
#line 207 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 207 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 207 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3,
#line 207 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4,
#line 207 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5,
#line 207 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6);

#line 194 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_preds_6_p_0(
#line 194 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 194 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 194 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3,
#line 194 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4,
#line 194 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5,
#line 194 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6);

#line 1044 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_4(
#line 1044 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1044 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1);

#line 1031 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_3(
#line 1031 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1031 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1031 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1031 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 1019 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_2(
#line 1019 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1019 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1019 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1019 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 1010 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_1(
#line 1010 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1010 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1010 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1010 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 1010 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 1010 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5);

#line 294 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_analyze_2_p_0_2(
#line 294 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 294 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 294 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 294 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 294 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 294 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5);

#line 292 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_analyze_2_p_0_1(
#line 292 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 292 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 292 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 292 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 292 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 292 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5);

#line 294 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_elim_4_p_0_2(
#line 294 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 294 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 294 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 294 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 294 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 294 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5);

#line 292 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_elim_4_p_0_1(
#line 292 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 292 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 292 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 292 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 292 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 292 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5);


static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_1[13][2];

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_2[18][3];

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_3[1][4];

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_4[4][8];

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_5[4][6];

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_6[3][7];

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_7[1][5];

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_8[2][1];

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_9[1][14];




static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_1[13][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__queue__queue__type_ctor_info_queue_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__queue__queue__type_ctor_info_queue_1)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is never called."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__dead_proc_elim_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__dead_proc_elim_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_2[18][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__dead_proc_elim__dead_proc_elim_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__dead_proc_elim__dead_proc_elim_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__dead_proc_elim__dead_proc_analyze_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__dead_proc_elim__dead_proc_analyze_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_4[3])),
    ((MR_Box) (transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_4[3])),
    ((MR_Box) (transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_5[3])),
    ((MR_Box) (transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 29)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_4[4][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0__plain_transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0__plain_transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0__plain_transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0__plain_transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0__plain_transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0__plain_transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0))
  },
};

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_5[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_6[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_elim_opt_imported_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_proc_elim_info_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_proc_elim_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_7[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_8[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_9[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_proc_elim_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "time.mh"
#include "time.mh"
#include "bitmap.mh"
#include "bitmap.mh"



#line 1711 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0 = {
  &mercury__queue__queue__type_ctor_info_queue_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0
  }
};

#line 1719 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0__plain_transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0,
    (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0
  }
};

#line 1728 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__queue__queue__type_ctor_info_queue_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1736 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1744 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1752 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1761 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1769 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 1778 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1786 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_analyze_what_0_0 = {
  (MR_String) "analyze_procs",
  (MR_Integer) 0
};

#line 1792 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_analyze_what_0_1 = {
  (MR_String) "analyze_all",
  (MR_Integer) 1
};

#line 1798 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_value_ordered_analyze_what_0[2] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_analyze_what_0_0,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_analyze_what_0_1
};

#line 1804 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_analyze_what_0[2] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_analyze_what_0_1,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_analyze_what_0_0
};

#line 1810 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_analyze_what_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1816 "transform_hlds.dead_proc_elim.c"
const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_analyze_what_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____analyze_what_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____analyze_what_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "analyze_what",
  {     transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_analyze_what_0 },
  {     transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_value_ordered_analyze_what_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_analyze_what_0
};

#line 1833 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1839 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_0 = {
  (MR_String) "entity_proc",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_0,
  NULL,
  NULL,
  NULL
};

#line 1854 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_1[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1860 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_1 = {
  (MR_String) "entity_table_struct",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_1,
  NULL,
  NULL,
  NULL
};

#line 1875 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_2[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1882 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_2 = {
  (MR_String) "entity_type_ctor",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_2,
  NULL,
  NULL,
  NULL
};

#line 1897 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1902 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_3 = {
  (MR_String) "entity_const_struct",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_3,
  NULL,
  NULL,
  NULL
};

#line 1917 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_0[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_0
};

#line 1922 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_1[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_1
};

#line 1927 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_2[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_2
};

#line 1932 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_3[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_3
};

#line 1937 "transform_hlds.dead_proc_elim.c"
static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_entity_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_3
  }
};

#line 1961 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_entity_0[4] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_3,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_0,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_1,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_2
};

#line 1969 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_entity_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 1977 "transform_hlds.dead_proc_elim.c"
const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____entity_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____entity_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "entity",
  {     transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_entity_0 },
  {     transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_entity_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_entity_0
};

#line 1994 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__ti_queue_1transform_hlds__dead_proc_elim__type_ctor_info_entity_0 = {
  &mercury__queue__queue__type_ctor_info_queue_1,
  {
    (MR_TypeInfo) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0
  }
};

#line 2002 "transform_hlds.dead_proc_elim.c"
const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_queue_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____entity_queue_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____entity_queue_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "entity_queue",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__queue__ti_queue_1transform_hlds__dead_proc_elim__type_ctor_info_entity_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2019 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1transform_hlds__dead_proc_elim__type_ctor_info_entity_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0
  }
};

#line 2027 "transform_hlds.dead_proc_elim.c"
const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_examined_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____examined_set_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____examined_set_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "examined_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1transform_hlds__dead_proc_elim__type_ctor_info_entity_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2044 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_0 = {
  (MR_String) "elim_opt_imported",
  (MR_Integer) 0
};

#line 2050 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_1 = {
  (MR_String) "do_not_elim_opt_imported",
  (MR_Integer) 1
};

#line 2056 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_value_ordered_maybe_elim_opt_imported_0[2] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_0,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_1
};

#line 2062 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_maybe_elim_opt_imported_0[2] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_1,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_0
};

#line 2068 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_elim_opt_imported_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2074 "transform_hlds.dead_proc_elim.c"
const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_elim_opt_imported_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____maybe_elim_opt_imported_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____maybe_elim_opt_imported_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "maybe_elim_opt_imported",
  {     transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_maybe_elim_opt_imported_0 },
  {     transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_value_ordered_maybe_elim_opt_imported_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_elim_opt_imported_0
};

#line 2091 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_maybe_needed_0_0 = {
  (MR_String) "not_eliminable",
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

#line 2106 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_maybe_needed_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2111 "transform_hlds.dead_proc_elim.c"
static const MR_ConstString transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_maybe_needed_0_1[1] = {
  (MR_String) "num_references"
};

#line 2116 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_maybe_needed_0_1 = {
  (MR_String) "maybe_eliminable",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_maybe_needed_0_1,
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_maybe_needed_0_1,
  NULL,
  NULL
};

#line 2131 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_maybe_needed_0_0[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_maybe_needed_0_0
};

#line 2136 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_maybe_needed_0_1[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_maybe_needed_0_1
};

#line 2141 "transform_hlds.dead_proc_elim.c"
static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_maybe_needed_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_maybe_needed_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_maybe_needed_0_1
  }
};

#line 2155 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_maybe_needed_0[2] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_maybe_needed_0_1,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_maybe_needed_0_0
};

#line 2161 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_needed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2167 "transform_hlds.dead_proc_elim.c"
const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____maybe_needed_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____maybe_needed_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "maybe_needed",
  {     transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_maybe_needed_0 },
  {     transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_maybe_needed_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_needed_0
};

#line 2184 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__ti_tree234_2transform_hlds__dead_proc_elim__type_ctor_info_entity_0transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0,
    (MR_TypeInfo) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0
  }
};

#line 2193 "transform_hlds.dead_proc_elim.c"
const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_needed_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____needed_map_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____needed_map_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "needed_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__tree234__ti_tree234_2transform_hlds__dead_proc_elim__type_ctor_info_entity_0transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2210 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__queue__queue__type_ctor_info_queue_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 2218 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 2226 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 2234 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_pred_elim_info_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 2243 "transform_hlds.dead_proc_elim.c"
static const MR_ConstString transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_pred_elim_info_0_0[5] = {
  (MR_String) "pred_elim_module_info",
  (MR_String) "pred_elim_queue",
  (MR_String) "pred_elim_examined",
  (MR_String) "pred_elim_needed_ids",
  (MR_String) "pred_elim_needed_named"
};

#line 2252 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_pred_elim_info_0_0 = {
  (MR_String) "pred_elim_info",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_pred_elim_info_0_0,
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_pred_elim_info_0_0,
  NULL,
  NULL
};

#line 2267 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_pred_elim_info_0_0[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_pred_elim_info_0_0
};

#line 2272 "transform_hlds.dead_proc_elim.c"
static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_pred_elim_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_pred_elim_info_0_0
  }
};

#line 2281 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_pred_elim_info_0[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_pred_elim_info_0_0
};

#line 2286 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_pred_elim_info_0[1] = {
  (MR_Integer) 0
};

#line 2291 "transform_hlds.dead_proc_elim.c"
const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____pred_elim_info_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____pred_elim_info_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "pred_elim_info",
  {     transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_pred_elim_info_0 },
  {     transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_pred_elim_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_pred_elim_info_0
};

#line 2308 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 2317 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2325 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_proc_elim_info_0_0[5] = {
  (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__tree234__ti_tree234_2transform_hlds__dead_proc_elim__type_ctor_info_entity_0transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 2334 "transform_hlds.dead_proc_elim.c"
static const MR_ConstString transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_proc_elim_info_0_0[5] = {
  (MR_String) "proc_elim_needed_map",
  (MR_String) "proc_elim_module_info",
  (MR_String) "proc_elim_pred_table",
  (MR_String) "proc_elim_changed",
  (MR_String) "proc_elim_warnings"
};

#line 2343 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_proc_elim_info_0_0 = {
  (MR_String) "proc_elim_info",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_proc_elim_info_0_0,
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_proc_elim_info_0_0,
  NULL,
  NULL
};

#line 2358 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_proc_elim_info_0_0[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_proc_elim_info_0_0
};

#line 2363 "transform_hlds.dead_proc_elim.c"
static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_proc_elim_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_proc_elim_info_0_0
  }
};

#line 2372 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_proc_elim_info_0[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_proc_elim_info_0_0
};

#line 2377 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_proc_elim_info_0[1] = {
  (MR_Integer) 0
};

#line 2382 "transform_hlds.dead_proc_elim.c"
const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_proc_elim_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____proc_elim_info_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____proc_elim_info_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "proc_elim_info",
  {     transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_proc_elim_info_0 },
  {     transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_proc_elim_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_proc_elim_info_0
};

#line 2399 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____analyze_what_0_0_10001(
#line 2402 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2404 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2)
#line 2406 "transform_hlds.dead_proc_elim.c"
{
#line 2408 "transform_hlds.dead_proc_elim.c"
  {
#line 2410 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 2413 "transform_hlds.dead_proc_elim.c"
    {
#line 2415 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim____Unify____analyze_what_0_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2));
    }
#line 2418 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 2420 "transform_hlds.dead_proc_elim.c"
  }
#line 2422 "transform_hlds.dead_proc_elim.c"
}

#line 2425 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____analyze_what_0_0_10001(
#line 2428 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2430 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 2432 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 2434 "transform_hlds.dead_proc_elim.c"
{
#line 2436 "transform_hlds.dead_proc_elim.c"
  {
#line 2438 "transform_hlds.dead_proc_elim.c"
    MR_Word transform_hlds__dead_proc_elim__conv0_HeadVar__1_1;

#line 2441 "transform_hlds.dead_proc_elim.c"
    {
#line 2443 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim____Compare____analyze_what_0_0(&transform_hlds__dead_proc_elim__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_3));
    }
#line 2446 "transform_hlds.dead_proc_elim.c"
    *transform_hlds__dead_proc_elim__wrapper_arg_1 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_HeadVar__1_1));
#line 2448 "transform_hlds.dead_proc_elim.c"
  }
#line 2450 "transform_hlds.dead_proc_elim.c"
}

#line 2453 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____entity_0_0_10001(
#line 2456 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2458 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2)
#line 2460 "transform_hlds.dead_proc_elim.c"
{
#line 2462 "transform_hlds.dead_proc_elim.c"
  {
#line 2464 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 2467 "transform_hlds.dead_proc_elim.c"
    {
#line 2469 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim____Unify____entity_0_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2));
    }
#line 2472 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 2474 "transform_hlds.dead_proc_elim.c"
  }
#line 2476 "transform_hlds.dead_proc_elim.c"
}

#line 2479 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____entity_0_0_10001(
#line 2482 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2484 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 2486 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 2488 "transform_hlds.dead_proc_elim.c"
{
#line 2490 "transform_hlds.dead_proc_elim.c"
  {
#line 2492 "transform_hlds.dead_proc_elim.c"
    MR_Word transform_hlds__dead_proc_elim__conv0_HeadVar__1_1;

#line 2495 "transform_hlds.dead_proc_elim.c"
    {
#line 2497 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim____Compare____entity_0_0(&transform_hlds__dead_proc_elim__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_3));
    }
#line 2500 "transform_hlds.dead_proc_elim.c"
    *transform_hlds__dead_proc_elim__wrapper_arg_1 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_HeadVar__1_1));
#line 2502 "transform_hlds.dead_proc_elim.c"
  }
#line 2504 "transform_hlds.dead_proc_elim.c"
}

#line 2507 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____entity_queue_0_0_10001(
#line 2510 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2512 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2)
#line 2514 "transform_hlds.dead_proc_elim.c"
{
#line 2516 "transform_hlds.dead_proc_elim.c"
  {
#line 2518 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 2521 "transform_hlds.dead_proc_elim.c"
    {
#line 2523 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim____Unify____entity_queue_0_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2));
    }
#line 2526 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 2528 "transform_hlds.dead_proc_elim.c"
  }
#line 2530 "transform_hlds.dead_proc_elim.c"
}

#line 2533 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____entity_queue_0_0_10001(
#line 2536 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2538 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 2540 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 2542 "transform_hlds.dead_proc_elim.c"
{
#line 2544 "transform_hlds.dead_proc_elim.c"
  {
#line 2546 "transform_hlds.dead_proc_elim.c"
    MR_Word transform_hlds__dead_proc_elim__conv0_HeadVar__1_1;

#line 2549 "transform_hlds.dead_proc_elim.c"
    {
#line 2551 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim____Compare____entity_queue_0_0(&transform_hlds__dead_proc_elim__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_3));
    }
#line 2554 "transform_hlds.dead_proc_elim.c"
    *transform_hlds__dead_proc_elim__wrapper_arg_1 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_HeadVar__1_1));
#line 2556 "transform_hlds.dead_proc_elim.c"
  }
#line 2558 "transform_hlds.dead_proc_elim.c"
}

#line 2561 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____examined_set_0_0_10001(
#line 2564 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2566 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2)
#line 2568 "transform_hlds.dead_proc_elim.c"
{
#line 2570 "transform_hlds.dead_proc_elim.c"
  {
#line 2572 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 2575 "transform_hlds.dead_proc_elim.c"
    {
#line 2577 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim____Unify____examined_set_0_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2));
    }
#line 2580 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 2582 "transform_hlds.dead_proc_elim.c"
  }
#line 2584 "transform_hlds.dead_proc_elim.c"
}

#line 2587 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____examined_set_0_0_10001(
#line 2590 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2592 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 2594 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 2596 "transform_hlds.dead_proc_elim.c"
{
#line 2598 "transform_hlds.dead_proc_elim.c"
  {
#line 2600 "transform_hlds.dead_proc_elim.c"
    MR_Word transform_hlds__dead_proc_elim__conv0_HeadVar__1_1;

#line 2603 "transform_hlds.dead_proc_elim.c"
    {
#line 2605 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim____Compare____examined_set_0_0(&transform_hlds__dead_proc_elim__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_3));
    }
#line 2608 "transform_hlds.dead_proc_elim.c"
    *transform_hlds__dead_proc_elim__wrapper_arg_1 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_HeadVar__1_1));
#line 2610 "transform_hlds.dead_proc_elim.c"
  }
#line 2612 "transform_hlds.dead_proc_elim.c"
}

#line 2615 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_elim_opt_imported_0_0_10001(
#line 2618 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2620 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2)
#line 2622 "transform_hlds.dead_proc_elim.c"
{
#line 2624 "transform_hlds.dead_proc_elim.c"
  {
#line 2626 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 2629 "transform_hlds.dead_proc_elim.c"
    {
#line 2631 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim____Unify____maybe_elim_opt_imported_0_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2));
    }
#line 2634 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 2636 "transform_hlds.dead_proc_elim.c"
  }
#line 2638 "transform_hlds.dead_proc_elim.c"
}

#line 2641 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_elim_opt_imported_0_0_10001(
#line 2644 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2646 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 2648 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 2650 "transform_hlds.dead_proc_elim.c"
{
#line 2652 "transform_hlds.dead_proc_elim.c"
  {
#line 2654 "transform_hlds.dead_proc_elim.c"
    MR_Word transform_hlds__dead_proc_elim__conv0_HeadVar__1_1;

#line 2657 "transform_hlds.dead_proc_elim.c"
    {
#line 2659 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim____Compare____maybe_elim_opt_imported_0_0(&transform_hlds__dead_proc_elim__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_3));
    }
#line 2662 "transform_hlds.dead_proc_elim.c"
    *transform_hlds__dead_proc_elim__wrapper_arg_1 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_HeadVar__1_1));
#line 2664 "transform_hlds.dead_proc_elim.c"
  }
#line 2666 "transform_hlds.dead_proc_elim.c"
}

#line 2669 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_needed_0_0_10001(
#line 2672 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2674 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2)
#line 2676 "transform_hlds.dead_proc_elim.c"
{
#line 2678 "transform_hlds.dead_proc_elim.c"
  {
#line 2680 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 2683 "transform_hlds.dead_proc_elim.c"
    {
#line 2685 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim____Unify____maybe_needed_0_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2));
    }
#line 2688 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 2690 "transform_hlds.dead_proc_elim.c"
  }
#line 2692 "transform_hlds.dead_proc_elim.c"
}

#line 2695 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_needed_0_0_10001(
#line 2698 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2700 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 2702 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 2704 "transform_hlds.dead_proc_elim.c"
{
#line 2706 "transform_hlds.dead_proc_elim.c"
  {
#line 2708 "transform_hlds.dead_proc_elim.c"
    MR_Word transform_hlds__dead_proc_elim__conv0_HeadVar__1_1;

#line 2711 "transform_hlds.dead_proc_elim.c"
    {
#line 2713 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim____Compare____maybe_needed_0_0(&transform_hlds__dead_proc_elim__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_3));
    }
#line 2716 "transform_hlds.dead_proc_elim.c"
    *transform_hlds__dead_proc_elim__wrapper_arg_1 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_HeadVar__1_1));
#line 2718 "transform_hlds.dead_proc_elim.c"
  }
#line 2720 "transform_hlds.dead_proc_elim.c"
}

#line 2723 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____needed_map_0_0_10001(
#line 2726 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2728 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2)
#line 2730 "transform_hlds.dead_proc_elim.c"
{
#line 2732 "transform_hlds.dead_proc_elim.c"
  {
#line 2734 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 2737 "transform_hlds.dead_proc_elim.c"
    {
#line 2739 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim____Unify____needed_map_0_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2));
    }
#line 2742 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 2744 "transform_hlds.dead_proc_elim.c"
  }
#line 2746 "transform_hlds.dead_proc_elim.c"
}

#line 2749 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____needed_map_0_0_10001(
#line 2752 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2754 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 2756 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 2758 "transform_hlds.dead_proc_elim.c"
{
#line 2760 "transform_hlds.dead_proc_elim.c"
  {
#line 2762 "transform_hlds.dead_proc_elim.c"
    MR_Word transform_hlds__dead_proc_elim__conv0_HeadVar__1_1;

#line 2765 "transform_hlds.dead_proc_elim.c"
    {
#line 2767 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim____Compare____needed_map_0_0(&transform_hlds__dead_proc_elim__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_3));
    }
#line 2770 "transform_hlds.dead_proc_elim.c"
    *transform_hlds__dead_proc_elim__wrapper_arg_1 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_HeadVar__1_1));
#line 2772 "transform_hlds.dead_proc_elim.c"
  }
#line 2774 "transform_hlds.dead_proc_elim.c"
}

#line 2777 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____pred_elim_info_0_0_10001(
#line 2780 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2782 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2)
#line 2784 "transform_hlds.dead_proc_elim.c"
{
#line 2786 "transform_hlds.dead_proc_elim.c"
  {
#line 2788 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 2791 "transform_hlds.dead_proc_elim.c"
    {
#line 2793 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim____Unify____pred_elim_info_0_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2));
    }
#line 2796 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 2798 "transform_hlds.dead_proc_elim.c"
  }
#line 2800 "transform_hlds.dead_proc_elim.c"
}

#line 2803 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____pred_elim_info_0_0_10001(
#line 2806 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2808 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 2810 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 2812 "transform_hlds.dead_proc_elim.c"
{
#line 2814 "transform_hlds.dead_proc_elim.c"
  {
#line 2816 "transform_hlds.dead_proc_elim.c"
    MR_Word transform_hlds__dead_proc_elim__conv0_HeadVar__1_1;

#line 2819 "transform_hlds.dead_proc_elim.c"
    {
#line 2821 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim____Compare____pred_elim_info_0_0(&transform_hlds__dead_proc_elim__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_3));
    }
#line 2824 "transform_hlds.dead_proc_elim.c"
    *transform_hlds__dead_proc_elim__wrapper_arg_1 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_HeadVar__1_1));
#line 2826 "transform_hlds.dead_proc_elim.c"
  }
#line 2828 "transform_hlds.dead_proc_elim.c"
}

#line 2831 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____proc_elim_info_0_0_10001(
#line 2834 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2836 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2)
#line 2838 "transform_hlds.dead_proc_elim.c"
{
#line 2840 "transform_hlds.dead_proc_elim.c"
  {
#line 2842 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 2845 "transform_hlds.dead_proc_elim.c"
    {
#line 2847 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim____Unify____proc_elim_info_0_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2));
    }
#line 2850 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 2852 "transform_hlds.dead_proc_elim.c"
  }
#line 2854 "transform_hlds.dead_proc_elim.c"
}

#line 2857 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____proc_elim_info_0_0_10001(
#line 2860 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2862 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 2864 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 2866 "transform_hlds.dead_proc_elim.c"
{
#line 2868 "transform_hlds.dead_proc_elim.c"
  {
#line 2870 "transform_hlds.dead_proc_elim.c"
    MR_Word transform_hlds__dead_proc_elim__conv0_HeadVar__1_1;

#line 2873 "transform_hlds.dead_proc_elim.c"
    {
#line 2875 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim____Compare____proc_elim_info_0_0(&transform_hlds__dead_proc_elim__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_3));
    }
#line 2878 "transform_hlds.dead_proc_elim.c"
    *transform_hlds__dead_proc_elim__wrapper_arg_1 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_HeadVar__1_1));
#line 2880 "transform_hlds.dead_proc_elim.c"
  }
#line 2882 "transform_hlds.dead_proc_elim.c"
}

#line 847 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_proc_eliminate_pred__847__1_4_p_0(
#line 847 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ProcTable0_57,
#line 847 "dead_proc_elim.m"
  MR_Integer transform_hlds__dead_proc_elim__HeadVar__2_42,
#line 847 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_43,
#line 847 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__4_44)
#line 847 "dead_proc_elim.m"
{
#line 847 "dead_proc_elim.m"
  {
#line 847 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 847 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_81_81 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 847 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_82_82 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 847 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ProcInfo0_30;
#line 847 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ProcInfo_31;
#line 847 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_45_45;
#line 849 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv0_ProcInfo0_30;

#line 849 "dead_proc_elim.m"
    {
#line 849 "dead_proc_elim.m"
      mercury__map__lookup_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_81_81, transform_hlds__dead_proc_elim__TypeCtorInfo_82_82, transform_hlds__dead_proc_elim__ProcTable0_57, ((MR_Box) (transform_hlds__dead_proc_elim__HeadVar__2_42)), &transform_hlds__dead_proc_elim__conv0_ProcInfo0_30);
    }
#line 849 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__ProcInfo0_30 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_ProcInfo0_30);
#line 850 "dead_proc_elim.m"
    {
#line 850 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__V_45_45 = hlds__make_goal__true_goal_0_f_0();
    }
#line 850 "dead_proc_elim.m"
    {
#line 850 "dead_proc_elim.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__dead_proc_elim__V_45_45, transform_hlds__dead_proc_elim__ProcInfo0_30, &transform_hlds__dead_proc_elim__ProcInfo_31);
    }
#line 851 "dead_proc_elim.m"
    {
#line 851 "dead_proc_elim.m"
      mercury__map__det_update_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_81_81, transform_hlds__dead_proc_elim__TypeCtorInfo_82_82, ((MR_Box) (transform_hlds__dead_proc_elim__HeadVar__2_42)), ((MR_Box) (transform_hlds__dead_proc_elim__ProcInfo_31)), transform_hlds__dead_proc_elim__HeadVar__3_43, transform_hlds__dead_proc_elim__HeadVar__4_44);
#line 851 "dead_proc_elim.m"
      return;
    }
#line 847 "dead_proc_elim.m"
  }
#line 847 "dead_proc_elim.m"
}

#line 1044 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__1044__1_2_p_0(
#line 1044 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__NeededPreds_38,
#line 1044 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_80)
#line 1044 "dead_proc_elim.m"
{
#line 1044 "dead_proc_elim.m"
  {
#line 1044 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 1044 "dead_proc_elim.m"
    {
#line 1044 "dead_proc_elim.m"
      return transform_hlds__dead_proc_elim__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__dead_proc_elim__NeededPreds_38, ((MR_Box) (transform_hlds__dead_proc_elim__HeadVar__2_80)));
    }
#line 1044 "dead_proc_elim.m"
    return transform_hlds__dead_proc_elim__succeeded;
#line 1044 "dead_proc_elim.m"
  }
#line 1044 "dead_proc_elim.m"
}

#line 1034 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__1034__1_4_p_0(
#line 1034 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__SpecMap0_31,
#line 1034 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_51,
#line 1034 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_52,
#line 1034 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__4_53)
#line 1034 "dead_proc_elim.m"
{
#line 1034 "dead_proc_elim.m"
  {
#line 1034 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 1034 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__NewNeededPreds_37;
#line 1032 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv0_NewNeededPreds_37;

#line 1032 "dead_proc_elim.m"
    {
#line 1032 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[2], transform_hlds__dead_proc_elim__SpecMap0_31, ((MR_Box) (transform_hlds__dead_proc_elim__HeadVar__2_51)), &transform_hlds__dead_proc_elim__conv0_NewNeededPreds_37);
    }
#line 1032 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 1032 "dead_proc_elim.m"
      {
#line 1032 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__NewNeededPreds_37 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_NewNeededPreds_37);
#line 1032 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 1032 "dead_proc_elim.m"
      }
#line 1034 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 1033 "dead_proc_elim.m"
      {
#line 1033 "dead_proc_elim.m"
        {
#line 1033 "dead_proc_elim.m"
          mercury__set_tree234__insert_list_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__dead_proc_elim__NewNeededPreds_37, transform_hlds__dead_proc_elim__HeadVar__3_52, transform_hlds__dead_proc_elim__HeadVar__4_53);
#line 1033 "dead_proc_elim.m"
          return;
        }
#line 1033 "dead_proc_elim.m"
      }
#line 1034 "dead_proc_elim.m"
    else
#line 1035 "dead_proc_elim.m"
      *transform_hlds__dead_proc_elim__HeadVar__4_53 = transform_hlds__dead_proc_elim__HeadVar__3_52;
#line 1034 "dead_proc_elim.m"
  }
#line 1034 "dead_proc_elim.m"
}

#line 714 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____proc_elim_info_0_0(
#line 714 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 714 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 714 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_3)
#line 714 "dead_proc_elim.m"
{
#line 714 "dead_proc_elim.m"
  {
#line 714 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 714 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastX_18 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__2_2;
#line 714 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastY_19 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__3_3;

#line 714 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__CastX_18 == transform_hlds__dead_proc_elim__CastY_19);
#line 714 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 3053 "transform_hlds.dead_proc_elim.c"
      *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 0;
#line 714 "dead_proc_elim.m"
    else
#line 714 "dead_proc_elim.m"
      {
#line 714 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));
#line 714 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 1)));
#line 714 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 2)));
#line 714 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 3)));
#line 714 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 4)));
#line 714 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 0)));
#line 714 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 1)));
#line 714 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 2)));
#line 714 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 3)));
#line 714 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 4)));
#line 714 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_14_14;

#line 714 "dead_proc_elim.m"
        {
#line 714 "dead_proc_elim.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[0], &transform_hlds__dead_proc_elim__V_14_14, ((MR_Box) (transform_hlds__dead_proc_elim__V_4_4)), ((MR_Box) (transform_hlds__dead_proc_elim__V_9_9)));
        }
#line 3087 "transform_hlds.dead_proc_elim.c"
        transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_14_14 == (MR_Integer) 0);
#line 714 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 714 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 714 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__V_14_14;
#line 714 "dead_proc_elim.m"
        else
#line 714 "dead_proc_elim.m"
          {
#line 714 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_15_15;

#line 714 "dead_proc_elim.m"
            {
#line 714 "dead_proc_elim.m"
              hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__dead_proc_elim__V_15_15, transform_hlds__dead_proc_elim__V_5_5, transform_hlds__dead_proc_elim__V_10_10);
            }
#line 3107 "transform_hlds.dead_proc_elim.c"
            transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_15_15 == (MR_Integer) 0);
#line 714 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 714 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 714 "dead_proc_elim.m"
              *transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__V_15_15;
#line 714 "dead_proc_elim.m"
            else
#line 714 "dead_proc_elim.m"
              {
#line 714 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__V_16_16;

#line 714 "dead_proc_elim.m"
                {
#line 714 "dead_proc_elim.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[2], &transform_hlds__dead_proc_elim__V_16_16, ((MR_Box) (transform_hlds__dead_proc_elim__V_6_6)), ((MR_Box) (transform_hlds__dead_proc_elim__V_11_11)));
                }
#line 3127 "transform_hlds.dead_proc_elim.c"
                transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_16_16 == (MR_Integer) 0);
#line 714 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 714 "dead_proc_elim.m"
                if (transform_hlds__dead_proc_elim__succeeded)
#line 714 "dead_proc_elim.m"
                  *transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__V_16_16;
#line 714 "dead_proc_elim.m"
                else
#line 714 "dead_proc_elim.m"
                  {
#line 714 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__V_17_17;
#line 714 "dead_proc_elim.m"
                    MR_Integer transform_hlds__dead_proc_elim__V_25_25 = (MR_Integer) transform_hlds__dead_proc_elim__V_7_7;
#line 714 "dead_proc_elim.m"
                    MR_Integer transform_hlds__dead_proc_elim__V_26_26 = (MR_Integer) transform_hlds__dead_proc_elim__V_12_12;

#line 714 "dead_proc_elim.m"
                    {
#line 714 "dead_proc_elim.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__dead_proc_elim__V_17_17, transform_hlds__dead_proc_elim__V_25_25, transform_hlds__dead_proc_elim__V_26_26);
                    }
#line 3151 "transform_hlds.dead_proc_elim.c"
                    transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_17_17 == (MR_Integer) 0);
#line 714 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 714 "dead_proc_elim.m"
                    if (transform_hlds__dead_proc_elim__succeeded)
#line 714 "dead_proc_elim.m"
                      *transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__V_17_17;
#line 714 "dead_proc_elim.m"
                    else
#line 714 "dead_proc_elim.m"
                      {
#line 714 "dead_proc_elim.m"
                        {
#line 714 "dead_proc_elim.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[5], transform_hlds__dead_proc_elim__HeadVar__1_1, ((MR_Box) (transform_hlds__dead_proc_elim__V_8_8)), ((MR_Box) (transform_hlds__dead_proc_elim__V_13_13)));
#line 714 "dead_proc_elim.m"
                          return;
                        }
#line 714 "dead_proc_elim.m"
                      }
#line 714 "dead_proc_elim.m"
                  }
#line 714 "dead_proc_elim.m"
              }
#line 714 "dead_proc_elim.m"
          }
#line 714 "dead_proc_elim.m"
      }
#line 714 "dead_proc_elim.m"
  }
#line 714 "dead_proc_elim.m"
}

#line 714 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____proc_elim_info_0_0(
#line 714 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 714 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2)
#line 714 "dead_proc_elim.m"
{
#line 714 "dead_proc_elim.m"
  {
#line 714 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 714 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastX_13 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__1_1;
#line 714 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastY_14 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__2_2;

#line 714 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__CastX_13 == transform_hlds__dead_proc_elim__CastY_14);
#line 714 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 714 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 714 "dead_proc_elim.m"
    else
#line 714 "dead_proc_elim.m"
      {
#line 714 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeInfo_17_17;
#line 714 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeInfo_18_18;
#line 714 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 714 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 714 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 2)));
#line 714 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 3)));
#line 714 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 4)));
#line 714 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));
#line 714 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 1)));
#line 714 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 2)));
#line 714 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 3)));
#line 714 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 4)));

#line 3238 "transform_hlds.dead_proc_elim.c"
        {
#line 3240 "transform_hlds.dead_proc_elim.c"
          transform_hlds__dead_proc_elim__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[0], ((MR_Box) (transform_hlds__dead_proc_elim__V_3_3)), ((MR_Box) (transform_hlds__dead_proc_elim__V_8_8)));
        }
#line 714 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 714 "dead_proc_elim.m"
          {
#line 3247 "transform_hlds.dead_proc_elim.c"
            {
#line 3249 "transform_hlds.dead_proc_elim.c"
              transform_hlds__dead_proc_elim__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__dead_proc_elim__V_4_4, transform_hlds__dead_proc_elim__V_9_9);
            }
#line 714 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 714 "dead_proc_elim.m"
              {
#line 3256 "transform_hlds.dead_proc_elim.c"
                transform_hlds__dead_proc_elim__TypeInfo_17_17 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[2];
#line 3258 "transform_hlds.dead_proc_elim.c"
                {
#line 3260 "transform_hlds.dead_proc_elim.c"
                  transform_hlds__dead_proc_elim__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__dead_proc_elim__TypeInfo_17_17, ((MR_Box) (transform_hlds__dead_proc_elim__V_5_5)), ((MR_Box) (transform_hlds__dead_proc_elim__V_10_10)));
                }
#line 714 "dead_proc_elim.m"
                if (transform_hlds__dead_proc_elim__succeeded)
#line 714 "dead_proc_elim.m"
                  {
#line 3267 "transform_hlds.dead_proc_elim.c"
                    transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_6_6 == transform_hlds__dead_proc_elim__V_11_11);
#line 714 "dead_proc_elim.m"
                    if (transform_hlds__dead_proc_elim__succeeded)
#line 714 "dead_proc_elim.m"
                      {
#line 3273 "transform_hlds.dead_proc_elim.c"
                        transform_hlds__dead_proc_elim__TypeInfo_18_18 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[5];
#line 3275 "transform_hlds.dead_proc_elim.c"
                        {
#line 3277 "transform_hlds.dead_proc_elim.c"
                          return transform_hlds__dead_proc_elim__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__dead_proc_elim__TypeInfo_18_18, ((MR_Box) (transform_hlds__dead_proc_elim__V_7_7)), ((MR_Box) (transform_hlds__dead_proc_elim__V_12_12)));
                        }
#line 714 "dead_proc_elim.m"
                      }
#line 714 "dead_proc_elim.m"
                  }
#line 714 "dead_proc_elim.m"
              }
#line 714 "dead_proc_elim.m"
          }
#line 714 "dead_proc_elim.m"
      }
#line 714 "dead_proc_elim.m"
    return transform_hlds__dead_proc_elim__succeeded;
#line 714 "dead_proc_elim.m"
  }
#line 714 "dead_proc_elim.m"
}

#line 978 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____pred_elim_info_0_0(
#line 978 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 978 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 978 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_3)
#line 978 "dead_proc_elim.m"
{
#line 978 "dead_proc_elim.m"
  {
#line 978 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 978 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastX_18 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__2_2;
#line 978 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastY_19 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__3_3;

#line 978 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__CastX_18 == transform_hlds__dead_proc_elim__CastY_19);
#line 978 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 3321 "transform_hlds.dead_proc_elim.c"
      *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 0;
#line 978 "dead_proc_elim.m"
    else
#line 978 "dead_proc_elim.m"
      {
#line 978 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));
#line 978 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 1)));
#line 978 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 2)));
#line 978 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 3)));
#line 978 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 4)));
#line 978 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 0)));
#line 978 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 1)));
#line 978 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 2)));
#line 978 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 3)));
#line 978 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 4)));
#line 978 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_14_14;

#line 978 "dead_proc_elim.m"
        {
#line 978 "dead_proc_elim.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__dead_proc_elim__V_14_14, transform_hlds__dead_proc_elim__V_4_4, transform_hlds__dead_proc_elim__V_9_9);
        }
#line 3355 "transform_hlds.dead_proc_elim.c"
        transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_14_14 == (MR_Integer) 0);
#line 978 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 978 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 978 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__V_14_14;
#line 978 "dead_proc_elim.m"
        else
#line 978 "dead_proc_elim.m"
          {
#line 978 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_15_15;

#line 978 "dead_proc_elim.m"
            {
#line 978 "dead_proc_elim.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[0], &transform_hlds__dead_proc_elim__V_15_15, ((MR_Box) (transform_hlds__dead_proc_elim__V_5_5)), ((MR_Box) (transform_hlds__dead_proc_elim__V_10_10)));
            }
#line 3375 "transform_hlds.dead_proc_elim.c"
            transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_15_15 == (MR_Integer) 0);
#line 978 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 978 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 978 "dead_proc_elim.m"
              *transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__V_15_15;
#line 978 "dead_proc_elim.m"
            else
#line 978 "dead_proc_elim.m"
              {
#line 978 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__V_16_16;

#line 978 "dead_proc_elim.m"
                {
#line 978 "dead_proc_elim.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[1], &transform_hlds__dead_proc_elim__V_16_16, ((MR_Box) (transform_hlds__dead_proc_elim__V_6_6)), ((MR_Box) (transform_hlds__dead_proc_elim__V_11_11)));
                }
#line 3395 "transform_hlds.dead_proc_elim.c"
                transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_16_16 == (MR_Integer) 0);
#line 978 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 978 "dead_proc_elim.m"
                if (transform_hlds__dead_proc_elim__succeeded)
#line 978 "dead_proc_elim.m"
                  *transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__V_16_16;
#line 978 "dead_proc_elim.m"
                else
#line 978 "dead_proc_elim.m"
                  {
#line 978 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__V_17_17;

#line 978 "dead_proc_elim.m"
                    {
#line 978 "dead_proc_elim.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[1], &transform_hlds__dead_proc_elim__V_17_17, ((MR_Box) (transform_hlds__dead_proc_elim__V_7_7)), ((MR_Box) (transform_hlds__dead_proc_elim__V_12_12)));
                    }
#line 3415 "transform_hlds.dead_proc_elim.c"
                    transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_17_17 == (MR_Integer) 0);
#line 978 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 978 "dead_proc_elim.m"
                    if (transform_hlds__dead_proc_elim__succeeded)
#line 978 "dead_proc_elim.m"
                      *transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__V_17_17;
#line 978 "dead_proc_elim.m"
                    else
#line 978 "dead_proc_elim.m"
                      {
#line 978 "dead_proc_elim.m"
                        {
#line 978 "dead_proc_elim.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[7], transform_hlds__dead_proc_elim__HeadVar__1_1, ((MR_Box) (transform_hlds__dead_proc_elim__V_8_8)), ((MR_Box) (transform_hlds__dead_proc_elim__V_13_13)));
#line 978 "dead_proc_elim.m"
                          return;
                        }
#line 978 "dead_proc_elim.m"
                      }
#line 978 "dead_proc_elim.m"
                  }
#line 978 "dead_proc_elim.m"
              }
#line 978 "dead_proc_elim.m"
          }
#line 978 "dead_proc_elim.m"
      }
#line 978 "dead_proc_elim.m"
  }
#line 978 "dead_proc_elim.m"
}

#line 978 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____pred_elim_info_0_0(
#line 978 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 978 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2)
#line 978 "dead_proc_elim.m"
{
#line 978 "dead_proc_elim.m"
  {
#line 978 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 978 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastX_13 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__1_1;
#line 978 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastY_14 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__2_2;

#line 978 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__CastX_13 == transform_hlds__dead_proc_elim__CastY_14);
#line 978 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 978 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 978 "dead_proc_elim.m"
    else
#line 978 "dead_proc_elim.m"
      {
#line 978 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeInfo_16_16;
#line 978 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeInfo_17_17;
#line 978 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeInfo_18_18;
#line 978 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeInfo_19_19;
#line 978 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 978 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 978 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 2)));
#line 978 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 3)));
#line 978 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 4)));
#line 978 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));
#line 978 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 1)));
#line 978 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 2)));
#line 978 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 3)));
#line 978 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 4)));

#line 3506 "transform_hlds.dead_proc_elim.c"
        {
#line 3508 "transform_hlds.dead_proc_elim.c"
          transform_hlds__dead_proc_elim__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__dead_proc_elim__V_3_3, transform_hlds__dead_proc_elim__V_8_8);
        }
#line 978 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 978 "dead_proc_elim.m"
          {
#line 3515 "transform_hlds.dead_proc_elim.c"
            transform_hlds__dead_proc_elim__TypeInfo_16_16 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[0];
#line 3517 "transform_hlds.dead_proc_elim.c"
            {
#line 3519 "transform_hlds.dead_proc_elim.c"
              transform_hlds__dead_proc_elim__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__dead_proc_elim__TypeInfo_16_16, ((MR_Box) (transform_hlds__dead_proc_elim__V_4_4)), ((MR_Box) (transform_hlds__dead_proc_elim__V_9_9)));
            }
#line 978 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 978 "dead_proc_elim.m"
              {
#line 3526 "transform_hlds.dead_proc_elim.c"
                transform_hlds__dead_proc_elim__TypeInfo_17_17 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[1];
#line 3528 "transform_hlds.dead_proc_elim.c"
                {
#line 3530 "transform_hlds.dead_proc_elim.c"
                  transform_hlds__dead_proc_elim__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__dead_proc_elim__TypeInfo_17_17, ((MR_Box) (transform_hlds__dead_proc_elim__V_5_5)), ((MR_Box) (transform_hlds__dead_proc_elim__V_10_10)));
                }
#line 978 "dead_proc_elim.m"
                if (transform_hlds__dead_proc_elim__succeeded)
#line 978 "dead_proc_elim.m"
                  {
#line 3537 "transform_hlds.dead_proc_elim.c"
                    transform_hlds__dead_proc_elim__TypeInfo_18_18 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[1];
#line 3539 "transform_hlds.dead_proc_elim.c"
                    {
#line 3541 "transform_hlds.dead_proc_elim.c"
                      transform_hlds__dead_proc_elim__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__dead_proc_elim__TypeInfo_18_18, ((MR_Box) (transform_hlds__dead_proc_elim__V_6_6)), ((MR_Box) (transform_hlds__dead_proc_elim__V_11_11)));
                    }
#line 978 "dead_proc_elim.m"
                    if (transform_hlds__dead_proc_elim__succeeded)
#line 978 "dead_proc_elim.m"
                      {
#line 3548 "transform_hlds.dead_proc_elim.c"
                        transform_hlds__dead_proc_elim__TypeInfo_19_19 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[7];
#line 3550 "transform_hlds.dead_proc_elim.c"
                        {
#line 3552 "transform_hlds.dead_proc_elim.c"
                          return transform_hlds__dead_proc_elim__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__dead_proc_elim__TypeInfo_19_19, ((MR_Box) (transform_hlds__dead_proc_elim__V_7_7)), ((MR_Box) (transform_hlds__dead_proc_elim__V_12_12)));
                        }
#line 978 "dead_proc_elim.m"
                      }
#line 978 "dead_proc_elim.m"
                  }
#line 978 "dead_proc_elim.m"
              }
#line 978 "dead_proc_elim.m"
          }
#line 978 "dead_proc_elim.m"
      }
#line 978 "dead_proc_elim.m"
    return transform_hlds__dead_proc_elim__succeeded;
#line 978 "dead_proc_elim.m"
  }
#line 978 "dead_proc_elim.m"
}

#line 49 "dead_proc_elim.m"
void MR_CALL 
transform_hlds__dead_proc_elim____Compare____needed_map_0_0(
#line 49 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 49 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 49 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_3)
#line 49 "dead_proc_elim.m"
{
#line 49 "dead_proc_elim.m"
  {
#line 49 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 49 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Cast_HeadVar1_4 = transform_hlds__dead_proc_elim__HeadVar__2_2;
#line 49 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Cast_HeadVar2_5 = transform_hlds__dead_proc_elim__HeadVar__3_3;

#line 49 "dead_proc_elim.m"
    {
#line 49 "dead_proc_elim.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[0], transform_hlds__dead_proc_elim__HeadVar__1_1, ((MR_Box) (transform_hlds__dead_proc_elim__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__dead_proc_elim__Cast_HeadVar2_5)));
#line 49 "dead_proc_elim.m"
      return;
    }
#line 49 "dead_proc_elim.m"
  }
#line 49 "dead_proc_elim.m"
}

#line 49 "dead_proc_elim.m"
MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____needed_map_0_0(
#line 49 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 49 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2)
#line 49 "dead_proc_elim.m"
{
#line 49 "dead_proc_elim.m"
  {
#line 49 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 49 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Cast_HeadVar1_3 = transform_hlds__dead_proc_elim__HeadVar__1_1;
#line 49 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Cast_HeadVar2_4 = transform_hlds__dead_proc_elim__HeadVar__2_2;

#line 49 "dead_proc_elim.m"
    {
#line 49 "dead_proc_elim.m"
      return transform_hlds__dead_proc_elim__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[0], ((MR_Box) (transform_hlds__dead_proc_elim__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__dead_proc_elim__Cast_HeadVar2_4)));
    }
#line 49 "dead_proc_elim.m"
    return transform_hlds__dead_proc_elim__succeeded;
#line 49 "dead_proc_elim.m"
  }
#line 49 "dead_proc_elim.m"
}

#line 57 "dead_proc_elim.m"
void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_needed_0_0(
#line 57 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 57 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 57 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_3)
#line 57 "dead_proc_elim.m"
{
#line 57 "dead_proc_elim.m"
  {
#line 57 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 57 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastX_8 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__2_2;
#line 57 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastY_9 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__3_3;

#line 57 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__CastX_8 == transform_hlds__dead_proc_elim__CastY_9);
#line 57 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 3658 "transform_hlds.dead_proc_elim.c"
      *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 0;
#line 57 "dead_proc_elim.m"
    else
#line 57 "dead_proc_elim.m"
    if ((transform_hlds__dead_proc_elim__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 57 "dead_proc_elim.m"
      if ((transform_hlds__dead_proc_elim__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 57 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 0;
#line 57 "dead_proc_elim.m"
      else
#line 3670 "transform_hlds.dead_proc_elim.c"
        *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "dead_proc_elim.m"
    else
#line 57 "dead_proc_elim.m"
      {
#line 57 "dead_proc_elim.m"
        MR_Integer transform_hlds__dead_proc_elim__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));

#line 57 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3681 "transform_hlds.dead_proc_elim.c"
          *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "dead_proc_elim.m"
        else
#line 57 "dead_proc_elim.m"
          {
#line 57 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 0)));

#line 57 "dead_proc_elim.m"
            {
#line 57 "dead_proc_elim.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__dead_proc_elim__HeadVar__1_1, transform_hlds__dead_proc_elim__V_11_11, transform_hlds__dead_proc_elim__V_7_7);
#line 57 "dead_proc_elim.m"
              return;
            }
#line 57 "dead_proc_elim.m"
          }
#line 57 "dead_proc_elim.m"
      }
#line 57 "dead_proc_elim.m"
  }
#line 57 "dead_proc_elim.m"
}

#line 57 "dead_proc_elim.m"
MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_needed_0_0(
#line 57 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 57 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2)
#line 57 "dead_proc_elim.m"
{
#line 57 "dead_proc_elim.m"
  {
#line 57 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 57 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastX_7 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__1_1;
#line 57 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastY_8 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__2_2;

#line 57 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__CastX_7 == transform_hlds__dead_proc_elim__CastY_8);
#line 57 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 57 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 57 "dead_proc_elim.m"
    else
#line 57 "dead_proc_elim.m"
    if ((transform_hlds__dead_proc_elim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 57 "dead_proc_elim.m"
      {
#line 57 "dead_proc_elim.m"
        MR_Integer transform_hlds__dead_proc_elim__CastX_3 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__1_1;
#line 57 "dead_proc_elim.m"
        MR_Integer transform_hlds__dead_proc_elim__CastY_4 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__2_2;

#line 57 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__CastY_4 == transform_hlds__dead_proc_elim__CastX_3);
#line 57 "dead_proc_elim.m"
      }
#line 57 "dead_proc_elim.m"
    else
#line 57 "dead_proc_elim.m"
      {
#line 57 "dead_proc_elim.m"
        MR_Integer transform_hlds__dead_proc_elim__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 57 "dead_proc_elim.m"
        MR_Integer transform_hlds__dead_proc_elim__V_6_6;

#line 57 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__succeeded = ((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 57 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 57 "dead_proc_elim.m"
          {
#line 57 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));
#line 3762 "transform_hlds.dead_proc_elim.c"
            transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_5_5 == transform_hlds__dead_proc_elim__V_6_6);
#line 57 "dead_proc_elim.m"
          }
#line 57 "dead_proc_elim.m"
      }
#line 57 "dead_proc_elim.m"
    return transform_hlds__dead_proc_elim__succeeded;
#line 57 "dead_proc_elim.m"
  }
#line 57 "dead_proc_elim.m"
}

#line 35 "dead_proc_elim.m"
void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_elim_opt_imported_0_0(
#line 35 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 35 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 35 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_3)
#line 35 "dead_proc_elim.m"
{
#line 35 "dead_proc_elim.m"
  {
#line 35 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 35 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__2_2;
#line 35 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__3_3;

#line 35 "dead_proc_elim.m"
    {
#line 35 "dead_proc_elim.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__dead_proc_elim__HeadVar__1_1, transform_hlds__dead_proc_elim__Cast_HeadVar1_4, transform_hlds__dead_proc_elim__Cast_HeadVar2_5);
#line 35 "dead_proc_elim.m"
      return;
    }
#line 35 "dead_proc_elim.m"
  }
#line 35 "dead_proc_elim.m"
}

#line 35 "dead_proc_elim.m"
MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_elim_opt_imported_0_0(
#line 35 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_1,
#line 35 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2)
#line 35 "dead_proc_elim.m"
{
#line 3816 "transform_hlds.dead_proc_elim.c"
  {
#line 3818 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__HeadVar__2_1 == transform_hlds__dead_proc_elim__HeadVar__2_2);

#line 3821 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 3823 "transform_hlds.dead_proc_elim.c"
  }
#line 35 "dead_proc_elim.m"
}

#line 137 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____examined_set_0_0(
#line 137 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 137 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 137 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_3)
#line 137 "dead_proc_elim.m"
{
#line 137 "dead_proc_elim.m"
  {
#line 137 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 137 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Cast_HeadVar1_4 = transform_hlds__dead_proc_elim__HeadVar__2_2;
#line 137 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Cast_HeadVar2_5 = transform_hlds__dead_proc_elim__HeadVar__3_3;

#line 137 "dead_proc_elim.m"
    {
#line 137 "dead_proc_elim.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[6], transform_hlds__dead_proc_elim__HeadVar__1_1, ((MR_Box) (transform_hlds__dead_proc_elim__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__dead_proc_elim__Cast_HeadVar2_5)));
#line 137 "dead_proc_elim.m"
      return;
    }
#line 137 "dead_proc_elim.m"
  }
#line 137 "dead_proc_elim.m"
}

#line 137 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____examined_set_0_0(
#line 137 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 137 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2)
#line 137 "dead_proc_elim.m"
{
#line 137 "dead_proc_elim.m"
  {
#line 137 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 137 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Cast_HeadVar1_3 = transform_hlds__dead_proc_elim__HeadVar__1_1;
#line 137 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Cast_HeadVar2_4 = transform_hlds__dead_proc_elim__HeadVar__2_2;

#line 137 "dead_proc_elim.m"
    {
#line 137 "dead_proc_elim.m"
      return transform_hlds__dead_proc_elim__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[6], ((MR_Box) (transform_hlds__dead_proc_elim__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__dead_proc_elim__Cast_HeadVar2_4)));
    }
#line 137 "dead_proc_elim.m"
    return transform_hlds__dead_proc_elim__succeeded;
#line 137 "dead_proc_elim.m"
  }
#line 137 "dead_proc_elim.m"
}

#line 136 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____entity_queue_0_0(
#line 136 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 136 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 136 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_3)
#line 136 "dead_proc_elim.m"
{
#line 136 "dead_proc_elim.m"
  {
#line 136 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 136 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Cast_HeadVar1_4 = transform_hlds__dead_proc_elim__HeadVar__2_2;
#line 136 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Cast_HeadVar2_5 = transform_hlds__dead_proc_elim__HeadVar__3_3;

#line 136 "dead_proc_elim.m"
    {
#line 136 "dead_proc_elim.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[4], transform_hlds__dead_proc_elim__HeadVar__1_1, ((MR_Box) (transform_hlds__dead_proc_elim__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__dead_proc_elim__Cast_HeadVar2_5)));
#line 136 "dead_proc_elim.m"
      return;
    }
#line 136 "dead_proc_elim.m"
  }
#line 136 "dead_proc_elim.m"
}

#line 136 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____entity_queue_0_0(
#line 136 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 136 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2)
#line 136 "dead_proc_elim.m"
{
#line 136 "dead_proc_elim.m"
  {
#line 136 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 136 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Cast_HeadVar1_3 = transform_hlds__dead_proc_elim__HeadVar__1_1;
#line 136 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Cast_HeadVar2_4 = transform_hlds__dead_proc_elim__HeadVar__2_2;

#line 136 "dead_proc_elim.m"
    {
#line 136 "dead_proc_elim.m"
      return transform_hlds__dead_proc_elim__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[4], ((MR_Box) (transform_hlds__dead_proc_elim__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__dead_proc_elim__Cast_HeadVar2_4)));
    }
#line 136 "dead_proc_elim.m"
    return transform_hlds__dead_proc_elim__succeeded;
#line 136 "dead_proc_elim.m"
  }
#line 136 "dead_proc_elim.m"
}

#line 51 "dead_proc_elim.m"
void MR_CALL 
transform_hlds__dead_proc_elim____Compare____entity_0_0(
#line 51 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 51 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 51 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_3)
#line 51 "dead_proc_elim.m"
{
#line 51 "dead_proc_elim.m"
  {
#line 51 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 51 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastX_72 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__2_2;
#line 51 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastY_73 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__3_3;

#line 51 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__CastX_72 == transform_hlds__dead_proc_elim__CastY_73);
#line 51 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 3976 "transform_hlds.dead_proc_elim.c"
      *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 0;
#line 51 "dead_proc_elim.m"
    else
#line 51 "dead_proc_elim.m"
#line 51 "dead_proc_elim.m"
      switch (MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__2_2)) {
#line 51 "dead_proc_elim.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 51 "dead_proc_elim.m"
        case (MR_Integer) 0:
#line 51 "dead_proc_elim.m"
          {
#line 51 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 1)));
#line 51 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));

#line 51 "dead_proc_elim.m"
#line 51 "dead_proc_elim.m"
            switch (MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__3_3)) {
#line 51 "dead_proc_elim.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 51 "dead_proc_elim.m"
              case (MR_Integer) 0:
#line 51 "dead_proc_elim.m"
                {
#line 51 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 0)));
#line 51 "dead_proc_elim.m"
                  MR_Integer transform_hlds__dead_proc_elim__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 1)));
#line 51 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_8_8;

#line 51 "dead_proc_elim.m"
                  {
#line 51 "dead_proc_elim.m"
                    hlds__hlds_pred____Compare____pred_id_0_0(&transform_hlds__dead_proc_elim__V_8_8, transform_hlds__dead_proc_elim__V_84_84, transform_hlds__dead_proc_elim__V_6_6);
                  }
#line 4015 "transform_hlds.dead_proc_elim.c"
                  transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_8_8 == (MR_Integer) 0);
#line 51 "dead_proc_elim.m"
                  transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 51 "dead_proc_elim.m"
                  if (transform_hlds__dead_proc_elim__succeeded)
#line 51 "dead_proc_elim.m"
                    *transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__V_8_8;
#line 51 "dead_proc_elim.m"
                  else
#line 51 "dead_proc_elim.m"
                    {
#line 51 "dead_proc_elim.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__dead_proc_elim__HeadVar__1_1, transform_hlds__dead_proc_elim__V_83_83, transform_hlds__dead_proc_elim__V_7_7);
#line 51 "dead_proc_elim.m"
                      return;
                    }
#line 51 "dead_proc_elim.m"
                }
#line 51 "dead_proc_elim.m"
                break;
#line 51 "dead_proc_elim.m"
              case (MR_Integer) 1:
#line 4038 "transform_hlds.dead_proc_elim.c"
                *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "dead_proc_elim.m"
                break;
#line 51 "dead_proc_elim.m"
              case (MR_Integer) 2:
#line 4044 "transform_hlds.dead_proc_elim.c"
                *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "dead_proc_elim.m"
                break;
#line 51 "dead_proc_elim.m"
              case (MR_Integer) 3:
#line 4050 "transform_hlds.dead_proc_elim.c"
                *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "dead_proc_elim.m"
                break;
#line 51 "dead_proc_elim.m"
            }
#line 51 "dead_proc_elim.m"
          }
#line 51 "dead_proc_elim.m"
          break;
#line 51 "dead_proc_elim.m"
        case (MR_Integer) 1:
#line 51 "dead_proc_elim.m"
          {
#line 51 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 1)));
#line 51 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));

#line 51 "dead_proc_elim.m"
#line 51 "dead_proc_elim.m"
            switch (MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__3_3)) {
#line 51 "dead_proc_elim.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 51 "dead_proc_elim.m"
              case (MR_Integer) 0:
#line 4076 "transform_hlds.dead_proc_elim.c"
                *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "dead_proc_elim.m"
                break;
#line 51 "dead_proc_elim.m"
              case (MR_Integer) 1:
#line 51 "dead_proc_elim.m"
                {
#line 51 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 0)));
#line 51 "dead_proc_elim.m"
                  MR_Integer transform_hlds__dead_proc_elim__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 1)));
#line 51 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_29_29;

#line 51 "dead_proc_elim.m"
                  {
#line 51 "dead_proc_elim.m"
                    hlds__hlds_pred____Compare____pred_id_0_0(&transform_hlds__dead_proc_elim__V_29_29, transform_hlds__dead_proc_elim__V_86_86, transform_hlds__dead_proc_elim__V_27_27);
                  }
#line 4096 "transform_hlds.dead_proc_elim.c"
                  transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_29_29 == (MR_Integer) 0);
#line 51 "dead_proc_elim.m"
                  transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 51 "dead_proc_elim.m"
                  if (transform_hlds__dead_proc_elim__succeeded)
#line 51 "dead_proc_elim.m"
                    *transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__V_29_29;
#line 51 "dead_proc_elim.m"
                  else
#line 51 "dead_proc_elim.m"
                    {
#line 51 "dead_proc_elim.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__dead_proc_elim__HeadVar__1_1, transform_hlds__dead_proc_elim__V_85_85, transform_hlds__dead_proc_elim__V_28_28);
#line 51 "dead_proc_elim.m"
                      return;
                    }
#line 51 "dead_proc_elim.m"
                }
#line 51 "dead_proc_elim.m"
                break;
#line 51 "dead_proc_elim.m"
              case (MR_Integer) 2:
#line 4119 "transform_hlds.dead_proc_elim.c"
                *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "dead_proc_elim.m"
                break;
#line 51 "dead_proc_elim.m"
              case (MR_Integer) 3:
#line 4125 "transform_hlds.dead_proc_elim.c"
                *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "dead_proc_elim.m"
                break;
#line 51 "dead_proc_elim.m"
            }
#line 51 "dead_proc_elim.m"
          }
#line 51 "dead_proc_elim.m"
          break;
#line 51 "dead_proc_elim.m"
        case (MR_Integer) 2:
#line 51 "dead_proc_elim.m"
          {
#line 51 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 2)));
#line 51 "dead_proc_elim.m"
            MR_String transform_hlds__dead_proc_elim__V_88_88 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 1)));
#line 51 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));

#line 51 "dead_proc_elim.m"
#line 51 "dead_proc_elim.m"
            switch (MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__3_3)) {
#line 51 "dead_proc_elim.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 51 "dead_proc_elim.m"
              case (MR_Integer) 0:
#line 4153 "transform_hlds.dead_proc_elim.c"
                *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "dead_proc_elim.m"
                break;
#line 51 "dead_proc_elim.m"
              case (MR_Integer) 1:
#line 4159 "transform_hlds.dead_proc_elim.c"
                *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "dead_proc_elim.m"
                break;
#line 51 "dead_proc_elim.m"
              case (MR_Integer) 2:
#line 51 "dead_proc_elim.m"
                {
#line 51 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 0)));
#line 51 "dead_proc_elim.m"
                  MR_String transform_hlds__dead_proc_elim__V_52_52 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 1)));
#line 51 "dead_proc_elim.m"
                  MR_Integer transform_hlds__dead_proc_elim__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 2)));
#line 51 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_54_54;

#line 51 "dead_proc_elim.m"
                  {
#line 51 "dead_proc_elim.m"
                    mdbcomp__sym_name____Compare____sym_name_0_0(&transform_hlds__dead_proc_elim__V_54_54, transform_hlds__dead_proc_elim__V_89_89, transform_hlds__dead_proc_elim__V_51_51);
                  }
#line 4181 "transform_hlds.dead_proc_elim.c"
                  transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_54_54 == (MR_Integer) 0);
#line 51 "dead_proc_elim.m"
                  transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 51 "dead_proc_elim.m"
                  if (transform_hlds__dead_proc_elim__succeeded)
#line 51 "dead_proc_elim.m"
                    *transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__V_54_54;
#line 51 "dead_proc_elim.m"
                  else
#line 51 "dead_proc_elim.m"
                    {
#line 51 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__V_55_55;

#line 51 "dead_proc_elim.m"
                      {
#line 51 "dead_proc_elim.m"
                        mercury__private_builtin__builtin_compare_string_3_p_0(&transform_hlds__dead_proc_elim__V_55_55, transform_hlds__dead_proc_elim__V_88_88, transform_hlds__dead_proc_elim__V_52_52);
                      }
#line 4201 "transform_hlds.dead_proc_elim.c"
                      transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_55_55 == (MR_Integer) 0);
#line 51 "dead_proc_elim.m"
                      transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 51 "dead_proc_elim.m"
                      if (transform_hlds__dead_proc_elim__succeeded)
#line 51 "dead_proc_elim.m"
                        *transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__V_55_55;
#line 51 "dead_proc_elim.m"
                      else
#line 51 "dead_proc_elim.m"
                        {
#line 51 "dead_proc_elim.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__dead_proc_elim__HeadVar__1_1, transform_hlds__dead_proc_elim__V_87_87, transform_hlds__dead_proc_elim__V_53_53);
#line 51 "dead_proc_elim.m"
                          return;
                        }
#line 51 "dead_proc_elim.m"
                    }
#line 51 "dead_proc_elim.m"
                }
#line 51 "dead_proc_elim.m"
                break;
#line 51 "dead_proc_elim.m"
              case (MR_Integer) 3:
#line 4226 "transform_hlds.dead_proc_elim.c"
                *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "dead_proc_elim.m"
                break;
#line 51 "dead_proc_elim.m"
            }
#line 51 "dead_proc_elim.m"
          }
#line 51 "dead_proc_elim.m"
          break;
#line 51 "dead_proc_elim.m"
        case (MR_Integer) 3:
#line 51 "dead_proc_elim.m"
          {
#line 51 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));

#line 51 "dead_proc_elim.m"
#line 51 "dead_proc_elim.m"
            switch (MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__3_3)) {
#line 51 "dead_proc_elim.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 51 "dead_proc_elim.m"
              case (MR_Integer) 0:
#line 4250 "transform_hlds.dead_proc_elim.c"
                *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "dead_proc_elim.m"
                break;
#line 51 "dead_proc_elim.m"
              case (MR_Integer) 1:
#line 4256 "transform_hlds.dead_proc_elim.c"
                *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "dead_proc_elim.m"
                break;
#line 51 "dead_proc_elim.m"
              case (MR_Integer) 2:
#line 4262 "transform_hlds.dead_proc_elim.c"
                *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "dead_proc_elim.m"
                break;
#line 51 "dead_proc_elim.m"
              case (MR_Integer) 3:
#line 51 "dead_proc_elim.m"
                {
#line 51 "dead_proc_elim.m"
                  MR_Integer transform_hlds__dead_proc_elim__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 0)));

#line 51 "dead_proc_elim.m"
                  {
#line 51 "dead_proc_elim.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__dead_proc_elim__HeadVar__1_1, transform_hlds__dead_proc_elim__V_82_82, transform_hlds__dead_proc_elim__V_71_71);
#line 51 "dead_proc_elim.m"
                    return;
                  }
#line 51 "dead_proc_elim.m"
                }
#line 51 "dead_proc_elim.m"
                break;
#line 51 "dead_proc_elim.m"
            }
#line 51 "dead_proc_elim.m"
          }
#line 51 "dead_proc_elim.m"
          break;
#line 51 "dead_proc_elim.m"
      }
#line 51 "dead_proc_elim.m"
  }
#line 51 "dead_proc_elim.m"
}

#line 51 "dead_proc_elim.m"
MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____entity_0_0(
#line 51 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 51 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2)
#line 51 "dead_proc_elim.m"
{
#line 51 "dead_proc_elim.m"
  {
#line 51 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 51 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastX_19 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__1_1;
#line 51 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastY_20 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__2_2;

#line 51 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__CastX_19 == transform_hlds__dead_proc_elim__CastY_20);
#line 51 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 51 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 51 "dead_proc_elim.m"
    else
#line 51 "dead_proc_elim.m"
#line 51 "dead_proc_elim.m"
      switch (MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__1_1)) {
#line 51 "dead_proc_elim.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 51 "dead_proc_elim.m"
        case (MR_Integer) 0:
#line 51 "dead_proc_elim.m"
          {
#line 51 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 51 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 51 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_5_5;
#line 51 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__V_6_6;

#line 51 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__succeeded = ((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 51 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 51 "dead_proc_elim.m"
              {
#line 51 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));
#line 51 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 1)));
#line 4351 "transform_hlds.dead_proc_elim.c"
                {
#line 4353 "transform_hlds.dead_proc_elim.c"
                  transform_hlds__dead_proc_elim__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__dead_proc_elim__V_3_3, transform_hlds__dead_proc_elim__V_5_5);
                }
#line 51 "dead_proc_elim.m"
                if (transform_hlds__dead_proc_elim__succeeded)
#line 4358 "transform_hlds.dead_proc_elim.c"
                  transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_4_4 == transform_hlds__dead_proc_elim__V_6_6);
#line 51 "dead_proc_elim.m"
              }
#line 51 "dead_proc_elim.m"
          }
#line 51 "dead_proc_elim.m"
          break;
#line 51 "dead_proc_elim.m"
        case (MR_Integer) 1:
#line 51 "dead_proc_elim.m"
          {
#line 51 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 51 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 51 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_9_9;
#line 51 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__V_10_10;

#line 51 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__succeeded = ((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 51 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 51 "dead_proc_elim.m"
              {
#line 51 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));
#line 51 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 1)));
#line 4389 "transform_hlds.dead_proc_elim.c"
                {
#line 4391 "transform_hlds.dead_proc_elim.c"
                  transform_hlds__dead_proc_elim__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__dead_proc_elim__V_7_7, transform_hlds__dead_proc_elim__V_9_9);
                }
#line 51 "dead_proc_elim.m"
                if (transform_hlds__dead_proc_elim__succeeded)
#line 4396 "transform_hlds.dead_proc_elim.c"
                  transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_8_8 == transform_hlds__dead_proc_elim__V_10_10);
#line 51 "dead_proc_elim.m"
              }
#line 51 "dead_proc_elim.m"
          }
#line 51 "dead_proc_elim.m"
          break;
#line 51 "dead_proc_elim.m"
        case (MR_Integer) 2:
#line 51 "dead_proc_elim.m"
          {
#line 51 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 51 "dead_proc_elim.m"
            MR_String transform_hlds__dead_proc_elim__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 51 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 2)));
#line 51 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_14_14;
#line 51 "dead_proc_elim.m"
            MR_String transform_hlds__dead_proc_elim__V_15_15;
#line 51 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__V_16_16;

#line 51 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__succeeded = ((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 51 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 51 "dead_proc_elim.m"
              {
#line 51 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));
#line 51 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 1)));
#line 51 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 2)));
#line 4433 "transform_hlds.dead_proc_elim.c"
                {
#line 4435 "transform_hlds.dead_proc_elim.c"
                  transform_hlds__dead_proc_elim__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__dead_proc_elim__V_11_11, transform_hlds__dead_proc_elim__V_14_14);
                }
#line 51 "dead_proc_elim.m"
                if (transform_hlds__dead_proc_elim__succeeded)
#line 51 "dead_proc_elim.m"
                  {
#line 4442 "transform_hlds.dead_proc_elim.c"
                    transform_hlds__dead_proc_elim__succeeded = (strcmp(transform_hlds__dead_proc_elim__V_12_12, transform_hlds__dead_proc_elim__V_15_15) == 0);
#line 51 "dead_proc_elim.m"
                    if (transform_hlds__dead_proc_elim__succeeded)
#line 4446 "transform_hlds.dead_proc_elim.c"
                      transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_13_13 == transform_hlds__dead_proc_elim__V_16_16);
#line 51 "dead_proc_elim.m"
                  }
#line 51 "dead_proc_elim.m"
              }
#line 51 "dead_proc_elim.m"
          }
#line 51 "dead_proc_elim.m"
          break;
#line 51 "dead_proc_elim.m"
        case (MR_Integer) 3:
#line 51 "dead_proc_elim.m"
          {
#line 51 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 51 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__V_18_18;

#line 51 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__succeeded = ((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 51 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 51 "dead_proc_elim.m"
              {
#line 51 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));
#line 4473 "transform_hlds.dead_proc_elim.c"
                transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_17_17 == transform_hlds__dead_proc_elim__V_18_18);
#line 51 "dead_proc_elim.m"
              }
#line 51 "dead_proc_elim.m"
          }
#line 51 "dead_proc_elim.m"
          break;
#line 51 "dead_proc_elim.m"
      }
#line 51 "dead_proc_elim.m"
    return transform_hlds__dead_proc_elim__succeeded;
#line 51 "dead_proc_elim.m"
  }
#line 51 "dead_proc_elim.m"
}

#line 148 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____analyze_what_0_0(
#line 148 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 148 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 148 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_3)
#line 148 "dead_proc_elim.m"
{
#line 148 "dead_proc_elim.m"
  {
#line 148 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 148 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__2_2;
#line 148 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__3_3;

#line 148 "dead_proc_elim.m"
    {
#line 148 "dead_proc_elim.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__dead_proc_elim__HeadVar__1_1, transform_hlds__dead_proc_elim__Cast_HeadVar1_4, transform_hlds__dead_proc_elim__Cast_HeadVar2_5);
#line 148 "dead_proc_elim.m"
      return;
    }
#line 148 "dead_proc_elim.m"
  }
#line 148 "dead_proc_elim.m"
}

#line 148 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____analyze_what_0_0(
#line 148 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_1,
#line 148 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2)
#line 148 "dead_proc_elim.m"
{
#line 4531 "transform_hlds.dead_proc_elim.c"
  {
#line 4533 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__HeadVar__2_1 == transform_hlds__dead_proc_elim__HeadVar__2_2);

#line 4536 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 4538 "transform_hlds.dead_proc_elim.c"
  }
#line 148 "dead_proc_elim.m"
}

#line 1251 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_p_0(
#line 1251 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Name_4,
#line 1251 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_13,
#line 1251 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_14)
#line 1251 "dead_proc_elim.m"
{
#line 1257 "dead_proc_elim.m"
  {
#line 1257 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 1257 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ModuleInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_13, (MR_Integer) 0)));
#line 1257 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Examined_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_13, (MR_Integer) 2)));
#line 1257 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Needed_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_13, (MR_Integer) 3)));
#line 1257 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_13, (MR_Integer) 1)));
#line 1257 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_13, (MR_Integer) 4)));

#line 1258 "dead_proc_elim.m"
    {
#line 1258 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_16_16, ((MR_Box) (transform_hlds__dead_proc_elim__Name_4)));
    }
#line 1260 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 1259 "dead_proc_elim.m"
      *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_14 = transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_13;
#line 1260 "dead_proc_elim.m"
    else
#line 1261 "dead_proc_elim.m"
      {
#line 1261 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__PredicateTable_11;
#line 1261 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__PredIds_12;
#line 1261 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_17_21;
#line 1261 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_22;

#line 1261 "dead_proc_elim.m"
        {
#line 1261 "dead_proc_elim.m"
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_8, &transform_hlds__dead_proc_elim__PredicateTable_11);
        }
#line 1262 "dead_proc_elim.m"
        {
#line 1262 "dead_proc_elim.m"
          mercury__set_tree234__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (transform_hlds__dead_proc_elim__Name_4)), transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_16_16, &transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_17_21);
        }
#line 1263 "dead_proc_elim.m"
        {
#line 1263 "dead_proc_elim.m"
          hlds__pred_table__predicate_table_lookup_sym_4_p_0(transform_hlds__dead_proc_elim__PredicateTable_11, (MR_Integer) 1, transform_hlds__dead_proc_elim__Name_4, &transform_hlds__dead_proc_elim__PredIds_12);
        }
#line 1265 "dead_proc_elim.m"
        {
#line 1265 "dead_proc_elim.m"
          mercury__queue__put_list_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__dead_proc_elim__PredIds_12, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_15_15, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_22);
        }
#line 1266 "dead_proc_elim.m"
        {
#line 1266 "dead_proc_elim.m"
          MR_Word base;
#line 1266 "dead_proc_elim.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1266 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_14 = base;
#line 1266 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ModuleInfo_8));
#line 1266 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_22));
#line 1266 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__Examined_9));
#line 1266 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__Needed_10));
#line 1266 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_17_21));
#line 1266 "dead_proc_elim.m"
        }
#line 1261 "dead_proc_elim.m"
      }
#line 1257 "dead_proc_elim.m"
  }
#line 1251 "dead_proc_elim.m"
}

#line 1233 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_p_0(
#line 1233 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__RHS_4,
#line 1233 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22,
#line 1233 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_23)
#line 1233 "dead_proc_elim.m"
{
#line 1238 "dead_proc_elim.m"
  {
#line 1238 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 1238 "dead_proc_elim.m"
#line 1238 "dead_proc_elim.m"
    switch (MR_tag((MR_Word) transform_hlds__dead_proc_elim__RHS_4)) {
#line 1238 "dead_proc_elim.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1238 "dead_proc_elim.m"
      case (MR_Integer) 0:
#line 1238 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_23 = transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22;
#line 1238 "dead_proc_elim.m"
        break;
#line 1238 "dead_proc_elim.m"
      case (MR_Integer) 1:
#line 1240 "dead_proc_elim.m"
        {
#line 1240 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__Functor_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 0)));
#line 1240 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 1)));
#line 1240 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 2)));
#line 1243 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__Name_10;
#line 1241 "dead_proc_elim.m"
          MR_Integer transform_hlds__dead_proc_elim__V_11_11;
#line 1241 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_12_12;

#line 1241 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__succeeded = ((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__Functor_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Functor_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1241 "dead_proc_elim.m"
          if (transform_hlds__dead_proc_elim__succeeded)
#line 1241 "dead_proc_elim.m"
            {
#line 1241 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Functor_7, (MR_Integer) 1)));
#line 1241 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Functor_7, (MR_Integer) 2)));
#line 1241 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Functor_7, (MR_Integer) 3)));
#line 1257 "dead_proc_elim.m"
              {
#line 1257 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__ModuleInfo_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22, (MR_Integer) 0)));
#line 1257 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__Examined_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22, (MR_Integer) 2)));
#line 1257 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__Needed_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22, (MR_Integer) 3)));
#line 1257 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_15_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22, (MR_Integer) 1)));
#line 1257 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_16_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22, (MR_Integer) 4)));

#line 1258 "dead_proc_elim.m"
                {
#line 1258 "dead_proc_elim.m"
                  transform_hlds__dead_proc_elim__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_16_38, ((MR_Box) (transform_hlds__dead_proc_elim__Name_10)));
                }
#line 1260 "dead_proc_elim.m"
                if (transform_hlds__dead_proc_elim__succeeded)
#line 1259 "dead_proc_elim.m"
                  *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_23 = transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22;
#line 1260 "dead_proc_elim.m"
                else
#line 1261 "dead_proc_elim.m"
                  {
#line 1261 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__PredicateTable_35;
#line 1261 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__PredIds_36;
#line 1261 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_17_43;
#line 1261 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_44;

#line 1261 "dead_proc_elim.m"
                    {
#line 1261 "dead_proc_elim.m"
                      hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_32, &transform_hlds__dead_proc_elim__PredicateTable_35);
                    }
#line 1262 "dead_proc_elim.m"
                    {
#line 1262 "dead_proc_elim.m"
                      mercury__set_tree234__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (transform_hlds__dead_proc_elim__Name_10)), transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_16_38, &transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_17_43);
                    }
#line 1263 "dead_proc_elim.m"
                    {
#line 1263 "dead_proc_elim.m"
                      hlds__pred_table__predicate_table_lookup_sym_4_p_0(transform_hlds__dead_proc_elim__PredicateTable_35, (MR_Integer) 1, transform_hlds__dead_proc_elim__Name_10, &transform_hlds__dead_proc_elim__PredIds_36);
                    }
#line 1265 "dead_proc_elim.m"
                    {
#line 1265 "dead_proc_elim.m"
                      mercury__queue__put_list_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__dead_proc_elim__PredIds_36, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_15_37, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_44);
                    }
#line 1266 "dead_proc_elim.m"
                    {
#line 1266 "dead_proc_elim.m"
                      MR_Word base;
#line 1266 "dead_proc_elim.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1266 "dead_proc_elim.m"
                      *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_23 = base;
#line 1266 "dead_proc_elim.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ModuleInfo_32));
#line 1266 "dead_proc_elim.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_44));
#line 1266 "dead_proc_elim.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__Examined_33));
#line 1266 "dead_proc_elim.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__Needed_34));
#line 1266 "dead_proc_elim.m"
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_17_43));
#line 1266 "dead_proc_elim.m"
                    }
#line 1261 "dead_proc_elim.m"
                  }
#line 1257 "dead_proc_elim.m"
              }
#line 1241 "dead_proc_elim.m"
            }
#line 1241 "dead_proc_elim.m"
          else
#line 1243 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_23 = transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22;
#line 1240 "dead_proc_elim.m"
        }
#line 1238 "dead_proc_elim.m"
        break;
#line 1238 "dead_proc_elim.m"
      case (MR_Integer) 2:
#line 1247 "dead_proc_elim.m"
        {
#line 1247 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 6)));
#line 1247 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__GoalExpr_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Goal_21, (MR_Integer) 0)));
#line 1247 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1247 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1247 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1247 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 2)));
#line 1247 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 3)));
#line 1247 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 4)));
#line 1247 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 5)));
#line 1176 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Goal_21, (MR_Integer) 1)));

#line 1177 "dead_proc_elim.m"
          {
#line 1177 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0(transform_hlds__dead_proc_elim__GoalExpr_52, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_23);
#line 1177 "dead_proc_elim.m"
            return;
          }
#line 1247 "dead_proc_elim.m"
        }
#line 1238 "dead_proc_elim.m"
        break;
#line 1238 "dead_proc_elim.m"
    }
#line 1238 "dead_proc_elim.m"
  }
#line 1233 "dead_proc_elim.m"
}

#line 1196 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_4(
#line 1196 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1196 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1196 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1196 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 1196 "dead_proc_elim.m"
{
#line 1196 "dead_proc_elim.m"
  {
#line 1196 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 1196 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_DeadInfo_10;

#line 1196 "dead_proc_elim.m"
    {
#line 1196 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__pre_modecheck_examine_case_3_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_DeadInfo_10);
    }
#line 1196 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_DeadInfo_10));
#line 1196 "dead_proc_elim.m"
  }
#line 1196 "dead_proc_elim.m"
}

#line 1222 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_3(
#line 1222 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1222 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1222 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1222 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 1222 "dead_proc_elim.m"
{
#line 1222 "dead_proc_elim.m"
  {
#line 1222 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 1222 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_DeadInfo_9;

#line 1222 "dead_proc_elim.m"
    {
#line 1222 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_DeadInfo_9);
    }
#line 1222 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_DeadInfo_9));
#line 1222 "dead_proc_elim.m"
  }
#line 1222 "dead_proc_elim.m"
}

#line 1188 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_2(
#line 1188 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1188 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1188 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1188 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 1188 "dead_proc_elim.m"
{
#line 1188 "dead_proc_elim.m"
  {
#line 1188 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 1188 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_DeadInfo_9;

#line 1188 "dead_proc_elim.m"
    {
#line 1188 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_DeadInfo_9);
    }
#line 1188 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_DeadInfo_9));
#line 1188 "dead_proc_elim.m"
  }
#line 1188 "dead_proc_elim.m"
}

#line 1185 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_1(
#line 1185 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1185 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1185 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1185 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 1185 "dead_proc_elim.m"
{
#line 1185 "dead_proc_elim.m"
  {
#line 1185 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 1185 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_DeadInfo_9;

#line 1185 "dead_proc_elim.m"
    {
#line 1185 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_DeadInfo_9);
    }
#line 1185 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_DeadInfo_9));
#line 1185 "dead_proc_elim.m"
  }
#line 1185 "dead_proc_elim.m"
}

#line 1179 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0(
#line 1179 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__GoalExpr_4,
#line 1179 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52,
#line 1179 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53)
#line 1179 "dead_proc_elim.m"
{
#line 1184 "dead_proc_elim.m"
  {
#line 1184 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 1184 "dead_proc_elim.m"
#line 1184 "dead_proc_elim.m"
    switch (MR_tag((MR_Word) transform_hlds__dead_proc_elim__GoalExpr_4)) {
#line 1184 "dead_proc_elim.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1184 "dead_proc_elim.m"
      case (MR_Integer) 0:
#line 1198 "dead_proc_elim.m"
        {
#line 1198 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__SubGoal_15 = (MR_Word) MR_body(((MR_Word) transform_hlds__dead_proc_elim__GoalExpr_4), (MR_Integer) 0);

#line 1199 "dead_proc_elim.m"
          {
#line 1199 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(transform_hlds__dead_proc_elim__SubGoal_15, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53);
#line 1199 "dead_proc_elim.m"
            return;
          }
#line 1198 "dead_proc_elim.m"
        }
#line 1184 "dead_proc_elim.m"
        break;
#line 1184 "dead_proc_elim.m"
      case (MR_Integer) 1:
#line 1214 "dead_proc_elim.m"
        {
#line 1214 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__RHS_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 1)));
#line 1214 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 0)));
#line 1214 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 2)));
#line 1214 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 3)));
#line 1214 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 4)));

#line 1215 "dead_proc_elim.m"
          {
#line 1215 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_p_0(transform_hlds__dead_proc_elim__RHS_36, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53);
#line 1215 "dead_proc_elim.m"
            return;
          }
#line 1214 "dead_proc_elim.m"
        }
#line 1184 "dead_proc_elim.m"
        break;
#line 1184 "dead_proc_elim.m"
      case (MR_Integer) 2:
#line 1207 "dead_proc_elim.m"
        {
#line 1207 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__PredName_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 5)));
#line 1207 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 0)));
#line 1207 "dead_proc_elim.m"
          MR_Integer transform_hlds__dead_proc_elim__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 1)));
#line 1207 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 2)));
#line 1207 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 3)));
#line 1207 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 4)));

#line 1208 "dead_proc_elim.m"
          {
#line 1208 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_p_0(transform_hlds__dead_proc_elim__PredName_22, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53);
#line 1208 "dead_proc_elim.m"
            return;
          }
#line 1207 "dead_proc_elim.m"
        }
#line 1184 "dead_proc_elim.m"
        break;
#line 1184 "dead_proc_elim.m"
      case (MR_Integer) 3:
#line 1184 "dead_proc_elim.m"
#line 1184 "dead_proc_elim.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 0)))) {
#line 1184 "dead_proc_elim.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1184 "dead_proc_elim.m"
          case (MR_Integer) 0:
#line 1210 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53 = transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52;
#line 1184 "dead_proc_elim.m"
            break;
#line 1184 "dead_proc_elim.m"
          case (MR_Integer) 1:
#line 1212 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53 = transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52;
#line 1184 "dead_proc_elim.m"
            break;
#line 1184 "dead_proc_elim.m"
          case (MR_Integer) 2:
#line 1184 "dead_proc_elim.m"
            {
#line 1184 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 2)));
#line 1184 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim___ConjType_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 1)));
#line 1185 "dead_proc_elim.m"
              MR_Box transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_DeadInfo_53;

#line 1185 "dead_proc_elim.m"
              {
#line 1185 "dead_proc_elim.m"
                mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[14], transform_hlds__dead_proc_elim__Goals_7, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52)), &transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_DeadInfo_53);
              }
#line 1185 "dead_proc_elim.m"
              *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53 = ((MR_Word) transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_DeadInfo_53);
#line 1184 "dead_proc_elim.m"
            }
#line 1184 "dead_proc_elim.m"
            break;
#line 1184 "dead_proc_elim.m"
          case (MR_Integer) 3:
#line 1187 "dead_proc_elim.m"
            {
#line 1187 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__Goals_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 1)));
#line 1188 "dead_proc_elim.m"
              MR_Box transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_DeadInfo_53;

#line 1188 "dead_proc_elim.m"
              {
#line 1188 "dead_proc_elim.m"
                mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[15], transform_hlds__dead_proc_elim__Goals_74, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52)), &transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_DeadInfo_53);
              }
#line 1188 "dead_proc_elim.m"
              *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53 = ((MR_Word) transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_DeadInfo_53);
#line 1187 "dead_proc_elim.m"
            }
#line 1184 "dead_proc_elim.m"
            break;
#line 1184 "dead_proc_elim.m"
          case (MR_Integer) 4:
#line 1195 "dead_proc_elim.m"
            {
#line 1195 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 3)));
#line 1195 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 1)));
#line 1195 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 2)));
#line 1196 "dead_proc_elim.m"
              MR_Box transform_hlds__dead_proc_elim__conv7_STATE_VARIABLE_DeadInfo_53;

#line 1196 "dead_proc_elim.m"
              {
#line 1196 "dead_proc_elim.m"
                mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[17], transform_hlds__dead_proc_elim__Cases_14, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52)), &transform_hlds__dead_proc_elim__conv7_STATE_VARIABLE_DeadInfo_53);
              }
#line 1196 "dead_proc_elim.m"
              *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53 = ((MR_Word) transform_hlds__dead_proc_elim__conv7_STATE_VARIABLE_DeadInfo_53);
#line 1195 "dead_proc_elim.m"
            }
#line 1184 "dead_proc_elim.m"
            break;
#line 1184 "dead_proc_elim.m"
          case (MR_Integer) 5:
#line 1201 "dead_proc_elim.m"
            {
#line 1201 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__SubGoal_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 2)));
#line 1201 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 1)));

#line 1205 "dead_proc_elim.m"
              {
#line 1205 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(transform_hlds__dead_proc_elim__SubGoal_75, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53);
#line 1205 "dead_proc_elim.m"
                return;
              }
#line 1201 "dead_proc_elim.m"
            }
#line 1184 "dead_proc_elim.m"
            break;
#line 1184 "dead_proc_elim.m"
          case (MR_Integer) 6:
#line 1190 "dead_proc_elim.m"
            {
#line 1190 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__Cond_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 2)));
#line 1190 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__Then_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 3)));
#line 1190 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__Else_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 4)));
#line 1190 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_67_67;
#line 1190 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_68_68;
#line 1190 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 1)));

#line 1191 "dead_proc_elim.m"
              {
#line 1191 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(transform_hlds__dead_proc_elim__Cond_9, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52, &transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_67_67);
              }
#line 1192 "dead_proc_elim.m"
              {
#line 1192 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(transform_hlds__dead_proc_elim__Then_10, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_67_67, &transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_68_68);
              }
#line 1193 "dead_proc_elim.m"
              {
#line 1193 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(transform_hlds__dead_proc_elim__Else_11, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_68_68, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53);
#line 1193 "dead_proc_elim.m"
                return;
              }
#line 1190 "dead_proc_elim.m"
            }
#line 1184 "dead_proc_elim.m"
            break;
#line 1184 "dead_proc_elim.m"
          case (MR_Integer) 7:
#line 1217 "dead_proc_elim.m"
            {
#line 1217 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__ShortHand_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 1)));

#line 1223 "dead_proc_elim.m"
#line 1223 "dead_proc_elim.m"
              switch (MR_tag((MR_Word) transform_hlds__dead_proc_elim__ShortHand_40)) {
#line 1223 "dead_proc_elim.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1223 "dead_proc_elim.m"
                case (MR_Integer) 0:
#line 1227 "dead_proc_elim.m"
                  {
#line 1229 "dead_proc_elim.m"
                    {
#line 1229 "dead_proc_elim.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.dead_proc_elim", (MR_String) "predicate \140transform_hlds.dead_proc_elim.pre_modecheck_examine_goal_expr\'/3", (MR_String) "unexpected bi_implication");
#line 1229 "dead_proc_elim.m"
                      return;
                    }
#line 1227 "dead_proc_elim.m"
                  }
#line 1223 "dead_proc_elim.m"
                  break;
#line 1223 "dead_proc_elim.m"
                case (MR_Integer) 1:
#line 1220 "dead_proc_elim.m"
                  {
#line 1220 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__MainGoal_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__ShortHand_40, (MR_Integer) 4)));
#line 1220 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__OrElseGoals_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__ShortHand_40, (MR_Integer) 5)));
#line 1220 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_58_58;
#line 1219 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim___GoalType_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__ShortHand_40, (MR_Integer) 0)));
#line 1219 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim___Outer_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__ShortHand_40, (MR_Integer) 1)));
#line 1219 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim___Inner_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__ShortHand_40, (MR_Integer) 2)));
#line 1219 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim___MaybeOutputVars_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__ShortHand_40, (MR_Integer) 3)));
#line 1219 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim___OrElseInners_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__ShortHand_40, (MR_Integer) 6)));
#line 1222 "dead_proc_elim.m"
                    MR_Box transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_DeadInfo_53;

#line 1221 "dead_proc_elim.m"
                    {
#line 1221 "dead_proc_elim.m"
                      transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(transform_hlds__dead_proc_elim__MainGoal_45, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52, &transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_58_58);
                    }
#line 1222 "dead_proc_elim.m"
                    {
#line 1222 "dead_proc_elim.m"
                      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[16], transform_hlds__dead_proc_elim__OrElseGoals_46, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_58_58)), &transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_DeadInfo_53);
                    }
#line 1222 "dead_proc_elim.m"
                    *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53 = ((MR_Word) transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_DeadInfo_53);
#line 1220 "dead_proc_elim.m"
                  }
#line 1223 "dead_proc_elim.m"
                  break;
#line 1223 "dead_proc_elim.m"
                case (MR_Integer) 2:
#line 1224 "dead_proc_elim.m"
                  {
#line 1224 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__SubGoal_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__ShortHand_40, (MR_Integer) 2)));
#line 1224 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim___MaybeIO_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__ShortHand_40, (MR_Integer) 0)));
#line 1224 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim___ResultVar_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__ShortHand_40, (MR_Integer) 1)));

#line 1225 "dead_proc_elim.m"
                    {
#line 1225 "dead_proc_elim.m"
                      transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(transform_hlds__dead_proc_elim__SubGoal_76, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53);
#line 1225 "dead_proc_elim.m"
                      return;
                    }
#line 1224 "dead_proc_elim.m"
                  }
#line 1223 "dead_proc_elim.m"
                  break;
#line 1223 "dead_proc_elim.m"
              }
#line 1217 "dead_proc_elim.m"
            }
#line 1184 "dead_proc_elim.m"
            break;
#line 1184 "dead_proc_elim.m"
        }
#line 1184 "dead_proc_elim.m"
        break;
#line 1184 "dead_proc_elim.m"
    }
#line 1184 "dead_proc_elim.m"
  }
#line 1179 "dead_proc_elim.m"
}

#line 1172 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(
#line 1172 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Goal_4,
#line 1172 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_8,
#line 1172 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_9)
#line 1172 "dead_proc_elim.m"
{
#line 1175 "dead_proc_elim.m"
  {
#line 1175 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 1175 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Goal_4, (MR_Integer) 0)));
#line 1176 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Goal_4, (MR_Integer) 1)));

#line 1177 "dead_proc_elim.m"
    {
#line 1177 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0(transform_hlds__dead_proc_elim__GoalExpr_6, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_8, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_9);
#line 1177 "dead_proc_elim.m"
      return;
    }
#line 1175 "dead_proc_elim.m"
  }
#line 1172 "dead_proc_elim.m"
}

#line 1165 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_case_3_p_0(
#line 1165 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Case_4,
#line 1165 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_9,
#line 1165 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_10)
#line 1165 "dead_proc_elim.m"
{
#line 1168 "dead_proc_elim.m"
  {
#line 1168 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 1168 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Case_4, (MR_Integer) 2)));
#line 1169 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Case_4, (MR_Integer) 0)));
#line 1169 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Case_4, (MR_Integer) 1)));

#line 1170 "dead_proc_elim.m"
    {
#line 1170 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(transform_hlds__dead_proc_elim__Goal_8, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_9, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_10);
#line 1170 "dead_proc_elim.m"
      return;
    }
#line 1168 "dead_proc_elim.m"
  }
#line 1165 "dead_proc_elim.m"
}

#line 1159 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_process_clause_3_p_0(
#line 1159 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Clause_4,
#line 1159 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_6,
#line 1159 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_7)
#line 1159 "dead_proc_elim.m"
{
#line 1162 "dead_proc_elim.m"
  {
#line 1162 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 1162 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_8_8;
#line 1162 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__GoalExpr_14;
#line 1176 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_15_15;

#line 1163 "dead_proc_elim.m"
    {
#line 1163 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__V_8_8 = hlds__hlds_clauses__clause_body_1_f_0(transform_hlds__dead_proc_elim__Clause_4);
    }
#line 1176 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_8_8, (MR_Integer) 0)));
#line 1176 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_8_8, (MR_Integer) 1)));
#line 1177 "dead_proc_elim.m"
    {
#line 1177 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0(transform_hlds__dead_proc_elim__GoalExpr_14, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_6, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_7);
#line 1177 "dead_proc_elim.m"
      return;
    }
#line 1162 "dead_proc_elim.m"
  }
#line 1159 "dead_proc_elim.m"
}

#line 1151 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_p_0_1(
#line 1151 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1151 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1151 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1151 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 1151 "dead_proc_elim.m"
{
#line 1151 "dead_proc_elim.m"
  {
#line 1151 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 1151 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_DeadInfo_7;

#line 1151 "dead_proc_elim.m"
    {
#line 1151 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_pred_elim_process_clause_3_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_DeadInfo_7);
    }
#line 1151 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_DeadInfo_7));
#line 1151 "dead_proc_elim.m"
  }
#line 1151 "dead_proc_elim.m"
}

#line 1131 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_p_0(
#line 1131 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_15,
#line 1131 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_16)
#line 1131 "dead_proc_elim.m"
{
#line 1136 "dead_proc_elim.m"
  while (MR_TRUE)
#line 1136 "dead_proc_elim.m"
    {
#line 1136 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 1136 "dead_proc_elim.m"
      {
#line 1136 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 1136 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__ModuleInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_15, (MR_Integer) 0)));
#line 1136 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__NeededNames_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_15, (MR_Integer) 4)));
#line 1136 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_15, (MR_Integer) 1)));
#line 1136 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_15, (MR_Integer) 2)));
#line 1136 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_15, (MR_Integer) 3)));
#line 1154 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__PredId_9;
#line 1154 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_20_20;
#line 1137 "dead_proc_elim.m"
        MR_Box transform_hlds__dead_proc_elim__conv0_PredId_9;

#line 1137 "dead_proc_elim.m"
        {
#line 1137 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__succeeded = mercury__queue__get_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, &transform_hlds__dead_proc_elim__conv0_PredId_9, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_17_17, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_20_20);
        }
#line 1137 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 1137 "dead_proc_elim.m"
          {
#line 1137 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__PredId_9 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_PredId_9);
#line 1137 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 1137 "dead_proc_elim.m"
          }
#line 1154 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 1152 "dead_proc_elim.m"
          {
#line 1152 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_21_21;

#line 1138 "dead_proc_elim.m"
            {
#line 1138 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_18_18, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_9)));
            }
#line 1141 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 1139 "dead_proc_elim.m"
              {
#line 1139 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1139 "dead_proc_elim.m"
                MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_21_21, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ModuleInfo_7));
#line 1139 "dead_proc_elim.m"
                MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_21_21, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_20_20));
#line 1139 "dead_proc_elim.m"
                MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_21_21, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_18_18));
#line 1139 "dead_proc_elim.m"
                MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_21_21, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_19_19));
#line 1139 "dead_proc_elim.m"
                MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_21_21, 4) = ((MR_Box) (transform_hlds__dead_proc_elim__NeededNames_8));
#line 1139 "dead_proc_elim.m"
              }
#line 1141 "dead_proc_elim.m"
            else
#line 1142 "dead_proc_elim.m"
              {
#line 1142 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_39_39 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 1142 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__PredInfo_10;
#line 1142 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__ClausesInfo_11;
#line 1142 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__ClausesRep_12;
#line 1142 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__Clauses_14;
#line 1142 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_24_24;
#line 1142 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_22_29;
#line 1142 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_23_30;
#line 1148 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim___ItemNumbers_13;
#line 1151 "dead_proc_elim.m"
                MR_Box transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_DeadInfo_21_21;

#line 1142 "dead_proc_elim.m"
                {
#line 1142 "dead_proc_elim.m"
                  mercury__set_tree234__insert_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_39_39, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_9)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_19_19, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_22_29);
                }
#line 1143 "dead_proc_elim.m"
                {
#line 1143 "dead_proc_elim.m"
                  mercury__set_tree234__insert_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_39_39, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_9)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_18_18, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_23_30);
                }
#line 1144 "dead_proc_elim.m"
                {
#line 1144 "dead_proc_elim.m"
                  transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1144 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_24_24, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ModuleInfo_7));
#line 1144 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_24_24, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_20_20));
#line 1144 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_24_24, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_23_30));
#line 1144 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_24_24, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_22_29));
#line 1144 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_24_24, 4) = ((MR_Box) (transform_hlds__dead_proc_elim__NeededNames_8));
#line 1144 "dead_proc_elim.m"
                }
#line 1146 "dead_proc_elim.m"
                {
#line 1146 "dead_proc_elim.m"
                  hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__dead_proc_elim__ModuleInfo_7, transform_hlds__dead_proc_elim__PredId_9, &transform_hlds__dead_proc_elim__PredInfo_10);
                }
#line 1147 "dead_proc_elim.m"
                {
#line 1147 "dead_proc_elim.m"
                  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(transform_hlds__dead_proc_elim__PredInfo_10, &transform_hlds__dead_proc_elim__ClausesInfo_11);
                }
#line 1148 "dead_proc_elim.m"
                {
#line 1148 "dead_proc_elim.m"
                  hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(transform_hlds__dead_proc_elim__ClausesInfo_11, &transform_hlds__dead_proc_elim__ClausesRep_12, &transform_hlds__dead_proc_elim___ItemNumbers_13);
                }
#line 1150 "dead_proc_elim.m"
                {
#line 1150 "dead_proc_elim.m"
                  hlds__hlds_clauses__get_clause_list_any_order_2_p_0(transform_hlds__dead_proc_elim__ClausesRep_12, &transform_hlds__dead_proc_elim__Clauses_14);
                }
#line 1151 "dead_proc_elim.m"
                {
#line 1151 "dead_proc_elim.m"
                  mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[13], transform_hlds__dead_proc_elim__Clauses_14, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_24_24)), &transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_DeadInfo_21_21);
                }
#line 1151 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_21_21 = ((MR_Word) transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_DeadInfo_21_21);
#line 1142 "dead_proc_elim.m"
              }
#line 1153 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 1153 "dead_proc_elim.m"
            {
#line 1153 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0__tmp_copy_15 = transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_21_21;

#line 1153 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_15 = transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0__tmp_copy_15;
#line 1153 "dead_proc_elim.m"
            }
#line 1153 "dead_proc_elim.m"
            continue;
#line 1152 "dead_proc_elim.m"
          }
#line 1154 "dead_proc_elim.m"
        else
#line 1155 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_16 = transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_15;
#line 1136 "dead_proc_elim.m"
      }
#line 1136 "dead_proc_elim.m"
      break;
#line 1136 "dead_proc_elim.m"
    }
#line 1131 "dead_proc_elim.m"
}

#line 1067 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_p_0(
#line 1067 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__PredId_4,
#line 1067 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__DeadInfo0_5,
#line 1067 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__DeadInfo_6)
#line 1067 "dead_proc_elim.m"
{
#line 1073 "dead_proc_elim.m"
  {
#line 1073 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 1073 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ModuleInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo0_5, (MR_Integer) 0)));
#line 1073 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Examined_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo0_5, (MR_Integer) 2)));
#line 1073 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__NeededIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo0_5, (MR_Integer) 3)));
#line 1073 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredInfo_12;
#line 1073 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo0_5, (MR_Integer) 1)));
#line 1073 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo0_5, (MR_Integer) 4)));
#line 1073 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_24_24;
#line 1073 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_25;
#line 1124 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredModule_13;
#line 1124 "dead_proc_elim.m"
    MR_String transform_hlds__dead_proc_elim__PredName_14;
#line 1076 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__PredArity_15;

#line 1074 "dead_proc_elim.m"
    {
#line 1074 "dead_proc_elim.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__dead_proc_elim__ModuleInfo_9, transform_hlds__dead_proc_elim__PredId_4, &transform_hlds__dead_proc_elim__PredInfo_12);
    }
#line 1076 "dead_proc_elim.m"
    {
#line 1076 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__PredModule_13 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__dead_proc_elim__PredInfo_12);
    }
#line 1077 "dead_proc_elim.m"
    {
#line 1077 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__PredName_14 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__dead_proc_elim__PredInfo_12);
    }
#line 1078 "dead_proc_elim.m"
    {
#line 1078 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__PredArity_15 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__dead_proc_elim__PredInfo_12);
    }
#line 1082 "dead_proc_elim.m"
    {
#line 1082 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__dead_proc_elim__PredInfo_12);
    }
#line 1083 "dead_proc_elim.m"
    if (!(transform_hlds__dead_proc_elim__succeeded))
#line 1083 "dead_proc_elim.m"
      {
#line 1087 "dead_proc_elim.m"
        {
#line 1087 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(transform_hlds__dead_proc_elim__PredModule_13);
        }
#line 1083 "dead_proc_elim.m"
        if (!(transform_hlds__dead_proc_elim__succeeded))
#line 1083 "dead_proc_elim.m"
          {
#line 1091 "dead_proc_elim.m"
            {
#line 1091 "dead_proc_elim.m"
              MR_String transform_hlds__dead_proc_elim__PredModuleName_16;

#line 1091 "dead_proc_elim.m"
              {
#line 1091 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(transform_hlds__dead_proc_elim__PredModule_13, &transform_hlds__dead_proc_elim__PredModuleName_16);
              }
#line 1091 "dead_proc_elim.m"
              if (transform_hlds__dead_proc_elim__succeeded)
#line 1092 "dead_proc_elim.m"
                {
#line 1092 "dead_proc_elim.m"
                  transform_hlds__dead_proc_elim__succeeded = check_hlds__simplify__simplify_proc__simplify_may_introduce_calls_3_p_0(transform_hlds__dead_proc_elim__PredModuleName_16, transform_hlds__dead_proc_elim__PredName_14, transform_hlds__dead_proc_elim__PredArity_15);
                }
#line 1091 "dead_proc_elim.m"
            }
#line 1083 "dead_proc_elim.m"
            if (!(transform_hlds__dead_proc_elim__succeeded))
#line 1083 "dead_proc_elim.m"
              {
#line 1100 "dead_proc_elim.m"
                {
#line 1100 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_28_28;

#line 1100 "dead_proc_elim.m"
                  {
#line 1100 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__V_28_28 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
                  }
#line 1100 "dead_proc_elim.m"
                  {
#line 1100 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__dead_proc_elim__PredModule_13, transform_hlds__dead_proc_elim__V_28_28);
                  }
#line 1100 "dead_proc_elim.m"
                  if (transform_hlds__dead_proc_elim__succeeded)
#line 1101 "dead_proc_elim.m"
                    {
#line 1101 "dead_proc_elim.m"
                      transform_hlds__dead_proc_elim__succeeded = check_hlds__try_expand__try_expand_may_introduce_calls_2_p_0(transform_hlds__dead_proc_elim__PredName_14, transform_hlds__dead_proc_elim__PredArity_15);
                    }
#line 1100 "dead_proc_elim.m"
                }
#line 1083 "dead_proc_elim.m"
                if (!(transform_hlds__dead_proc_elim__succeeded))
#line 1083 "dead_proc_elim.m"
                  {
#line 1105 "dead_proc_elim.m"
                    {
#line 1106 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__V_22_22;
#line 1106 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__V_29_29;

#line 1105 "dead_proc_elim.m"
                      {
#line 1105 "dead_proc_elim.m"
                        transform_hlds__dead_proc_elim__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__dead_proc_elim__PredInfo_12);
                      }
#line 1105 "dead_proc_elim.m"
                      transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 1105 "dead_proc_elim.m"
                      if (transform_hlds__dead_proc_elim__succeeded)
#line 1105 "dead_proc_elim.m"
                        {
#line 1106 "dead_proc_elim.m"
                          transform_hlds__dead_proc_elim__V_22_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1106 "dead_proc_elim.m"
                          {
#line 1106 "dead_proc_elim.m"
                            hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__dead_proc_elim__PredInfo_12, &transform_hlds__dead_proc_elim__V_29_29);
                          }
#line 1106 "dead_proc_elim.m"
                          {
#line 1106 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__succeeded = hlds__hlds_pred____Unify____import_status_0_0(transform_hlds__dead_proc_elim__V_22_22, transform_hlds__dead_proc_elim__V_29_29);
                          }
#line 1106 "dead_proc_elim.m"
                          transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 1105 "dead_proc_elim.m"
                        }
#line 1105 "dead_proc_elim.m"
                    }
#line 1083 "dead_proc_elim.m"
                    if (!(transform_hlds__dead_proc_elim__succeeded))
#line 1083 "dead_proc_elim.m"
                      {
#line 1110 "dead_proc_elim.m"
                        {
#line 1110 "dead_proc_elim.m"
                          MR_Word transform_hlds__dead_proc_elim__V_30_30;

#line 1110 "dead_proc_elim.m"
                          {
#line 1110 "dead_proc_elim.m"
                            hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_9, &transform_hlds__dead_proc_elim__V_30_30);
                          }
#line 1110 "dead_proc_elim.m"
                          {
#line 1110 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__dead_proc_elim__PredModule_13, transform_hlds__dead_proc_elim__V_30_30);
                          }
#line 1110 "dead_proc_elim.m"
                        }
#line 1083 "dead_proc_elim.m"
                        if (!(transform_hlds__dead_proc_elim__succeeded))
#line 1083 "dead_proc_elim.m"
                          {
#line 1115 "dead_proc_elim.m"
                            {
#line 1115 "dead_proc_elim.m"
                              MR_String transform_hlds__dead_proc_elim__V_17_17;

#line 1115 "dead_proc_elim.m"
                              {
#line 1115 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__succeeded = mercury__string__remove_suffix_3_p_0(transform_hlds__dead_proc_elim__PredName_14, (MR_String) "_init_any", &transform_hlds__dead_proc_elim__V_17_17);
                              }
#line 1115 "dead_proc_elim.m"
                              if (transform_hlds__dead_proc_elim__succeeded)
#line 1116 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__PredArity_15 == (MR_Integer) 1);
#line 1115 "dead_proc_elim.m"
                            }
#line 1083 "dead_proc_elim.m"
                            if (!(transform_hlds__dead_proc_elim__succeeded))
#line 1119 "dead_proc_elim.m"
                              {
#line 1119 "dead_proc_elim.m"
                                MR_Word transform_hlds__dead_proc_elim__V_18_18;

#line 1119 "dead_proc_elim.m"
                                {
#line 1119 "dead_proc_elim.m"
                                  transform_hlds__dead_proc_elim__succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(transform_hlds__dead_proc_elim__PredInfo_12, &transform_hlds__dead_proc_elim__V_18_18);
                                }
#line 1119 "dead_proc_elim.m"
                              }
#line 1083 "dead_proc_elim.m"
                          }
#line 1083 "dead_proc_elim.m"
                      }
#line 1083 "dead_proc_elim.m"
                  }
#line 1083 "dead_proc_elim.m"
              }
#line 1083 "dead_proc_elim.m"
          }
#line 1083 "dead_proc_elim.m"
      }
#line 1124 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 1122 "dead_proc_elim.m"
      {
#line 1122 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_23_23;

#line 1122 "dead_proc_elim.m"
        {
#line 1122 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1122 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_23_23, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredModule_13));
#line 1122 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_23_23, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__PredName_14));
#line 1122 "dead_proc_elim.m"
        }
#line 1122 "dead_proc_elim.m"
        {
#line 1122 "dead_proc_elim.m"
          mercury__set_tree234__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (transform_hlds__dead_proc_elim__V_23_23)), transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_20_20, &transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_24_24);
        }
#line 1123 "dead_proc_elim.m"
        {
#line 1123 "dead_proc_elim.m"
          mercury__queue__put_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_4)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_19, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_25);
        }
#line 1122 "dead_proc_elim.m"
      }
#line 1124 "dead_proc_elim.m"
    else
#line 1125 "dead_proc_elim.m"
      {
#line 1125 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_24_24 = transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_20_20;
#line 1125 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_25 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_19;
#line 1125 "dead_proc_elim.m"
      }
#line 1127 "dead_proc_elim.m"
    {
#line 1127 "dead_proc_elim.m"
      MR_Word base;
#line 1127 "dead_proc_elim.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1127 "dead_proc_elim.m"
      *transform_hlds__dead_proc_elim__DeadInfo_6 = base;
#line 1127 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ModuleInfo_9));
#line 1127 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_25));
#line 1127 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__Examined_10));
#line 1127 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__NeededIds_11));
#line 1127 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_24_24));
#line 1127 "dead_proc_elim.m"
    }
#line 1073 "dead_proc_elim.m"
  }
#line 1067 "dead_proc_elim.m"
}

#line 1056 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_add_entity_5_p_0(
#line 1056 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 1056 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 1056 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 1056 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_0_4,
#line 1056 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_5)
#line 1056 "dead_proc_elim.m"
{
#line 1060 "dead_proc_elim.m"
  {
#line 1060 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 1060 "dead_proc_elim.m"
#line 1060 "dead_proc_elim.m"
    switch (MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__1_1)) {
#line 1060 "dead_proc_elim.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1060 "dead_proc_elim.m"
      case (MR_Integer) 0:
#line 1060 "dead_proc_elim.m"
        {
#line 1060 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 1060 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 1060 "dead_proc_elim.m"
          MR_Integer transform_hlds__dead_proc_elim__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));

#line 1061 "dead_proc_elim.m"
          {
#line 1061 "dead_proc_elim.m"
            mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_40_40, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_6)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3);
          }
#line 1062 "dead_proc_elim.m"
          {
#line 1062 "dead_proc_elim.m"
            mercury__set_tree234__insert_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_40_40, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_6)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_0_4, transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_5);
#line 1062 "dead_proc_elim.m"
            return;
          }
#line 1060 "dead_proc_elim.m"
        }
#line 1060 "dead_proc_elim.m"
        break;
#line 1060 "dead_proc_elim.m"
      case (MR_Integer) 1:
#line 1063 "dead_proc_elim.m"
        {
#line 1063 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_0_4;
#line 1063 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2;
#line 1063 "dead_proc_elim.m"
        }
#line 1060 "dead_proc_elim.m"
        break;
#line 1060 "dead_proc_elim.m"
      case (MR_Integer) 2:
#line 1064 "dead_proc_elim.m"
        {
#line 1064 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_0_4;
#line 1064 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2;
#line 1064 "dead_proc_elim.m"
        }
#line 1060 "dead_proc_elim.m"
        break;
#line 1060 "dead_proc_elim.m"
      case (MR_Integer) 3:
#line 1065 "dead_proc_elim.m"
        {
#line 1065 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_0_4;
#line 1065 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2;
#line 1065 "dead_proc_elim.m"
        }
#line 1060 "dead_proc_elim.m"
        break;
#line 1060 "dead_proc_elim.m"
    }
#line 1060 "dead_proc_elim.m"
  }
#line 1056 "dead_proc_elim.m"
}

#line 960 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_const_structs_4_p_0(
#line 960 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 960 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 960 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_0_3,
#line 960 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_4)
#line 960 "dead_proc_elim.m"
{
#line 963 "dead_proc_elim.m"
  while (MR_TRUE)
#line 963 "dead_proc_elim.m"
    {
#line 963 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 963 "dead_proc_elim.m"
      {
#line 963 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 963 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 963 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_0_3;
#line 963 "dead_proc_elim.m"
        else
#line 965 "dead_proc_elim.m"
          {
#line 965 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__ConstNum_9;
#line 965 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__ConstNumStructs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 965 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Entity_14;
#line 965 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 965 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_19_19;
#line 964 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_10_10;
#line 967 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_15_15;
#line 967 "dead_proc_elim.m"
            MR_Box transform_hlds__dead_proc_elim__conv0_V_15_15;

#line 964 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__ConstNum_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_18_18, (MR_Integer) 0)));
#line 964 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_18_18, (MR_Integer) 1)));
#line 966 "dead_proc_elim.m"
            {
#line 966 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__Entity_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 966 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Entity_14, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ConstNum_9));
#line 966 "dead_proc_elim.m"
            }
#line 967 "dead_proc_elim.m"
            {
#line 967 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, transform_hlds__dead_proc_elim__HeadVar__2_2, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_14)), &transform_hlds__dead_proc_elim__conv0_V_15_15);
            }
#line 967 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 967 "dead_proc_elim.m"
              {
#line 967 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__V_15_15 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_V_15_15);
#line 967 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 967 "dead_proc_elim.m"
              }
#line 969 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 969 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_19_19 = transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_0_3;
#line 969 "dead_proc_elim.m"
            else
#line 970 "dead_proc_elim.m"
              {
#line 970 "dead_proc_elim.m"
                hlds__const_struct__delete_const_struct_3_p_0(transform_hlds__dead_proc_elim__ConstNum_9, transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_0_3, &transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_19_19);
              }
#line 972 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 972 "dead_proc_elim.m"
            {
#line 972 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1 = transform_hlds__dead_proc_elim__ConstNumStructs_11;
#line 972 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_0__tmp_copy_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_19_19;

#line 972 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_0_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_0__tmp_copy_3;
#line 972 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1;
#line 972 "dead_proc_elim.m"
            }
#line 972 "dead_proc_elim.m"
            continue;
#line 965 "dead_proc_elim.m"
          }
#line 963 "dead_proc_elim.m"
      }
#line 963 "dead_proc_elim.m"
      break;
#line 963 "dead_proc_elim.m"
    }
#line 960 "dead_proc_elim.m"
}

#line 941 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_type_ctor_infos_3_p_0(
#line 941 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 941 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 941 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__3_3)
#line 941 "dead_proc_elim.m"
{
#line 944 "dead_proc_elim.m"
  {
#line 944 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 944 "dead_proc_elim.m"
    if ((transform_hlds__dead_proc_elim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 944 "dead_proc_elim.m"
      *transform_hlds__dead_proc_elim__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 944 "dead_proc_elim.m"
    else
#line 946 "dead_proc_elim.m"
      {
#line 946 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfo0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 946 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfos0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 946 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfos1_9;
#line 946 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__ModuleName_11;
#line 946 "dead_proc_elim.m"
        MR_String transform_hlds__dead_proc_elim__TypeName_12;
#line 946 "dead_proc_elim.m"
        MR_Integer transform_hlds__dead_proc_elim__Arity_13;
#line 949 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim___TypeCtor_10;
#line 949 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim___Status_14;
#line 949 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim___HldsDefn_15;
#line 949 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim___Unify_16;
#line 949 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim___Compare_17;
#line 952 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__Entity_18;
#line 953 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_19_19;
#line 953 "dead_proc_elim.m"
        MR_Box transform_hlds__dead_proc_elim__conv0_V_19_19;

#line 947 "dead_proc_elim.m"
        {
#line 947 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__dead_proc_eliminate_type_ctor_infos_3_p_0(transform_hlds__dead_proc_elim__TypeCtorGenInfos0_6, transform_hlds__dead_proc_elim__HeadVar__2_2, &transform_hlds__dead_proc_elim__TypeCtorGenInfos1_9);
        }
#line 949 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim___TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo0_5, (MR_Integer) 0)));
#line 949 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo0_5, (MR_Integer) 1)));
#line 949 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__TypeName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo0_5, (MR_Integer) 2)));
#line 949 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo0_5, (MR_Integer) 3)));
#line 949 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim___Status_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo0_5, (MR_Integer) 4)));
#line 949 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim___HldsDefn_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo0_5, (MR_Integer) 5)));
#line 949 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim___Unify_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo0_5, (MR_Integer) 6)));
#line 949 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim___Compare_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo0_5, (MR_Integer) 7)));
#line 952 "dead_proc_elim.m"
        {
#line 952 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__Entity_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 952 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_18, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ModuleName_11));
#line 952 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_18, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__TypeName_12));
#line 952 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_18, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__Arity_13));
#line 952 "dead_proc_elim.m"
        }
#line 953 "dead_proc_elim.m"
        {
#line 953 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, transform_hlds__dead_proc_elim__HeadVar__2_2, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_18)), &transform_hlds__dead_proc_elim__conv0_V_19_19);
        }
#line 953 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 953 "dead_proc_elim.m"
          {
#line 953 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__V_19_19 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_V_19_19);
#line 953 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 953 "dead_proc_elim.m"
          }
#line 956 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 955 "dead_proc_elim.m"
          {
#line 955 "dead_proc_elim.m"
            MR_Word base;
#line 955 "dead_proc_elim.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 955 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__HeadVar__3_3 = base;
#line 955 "dead_proc_elim.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__TypeCtorGenInfo0_5));
#line 955 "dead_proc_elim.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__TypeCtorGenInfos1_9));
#line 955 "dead_proc_elim.m"
          }
#line 956 "dead_proc_elim.m"
        else
#line 957 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__HeadVar__3_3 = transform_hlds__dead_proc_elim__TypeCtorGenInfos1_9;
#line 946 "dead_proc_elim.m"
      }
#line 944 "dead_proc_elim.m"
  }
#line 941 "dead_proc_elim.m"
}

#line 880 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_p_0(
#line 880 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__PredId_12,
#line 880 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Keep_13,
#line 880 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__WarnForThisPred_14,
#line 880 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ProcElimInfo_15,
#line 880 "dead_proc_elim.m"
  MR_Integer transform_hlds__dead_proc_elim__ProcId_16,
#line 880 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcTable_0_30,
#line 880 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcTable_31,
#line 880 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Changed_0_32,
#line 880 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Changed_33,
#line 880 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Specs_0_34,
#line 880 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Specs_35)
#line 880 "dead_proc_elim.m"
{
#line 885 "dead_proc_elim.m"
  {
#line 885 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 885 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Needed_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo_15, (MR_Integer) 0)));
#line 885 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ModuleInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo_15, (MR_Integer) 1)));
#line 886 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo_15, (MR_Integer) 2)));
#line 886 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo_15, (MR_Integer) 3)));
#line 886 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo_15, (MR_Integer) 4)));

#line 891 "dead_proc_elim.m"
    {
#line 891 "dead_proc_elim.m"
      MR_Word transform_hlds__dead_proc_elim__V_36_36;
#line 891 "dead_proc_elim.m"
      MR_Word transform_hlds__dead_proc_elim__V_22_22;
#line 891 "dead_proc_elim.m"
      MR_Box transform_hlds__dead_proc_elim__conv0_V_22_22;

#line 891 "dead_proc_elim.m"
      {
#line 891 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 891 "dead_proc_elim.m"
        MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_36_36, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_12));
#line 891 "dead_proc_elim.m"
        MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_36_36, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_16));
#line 891 "dead_proc_elim.m"
      }
#line 891 "dead_proc_elim.m"
      {
#line 891 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, transform_hlds__dead_proc_elim__Needed_20, ((MR_Box) (transform_hlds__dead_proc_elim__V_36_36)), &transform_hlds__dead_proc_elim__conv0_V_22_22);
      }
#line 891 "dead_proc_elim.m"
      if (transform_hlds__dead_proc_elim__succeeded)
#line 891 "dead_proc_elim.m"
        {
#line 891 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__V_22_22 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_V_22_22);
#line 891 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 891 "dead_proc_elim.m"
        }
#line 891 "dead_proc_elim.m"
    }
#line 892 "dead_proc_elim.m"
    if (!(transform_hlds__dead_proc_elim__succeeded))
#line 894 "dead_proc_elim.m"
      {
#line 894 "dead_proc_elim.m"
        MR_Integer transform_hlds__dead_proc_elim__V_56_56;

#line 894 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__succeeded = ((MR_tag((MR_Word) transform_hlds__dead_proc_elim__Keep_13)) == (MR_mktag((MR_Integer) 1)));
#line 894 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 894 "dead_proc_elim.m"
          {
#line 894 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__Keep_13, (MR_Integer) 0)));
#line 894 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__ProcId_16 == transform_hlds__dead_proc_elim__V_56_56);
#line 894 "dead_proc_elim.m"
          }
#line 894 "dead_proc_elim.m"
      }
#line 898 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 897 "dead_proc_elim.m"
      {
#line 897 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Specs_35 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Specs_0_34;
#line 897 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Changed_33 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Changed_0_32;
#line 897 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcTable_31 = transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcTable_0_30;
#line 897 "dead_proc_elim.m"
      }
#line 898 "dead_proc_elim.m"
    else
#line 899 "dead_proc_elim.m"
      {
#line 899 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_54_54;
#line 899 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_55_55;
#line 899 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__Globals_23;
#line 899 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__VeryVerbose_24;
#line 899 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__ProcInfo0_26;
#line 899 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__HasForeignExports_27;
#line 912 "dead_proc_elim.m"
        MR_Box transform_hlds__dead_proc_elim__conv1_ProcInfo0_26;

#line 899 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Changed_33 = (MR_Integer) 1;
#line 900 "dead_proc_elim.m"
        {
#line 900 "dead_proc_elim.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_21, &transform_hlds__dead_proc_elim__Globals_23);
        }
#line 901 "dead_proc_elim.m"
        {
#line 901 "dead_proc_elim.m"
          libs__globals__lookup_bool_option_3_p_0(transform_hlds__dead_proc_elim__Globals_23, (MR_Integer) 46, &transform_hlds__dead_proc_elim__VeryVerbose_24);
        }
#line 909 "dead_proc_elim.m"
#line 909 "dead_proc_elim.m"
        switch (transform_hlds__dead_proc_elim__VeryVerbose_24) {
#line 909 "dead_proc_elim.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 909 "dead_proc_elim.m"
          case (MR_Integer) 0:
#line 910 "dead_proc_elim.m"
            {
#line 910 "dead_proc_elim.m"
            }
#line 909 "dead_proc_elim.m"
            break;
#line 909 "dead_proc_elim.m"
          case (MR_Integer) 1:
#line 904 "dead_proc_elim.m"
            {
#line 905 "dead_proc_elim.m"
              {
#line 905 "dead_proc_elim.m"
                hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Eliminated the dead procedure ", transform_hlds__dead_proc_elim__PredId_12, transform_hlds__dead_proc_elim__ProcId_16, transform_hlds__dead_proc_elim__ModuleInfo_21);
              }
#line 904 "dead_proc_elim.m"
            }
#line 909 "dead_proc_elim.m"
            break;
#line 909 "dead_proc_elim.m"
        }
#line 6427 "transform_hlds.dead_proc_elim.c"
        transform_hlds__dead_proc_elim__TypeCtorInfo_54_54 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 6429 "transform_hlds.dead_proc_elim.c"
        transform_hlds__dead_proc_elim__TypeCtorInfo_55_55 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 912 "dead_proc_elim.m"
        {
#line 912 "dead_proc_elim.m"
          mercury__map__lookup_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_54_54, transform_hlds__dead_proc_elim__TypeCtorInfo_55_55, transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcTable_0_30, ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_16)), &transform_hlds__dead_proc_elim__conv1_ProcInfo0_26);
        }
#line 912 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__ProcInfo0_26 = ((MR_Word) transform_hlds__dead_proc_elim__conv1_ProcInfo0_26);
#line 913 "dead_proc_elim.m"
        {
#line 913 "dead_proc_elim.m"
          hlds__hlds_pred__proc_info_get_has_any_foreign_exports_2_p_0(transform_hlds__dead_proc_elim__ProcInfo0_26, &transform_hlds__dead_proc_elim__HasForeignExports_27);
        }
#line 915 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__WarnForThisPred_14 == (MR_Integer) 1);
#line 915 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 916 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__HasForeignExports_27 == (MR_Integer) 0);
#line 921 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 918 "dead_proc_elim.m"
          {
#line 918 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_43_95;
#line 918 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Context_28;
#line 918 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Spec_29;
#line 918 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__ProcPieces_63;
#line 918 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Pieces_64;
#line 918 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Msg_65;
#line 918 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_68_68;
#line 918 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_73_73;
#line 918 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_80_80;
#line 918 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_81_81;
#line 918 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_84_84;
#line 918 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_85_85;
#line 918 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_93_93;

#line 918 "dead_proc_elim.m"
            {
#line 918 "dead_proc_elim.m"
              hlds__hlds_pred__proc_info_get_context_2_p_0(transform_hlds__dead_proc_elim__ProcInfo0_26, &transform_hlds__dead_proc_elim__Context_28);
            }
#line 932 "dead_proc_elim.m"
            {
#line 932 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 932 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_68_68, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_12));
#line 932 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_68_68, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_16));
#line 932 "dead_proc_elim.m"
            }
#line 931 "dead_proc_elim.m"
            {
#line 931 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__ProcPieces_63 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__dead_proc_elim__ModuleInfo_21, (MR_Integer) 1, transform_hlds__dead_proc_elim__V_68_68);
            }
#line 6500 "transform_hlds.dead_proc_elim.c"
            transform_hlds__dead_proc_elim__TypeCtorInfo_43_95 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 933 "dead_proc_elim.m"
            {
#line 933 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__V_73_73 = mercury__list__f_43_43_2_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_43_95, transform_hlds__dead_proc_elim__ProcPieces_63, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_1[10]));
            }
#line 933 "dead_proc_elim.m"
            {
#line 933 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__Pieces_64 = mercury__list__f_43_43_2_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_43_95, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_1[12]), transform_hlds__dead_proc_elim__V_73_73);
            }
#line 936 "dead_proc_elim.m"
            {
#line 936 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 936 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_85_85, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Pieces_64));
#line 936 "dead_proc_elim.m"
            }
#line 936 "dead_proc_elim.m"
            {
#line 936 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_84_84, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__V_85_85));
#line 936 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 936 "dead_proc_elim.m"
            }
#line 936 "dead_proc_elim.m"
            {
#line 936 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_81_81, 0) = ((MR_Box) (((MR_Integer) 29 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 936 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_81_81, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__V_84_84));
#line 936 "dead_proc_elim.m"
            }
#line 936 "dead_proc_elim.m"
            {
#line 936 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_80_80, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__V_81_81));
#line 936 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 936 "dead_proc_elim.m"
            }
#line 935 "dead_proc_elim.m"
            {
#line 935 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__Msg_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 935 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Msg_65, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Context_28));
#line 935 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Msg_65, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__V_80_80));
#line 935 "dead_proc_elim.m"
            }
#line 939 "dead_proc_elim.m"
            {
#line 939 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_93_93, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Msg_65));
#line 939 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "dead_proc_elim.m"
            }
#line 939 "dead_proc_elim.m"
            {
#line 939 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__Spec_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 939 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Spec_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_3[0])));
#line 939 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Spec_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 939 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Spec_29, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__V_93_93));
#line 939 "dead_proc_elim.m"
            }
#line 920 "dead_proc_elim.m"
            {
#line 920 "dead_proc_elim.m"
              MR_Word base;
#line 920 "dead_proc_elim.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 920 "dead_proc_elim.m"
              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Specs_35 = base;
#line 920 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Spec_29));
#line 920 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Specs_0_34));
#line 920 "dead_proc_elim.m"
            }
#line 918 "dead_proc_elim.m"
          }
#line 921 "dead_proc_elim.m"
        else
#line 921 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Specs_35 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Specs_0_34;
#line 924 "dead_proc_elim.m"
        {
#line 924 "dead_proc_elim.m"
          mercury__map__delete_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_54_54, transform_hlds__dead_proc_elim__TypeCtorInfo_55_55, ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_16)), transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcTable_0_30, transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcTable_31);
#line 924 "dead_proc_elim.m"
          return;
        }
#line 899 "dead_proc_elim.m"
      }
#line 885 "dead_proc_elim.m"
  }
#line 880 "dead_proc_elim.m"
}

#line 847 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0_2(
#line 847 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 847 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 847 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 847 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 847 "dead_proc_elim.m"
{
#line 847 "dead_proc_elim.m"
  {
#line 847 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 847 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv7_HeadVar__4_44;

#line 847 "dead_proc_elim.m"
    {
#line 847 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_proc_eliminate_pred__847__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv7_HeadVar__4_44);
    }
#line 847 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv7_HeadVar__4_44));
#line 847 "dead_proc_elim.m"
  }
#line 847 "dead_proc_elim.m"
}

#line 826 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0_1(
#line 826 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 826 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 826 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 826 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 826 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 826 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5,
#line 826 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_6,
#line 826 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_7)
#line 826 "dead_proc_elim.m"
{
#line 826 "dead_proc_elim.m"
  {
#line 826 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 826 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_ProcTable_31;
#line 826 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Changed_33;
#line 826 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Specs_35;

#line 826 "dead_proc_elim.m"
    {
#line 826 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__closure, (MR_Integer) 6))), ((MR_Integer) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_ProcTable_31, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_4), &transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Changed_33, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_6), &transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Specs_35);
    }
#line 826 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_ProcTable_31));
#line 826 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_5 = ((MR_Box) (transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Changed_33));
#line 826 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_7 = ((MR_Box) (transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Specs_35));
#line 826 "dead_proc_elim.m"
  }
#line 826 "dead_proc_elim.m"
}

#line 777 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0(
#line 777 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ElimOptImported_5,
#line 777 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__PredId_6,
#line 777 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_0_36,
#line 777 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_37)
#line 777 "dead_proc_elim.m"
{
#line 780 "dead_proc_elim.m"
  {
#line 780 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 780 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_68_68 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 780 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_69_69 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 780 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Needed_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_0_36, (MR_Integer) 0)));
#line 780 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ModuleInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_0_36, (MR_Integer) 1)));
#line 780 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredTable0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_0_36, (MR_Integer) 2)));
#line 780 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Changed0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_0_36, (MR_Integer) 3)));
#line 780 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Specs0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_0_36, (MR_Integer) 4)));
#line 780 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredInfo0_13;
#line 780 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Status_14;
#line 783 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv0_PredInfo0_13;
#line 833 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Keep_15;
#line 833 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__WarnForThisPred_16;

#line 783 "dead_proc_elim.m"
    {
#line 783 "dead_proc_elim.m"
      mercury__map__lookup_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_68_68, transform_hlds__dead_proc_elim__TypeCtorInfo_69_69, transform_hlds__dead_proc_elim__PredTable0_10, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_6)), &transform_hlds__dead_proc_elim__conv0_PredInfo0_13);
    }
#line 783 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__PredInfo0_13 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_PredInfo0_13);
#line 784 "dead_proc_elim.m"
    {
#line 784 "dead_proc_elim.m"
      hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__dead_proc_elim__PredInfo0_13, &transform_hlds__dead_proc_elim__Status_14);
    }
#line 813 "dead_proc_elim.m"
#line 813 "dead_proc_elim.m"
    switch (MR_tag((MR_Word) transform_hlds__dead_proc_elim__Status_14)) {
#line 813 "dead_proc_elim.m"
      default:
#line 813 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__succeeded = MR_FALSE;
#line 813 "dead_proc_elim.m"
        break;
#line 813 "dead_proc_elim.m"
      case (MR_Integer) 0:
#line 813 "dead_proc_elim.m"
#line 813 "dead_proc_elim.m"
        switch (MR_unmkbody(transform_hlds__dead_proc_elim__Status_14)) {
#line 813 "dead_proc_elim.m"
          default:
#line 813 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__succeeded = MR_FALSE;
#line 813 "dead_proc_elim.m"
            break;
#line 813 "dead_proc_elim.m"
          case (MR_Integer) 2:
#line 814 "dead_proc_elim.m"
            {
#line 815 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__Keep_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 816 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__WarnForThisPred_16 = (MR_Integer) 0;
#line 814 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 814 "dead_proc_elim.m"
            }
#line 813 "dead_proc_elim.m"
            break;
#line 813 "dead_proc_elim.m"
          case (MR_Integer) 6:
#line 818 "dead_proc_elim.m"
            {
#line 818 "dead_proc_elim.m"
              MR_Integer transform_hlds__dead_proc_elim__InitProcId_18;

#line 819 "dead_proc_elim.m"
              {
#line 819 "dead_proc_elim.m"
                hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&transform_hlds__dead_proc_elim__InitProcId_18);
              }
#line 820 "dead_proc_elim.m"
              {
#line 820 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__Keep_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 820 "dead_proc_elim.m"
                MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__Keep_15, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__InitProcId_18));
#line 820 "dead_proc_elim.m"
              }
#line 821 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__WarnForThisPred_16 = (MR_Integer) 0;
#line 818 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 818 "dead_proc_elim.m"
            }
#line 813 "dead_proc_elim.m"
            break;
#line 813 "dead_proc_elim.m"
          case (MR_Integer) 8:
#line 789 "dead_proc_elim.m"
            {
#line 790 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__Keep_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 794 "dead_proc_elim.m"
              {
#line 794 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__dead_proc_elim__PredInfo0_13);
              }
#line 797 "dead_proc_elim.m"
              if (transform_hlds__dead_proc_elim__succeeded)
#line 796 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__WarnForThisPred_16 = (MR_Integer) 0;
#line 797 "dead_proc_elim.m"
              else
#line 810 "dead_proc_elim.m"
                {
#line 804 "dead_proc_elim.m"
                  MR_String transform_hlds__dead_proc_elim__PredName_17;

#line 804 "dead_proc_elim.m"
                  {
#line 804 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__PredName_17 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__dead_proc_elim__PredInfo0_13);
                  }
#line 805 "dead_proc_elim.m"
                  {
#line 805 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__succeeded = mercury__string__prefix_2_p_0(transform_hlds__dead_proc_elim__PredName_17, (MR_String) "IntroducedFrom__");
                  }
#line 806 "dead_proc_elim.m"
                  if (!(transform_hlds__dead_proc_elim__succeeded))
#line 806 "dead_proc_elim.m"
                    {
#line 806 "dead_proc_elim.m"
                      {
#line 806 "dead_proc_elim.m"
                        transform_hlds__dead_proc_elim__succeeded = mercury__string__prefix_2_p_0(transform_hlds__dead_proc_elim__PredName_17, (MR_String) "TypeSpecOf__");
                      }
#line 806 "dead_proc_elim.m"
                    }
#line 810 "dead_proc_elim.m"
                  if (transform_hlds__dead_proc_elim__succeeded)
#line 809 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__WarnForThisPred_16 = (MR_Integer) 0;
#line 810 "dead_proc_elim.m"
                  else
#line 811 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__WarnForThisPred_16 = (MR_Integer) 1;
#line 810 "dead_proc_elim.m"
                }
#line 789 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 789 "dead_proc_elim.m"
            }
#line 813 "dead_proc_elim.m"
            break;
#line 813 "dead_proc_elim.m"
        }
#line 813 "dead_proc_elim.m"
        break;
#line 813 "dead_proc_elim.m"
    }
#line 833 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 824 "dead_proc_elim.m"
      {
#line 824 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__ProcIds_19;
#line 824 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__ProcTable0_20;
#line 824 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__ProcTable_21;
#line 824 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__Changed_22;
#line 824 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__Specs_23;
#line 824 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__PredInfo_24;
#line 824 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__PredTable_25;
#line 824 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_40_40;
#line 826 "dead_proc_elim.m"
        MR_Box transform_hlds__dead_proc_elim__conv6_ProcTable_21;
#line 826 "dead_proc_elim.m"
        MR_Box transform_hlds__dead_proc_elim__conv5_Changed_22;
#line 826 "dead_proc_elim.m"
        MR_Box transform_hlds__dead_proc_elim__conv4_Specs_23;

#line 824 "dead_proc_elim.m"
        {
#line 824 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__ProcIds_19 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__dead_proc_elim__PredInfo0_13);
        }
#line 825 "dead_proc_elim.m"
        {
#line 825 "dead_proc_elim.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__dead_proc_elim__PredInfo0_13, &transform_hlds__dead_proc_elim__ProcTable0_20);
        }
#line 826 "dead_proc_elim.m"
        {
#line 826 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 826 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_40_40, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_9[0]));
#line 826 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_40_40, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0_1));
#line 826 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 826 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_40_40, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_6));
#line 826 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_40_40, 4) = ((MR_Box) (transform_hlds__dead_proc_elim__Keep_15));
#line 826 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_40_40, 5) = ((MR_Box) (transform_hlds__dead_proc_elim__WarnForThisPred_16));
#line 826 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_40_40, 6) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_0_36));
#line 826 "dead_proc_elim.m"
        }
#line 826 "dead_proc_elim.m"
        {
#line 826 "dead_proc_elim.m"
          mercury__list__foldl3_8_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[1], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[5], transform_hlds__dead_proc_elim__V_40_40, transform_hlds__dead_proc_elim__ProcIds_19, ((MR_Box) (transform_hlds__dead_proc_elim__ProcTable0_20)), &transform_hlds__dead_proc_elim__conv6_ProcTable_21, ((MR_Box) (transform_hlds__dead_proc_elim__Changed0_11)), &transform_hlds__dead_proc_elim__conv5_Changed_22, ((MR_Box) (transform_hlds__dead_proc_elim__Specs0_12)), &transform_hlds__dead_proc_elim__conv4_Specs_23);
        }
#line 826 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__ProcTable_21 = ((MR_Word) transform_hlds__dead_proc_elim__conv6_ProcTable_21);
#line 826 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__Changed_22 = ((MR_Word) transform_hlds__dead_proc_elim__conv5_Changed_22);
#line 826 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__Specs_23 = ((MR_Word) transform_hlds__dead_proc_elim__conv4_Specs_23);
#line 829 "dead_proc_elim.m"
        {
#line 829 "dead_proc_elim.m"
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__dead_proc_elim__ProcTable_21, transform_hlds__dead_proc_elim__PredInfo0_13, &transform_hlds__dead_proc_elim__PredInfo_24);
        }
#line 830 "dead_proc_elim.m"
        {
#line 830 "dead_proc_elim.m"
          mercury__map__det_update_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_68_68, transform_hlds__dead_proc_elim__TypeCtorInfo_69_69, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_6)), ((MR_Box) (transform_hlds__dead_proc_elim__PredInfo_24)), transform_hlds__dead_proc_elim__PredTable0_10, &transform_hlds__dead_proc_elim__PredTable_25);
        }
#line 831 "dead_proc_elim.m"
        {
#line 831 "dead_proc_elim.m"
          MR_Word base;
#line 831 "dead_proc_elim.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 831 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_37 = base;
#line 831 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Needed_8));
#line 831 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ModuleInfo_9));
#line 831 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__PredTable_25));
#line 831 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__Changed_22));
#line 831 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__dead_proc_elim__Specs_23));
#line 831 "dead_proc_elim.m"
        }
#line 824 "dead_proc_elim.m"
      }
#line 833 "dead_proc_elim.m"
    else
#line 873 "dead_proc_elim.m"
      {
#line 839 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__ElimOptImported_5 == (MR_Integer) 0);
#line 839 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 840 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__Status_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 873 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 842 "dead_proc_elim.m"
          {
#line 842 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__DestroyGoal_26;
#line 842 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PredInfo1_32;
#line 842 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Globals_33;
#line 842 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__VeryVerbose_34;
#line 842 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__ProcIds_56;
#line 842 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__ProcTable0_57;
#line 842 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__ProcTable_58;
#line 842 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PredInfo_60;
#line 842 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PredTable_61;
#line 853 "dead_proc_elim.m"
            MR_Box transform_hlds__dead_proc_elim__conv8_ProcTable_58;

#line 843 "dead_proc_elim.m"
            {
#line 843 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__ProcIds_56 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__dead_proc_elim__PredInfo0_13);
            }
#line 844 "dead_proc_elim.m"
            {
#line 844 "dead_proc_elim.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__dead_proc_elim__PredInfo0_13, &transform_hlds__dead_proc_elim__ProcTable0_57);
            }
#line 847 "dead_proc_elim.m"
            {
#line 847 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__DestroyGoal_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 847 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DestroyGoal_26, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_6[2]));
#line 847 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DestroyGoal_26, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0_2));
#line 847 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DestroyGoal_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 847 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DestroyGoal_26, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcTable0_57));
#line 847 "dead_proc_elim.m"
            }
#line 853 "dead_proc_elim.m"
            {
#line 853 "dead_proc_elim.m"
              mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[1], transform_hlds__dead_proc_elim__DestroyGoal_26, transform_hlds__dead_proc_elim__ProcIds_56, ((MR_Box) (transform_hlds__dead_proc_elim__ProcTable0_57)), &transform_hlds__dead_proc_elim__conv8_ProcTable_58);
            }
#line 853 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__ProcTable_58 = ((MR_Word) transform_hlds__dead_proc_elim__conv8_ProcTable_58);
#line 854 "dead_proc_elim.m"
            {
#line 854 "dead_proc_elim.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__dead_proc_elim__ProcTable_58, transform_hlds__dead_proc_elim__PredInfo0_13, &transform_hlds__dead_proc_elim__PredInfo1_32);
            }
#line 855 "dead_proc_elim.m"
            {
#line 855 "dead_proc_elim.m"
              hlds__hlds_pred__pred_info_set_import_status_3_p_0((MR_Word) MR_mkword(MR_mktag(2), &transform_hlds__dead_proc_elim_scalar_common_8[1]), transform_hlds__dead_proc_elim__PredInfo1_32, &transform_hlds__dead_proc_elim__PredInfo_60);
            }
#line 857 "dead_proc_elim.m"
            {
#line 857 "dead_proc_elim.m"
              mercury__map__det_update_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_68_68, transform_hlds__dead_proc_elim__TypeCtorInfo_69_69, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_6)), ((MR_Box) (transform_hlds__dead_proc_elim__PredInfo_60)), transform_hlds__dead_proc_elim__PredTable0_10, &transform_hlds__dead_proc_elim__PredTable_61);
            }
#line 859 "dead_proc_elim.m"
            {
#line 859 "dead_proc_elim.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_9, &transform_hlds__dead_proc_elim__Globals_33);
            }
#line 860 "dead_proc_elim.m"
            {
#line 860 "dead_proc_elim.m"
              libs__globals__lookup_bool_option_3_p_0(transform_hlds__dead_proc_elim__Globals_33, (MR_Integer) 46, &transform_hlds__dead_proc_elim__VeryVerbose_34);
            }
#line 868 "dead_proc_elim.m"
#line 868 "dead_proc_elim.m"
            switch (transform_hlds__dead_proc_elim__VeryVerbose_34) {
#line 868 "dead_proc_elim.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 868 "dead_proc_elim.m"
              case (MR_Integer) 0:
#line 869 "dead_proc_elim.m"
                {
#line 869 "dead_proc_elim.m"
                }
#line 868 "dead_proc_elim.m"
                break;
#line 868 "dead_proc_elim.m"
              case (MR_Integer) 1:
#line 863 "dead_proc_elim.m"
                {
#line 864 "dead_proc_elim.m"
                  {
#line 864 "dead_proc_elim.m"
                    hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Eliminated opt_imported predicate ", transform_hlds__dead_proc_elim__PredId_6, transform_hlds__dead_proc_elim__ModuleInfo_9);
                  }
#line 863 "dead_proc_elim.m"
                }
#line 868 "dead_proc_elim.m"
                break;
#line 868 "dead_proc_elim.m"
            }
#line 871 "dead_proc_elim.m"
            {
#line 871 "dead_proc_elim.m"
              MR_Word base;
#line 871 "dead_proc_elim.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 871 "dead_proc_elim.m"
              *transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_37 = base;
#line 871 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Needed_8));
#line 871 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ModuleInfo_9));
#line 871 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__PredTable_61));
#line 871 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 1));
#line 871 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__dead_proc_elim__Specs0_12));
#line 871 "dead_proc_elim.m"
            }
#line 842 "dead_proc_elim.m"
          }
#line 873 "dead_proc_elim.m"
        else
#line 873 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_37 = transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_0_36;
#line 873 "dead_proc_elim.m"
      }
#line 780 "dead_proc_elim.m"
  }
#line 777 "dead_proc_elim.m"
}

#line 744 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_5_p_0_1(
#line 744 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 744 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 744 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 744 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 744 "dead_proc_elim.m"
{
#line 744 "dead_proc_elim.m"
  {
#line 744 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 744 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_ProcElimInfo_37;

#line 744 "dead_proc_elim.m"
    {
#line 744 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_ProcElimInfo_37);
    }
#line 744 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_ProcElimInfo_37));
#line 744 "dead_proc_elim.m"
  }
#line 744 "dead_proc_elim.m"
}

#line 735 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_5_p_0(
#line 735 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ElimOptImported_6,
#line 735 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_22,
#line 735 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_23,
#line 735 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_24,
#line 735 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__Specs_9)
#line 735 "dead_proc_elim.m"
{
#line 738 "dead_proc_elim.m"
  {
#line 738 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 738 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredIds_10;
#line 738 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredTable0_11;
#line 738 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ProcElimInfo0_13;
#line 738 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ProcElimInfo_14;
#line 738 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredTable_15;
#line 738 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Changed_16;
#line 738 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfos0_17;
#line 738 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfos_18;
#line 738 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ConstStructDb0_19;
#line 738 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ConstNumStructs0_20;
#line 738 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ConstStructDb_21;
#line 738 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_26_26;
#line 738 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_27;
#line 738 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_28_28;
#line 738 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_29_29;
#line 738 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_30_30;
#line 738 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_31_31;
#line 744 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv1_ProcElimInfo_14;

#line 739 "dead_proc_elim.m"
    {
#line 739 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_23, &transform_hlds__dead_proc_elim__PredIds_10);
    }
#line 740 "dead_proc_elim.m"
    {
#line 740 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_23, &transform_hlds__dead_proc_elim__PredTable0_11);
    }
#line 742 "dead_proc_elim.m"
    {
#line 742 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__ProcElimInfo0_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 742 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo0_13, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_22));
#line 742 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo0_13, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_23));
#line 742 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo0_13, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__PredTable0_11));
#line 742 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo0_13, 3) = ((MR_Box) ((MR_Integer) 0));
#line 742 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo0_13, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 742 "dead_proc_elim.m"
    }
#line 744 "dead_proc_elim.m"
    {
#line 744 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 744 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_26_26, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_6[1]));
#line 744 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_26_26, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__dead_proc_eliminate_5_p_0_1));
#line 744 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 744 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_26_26, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__ElimOptImported_6));
#line 744 "dead_proc_elim.m"
    }
#line 744 "dead_proc_elim.m"
    {
#line 744 "dead_proc_elim.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_proc_elim_info_0, transform_hlds__dead_proc_elim__V_26_26, transform_hlds__dead_proc_elim__PredIds_10, ((MR_Box) (transform_hlds__dead_proc_elim__ProcElimInfo0_13)), &transform_hlds__dead_proc_elim__conv1_ProcElimInfo_14);
    }
#line 744 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__ProcElimInfo_14 = ((MR_Word) transform_hlds__dead_proc_elim__conv1_ProcElimInfo_14);
#line 746 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo_14, (MR_Integer) 0)));
#line 746 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo_14, (MR_Integer) 1)));
#line 746 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__PredTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo_14, (MR_Integer) 2)));
#line 746 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__Changed_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo_14, (MR_Integer) 3)));
#line 746 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__Specs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo_14, (MR_Integer) 4)));
#line 748 "dead_proc_elim.m"
    {
#line 748 "dead_proc_elim.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__dead_proc_elim__PredTable_15, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_28_28, &transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_29_29);
    }
#line 750 "dead_proc_elim.m"
    {
#line 750 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_type_ctor_gen_infos_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_29_29, &transform_hlds__dead_proc_elim__TypeCtorGenInfos0_17);
    }
#line 751 "dead_proc_elim.m"
    {
#line 751 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_eliminate_type_ctor_infos_3_p_0(transform_hlds__dead_proc_elim__TypeCtorGenInfos0_17, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_27, &transform_hlds__dead_proc_elim__TypeCtorGenInfos_18);
    }
#line 753 "dead_proc_elim.m"
    {
#line 753 "dead_proc_elim.m"
      hlds__hlds_module__module_info_set_type_ctor_gen_infos_3_p_0(transform_hlds__dead_proc_elim__TypeCtorGenInfos_18, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_29_29, &transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_30_30);
    }
#line 760 "dead_proc_elim.m"
    {
#line 760 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_const_struct_db_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_30_30, &transform_hlds__dead_proc_elim__ConstStructDb0_19);
    }
#line 761 "dead_proc_elim.m"
    {
#line 761 "dead_proc_elim.m"
      hlds__const_struct__const_struct_db_get_structs_2_p_0(transform_hlds__dead_proc_elim__ConstStructDb0_19, &transform_hlds__dead_proc_elim__ConstNumStructs0_20);
    }
#line 762 "dead_proc_elim.m"
    {
#line 762 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_eliminate_const_structs_4_p_0(transform_hlds__dead_proc_elim__ConstNumStructs0_20, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_27, transform_hlds__dead_proc_elim__ConstStructDb0_19, &transform_hlds__dead_proc_elim__ConstStructDb_21);
    }
#line 764 "dead_proc_elim.m"
    {
#line 764 "dead_proc_elim.m"
      hlds__hlds_module__module_info_set_const_struct_db_3_p_0(transform_hlds__dead_proc_elim__ConstStructDb_21, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_30_30, &transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_31_31);
    }
#line 771 "dead_proc_elim.m"
#line 771 "dead_proc_elim.m"
    switch (transform_hlds__dead_proc_elim__Changed_16) {
#line 771 "dead_proc_elim.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 771 "dead_proc_elim.m"
      case (MR_Integer) 0:
#line 772 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_24 = transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_31_31;
#line 771 "dead_proc_elim.m"
        break;
#line 771 "dead_proc_elim.m"
      case (MR_Integer) 1:
#line 770 "dead_proc_elim.m"
        {
#line 770 "dead_proc_elim.m"
          hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_31_31, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_24);
#line 770 "dead_proc_elim.m"
          return;
        }
#line 771 "dead_proc_elim.m"
        break;
#line 771 "dead_proc_elim.m"
    }
#line 738 "dead_proc_elim.m"
  }
#line 735 "dead_proc_elim.m"
}

#line 534 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_p_0(
#line 534 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Goal_7,
#line 534 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__CurrProc_8,
#line 534 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96,
#line 534 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97,
#line 534 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98,
#line 534 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99)
#line 534 "dead_proc_elim.m"
{
#line 538 "dead_proc_elim.m"
  while (MR_TRUE)
#line 538 "dead_proc_elim.m"
    {
#line 538 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 538 "dead_proc_elim.m"
      {
#line 538 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 538 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Goal_7, (MR_Integer) 0)));
#line 539 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Goal_7, (MR_Integer) 1)));

#line 545 "dead_proc_elim.m"
#line 545 "dead_proc_elim.m"
        switch (MR_tag((MR_Word) transform_hlds__dead_proc_elim__GoalExpr_11)) {
#line 545 "dead_proc_elim.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 545 "dead_proc_elim.m"
          case (MR_Integer) 0:
#line 549 "dead_proc_elim.m"
            {
#line 549 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__SubGoal_18 = (MR_Word) MR_body(((MR_Word) transform_hlds__dead_proc_elim__GoalExpr_11), (MR_Integer) 0);

#line 550 "dead_proc_elim.m"
              /* direct tailcall eliminated */
#line 550 "dead_proc_elim.m"
              {
#line 550 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__Goal__tmp_copy_7 = transform_hlds__dead_proc_elim__SubGoal_18;

#line 550 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__Goal_7 = transform_hlds__dead_proc_elim__Goal__tmp_copy_7;
#line 550 "dead_proc_elim.m"
              }
#line 550 "dead_proc_elim.m"
              continue;
#line 549 "dead_proc_elim.m"
            }
#line 545 "dead_proc_elim.m"
            break;
#line 545 "dead_proc_elim.m"
          case (MR_Integer) 1:
#line 634 "dead_proc_elim.m"
            {
#line 634 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__Unification_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 3)));
#line 634 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim___LHS_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 0)));
#line 634 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim___RHS_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 1)));
#line 634 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim___UniModes_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 2)));
#line 634 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim___UnifyContext_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 4)));

#line 692 "dead_proc_elim.m"
#line 692 "dead_proc_elim.m"
              switch (MR_tag((MR_Word) transform_hlds__dead_proc_elim__Unification_50)) {
#line 692 "dead_proc_elim.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 692 "dead_proc_elim.m"
                case (MR_Integer) 0:
#line 636 "dead_proc_elim.m"
                  {
#line 636 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__ConsId_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Unification_50, (MR_Integer) 1)));
#line 636 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Unification_50, (MR_Integer) 0)));
#line 636 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Unification_50, (MR_Integer) 2)));
#line 636 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Unification_50, (MR_Integer) 3)));
#line 636 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Unification_50, (MR_Integer) 4)));
#line 636 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Unification_50, (MR_Integer) 5)));
#line 636 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Unification_50, (MR_Integer) 6)));

#line 668 "dead_proc_elim.m"
#line 668 "dead_proc_elim.m"
                    switch (MR_tag((MR_Word) transform_hlds__dead_proc_elim__ConsId_53)) {
#line 668 "dead_proc_elim.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 668 "dead_proc_elim.m"
                      case (MR_Integer) 0:
#line 686 "dead_proc_elim.m"
                        {
#line 686 "dead_proc_elim.m"
                          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 686 "dead_proc_elim.m"
                          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 686 "dead_proc_elim.m"
                        }
#line 668 "dead_proc_elim.m"
                        break;
#line 668 "dead_proc_elim.m"
                      case (MR_Integer) 1:
#line 685 "dead_proc_elim.m"
                        {
#line 685 "dead_proc_elim.m"
                          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 685 "dead_proc_elim.m"
                          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 685 "dead_proc_elim.m"
                        }
#line 668 "dead_proc_elim.m"
                        break;
#line 668 "dead_proc_elim.m"
                      case (MR_Integer) 2:
#line 665 "dead_proc_elim.m"
                        {
#line 665 "dead_proc_elim.m"
                          MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_245_254;
#line 665 "dead_proc_elim.m"
                          MR_Word transform_hlds__dead_proc_elim__V_109_109;
#line 665 "dead_proc_elim.m"
                          MR_Word transform_hlds__dead_proc_elim__PredId_217;
#line 665 "dead_proc_elim.m"
                          MR_Integer transform_hlds__dead_proc_elim__ProcId_218;
#line 665 "dead_proc_elim.m"
                          MR_Word transform_hlds__dead_proc_elim__ShroudedPredProcId_219 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 0)));
#line 665 "dead_proc_elim.m"
                          MR_Word transform_hlds__dead_proc_elim__Entity_253;

#line 656 "dead_proc_elim.m"
                          {
#line 656 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__V_109_109 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(transform_hlds__dead_proc_elim__ShroudedPredProcId_219);
                          }
#line 655 "dead_proc_elim.m"
                          transform_hlds__dead_proc_elim__PredId_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_109_109, (MR_Integer) 0)));
#line 655 "dead_proc_elim.m"
                          transform_hlds__dead_proc_elim__ProcId_218 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_109_109, (MR_Integer) 1)));
#line 657 "dead_proc_elim.m"
                          {
#line 657 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__Entity_253 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "dead_proc_elim.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__Entity_253, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_217));
#line 657 "dead_proc_elim.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__Entity_253, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_218));
#line 657 "dead_proc_elim.m"
                          }
#line 7508 "transform_hlds.dead_proc_elim.c"
                          transform_hlds__dead_proc_elim__TypeCtorInfo_245_254 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 666 "dead_proc_elim.m"
                          {
#line 666 "dead_proc_elim.m"
                            mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_245_254, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_253)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97);
                          }
#line 667 "dead_proc_elim.m"
                          {
#line 667 "dead_proc_elim.m"
                            mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_245_254, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_253)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
#line 667 "dead_proc_elim.m"
                            return;
                          }
#line 665 "dead_proc_elim.m"
                        }
#line 668 "dead_proc_elim.m"
                        break;
#line 668 "dead_proc_elim.m"
                      case (MR_Integer) 3:
#line 668 "dead_proc_elim.m"
#line 668 "dead_proc_elim.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 0)))) {
#line 668 "dead_proc_elim.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 668 "dead_proc_elim.m"
                          case (MR_Integer) 0:
#line 688 "dead_proc_elim.m"
                            {
#line 688 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 688 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 688 "dead_proc_elim.m"
                            }
#line 668 "dead_proc_elim.m"
                            break;
#line 668 "dead_proc_elim.m"
                          case (MR_Integer) 1:
#line 687 "dead_proc_elim.m"
                            {
#line 687 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 687 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 687 "dead_proc_elim.m"
                            }
#line 668 "dead_proc_elim.m"
                            break;
#line 668 "dead_proc_elim.m"
                          case (MR_Integer) 2:
#line 677 "dead_proc_elim.m"
                            {
#line 677 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 677 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 677 "dead_proc_elim.m"
                            }
#line 668 "dead_proc_elim.m"
                            break;
#line 668 "dead_proc_elim.m"
                          case (MR_Integer) 3:
#line 678 "dead_proc_elim.m"
                            {
#line 678 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 678 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 678 "dead_proc_elim.m"
                            }
#line 668 "dead_proc_elim.m"
                            break;
#line 668 "dead_proc_elim.m"
                          case (MR_Integer) 4:
#line 665 "dead_proc_elim.m"
                            {
#line 665 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_245_245;
#line 665 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__ShroudedPredProcId_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 1)));
#line 665 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__V_120_120;
#line 665 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__PredId_215;
#line 665 "dead_proc_elim.m"
                              MR_Integer transform_hlds__dead_proc_elim__ProcId_216;
#line 665 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__Entity_224;

#line 641 "dead_proc_elim.m"
                              {
#line 641 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__V_120_120 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(transform_hlds__dead_proc_elim__ShroudedPredProcId_59);
                              }
#line 640 "dead_proc_elim.m"
                              transform_hlds__dead_proc_elim__PredId_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_120_120, (MR_Integer) 0)));
#line 640 "dead_proc_elim.m"
                              transform_hlds__dead_proc_elim__ProcId_216 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_120_120, (MR_Integer) 1)));
#line 642 "dead_proc_elim.m"
                              {
#line 642 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__Entity_224 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 642 "dead_proc_elim.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_224, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_215));
#line 642 "dead_proc_elim.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_224, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_216));
#line 642 "dead_proc_elim.m"
                              }
#line 7617 "transform_hlds.dead_proc_elim.c"
                              transform_hlds__dead_proc_elim__TypeCtorInfo_245_245 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 666 "dead_proc_elim.m"
                              {
#line 666 "dead_proc_elim.m"
                                mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_245_245, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_224)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97);
                              }
#line 667 "dead_proc_elim.m"
                              {
#line 667 "dead_proc_elim.m"
                                mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_245_245, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_224)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
#line 667 "dead_proc_elim.m"
                                return;
                              }
#line 665 "dead_proc_elim.m"
                            }
#line 668 "dead_proc_elim.m"
                            break;
#line 668 "dead_proc_elim.m"
                          case (MR_Integer) 5:
#line 679 "dead_proc_elim.m"
                            {
#line 679 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 679 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 679 "dead_proc_elim.m"
                            }
#line 668 "dead_proc_elim.m"
                            break;
#line 668 "dead_proc_elim.m"
                          case (MR_Integer) 6:
#line 680 "dead_proc_elim.m"
                            {
#line 680 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 680 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 680 "dead_proc_elim.m"
                            }
#line 668 "dead_proc_elim.m"
                            break;
#line 668 "dead_proc_elim.m"
                          case (MR_Integer) 7:
#line 681 "dead_proc_elim.m"
                            {
#line 681 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 681 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 681 "dead_proc_elim.m"
                            }
#line 668 "dead_proc_elim.m"
                            break;
#line 668 "dead_proc_elim.m"
                          case (MR_Integer) 8:
#line 682 "dead_proc_elim.m"
                            {
#line 682 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 682 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 682 "dead_proc_elim.m"
                            }
#line 668 "dead_proc_elim.m"
                            break;
#line 668 "dead_proc_elim.m"
                          case (MR_Integer) 9:
#line 683 "dead_proc_elim.m"
                            {
#line 683 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 683 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 683 "dead_proc_elim.m"
                            }
#line 668 "dead_proc_elim.m"
                            break;
#line 668 "dead_proc_elim.m"
                          case (MR_Integer) 10:
#line 665 "dead_proc_elim.m"
                            {
#line 665 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_245_258;
#line 665 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__Module_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 1)));
#line 665 "dead_proc_elim.m"
                              MR_String transform_hlds__dead_proc_elim__TypeName_62 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 2)));
#line 665 "dead_proc_elim.m"
                              MR_Integer transform_hlds__dead_proc_elim__Arity_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 3)));
#line 665 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__Entity_257;

#line 652 "dead_proc_elim.m"
                              {
#line 652 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__Entity_257 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 652 "dead_proc_elim.m"
                                MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_257, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Module_61));
#line 652 "dead_proc_elim.m"
                                MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_257, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__TypeName_62));
#line 652 "dead_proc_elim.m"
                                MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_257, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__Arity_63));
#line 652 "dead_proc_elim.m"
                              }
#line 7722 "transform_hlds.dead_proc_elim.c"
                              transform_hlds__dead_proc_elim__TypeCtorInfo_245_258 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 666 "dead_proc_elim.m"
                              {
#line 666 "dead_proc_elim.m"
                                mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_245_258, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_257)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97);
                              }
#line 667 "dead_proc_elim.m"
                              {
#line 667 "dead_proc_elim.m"
                                mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_245_258, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_257)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
#line 667 "dead_proc_elim.m"
                                return;
                              }
#line 665 "dead_proc_elim.m"
                            }
#line 668 "dead_proc_elim.m"
                            break;
#line 668 "dead_proc_elim.m"
                          case (MR_Integer) 11:
#line 684 "dead_proc_elim.m"
                            {
#line 684 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 684 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 684 "dead_proc_elim.m"
                            }
#line 668 "dead_proc_elim.m"
                            break;
#line 668 "dead_proc_elim.m"
                          case (MR_Integer) 12:
#line 672 "dead_proc_elim.m"
                            {
#line 672 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_247_263;
#line 672 "dead_proc_elim.m"
                              MR_Integer transform_hlds__dead_proc_elim__ConstNum_260 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 1)));
#line 672 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__Entity_262;

#line 673 "dead_proc_elim.m"
                              {
#line 673 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__Entity_262 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 673 "dead_proc_elim.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Entity_262, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ConstNum_260));
#line 673 "dead_proc_elim.m"
                              }
#line 7771 "transform_hlds.dead_proc_elim.c"
                              transform_hlds__dead_proc_elim__TypeCtorInfo_247_263 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 674 "dead_proc_elim.m"
                              {
#line 674 "dead_proc_elim.m"
                                mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_247_263, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_262)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97);
                              }
#line 675 "dead_proc_elim.m"
                              {
#line 675 "dead_proc_elim.m"
                                mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_247_263, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_262)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
#line 675 "dead_proc_elim.m"
                                return;
                              }
#line 672 "dead_proc_elim.m"
                            }
#line 668 "dead_proc_elim.m"
                            break;
#line 668 "dead_proc_elim.m"
                          case (MR_Integer) 13:
#line 672 "dead_proc_elim.m"
                            {
#line 672 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_247_268;
#line 672 "dead_proc_elim.m"
                              MR_Integer transform_hlds__dead_proc_elim__ConstNum_265 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 1)));
#line 672 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__Entity_267;

#line 673 "dead_proc_elim.m"
                              {
#line 673 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__Entity_267 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 673 "dead_proc_elim.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Entity_267, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ConstNum_265));
#line 673 "dead_proc_elim.m"
                              }
#line 7808 "transform_hlds.dead_proc_elim.c"
                              transform_hlds__dead_proc_elim__TypeCtorInfo_247_268 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 674 "dead_proc_elim.m"
                              {
#line 674 "dead_proc_elim.m"
                                mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_247_268, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_267)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97);
                              }
#line 675 "dead_proc_elim.m"
                              {
#line 675 "dead_proc_elim.m"
                                mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_247_268, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_267)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
#line 675 "dead_proc_elim.m"
                                return;
                              }
#line 672 "dead_proc_elim.m"
                            }
#line 668 "dead_proc_elim.m"
                            break;
#line 668 "dead_proc_elim.m"
                          case (MR_Integer) 14:
#line 672 "dead_proc_elim.m"
                            {
#line 672 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_247_247;
#line 672 "dead_proc_elim.m"
                              MR_Integer transform_hlds__dead_proc_elim__ConstNum_64 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 1)));
#line 672 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__Entity_225;
#line 671 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 2)));

#line 673 "dead_proc_elim.m"
                              {
#line 673 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__Entity_225 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 673 "dead_proc_elim.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Entity_225, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ConstNum_64));
#line 673 "dead_proc_elim.m"
                              }
#line 7847 "transform_hlds.dead_proc_elim.c"
                              transform_hlds__dead_proc_elim__TypeCtorInfo_247_247 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 674 "dead_proc_elim.m"
                              {
#line 674 "dead_proc_elim.m"
                                mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_247_247, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_225)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97);
                              }
#line 675 "dead_proc_elim.m"
                              {
#line 675 "dead_proc_elim.m"
                                mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_247_247, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_225)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
#line 675 "dead_proc_elim.m"
                                return;
                              }
#line 672 "dead_proc_elim.m"
                            }
#line 668 "dead_proc_elim.m"
                            break;
#line 668 "dead_proc_elim.m"
                        }
#line 668 "dead_proc_elim.m"
                        break;
#line 668 "dead_proc_elim.m"
                    }
#line 636 "dead_proc_elim.m"
                  }
#line 692 "dead_proc_elim.m"
                  break;
#line 692 "dead_proc_elim.m"
                case (MR_Integer) 1:
#line 693 "dead_proc_elim.m"
                  {
#line 693 "dead_proc_elim.m"
                    *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 693 "dead_proc_elim.m"
                    *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 693 "dead_proc_elim.m"
                  }
#line 692 "dead_proc_elim.m"
                  break;
#line 692 "dead_proc_elim.m"
                case (MR_Integer) 2:
#line 694 "dead_proc_elim.m"
                  {
#line 694 "dead_proc_elim.m"
                    *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 694 "dead_proc_elim.m"
                    *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 694 "dead_proc_elim.m"
                  }
#line 692 "dead_proc_elim.m"
                  break;
#line 692 "dead_proc_elim.m"
                case (MR_Integer) 3:
#line 692 "dead_proc_elim.m"
#line 692 "dead_proc_elim.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Unification_50, (MR_Integer) 0)))) {
#line 692 "dead_proc_elim.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 692 "dead_proc_elim.m"
                    case (MR_Integer) 0:
#line 695 "dead_proc_elim.m"
                      {
#line 695 "dead_proc_elim.m"
                        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 695 "dead_proc_elim.m"
                        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 695 "dead_proc_elim.m"
                      }
#line 692 "dead_proc_elim.m"
                      break;
#line 692 "dead_proc_elim.m"
                    case (MR_Integer) 1:
#line 700 "dead_proc_elim.m"
                      {
#line 702 "dead_proc_elim.m"
                        {
#line 702 "dead_proc_elim.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.dead_proc_elim", (MR_String) "predicate \140transform_hlds.dead_proc_elim.dead_proc_examine_goal\'/6", (MR_String) "complicated_unify");
#line 702 "dead_proc_elim.m"
                          return;
                        }
#line 700 "dead_proc_elim.m"
                      }
#line 692 "dead_proc_elim.m"
                      break;
#line 692 "dead_proc_elim.m"
                  }
#line 692 "dead_proc_elim.m"
                  break;
#line 692 "dead_proc_elim.m"
              }
#line 634 "dead_proc_elim.m"
            }
#line 545 "dead_proc_elim.m"
            break;
#line 545 "dead_proc_elim.m"
          case (MR_Integer) 2:
#line 572 "dead_proc_elim.m"
            {
#line 572 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_238_238;
#line 572 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__PredId_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 0)));
#line 572 "dead_proc_elim.m"
              MR_Integer transform_hlds__dead_proc_elim__ProcId_32 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 1)));
#line 572 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__Entity_37;
#line 572 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 2)));
#line 572 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 3)));
#line 572 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 4)));
#line 572 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 5)));
#line 575 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__V_249_249;
#line 575 "dead_proc_elim.m"
              MR_Integer transform_hlds__dead_proc_elim__V_250_250;

#line 573 "dead_proc_elim.m"
              {
#line 573 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__Entity_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 573 "dead_proc_elim.m"
                MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_37, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_31));
#line 573 "dead_proc_elim.m"
                MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_37, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_32));
#line 573 "dead_proc_elim.m"
              }
#line 7978 "transform_hlds.dead_proc_elim.c"
              transform_hlds__dead_proc_elim__TypeCtorInfo_238_238 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 574 "dead_proc_elim.m"
              {
#line 574 "dead_proc_elim.m"
                mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_238_238, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_37)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97);
              }
#line 575 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__CurrProc_8, (MR_Integer) 0)));
#line 575 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__V_250_250 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__CurrProc_8, (MR_Integer) 1)));
#line 575 "dead_proc_elim.m"
              {
#line 575 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__dead_proc_elim__PredId_31, transform_hlds__dead_proc_elim__V_249_249);
              }
#line 575 "dead_proc_elim.m"
              if (transform_hlds__dead_proc_elim__succeeded)
#line 575 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__ProcId_32 == transform_hlds__dead_proc_elim__V_250_250);
#line 587 "dead_proc_elim.m"
              if (transform_hlds__dead_proc_elim__succeeded)
#line 582 "dead_proc_elim.m"
                {
#line 586 "dead_proc_elim.m"
                  {
#line 586 "dead_proc_elim.m"
                    mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_238_238, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_37)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
#line 586 "dead_proc_elim.m"
                    return;
                  }
#line 582 "dead_proc_elim.m"
                }
#line 587 "dead_proc_elim.m"
              else
#line 610 "dead_proc_elim.m"
                {
#line 610 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__OldNotation_40;
#line 587 "dead_proc_elim.m"
                  MR_Box transform_hlds__dead_proc_elim__conv0_OldNotation_40;

#line 587 "dead_proc_elim.m"
                  {
#line 587 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__succeeded = mercury__map__search_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_238_238, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_37)), &transform_hlds__dead_proc_elim__conv0_OldNotation_40);
                  }
#line 587 "dead_proc_elim.m"
                  if (transform_hlds__dead_proc_elim__succeeded)
#line 587 "dead_proc_elim.m"
                    {
#line 587 "dead_proc_elim.m"
                      transform_hlds__dead_proc_elim__OldNotation_40 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_OldNotation_40);
#line 587 "dead_proc_elim.m"
                      transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 587 "dead_proc_elim.m"
                    }
#line 610 "dead_proc_elim.m"
                  if (transform_hlds__dead_proc_elim__succeeded)
#line 608 "dead_proc_elim.m"
                    {
#line 608 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__NewNotation_209;

#line 598 "dead_proc_elim.m"
                      if ((transform_hlds__dead_proc_elim__OldNotation_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 590 "dead_proc_elim.m"
                        transform_hlds__dead_proc_elim__NewNotation_209 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 598 "dead_proc_elim.m"
                      else
#line 599 "dead_proc_elim.m"
                        {
#line 599 "dead_proc_elim.m"
                          MR_Integer transform_hlds__dead_proc_elim__Count_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__OldNotation_40, (MR_Integer) 0)));
#line 599 "dead_proc_elim.m"
                          MR_Integer transform_hlds__dead_proc_elim__V_159_159 = (transform_hlds__dead_proc_elim__Count_41 + (MR_Integer) 1);

#line 600 "dead_proc_elim.m"
                          {
#line 600 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__NewNotation_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 600 "dead_proc_elim.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__NewNotation_209, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__V_159_159));
#line 600 "dead_proc_elim.m"
                          }
#line 599 "dead_proc_elim.m"
                        }
#line 609 "dead_proc_elim.m"
                      {
#line 609 "dead_proc_elim.m"
                        mercury__map__det_update_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_238_238, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_37)), ((MR_Box) (transform_hlds__dead_proc_elim__NewNotation_209)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
#line 609 "dead_proc_elim.m"
                        return;
                      }
#line 608 "dead_proc_elim.m"
                    }
#line 610 "dead_proc_elim.m"
                  else
#line 617 "dead_proc_elim.m"
                    {
#line 619 "dead_proc_elim.m"
                      {
#line 619 "dead_proc_elim.m"
                        mercury__map__det_insert_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_238_238, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_37)), ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_8[0]))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
#line 619 "dead_proc_elim.m"
                        return;
                      }
#line 617 "dead_proc_elim.m"
                    }
#line 610 "dead_proc_elim.m"
                }
#line 572 "dead_proc_elim.m"
            }
#line 545 "dead_proc_elim.m"
            break;
#line 545 "dead_proc_elim.m"
          case (MR_Integer) 3:
#line 545 "dead_proc_elim.m"
#line 545 "dead_proc_elim.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 0)))) {
#line 545 "dead_proc_elim.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 545 "dead_proc_elim.m"
              case (MR_Integer) 0:
#line 570 "dead_proc_elim.m"
                {
#line 570 "dead_proc_elim.m"
                  *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 570 "dead_proc_elim.m"
                  *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 570 "dead_proc_elim.m"
                }
#line 545 "dead_proc_elim.m"
                break;
#line 545 "dead_proc_elim.m"
              case (MR_Integer) 1:
#line 622 "dead_proc_elim.m"
                {
#line 622 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_243_243;
#line 622 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__PredId_212 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 2)));
#line 622 "dead_proc_elim.m"
                  MR_Integer transform_hlds__dead_proc_elim__ProcId_213 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 3)));
#line 622 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__Entity_214;
#line 622 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 1)));
#line 622 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 4)));
#line 622 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 5)));
#line 622 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 6)));
#line 622 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 7)));

#line 623 "dead_proc_elim.m"
                  {
#line 623 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__Entity_214 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 623 "dead_proc_elim.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_214, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_212));
#line 623 "dead_proc_elim.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_214, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_213));
#line 623 "dead_proc_elim.m"
                  }
#line 8145 "transform_hlds.dead_proc_elim.c"
                  transform_hlds__dead_proc_elim__TypeCtorInfo_243_243 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 631 "dead_proc_elim.m"
                  {
#line 631 "dead_proc_elim.m"
                    mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_243_243, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_214)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97);
                  }
#line 632 "dead_proc_elim.m"
                  {
#line 632 "dead_proc_elim.m"
                    mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_243_243, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_214)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
#line 632 "dead_proc_elim.m"
                    return;
                  }
#line 622 "dead_proc_elim.m"
                }
#line 545 "dead_proc_elim.m"
                break;
#line 545 "dead_proc_elim.m"
              case (MR_Integer) 2:
#line 543 "dead_proc_elim.m"
                {
#line 543 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__Goals_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 2)));
#line 541 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim___ConjType_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 1)));

#line 544 "dead_proc_elim.m"
                  {
#line 544 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__dead_proc_examine_goals_6_p_0(transform_hlds__dead_proc_elim__Goals_14, transform_hlds__dead_proc_elim__CurrProc_8, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
#line 544 "dead_proc_elim.m"
                    return;
                  }
#line 543 "dead_proc_elim.m"
                }
#line 545 "dead_proc_elim.m"
                break;
#line 545 "dead_proc_elim.m"
              case (MR_Integer) 3:
#line 543 "dead_proc_elim.m"
                {
#line 543 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__Goals_251 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 1)));

#line 544 "dead_proc_elim.m"
                  {
#line 544 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__dead_proc_examine_goals_6_p_0(transform_hlds__dead_proc_elim__Goals_251, transform_hlds__dead_proc_elim__CurrProc_8, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
#line 544 "dead_proc_elim.m"
                    return;
                  }
#line 543 "dead_proc_elim.m"
                }
#line 545 "dead_proc_elim.m"
                break;
#line 545 "dead_proc_elim.m"
              case (MR_Integer) 4:
#line 546 "dead_proc_elim.m"
                {
#line 546 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__Cases_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 3)));
#line 546 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim___Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 1)));
#line 546 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim___CanFail_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 2)));

#line 547 "dead_proc_elim.m"
                  {
#line 547 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__dead_proc_examine_cases_6_p_0(transform_hlds__dead_proc_elim__Cases_17, transform_hlds__dead_proc_elim__CurrProc_8, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
#line 547 "dead_proc_elim.m"
                    return;
                  }
#line 546 "dead_proc_elim.m"
                }
#line 545 "dead_proc_elim.m"
                break;
#line 545 "dead_proc_elim.m"
              case (MR_Integer) 5:
#line 552 "dead_proc_elim.m"
                {
#line 552 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__Reason_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 1)));
#line 552 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__SubGoal_208 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 2)));
#line 554 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__FGT_21;
#line 554 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_20_20;

#line 554 "dead_proc_elim.m"
                  transform_hlds__dead_proc_elim__succeeded = ((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__Reason_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Reason_19, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 554 "dead_proc_elim.m"
                  if (transform_hlds__dead_proc_elim__succeeded)
#line 554 "dead_proc_elim.m"
                    {
#line 554 "dead_proc_elim.m"
                      transform_hlds__dead_proc_elim__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Reason_19, (MR_Integer) 1)));
#line 554 "dead_proc_elim.m"
                      transform_hlds__dead_proc_elim__FGT_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Reason_19, (MR_Integer) 2)));
#line 556 "dead_proc_elim.m"
#line 556 "dead_proc_elim.m"
                      switch (transform_hlds__dead_proc_elim__FGT_21) {
#line 556 "dead_proc_elim.m"
                        default:
#line 556 "dead_proc_elim.m"
                          transform_hlds__dead_proc_elim__succeeded = MR_FALSE;
#line 556 "dead_proc_elim.m"
                          break;
#line 556 "dead_proc_elim.m"
                        case (MR_Integer) 1:
#line 555 "dead_proc_elim.m"
                          transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 556 "dead_proc_elim.m"
                          break;
#line 556 "dead_proc_elim.m"
                        case (MR_Integer) 2:
#line 556 "dead_proc_elim.m"
                          transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 556 "dead_proc_elim.m"
                          break;
#line 556 "dead_proc_elim.m"
                      }
#line 554 "dead_proc_elim.m"
                    }
#line 561 "dead_proc_elim.m"
                  if (transform_hlds__dead_proc_elim__succeeded)
#line 560 "dead_proc_elim.m"
                    {
#line 560 "dead_proc_elim.m"
                      *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 560 "dead_proc_elim.m"
                      *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 560 "dead_proc_elim.m"
                    }
#line 561 "dead_proc_elim.m"
                  else
#line 562 "dead_proc_elim.m"
                    {
#line 562 "dead_proc_elim.m"
                      /* direct tailcall eliminated */
#line 562 "dead_proc_elim.m"
                      {
#line 562 "dead_proc_elim.m"
                        MR_Word transform_hlds__dead_proc_elim__Goal__tmp_copy_7 = transform_hlds__dead_proc_elim__SubGoal_208;

#line 562 "dead_proc_elim.m"
                        transform_hlds__dead_proc_elim__Goal_7 = transform_hlds__dead_proc_elim__Goal__tmp_copy_7;
#line 562 "dead_proc_elim.m"
                      }
#line 562 "dead_proc_elim.m"
                      continue;
#line 562 "dead_proc_elim.m"
                    }
#line 552 "dead_proc_elim.m"
                }
#line 545 "dead_proc_elim.m"
                break;
#line 545 "dead_proc_elim.m"
              case (MR_Integer) 6:
#line 565 "dead_proc_elim.m"
                {
#line 565 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__Cond_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 2)));
#line 565 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__Then_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 3)));
#line 565 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__Else_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 4)));
#line 565 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_194_194;
#line 565 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_195_195;
#line 565 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_196_196;
#line 565 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_197_197;
#line 565 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 1)));

#line 566 "dead_proc_elim.m"
                  {
#line 566 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_p_0(transform_hlds__dead_proc_elim__Cond_23, transform_hlds__dead_proc_elim__CurrProc_8, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_194_194, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_195_195);
                  }
#line 567 "dead_proc_elim.m"
                  {
#line 567 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_p_0(transform_hlds__dead_proc_elim__Then_24, transform_hlds__dead_proc_elim__CurrProc_8, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_194_194, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_196_196, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_195_195, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_197_197);
                  }
#line 568 "dead_proc_elim.m"
                  /* direct tailcall eliminated */
#line 568 "dead_proc_elim.m"
                  {
#line 568 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__Goal__tmp_copy_7 = transform_hlds__dead_proc_elim__Else_25;
#line 568 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_96 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_196_196;
#line 568 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_98 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_197_197;

#line 568 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_98;
#line 568 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_96;
#line 568 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__Goal_7 = transform_hlds__dead_proc_elim__Goal__tmp_copy_7;
#line 568 "dead_proc_elim.m"
                  }
#line 568 "dead_proc_elim.m"
                  continue;
#line 565 "dead_proc_elim.m"
                }
#line 545 "dead_proc_elim.m"
                break;
#line 545 "dead_proc_elim.m"
              case (MR_Integer) 7:
#line 705 "dead_proc_elim.m"
                {
#line 707 "dead_proc_elim.m"
                  {
#line 707 "dead_proc_elim.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.dead_proc_elim", (MR_String) "predicate \140transform_hlds.dead_proc_elim.dead_proc_examine_goal\'/6", (MR_String) "shorthand");
#line 707 "dead_proc_elim.m"
                    return;
                  }
#line 705 "dead_proc_elim.m"
                }
#line 545 "dead_proc_elim.m"
                break;
#line 545 "dead_proc_elim.m"
            }
#line 545 "dead_proc_elim.m"
            break;
#line 545 "dead_proc_elim.m"
        }
#line 538 "dead_proc_elim.m"
      }
#line 538 "dead_proc_elim.m"
      break;
#line 538 "dead_proc_elim.m"
    }
#line 534 "dead_proc_elim.m"
}

#line 524 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_cases_6_p_0(
#line 524 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 524 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 524 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3,
#line 524 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4,
#line 524 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5,
#line 524 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6)
#line 524 "dead_proc_elim.m"
{
#line 528 "dead_proc_elim.m"
  while (MR_TRUE)
#line 528 "dead_proc_elim.m"
    {
#line 528 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 528 "dead_proc_elim.m"
      {
#line 528 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 528 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "dead_proc_elim.m"
          {
#line 528 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5;
#line 528 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3;
#line 528 "dead_proc_elim.m"
          }
#line 528 "dead_proc_elim.m"
        else
#line 530 "dead_proc_elim.m"
          {
#line 530 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Goal_16;
#line 530 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Cases_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 530 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 530 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 530 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_27;
#line 529 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_25_25, (MR_Integer) 0)));
#line 529 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_25_25, (MR_Integer) 1)));

#line 529 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__Goal_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_25_25, (MR_Integer) 2)));
#line 531 "dead_proc_elim.m"
            {
#line 531 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_p_0(transform_hlds__dead_proc_elim__Goal_16, transform_hlds__dead_proc_elim__HeadVar__2_2, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_27);
            }
#line 532 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 532 "dead_proc_elim.m"
            {
#line 532 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1 = transform_hlds__dead_proc_elim__Cases_17;
#line 532 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 532 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_27;

#line 532 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_5;
#line 532 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_3;
#line 532 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1;
#line 532 "dead_proc_elim.m"
            }
#line 532 "dead_proc_elim.m"
            continue;
#line 530 "dead_proc_elim.m"
          }
#line 528 "dead_proc_elim.m"
      }
#line 528 "dead_proc_elim.m"
      break;
#line 528 "dead_proc_elim.m"
    }
#line 524 "dead_proc_elim.m"
}

#line 515 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_goals_6_p_0(
#line 515 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 515 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__CurrProc_2,
#line 515 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3,
#line 515 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4,
#line 515 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5,
#line 515 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6)
#line 515 "dead_proc_elim.m"
{
#line 519 "dead_proc_elim.m"
  while (MR_TRUE)
#line 519 "dead_proc_elim.m"
    {
#line 519 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 519 "dead_proc_elim.m"
      {
#line 519 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 519 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 519 "dead_proc_elim.m"
          {
#line 519 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5;
#line 519 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3;
#line 519 "dead_proc_elim.m"
          }
#line 519 "dead_proc_elim.m"
        else
#line 520 "dead_proc_elim.m"
          {
#line 520 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Goal_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 520 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Goals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 520 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_23;
#line 520 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_24_24;

#line 521 "dead_proc_elim.m"
            {
#line 521 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_p_0(transform_hlds__dead_proc_elim__Goal_14, transform_hlds__dead_proc_elim__CurrProc_2, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_23, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_24_24);
            }
#line 522 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 522 "dead_proc_elim.m"
            {
#line 522 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1 = transform_hlds__dead_proc_elim__Goals_15;
#line 522 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_23;
#line 522 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_24_24;

#line 522 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_5;
#line 522 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_3;
#line 522 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1;
#line 522 "dead_proc_elim.m"
            }
#line 522 "dead_proc_elim.m"
            continue;
#line 520 "dead_proc_elim.m"
          }
#line 519 "dead_proc_elim.m"
      }
#line 519 "dead_proc_elim.m"
      break;
#line 519 "dead_proc_elim.m"
    }
#line 515 "dead_proc_elim.m"
}

#line 465 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_proc_6_p_0(
#line 465 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 465 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ModuleInfo_9,
#line 465 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_22,
#line 465 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23,
#line 465 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24,
#line 465 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25)
#line 465 "dead_proc_elim.m"
{
#line 469 "dead_proc_elim.m"
  {
#line 469 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 469 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 469 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__ProcId_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 505 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ProcInfo_16;
#line 471 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_63_63;
#line 471 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_64_64;
#line 471 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredTable_12;
#line 471 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredInfo_13;
#line 471 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ProcIds_14;
#line 471 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ProcTable_15;
#line 472 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv0_PredInfo_13;
#line 476 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv1_ProcInfo_16;

#line 471 "dead_proc_elim.m"
    {
#line 471 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_9, &transform_hlds__dead_proc_elim__PredTable_12);
    }
#line 472 "dead_proc_elim.m"
    {
#line 472 "dead_proc_elim.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, transform_hlds__dead_proc_elim__PredTable_12, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_7)), &transform_hlds__dead_proc_elim__conv0_PredInfo_13);
    }
#line 472 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__PredInfo_13 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_PredInfo_13);
#line 473 "dead_proc_elim.m"
    {
#line 473 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__ProcIds_14 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__dead_proc_elim__PredInfo_13);
    }
#line 8635 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_63_63 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 474 "dead_proc_elim.m"
    {
#line 474 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__succeeded = mercury__list__member_2_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_63_63, ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_8)), transform_hlds__dead_proc_elim__ProcIds_14);
    }
#line 471 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 471 "dead_proc_elim.m"
      {
#line 475 "dead_proc_elim.m"
        {
#line 475 "dead_proc_elim.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__dead_proc_elim__PredInfo_13, &transform_hlds__dead_proc_elim__ProcTable_15);
        }
#line 8651 "transform_hlds.dead_proc_elim.c"
        transform_hlds__dead_proc_elim__TypeCtorInfo_64_64 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 476 "dead_proc_elim.m"
        {
#line 476 "dead_proc_elim.m"
          mercury__map__lookup_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_63_63, transform_hlds__dead_proc_elim__TypeCtorInfo_64_64, transform_hlds__dead_proc_elim__ProcTable_15, ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_8)), &transform_hlds__dead_proc_elim__conv1_ProcInfo_16);
        }
#line 476 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__ProcInfo_16 = ((MR_Word) transform_hlds__dead_proc_elim__conv1_ProcInfo_16);
#line 476 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 471 "dead_proc_elim.m"
      }
#line 505 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 484 "dead_proc_elim.m"
      {
#line 484 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__Goal_18;
#line 484 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__EvalMethod_19;
#line 484 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__HasPerProcTablingPtr_20;
#line 484 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_38_38;

#line 485 "dead_proc_elim.m"
        {
#line 485 "dead_proc_elim.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__dead_proc_elim__ProcInfo_16, &transform_hlds__dead_proc_elim__Goal_18);
        }
#line 486 "dead_proc_elim.m"
        {
#line 486 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_p_0(transform_hlds__dead_proc_elim__Goal_18, transform_hlds__dead_proc_elim__HeadVar__1_1, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_22, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_38_38);
        }
#line 488 "dead_proc_elim.m"
        {
#line 488 "dead_proc_elim.m"
          hlds__hlds_pred__proc_info_get_eval_method_2_p_0(transform_hlds__dead_proc_elim__ProcInfo_16, &transform_hlds__dead_proc_elim__EvalMethod_19);
        }
#line 489 "dead_proc_elim.m"
        {
#line 489 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__HasPerProcTablingPtr_20 = hlds__hlds_pred__eval_method_has_per_proc_tabling_pointer_1_f_0(transform_hlds__dead_proc_elim__EvalMethod_19);
        }
#line 493 "dead_proc_elim.m"
#line 493 "dead_proc_elim.m"
        switch (transform_hlds__dead_proc_elim__HasPerProcTablingPtr_20) {
#line 493 "dead_proc_elim.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 493 "dead_proc_elim.m"
          case (MR_Integer) 0:
#line 492 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_38_38;
#line 493 "dead_proc_elim.m"
            break;
#line 493 "dead_proc_elim.m"
          case (MR_Integer) 1:
#line 494 "dead_proc_elim.m"
            {
#line 494 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__TableStructEntity_21;

#line 502 "dead_proc_elim.m"
              {
#line 502 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__TableStructEntity_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "dead_proc_elim.m"
                MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__TableStructEntity_21, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_7));
#line 502 "dead_proc_elim.m"
                MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__TableStructEntity_21, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_8));
#line 502 "dead_proc_elim.m"
              }
#line 503 "dead_proc_elim.m"
              {
#line 503 "dead_proc_elim.m"
                mercury__map__set_4_p_0((MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__TableStructEntity_21)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_38_38, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25);
#line 503 "dead_proc_elim.m"
                return;
              }
#line 494 "dead_proc_elim.m"
            }
#line 493 "dead_proc_elim.m"
            break;
#line 493 "dead_proc_elim.m"
        }
#line 484 "dead_proc_elim.m"
      }
#line 505 "dead_proc_elim.m"
    else
#line 506 "dead_proc_elim.m"
      {
#line 506 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24;
#line 506 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_22;
#line 506 "dead_proc_elim.m"
      }
#line 469 "dead_proc_elim.m"
  }
#line 465 "dead_proc_elim.m"
}

#line 440 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_const_struct_args_5_p_0(
#line 440 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 440 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 440 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 440 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4,
#line 440 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5)
#line 440 "dead_proc_elim.m"
{
#line 444 "dead_proc_elim.m"
  while (MR_TRUE)
#line 444 "dead_proc_elim.m"
    {
#line 444 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 444 "dead_proc_elim.m"
      {
#line 444 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 444 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 444 "dead_proc_elim.m"
          {
#line 444 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4;
#line 444 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2;
#line 444 "dead_proc_elim.m"
          }
#line 444 "dead_proc_elim.m"
        else
#line 445 "dead_proc_elim.m"
          {
#line 445 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Arg_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 445 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 445 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_30_30;
#line 445 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_32_32;

#line 451 "dead_proc_elim.m"
            if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__Arg_12)) == (MR_mktag((MR_Integer) 0))))
#line 447 "dead_proc_elim.m"
              {
#line 447 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_38_38;
#line 447 "dead_proc_elim.m"
                MR_Integer transform_hlds__dead_proc_elim__ConstNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Arg_12, (MR_Integer) 0)));
#line 447 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__Entity_17;

#line 448 "dead_proc_elim.m"
                {
#line 448 "dead_proc_elim.m"
                  transform_hlds__dead_proc_elim__Entity_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 448 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Entity_17, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ConstNum_16));
#line 448 "dead_proc_elim.m"
                }
#line 8823 "transform_hlds.dead_proc_elim.c"
                transform_hlds__dead_proc_elim__TypeCtorInfo_38_38 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 449 "dead_proc_elim.m"
                {
#line 449 "dead_proc_elim.m"
                  mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_38_38, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_17)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_30_30);
                }
#line 450 "dead_proc_elim.m"
                {
#line 450 "dead_proc_elim.m"
                  mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_38_38, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_17)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_32_32);
                }
#line 447 "dead_proc_elim.m"
              }
#line 451 "dead_proc_elim.m"
            else
#line 452 "dead_proc_elim.m"
              {
#line 452 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__ConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__Arg_12, (MR_Integer) 0)));
#line 452 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__Arg_12, (MR_Integer) 1)));
#line 457 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__Module_20;
#line 457 "dead_proc_elim.m"
                MR_String transform_hlds__dead_proc_elim__TypeName_21;
#line 457 "dead_proc_elim.m"
                MR_Integer transform_hlds__dead_proc_elim__Arity_22;

#line 453 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__succeeded = ((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__ConsId_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_18, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 453 "dead_proc_elim.m"
                if (transform_hlds__dead_proc_elim__succeeded)
#line 453 "dead_proc_elim.m"
                  {
#line 453 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__Module_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_18, (MR_Integer) 1)));
#line 453 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__TypeName_21 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_18, (MR_Integer) 2)));
#line 453 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_18, (MR_Integer) 3)));
#line 454 "dead_proc_elim.m"
                    {
#line 454 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_40_40;
#line 454 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__Entity_35;

#line 454 "dead_proc_elim.m"
                      {
#line 454 "dead_proc_elim.m"
                        transform_hlds__dead_proc_elim__Entity_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 454 "dead_proc_elim.m"
                        MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_35, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Module_20));
#line 454 "dead_proc_elim.m"
                        MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_35, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__TypeName_21));
#line 454 "dead_proc_elim.m"
                        MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_35, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__Arity_22));
#line 454 "dead_proc_elim.m"
                      }
#line 8883 "transform_hlds.dead_proc_elim.c"
                      transform_hlds__dead_proc_elim__TypeCtorInfo_40_40 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 455 "dead_proc_elim.m"
                      {
#line 455 "dead_proc_elim.m"
                        mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_40_40, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_35)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_30_30);
                      }
#line 456 "dead_proc_elim.m"
                      {
#line 456 "dead_proc_elim.m"
                        mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_40_40, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_35)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_32_32);
                      }
#line 454 "dead_proc_elim.m"
                    }
#line 453 "dead_proc_elim.m"
                  }
#line 453 "dead_proc_elim.m"
                else
#line 458 "dead_proc_elim.m"
                  {
#line 458 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_32_32 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4;
#line 458 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_30_30 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2;
#line 458 "dead_proc_elim.m"
                  }
#line 452 "dead_proc_elim.m"
              }
#line 461 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 461 "dead_proc_elim.m"
            {
#line 461 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1 = transform_hlds__dead_proc_elim__Args_13;
#line 461 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_2 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_30_30;
#line 461 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_32_32;

#line 461 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_4;
#line 461 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_2;
#line 461 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1;
#line 461 "dead_proc_elim.m"
            }
#line 461 "dead_proc_elim.m"
            continue;
#line 445 "dead_proc_elim.m"
          }
#line 444 "dead_proc_elim.m"
      }
#line 444 "dead_proc_elim.m"
      break;
#line 444 "dead_proc_elim.m"
    }
#line 440 "dead_proc_elim.m"
}

#line 409 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_refs_5_p_0(
#line 409 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 409 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 409 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 409 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4,
#line 409 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5)
#line 409 "dead_proc_elim.m"
{
#line 413 "dead_proc_elim.m"
  while (MR_TRUE)
#line 413 "dead_proc_elim.m"
    {
#line 413 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 413 "dead_proc_elim.m"
      {
#line 413 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 413 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 413 "dead_proc_elim.m"
          {
#line 413 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4;
#line 413 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2;
#line 413 "dead_proc_elim.m"
          }
#line 413 "dead_proc_elim.m"
        else
#line 414 "dead_proc_elim.m"
          {
#line 414 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_28_28;
#line 414 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Ref_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 414 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Refs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 414 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Ref_12, (MR_Integer) 0)));
#line 414 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__ProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Ref_12, (MR_Integer) 1)));
#line 414 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Entity_18;
#line 414 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_23;
#line 414 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25_25;

#line 416 "dead_proc_elim.m"
            {
#line 416 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__Entity_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 416 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_18, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_16));
#line 416 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_18, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_17));
#line 416 "dead_proc_elim.m"
            }
#line 9010 "transform_hlds.dead_proc_elim.c"
            transform_hlds__dead_proc_elim__TypeCtorInfo_28_28 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 417 "dead_proc_elim.m"
            {
#line 417 "dead_proc_elim.m"
              mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_28_28, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_18)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_23);
            }
#line 418 "dead_proc_elim.m"
            {
#line 418 "dead_proc_elim.m"
              mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_28_28, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_18)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25_25);
            }
#line 419 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 419 "dead_proc_elim.m"
            {
#line 419 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1 = transform_hlds__dead_proc_elim__Refs_13;
#line 419 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_2 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_23;
#line 419 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25_25;

#line 419 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_4;
#line 419 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_2;
#line 419 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1;
#line 419 "dead_proc_elim.m"
            }
#line 419 "dead_proc_elim.m"
            continue;
#line 414 "dead_proc_elim.m"
          }
#line 413 "dead_proc_elim.m"
      }
#line 413 "dead_proc_elim.m"
      break;
#line 413 "dead_proc_elim.m"
    }
#line 409 "dead_proc_elim.m"
}

#line 393 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim__find_type_ctor_info_5_p_0(
#line 393 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ModuleName_6,
#line 393 "dead_proc_elim.m"
  MR_String transform_hlds__dead_proc_elim__TypeName_7,
#line 393 "dead_proc_elim.m"
  MR_Integer transform_hlds__dead_proc_elim__TypeArity_8,
#line 393 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__4_4,
#line 393 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__Refs_11)
#line 393 "dead_proc_elim.m"
{
#line 398 "dead_proc_elim.m"
  while (MR_TRUE)
#line 398 "dead_proc_elim.m"
    {
#line 398 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 398 "dead_proc_elim.m"
      {
#line 398 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded = ((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 398 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfo_9;
#line 398 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfos_10;
#line 404 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__Unify_15;
#line 404 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__Compare_16;
#line 400 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_19_19;
#line 400 "dead_proc_elim.m"
        MR_String transform_hlds__dead_proc_elim__V_20_20;
#line 400 "dead_proc_elim.m"
        MR_Integer transform_hlds__dead_proc_elim__V_21_21;
#line 400 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim___TypeCtor_12;
#line 400 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim___Status_13;
#line 400 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim___HldsDefn_14;

#line 398 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 398 "dead_proc_elim.m"
          {
#line 398 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__TypeCtorGenInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__4_4, (MR_Integer) 0)));
#line 398 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__TypeCtorGenInfos_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__4_4, (MR_Integer) 1)));
#line 400 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim___TypeCtor_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_9, (MR_Integer) 0)));
#line 400 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_9, (MR_Integer) 1)));
#line 400 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_9, (MR_Integer) 2)));
#line 400 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_9, (MR_Integer) 3)));
#line 400 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim___Status_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_9, (MR_Integer) 4)));
#line 400 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim___HldsDefn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_9, (MR_Integer) 5)));
#line 400 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__Unify_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_9, (MR_Integer) 6)));
#line 400 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__Compare_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_9, (MR_Integer) 7)));
#line 400 "dead_proc_elim.m"
            {
#line 400 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__dead_proc_elim__ModuleName_6, transform_hlds__dead_proc_elim__V_19_19);
            }
#line 400 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 400 "dead_proc_elim.m"
              {
#line 400 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__succeeded = (strcmp(transform_hlds__dead_proc_elim__TypeName_7, transform_hlds__dead_proc_elim__V_20_20) == 0);
#line 400 "dead_proc_elim.m"
                if (transform_hlds__dead_proc_elim__succeeded)
#line 400 "dead_proc_elim.m"
                  transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__TypeArity_8 == transform_hlds__dead_proc_elim__V_21_21);
#line 400 "dead_proc_elim.m"
              }
#line 404 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 403 "dead_proc_elim.m"
              {
#line 403 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__V_17_17;

#line 403 "dead_proc_elim.m"
                {
#line 403 "dead_proc_elim.m"
                  transform_hlds__dead_proc_elim__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 403 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_17_17, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Compare_16));
#line 403 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 403 "dead_proc_elim.m"
                }
#line 403 "dead_proc_elim.m"
                {
#line 403 "dead_proc_elim.m"
                  MR_Word base;
#line 403 "dead_proc_elim.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 403 "dead_proc_elim.m"
                  *transform_hlds__dead_proc_elim__Refs_11 = base;
#line 403 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Unify_15));
#line 403 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__V_17_17));
#line 403 "dead_proc_elim.m"
                }
#line 403 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 403 "dead_proc_elim.m"
              }
#line 404 "dead_proc_elim.m"
            else
#line 405 "dead_proc_elim.m"
              {
#line 405 "dead_proc_elim.m"
                /* direct tailcall eliminated */
#line 405 "dead_proc_elim.m"
                {
#line 405 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__HeadVar__4__tmp_copy_4 = transform_hlds__dead_proc_elim__TypeCtorGenInfos_10;

#line 405 "dead_proc_elim.m"
                  transform_hlds__dead_proc_elim__HeadVar__4_4 = transform_hlds__dead_proc_elim__HeadVar__4__tmp_copy_4;
#line 405 "dead_proc_elim.m"
                }
#line 405 "dead_proc_elim.m"
                continue;
#line 405 "dead_proc_elim.m"
              }
#line 398 "dead_proc_elim.m"
          }
#line 398 "dead_proc_elim.m"
        return transform_hlds__dead_proc_elim__succeeded;
#line 398 "dead_proc_elim.m"
      }
#line 398 "dead_proc_elim.m"
      break;
#line 398 "dead_proc_elim.m"
    }
#line 393 "dead_proc_elim.m"
}

#line 332 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_6_p_0(
#line 332 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_22,
#line 332 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_0_23,
#line 332 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__AnalyzeWhat_9,
#line 332 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ModuleInfo_10,
#line 332 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24,
#line 332 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25)
#line 332 "dead_proc_elim.m"
{
#line 371 "dead_proc_elim.m"
  while (MR_TRUE)
#line 371 "dead_proc_elim.m"
    {
#line 371 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 371 "dead_proc_elim.m"
      {
#line 371 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 371 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__Entity_12;
#line 371 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 337 "dead_proc_elim.m"
        MR_Box transform_hlds__dead_proc_elim__conv0_Entity_12;

#line 337 "dead_proc_elim.m"
        {
#line 337 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__succeeded = mercury__queue__get_3_p_0((MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0, &transform_hlds__dead_proc_elim__conv0_Entity_12, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_22, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26);
        }
#line 337 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 337 "dead_proc_elim.m"
          {
#line 337 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__Entity_12 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_Entity_12);
#line 337 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 337 "dead_proc_elim.m"
          }
#line 371 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 368 "dead_proc_elim.m"
          {
#line 368 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_32_32;
#line 368 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_33_33;
#line 368 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_34_34;
#line 366 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_27_27;

#line 339 "dead_proc_elim.m"
            {
#line 339 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_12)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_0_23, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_27_27);
            }
#line 366 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 344 "dead_proc_elim.m"
              {
#line 344 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_34_34 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_27_27;
#line 344 "dead_proc_elim.m"
#line 344 "dead_proc_elim.m"
                switch (MR_tag((MR_Word) transform_hlds__dead_proc_elim__Entity_12)) {
#line 344 "dead_proc_elim.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 344 "dead_proc_elim.m"
                  case (MR_Integer) 0:
#line 341 "dead_proc_elim.m"
                    {
#line 341 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_12, (MR_Integer) 0)));
#line 341 "dead_proc_elim.m"
                      MR_Integer transform_hlds__dead_proc_elim__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_12, (MR_Integer) 1)));
#line 341 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__PredProcId_15;

#line 342 "dead_proc_elim.m"
                      {
#line 342 "dead_proc_elim.m"
                        transform_hlds__dead_proc_elim__PredProcId_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 342 "dead_proc_elim.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__PredProcId_15, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_13));
#line 342 "dead_proc_elim.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__PredProcId_15, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_14));
#line 342 "dead_proc_elim.m"
                      }
#line 343 "dead_proc_elim.m"
                      {
#line 343 "dead_proc_elim.m"
                        transform_hlds__dead_proc_elim__dead_proc_examine_proc_6_p_0(transform_hlds__dead_proc_elim__PredProcId_15, transform_hlds__dead_proc_elim__ModuleInfo_10, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_32_32, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_33_33);
                      }
#line 341 "dead_proc_elim.m"
                    }
#line 344 "dead_proc_elim.m"
                    break;
#line 344 "dead_proc_elim.m"
                  case (MR_Integer) 1:
#line 345 "dead_proc_elim.m"
                    {
#line 345 "dead_proc_elim.m"
                      transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_32_32 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 345 "dead_proc_elim.m"
                      transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_33_33 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24;
#line 345 "dead_proc_elim.m"
                    }
#line 344 "dead_proc_elim.m"
                    break;
#line 344 "dead_proc_elim.m"
                  case (MR_Integer) 2:
#line 348 "dead_proc_elim.m"
                    {
#line 348 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__Module_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_12, (MR_Integer) 0)));
#line 348 "dead_proc_elim.m"
                      MR_String transform_hlds__dead_proc_elim__Type_19 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_12, (MR_Integer) 1)));
#line 348 "dead_proc_elim.m"
                      MR_Integer transform_hlds__dead_proc_elim__Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_12, (MR_Integer) 2)));

#line 351 "dead_proc_elim.m"
#line 351 "dead_proc_elim.m"
                      switch (transform_hlds__dead_proc_elim__AnalyzeWhat_9) {
#line 351 "dead_proc_elim.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 351 "dead_proc_elim.m"
                        case (MR_Integer) 1:
#line 382 "dead_proc_elim.m"
                          {
#line 382 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfos_77;
#line 389 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__Refs_78;

#line 383 "dead_proc_elim.m"
                            {
#line 383 "dead_proc_elim.m"
                              hlds__hlds_module__module_info_get_type_ctor_gen_infos_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_10, &transform_hlds__dead_proc_elim__TypeCtorGenInfos_77);
                            }
#line 385 "dead_proc_elim.m"
                            {
#line 385 "dead_proc_elim.m"
                              transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim__find_type_ctor_info_5_p_0(transform_hlds__dead_proc_elim__Module_18, transform_hlds__dead_proc_elim__Type_19, transform_hlds__dead_proc_elim__Arity_20, transform_hlds__dead_proc_elim__TypeCtorGenInfos_77, &transform_hlds__dead_proc_elim__Refs_78);
                            }
#line 389 "dead_proc_elim.m"
                            if (transform_hlds__dead_proc_elim__succeeded)
#line 388 "dead_proc_elim.m"
                              {
#line 388 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__dead_proc_examine_refs_5_p_0(transform_hlds__dead_proc_elim__Refs_78, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_32_32, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_33_33);
                              }
#line 389 "dead_proc_elim.m"
                            else
#line 390 "dead_proc_elim.m"
                              {
#line 390 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_33_33 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24;
#line 390 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_32_32 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 390 "dead_proc_elim.m"
                              }
#line 382 "dead_proc_elim.m"
                          }
#line 351 "dead_proc_elim.m"
                          break;
#line 351 "dead_proc_elim.m"
                        case (MR_Integer) 0:
#line 350 "dead_proc_elim.m"
                          {
#line 350 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_32_32 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 350 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_33_33 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24;
#line 350 "dead_proc_elim.m"
                          }
#line 351 "dead_proc_elim.m"
                          break;
#line 351 "dead_proc_elim.m"
                      }
#line 348 "dead_proc_elim.m"
                    }
#line 344 "dead_proc_elim.m"
                    break;
#line 344 "dead_proc_elim.m"
                  case (MR_Integer) 3:
#line 357 "dead_proc_elim.m"
                    {
#line 357 "dead_proc_elim.m"
                      MR_Integer transform_hlds__dead_proc_elim__ConstNum_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Entity_12, (MR_Integer) 0)));

#line 360 "dead_proc_elim.m"
#line 360 "dead_proc_elim.m"
                      switch (transform_hlds__dead_proc_elim__AnalyzeWhat_9) {
#line 360 "dead_proc_elim.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 360 "dead_proc_elim.m"
                        case (MR_Integer) 1:
#line 427 "dead_proc_elim.m"
                          {
#line 427 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__ConstStructDb_50;
#line 427 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__ConstStruct_51;
#line 427 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__ConsId_52;
#line 427 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__Args_53;
#line 427 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_60;
#line 427 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_62;
#line 430 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__V_54_54;
#line 430 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__V_55_55;
#line 435 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__Module_56;
#line 435 "dead_proc_elim.m"
                            MR_String transform_hlds__dead_proc_elim__TypeName_57;
#line 435 "dead_proc_elim.m"
                            MR_Integer transform_hlds__dead_proc_elim__Arity_58;

#line 428 "dead_proc_elim.m"
                            {
#line 428 "dead_proc_elim.m"
                              hlds__hlds_module__module_info_get_const_struct_db_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_10, &transform_hlds__dead_proc_elim__ConstStructDb_50);
                            }
#line 429 "dead_proc_elim.m"
                            {
#line 429 "dead_proc_elim.m"
                              hlds__const_struct__lookup_const_struct_num_3_p_0(transform_hlds__dead_proc_elim__ConstStructDb_50, transform_hlds__dead_proc_elim__ConstNum_21, &transform_hlds__dead_proc_elim__ConstStruct_51);
                            }
#line 430 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__ConsId_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ConstStruct_51, (MR_Integer) 0)));
#line 430 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__Args_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ConstStruct_51, (MR_Integer) 1)));
#line 430 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ConstStruct_51, (MR_Integer) 2)));
#line 430 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ConstStruct_51, (MR_Integer) 3)));
#line 431 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__succeeded = ((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__ConsId_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_52, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 431 "dead_proc_elim.m"
                            if (transform_hlds__dead_proc_elim__succeeded)
#line 431 "dead_proc_elim.m"
                              {
#line 431 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__Module_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_52, (MR_Integer) 1)));
#line 431 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__TypeName_57 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_52, (MR_Integer) 2)));
#line 431 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__Arity_58 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_52, (MR_Integer) 3)));
#line 432 "dead_proc_elim.m"
                                {
#line 432 "dead_proc_elim.m"
                                  MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_30_65;
#line 432 "dead_proc_elim.m"
                                  MR_Word transform_hlds__dead_proc_elim__Entity_59;

#line 432 "dead_proc_elim.m"
                                  {
#line 432 "dead_proc_elim.m"
                                    transform_hlds__dead_proc_elim__Entity_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 432 "dead_proc_elim.m"
                                    MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_59, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Module_56));
#line 432 "dead_proc_elim.m"
                                    MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_59, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__TypeName_57));
#line 432 "dead_proc_elim.m"
                                    MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_59, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__Arity_58));
#line 432 "dead_proc_elim.m"
                                  }
#line 9490 "transform_hlds.dead_proc_elim.c"
                                  transform_hlds__dead_proc_elim__TypeCtorInfo_30_65 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 433 "dead_proc_elim.m"
                                  {
#line 433 "dead_proc_elim.m"
                                    mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_30_65, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_59)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_60);
                                  }
#line 434 "dead_proc_elim.m"
                                  {
#line 434 "dead_proc_elim.m"
                                    mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_30_65, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_59)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_62);
                                  }
#line 432 "dead_proc_elim.m"
                                }
#line 431 "dead_proc_elim.m"
                              }
#line 431 "dead_proc_elim.m"
                            else
#line 436 "dead_proc_elim.m"
                              {
#line 436 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_62 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24;
#line 436 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_60 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 436 "dead_proc_elim.m"
                              }
#line 438 "dead_proc_elim.m"
                            {
#line 438 "dead_proc_elim.m"
                              transform_hlds__dead_proc_elim__dead_proc_examine_const_struct_args_5_p_0(transform_hlds__dead_proc_elim__Args_53, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_60, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_32_32, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_62, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_33_33);
                            }
#line 427 "dead_proc_elim.m"
                          }
#line 360 "dead_proc_elim.m"
                          break;
#line 360 "dead_proc_elim.m"
                        case (MR_Integer) 0:
#line 359 "dead_proc_elim.m"
                          {
#line 359 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_32_32 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 359 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_33_33 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24;
#line 359 "dead_proc_elim.m"
                          }
#line 360 "dead_proc_elim.m"
                          break;
#line 360 "dead_proc_elim.m"
                      }
#line 357 "dead_proc_elim.m"
                    }
#line 344 "dead_proc_elim.m"
                    break;
#line 344 "dead_proc_elim.m"
                }
#line 344 "dead_proc_elim.m"
              }
#line 366 "dead_proc_elim.m"
            else
#line 367 "dead_proc_elim.m"
              {
#line 367 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_33_33 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24;
#line 367 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_34_34 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_0_23;
#line 367 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_32_32 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 367 "dead_proc_elim.m"
              }
#line 369 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 369 "dead_proc_elim.m"
            {
#line 369 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_22 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_32_32;
#line 369 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_0__tmp_copy_23 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_34_34;
#line 369 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_24 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_33_33;

#line 369 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_24;
#line 369 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_0_23 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_0__tmp_copy_23;
#line 369 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_22 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_22;
#line 369 "dead_proc_elim.m"
            }
#line 369 "dead_proc_elim.m"
            continue;
#line 368 "dead_proc_elim.m"
          }
#line 371 "dead_proc_elim.m"
        else
#line 372 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24;
#line 371 "dead_proc_elim.m"
      }
#line 371 "dead_proc_elim.m"
      break;
#line 371 "dead_proc_elim.m"
    }
#line 332 "dead_proc_elim.m"
}

#line 320 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__get_class_interface_pred_proc_5_p_0(
#line 320 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ClassProc_6,
#line 320 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_12,
#line 320 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_13,
#line 320 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_14,
#line 320 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_15)
#line 320 "dead_proc_elim.m"
{
#line 324 "dead_proc_elim.m"
  {
#line 324 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 324 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_19_19;
#line 324 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ClassProc_6, (MR_Integer) 0)));
#line 324 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ClassProc_6, (MR_Integer) 1)));
#line 324 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Entity_11;

#line 326 "dead_proc_elim.m"
    {
#line 326 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__Entity_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 326 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_11, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_9));
#line 326 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_11, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_10));
#line 326 "dead_proc_elim.m"
    }
#line 9633 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_19_19 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 327 "dead_proc_elim.m"
    {
#line 327 "dead_proc_elim.m"
      mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_19_19, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_11)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_12, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_13);
    }
#line 328 "dead_proc_elim.m"
    {
#line 328 "dead_proc_elim.m"
      mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_19_19, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_11)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_14, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_15);
#line 328 "dead_proc_elim.m"
      return;
    }
#line 324 "dead_proc_elim.m"
  }
#line 320 "dead_proc_elim.m"
}

#line 318 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0_1(
#line 318 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 318 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 318 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 318 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 318 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 318 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5)
#line 318 "dead_proc_elim.m"
{
#line 318 "dead_proc_elim.m"
  {
#line 318 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 318 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_13;
#line 318 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_15;

#line 318 "dead_proc_elim.m"
    {
#line 318 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__get_class_interface_pred_proc_5_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_13, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_4), &transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_15);
    }
#line 318 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_13));
#line 318 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_5 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_15));
#line 318 "dead_proc_elim.m"
  }
#line 318 "dead_proc_elim.m"
}

#line 312 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0(
#line 312 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Class_6,
#line 312 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_10,
#line 312 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_11,
#line 312 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_12,
#line 312 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_13)
#line 312 "dead_proc_elim.m"
{
#line 316 "dead_proc_elim.m"
  {
#line 316 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 316 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Methods_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Class_6, (MR_Integer) 7)));
#line 317 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Class_6, (MR_Integer) 0)));
#line 317 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Class_6, (MR_Integer) 1)));
#line 317 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Class_6, (MR_Integer) 2)));
#line 317 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Class_6, (MR_Integer) 3)));
#line 317 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Class_6, (MR_Integer) 4)));
#line 317 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Class_6, (MR_Integer) 5)));
#line 317 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Class_6, (MR_Integer) 6)));
#line 317 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Class_6, (MR_Integer) 8)));
#line 317 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Class_6, (MR_Integer) 9)));
#line 318 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_11;
#line 318 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_13;

#line 318 "dead_proc_elim.m"
    {
#line 318 "dead_proc_elim.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[4], (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[0], (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[12], transform_hlds__dead_proc_elim__Methods_9, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_10)), &transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_11, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_12)), &transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_13);
    }
#line 318 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_11 = ((MR_Word) transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_11);
#line 318 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_13 = ((MR_Word) transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_13);
#line 316 "dead_proc_elim.m"
  }
#line 312 "dead_proc_elim.m"
}

#line 309 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0_1(
#line 309 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 309 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 309 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 309 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 309 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 309 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5)
#line 309 "dead_proc_elim.m"
{
#line 309 "dead_proc_elim.m"
  {
#line 309 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 309 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_13;
#line 309 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_15;

#line 309 "dead_proc_elim.m"
    {
#line 309 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__get_class_interface_pred_proc_5_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_13, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_4), &transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_15);
    }
#line 309 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_13));
#line 309 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_5 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_15));
#line 309 "dead_proc_elim.m"
  }
#line 309 "dead_proc_elim.m"
}

#line 296 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0(
#line 296 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Instance_6,
#line 296 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_20,
#line 296 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_21,
#line 296 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_22,
#line 296 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_23)
#line 296 "dead_proc_elim.m"
{
#line 300 "dead_proc_elim.m"
  {
#line 300 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 300 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredProcIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Instance_6, (MR_Integer) 7)));
#line 301 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Instance_6, (MR_Integer) 0)));
#line 301 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Instance_6, (MR_Integer) 1)));
#line 301 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Instance_6, (MR_Integer) 2)));
#line 301 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Instance_6, (MR_Integer) 3)));
#line 301 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Instance_6, (MR_Integer) 4)));
#line 301 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Instance_6, (MR_Integer) 5)));
#line 301 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Instance_6, (MR_Integer) 6)));
#line 301 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Instance_6, (MR_Integer) 8)));
#line 301 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Instance_6, (MR_Integer) 9)));

#line 307 "dead_proc_elim.m"
    if ((transform_hlds__dead_proc_elim__PredProcIds_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 306 "dead_proc_elim.m"
      {
#line 306 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_21 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_20;
#line 306 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_23 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_22;
#line 306 "dead_proc_elim.m"
      }
#line 307 "dead_proc_elim.m"
    else
#line 308 "dead_proc_elim.m"
      {
#line 308 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__Ids_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__PredProcIds_16, (MR_Integer) 0)));
#line 309 "dead_proc_elim.m"
        MR_Box transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_21;
#line 309 "dead_proc_elim.m"
        MR_Box transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_23;

#line 309 "dead_proc_elim.m"
        {
#line 309 "dead_proc_elim.m"
          mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[4], (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[0], (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[11], transform_hlds__dead_proc_elim__Ids_19, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_20)), &transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_21, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_22)), &transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_23);
        }
#line 309 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_21 = ((MR_Word) transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_21);
#line 309 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_23 = ((MR_Word) transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_23);
#line 308 "dead_proc_elim.m"
      }
#line 300 "dead_proc_elim.m"
  }
#line 296 "dead_proc_elim.m"
}

#line 294 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_p_0_2(
#line 294 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 294 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 294 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 294 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 294 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 294 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5)
#line 294 "dead_proc_elim.m"
{
#line 294 "dead_proc_elim.m"
  {
#line 294 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 294 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_Queue_11;
#line 294 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_Needed_13;

#line 294 "dead_proc_elim.m"
    {
#line 294 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_Queue_11, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_4), &transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_Needed_13);
    }
#line 294 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_Queue_11));
#line 294 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_5 = ((MR_Box) (transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_Needed_13));
#line 294 "dead_proc_elim.m"
  }
#line 294 "dead_proc_elim.m"
}

#line 292 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_p_0_1(
#line 292 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 292 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 292 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 292 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 292 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 292 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5)
#line 292 "dead_proc_elim.m"
{
#line 292 "dead_proc_elim.m"
  {
#line 292 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 292 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_21;
#line 292 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_23;

#line 292 "dead_proc_elim.m"
    {
#line 292 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_21, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_4), &transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_23);
    }
#line 292 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_21));
#line 292 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_5 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_23));
#line 292 "dead_proc_elim.m"
  }
#line 292 "dead_proc_elim.m"
}

#line 284 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_p_0(
#line 284 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Classes_7,
#line 284 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Instances_8,
#line 284 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_14,
#line 284 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_15,
#line 284 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_16,
#line 284 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_17)
#line 284 "dead_proc_elim.m"
{
#line 289 "dead_proc_elim.m"
  {
#line 289 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 289 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 289 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_26_26;
#line 289 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeInfo_32_32;
#line 289 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeInfo_33_33;
#line 289 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_34_34;
#line 289 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__InstanceDefnsLists_11;
#line 289 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__InstanceDefns_12;
#line 289 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ClassDefns_13;
#line 289 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_19;
#line 289 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_20;
#line 292 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_19_19;
#line 292 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_20_20;
#line 294 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv7_STATE_VARIABLE_Queue_15;
#line 294 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_Needed_17;

#line 290 "dead_proc_elim.m"
    {
#line 290 "dead_proc_elim.m"
      mercury__map__values_2_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_24_24, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[3], transform_hlds__dead_proc_elim__Instances_8, &transform_hlds__dead_proc_elim__InstanceDefnsLists_11);
    }
#line 10002 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
#line 291 "dead_proc_elim.m"
    {
#line 291 "dead_proc_elim.m"
      mercury__list__condense_2_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_26_26, transform_hlds__dead_proc_elim__InstanceDefnsLists_11, &transform_hlds__dead_proc_elim__InstanceDefns_12);
    }
#line 10009 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeInfo_32_32 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[4];
#line 10011 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeInfo_33_33 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[0];
#line 292 "dead_proc_elim.m"
    {
#line 292 "dead_proc_elim.m"
      mercury__list__foldl2_6_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_26_26, transform_hlds__dead_proc_elim__TypeInfo_32_32, transform_hlds__dead_proc_elim__TypeInfo_33_33, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[9], transform_hlds__dead_proc_elim__InstanceDefns_12, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_14)), &transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_19_19, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_16)), &transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_20_20);
    }
#line 292 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_19 = ((MR_Word) transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_19_19);
#line 292 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_20 = ((MR_Word) transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_20_20);
#line 10022 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_34_34 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0;
#line 293 "dead_proc_elim.m"
    {
#line 293 "dead_proc_elim.m"
      mercury__map__values_2_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_24_24, transform_hlds__dead_proc_elim__TypeCtorInfo_34_34, transform_hlds__dead_proc_elim__Classes_7, &transform_hlds__dead_proc_elim__ClassDefns_13);
    }
#line 294 "dead_proc_elim.m"
    {
#line 294 "dead_proc_elim.m"
      mercury__list__foldl2_6_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_34_34, transform_hlds__dead_proc_elim__TypeInfo_32_32, transform_hlds__dead_proc_elim__TypeInfo_33_33, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[10], transform_hlds__dead_proc_elim__ClassDefns_13, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_19)), &transform_hlds__dead_proc_elim__conv7_STATE_VARIABLE_Queue_15, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_20)), &transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_Needed_17);
    }
#line 294 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_15 = ((MR_Word) transform_hlds__dead_proc_elim__conv7_STATE_VARIABLE_Queue_15);
#line 294 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_17 = ((MR_Word) transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_Needed_17);
#line 289 "dead_proc_elim.m"
  }
#line 284 "dead_proc_elim.m"
}

#line 250 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_type_ctor_infos_5_p_0(
#line 250 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 250 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 250 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 250 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4,
#line 250 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5)
#line 250 "dead_proc_elim.m"
{
#line 254 "dead_proc_elim.m"
  while (MR_TRUE)
#line 254 "dead_proc_elim.m"
    {
#line 254 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 254 "dead_proc_elim.m"
      {
#line 254 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 254 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 254 "dead_proc_elim.m"
          {
#line 254 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4;
#line 254 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2;
#line 254 "dead_proc_elim.m"
          }
#line 254 "dead_proc_elim.m"
        else
#line 256 "dead_proc_elim.m"
          {
#line 256 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 256 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfos_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 256 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_12, (MR_Integer) 1)));
#line 256 "dead_proc_elim.m"
            MR_String transform_hlds__dead_proc_elim__TypeName_18 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_12, (MR_Integer) 2)));
#line 256 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__Arity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_12, (MR_Integer) 3)));
#line 256 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_29_29;
#line 256 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_31_31;
#line 257 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim___TypeCtor_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_12, (MR_Integer) 0)));
#line 257 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim___Status_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_12, (MR_Integer) 4)));
#line 257 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim___HldsDefn_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_12, (MR_Integer) 5)));
#line 257 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim___Unify_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_12, (MR_Integer) 6)));
#line 257 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim___Compare_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_12, (MR_Integer) 7)));

#line 274 "dead_proc_elim.m"
            {
#line 274 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__succeeded = mercury__builtin__semidet_succeed_0_p_0();
            }
#line 279 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 276 "dead_proc_elim.m"
              {
#line 276 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_34_34;
#line 276 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__Entity_24;

#line 276 "dead_proc_elim.m"
                {
#line 276 "dead_proc_elim.m"
                  transform_hlds__dead_proc_elim__Entity_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 276 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_24, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ModuleName_17));
#line 276 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_24, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__TypeName_18));
#line 276 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_24, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__Arity_19));
#line 276 "dead_proc_elim.m"
                }
#line 10134 "transform_hlds.dead_proc_elim.c"
                transform_hlds__dead_proc_elim__TypeCtorInfo_34_34 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 277 "dead_proc_elim.m"
                {
#line 277 "dead_proc_elim.m"
                  mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_34_34, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_24)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_29_29);
                }
#line 278 "dead_proc_elim.m"
                {
#line 278 "dead_proc_elim.m"
                  mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_34_34, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_24)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_31_31);
                }
#line 276 "dead_proc_elim.m"
              }
#line 279 "dead_proc_elim.m"
            else
#line 280 "dead_proc_elim.m"
              {
#line 280 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_31_31 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4;
#line 280 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_29_29 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2;
#line 280 "dead_proc_elim.m"
              }
#line 282 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 282 "dead_proc_elim.m"
            {
#line 282 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1 = transform_hlds__dead_proc_elim__TypeCtorGenInfos_13;
#line 282 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_2 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_29_29;
#line 282 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_31_31;

#line 282 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_4;
#line 282 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_2;
#line 282 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1;
#line 282 "dead_proc_elim.m"
            }
#line 282 "dead_proc_elim.m"
            continue;
#line 256 "dead_proc_elim.m"
          }
#line 254 "dead_proc_elim.m"
      }
#line 254 "dead_proc_elim.m"
      break;
#line 254 "dead_proc_elim.m"
    }
#line 250 "dead_proc_elim.m"
}

#line 238 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_p_0(
#line 238 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 238 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 238 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 238 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4,
#line 238 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5)
#line 238 "dead_proc_elim.m"
{
#line 242 "dead_proc_elim.m"
  while (MR_TRUE)
#line 242 "dead_proc_elim.m"
    {
#line 242 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 242 "dead_proc_elim.m"
      {
#line 242 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 242 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 242 "dead_proc_elim.m"
          {
#line 242 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4;
#line 242 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2;
#line 242 "dead_proc_elim.m"
          }
#line 242 "dead_proc_elim.m"
        else
#line 243 "dead_proc_elim.m"
          {
#line 243 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_28_28;
#line 243 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PPId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 243 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PPIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 243 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__PPId_12, (MR_Integer) 0)));
#line 243 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__ProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__PPId_12, (MR_Integer) 1)));
#line 243 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Entity_18;
#line 243 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_23;
#line 243 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25_25;

#line 245 "dead_proc_elim.m"
            {
#line 245 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__Entity_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 245 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_18, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_16));
#line 245 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_18, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_17));
#line 245 "dead_proc_elim.m"
            }
#line 10257 "transform_hlds.dead_proc_elim.c"
            transform_hlds__dead_proc_elim__TypeCtorInfo_28_28 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 246 "dead_proc_elim.m"
            {
#line 246 "dead_proc_elim.m"
              mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_28_28, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_18)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_23);
            }
#line 247 "dead_proc_elim.m"
            {
#line 247 "dead_proc_elim.m"
              mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_28_28, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_18)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25_25);
            }
#line 248 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 248 "dead_proc_elim.m"
            {
#line 248 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1 = transform_hlds__dead_proc_elim__PPIds_13;
#line 248 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_2 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_23;
#line 248 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25_25;

#line 248 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_4;
#line 248 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_2;
#line 248 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1;
#line 248 "dead_proc_elim.m"
            }
#line 248 "dead_proc_elim.m"
            continue;
#line 243 "dead_proc_elim.m"
          }
#line 242 "dead_proc_elim.m"
      }
#line 242 "dead_proc_elim.m"
      break;
#line 242 "dead_proc_elim.m"
    }
#line 238 "dead_proc_elim.m"
}

#line 221 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_p_0(
#line 221 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 221 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 221 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 221 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4,
#line 221 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5)
#line 221 "dead_proc_elim.m"
{
#line 225 "dead_proc_elim.m"
  while (MR_TRUE)
#line 225 "dead_proc_elim.m"
    {
#line 225 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 225 "dead_proc_elim.m"
      {
#line 225 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 225 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 225 "dead_proc_elim.m"
          {
#line 225 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4;
#line 225 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2;
#line 225 "dead_proc_elim.m"
          }
#line 225 "dead_proc_elim.m"
        else
#line 227 "dead_proc_elim.m"
          {
#line 227 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_31_31;
#line 227 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PragmaProc_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 227 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PragmaProcs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 227 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__PragmaProc_12, (MR_Integer) 1)));
#line 227 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__PragmaProc_12, (MR_Integer) 2)));
#line 227 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Entity_21;
#line 227 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 227 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_28_28;
#line 228 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim___Lang_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__PragmaProc_12, (MR_Integer) 0)));
#line 228 "dead_proc_elim.m"
            MR_String transform_hlds__dead_proc_elim___ExportName_19 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__PragmaProc_12, (MR_Integer) 3)));
#line 228 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim___Ctxt_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__PragmaProc_12, (MR_Integer) 4)));

#line 230 "dead_proc_elim.m"
            {
#line 230 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__Entity_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 230 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_21, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_17));
#line 230 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_21, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_18));
#line 230 "dead_proc_elim.m"
            }
#line 10374 "transform_hlds.dead_proc_elim.c"
            transform_hlds__dead_proc_elim__TypeCtorInfo_31_31 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 231 "dead_proc_elim.m"
            {
#line 231 "dead_proc_elim.m"
              mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_31_31, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_21)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26);
            }
#line 232 "dead_proc_elim.m"
            {
#line 232 "dead_proc_elim.m"
              mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_31_31, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_21)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_28_28);
            }
#line 233 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 233 "dead_proc_elim.m"
            {
#line 233 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1 = transform_hlds__dead_proc_elim__PragmaProcs_13;
#line 233 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_2 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 233 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_28_28;

#line 233 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_4;
#line 233 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_2;
#line 233 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1;
#line 233 "dead_proc_elim.m"
            }
#line 233 "dead_proc_elim.m"
            continue;
#line 227 "dead_proc_elim.m"
          }
#line 225 "dead_proc_elim.m"
      }
#line 225 "dead_proc_elim.m"
      break;
#line 225 "dead_proc_elim.m"
    }
#line 221 "dead_proc_elim.m"
}

#line 207 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_procs_6_p_0(
#line 207 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 207 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 207 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3,
#line 207 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4,
#line 207 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5,
#line 207 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6)
#line 207 "dead_proc_elim.m"
{
#line 211 "dead_proc_elim.m"
  while (MR_TRUE)
#line 211 "dead_proc_elim.m"
    {
#line 211 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 211 "dead_proc_elim.m"
      {
#line 211 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 211 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 211 "dead_proc_elim.m"
          {
#line 211 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5;
#line 211 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3;
#line 211 "dead_proc_elim.m"
          }
#line 211 "dead_proc_elim.m"
        else
#line 212 "dead_proc_elim.m"
          {
#line 212 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_29_29;
#line 212 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__ProcId_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));
#line 212 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__ProcIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 1)));
#line 212 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Entity_19;
#line 212 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_24_24;
#line 212 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_26_26;

#line 213 "dead_proc_elim.m"
            {
#line 213 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__Entity_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 213 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_19, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__HeadVar__1_1));
#line 213 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_19, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_15));
#line 213 "dead_proc_elim.m"
            }
#line 10483 "transform_hlds.dead_proc_elim.c"
            transform_hlds__dead_proc_elim__TypeCtorInfo_29_29 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 214 "dead_proc_elim.m"
            {
#line 214 "dead_proc_elim.m"
              mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_29_29, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_19)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_24_24);
            }
#line 215 "dead_proc_elim.m"
            {
#line 215 "dead_proc_elim.m"
              mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_29_29, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_19)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_26_26);
            }
#line 216 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 216 "dead_proc_elim.m"
            {
#line 216 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__HeadVar__2__tmp_copy_2 = transform_hlds__dead_proc_elim__ProcIds_16;
#line 216 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_24_24;
#line 216 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_26_26;

#line 216 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_5;
#line 216 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_3;
#line 216 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__HeadVar__2_2 = transform_hlds__dead_proc_elim__HeadVar__2__tmp_copy_2;
#line 216 "dead_proc_elim.m"
            }
#line 216 "dead_proc_elim.m"
            continue;
#line 212 "dead_proc_elim.m"
          }
#line 211 "dead_proc_elim.m"
      }
#line 211 "dead_proc_elim.m"
      break;
#line 211 "dead_proc_elim.m"
    }
#line 207 "dead_proc_elim.m"
}

#line 194 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_preds_6_p_0(
#line 194 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 194 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 194 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3,
#line 194 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4,
#line 194 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5,
#line 194 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6)
#line 194 "dead_proc_elim.m"
{
#line 198 "dead_proc_elim.m"
  while (MR_TRUE)
#line 198 "dead_proc_elim.m"
    {
#line 198 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 198 "dead_proc_elim.m"
      {
#line 198 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 198 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 198 "dead_proc_elim.m"
          {
#line 198 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5;
#line 198 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3;
#line 198 "dead_proc_elim.m"
          }
#line 198 "dead_proc_elim.m"
        else
#line 199 "dead_proc_elim.m"
          {
#line 199 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 199 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PredIds_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 199 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PredInfo_19;
#line 199 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__ProcIds_20;
#line 199 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_25;
#line 199 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_26_26;
#line 200 "dead_proc_elim.m"
            MR_Box transform_hlds__dead_proc_elim__conv0_PredInfo_19;

#line 200 "dead_proc_elim.m"
            {
#line 200 "dead_proc_elim.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, transform_hlds__dead_proc_elim__HeadVar__2_2, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_14)), &transform_hlds__dead_proc_elim__conv0_PredInfo_19);
            }
#line 200 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__PredInfo_19 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_PredInfo_19);
#line 201 "dead_proc_elim.m"
            {
#line 201 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__ProcIds_20 = hlds__hlds_pred__pred_info_exported_procids_1_f_0(transform_hlds__dead_proc_elim__PredInfo_19);
            }
#line 202 "dead_proc_elim.m"
            {
#line 202 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__dead_proc_initialize_procs_6_p_0(transform_hlds__dead_proc_elim__PredId_14, transform_hlds__dead_proc_elim__ProcIds_20, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_25, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_26_26);
            }
#line 203 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 203 "dead_proc_elim.m"
            {
#line 203 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1 = transform_hlds__dead_proc_elim__PredIds_15;
#line 203 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_25;
#line 203 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_26_26;

#line 203 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_5;
#line 203 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_3;
#line 203 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1;
#line 203 "dead_proc_elim.m"
            }
#line 203 "dead_proc_elim.m"
            continue;
#line 199 "dead_proc_elim.m"
          }
#line 198 "dead_proc_elim.m"
      }
#line 198 "dead_proc_elim.m"
      break;
#line 198 "dead_proc_elim.m"
    }
#line 194 "dead_proc_elim.m"
}

#line 1044 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_4(
#line 1044 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1044 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1)
#line 1044 "dead_proc_elim.m"
{
#line 1044 "dead_proc_elim.m"
  {
#line 1044 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 1044 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;

#line 1044 "dead_proc_elim.m"
    {
#line 1044 "dead_proc_elim.m"
      return transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__1044__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1));
    }
#line 1044 "dead_proc_elim.m"
    return transform_hlds__dead_proc_elim__succeeded;
#line 1044 "dead_proc_elim.m"
  }
#line 1044 "dead_proc_elim.m"
}

#line 1031 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_3(
#line 1031 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1031 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1031 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1031 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 1031 "dead_proc_elim.m"
{
#line 1031 "dead_proc_elim.m"
  {
#line 1031 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 1031 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv6_HeadVar__4_53;

#line 1031 "dead_proc_elim.m"
    {
#line 1031 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__1034__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv6_HeadVar__4_53);
    }
#line 1031 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv6_HeadVar__4_53));
#line 1031 "dead_proc_elim.m"
  }
#line 1031 "dead_proc_elim.m"
}

#line 1019 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_2(
#line 1019 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1019 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1019 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1019 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 1019 "dead_proc_elim.m"
{
#line 1019 "dead_proc_elim.m"
  {
#line 1019 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 1019 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv4_DeadInfo_6;

#line 1019 "dead_proc_elim.m"
    {
#line 1019 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv4_DeadInfo_6);
    }
#line 1019 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv4_DeadInfo_6));
#line 1019 "dead_proc_elim.m"
  }
#line 1019 "dead_proc_elim.m"
}

#line 1010 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_1(
#line 1010 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1010 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1010 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1010 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 1010 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 1010 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5)
#line 1010 "dead_proc_elim.m"
{
#line 1010 "dead_proc_elim.m"
  {
#line 1010 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 1010 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_3;
#line 1010 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Preds_5;

#line 1010 "dead_proc_elim.m"
    {
#line 1010 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_pred_elim_add_entity_5_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_3, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_4), &transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Preds_5);
    }
#line 1010 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_3));
#line 1010 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_5 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Preds_5));
#line 1010 "dead_proc_elim.m"
  }
#line 1010 "dead_proc_elim.m"
}

#line 73 "dead_proc_elim.m"
void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0(
#line 73 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_44,
#line 73 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_45)
#line 73 "dead_proc_elim.m"
{
#line 993 "dead_proc_elim.m"
  {
#line 993 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_61_61 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_62_62;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_64_64;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeInfo_71_71;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Queue0_4;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Needed0_5;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PragmaExports_6;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Needed1_8;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Instances_9;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Classes_10;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Needed_12;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Entities_13;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Queue1_14;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__NeededPreds0_15;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Queue_16;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__NeededPreds1_17;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredIds_18;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Preds0_19;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Names0_20;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__DeadInfo0_21;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__DeadInfo1_22;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__DeadInfo_23;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__NeededPreds2_26;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeSpecInfo0_28;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeSpecProcs0_29;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeSpecForcePreds0_30;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__SpecMap0_31;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PragmaMap0_32;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__NeededPredList2_33;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__NeededPreds_38;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeSpecForcePreds_39;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeSpecInfo_40;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredTable0_41;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PartialQualInfo_42;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredTable_43;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_46_46;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_49_49;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_50_50;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_54_54;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_55_55;
#line 993 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_56_56;
#line 997 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_7_7;
#line 1005 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_11_11;
#line 1010 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv3_Queue_16;
#line 1010 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv2_NeededPreds1_17;
#line 1019 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv5_DeadInfo1_22;
#line 1021 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_24_24;
#line 1021 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_25_25;
#line 1021 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_27_27;
#line 1031 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv7_NeededPreds_38;

#line 994 "dead_proc_elim.m"
    {
#line 994 "dead_proc_elim.m"
      mercury__queue__init_1_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_61_61, &transform_hlds__dead_proc_elim__Queue0_4);
    }
#line 10884 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_62_62 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0;
#line 995 "dead_proc_elim.m"
    {
#line 995 "dead_proc_elim.m"
      mercury__map__init_1_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_61_61, transform_hlds__dead_proc_elim__TypeCtorInfo_62_62, &transform_hlds__dead_proc_elim__Needed0_5);
    }
#line 996 "dead_proc_elim.m"
    {
#line 996 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_44, &transform_hlds__dead_proc_elim__PragmaExports_6);
    }
#line 997 "dead_proc_elim.m"
    {
#line 997 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__V_46_46 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, transform_hlds__dead_proc_elim__PragmaExports_6);
    }
#line 997 "dead_proc_elim.m"
    {
#line 997 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_p_0(transform_hlds__dead_proc_elim__V_46_46, transform_hlds__dead_proc_elim__Queue0_4, &transform_hlds__dead_proc_elim__V_7_7, transform_hlds__dead_proc_elim__Needed0_5, &transform_hlds__dead_proc_elim__Needed1_8);
    }
#line 1003 "dead_proc_elim.m"
    {
#line 1003 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_instance_table_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_44, &transform_hlds__dead_proc_elim__Instances_9);
    }
#line 1004 "dead_proc_elim.m"
    {
#line 1004 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_44, &transform_hlds__dead_proc_elim__Classes_10);
    }
#line 1005 "dead_proc_elim.m"
    {
#line 1005 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_p_0(transform_hlds__dead_proc_elim__Classes_10, transform_hlds__dead_proc_elim__Instances_9, transform_hlds__dead_proc_elim__Queue0_4, &transform_hlds__dead_proc_elim__V_11_11, transform_hlds__dead_proc_elim__Needed1_8, &transform_hlds__dead_proc_elim__Needed_12);
    }
#line 1007 "dead_proc_elim.m"
    {
#line 1007 "dead_proc_elim.m"
      mercury__map__keys_2_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_61_61, transform_hlds__dead_proc_elim__TypeCtorInfo_62_62, transform_hlds__dead_proc_elim__Needed_12, &transform_hlds__dead_proc_elim__Entities_13);
    }
#line 10926 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_64_64 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 1008 "dead_proc_elim.m"
    {
#line 1008 "dead_proc_elim.m"
      mercury__queue__init_1_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_64_64, &transform_hlds__dead_proc_elim__Queue1_14);
    }
#line 1009 "dead_proc_elim.m"
    {
#line 1009 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__NeededPreds0_15 = mercury__set_tree234__init_0_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_64_64);
    }
#line 10938 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeInfo_71_71 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[1];
#line 1010 "dead_proc_elim.m"
    {
#line 1010 "dead_proc_elim.m"
      mercury__list__foldl2_6_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_61_61, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[0], transform_hlds__dead_proc_elim__TypeInfo_71_71, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[7], transform_hlds__dead_proc_elim__Entities_13, ((MR_Box) (transform_hlds__dead_proc_elim__Queue1_14)), &transform_hlds__dead_proc_elim__conv3_Queue_16, ((MR_Box) (transform_hlds__dead_proc_elim__NeededPreds0_15)), &transform_hlds__dead_proc_elim__conv2_NeededPreds1_17);
    }
#line 1010 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__Queue_16 = ((MR_Word) transform_hlds__dead_proc_elim__conv3_Queue_16);
#line 1010 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__NeededPreds1_17 = ((MR_Word) transform_hlds__dead_proc_elim__conv2_NeededPreds1_17);
#line 1013 "dead_proc_elim.m"
    {
#line 1013 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_44, &transform_hlds__dead_proc_elim__PredIds_18);
    }
#line 1015 "dead_proc_elim.m"
    {
#line 1015 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__Preds0_19 = mercury__set_tree234__init_0_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_64_64);
    }
#line 1016 "dead_proc_elim.m"
    {
#line 1016 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__Names0_20 = mercury__set_tree234__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
    }
#line 1017 "dead_proc_elim.m"
    {
#line 1017 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__DeadInfo0_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1017 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo0_21, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_44));
#line 1017 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo0_21, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__Queue_16));
#line 1017 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo0_21, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__Preds0_19));
#line 1017 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo0_21, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__NeededPreds1_17));
#line 1017 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo0_21, 4) = ((MR_Box) (transform_hlds__dead_proc_elim__Names0_20));
#line 1017 "dead_proc_elim.m"
    }
#line 1019 "dead_proc_elim.m"
    {
#line 1019 "dead_proc_elim.m"
      mercury__list__foldl_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_64_64, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[8], transform_hlds__dead_proc_elim__PredIds_18, ((MR_Box) (transform_hlds__dead_proc_elim__DeadInfo0_21)), &transform_hlds__dead_proc_elim__conv5_DeadInfo1_22);
    }
#line 1019 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__DeadInfo1_22 = ((MR_Word) transform_hlds__dead_proc_elim__conv5_DeadInfo1_22);
#line 1020 "dead_proc_elim.m"
    {
#line 1020 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_p_0(transform_hlds__dead_proc_elim__DeadInfo1_22, &transform_hlds__dead_proc_elim__DeadInfo_23);
    }
#line 1021 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo_23, (MR_Integer) 0)));
#line 1021 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo_23, (MR_Integer) 1)));
#line 1021 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo_23, (MR_Integer) 2)));
#line 1021 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__NeededPreds2_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo_23, (MR_Integer) 3)));
#line 1021 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo_23, (MR_Integer) 4)));
#line 1027 "dead_proc_elim.m"
    {
#line 1027 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_type_spec_info_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_49_49, &transform_hlds__dead_proc_elim__TypeSpecInfo0_28);
    }
#line 1028 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__TypeSpecProcs0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeSpecInfo0_28, (MR_Integer) 0)));
#line 1028 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__TypeSpecForcePreds0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeSpecInfo0_28, (MR_Integer) 1)));
#line 1028 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__SpecMap0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeSpecInfo0_28, (MR_Integer) 2)));
#line 1028 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__PragmaMap0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeSpecInfo0_28, (MR_Integer) 3)));
#line 1030 "dead_proc_elim.m"
    {
#line 1030 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__NeededPredList2_33 = mercury__set_tree234__to_sorted_list_1_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_64_64, transform_hlds__dead_proc_elim__NeededPreds2_26);
    }
#line 1031 "dead_proc_elim.m"
    {
#line 1031 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1031 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_50_50, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_6[0]));
#line 1031 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_50_50, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_3));
#line 1031 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1031 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_50_50, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__SpecMap0_31));
#line 1031 "dead_proc_elim.m"
    }
#line 1031 "dead_proc_elim.m"
    {
#line 1031 "dead_proc_elim.m"
      mercury__list__foldl_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_64_64, transform_hlds__dead_proc_elim__TypeInfo_71_71, transform_hlds__dead_proc_elim__V_50_50, transform_hlds__dead_proc_elim__NeededPredList2_33, ((MR_Box) (transform_hlds__dead_proc_elim__NeededPreds2_26)), &transform_hlds__dead_proc_elim__conv7_NeededPreds_38);
    }
#line 1031 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__NeededPreds_38 = ((MR_Word) transform_hlds__dead_proc_elim__conv7_NeededPreds_38);
#line 1044 "dead_proc_elim.m"
    {
#line 1044 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1044 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_54_54, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_7[0]));
#line 1044 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_54_54, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_4));
#line 1044 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_54_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1044 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_54_54, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__NeededPreds_38));
#line 1044 "dead_proc_elim.m"
    }
#line 1044 "dead_proc_elim.m"
    {
#line 1044 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__TypeSpecForcePreds_39 = mercury__set__filter_2_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_64_64, transform_hlds__dead_proc_elim__V_54_54, transform_hlds__dead_proc_elim__TypeSpecForcePreds0_30);
    }
#line 1046 "dead_proc_elim.m"
    {
#line 1046 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__TypeSpecInfo_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1046 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeSpecInfo_40, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__TypeSpecProcs0_29));
#line 1046 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeSpecInfo_40, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__TypeSpecForcePreds_39));
#line 1046 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeSpecInfo_40, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__SpecMap0_31));
#line 1046 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeSpecInfo_40, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__PragmaMap0_32));
#line 1046 "dead_proc_elim.m"
    }
#line 1048 "dead_proc_elim.m"
    {
#line 1048 "dead_proc_elim.m"
      hlds__hlds_module__module_info_set_type_spec_info_3_p_0(transform_hlds__dead_proc_elim__TypeSpecInfo_40, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_49_49, &transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_55_55);
    }
#line 1050 "dead_proc_elim.m"
    {
#line 1050 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_55_55, &transform_hlds__dead_proc_elim__PredTable0_41);
    }
#line 1051 "dead_proc_elim.m"
    {
#line 1051 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_55_55, &transform_hlds__dead_proc_elim__PartialQualInfo_42);
    }
#line 1053 "dead_proc_elim.m"
    {
#line 1053 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__V_56_56 = mercury__set_tree234__to_sorted_list_1_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_64_64, transform_hlds__dead_proc_elim__NeededPreds_38);
    }
#line 1052 "dead_proc_elim.m"
    {
#line 1052 "dead_proc_elim.m"
      hlds__pred_table__predicate_table_restrict_4_p_0(transform_hlds__dead_proc_elim__PartialQualInfo_42, transform_hlds__dead_proc_elim__V_56_56, transform_hlds__dead_proc_elim__PredTable0_41, &transform_hlds__dead_proc_elim__PredTable_43);
    }
#line 1054 "dead_proc_elim.m"
    {
#line 1054 "dead_proc_elim.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__dead_proc_elim__PredTable_43, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_55_55, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_45);
#line 1054 "dead_proc_elim.m"
      return;
    }
#line 993 "dead_proc_elim.m"
  }
#line 73 "dead_proc_elim.m"
}

#line 294 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_analyze_2_p_0_2(
#line 294 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 294 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 294 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 294 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 294 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 294 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5)
#line 294 "dead_proc_elim.m"
{
#line 294 "dead_proc_elim.m"
  {
#line 294 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 294 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_Queue_11;
#line 294 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_Needed_13;

#line 294 "dead_proc_elim.m"
    {
#line 294 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_Queue_11, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_4), &transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_Needed_13);
    }
#line 294 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_Queue_11));
#line 294 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_5 = ((MR_Box) (transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_Needed_13));
#line 294 "dead_proc_elim.m"
  }
#line 294 "dead_proc_elim.m"
}

#line 292 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_analyze_2_p_0_1(
#line 292 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 292 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 292 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 292 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 292 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 292 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5)
#line 292 "dead_proc_elim.m"
{
#line 292 "dead_proc_elim.m"
  {
#line 292 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 292 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_21;
#line 292 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_23;

#line 292 "dead_proc_elim.m"
    {
#line 292 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_21, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_4), &transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_23);
    }
#line 292 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_21));
#line 292 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_5 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_23));
#line 292 "dead_proc_elim.m"
  }
#line 292 "dead_proc_elim.m"
}

#line 65 "dead_proc_elim.m"
void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_analyze_2_p_0(
#line 65 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ModuleInfo_3,
#line 65 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5)
#line 65 "dead_proc_elim.m"
{
#line 139 "dead_proc_elim.m"
  {
#line 139 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_32_45;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_24_65;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_26_67;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeInfo_32_73;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeInfo_33_74;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_34_75;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Examined0_12;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Queue0_13;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_10_14;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredIds_22;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredTable_23;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PragmaExports_24;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__InitProcs_25;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__FinalPreds_26;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfos_27;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Classes_28;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Instances_29;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_17_30;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_18_31;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_32;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_33;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_34_34;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_22_35;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_23_36;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_24_37;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25_38;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_39;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_40;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_28_41;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_29_42;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__InstanceDefnsLists_56;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__InstanceDefns_57;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ClassDefns_58;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_60;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_61;
#line 292 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_19_60;
#line 292 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_20_61;
#line 294 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv7_Queue0_13;
#line 294 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_Needed_10_14;

#line 156 "dead_proc_elim.m"
    {
#line 156 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__Examined0_12 = mercury__set_tree234__init_0_f_0((MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0);
    }
#line 11288 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_32_45 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 168 "dead_proc_elim.m"
    {
#line 168 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_17_30 = mercury__queue__init_0_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_32_45);
    }
#line 169 "dead_proc_elim.m"
    {
#line 169 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_18_31 = mercury__map__init_0_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_32_45, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0);
    }
#line 170 "dead_proc_elim.m"
    {
#line 170 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_3, &transform_hlds__dead_proc_elim__PredIds_22);
    }
#line 171 "dead_proc_elim.m"
    {
#line 171 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_3, &transform_hlds__dead_proc_elim__PredTable_23);
    }
#line 172 "dead_proc_elim.m"
    {
#line 172 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_preds_6_p_0(transform_hlds__dead_proc_elim__PredIds_22, transform_hlds__dead_proc_elim__PredTable_23, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_17_30, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_32, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_18_31, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_33);
    }
#line 174 "dead_proc_elim.m"
    {
#line 174 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_3, &transform_hlds__dead_proc_elim__PragmaExports_24);
    }
#line 175 "dead_proc_elim.m"
    {
#line 175 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__V_34_34 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, transform_hlds__dead_proc_elim__PragmaExports_24);
    }
#line 175 "dead_proc_elim.m"
    {
#line 175 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_p_0(transform_hlds__dead_proc_elim__V_34_34, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_32, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_22_35, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_33, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_23_36);
    }
#line 178 "dead_proc_elim.m"
    {
#line 178 "dead_proc_elim.m"
      hlds__hlds_module__module_info_user_init_pred_procs_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_3, &transform_hlds__dead_proc_elim__InitProcs_25);
    }
#line 179 "dead_proc_elim.m"
    {
#line 179 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_p_0(transform_hlds__dead_proc_elim__InitProcs_25, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_22_35, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_24_37, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_23_36, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25_38);
    }
#line 181 "dead_proc_elim.m"
    {
#line 181 "dead_proc_elim.m"
      hlds__hlds_module__module_info_user_final_pred_procs_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_3, &transform_hlds__dead_proc_elim__FinalPreds_26);
    }
#line 182 "dead_proc_elim.m"
    {
#line 182 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_p_0(transform_hlds__dead_proc_elim__FinalPreds_26, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_24_37, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_39, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25_38, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_40);
    }
#line 184 "dead_proc_elim.m"
    {
#line 184 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_type_ctor_gen_infos_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_3, &transform_hlds__dead_proc_elim__TypeCtorGenInfos_27);
    }
#line 185 "dead_proc_elim.m"
    {
#line 185 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_type_ctor_infos_5_p_0(transform_hlds__dead_proc_elim__TypeCtorGenInfos_27, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_39, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_28_41, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_40, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_29_42);
    }
#line 187 "dead_proc_elim.m"
    {
#line 187 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_3, &transform_hlds__dead_proc_elim__Classes_28);
    }
#line 188 "dead_proc_elim.m"
    {
#line 188 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_instance_table_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_3, &transform_hlds__dead_proc_elim__Instances_29);
    }
#line 11370 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_24_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 290 "dead_proc_elim.m"
    {
#line 290 "dead_proc_elim.m"
      mercury__map__values_2_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_24_65, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[3], transform_hlds__dead_proc_elim__Instances_29, &transform_hlds__dead_proc_elim__InstanceDefnsLists_56);
    }
#line 11377 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_26_67 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
#line 291 "dead_proc_elim.m"
    {
#line 291 "dead_proc_elim.m"
      mercury__list__condense_2_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_26_67, transform_hlds__dead_proc_elim__InstanceDefnsLists_56, &transform_hlds__dead_proc_elim__InstanceDefns_57);
    }
#line 11384 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeInfo_32_73 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[4];
#line 11386 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeInfo_33_74 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[0];
#line 292 "dead_proc_elim.m"
    {
#line 292 "dead_proc_elim.m"
      mercury__list__foldl2_6_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_26_67, transform_hlds__dead_proc_elim__TypeInfo_32_73, transform_hlds__dead_proc_elim__TypeInfo_33_74, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[5], transform_hlds__dead_proc_elim__InstanceDefns_57, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_28_41)), &transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_19_60, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_29_42)), &transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_20_61);
    }
#line 292 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_60 = ((MR_Word) transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_19_60);
#line 292 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_61 = ((MR_Word) transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_20_61);
#line 11397 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_34_75 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0;
#line 293 "dead_proc_elim.m"
    {
#line 293 "dead_proc_elim.m"
      mercury__map__values_2_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_24_65, transform_hlds__dead_proc_elim__TypeCtorInfo_34_75, transform_hlds__dead_proc_elim__Classes_28, &transform_hlds__dead_proc_elim__ClassDefns_58);
    }
#line 294 "dead_proc_elim.m"
    {
#line 294 "dead_proc_elim.m"
      mercury__list__foldl2_6_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_34_75, transform_hlds__dead_proc_elim__TypeInfo_32_73, transform_hlds__dead_proc_elim__TypeInfo_33_74, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[6], transform_hlds__dead_proc_elim__ClassDefns_58, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_60)), &transform_hlds__dead_proc_elim__conv7_Queue0_13, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_61)), &transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_Needed_10_14);
    }
#line 294 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__Queue0_13 = ((MR_Word) transform_hlds__dead_proc_elim__conv7_Queue0_13);
#line 294 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_10_14 = ((MR_Word) transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_Needed_10_14);
#line 158 "dead_proc_elim.m"
    {
#line 158 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_examine_6_p_0(transform_hlds__dead_proc_elim__Queue0_13, transform_hlds__dead_proc_elim__Examined0_12, (MR_Integer) 0, transform_hlds__dead_proc_elim__ModuleInfo_3, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_10_14, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5);
#line 158 "dead_proc_elim.m"
      return;
    }
#line 139 "dead_proc_elim.m"
  }
#line 65 "dead_proc_elim.m"
}

#line 294 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_elim_4_p_0_2(
#line 294 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 294 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 294 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 294 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 294 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 294 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5)
#line 294 "dead_proc_elim.m"
{
#line 294 "dead_proc_elim.m"
  {
#line 294 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 294 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_Queue_11;
#line 294 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_Needed_13;

#line 294 "dead_proc_elim.m"
    {
#line 294 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_Queue_11, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_4), &transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_Needed_13);
    }
#line 294 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_Queue_11));
#line 294 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_5 = ((MR_Box) (transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_Needed_13));
#line 294 "dead_proc_elim.m"
  }
#line 294 "dead_proc_elim.m"
}

#line 292 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_elim_4_p_0_1(
#line 292 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 292 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 292 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 292 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 292 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 292 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5)
#line 292 "dead_proc_elim.m"
{
#line 292 "dead_proc_elim.m"
  {
#line 292 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 292 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_21;
#line 292 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_23;

#line 292 "dead_proc_elim.m"
    {
#line 292 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_21, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_4), &transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_23);
    }
#line 292 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_21));
#line 292 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_5 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_23));
#line 292 "dead_proc_elim.m"
  }
#line 292 "dead_proc_elim.m"
}

#line 46 "dead_proc_elim.m"
void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_elim_4_p_0(
#line 46 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ElimOptImported_5,
#line 46 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_9,
#line 46 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_10,
#line 46 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__Specs_7)
#line 46 "dead_proc_elim.m"
{
#line 142 "dead_proc_elim.m"
  {
#line 142 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_32_50;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_24_70;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_26_72;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeInfo_32_78;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeInfo_33_79;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_34_80;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Needed_8;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Examined0_17;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Queue0_18;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_10_19;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredIds_27;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredTable_28;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PragmaExports_29;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__InitProcs_30;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__FinalPreds_31;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfos_32;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Classes_33;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Instances_34;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_17_35;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_18_36;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_37;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_38;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_39_39;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_22_40;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_23_41;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_24_42;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25_43;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_44;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_45;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_28_46;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_29_47;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__InstanceDefnsLists_61;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__InstanceDefns_62;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ClassDefns_63;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_65;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_66;
#line 292 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_19_65;
#line 292 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_20_66;
#line 294 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv7_Queue0_18;
#line 294 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_Needed_10_19;

#line 156 "dead_proc_elim.m"
    {
#line 156 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__Examined0_17 = mercury__set_tree234__init_0_f_0((MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0);
    }
#line 11608 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_32_50 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 168 "dead_proc_elim.m"
    {
#line 168 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_17_35 = mercury__queue__init_0_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_32_50);
    }
#line 169 "dead_proc_elim.m"
    {
#line 169 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_18_36 = mercury__map__init_0_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_32_50, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0);
    }
#line 170 "dead_proc_elim.m"
    {
#line 170 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_9, &transform_hlds__dead_proc_elim__PredIds_27);
    }
#line 171 "dead_proc_elim.m"
    {
#line 171 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_9, &transform_hlds__dead_proc_elim__PredTable_28);
    }
#line 172 "dead_proc_elim.m"
    {
#line 172 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_preds_6_p_0(transform_hlds__dead_proc_elim__PredIds_27, transform_hlds__dead_proc_elim__PredTable_28, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_17_35, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_37, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_18_36, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_38);
    }
#line 174 "dead_proc_elim.m"
    {
#line 174 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_9, &transform_hlds__dead_proc_elim__PragmaExports_29);
    }
#line 175 "dead_proc_elim.m"
    {
#line 175 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__V_39_39 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, transform_hlds__dead_proc_elim__PragmaExports_29);
    }
#line 175 "dead_proc_elim.m"
    {
#line 175 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_p_0(transform_hlds__dead_proc_elim__V_39_39, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_37, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_22_40, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_38, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_23_41);
    }
#line 178 "dead_proc_elim.m"
    {
#line 178 "dead_proc_elim.m"
      hlds__hlds_module__module_info_user_init_pred_procs_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_9, &transform_hlds__dead_proc_elim__InitProcs_30);
    }
#line 179 "dead_proc_elim.m"
    {
#line 179 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_p_0(transform_hlds__dead_proc_elim__InitProcs_30, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_22_40, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_24_42, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_23_41, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25_43);
    }
#line 181 "dead_proc_elim.m"
    {
#line 181 "dead_proc_elim.m"
      hlds__hlds_module__module_info_user_final_pred_procs_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_9, &transform_hlds__dead_proc_elim__FinalPreds_31);
    }
#line 182 "dead_proc_elim.m"
    {
#line 182 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_p_0(transform_hlds__dead_proc_elim__FinalPreds_31, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_24_42, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_44, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25_43, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_45);
    }
#line 184 "dead_proc_elim.m"
    {
#line 184 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_type_ctor_gen_infos_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_9, &transform_hlds__dead_proc_elim__TypeCtorGenInfos_32);
    }
#line 185 "dead_proc_elim.m"
    {
#line 185 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_type_ctor_infos_5_p_0(transform_hlds__dead_proc_elim__TypeCtorGenInfos_32, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_44, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_28_46, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_45, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_29_47);
    }
#line 187 "dead_proc_elim.m"
    {
#line 187 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_9, &transform_hlds__dead_proc_elim__Classes_33);
    }
#line 188 "dead_proc_elim.m"
    {
#line 188 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_instance_table_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_9, &transform_hlds__dead_proc_elim__Instances_34);
    }
#line 11690 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_24_70 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 290 "dead_proc_elim.m"
    {
#line 290 "dead_proc_elim.m"
      mercury__map__values_2_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_24_70, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[3], transform_hlds__dead_proc_elim__Instances_34, &transform_hlds__dead_proc_elim__InstanceDefnsLists_61);
    }
#line 11697 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_26_72 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
#line 291 "dead_proc_elim.m"
    {
#line 291 "dead_proc_elim.m"
      mercury__list__condense_2_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_26_72, transform_hlds__dead_proc_elim__InstanceDefnsLists_61, &transform_hlds__dead_proc_elim__InstanceDefns_62);
    }
#line 11704 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeInfo_32_78 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[4];
#line 11706 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeInfo_33_79 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[0];
#line 292 "dead_proc_elim.m"
    {
#line 292 "dead_proc_elim.m"
      mercury__list__foldl2_6_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_26_72, transform_hlds__dead_proc_elim__TypeInfo_32_78, transform_hlds__dead_proc_elim__TypeInfo_33_79, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[3], transform_hlds__dead_proc_elim__InstanceDefns_62, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_28_46)), &transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_19_65, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_29_47)), &transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_20_66);
    }
#line 292 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_65 = ((MR_Word) transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_19_65);
#line 292 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_66 = ((MR_Word) transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_20_66);
#line 11717 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_34_80 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0;
#line 293 "dead_proc_elim.m"
    {
#line 293 "dead_proc_elim.m"
      mercury__map__values_2_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_24_70, transform_hlds__dead_proc_elim__TypeCtorInfo_34_80, transform_hlds__dead_proc_elim__Classes_33, &transform_hlds__dead_proc_elim__ClassDefns_63);
    }
#line 294 "dead_proc_elim.m"
    {
#line 294 "dead_proc_elim.m"
      mercury__list__foldl2_6_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_34_80, transform_hlds__dead_proc_elim__TypeInfo_32_78, transform_hlds__dead_proc_elim__TypeInfo_33_79, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[4], transform_hlds__dead_proc_elim__ClassDefns_63, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_65)), &transform_hlds__dead_proc_elim__conv7_Queue0_18, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_66)), &transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_Needed_10_19);
    }
#line 294 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__Queue0_18 = ((MR_Word) transform_hlds__dead_proc_elim__conv7_Queue0_18);
#line 294 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_10_19 = ((MR_Word) transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_Needed_10_19);
#line 158 "dead_proc_elim.m"
    {
#line 158 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_examine_6_p_0(transform_hlds__dead_proc_elim__Queue0_18, transform_hlds__dead_proc_elim__Examined0_17, (MR_Integer) 1, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_9, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_10_19, &transform_hlds__dead_proc_elim__Needed_8);
    }
#line 144 "dead_proc_elim.m"
    {
#line 144 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_eliminate_5_p_0(transform_hlds__dead_proc_elim__ElimOptImported_5, transform_hlds__dead_proc_elim__Needed_8, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_9, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_10, transform_hlds__dead_proc_elim__Specs_7);
#line 144 "dead_proc_elim.m"
      return;
    }
#line 142 "dead_proc_elim.m"
  }
#line 46 "dead_proc_elim.m"
}

void mercury__transform_hlds__dead_proc_elim__init(void)
{
}

void mercury__transform_hlds__dead_proc_elim__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_analyze_what_0);
	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0);
	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_queue_0);
	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_examined_set_0);
	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_elim_opt_imported_0);
	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0);
	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_needed_map_0);
	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0);
	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_proc_elim_info_0);
}

void mercury__transform_hlds__dead_proc_elim__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.dead_proc_elim. */
