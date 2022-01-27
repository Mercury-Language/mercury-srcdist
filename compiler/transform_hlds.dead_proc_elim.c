/*
** Automatically generated from `dead_proc_elim.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
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
#include "parse_tree.maybe_error.mih"
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
#include "check_hlds.simplify.simplify_proc.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 149 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0;

#line 152 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0__plain_transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0;

#line 155 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 158 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 161 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 164 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 167 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0;

#line 170 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 173 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 176 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_analyze_what_0_0;

#line 179 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_analyze_what_0_1;

#line 182 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_value_ordered_analyze_what_0[2];

#line 185 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_analyze_what_0[2];

#line 188 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_analyze_what_0[2];

#line 191 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_0[2];

#line 194 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_0;

#line 197 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_1[2];

#line 200 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_1;

#line 203 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_2[3];

#line 206 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_2;

#line 209 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_3[1];

#line 212 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_3;

#line 215 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_0[1];

#line 218 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_1[1];

#line 221 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_2[1];

#line 224 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_3[1];

#line 227 "transform_hlds.dead_proc_elim.c"
static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_entity_0[4];

#line 230 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_entity_0[4];

#line 233 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_entity_0[4];

#line 236 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__ti_queue_1transform_hlds__dead_proc_elim__type_ctor_info_entity_0;

#line 239 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1transform_hlds__dead_proc_elim__type_ctor_info_entity_0;

#line 242 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_0;

#line 245 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_1;

#line 248 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_value_ordered_maybe_elim_opt_imported_0[2];

#line 251 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_maybe_elim_opt_imported_0[2];

#line 254 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_elim_opt_imported_0[2];

#line 257 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_maybe_needed_0_0;

#line 260 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_maybe_needed_0_1[1];

#line 263 "transform_hlds.dead_proc_elim.c"
static const MR_ConstString transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_maybe_needed_0_1[1];

#line 266 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_maybe_needed_0_1;

#line 269 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_maybe_needed_0_0[1];

#line 272 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_maybe_needed_0_1[1];

#line 275 "transform_hlds.dead_proc_elim.c"
static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_maybe_needed_0[2];

#line 278 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_maybe_needed_0[2];

#line 281 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_needed_0[2];

#line 284 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__ti_tree234_2transform_hlds__dead_proc_elim__type_ctor_info_entity_0transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0;

#line 287 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 290 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 293 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 296 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_pred_elim_info_0_0[5];

#line 299 "transform_hlds.dead_proc_elim.c"
static const MR_ConstString transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_pred_elim_info_0_0[5];

#line 302 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_pred_elim_info_0_0;

#line 305 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_pred_elim_info_0_0[1];

#line 308 "transform_hlds.dead_proc_elim.c"
static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_pred_elim_info_0[1];

#line 311 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_pred_elim_info_0[1];

#line 314 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_pred_elim_info_0[1];

#line 317 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 320 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 323 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_proc_elim_info_0_0[5];

#line 326 "transform_hlds.dead_proc_elim.c"
static const MR_ConstString transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_proc_elim_info_0_0[5];

#line 329 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_proc_elim_info_0_0;

#line 332 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_proc_elim_info_0_0[1];

#line 335 "transform_hlds.dead_proc_elim.c"
static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_proc_elim_info_0[1];

#line 338 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_proc_elim_info_0[1];

#line 341 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_proc_elim_info_0[1];

#line 344 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____analyze_what_0_0_10001(
#line 347 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 349 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2);

#line 352 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____analyze_what_0_0_10001(
#line 355 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 357 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 359 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 362 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____entity_0_0_10001(
#line 365 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 367 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2);

#line 370 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____entity_0_0_10001(
#line 373 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 375 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 377 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 380 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____entity_queue_0_0_10001(
#line 383 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 385 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2);

#line 388 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____entity_queue_0_0_10001(
#line 391 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 393 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 395 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 398 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____examined_set_0_0_10001(
#line 401 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 403 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2);

#line 406 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____examined_set_0_0_10001(
#line 409 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 411 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 413 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 416 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_elim_opt_imported_0_0_10001(
#line 419 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 421 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2);

#line 424 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_elim_opt_imported_0_0_10001(
#line 427 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 429 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 431 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 434 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_needed_0_0_10001(
#line 437 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 439 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2);

#line 442 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_needed_0_0_10001(
#line 445 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 447 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 449 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 452 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____needed_map_0_0_10001(
#line 455 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 457 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2);

#line 460 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____needed_map_0_0_10001(
#line 463 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 465 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 467 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 470 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____pred_elim_info_0_0_10001(
#line 473 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 475 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2);

#line 478 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____pred_elim_info_0_0_10001(
#line 481 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 483 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 485 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 488 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____proc_elim_info_0_0_10001(
#line 491 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 493 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2);

#line 496 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____proc_elim_info_0_0_10001(
#line 499 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 501 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 503 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 853 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_proc_eliminate_pred__853__1_4_p_0(
#line 853 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ProcTable0_62,
#line 853 "dead_proc_elim.m"
  MR_Integer transform_hlds__dead_proc_elim__LambdaHeadVar__1_46,
#line 853 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__LambdaHeadVar__2_47,
#line 853 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__LambdaHeadVar__3_48);

#line 1051 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__1051__1_2_p_0(
#line 1051 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__NeededPreds_38,
#line 1051 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_80);

#line 1041 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__1041__1_4_p_0(
#line 1041 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__SpecMap0_31,
#line 1041 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__LambdaHeadVar__1_51,
#line 1041 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__LambdaHeadVar__2_52,
#line 1041 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__LambdaHeadVar__3_53);

#line 720 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____proc_elim_info_0_0(
#line 720 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 720 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 720 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_3);

#line 720 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____proc_elim_info_0_0(
#line 720 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 720 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2);

#line 985 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____pred_elim_info_0_0(
#line 985 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 985 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 985 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_3);

#line 985 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____pred_elim_info_0_0(
#line 985 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 985 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2);

#line 143 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____examined_set_0_0(
#line 143 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 143 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 143 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_3);

#line 143 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____examined_set_0_0(
#line 143 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 143 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2);

#line 142 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____entity_queue_0_0(
#line 142 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 142 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 142 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_3);

#line 142 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____entity_queue_0_0(
#line 142 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 142 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2);

#line 154 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____analyze_what_0_0(
#line 154 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 154 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 154 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_3);

#line 154 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____analyze_what_0_0(
#line 154 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_1,
#line 154 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2);

#line 1259 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_p_0(
#line 1259 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Name_4,
#line 1259 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_13,
#line 1259 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_14);

#line 1241 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_p_0(
#line 1241 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__RHS_4,
#line 1241 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22,
#line 1241 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_23);

#line 1204 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_4(
#line 1204 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1204 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1204 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1204 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 1230 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_3(
#line 1230 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1230 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1230 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1230 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 1196 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_2(
#line 1196 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1196 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1196 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1196 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 1193 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_1(
#line 1193 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1193 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1193 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1193 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 1187 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0(
#line 1187 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__GoalExpr_4,
#line 1187 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52,
#line 1187 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53);

#line 1180 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(
#line 1180 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Goal_4,
#line 1180 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_8,
#line 1180 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_9);

#line 1173 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_case_3_p_0(
#line 1173 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Case_4,
#line 1173 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_9,
#line 1173 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_10);

#line 1167 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_process_clause_3_p_0(
#line 1167 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Clause_4,
#line 1167 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_6,
#line 1167 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_7);

#line 1159 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_p_0_1(
#line 1159 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1159 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1159 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1159 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 1139 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_p_0(
#line 1139 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_15,
#line 1139 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_16);

#line 1074 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_p_0(
#line 1074 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__PredId_4,
#line 1074 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__DeadInfo0_5,
#line 1074 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__DeadInfo_6);

#line 1063 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_add_entity_5_p_0(
#line 1063 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 1063 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 1063 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 1063 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_0_4,
#line 1063 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_5);

#line 967 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_const_structs_4_p_0(
#line 967 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 967 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 967 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_0_3,
#line 967 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_4);

#line 948 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_type_ctor_infos_3_p_0(
#line 948 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 948 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 948 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__3_3);

#line 887 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_p_0(
#line 887 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__PredId_12,
#line 887 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Keep_13,
#line 887 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__WarnForThisPred_14,
#line 887 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ProcElimInfo_15,
#line 887 "dead_proc_elim.m"
  MR_Integer transform_hlds__dead_proc_elim__ProcId_16,
#line 887 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcTable_0_30,
#line 887 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcTable_31,
#line 887 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Changed_0_32,
#line 887 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Changed_33,
#line 887 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Specs_0_34,
#line 887 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Specs_35);

#line 853 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0_2(
#line 853 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 853 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 853 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 853 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 832 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0_1(
#line 832 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 832 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 832 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 832 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 832 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 832 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5,
#line 832 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_6,
#line 832 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_7);

#line 783 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0(
#line 783 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ElimOptImported_5,
#line 783 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__PredId_6,
#line 783 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_0_36,
#line 783 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_37);

#line 750 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_5_p_0_1(
#line 750 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 750 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 750 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 750 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 741 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_5_p_0(
#line 741 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ElimOptImported_6,
#line 741 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_22,
#line 741 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_23,
#line 741 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_24,
#line 741 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__Specs_9);

#line 540 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_p_0(
#line 540 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Goal_7,
#line 540 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__CurrProc_8,
#line 540 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96,
#line 540 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97,
#line 540 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98,
#line 540 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);

#line 530 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_cases_6_p_0(
#line 530 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 530 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 530 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3,
#line 530 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4,
#line 530 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5,
#line 530 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6);

#line 521 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_goals_6_p_0(
#line 521 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 521 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__CurrProc_2,
#line 521 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3,
#line 521 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4,
#line 521 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5,
#line 521 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6);

#line 471 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_proc_6_p_0(
#line 471 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 471 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ModuleInfo_9,
#line 471 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_22,
#line 471 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23,
#line 471 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24,
#line 471 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25);

#line 446 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_const_struct_args_5_p_0(
#line 446 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 446 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 446 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 446 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4,
#line 446 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5);

#line 415 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_refs_5_p_0(
#line 415 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 415 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 415 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 415 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4,
#line 415 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5);

#line 399 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim__find_type_ctor_info_5_p_0(
#line 399 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ModuleName_6,
#line 399 "dead_proc_elim.m"
  MR_String transform_hlds__dead_proc_elim__TypeName_7,
#line 399 "dead_proc_elim.m"
  MR_Integer transform_hlds__dead_proc_elim__TypeArity_8,
#line 399 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__4_4,
#line 399 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__Refs_11);

#line 338 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_6_p_0(
#line 338 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_22,
#line 338 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_0_23,
#line 338 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__AnalyzeWhat_9,
#line 338 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ModuleInfo_10,
#line 338 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24,
#line 338 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25);

#line 326 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__get_class_interface_pred_proc_5_p_0(
#line 326 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ClassProc_6,
#line 326 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_12,
#line 326 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_13,
#line 326 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_14,
#line 326 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_15);

#line 324 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0_1(
#line 324 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 324 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 324 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 324 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 324 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 324 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5);

#line 318 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0(
#line 318 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Class_6,
#line 318 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_10,
#line 318 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_11,
#line 318 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_12,
#line 318 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_13);

#line 315 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0_1(
#line 315 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 315 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 315 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 315 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 315 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 315 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5);

#line 302 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0(
#line 302 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Instance_6,
#line 302 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_20,
#line 302 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_21,
#line 302 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_22,
#line 302 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_23);

#line 300 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_p_0_2(
#line 300 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 300 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 300 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 300 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 300 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 300 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5);

#line 298 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_p_0_1(
#line 298 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 298 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 298 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 298 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 298 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 298 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5);

#line 290 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_p_0(
#line 290 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Classes_7,
#line 290 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Instances_8,
#line 290 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_14,
#line 290 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_15,
#line 290 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_16,
#line 290 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_17);

#line 256 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_type_ctor_infos_5_p_0(
#line 256 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 256 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 256 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 256 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4,
#line 256 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5);

#line 244 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_p_0(
#line 244 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 244 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 244 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 244 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4,
#line 244 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5);

#line 227 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_p_0(
#line 227 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 227 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 227 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 227 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4,
#line 227 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5);

#line 213 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_procs_6_p_0(
#line 213 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 213 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 213 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3,
#line 213 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4,
#line 213 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5,
#line 213 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6);

#line 200 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_preds_6_p_0(
#line 200 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 200 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 200 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3,
#line 200 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4,
#line 200 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5,
#line 200 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6);

#line 1051 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_4(
#line 1051 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1051 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1);

#line 1038 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_3(
#line 1038 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1038 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1038 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1038 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 1026 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_2(
#line 1026 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1026 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1026 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1026 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 1017 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_1(
#line 1017 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1017 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1017 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1017 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 1017 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 1017 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5);

#line 300 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_analyze_2_p_0_2(
#line 300 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 300 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 300 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 300 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 300 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 300 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5);

#line 298 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_analyze_2_p_0_1(
#line 298 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 298 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 298 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 298 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 298 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 298 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5);

#line 300 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_elim_4_p_0_2(
#line 300 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 300 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 300 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 300 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 300 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 300 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5);

#line 298 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_elim_4_p_0_1(
#line 298 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 298 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 298 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 298 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 298 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 298 "dead_proc_elim.m"
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is never called."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__dead_proc_elim_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
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
    ((MR_Box) ((MR_Integer) 30)),
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1709 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0 = {
  &mercury__queue__queue__type_ctor_info_queue_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0
  }
};

#line 1717 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0__plain_transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0,
    (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0
  }
};

#line 1726 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__queue__queue__type_ctor_info_queue_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1734 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1742 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1750 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1759 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1767 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 1776 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1784 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_analyze_what_0_0 = {
  (MR_String) "analyze_procs",
  (MR_Integer) 0
};

#line 1790 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_analyze_what_0_1 = {
  (MR_String) "analyze_all",
  (MR_Integer) 1
};

#line 1796 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_value_ordered_analyze_what_0[2] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_analyze_what_0_0,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_analyze_what_0_1
};

#line 1802 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_analyze_what_0[2] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_analyze_what_0_1,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_analyze_what_0_0
};

#line 1808 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_analyze_what_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1814 "transform_hlds.dead_proc_elim.c"
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

#line 1831 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1837 "transform_hlds.dead_proc_elim.c"
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

#line 1852 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_1[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1858 "transform_hlds.dead_proc_elim.c"
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

#line 1873 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_2[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1880 "transform_hlds.dead_proc_elim.c"
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

#line 1895 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1900 "transform_hlds.dead_proc_elim.c"
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

#line 1915 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_0[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_0
};

#line 1920 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_1[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_1
};

#line 1925 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_2[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_2
};

#line 1930 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_3[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_3
};

#line 1935 "transform_hlds.dead_proc_elim.c"
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

#line 1959 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_entity_0[4] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_3,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_0,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_1,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_2
};

#line 1967 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_entity_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 1975 "transform_hlds.dead_proc_elim.c"
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

#line 1992 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__ti_queue_1transform_hlds__dead_proc_elim__type_ctor_info_entity_0 = {
  &mercury__queue__queue__type_ctor_info_queue_1,
  {
    (MR_TypeInfo) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0
  }
};

#line 2000 "transform_hlds.dead_proc_elim.c"
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

#line 2017 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1transform_hlds__dead_proc_elim__type_ctor_info_entity_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0
  }
};

#line 2025 "transform_hlds.dead_proc_elim.c"
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

#line 2042 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_0 = {
  (MR_String) "elim_opt_imported",
  (MR_Integer) 0
};

#line 2048 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_1 = {
  (MR_String) "do_not_elim_opt_imported",
  (MR_Integer) 1
};

#line 2054 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_value_ordered_maybe_elim_opt_imported_0[2] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_0,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_1
};

#line 2060 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_maybe_elim_opt_imported_0[2] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_1,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_0
};

#line 2066 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_elim_opt_imported_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2072 "transform_hlds.dead_proc_elim.c"
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

#line 2089 "transform_hlds.dead_proc_elim.c"
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

#line 2104 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_maybe_needed_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2109 "transform_hlds.dead_proc_elim.c"
static const MR_ConstString transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_maybe_needed_0_1[1] = {
  (MR_String) "num_references"
};

#line 2114 "transform_hlds.dead_proc_elim.c"
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

#line 2129 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_maybe_needed_0_0[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_maybe_needed_0_0
};

#line 2134 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_maybe_needed_0_1[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_maybe_needed_0_1
};

#line 2139 "transform_hlds.dead_proc_elim.c"
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

#line 2153 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_maybe_needed_0[2] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_maybe_needed_0_1,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_maybe_needed_0_0
};

#line 2159 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_needed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2165 "transform_hlds.dead_proc_elim.c"
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

#line 2182 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__ti_tree234_2transform_hlds__dead_proc_elim__type_ctor_info_entity_0transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0,
    (MR_TypeInfo) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0
  }
};

#line 2191 "transform_hlds.dead_proc_elim.c"
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

#line 2208 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__queue__queue__type_ctor_info_queue_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 2216 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 2224 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 2232 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_pred_elim_info_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 2241 "transform_hlds.dead_proc_elim.c"
static const MR_ConstString transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_pred_elim_info_0_0[5] = {
  (MR_String) "pred_elim_module_info",
  (MR_String) "pred_elim_queue",
  (MR_String) "pred_elim_examined",
  (MR_String) "pred_elim_needed_ids",
  (MR_String) "pred_elim_needed_named"
};

#line 2250 "transform_hlds.dead_proc_elim.c"
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

#line 2265 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_pred_elim_info_0_0[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_pred_elim_info_0_0
};

#line 2270 "transform_hlds.dead_proc_elim.c"
static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_pred_elim_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_pred_elim_info_0_0
  }
};

#line 2279 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_pred_elim_info_0[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_pred_elim_info_0_0
};

#line 2284 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_pred_elim_info_0[1] = {
  (MR_Integer) 0
};

#line 2289 "transform_hlds.dead_proc_elim.c"
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

#line 2306 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 2315 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2323 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_proc_elim_info_0_0[5] = {
  (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__tree234__ti_tree234_2transform_hlds__dead_proc_elim__type_ctor_info_entity_0transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 2332 "transform_hlds.dead_proc_elim.c"
static const MR_ConstString transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_proc_elim_info_0_0[5] = {
  (MR_String) "proc_elim_needed_map",
  (MR_String) "proc_elim_module_info",
  (MR_String) "proc_elim_pred_table",
  (MR_String) "proc_elim_changed",
  (MR_String) "proc_elim_warnings"
};

#line 2341 "transform_hlds.dead_proc_elim.c"
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

#line 2356 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_proc_elim_info_0_0[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_proc_elim_info_0_0
};

#line 2361 "transform_hlds.dead_proc_elim.c"
static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_proc_elim_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_proc_elim_info_0_0
  }
};

#line 2370 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_proc_elim_info_0[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_proc_elim_info_0_0
};

#line 2375 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_proc_elim_info_0[1] = {
  (MR_Integer) 0
};

#line 2380 "transform_hlds.dead_proc_elim.c"
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

#line 2397 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____analyze_what_0_0_10001(
#line 2400 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2402 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2)
#line 2404 "transform_hlds.dead_proc_elim.c"
{
#line 2406 "transform_hlds.dead_proc_elim.c"
  {
#line 2408 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 2411 "transform_hlds.dead_proc_elim.c"
    {
#line 2413 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim____Unify____analyze_what_0_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2));
    }
#line 2416 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 2418 "transform_hlds.dead_proc_elim.c"
  }
#line 2420 "transform_hlds.dead_proc_elim.c"
}

#line 2423 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____analyze_what_0_0_10001(
#line 2426 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2428 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 2430 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 2432 "transform_hlds.dead_proc_elim.c"
{
#line 2434 "transform_hlds.dead_proc_elim.c"
  {
#line 2436 "transform_hlds.dead_proc_elim.c"
    MR_Word transform_hlds__dead_proc_elim__conv0_HeadVar__1_1;

#line 2439 "transform_hlds.dead_proc_elim.c"
    {
#line 2441 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim____Compare____analyze_what_0_0(&transform_hlds__dead_proc_elim__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_3));
    }
#line 2444 "transform_hlds.dead_proc_elim.c"
    *transform_hlds__dead_proc_elim__wrapper_arg_1 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_HeadVar__1_1));
#line 2446 "transform_hlds.dead_proc_elim.c"
  }
#line 2448 "transform_hlds.dead_proc_elim.c"
}

#line 2451 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____entity_0_0_10001(
#line 2454 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2456 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2)
#line 2458 "transform_hlds.dead_proc_elim.c"
{
#line 2460 "transform_hlds.dead_proc_elim.c"
  {
#line 2462 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 2465 "transform_hlds.dead_proc_elim.c"
    {
#line 2467 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim____Unify____entity_0_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2));
    }
#line 2470 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 2472 "transform_hlds.dead_proc_elim.c"
  }
#line 2474 "transform_hlds.dead_proc_elim.c"
}

#line 2477 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____entity_0_0_10001(
#line 2480 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2482 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 2484 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 2486 "transform_hlds.dead_proc_elim.c"
{
#line 2488 "transform_hlds.dead_proc_elim.c"
  {
#line 2490 "transform_hlds.dead_proc_elim.c"
    MR_Word transform_hlds__dead_proc_elim__conv0_HeadVar__1_1;

#line 2493 "transform_hlds.dead_proc_elim.c"
    {
#line 2495 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim____Compare____entity_0_0(&transform_hlds__dead_proc_elim__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_3));
    }
#line 2498 "transform_hlds.dead_proc_elim.c"
    *transform_hlds__dead_proc_elim__wrapper_arg_1 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_HeadVar__1_1));
#line 2500 "transform_hlds.dead_proc_elim.c"
  }
#line 2502 "transform_hlds.dead_proc_elim.c"
}

#line 2505 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____entity_queue_0_0_10001(
#line 2508 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2510 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2)
#line 2512 "transform_hlds.dead_proc_elim.c"
{
#line 2514 "transform_hlds.dead_proc_elim.c"
  {
#line 2516 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 2519 "transform_hlds.dead_proc_elim.c"
    {
#line 2521 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim____Unify____entity_queue_0_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2));
    }
#line 2524 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 2526 "transform_hlds.dead_proc_elim.c"
  }
#line 2528 "transform_hlds.dead_proc_elim.c"
}

#line 2531 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____entity_queue_0_0_10001(
#line 2534 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2536 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 2538 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 2540 "transform_hlds.dead_proc_elim.c"
{
#line 2542 "transform_hlds.dead_proc_elim.c"
  {
#line 2544 "transform_hlds.dead_proc_elim.c"
    MR_Word transform_hlds__dead_proc_elim__conv0_HeadVar__1_1;

#line 2547 "transform_hlds.dead_proc_elim.c"
    {
#line 2549 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim____Compare____entity_queue_0_0(&transform_hlds__dead_proc_elim__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_3));
    }
#line 2552 "transform_hlds.dead_proc_elim.c"
    *transform_hlds__dead_proc_elim__wrapper_arg_1 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_HeadVar__1_1));
#line 2554 "transform_hlds.dead_proc_elim.c"
  }
#line 2556 "transform_hlds.dead_proc_elim.c"
}

#line 2559 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____examined_set_0_0_10001(
#line 2562 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2564 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2)
#line 2566 "transform_hlds.dead_proc_elim.c"
{
#line 2568 "transform_hlds.dead_proc_elim.c"
  {
#line 2570 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 2573 "transform_hlds.dead_proc_elim.c"
    {
#line 2575 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim____Unify____examined_set_0_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2));
    }
#line 2578 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 2580 "transform_hlds.dead_proc_elim.c"
  }
#line 2582 "transform_hlds.dead_proc_elim.c"
}

#line 2585 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____examined_set_0_0_10001(
#line 2588 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2590 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 2592 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 2594 "transform_hlds.dead_proc_elim.c"
{
#line 2596 "transform_hlds.dead_proc_elim.c"
  {
#line 2598 "transform_hlds.dead_proc_elim.c"
    MR_Word transform_hlds__dead_proc_elim__conv0_HeadVar__1_1;

#line 2601 "transform_hlds.dead_proc_elim.c"
    {
#line 2603 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim____Compare____examined_set_0_0(&transform_hlds__dead_proc_elim__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_3));
    }
#line 2606 "transform_hlds.dead_proc_elim.c"
    *transform_hlds__dead_proc_elim__wrapper_arg_1 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_HeadVar__1_1));
#line 2608 "transform_hlds.dead_proc_elim.c"
  }
#line 2610 "transform_hlds.dead_proc_elim.c"
}

#line 2613 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_elim_opt_imported_0_0_10001(
#line 2616 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2618 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2)
#line 2620 "transform_hlds.dead_proc_elim.c"
{
#line 2622 "transform_hlds.dead_proc_elim.c"
  {
#line 2624 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 2627 "transform_hlds.dead_proc_elim.c"
    {
#line 2629 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim____Unify____maybe_elim_opt_imported_0_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2));
    }
#line 2632 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 2634 "transform_hlds.dead_proc_elim.c"
  }
#line 2636 "transform_hlds.dead_proc_elim.c"
}

#line 2639 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_elim_opt_imported_0_0_10001(
#line 2642 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2644 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 2646 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 2648 "transform_hlds.dead_proc_elim.c"
{
#line 2650 "transform_hlds.dead_proc_elim.c"
  {
#line 2652 "transform_hlds.dead_proc_elim.c"
    MR_Word transform_hlds__dead_proc_elim__conv0_HeadVar__1_1;

#line 2655 "transform_hlds.dead_proc_elim.c"
    {
#line 2657 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim____Compare____maybe_elim_opt_imported_0_0(&transform_hlds__dead_proc_elim__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_3));
    }
#line 2660 "transform_hlds.dead_proc_elim.c"
    *transform_hlds__dead_proc_elim__wrapper_arg_1 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_HeadVar__1_1));
#line 2662 "transform_hlds.dead_proc_elim.c"
  }
#line 2664 "transform_hlds.dead_proc_elim.c"
}

#line 2667 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_needed_0_0_10001(
#line 2670 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2672 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2)
#line 2674 "transform_hlds.dead_proc_elim.c"
{
#line 2676 "transform_hlds.dead_proc_elim.c"
  {
#line 2678 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 2681 "transform_hlds.dead_proc_elim.c"
    {
#line 2683 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim____Unify____maybe_needed_0_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2));
    }
#line 2686 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 2688 "transform_hlds.dead_proc_elim.c"
  }
#line 2690 "transform_hlds.dead_proc_elim.c"
}

#line 2693 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_needed_0_0_10001(
#line 2696 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2698 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 2700 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 2702 "transform_hlds.dead_proc_elim.c"
{
#line 2704 "transform_hlds.dead_proc_elim.c"
  {
#line 2706 "transform_hlds.dead_proc_elim.c"
    MR_Word transform_hlds__dead_proc_elim__conv0_HeadVar__1_1;

#line 2709 "transform_hlds.dead_proc_elim.c"
    {
#line 2711 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim____Compare____maybe_needed_0_0(&transform_hlds__dead_proc_elim__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_3));
    }
#line 2714 "transform_hlds.dead_proc_elim.c"
    *transform_hlds__dead_proc_elim__wrapper_arg_1 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_HeadVar__1_1));
#line 2716 "transform_hlds.dead_proc_elim.c"
  }
#line 2718 "transform_hlds.dead_proc_elim.c"
}

#line 2721 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____needed_map_0_0_10001(
#line 2724 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2726 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2)
#line 2728 "transform_hlds.dead_proc_elim.c"
{
#line 2730 "transform_hlds.dead_proc_elim.c"
  {
#line 2732 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 2735 "transform_hlds.dead_proc_elim.c"
    {
#line 2737 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim____Unify____needed_map_0_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2));
    }
#line 2740 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 2742 "transform_hlds.dead_proc_elim.c"
  }
#line 2744 "transform_hlds.dead_proc_elim.c"
}

#line 2747 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____needed_map_0_0_10001(
#line 2750 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2752 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 2754 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 2756 "transform_hlds.dead_proc_elim.c"
{
#line 2758 "transform_hlds.dead_proc_elim.c"
  {
#line 2760 "transform_hlds.dead_proc_elim.c"
    MR_Word transform_hlds__dead_proc_elim__conv0_HeadVar__1_1;

#line 2763 "transform_hlds.dead_proc_elim.c"
    {
#line 2765 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim____Compare____needed_map_0_0(&transform_hlds__dead_proc_elim__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_3));
    }
#line 2768 "transform_hlds.dead_proc_elim.c"
    *transform_hlds__dead_proc_elim__wrapper_arg_1 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_HeadVar__1_1));
#line 2770 "transform_hlds.dead_proc_elim.c"
  }
#line 2772 "transform_hlds.dead_proc_elim.c"
}

#line 2775 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____pred_elim_info_0_0_10001(
#line 2778 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2780 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2)
#line 2782 "transform_hlds.dead_proc_elim.c"
{
#line 2784 "transform_hlds.dead_proc_elim.c"
  {
#line 2786 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 2789 "transform_hlds.dead_proc_elim.c"
    {
#line 2791 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim____Unify____pred_elim_info_0_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2));
    }
#line 2794 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 2796 "transform_hlds.dead_proc_elim.c"
  }
#line 2798 "transform_hlds.dead_proc_elim.c"
}

#line 2801 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____pred_elim_info_0_0_10001(
#line 2804 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2806 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 2808 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 2810 "transform_hlds.dead_proc_elim.c"
{
#line 2812 "transform_hlds.dead_proc_elim.c"
  {
#line 2814 "transform_hlds.dead_proc_elim.c"
    MR_Word transform_hlds__dead_proc_elim__conv0_HeadVar__1_1;

#line 2817 "transform_hlds.dead_proc_elim.c"
    {
#line 2819 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim____Compare____pred_elim_info_0_0(&transform_hlds__dead_proc_elim__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_3));
    }
#line 2822 "transform_hlds.dead_proc_elim.c"
    *transform_hlds__dead_proc_elim__wrapper_arg_1 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_HeadVar__1_1));
#line 2824 "transform_hlds.dead_proc_elim.c"
  }
#line 2826 "transform_hlds.dead_proc_elim.c"
}

#line 2829 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____proc_elim_info_0_0_10001(
#line 2832 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2834 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2)
#line 2836 "transform_hlds.dead_proc_elim.c"
{
#line 2838 "transform_hlds.dead_proc_elim.c"
  {
#line 2840 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 2843 "transform_hlds.dead_proc_elim.c"
    {
#line 2845 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim____Unify____proc_elim_info_0_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2));
    }
#line 2848 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 2850 "transform_hlds.dead_proc_elim.c"
  }
#line 2852 "transform_hlds.dead_proc_elim.c"
}

#line 2855 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____proc_elim_info_0_0_10001(
#line 2858 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2860 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 2862 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 2864 "transform_hlds.dead_proc_elim.c"
{
#line 2866 "transform_hlds.dead_proc_elim.c"
  {
#line 2868 "transform_hlds.dead_proc_elim.c"
    MR_Word transform_hlds__dead_proc_elim__conv0_HeadVar__1_1;

#line 2871 "transform_hlds.dead_proc_elim.c"
    {
#line 2873 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim____Compare____proc_elim_info_0_0(&transform_hlds__dead_proc_elim__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_3));
    }
#line 2876 "transform_hlds.dead_proc_elim.c"
    *transform_hlds__dead_proc_elim__wrapper_arg_1 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_HeadVar__1_1));
#line 2878 "transform_hlds.dead_proc_elim.c"
  }
#line 2880 "transform_hlds.dead_proc_elim.c"
}

#line 853 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_proc_eliminate_pred__853__1_4_p_0(
#line 853 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ProcTable0_62,
#line 853 "dead_proc_elim.m"
  MR_Integer transform_hlds__dead_proc_elim__LambdaHeadVar__1_46,
#line 853 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__LambdaHeadVar__2_47,
#line 853 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__LambdaHeadVar__3_48)
#line 853 "dead_proc_elim.m"
{
#line 853 "dead_proc_elim.m"
  {
#line 853 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 853 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_87_87 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 853 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ProcInfo0_30;
#line 853 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ProcInfo_31;
#line 853 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_49_49;
#line 855 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv0_ProcInfo0_30;

#line 855 "dead_proc_elim.m"
    {
#line 855 "dead_proc_elim.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_87_87, transform_hlds__dead_proc_elim__ProcTable0_62, transform_hlds__dead_proc_elim__LambdaHeadVar__1_46, &transform_hlds__dead_proc_elim__conv0_ProcInfo0_30);
    }
#line 855 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__ProcInfo0_30 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_ProcInfo0_30);
#line 856 "dead_proc_elim.m"
    {
#line 856 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__V_49_49 = hlds__make_goal__true_goal_0_f_0();
    }
#line 856 "dead_proc_elim.m"
    {
#line 856 "dead_proc_elim.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__dead_proc_elim__V_49_49, transform_hlds__dead_proc_elim__ProcInfo0_30, &transform_hlds__dead_proc_elim__ProcInfo_31);
    }
#line 857 "dead_proc_elim.m"
    {
#line 857 "dead_proc_elim.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_87_87, transform_hlds__dead_proc_elim__LambdaHeadVar__1_46, ((MR_Box) (transform_hlds__dead_proc_elim__ProcInfo_31)), transform_hlds__dead_proc_elim__LambdaHeadVar__2_47, transform_hlds__dead_proc_elim__LambdaHeadVar__3_48);
    }
#line 853 "dead_proc_elim.m"
  }
#line 853 "dead_proc_elim.m"
}

#line 1051 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__1051__1_2_p_0(
#line 1051 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__NeededPreds_38,
#line 1051 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_80)
#line 1051 "dead_proc_elim.m"
{
#line 1051 "dead_proc_elim.m"
  {
#line 1051 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 1051 "dead_proc_elim.m"
    {
#line 1051 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__dead_proc_elim__NeededPreds_38, ((MR_Box) (transform_hlds__dead_proc_elim__HeadVar__2_80)));
    }
#line 1051 "dead_proc_elim.m"
    return transform_hlds__dead_proc_elim__succeeded;
#line 1051 "dead_proc_elim.m"
  }
#line 1051 "dead_proc_elim.m"
}

#line 1041 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__1041__1_4_p_0(
#line 1041 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__SpecMap0_31,
#line 1041 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__LambdaHeadVar__1_51,
#line 1041 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__LambdaHeadVar__2_52,
#line 1041 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__LambdaHeadVar__3_53)
#line 1041 "dead_proc_elim.m"
{
#line 1041 "dead_proc_elim.m"
  {
#line 1041 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 1041 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__NewNeededPreds_37;
#line 1039 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv0_NewNeededPreds_37;

#line 1039 "dead_proc_elim.m"
    {
#line 1039 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[2], transform_hlds__dead_proc_elim__SpecMap0_31, ((MR_Box) (transform_hlds__dead_proc_elim__LambdaHeadVar__1_51)), &transform_hlds__dead_proc_elim__conv0_NewNeededPreds_37);
    }
#line 1039 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 1039 "dead_proc_elim.m"
      {
#line 1039 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__NewNeededPreds_37 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_NewNeededPreds_37);
#line 1039 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 1039 "dead_proc_elim.m"
      }
#line 1041 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 1040 "dead_proc_elim.m"
      {
#line 1040 "dead_proc_elim.m"
        {
#line 1040 "dead_proc_elim.m"
          mercury__set_tree234__insert_list_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__dead_proc_elim__NewNeededPreds_37, transform_hlds__dead_proc_elim__LambdaHeadVar__2_52, transform_hlds__dead_proc_elim__LambdaHeadVar__3_53);
        }
#line 1040 "dead_proc_elim.m"
      }
#line 1041 "dead_proc_elim.m"
    else
#line 1042 "dead_proc_elim.m"
      *transform_hlds__dead_proc_elim__LambdaHeadVar__3_53 = transform_hlds__dead_proc_elim__LambdaHeadVar__2_52;
#line 1041 "dead_proc_elim.m"
  }
#line 1041 "dead_proc_elim.m"
}

#line 720 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____proc_elim_info_0_0(
#line 720 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 720 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 720 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_3)
#line 720 "dead_proc_elim.m"
{
#line 720 "dead_proc_elim.m"
  {
#line 720 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 720 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastX_18 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__2_2;
#line 720 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastY_19 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__3_3;

#line 720 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__CastX_18 == transform_hlds__dead_proc_elim__CastY_19);
#line 720 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 3045 "transform_hlds.dead_proc_elim.c"
      *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 0;
#line 720 "dead_proc_elim.m"
    else
#line 720 "dead_proc_elim.m"
      {
#line 720 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));
#line 720 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 1)));
#line 720 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 2)));
#line 720 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 3)));
#line 720 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 4)));
#line 720 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 0)));
#line 720 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 1)));
#line 720 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 2)));
#line 720 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 3)));
#line 720 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 4)));
#line 720 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_14_14;

#line 720 "dead_proc_elim.m"
        {
#line 720 "dead_proc_elim.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[0], &transform_hlds__dead_proc_elim__V_14_14, ((MR_Box) (transform_hlds__dead_proc_elim__V_4_4)), ((MR_Box) (transform_hlds__dead_proc_elim__V_9_9)));
        }
#line 3079 "transform_hlds.dead_proc_elim.c"
        transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_14_14 == (MR_Integer) 0);
#line 720 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 720 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 720 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__V_14_14;
#line 720 "dead_proc_elim.m"
        else
#line 720 "dead_proc_elim.m"
          {
#line 720 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_15_15;

#line 720 "dead_proc_elim.m"
            {
#line 720 "dead_proc_elim.m"
              hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__dead_proc_elim__V_15_15, transform_hlds__dead_proc_elim__V_5_5, transform_hlds__dead_proc_elim__V_10_10);
            }
#line 3099 "transform_hlds.dead_proc_elim.c"
            transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_15_15 == (MR_Integer) 0);
#line 720 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 720 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 720 "dead_proc_elim.m"
              *transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__V_15_15;
#line 720 "dead_proc_elim.m"
            else
#line 720 "dead_proc_elim.m"
              {
#line 720 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__V_16_16;

#line 720 "dead_proc_elim.m"
                {
#line 720 "dead_proc_elim.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[2], &transform_hlds__dead_proc_elim__V_16_16, ((MR_Box) (transform_hlds__dead_proc_elim__V_6_6)), ((MR_Box) (transform_hlds__dead_proc_elim__V_11_11)));
                }
#line 3119 "transform_hlds.dead_proc_elim.c"
                transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_16_16 == (MR_Integer) 0);
#line 720 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 720 "dead_proc_elim.m"
                if (transform_hlds__dead_proc_elim__succeeded)
#line 720 "dead_proc_elim.m"
                  *transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__V_16_16;
#line 720 "dead_proc_elim.m"
                else
#line 720 "dead_proc_elim.m"
                  {
#line 720 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__V_17_17;
#line 720 "dead_proc_elim.m"
                    MR_Integer transform_hlds__dead_proc_elim__V_25_25 = (MR_Integer) transform_hlds__dead_proc_elim__V_7_7;
#line 720 "dead_proc_elim.m"
                    MR_Integer transform_hlds__dead_proc_elim__V_26_26 = (MR_Integer) transform_hlds__dead_proc_elim__V_12_12;

#line 720 "dead_proc_elim.m"
                    {
#line 720 "dead_proc_elim.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__dead_proc_elim__V_17_17, transform_hlds__dead_proc_elim__V_25_25, transform_hlds__dead_proc_elim__V_26_26);
                    }
#line 3143 "transform_hlds.dead_proc_elim.c"
                    transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_17_17 == (MR_Integer) 0);
#line 720 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 720 "dead_proc_elim.m"
                    if (transform_hlds__dead_proc_elim__succeeded)
#line 720 "dead_proc_elim.m"
                      *transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__V_17_17;
#line 720 "dead_proc_elim.m"
                    else
#line 720 "dead_proc_elim.m"
                      {
#line 720 "dead_proc_elim.m"
                        {
#line 720 "dead_proc_elim.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[5], transform_hlds__dead_proc_elim__HeadVar__1_1, ((MR_Box) (transform_hlds__dead_proc_elim__V_8_8)), ((MR_Box) (transform_hlds__dead_proc_elim__V_13_13)));
                        }
#line 720 "dead_proc_elim.m"
                      }
#line 720 "dead_proc_elim.m"
                  }
#line 720 "dead_proc_elim.m"
              }
#line 720 "dead_proc_elim.m"
          }
#line 720 "dead_proc_elim.m"
      }
#line 720 "dead_proc_elim.m"
  }
#line 720 "dead_proc_elim.m"
}

#line 720 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____proc_elim_info_0_0(
#line 720 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 720 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2)
#line 720 "dead_proc_elim.m"
{
#line 720 "dead_proc_elim.m"
  {
#line 720 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 720 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastX_13 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__1_1;
#line 720 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastY_14 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__2_2;

#line 720 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__CastX_13 == transform_hlds__dead_proc_elim__CastY_14);
#line 720 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 720 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 720 "dead_proc_elim.m"
    else
#line 720 "dead_proc_elim.m"
      {
#line 720 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeInfo_17_17;
#line 720 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeInfo_18_18;
#line 720 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 720 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 720 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 2)));
#line 720 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 3)));
#line 720 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 4)));
#line 720 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));
#line 720 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 1)));
#line 720 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 2)));
#line 720 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 3)));
#line 720 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 4)));

#line 3228 "transform_hlds.dead_proc_elim.c"
        {
#line 3230 "transform_hlds.dead_proc_elim.c"
          transform_hlds__dead_proc_elim__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[0], ((MR_Box) (transform_hlds__dead_proc_elim__V_3_3)), ((MR_Box) (transform_hlds__dead_proc_elim__V_8_8)));
        }
#line 720 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 720 "dead_proc_elim.m"
          {
#line 3237 "transform_hlds.dead_proc_elim.c"
            {
#line 3239 "transform_hlds.dead_proc_elim.c"
              transform_hlds__dead_proc_elim__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__dead_proc_elim__V_4_4, transform_hlds__dead_proc_elim__V_9_9);
            }
#line 720 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 720 "dead_proc_elim.m"
              {
#line 3246 "transform_hlds.dead_proc_elim.c"
                transform_hlds__dead_proc_elim__TypeInfo_17_17 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[2];
#line 3248 "transform_hlds.dead_proc_elim.c"
                {
#line 3250 "transform_hlds.dead_proc_elim.c"
                  transform_hlds__dead_proc_elim__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__dead_proc_elim__TypeInfo_17_17, ((MR_Box) (transform_hlds__dead_proc_elim__V_5_5)), ((MR_Box) (transform_hlds__dead_proc_elim__V_10_10)));
                }
#line 720 "dead_proc_elim.m"
                if (transform_hlds__dead_proc_elim__succeeded)
#line 720 "dead_proc_elim.m"
                  {
#line 3257 "transform_hlds.dead_proc_elim.c"
                    transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_6_6 == transform_hlds__dead_proc_elim__V_11_11);
#line 720 "dead_proc_elim.m"
                    if (transform_hlds__dead_proc_elim__succeeded)
#line 720 "dead_proc_elim.m"
                      {
#line 3263 "transform_hlds.dead_proc_elim.c"
                        transform_hlds__dead_proc_elim__TypeInfo_18_18 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[5];
#line 3265 "transform_hlds.dead_proc_elim.c"
                        {
#line 3267 "transform_hlds.dead_proc_elim.c"
                          transform_hlds__dead_proc_elim__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__dead_proc_elim__TypeInfo_18_18, ((MR_Box) (transform_hlds__dead_proc_elim__V_7_7)), ((MR_Box) (transform_hlds__dead_proc_elim__V_12_12)));
                        }
#line 720 "dead_proc_elim.m"
                      }
#line 720 "dead_proc_elim.m"
                  }
#line 720 "dead_proc_elim.m"
              }
#line 720 "dead_proc_elim.m"
          }
#line 720 "dead_proc_elim.m"
      }
#line 720 "dead_proc_elim.m"
    return transform_hlds__dead_proc_elim__succeeded;
#line 720 "dead_proc_elim.m"
  }
#line 720 "dead_proc_elim.m"
}

#line 985 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____pred_elim_info_0_0(
#line 985 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 985 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 985 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_3)
#line 985 "dead_proc_elim.m"
{
#line 985 "dead_proc_elim.m"
  {
#line 985 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 985 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastX_18 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__2_2;
#line 985 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastY_19 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__3_3;

#line 985 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__CastX_18 == transform_hlds__dead_proc_elim__CastY_19);
#line 985 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 3311 "transform_hlds.dead_proc_elim.c"
      *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 0;
#line 985 "dead_proc_elim.m"
    else
#line 985 "dead_proc_elim.m"
      {
#line 985 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));
#line 985 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 1)));
#line 985 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 2)));
#line 985 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 3)));
#line 985 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 4)));
#line 985 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 0)));
#line 985 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 1)));
#line 985 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 2)));
#line 985 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 3)));
#line 985 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 4)));
#line 985 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_14_14;

#line 985 "dead_proc_elim.m"
        {
#line 985 "dead_proc_elim.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__dead_proc_elim__V_14_14, transform_hlds__dead_proc_elim__V_4_4, transform_hlds__dead_proc_elim__V_9_9);
        }
#line 3345 "transform_hlds.dead_proc_elim.c"
        transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_14_14 == (MR_Integer) 0);
#line 985 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 985 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 985 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__V_14_14;
#line 985 "dead_proc_elim.m"
        else
#line 985 "dead_proc_elim.m"
          {
#line 985 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_15_15;

#line 985 "dead_proc_elim.m"
            {
#line 985 "dead_proc_elim.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[0], &transform_hlds__dead_proc_elim__V_15_15, ((MR_Box) (transform_hlds__dead_proc_elim__V_5_5)), ((MR_Box) (transform_hlds__dead_proc_elim__V_10_10)));
            }
#line 3365 "transform_hlds.dead_proc_elim.c"
            transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_15_15 == (MR_Integer) 0);
#line 985 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 985 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 985 "dead_proc_elim.m"
              *transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__V_15_15;
#line 985 "dead_proc_elim.m"
            else
#line 985 "dead_proc_elim.m"
              {
#line 985 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__V_16_16;

#line 985 "dead_proc_elim.m"
                {
#line 985 "dead_proc_elim.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[1], &transform_hlds__dead_proc_elim__V_16_16, ((MR_Box) (transform_hlds__dead_proc_elim__V_6_6)), ((MR_Box) (transform_hlds__dead_proc_elim__V_11_11)));
                }
#line 3385 "transform_hlds.dead_proc_elim.c"
                transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_16_16 == (MR_Integer) 0);
#line 985 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 985 "dead_proc_elim.m"
                if (transform_hlds__dead_proc_elim__succeeded)
#line 985 "dead_proc_elim.m"
                  *transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__V_16_16;
#line 985 "dead_proc_elim.m"
                else
#line 985 "dead_proc_elim.m"
                  {
#line 985 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__V_17_17;

#line 985 "dead_proc_elim.m"
                    {
#line 985 "dead_proc_elim.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[1], &transform_hlds__dead_proc_elim__V_17_17, ((MR_Box) (transform_hlds__dead_proc_elim__V_7_7)), ((MR_Box) (transform_hlds__dead_proc_elim__V_12_12)));
                    }
#line 3405 "transform_hlds.dead_proc_elim.c"
                    transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_17_17 == (MR_Integer) 0);
#line 985 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 985 "dead_proc_elim.m"
                    if (transform_hlds__dead_proc_elim__succeeded)
#line 985 "dead_proc_elim.m"
                      *transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__V_17_17;
#line 985 "dead_proc_elim.m"
                    else
#line 985 "dead_proc_elim.m"
                      {
#line 985 "dead_proc_elim.m"
                        {
#line 985 "dead_proc_elim.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[7], transform_hlds__dead_proc_elim__HeadVar__1_1, ((MR_Box) (transform_hlds__dead_proc_elim__V_8_8)), ((MR_Box) (transform_hlds__dead_proc_elim__V_13_13)));
                        }
#line 985 "dead_proc_elim.m"
                      }
#line 985 "dead_proc_elim.m"
                  }
#line 985 "dead_proc_elim.m"
              }
#line 985 "dead_proc_elim.m"
          }
#line 985 "dead_proc_elim.m"
      }
#line 985 "dead_proc_elim.m"
  }
#line 985 "dead_proc_elim.m"
}

#line 985 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____pred_elim_info_0_0(
#line 985 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 985 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2)
#line 985 "dead_proc_elim.m"
{
#line 985 "dead_proc_elim.m"
  {
#line 985 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 985 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastX_13 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__1_1;
#line 985 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastY_14 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__2_2;

#line 985 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__CastX_13 == transform_hlds__dead_proc_elim__CastY_14);
#line 985 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 985 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 985 "dead_proc_elim.m"
    else
#line 985 "dead_proc_elim.m"
      {
#line 985 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeInfo_16_16;
#line 985 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeInfo_17_17;
#line 985 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeInfo_18_18;
#line 985 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeInfo_19_19;
#line 985 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 985 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 985 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 2)));
#line 985 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 3)));
#line 985 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 4)));
#line 985 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));
#line 985 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 1)));
#line 985 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 2)));
#line 985 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 3)));
#line 985 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 4)));

#line 3494 "transform_hlds.dead_proc_elim.c"
        {
#line 3496 "transform_hlds.dead_proc_elim.c"
          transform_hlds__dead_proc_elim__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__dead_proc_elim__V_3_3, transform_hlds__dead_proc_elim__V_8_8);
        }
#line 985 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 985 "dead_proc_elim.m"
          {
#line 3503 "transform_hlds.dead_proc_elim.c"
            transform_hlds__dead_proc_elim__TypeInfo_16_16 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[0];
#line 3505 "transform_hlds.dead_proc_elim.c"
            {
#line 3507 "transform_hlds.dead_proc_elim.c"
              transform_hlds__dead_proc_elim__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__dead_proc_elim__TypeInfo_16_16, ((MR_Box) (transform_hlds__dead_proc_elim__V_4_4)), ((MR_Box) (transform_hlds__dead_proc_elim__V_9_9)));
            }
#line 985 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 985 "dead_proc_elim.m"
              {
#line 3514 "transform_hlds.dead_proc_elim.c"
                transform_hlds__dead_proc_elim__TypeInfo_17_17 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[1];
#line 3516 "transform_hlds.dead_proc_elim.c"
                {
#line 3518 "transform_hlds.dead_proc_elim.c"
                  transform_hlds__dead_proc_elim__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__dead_proc_elim__TypeInfo_17_17, ((MR_Box) (transform_hlds__dead_proc_elim__V_5_5)), ((MR_Box) (transform_hlds__dead_proc_elim__V_10_10)));
                }
#line 985 "dead_proc_elim.m"
                if (transform_hlds__dead_proc_elim__succeeded)
#line 985 "dead_proc_elim.m"
                  {
#line 3525 "transform_hlds.dead_proc_elim.c"
                    transform_hlds__dead_proc_elim__TypeInfo_18_18 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[1];
#line 3527 "transform_hlds.dead_proc_elim.c"
                    {
#line 3529 "transform_hlds.dead_proc_elim.c"
                      transform_hlds__dead_proc_elim__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__dead_proc_elim__TypeInfo_18_18, ((MR_Box) (transform_hlds__dead_proc_elim__V_6_6)), ((MR_Box) (transform_hlds__dead_proc_elim__V_11_11)));
                    }
#line 985 "dead_proc_elim.m"
                    if (transform_hlds__dead_proc_elim__succeeded)
#line 985 "dead_proc_elim.m"
                      {
#line 3536 "transform_hlds.dead_proc_elim.c"
                        transform_hlds__dead_proc_elim__TypeInfo_19_19 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[7];
#line 3538 "transform_hlds.dead_proc_elim.c"
                        {
#line 3540 "transform_hlds.dead_proc_elim.c"
                          transform_hlds__dead_proc_elim__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__dead_proc_elim__TypeInfo_19_19, ((MR_Box) (transform_hlds__dead_proc_elim__V_7_7)), ((MR_Box) (transform_hlds__dead_proc_elim__V_12_12)));
                        }
#line 985 "dead_proc_elim.m"
                      }
#line 985 "dead_proc_elim.m"
                  }
#line 985 "dead_proc_elim.m"
              }
#line 985 "dead_proc_elim.m"
          }
#line 985 "dead_proc_elim.m"
      }
#line 985 "dead_proc_elim.m"
    return transform_hlds__dead_proc_elim__succeeded;
#line 985 "dead_proc_elim.m"
  }
#line 985 "dead_proc_elim.m"
}

#line 52 "dead_proc_elim.m"
void MR_CALL 
transform_hlds__dead_proc_elim____Compare____needed_map_0_0(
#line 52 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 52 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 52 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_3)
#line 52 "dead_proc_elim.m"
{
#line 52 "dead_proc_elim.m"
  {
#line 52 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 52 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Cast_HeadVar1_4 = transform_hlds__dead_proc_elim__HeadVar__2_2;
#line 52 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Cast_HeadVar2_5 = transform_hlds__dead_proc_elim__HeadVar__3_3;

#line 52 "dead_proc_elim.m"
    {
#line 52 "dead_proc_elim.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[0], transform_hlds__dead_proc_elim__HeadVar__1_1, ((MR_Box) (transform_hlds__dead_proc_elim__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__dead_proc_elim__Cast_HeadVar2_5)));
    }
#line 52 "dead_proc_elim.m"
  }
#line 52 "dead_proc_elim.m"
}

#line 52 "dead_proc_elim.m"
MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____needed_map_0_0(
#line 52 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 52 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2)
#line 52 "dead_proc_elim.m"
{
#line 52 "dead_proc_elim.m"
  {
#line 52 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 52 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Cast_HeadVar1_3 = transform_hlds__dead_proc_elim__HeadVar__1_1;
#line 52 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Cast_HeadVar2_4 = transform_hlds__dead_proc_elim__HeadVar__2_2;

#line 52 "dead_proc_elim.m"
    {
#line 52 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[0], ((MR_Box) (transform_hlds__dead_proc_elim__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__dead_proc_elim__Cast_HeadVar2_4)));
    }
#line 52 "dead_proc_elim.m"
    return transform_hlds__dead_proc_elim__succeeded;
#line 52 "dead_proc_elim.m"
  }
#line 52 "dead_proc_elim.m"
}

#line 60 "dead_proc_elim.m"
void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_needed_0_0(
#line 60 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 60 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 60 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_3)
#line 60 "dead_proc_elim.m"
{
#line 60 "dead_proc_elim.m"
  {
#line 60 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 60 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastX_8 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__2_2;
#line 60 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastY_9 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__3_3;

#line 60 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__CastX_8 == transform_hlds__dead_proc_elim__CastY_9);
#line 60 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 3644 "transform_hlds.dead_proc_elim.c"
      *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 0;
#line 60 "dead_proc_elim.m"
    else
#line 60 "dead_proc_elim.m"
    if ((transform_hlds__dead_proc_elim__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 60 "dead_proc_elim.m"
      if ((transform_hlds__dead_proc_elim__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 60 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 0;
#line 60 "dead_proc_elim.m"
      else
#line 3656 "transform_hlds.dead_proc_elim.c"
        *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 1;
#line 60 "dead_proc_elim.m"
    else
#line 60 "dead_proc_elim.m"
      {
#line 60 "dead_proc_elim.m"
        MR_Integer transform_hlds__dead_proc_elim__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));

#line 60 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3667 "transform_hlds.dead_proc_elim.c"
          *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 2;
#line 60 "dead_proc_elim.m"
        else
#line 60 "dead_proc_elim.m"
          {
#line 60 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 0)));

#line 60 "dead_proc_elim.m"
            {
#line 60 "dead_proc_elim.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__dead_proc_elim__HeadVar__1_1, transform_hlds__dead_proc_elim__V_11_11, transform_hlds__dead_proc_elim__V_7_7);
            }
#line 60 "dead_proc_elim.m"
          }
#line 60 "dead_proc_elim.m"
      }
#line 60 "dead_proc_elim.m"
  }
#line 60 "dead_proc_elim.m"
}

#line 60 "dead_proc_elim.m"
MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_needed_0_0(
#line 60 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 60 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2)
#line 60 "dead_proc_elim.m"
{
#line 60 "dead_proc_elim.m"
  {
#line 60 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 60 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastX_7 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__1_1;
#line 60 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastY_8 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__2_2;

#line 60 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__CastX_7 == transform_hlds__dead_proc_elim__CastY_8);
#line 60 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 60 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 60 "dead_proc_elim.m"
    else
#line 60 "dead_proc_elim.m"
    if ((transform_hlds__dead_proc_elim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 60 "dead_proc_elim.m"
      {
#line 60 "dead_proc_elim.m"
        MR_Integer transform_hlds__dead_proc_elim__CastX_3 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__1_1;
#line 60 "dead_proc_elim.m"
        MR_Integer transform_hlds__dead_proc_elim__CastY_4 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__2_2;

#line 60 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__CastY_4 == transform_hlds__dead_proc_elim__CastX_3);
#line 60 "dead_proc_elim.m"
      }
#line 60 "dead_proc_elim.m"
    else
#line 60 "dead_proc_elim.m"
      {
#line 60 "dead_proc_elim.m"
        MR_Integer transform_hlds__dead_proc_elim__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 60 "dead_proc_elim.m"
        MR_Integer transform_hlds__dead_proc_elim__V_6_6;

#line 60 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__succeeded = ((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 60 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 60 "dead_proc_elim.m"
          {
#line 60 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));
#line 3746 "transform_hlds.dead_proc_elim.c"
            transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_5_5 == transform_hlds__dead_proc_elim__V_6_6);
#line 60 "dead_proc_elim.m"
          }
#line 60 "dead_proc_elim.m"
      }
#line 60 "dead_proc_elim.m"
    return transform_hlds__dead_proc_elim__succeeded;
#line 60 "dead_proc_elim.m"
  }
#line 60 "dead_proc_elim.m"
}

#line 38 "dead_proc_elim.m"
void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_elim_opt_imported_0_0(
#line 38 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 38 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 38 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_3)
#line 38 "dead_proc_elim.m"
{
#line 38 "dead_proc_elim.m"
  {
#line 38 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 38 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__2_2;
#line 38 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__3_3;

#line 38 "dead_proc_elim.m"
    {
#line 38 "dead_proc_elim.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__dead_proc_elim__HeadVar__1_1, transform_hlds__dead_proc_elim__Cast_HeadVar1_4, transform_hlds__dead_proc_elim__Cast_HeadVar2_5);
    }
#line 38 "dead_proc_elim.m"
  }
#line 38 "dead_proc_elim.m"
}

#line 38 "dead_proc_elim.m"
MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_elim_opt_imported_0_0(
#line 38 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_1,
#line 38 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2)
#line 38 "dead_proc_elim.m"
{
#line 3798 "transform_hlds.dead_proc_elim.c"
  {
#line 3800 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__HeadVar__2_1 == transform_hlds__dead_proc_elim__HeadVar__2_2);

#line 3803 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 3805 "transform_hlds.dead_proc_elim.c"
  }
#line 38 "dead_proc_elim.m"
}

#line 143 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____examined_set_0_0(
#line 143 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 143 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 143 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_3)
#line 143 "dead_proc_elim.m"
{
#line 143 "dead_proc_elim.m"
  {
#line 143 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 143 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Cast_HeadVar1_4 = transform_hlds__dead_proc_elim__HeadVar__2_2;
#line 143 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Cast_HeadVar2_5 = transform_hlds__dead_proc_elim__HeadVar__3_3;

#line 143 "dead_proc_elim.m"
    {
#line 143 "dead_proc_elim.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[6], transform_hlds__dead_proc_elim__HeadVar__1_1, ((MR_Box) (transform_hlds__dead_proc_elim__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__dead_proc_elim__Cast_HeadVar2_5)));
    }
#line 143 "dead_proc_elim.m"
  }
#line 143 "dead_proc_elim.m"
}

#line 143 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____examined_set_0_0(
#line 143 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 143 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2)
#line 143 "dead_proc_elim.m"
{
#line 143 "dead_proc_elim.m"
  {
#line 143 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 143 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Cast_HeadVar1_3 = transform_hlds__dead_proc_elim__HeadVar__1_1;
#line 143 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Cast_HeadVar2_4 = transform_hlds__dead_proc_elim__HeadVar__2_2;

#line 143 "dead_proc_elim.m"
    {
#line 143 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[6], ((MR_Box) (transform_hlds__dead_proc_elim__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__dead_proc_elim__Cast_HeadVar2_4)));
    }
#line 143 "dead_proc_elim.m"
    return transform_hlds__dead_proc_elim__succeeded;
#line 143 "dead_proc_elim.m"
  }
#line 143 "dead_proc_elim.m"
}

#line 142 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____entity_queue_0_0(
#line 142 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 142 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 142 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_3)
#line 142 "dead_proc_elim.m"
{
#line 142 "dead_proc_elim.m"
  {
#line 142 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Cast_HeadVar1_4 = transform_hlds__dead_proc_elim__HeadVar__2_2;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Cast_HeadVar2_5 = transform_hlds__dead_proc_elim__HeadVar__3_3;

#line 142 "dead_proc_elim.m"
    {
#line 142 "dead_proc_elim.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[4], transform_hlds__dead_proc_elim__HeadVar__1_1, ((MR_Box) (transform_hlds__dead_proc_elim__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__dead_proc_elim__Cast_HeadVar2_5)));
    }
#line 142 "dead_proc_elim.m"
  }
#line 142 "dead_proc_elim.m"
}

#line 142 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____entity_queue_0_0(
#line 142 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 142 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2)
#line 142 "dead_proc_elim.m"
{
#line 142 "dead_proc_elim.m"
  {
#line 142 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Cast_HeadVar1_3 = transform_hlds__dead_proc_elim__HeadVar__1_1;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Cast_HeadVar2_4 = transform_hlds__dead_proc_elim__HeadVar__2_2;

#line 142 "dead_proc_elim.m"
    {
#line 142 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[4], ((MR_Box) (transform_hlds__dead_proc_elim__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__dead_proc_elim__Cast_HeadVar2_4)));
    }
#line 142 "dead_proc_elim.m"
    return transform_hlds__dead_proc_elim__succeeded;
#line 142 "dead_proc_elim.m"
  }
#line 142 "dead_proc_elim.m"
}

#line 54 "dead_proc_elim.m"
void MR_CALL 
transform_hlds__dead_proc_elim____Compare____entity_0_0(
#line 54 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 54 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 54 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_3)
#line 54 "dead_proc_elim.m"
{
#line 54 "dead_proc_elim.m"
  {
#line 54 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 54 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastX_72 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__2_2;
#line 54 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastY_73 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__3_3;

#line 54 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__CastX_72 == transform_hlds__dead_proc_elim__CastY_73);
#line 54 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 3954 "transform_hlds.dead_proc_elim.c"
      *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 0;
#line 54 "dead_proc_elim.m"
    else
#line 54 "dead_proc_elim.m"
#line 54 "dead_proc_elim.m"
      switch (MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__2_2)) {
#line 54 "dead_proc_elim.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 54 "dead_proc_elim.m"
        case (MR_Integer) 0:
#line 54 "dead_proc_elim.m"
          {
#line 54 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 1)));
#line 54 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));

#line 54 "dead_proc_elim.m"
#line 54 "dead_proc_elim.m"
            switch (MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__3_3)) {
#line 54 "dead_proc_elim.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 54 "dead_proc_elim.m"
              case (MR_Integer) 0:
#line 54 "dead_proc_elim.m"
                {
#line 54 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 0)));
#line 54 "dead_proc_elim.m"
                  MR_Integer transform_hlds__dead_proc_elim__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 1)));
#line 54 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_8_8;

#line 54 "dead_proc_elim.m"
                  {
#line 54 "dead_proc_elim.m"
                    hlds__hlds_pred____Compare____pred_id_0_0(&transform_hlds__dead_proc_elim__V_8_8, transform_hlds__dead_proc_elim__V_84_84, transform_hlds__dead_proc_elim__V_6_6);
                  }
#line 3993 "transform_hlds.dead_proc_elim.c"
                  transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_8_8 == (MR_Integer) 0);
#line 54 "dead_proc_elim.m"
                  transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 54 "dead_proc_elim.m"
                  if (transform_hlds__dead_proc_elim__succeeded)
#line 54 "dead_proc_elim.m"
                    *transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__V_8_8;
#line 54 "dead_proc_elim.m"
                  else
#line 54 "dead_proc_elim.m"
                    {
#line 54 "dead_proc_elim.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__dead_proc_elim__HeadVar__1_1, transform_hlds__dead_proc_elim__V_83_83, transform_hlds__dead_proc_elim__V_7_7);
                    }
#line 54 "dead_proc_elim.m"
                }
#line 54 "dead_proc_elim.m"
                break;
#line 54 "dead_proc_elim.m"
              case (MR_Integer) 1:
#line 4014 "transform_hlds.dead_proc_elim.c"
                *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 1;
#line 54 "dead_proc_elim.m"
                break;
#line 54 "dead_proc_elim.m"
              case (MR_Integer) 2:
#line 4020 "transform_hlds.dead_proc_elim.c"
                *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 1;
#line 54 "dead_proc_elim.m"
                break;
#line 54 "dead_proc_elim.m"
              case (MR_Integer) 3:
#line 4026 "transform_hlds.dead_proc_elim.c"
                *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 1;
#line 54 "dead_proc_elim.m"
                break;
#line 54 "dead_proc_elim.m"
            }
#line 54 "dead_proc_elim.m"
          }
#line 54 "dead_proc_elim.m"
          break;
#line 54 "dead_proc_elim.m"
        case (MR_Integer) 1:
#line 54 "dead_proc_elim.m"
          {
#line 54 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 1)));
#line 54 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));

#line 54 "dead_proc_elim.m"
#line 54 "dead_proc_elim.m"
            switch (MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__3_3)) {
#line 54 "dead_proc_elim.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 54 "dead_proc_elim.m"
              case (MR_Integer) 0:
#line 4052 "transform_hlds.dead_proc_elim.c"
                *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 2;
#line 54 "dead_proc_elim.m"
                break;
#line 54 "dead_proc_elim.m"
              case (MR_Integer) 1:
#line 54 "dead_proc_elim.m"
                {
#line 54 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 0)));
#line 54 "dead_proc_elim.m"
                  MR_Integer transform_hlds__dead_proc_elim__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 1)));
#line 54 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_29_29;

#line 54 "dead_proc_elim.m"
                  {
#line 54 "dead_proc_elim.m"
                    hlds__hlds_pred____Compare____pred_id_0_0(&transform_hlds__dead_proc_elim__V_29_29, transform_hlds__dead_proc_elim__V_86_86, transform_hlds__dead_proc_elim__V_27_27);
                  }
#line 4072 "transform_hlds.dead_proc_elim.c"
                  transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_29_29 == (MR_Integer) 0);
#line 54 "dead_proc_elim.m"
                  transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 54 "dead_proc_elim.m"
                  if (transform_hlds__dead_proc_elim__succeeded)
#line 54 "dead_proc_elim.m"
                    *transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__V_29_29;
#line 54 "dead_proc_elim.m"
                  else
#line 54 "dead_proc_elim.m"
                    {
#line 54 "dead_proc_elim.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__dead_proc_elim__HeadVar__1_1, transform_hlds__dead_proc_elim__V_85_85, transform_hlds__dead_proc_elim__V_28_28);
                    }
#line 54 "dead_proc_elim.m"
                }
#line 54 "dead_proc_elim.m"
                break;
#line 54 "dead_proc_elim.m"
              case (MR_Integer) 2:
#line 4093 "transform_hlds.dead_proc_elim.c"
                *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 1;
#line 54 "dead_proc_elim.m"
                break;
#line 54 "dead_proc_elim.m"
              case (MR_Integer) 3:
#line 4099 "transform_hlds.dead_proc_elim.c"
                *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 1;
#line 54 "dead_proc_elim.m"
                break;
#line 54 "dead_proc_elim.m"
            }
#line 54 "dead_proc_elim.m"
          }
#line 54 "dead_proc_elim.m"
          break;
#line 54 "dead_proc_elim.m"
        case (MR_Integer) 2:
#line 54 "dead_proc_elim.m"
          {
#line 54 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 2)));
#line 54 "dead_proc_elim.m"
            MR_String transform_hlds__dead_proc_elim__V_88_88 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 1)));
#line 54 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));

#line 54 "dead_proc_elim.m"
#line 54 "dead_proc_elim.m"
            switch (MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__3_3)) {
#line 54 "dead_proc_elim.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 54 "dead_proc_elim.m"
              case (MR_Integer) 0:
#line 4127 "transform_hlds.dead_proc_elim.c"
                *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 2;
#line 54 "dead_proc_elim.m"
                break;
#line 54 "dead_proc_elim.m"
              case (MR_Integer) 1:
#line 4133 "transform_hlds.dead_proc_elim.c"
                *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 2;
#line 54 "dead_proc_elim.m"
                break;
#line 54 "dead_proc_elim.m"
              case (MR_Integer) 2:
#line 54 "dead_proc_elim.m"
                {
#line 54 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 0)));
#line 54 "dead_proc_elim.m"
                  MR_String transform_hlds__dead_proc_elim__V_52_52 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 1)));
#line 54 "dead_proc_elim.m"
                  MR_Integer transform_hlds__dead_proc_elim__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 2)));
#line 54 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_54_54;

#line 54 "dead_proc_elim.m"
                  {
#line 54 "dead_proc_elim.m"
                    mdbcomp__sym_name____Compare____sym_name_0_0(&transform_hlds__dead_proc_elim__V_54_54, transform_hlds__dead_proc_elim__V_89_89, transform_hlds__dead_proc_elim__V_51_51);
                  }
#line 4155 "transform_hlds.dead_proc_elim.c"
                  transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_54_54 == (MR_Integer) 0);
#line 54 "dead_proc_elim.m"
                  transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 54 "dead_proc_elim.m"
                  if (transform_hlds__dead_proc_elim__succeeded)
#line 54 "dead_proc_elim.m"
                    *transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__V_54_54;
#line 54 "dead_proc_elim.m"
                  else
#line 54 "dead_proc_elim.m"
                    {
#line 54 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__V_55_55;

#line 54 "dead_proc_elim.m"
                      {
#line 54 "dead_proc_elim.m"
                        mercury__private_builtin__builtin_compare_string_3_p_0(&transform_hlds__dead_proc_elim__V_55_55, transform_hlds__dead_proc_elim__V_88_88, transform_hlds__dead_proc_elim__V_52_52);
                      }
#line 4175 "transform_hlds.dead_proc_elim.c"
                      transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_55_55 == (MR_Integer) 0);
#line 54 "dead_proc_elim.m"
                      transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 54 "dead_proc_elim.m"
                      if (transform_hlds__dead_proc_elim__succeeded)
#line 54 "dead_proc_elim.m"
                        *transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__V_55_55;
#line 54 "dead_proc_elim.m"
                      else
#line 54 "dead_proc_elim.m"
                        {
#line 54 "dead_proc_elim.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__dead_proc_elim__HeadVar__1_1, transform_hlds__dead_proc_elim__V_87_87, transform_hlds__dead_proc_elim__V_53_53);
                        }
#line 54 "dead_proc_elim.m"
                    }
#line 54 "dead_proc_elim.m"
                }
#line 54 "dead_proc_elim.m"
                break;
#line 54 "dead_proc_elim.m"
              case (MR_Integer) 3:
#line 4198 "transform_hlds.dead_proc_elim.c"
                *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 1;
#line 54 "dead_proc_elim.m"
                break;
#line 54 "dead_proc_elim.m"
            }
#line 54 "dead_proc_elim.m"
          }
#line 54 "dead_proc_elim.m"
          break;
#line 54 "dead_proc_elim.m"
        case (MR_Integer) 3:
#line 54 "dead_proc_elim.m"
          {
#line 54 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));

#line 54 "dead_proc_elim.m"
#line 54 "dead_proc_elim.m"
            switch (MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__3_3)) {
#line 54 "dead_proc_elim.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 54 "dead_proc_elim.m"
              case (MR_Integer) 0:
#line 4222 "transform_hlds.dead_proc_elim.c"
                *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 2;
#line 54 "dead_proc_elim.m"
                break;
#line 54 "dead_proc_elim.m"
              case (MR_Integer) 1:
#line 4228 "transform_hlds.dead_proc_elim.c"
                *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 2;
#line 54 "dead_proc_elim.m"
                break;
#line 54 "dead_proc_elim.m"
              case (MR_Integer) 2:
#line 4234 "transform_hlds.dead_proc_elim.c"
                *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 2;
#line 54 "dead_proc_elim.m"
                break;
#line 54 "dead_proc_elim.m"
              case (MR_Integer) 3:
#line 54 "dead_proc_elim.m"
                {
#line 54 "dead_proc_elim.m"
                  MR_Integer transform_hlds__dead_proc_elim__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 0)));

#line 54 "dead_proc_elim.m"
                  {
#line 54 "dead_proc_elim.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__dead_proc_elim__HeadVar__1_1, transform_hlds__dead_proc_elim__V_82_82, transform_hlds__dead_proc_elim__V_71_71);
                  }
#line 54 "dead_proc_elim.m"
                }
#line 54 "dead_proc_elim.m"
                break;
#line 54 "dead_proc_elim.m"
            }
#line 54 "dead_proc_elim.m"
          }
#line 54 "dead_proc_elim.m"
          break;
#line 54 "dead_proc_elim.m"
      }
#line 54 "dead_proc_elim.m"
  }
#line 54 "dead_proc_elim.m"
}

#line 54 "dead_proc_elim.m"
MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____entity_0_0(
#line 54 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 54 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2)
#line 54 "dead_proc_elim.m"
{
#line 54 "dead_proc_elim.m"
  {
#line 54 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 54 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastX_19 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__1_1;
#line 54 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastY_20 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__2_2;

#line 54 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__CastX_19 == transform_hlds__dead_proc_elim__CastY_20);
#line 54 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 54 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 54 "dead_proc_elim.m"
    else
#line 54 "dead_proc_elim.m"
#line 54 "dead_proc_elim.m"
      switch (MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__1_1)) {
#line 54 "dead_proc_elim.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 54 "dead_proc_elim.m"
        case (MR_Integer) 0:
#line 54 "dead_proc_elim.m"
          {
#line 54 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 54 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 54 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_5_5;
#line 54 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__V_6_6;

#line 54 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__succeeded = ((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 54 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 54 "dead_proc_elim.m"
              {
#line 54 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));
#line 54 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 1)));
#line 4321 "transform_hlds.dead_proc_elim.c"
                {
#line 4323 "transform_hlds.dead_proc_elim.c"
                  transform_hlds__dead_proc_elim__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__dead_proc_elim__V_3_3, transform_hlds__dead_proc_elim__V_5_5);
                }
#line 54 "dead_proc_elim.m"
                if (transform_hlds__dead_proc_elim__succeeded)
#line 4328 "transform_hlds.dead_proc_elim.c"
                  transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_4_4 == transform_hlds__dead_proc_elim__V_6_6);
#line 54 "dead_proc_elim.m"
              }
#line 54 "dead_proc_elim.m"
          }
#line 54 "dead_proc_elim.m"
          break;
#line 54 "dead_proc_elim.m"
        case (MR_Integer) 1:
#line 54 "dead_proc_elim.m"
          {
#line 54 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 54 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 54 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_9_9;
#line 54 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__V_10_10;

#line 54 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__succeeded = ((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 54 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 54 "dead_proc_elim.m"
              {
#line 54 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));
#line 54 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 1)));
#line 4359 "transform_hlds.dead_proc_elim.c"
                {
#line 4361 "transform_hlds.dead_proc_elim.c"
                  transform_hlds__dead_proc_elim__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__dead_proc_elim__V_7_7, transform_hlds__dead_proc_elim__V_9_9);
                }
#line 54 "dead_proc_elim.m"
                if (transform_hlds__dead_proc_elim__succeeded)
#line 4366 "transform_hlds.dead_proc_elim.c"
                  transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_8_8 == transform_hlds__dead_proc_elim__V_10_10);
#line 54 "dead_proc_elim.m"
              }
#line 54 "dead_proc_elim.m"
          }
#line 54 "dead_proc_elim.m"
          break;
#line 54 "dead_proc_elim.m"
        case (MR_Integer) 2:
#line 54 "dead_proc_elim.m"
          {
#line 54 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 54 "dead_proc_elim.m"
            MR_String transform_hlds__dead_proc_elim__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 54 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 2)));
#line 54 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_14_14;
#line 54 "dead_proc_elim.m"
            MR_String transform_hlds__dead_proc_elim__V_15_15;
#line 54 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__V_16_16;

#line 54 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__succeeded = ((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 54 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 54 "dead_proc_elim.m"
              {
#line 54 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));
#line 54 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 1)));
#line 54 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 2)));
#line 4403 "transform_hlds.dead_proc_elim.c"
                {
#line 4405 "transform_hlds.dead_proc_elim.c"
                  transform_hlds__dead_proc_elim__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__dead_proc_elim__V_11_11, transform_hlds__dead_proc_elim__V_14_14);
                }
#line 54 "dead_proc_elim.m"
                if (transform_hlds__dead_proc_elim__succeeded)
#line 54 "dead_proc_elim.m"
                  {
#line 4412 "transform_hlds.dead_proc_elim.c"
                    transform_hlds__dead_proc_elim__succeeded = (strcmp(transform_hlds__dead_proc_elim__V_12_12, transform_hlds__dead_proc_elim__V_15_15) == 0);
#line 54 "dead_proc_elim.m"
                    if (transform_hlds__dead_proc_elim__succeeded)
#line 4416 "transform_hlds.dead_proc_elim.c"
                      transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_13_13 == transform_hlds__dead_proc_elim__V_16_16);
#line 54 "dead_proc_elim.m"
                  }
#line 54 "dead_proc_elim.m"
              }
#line 54 "dead_proc_elim.m"
          }
#line 54 "dead_proc_elim.m"
          break;
#line 54 "dead_proc_elim.m"
        case (MR_Integer) 3:
#line 54 "dead_proc_elim.m"
          {
#line 54 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 54 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__V_18_18;

#line 54 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__succeeded = ((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 54 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 54 "dead_proc_elim.m"
              {
#line 54 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));
#line 4443 "transform_hlds.dead_proc_elim.c"
                transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_17_17 == transform_hlds__dead_proc_elim__V_18_18);
#line 54 "dead_proc_elim.m"
              }
#line 54 "dead_proc_elim.m"
          }
#line 54 "dead_proc_elim.m"
          break;
#line 54 "dead_proc_elim.m"
      }
#line 54 "dead_proc_elim.m"
    return transform_hlds__dead_proc_elim__succeeded;
#line 54 "dead_proc_elim.m"
  }
#line 54 "dead_proc_elim.m"
}

#line 154 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____analyze_what_0_0(
#line 154 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 154 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 154 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_3)
#line 154 "dead_proc_elim.m"
{
#line 154 "dead_proc_elim.m"
  {
#line 154 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 154 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__2_2;
#line 154 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__3_3;

#line 154 "dead_proc_elim.m"
    {
#line 154 "dead_proc_elim.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__dead_proc_elim__HeadVar__1_1, transform_hlds__dead_proc_elim__Cast_HeadVar1_4, transform_hlds__dead_proc_elim__Cast_HeadVar2_5);
    }
#line 154 "dead_proc_elim.m"
  }
#line 154 "dead_proc_elim.m"
}

#line 154 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____analyze_what_0_0(
#line 154 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_1,
#line 154 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2)
#line 154 "dead_proc_elim.m"
{
#line 4499 "transform_hlds.dead_proc_elim.c"
  {
#line 4501 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__HeadVar__2_1 == transform_hlds__dead_proc_elim__HeadVar__2_2);

#line 4504 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 4506 "transform_hlds.dead_proc_elim.c"
  }
#line 154 "dead_proc_elim.m"
}

#line 1259 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_p_0(
#line 1259 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Name_4,
#line 1259 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_13,
#line 1259 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_14)
#line 1259 "dead_proc_elim.m"
{
#line 1265 "dead_proc_elim.m"
  {
#line 1265 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 1265 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ModuleInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_13, (MR_Integer) 0)));
#line 1265 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Examined_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_13, (MR_Integer) 2)));
#line 1265 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Needed_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_13, (MR_Integer) 3)));
#line 1265 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_13, (MR_Integer) 1)));
#line 1265 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_13, (MR_Integer) 4)));

#line 1266 "dead_proc_elim.m"
    {
#line 1266 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_16_16, ((MR_Box) (transform_hlds__dead_proc_elim__Name_4)));
    }
#line 1268 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 1267 "dead_proc_elim.m"
      *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_14 = transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_13;
#line 1268 "dead_proc_elim.m"
    else
#line 1269 "dead_proc_elim.m"
      {
#line 1269 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__PredicateTable_11;
#line 1269 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__PredIds_12;
#line 1269 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_17_21;
#line 1269 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_22;

#line 1269 "dead_proc_elim.m"
        {
#line 1269 "dead_proc_elim.m"
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_8, &transform_hlds__dead_proc_elim__PredicateTable_11);
        }
#line 1270 "dead_proc_elim.m"
        {
#line 1270 "dead_proc_elim.m"
          mercury__set_tree234__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (transform_hlds__dead_proc_elim__Name_4)), transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_16_16, &transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_17_21);
        }
#line 1271 "dead_proc_elim.m"
        {
#line 1271 "dead_proc_elim.m"
          hlds__pred_table__predicate_table_lookup_sym_4_p_0(transform_hlds__dead_proc_elim__PredicateTable_11, (MR_Integer) 1, transform_hlds__dead_proc_elim__Name_4, &transform_hlds__dead_proc_elim__PredIds_12);
        }
#line 1273 "dead_proc_elim.m"
        {
#line 1273 "dead_proc_elim.m"
          mercury__queue__put_list_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__dead_proc_elim__PredIds_12, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_15_15, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_22);
        }
#line 1274 "dead_proc_elim.m"
        {
#line 1274 "dead_proc_elim.m"
          MR_Word base;
#line 1274 "dead_proc_elim.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1274 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_14 = base;
#line 1274 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ModuleInfo_8));
#line 1274 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_22));
#line 1274 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__Examined_9));
#line 1274 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__Needed_10));
#line 1274 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_17_21));
#line 1274 "dead_proc_elim.m"
        }
#line 1269 "dead_proc_elim.m"
      }
#line 1265 "dead_proc_elim.m"
  }
#line 1259 "dead_proc_elim.m"
}

#line 1241 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_p_0(
#line 1241 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__RHS_4,
#line 1241 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22,
#line 1241 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_23)
#line 1241 "dead_proc_elim.m"
{
#line 1246 "dead_proc_elim.m"
  {
#line 1246 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 1246 "dead_proc_elim.m"
#line 1246 "dead_proc_elim.m"
    switch (MR_tag((MR_Word) transform_hlds__dead_proc_elim__RHS_4)) {
#line 1246 "dead_proc_elim.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1246 "dead_proc_elim.m"
      case (MR_Integer) 0:
#line 1246 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_23 = transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22;
#line 1246 "dead_proc_elim.m"
        break;
#line 1246 "dead_proc_elim.m"
      case (MR_Integer) 1:
#line 1248 "dead_proc_elim.m"
        {
#line 1248 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__Functor_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 0)));
#line 1248 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 1)));
#line 1248 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 2)));
#line 1251 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__Name_10;
#line 1249 "dead_proc_elim.m"
          MR_Integer transform_hlds__dead_proc_elim__V_11_11;
#line 1249 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_12_12;

#line 1249 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__succeeded = ((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__Functor_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Functor_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1249 "dead_proc_elim.m"
          if (transform_hlds__dead_proc_elim__succeeded)
#line 1249 "dead_proc_elim.m"
            {
#line 1249 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Functor_7, (MR_Integer) 1)));
#line 1249 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Functor_7, (MR_Integer) 2)));
#line 1249 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Functor_7, (MR_Integer) 3)));
#line 1265 "dead_proc_elim.m"
              {
#line 1265 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__ModuleInfo_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22, (MR_Integer) 0)));
#line 1265 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__Examined_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22, (MR_Integer) 2)));
#line 1265 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__Needed_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22, (MR_Integer) 3)));
#line 1265 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_15_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22, (MR_Integer) 1)));
#line 1265 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_16_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22, (MR_Integer) 4)));

#line 1266 "dead_proc_elim.m"
                {
#line 1266 "dead_proc_elim.m"
                  transform_hlds__dead_proc_elim__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_16_38, ((MR_Box) (transform_hlds__dead_proc_elim__Name_10)));
                }
#line 1268 "dead_proc_elim.m"
                if (transform_hlds__dead_proc_elim__succeeded)
#line 1267 "dead_proc_elim.m"
                  *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_23 = transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22;
#line 1268 "dead_proc_elim.m"
                else
#line 1269 "dead_proc_elim.m"
                  {
#line 1269 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__PredicateTable_35;
#line 1269 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__PredIds_36;
#line 1269 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_17_43;
#line 1269 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_44;

#line 1269 "dead_proc_elim.m"
                    {
#line 1269 "dead_proc_elim.m"
                      hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_32, &transform_hlds__dead_proc_elim__PredicateTable_35);
                    }
#line 1270 "dead_proc_elim.m"
                    {
#line 1270 "dead_proc_elim.m"
                      mercury__set_tree234__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (transform_hlds__dead_proc_elim__Name_10)), transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_16_38, &transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_17_43);
                    }
#line 1271 "dead_proc_elim.m"
                    {
#line 1271 "dead_proc_elim.m"
                      hlds__pred_table__predicate_table_lookup_sym_4_p_0(transform_hlds__dead_proc_elim__PredicateTable_35, (MR_Integer) 1, transform_hlds__dead_proc_elim__Name_10, &transform_hlds__dead_proc_elim__PredIds_36);
                    }
#line 1273 "dead_proc_elim.m"
                    {
#line 1273 "dead_proc_elim.m"
                      mercury__queue__put_list_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__dead_proc_elim__PredIds_36, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_15_37, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_44);
                    }
#line 1274 "dead_proc_elim.m"
                    {
#line 1274 "dead_proc_elim.m"
                      MR_Word base;
#line 1274 "dead_proc_elim.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1274 "dead_proc_elim.m"
                      *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_23 = base;
#line 1274 "dead_proc_elim.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ModuleInfo_32));
#line 1274 "dead_proc_elim.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_44));
#line 1274 "dead_proc_elim.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__Examined_33));
#line 1274 "dead_proc_elim.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__Needed_34));
#line 1274 "dead_proc_elim.m"
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_17_43));
#line 1274 "dead_proc_elim.m"
                    }
#line 1269 "dead_proc_elim.m"
                  }
#line 1265 "dead_proc_elim.m"
              }
#line 1249 "dead_proc_elim.m"
            }
#line 1249 "dead_proc_elim.m"
          else
#line 1251 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_23 = transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22;
#line 1248 "dead_proc_elim.m"
        }
#line 1246 "dead_proc_elim.m"
        break;
#line 1246 "dead_proc_elim.m"
      case (MR_Integer) 2:
#line 1255 "dead_proc_elim.m"
        {
#line 1255 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 6)));
#line 1255 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__GoalExpr_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Goal_21, (MR_Integer) 0)));
#line 1255 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1255 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1255 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1255 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 2)));
#line 1255 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 3)));
#line 1255 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 4)));
#line 1255 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 5)));
#line 1184 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Goal_21, (MR_Integer) 1)));

#line 1185 "dead_proc_elim.m"
          {
#line 1185 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0(transform_hlds__dead_proc_elim__GoalExpr_52, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_23);
          }
#line 1255 "dead_proc_elim.m"
        }
#line 1246 "dead_proc_elim.m"
        break;
#line 1246 "dead_proc_elim.m"
    }
#line 1246 "dead_proc_elim.m"
  }
#line 1241 "dead_proc_elim.m"
}

#line 1204 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_4(
#line 1204 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1204 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1204 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1204 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 1204 "dead_proc_elim.m"
{
#line 1204 "dead_proc_elim.m"
  {
#line 1204 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 1204 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_DeadInfo_10;

#line 1204 "dead_proc_elim.m"
    {
#line 1204 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__pre_modecheck_examine_case_3_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_DeadInfo_10);
    }
#line 1204 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_DeadInfo_10));
#line 1204 "dead_proc_elim.m"
  }
#line 1204 "dead_proc_elim.m"
}

#line 1230 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_3(
#line 1230 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1230 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1230 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1230 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 1230 "dead_proc_elim.m"
{
#line 1230 "dead_proc_elim.m"
  {
#line 1230 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 1230 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_DeadInfo_9;

#line 1230 "dead_proc_elim.m"
    {
#line 1230 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_DeadInfo_9);
    }
#line 1230 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_DeadInfo_9));
#line 1230 "dead_proc_elim.m"
  }
#line 1230 "dead_proc_elim.m"
}

#line 1196 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_2(
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
    MR_Word transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_DeadInfo_9;

#line 1196 "dead_proc_elim.m"
    {
#line 1196 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_DeadInfo_9);
    }
#line 1196 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_DeadInfo_9));
#line 1196 "dead_proc_elim.m"
  }
#line 1196 "dead_proc_elim.m"
}

#line 1193 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_1(
#line 1193 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1193 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1193 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1193 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 1193 "dead_proc_elim.m"
{
#line 1193 "dead_proc_elim.m"
  {
#line 1193 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 1193 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_DeadInfo_9;

#line 1193 "dead_proc_elim.m"
    {
#line 1193 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_DeadInfo_9);
    }
#line 1193 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_DeadInfo_9));
#line 1193 "dead_proc_elim.m"
  }
#line 1193 "dead_proc_elim.m"
}

#line 1187 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0(
#line 1187 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__GoalExpr_4,
#line 1187 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52,
#line 1187 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53)
#line 1187 "dead_proc_elim.m"
{
#line 1192 "dead_proc_elim.m"
  {
#line 1192 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 1192 "dead_proc_elim.m"
#line 1192 "dead_proc_elim.m"
    switch (MR_tag((MR_Word) transform_hlds__dead_proc_elim__GoalExpr_4)) {
#line 1192 "dead_proc_elim.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1192 "dead_proc_elim.m"
      case (MR_Integer) 0:
#line 1206 "dead_proc_elim.m"
        {
#line 1206 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__SubGoal_15 = (MR_Word) MR_body(((MR_Word) transform_hlds__dead_proc_elim__GoalExpr_4), (MR_Integer) 0);

#line 1207 "dead_proc_elim.m"
          {
#line 1207 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(transform_hlds__dead_proc_elim__SubGoal_15, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53);
          }
#line 1206 "dead_proc_elim.m"
        }
#line 1192 "dead_proc_elim.m"
        break;
#line 1192 "dead_proc_elim.m"
      case (MR_Integer) 1:
#line 1222 "dead_proc_elim.m"
        {
#line 1222 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__RHS_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 1)));
#line 1222 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 0)));
#line 1222 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 2)));
#line 1222 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 3)));
#line 1222 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 4)));

#line 1223 "dead_proc_elim.m"
          {
#line 1223 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_p_0(transform_hlds__dead_proc_elim__RHS_36, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53);
          }
#line 1222 "dead_proc_elim.m"
        }
#line 1192 "dead_proc_elim.m"
        break;
#line 1192 "dead_proc_elim.m"
      case (MR_Integer) 2:
#line 1215 "dead_proc_elim.m"
        {
#line 1215 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__PredName_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 5)));
#line 1215 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 0)));
#line 1215 "dead_proc_elim.m"
          MR_Integer transform_hlds__dead_proc_elim__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 1)));
#line 1215 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 2)));
#line 1215 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 3)));
#line 1215 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 4)));

#line 1216 "dead_proc_elim.m"
          {
#line 1216 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_p_0(transform_hlds__dead_proc_elim__PredName_22, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53);
          }
#line 1215 "dead_proc_elim.m"
        }
#line 1192 "dead_proc_elim.m"
        break;
#line 1192 "dead_proc_elim.m"
      case (MR_Integer) 3:
#line 1192 "dead_proc_elim.m"
#line 1192 "dead_proc_elim.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 0)))) {
#line 1192 "dead_proc_elim.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1192 "dead_proc_elim.m"
          case (MR_Integer) 0:
#line 1218 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53 = transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52;
#line 1192 "dead_proc_elim.m"
            break;
#line 1192 "dead_proc_elim.m"
          case (MR_Integer) 1:
#line 1220 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53 = transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52;
#line 1192 "dead_proc_elim.m"
            break;
#line 1192 "dead_proc_elim.m"
          case (MR_Integer) 2:
#line 1192 "dead_proc_elim.m"
            {
#line 1192 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 2)));
#line 1192 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim___ConjType_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 1)));
#line 1193 "dead_proc_elim.m"
              MR_Box transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_DeadInfo_53;

#line 1193 "dead_proc_elim.m"
              {
#line 1193 "dead_proc_elim.m"
                mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[14], transform_hlds__dead_proc_elim__Goals_7, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52)), &transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_DeadInfo_53);
              }
#line 1193 "dead_proc_elim.m"
              *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53 = ((MR_Word) transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_DeadInfo_53);
#line 1192 "dead_proc_elim.m"
            }
#line 1192 "dead_proc_elim.m"
            break;
#line 1192 "dead_proc_elim.m"
          case (MR_Integer) 3:
#line 1195 "dead_proc_elim.m"
            {
#line 1195 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__Goals_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 1)));
#line 1196 "dead_proc_elim.m"
              MR_Box transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_DeadInfo_53;

#line 1196 "dead_proc_elim.m"
              {
#line 1196 "dead_proc_elim.m"
                mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[15], transform_hlds__dead_proc_elim__Goals_74, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52)), &transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_DeadInfo_53);
              }
#line 1196 "dead_proc_elim.m"
              *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53 = ((MR_Word) transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_DeadInfo_53);
#line 1195 "dead_proc_elim.m"
            }
#line 1192 "dead_proc_elim.m"
            break;
#line 1192 "dead_proc_elim.m"
          case (MR_Integer) 4:
#line 1203 "dead_proc_elim.m"
            {
#line 1203 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 3)));
#line 1203 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 1)));
#line 1203 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 2)));
#line 1204 "dead_proc_elim.m"
              MR_Box transform_hlds__dead_proc_elim__conv7_STATE_VARIABLE_DeadInfo_53;

#line 1204 "dead_proc_elim.m"
              {
#line 1204 "dead_proc_elim.m"
                mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[17], transform_hlds__dead_proc_elim__Cases_14, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52)), &transform_hlds__dead_proc_elim__conv7_STATE_VARIABLE_DeadInfo_53);
              }
#line 1204 "dead_proc_elim.m"
              *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53 = ((MR_Word) transform_hlds__dead_proc_elim__conv7_STATE_VARIABLE_DeadInfo_53);
#line 1203 "dead_proc_elim.m"
            }
#line 1192 "dead_proc_elim.m"
            break;
#line 1192 "dead_proc_elim.m"
          case (MR_Integer) 5:
#line 1209 "dead_proc_elim.m"
            {
#line 1209 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__SubGoal_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 2)));
#line 1209 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 1)));

#line 1213 "dead_proc_elim.m"
              {
#line 1213 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(transform_hlds__dead_proc_elim__SubGoal_75, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53);
              }
#line 1209 "dead_proc_elim.m"
            }
#line 1192 "dead_proc_elim.m"
            break;
#line 1192 "dead_proc_elim.m"
          case (MR_Integer) 6:
#line 1198 "dead_proc_elim.m"
            {
#line 1198 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__Cond_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 2)));
#line 1198 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__Then_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 3)));
#line 1198 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__Else_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 4)));
#line 1198 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_67_67;
#line 1198 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_68_68;
#line 1198 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 1)));

#line 1199 "dead_proc_elim.m"
              {
#line 1199 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(transform_hlds__dead_proc_elim__Cond_9, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52, &transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_67_67);
              }
#line 1200 "dead_proc_elim.m"
              {
#line 1200 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(transform_hlds__dead_proc_elim__Then_10, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_67_67, &transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_68_68);
              }
#line 1201 "dead_proc_elim.m"
              {
#line 1201 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(transform_hlds__dead_proc_elim__Else_11, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_68_68, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53);
              }
#line 1198 "dead_proc_elim.m"
            }
#line 1192 "dead_proc_elim.m"
            break;
#line 1192 "dead_proc_elim.m"
          case (MR_Integer) 7:
#line 1225 "dead_proc_elim.m"
            {
#line 1225 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__ShortHand_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 1)));

#line 1231 "dead_proc_elim.m"
#line 1231 "dead_proc_elim.m"
              switch (MR_tag((MR_Word) transform_hlds__dead_proc_elim__ShortHand_40)) {
#line 1231 "dead_proc_elim.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1231 "dead_proc_elim.m"
                case (MR_Integer) 0:
#line 1235 "dead_proc_elim.m"
                  {
#line 1237 "dead_proc_elim.m"
                    {
#line 1237 "dead_proc_elim.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.dead_proc_elim", (MR_String) "predicate \140transform_hlds.dead_proc_elim.pre_modecheck_examine_goal_expr\'/3", (MR_String) "unexpected bi_implication");
#line 1237 "dead_proc_elim.m"
                      return;
                    }
#line 1235 "dead_proc_elim.m"
                  }
#line 1231 "dead_proc_elim.m"
                  break;
#line 1231 "dead_proc_elim.m"
                case (MR_Integer) 1:
#line 1228 "dead_proc_elim.m"
                  {
#line 1228 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__MainGoal_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__ShortHand_40, (MR_Integer) 4)));
#line 1228 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__OrElseGoals_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__ShortHand_40, (MR_Integer) 5)));
#line 1228 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_58_58;
#line 1227 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim___GoalType_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__ShortHand_40, (MR_Integer) 0)));
#line 1227 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim___Outer_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__ShortHand_40, (MR_Integer) 1)));
#line 1227 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim___Inner_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__ShortHand_40, (MR_Integer) 2)));
#line 1227 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim___MaybeOutputVars_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__ShortHand_40, (MR_Integer) 3)));
#line 1227 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim___OrElseInners_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__ShortHand_40, (MR_Integer) 6)));
#line 1230 "dead_proc_elim.m"
                    MR_Box transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_DeadInfo_53;

#line 1229 "dead_proc_elim.m"
                    {
#line 1229 "dead_proc_elim.m"
                      transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(transform_hlds__dead_proc_elim__MainGoal_45, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52, &transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_58_58);
                    }
#line 1230 "dead_proc_elim.m"
                    {
#line 1230 "dead_proc_elim.m"
                      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[16], transform_hlds__dead_proc_elim__OrElseGoals_46, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_58_58)), &transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_DeadInfo_53);
                    }
#line 1230 "dead_proc_elim.m"
                    *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53 = ((MR_Word) transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_DeadInfo_53);
#line 1228 "dead_proc_elim.m"
                  }
#line 1231 "dead_proc_elim.m"
                  break;
#line 1231 "dead_proc_elim.m"
                case (MR_Integer) 2:
#line 1232 "dead_proc_elim.m"
                  {
#line 1232 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__SubGoal_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__ShortHand_40, (MR_Integer) 2)));
#line 1232 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim___MaybeIO_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__ShortHand_40, (MR_Integer) 0)));
#line 1232 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim___ResultVar_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__ShortHand_40, (MR_Integer) 1)));

#line 1233 "dead_proc_elim.m"
                    {
#line 1233 "dead_proc_elim.m"
                      transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(transform_hlds__dead_proc_elim__SubGoal_76, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53);
                    }
#line 1232 "dead_proc_elim.m"
                  }
#line 1231 "dead_proc_elim.m"
                  break;
#line 1231 "dead_proc_elim.m"
              }
#line 1225 "dead_proc_elim.m"
            }
#line 1192 "dead_proc_elim.m"
            break;
#line 1192 "dead_proc_elim.m"
        }
#line 1192 "dead_proc_elim.m"
        break;
#line 1192 "dead_proc_elim.m"
    }
#line 1192 "dead_proc_elim.m"
  }
#line 1187 "dead_proc_elim.m"
}

#line 1180 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(
#line 1180 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Goal_4,
#line 1180 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_8,
#line 1180 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_9)
#line 1180 "dead_proc_elim.m"
{
#line 1183 "dead_proc_elim.m"
  {
#line 1183 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 1183 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Goal_4, (MR_Integer) 0)));
#line 1184 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Goal_4, (MR_Integer) 1)));

#line 1185 "dead_proc_elim.m"
    {
#line 1185 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0(transform_hlds__dead_proc_elim__GoalExpr_6, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_8, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_9);
    }
#line 1183 "dead_proc_elim.m"
  }
#line 1180 "dead_proc_elim.m"
}

#line 1173 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_case_3_p_0(
#line 1173 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Case_4,
#line 1173 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_9,
#line 1173 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_10)
#line 1173 "dead_proc_elim.m"
{
#line 1176 "dead_proc_elim.m"
  {
#line 1176 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 1176 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Case_4, (MR_Integer) 2)));
#line 1177 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Case_4, (MR_Integer) 0)));
#line 1177 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Case_4, (MR_Integer) 1)));

#line 1178 "dead_proc_elim.m"
    {
#line 1178 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(transform_hlds__dead_proc_elim__Goal_8, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_9, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_10);
    }
#line 1176 "dead_proc_elim.m"
  }
#line 1173 "dead_proc_elim.m"
}

#line 1167 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_process_clause_3_p_0(
#line 1167 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Clause_4,
#line 1167 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_6,
#line 1167 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_7)
#line 1167 "dead_proc_elim.m"
{
#line 1170 "dead_proc_elim.m"
  {
#line 1170 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 1170 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_8_8;
#line 1170 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__GoalExpr_14;
#line 1184 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_15_15;

#line 1171 "dead_proc_elim.m"
    {
#line 1171 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__V_8_8 = hlds__hlds_clauses__clause_body_1_f_0(transform_hlds__dead_proc_elim__Clause_4);
    }
#line 1184 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_8_8, (MR_Integer) 0)));
#line 1184 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_8_8, (MR_Integer) 1)));
#line 1185 "dead_proc_elim.m"
    {
#line 1185 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0(transform_hlds__dead_proc_elim__GoalExpr_14, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_6, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_7);
    }
#line 1170 "dead_proc_elim.m"
  }
#line 1167 "dead_proc_elim.m"
}

#line 1159 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_p_0_1(
#line 1159 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1159 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1159 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1159 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 1159 "dead_proc_elim.m"
{
#line 1159 "dead_proc_elim.m"
  {
#line 1159 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 1159 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_DeadInfo_7;

#line 1159 "dead_proc_elim.m"
    {
#line 1159 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_pred_elim_process_clause_3_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_DeadInfo_7);
    }
#line 1159 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_DeadInfo_7));
#line 1159 "dead_proc_elim.m"
  }
#line 1159 "dead_proc_elim.m"
}

#line 1139 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_p_0(
#line 1139 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_15,
#line 1139 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_16)
#line 1139 "dead_proc_elim.m"
{
#line 1144 "dead_proc_elim.m"
  while (MR_TRUE)
#line 1144 "dead_proc_elim.m"
    {
#line 1144 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 1144 "dead_proc_elim.m"
      {
#line 1144 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 1144 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__ModuleInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_15, (MR_Integer) 0)));
#line 1144 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__NeededNames_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_15, (MR_Integer) 4)));
#line 1144 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_15, (MR_Integer) 1)));
#line 1144 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_15, (MR_Integer) 2)));
#line 1144 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_15, (MR_Integer) 3)));
#line 1162 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__PredId_9;
#line 1162 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_20_20;
#line 1145 "dead_proc_elim.m"
        MR_Box transform_hlds__dead_proc_elim__conv0_PredId_9;

#line 1145 "dead_proc_elim.m"
        {
#line 1145 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__succeeded = mercury__queue__get_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, &transform_hlds__dead_proc_elim__conv0_PredId_9, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_17_17, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_20_20);
        }
#line 1145 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 1145 "dead_proc_elim.m"
          {
#line 1145 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__PredId_9 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_PredId_9);
#line 1145 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 1145 "dead_proc_elim.m"
          }
#line 1162 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 1160 "dead_proc_elim.m"
          {
#line 1160 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_21_21;

#line 1146 "dead_proc_elim.m"
            {
#line 1146 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_18_18, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_9)));
            }
#line 1149 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 1147 "dead_proc_elim.m"
              {
#line 1147 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1147 "dead_proc_elim.m"
                MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_21_21, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ModuleInfo_7));
#line 1147 "dead_proc_elim.m"
                MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_21_21, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_20_20));
#line 1147 "dead_proc_elim.m"
                MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_21_21, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_18_18));
#line 1147 "dead_proc_elim.m"
                MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_21_21, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_19_19));
#line 1147 "dead_proc_elim.m"
                MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_21_21, 4) = ((MR_Box) (transform_hlds__dead_proc_elim__NeededNames_8));
#line 1147 "dead_proc_elim.m"
              }
#line 1149 "dead_proc_elim.m"
            else
#line 1150 "dead_proc_elim.m"
              {
#line 1150 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_39_39 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 1150 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__PredInfo_10;
#line 1150 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__ClausesInfo_11;
#line 1150 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__ClausesRep_12;
#line 1150 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__Clauses_14;
#line 1150 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_24_24;
#line 1150 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_22_29;
#line 1150 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_23_30;
#line 1156 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim___ItemNumbers_13;
#line 1159 "dead_proc_elim.m"
                MR_Box transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_DeadInfo_21_21;

#line 1150 "dead_proc_elim.m"
                {
#line 1150 "dead_proc_elim.m"
                  mercury__set_tree234__insert_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_39_39, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_9)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_19_19, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_22_29);
                }
#line 1151 "dead_proc_elim.m"
                {
#line 1151 "dead_proc_elim.m"
                  mercury__set_tree234__insert_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_39_39, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_9)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_18_18, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_23_30);
                }
#line 1152 "dead_proc_elim.m"
                {
#line 1152 "dead_proc_elim.m"
                  transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1152 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_24_24, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ModuleInfo_7));
#line 1152 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_24_24, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_20_20));
#line 1152 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_24_24, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_23_30));
#line 1152 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_24_24, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_22_29));
#line 1152 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_24_24, 4) = ((MR_Box) (transform_hlds__dead_proc_elim__NeededNames_8));
#line 1152 "dead_proc_elim.m"
                }
#line 1154 "dead_proc_elim.m"
                {
#line 1154 "dead_proc_elim.m"
                  hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__dead_proc_elim__ModuleInfo_7, transform_hlds__dead_proc_elim__PredId_9, &transform_hlds__dead_proc_elim__PredInfo_10);
                }
#line 1155 "dead_proc_elim.m"
                {
#line 1155 "dead_proc_elim.m"
                  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(transform_hlds__dead_proc_elim__PredInfo_10, &transform_hlds__dead_proc_elim__ClausesInfo_11);
                }
#line 1156 "dead_proc_elim.m"
                {
#line 1156 "dead_proc_elim.m"
                  hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(transform_hlds__dead_proc_elim__ClausesInfo_11, &transform_hlds__dead_proc_elim__ClausesRep_12, &transform_hlds__dead_proc_elim___ItemNumbers_13);
                }
#line 1158 "dead_proc_elim.m"
                {
#line 1158 "dead_proc_elim.m"
                  hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(transform_hlds__dead_proc_elim__ClausesRep_12, &transform_hlds__dead_proc_elim__Clauses_14);
                }
#line 1159 "dead_proc_elim.m"
                {
#line 1159 "dead_proc_elim.m"
                  mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[13], transform_hlds__dead_proc_elim__Clauses_14, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_24_24)), &transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_DeadInfo_21_21);
                }
#line 1159 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_21_21 = ((MR_Word) transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_DeadInfo_21_21);
#line 1150 "dead_proc_elim.m"
              }
#line 1161 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 1161 "dead_proc_elim.m"
            {
#line 1161 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0__tmp_copy_15 = transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_21_21;

#line 1161 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_15 = transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0__tmp_copy_15;
#line 1161 "dead_proc_elim.m"
            }
#line 1161 "dead_proc_elim.m"
            continue;
#line 1160 "dead_proc_elim.m"
          }
#line 1162 "dead_proc_elim.m"
        else
#line 1163 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_16 = transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_15;
#line 1144 "dead_proc_elim.m"
      }
#line 1144 "dead_proc_elim.m"
      break;
#line 1144 "dead_proc_elim.m"
    }
#line 1139 "dead_proc_elim.m"
}

#line 1074 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_p_0(
#line 1074 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__PredId_4,
#line 1074 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__DeadInfo0_5,
#line 1074 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__DeadInfo_6)
#line 1074 "dead_proc_elim.m"
{
#line 1080 "dead_proc_elim.m"
  {
#line 1080 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 1080 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ModuleInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo0_5, (MR_Integer) 0)));
#line 1080 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Examined_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo0_5, (MR_Integer) 2)));
#line 1080 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__NeededIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo0_5, (MR_Integer) 3)));
#line 1080 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredInfo_12;
#line 1080 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo0_5, (MR_Integer) 1)));
#line 1080 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo0_5, (MR_Integer) 4)));
#line 1080 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_25_25;
#line 1080 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 1132 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredModule_13;
#line 1132 "dead_proc_elim.m"
    MR_String transform_hlds__dead_proc_elim__PredName_14;
#line 1083 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__PredArity_15;

#line 1081 "dead_proc_elim.m"
    {
#line 1081 "dead_proc_elim.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__dead_proc_elim__ModuleInfo_9, transform_hlds__dead_proc_elim__PredId_4, &transform_hlds__dead_proc_elim__PredInfo_12);
    }
#line 1083 "dead_proc_elim.m"
    {
#line 1083 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__PredModule_13 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__dead_proc_elim__PredInfo_12);
    }
#line 1084 "dead_proc_elim.m"
    {
#line 1084 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__PredName_14 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__dead_proc_elim__PredInfo_12);
    }
#line 1085 "dead_proc_elim.m"
    {
#line 1085 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__PredArity_15 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__dead_proc_elim__PredInfo_12);
    }
#line 1089 "dead_proc_elim.m"
    {
#line 1089 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__dead_proc_elim__PredInfo_12);
    }
#line 1090 "dead_proc_elim.m"
    if (!(transform_hlds__dead_proc_elim__succeeded))
#line 1090 "dead_proc_elim.m"
      {
#line 1094 "dead_proc_elim.m"
        {
#line 1094 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(transform_hlds__dead_proc_elim__PredModule_13);
        }
#line 1090 "dead_proc_elim.m"
        if (!(transform_hlds__dead_proc_elim__succeeded))
#line 1090 "dead_proc_elim.m"
          {
#line 1098 "dead_proc_elim.m"
            {
#line 1098 "dead_proc_elim.m"
              MR_String transform_hlds__dead_proc_elim__PredModuleName_16;

#line 1098 "dead_proc_elim.m"
              {
#line 1098 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(transform_hlds__dead_proc_elim__PredModule_13, &transform_hlds__dead_proc_elim__PredModuleName_16);
              }
#line 1098 "dead_proc_elim.m"
              if (transform_hlds__dead_proc_elim__succeeded)
#line 1099 "dead_proc_elim.m"
                {
#line 1099 "dead_proc_elim.m"
                  transform_hlds__dead_proc_elim__succeeded = check_hlds__simplify__simplify_proc__simplify_may_introduce_calls_3_p_0(transform_hlds__dead_proc_elim__PredModuleName_16, transform_hlds__dead_proc_elim__PredName_14, transform_hlds__dead_proc_elim__PredArity_15);
                }
#line 1098 "dead_proc_elim.m"
            }
#line 1090 "dead_proc_elim.m"
            if (!(transform_hlds__dead_proc_elim__succeeded))
#line 1090 "dead_proc_elim.m"
              {
#line 1107 "dead_proc_elim.m"
                {
#line 1107 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_29_29;

#line 1107 "dead_proc_elim.m"
                  {
#line 1107 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__V_29_29 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
                  }
#line 1107 "dead_proc_elim.m"
                  {
#line 1107 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__dead_proc_elim__PredModule_13, transform_hlds__dead_proc_elim__V_29_29);
                  }
#line 1107 "dead_proc_elim.m"
                  if (transform_hlds__dead_proc_elim__succeeded)
#line 1108 "dead_proc_elim.m"
                    {
#line 1108 "dead_proc_elim.m"
                      transform_hlds__dead_proc_elim__succeeded = check_hlds__try_expand__try_expand_may_introduce_calls_2_p_0(transform_hlds__dead_proc_elim__PredName_14, transform_hlds__dead_proc_elim__PredArity_15);
                    }
#line 1107 "dead_proc_elim.m"
                }
#line 1090 "dead_proc_elim.m"
                if (!(transform_hlds__dead_proc_elim__succeeded))
#line 1090 "dead_proc_elim.m"
                  {
#line 1112 "dead_proc_elim.m"
                    {
#line 1112 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__PredStatus_17;
#line 1114 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__V_23_23;

#line 1112 "dead_proc_elim.m"
                      {
#line 1112 "dead_proc_elim.m"
                        transform_hlds__dead_proc_elim__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__dead_proc_elim__PredInfo_12);
                      }
#line 1112 "dead_proc_elim.m"
                      transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 1112 "dead_proc_elim.m"
                      if (transform_hlds__dead_proc_elim__succeeded)
#line 1112 "dead_proc_elim.m"
                        {
#line 1113 "dead_proc_elim.m"
                          {
#line 1113 "dead_proc_elim.m"
                            hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__dead_proc_elim__PredInfo_12, &transform_hlds__dead_proc_elim__PredStatus_17);
                          }
#line 1114 "dead_proc_elim.m"
                          transform_hlds__dead_proc_elim__V_23_23 = (MR_Word) transform_hlds__dead_proc_elim__PredStatus_17;
#line 1114 "dead_proc_elim.m"
                          transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1114 "dead_proc_elim.m"
                          transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 1112 "dead_proc_elim.m"
                        }
#line 1112 "dead_proc_elim.m"
                    }
#line 1090 "dead_proc_elim.m"
                    if (!(transform_hlds__dead_proc_elim__succeeded))
#line 1090 "dead_proc_elim.m"
                      {
#line 1118 "dead_proc_elim.m"
                        {
#line 1118 "dead_proc_elim.m"
                          MR_Word transform_hlds__dead_proc_elim__V_30_30;

#line 1118 "dead_proc_elim.m"
                          {
#line 1118 "dead_proc_elim.m"
                            hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_9, &transform_hlds__dead_proc_elim__V_30_30);
                          }
#line 1118 "dead_proc_elim.m"
                          {
#line 1118 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__dead_proc_elim__PredModule_13, transform_hlds__dead_proc_elim__V_30_30);
                          }
#line 1118 "dead_proc_elim.m"
                        }
#line 1090 "dead_proc_elim.m"
                        if (!(transform_hlds__dead_proc_elim__succeeded))
#line 1090 "dead_proc_elim.m"
                          {
#line 1123 "dead_proc_elim.m"
                            {
#line 1123 "dead_proc_elim.m"
                              MR_String transform_hlds__dead_proc_elim__V_18_18;

#line 1123 "dead_proc_elim.m"
                              {
#line 1123 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__succeeded = mercury__string__remove_suffix_3_p_0(transform_hlds__dead_proc_elim__PredName_14, (MR_String) "_init_any", &transform_hlds__dead_proc_elim__V_18_18);
                              }
#line 1123 "dead_proc_elim.m"
                              if (transform_hlds__dead_proc_elim__succeeded)
#line 1124 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__PredArity_15 == (MR_Integer) 1);
#line 1123 "dead_proc_elim.m"
                            }
#line 1090 "dead_proc_elim.m"
                            if (!(transform_hlds__dead_proc_elim__succeeded))
#line 1127 "dead_proc_elim.m"
                              {
#line 1127 "dead_proc_elim.m"
                                MR_Word transform_hlds__dead_proc_elim__V_19_19;

#line 1127 "dead_proc_elim.m"
                                {
#line 1127 "dead_proc_elim.m"
                                  transform_hlds__dead_proc_elim__succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(transform_hlds__dead_proc_elim__PredInfo_12, &transform_hlds__dead_proc_elim__V_19_19);
                                }
#line 1127 "dead_proc_elim.m"
                              }
#line 1090 "dead_proc_elim.m"
                          }
#line 1090 "dead_proc_elim.m"
                      }
#line 1090 "dead_proc_elim.m"
                  }
#line 1090 "dead_proc_elim.m"
              }
#line 1090 "dead_proc_elim.m"
          }
#line 1090 "dead_proc_elim.m"
      }
#line 1132 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 1130 "dead_proc_elim.m"
      {
#line 1130 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_24_24;

#line 1130 "dead_proc_elim.m"
        {
#line 1130 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1130 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_24_24, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredModule_13));
#line 1130 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_24_24, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__PredName_14));
#line 1130 "dead_proc_elim.m"
        }
#line 1130 "dead_proc_elim.m"
        {
#line 1130 "dead_proc_elim.m"
          mercury__set_tree234__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (transform_hlds__dead_proc_elim__V_24_24)), transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_21_21, &transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_25_25);
        }
#line 1131 "dead_proc_elim.m"
        {
#line 1131 "dead_proc_elim.m"
          mercury__queue__put_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_4)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_20_20, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26);
        }
#line 1130 "dead_proc_elim.m"
      }
#line 1132 "dead_proc_elim.m"
    else
#line 1133 "dead_proc_elim.m"
      {
#line 1133 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_25_25 = transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_21_21;
#line 1133 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_20_20;
#line 1133 "dead_proc_elim.m"
      }
#line 1135 "dead_proc_elim.m"
    {
#line 1135 "dead_proc_elim.m"
      MR_Word base;
#line 1135 "dead_proc_elim.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1135 "dead_proc_elim.m"
      *transform_hlds__dead_proc_elim__DeadInfo_6 = base;
#line 1135 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ModuleInfo_9));
#line 1135 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26));
#line 1135 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__Examined_10));
#line 1135 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__NeededIds_11));
#line 1135 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_25_25));
#line 1135 "dead_proc_elim.m"
    }
#line 1080 "dead_proc_elim.m"
  }
#line 1074 "dead_proc_elim.m"
}

#line 1063 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_add_entity_5_p_0(
#line 1063 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 1063 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 1063 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 1063 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_0_4,
#line 1063 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_5)
#line 1063 "dead_proc_elim.m"
{
#line 1067 "dead_proc_elim.m"
  {
#line 1067 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 1067 "dead_proc_elim.m"
#line 1067 "dead_proc_elim.m"
    switch (MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__1_1)) {
#line 1067 "dead_proc_elim.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1067 "dead_proc_elim.m"
      case (MR_Integer) 0:
#line 1067 "dead_proc_elim.m"
        {
#line 1067 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 1067 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 1067 "dead_proc_elim.m"
          MR_Integer transform_hlds__dead_proc_elim__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));

#line 1068 "dead_proc_elim.m"
          {
#line 1068 "dead_proc_elim.m"
            mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_40_40, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_6)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3);
          }
#line 1069 "dead_proc_elim.m"
          {
#line 1069 "dead_proc_elim.m"
            mercury__set_tree234__insert_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_40_40, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_6)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_0_4, transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_5);
          }
#line 1067 "dead_proc_elim.m"
        }
#line 1067 "dead_proc_elim.m"
        break;
#line 1067 "dead_proc_elim.m"
      case (MR_Integer) 1:
#line 1070 "dead_proc_elim.m"
        {
#line 1070 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_0_4;
#line 1070 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2;
#line 1070 "dead_proc_elim.m"
        }
#line 1067 "dead_proc_elim.m"
        break;
#line 1067 "dead_proc_elim.m"
      case (MR_Integer) 2:
#line 1071 "dead_proc_elim.m"
        {
#line 1071 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_0_4;
#line 1071 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2;
#line 1071 "dead_proc_elim.m"
        }
#line 1067 "dead_proc_elim.m"
        break;
#line 1067 "dead_proc_elim.m"
      case (MR_Integer) 3:
#line 1072 "dead_proc_elim.m"
        {
#line 1072 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_0_4;
#line 1072 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2;
#line 1072 "dead_proc_elim.m"
        }
#line 1067 "dead_proc_elim.m"
        break;
#line 1067 "dead_proc_elim.m"
    }
#line 1067 "dead_proc_elim.m"
  }
#line 1063 "dead_proc_elim.m"
}

#line 967 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_const_structs_4_p_0(
#line 967 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 967 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 967 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_0_3,
#line 967 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_4)
#line 967 "dead_proc_elim.m"
{
#line 970 "dead_proc_elim.m"
  while (MR_TRUE)
#line 970 "dead_proc_elim.m"
    {
#line 970 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 970 "dead_proc_elim.m"
      {
#line 970 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 970 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 970 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_0_3;
#line 970 "dead_proc_elim.m"
        else
#line 972 "dead_proc_elim.m"
          {
#line 972 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__ConstNum_9;
#line 972 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__ConstNumStructs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 972 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Entity_14;
#line 972 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 972 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_19_19;
#line 971 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_10_10;
#line 974 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_15_15;
#line 974 "dead_proc_elim.m"
            MR_Box transform_hlds__dead_proc_elim__conv0_V_15_15;

#line 971 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__ConstNum_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_18_18, (MR_Integer) 0)));
#line 971 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_18_18, (MR_Integer) 1)));
#line 973 "dead_proc_elim.m"
            {
#line 973 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__Entity_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 973 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Entity_14, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ConstNum_9));
#line 973 "dead_proc_elim.m"
            }
#line 974 "dead_proc_elim.m"
            {
#line 974 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, transform_hlds__dead_proc_elim__HeadVar__2_2, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_14)), &transform_hlds__dead_proc_elim__conv0_V_15_15);
            }
#line 974 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 974 "dead_proc_elim.m"
              {
#line 974 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__V_15_15 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_V_15_15);
#line 974 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 974 "dead_proc_elim.m"
              }
#line 976 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 976 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_19_19 = transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_0_3;
#line 976 "dead_proc_elim.m"
            else
#line 977 "dead_proc_elim.m"
              {
#line 977 "dead_proc_elim.m"
                hlds__const_struct__delete_const_struct_3_p_0(transform_hlds__dead_proc_elim__ConstNum_9, transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_0_3, &transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_19_19);
              }
#line 979 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 979 "dead_proc_elim.m"
            {
#line 979 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1 = transform_hlds__dead_proc_elim__ConstNumStructs_11;
#line 979 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_0__tmp_copy_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_19_19;

#line 979 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_0_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_0__tmp_copy_3;
#line 979 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1;
#line 979 "dead_proc_elim.m"
            }
#line 979 "dead_proc_elim.m"
            continue;
#line 972 "dead_proc_elim.m"
          }
#line 970 "dead_proc_elim.m"
      }
#line 970 "dead_proc_elim.m"
      break;
#line 970 "dead_proc_elim.m"
    }
#line 967 "dead_proc_elim.m"
}

#line 948 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_type_ctor_infos_3_p_0(
#line 948 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 948 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 948 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__3_3)
#line 948 "dead_proc_elim.m"
{
#line 951 "dead_proc_elim.m"
  {
#line 951 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 951 "dead_proc_elim.m"
    if ((transform_hlds__dead_proc_elim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 951 "dead_proc_elim.m"
      *transform_hlds__dead_proc_elim__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 951 "dead_proc_elim.m"
    else
#line 953 "dead_proc_elim.m"
      {
#line 953 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfo0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 953 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfos0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 953 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfos1_9;
#line 953 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__ModuleName_11;
#line 953 "dead_proc_elim.m"
        MR_String transform_hlds__dead_proc_elim__TypeName_12;
#line 953 "dead_proc_elim.m"
        MR_Integer transform_hlds__dead_proc_elim__Arity_13;
#line 956 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim___TypeCtor_10;
#line 956 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim___Status_14;
#line 956 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim___HldsDefn_15;
#line 956 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim___Unify_16;
#line 956 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim___Compare_17;
#line 959 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__Entity_18;
#line 960 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_19_19;
#line 960 "dead_proc_elim.m"
        MR_Box transform_hlds__dead_proc_elim__conv0_V_19_19;

#line 954 "dead_proc_elim.m"
        {
#line 954 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__dead_proc_eliminate_type_ctor_infos_3_p_0(transform_hlds__dead_proc_elim__TypeCtorGenInfos0_6, transform_hlds__dead_proc_elim__HeadVar__2_2, &transform_hlds__dead_proc_elim__TypeCtorGenInfos1_9);
        }
#line 956 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim___TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo0_5, (MR_Integer) 0)));
#line 956 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo0_5, (MR_Integer) 1)));
#line 956 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__TypeName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo0_5, (MR_Integer) 2)));
#line 956 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo0_5, (MR_Integer) 3)));
#line 956 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim___Status_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo0_5, (MR_Integer) 4)));
#line 956 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim___HldsDefn_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo0_5, (MR_Integer) 5)));
#line 956 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim___Unify_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo0_5, (MR_Integer) 6)));
#line 956 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim___Compare_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo0_5, (MR_Integer) 7)));
#line 959 "dead_proc_elim.m"
        {
#line 959 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__Entity_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 959 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_18, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ModuleName_11));
#line 959 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_18, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__TypeName_12));
#line 959 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_18, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__Arity_13));
#line 959 "dead_proc_elim.m"
        }
#line 960 "dead_proc_elim.m"
        {
#line 960 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, transform_hlds__dead_proc_elim__HeadVar__2_2, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_18)), &transform_hlds__dead_proc_elim__conv0_V_19_19);
        }
#line 960 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 960 "dead_proc_elim.m"
          {
#line 960 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__V_19_19 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_V_19_19);
#line 960 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 960 "dead_proc_elim.m"
          }
#line 963 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 962 "dead_proc_elim.m"
          {
#line 962 "dead_proc_elim.m"
            MR_Word base;
#line 962 "dead_proc_elim.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 962 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__HeadVar__3_3 = base;
#line 962 "dead_proc_elim.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__TypeCtorGenInfo0_5));
#line 962 "dead_proc_elim.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__TypeCtorGenInfos1_9));
#line 962 "dead_proc_elim.m"
          }
#line 963 "dead_proc_elim.m"
        else
#line 964 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__HeadVar__3_3 = transform_hlds__dead_proc_elim__TypeCtorGenInfos1_9;
#line 953 "dead_proc_elim.m"
      }
#line 951 "dead_proc_elim.m"
  }
#line 948 "dead_proc_elim.m"
}

#line 887 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_p_0(
#line 887 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__PredId_12,
#line 887 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Keep_13,
#line 887 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__WarnForThisPred_14,
#line 887 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ProcElimInfo_15,
#line 887 "dead_proc_elim.m"
  MR_Integer transform_hlds__dead_proc_elim__ProcId_16,
#line 887 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcTable_0_30,
#line 887 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcTable_31,
#line 887 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Changed_0_32,
#line 887 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Changed_33,
#line 887 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Specs_0_34,
#line 887 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Specs_35)
#line 887 "dead_proc_elim.m"
{
#line 892 "dead_proc_elim.m"
  {
#line 892 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 892 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Needed_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo_15, (MR_Integer) 0)));
#line 892 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ModuleInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo_15, (MR_Integer) 1)));
#line 893 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo_15, (MR_Integer) 2)));
#line 893 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo_15, (MR_Integer) 3)));
#line 893 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo_15, (MR_Integer) 4)));

#line 898 "dead_proc_elim.m"
    {
#line 898 "dead_proc_elim.m"
      MR_Word transform_hlds__dead_proc_elim__V_36_36;
#line 898 "dead_proc_elim.m"
      MR_Word transform_hlds__dead_proc_elim__V_22_22;
#line 898 "dead_proc_elim.m"
      MR_Box transform_hlds__dead_proc_elim__conv0_V_22_22;

#line 898 "dead_proc_elim.m"
      {
#line 898 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 898 "dead_proc_elim.m"
        MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_36_36, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_12));
#line 898 "dead_proc_elim.m"
        MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_36_36, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_16));
#line 898 "dead_proc_elim.m"
      }
#line 898 "dead_proc_elim.m"
      {
#line 898 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, transform_hlds__dead_proc_elim__Needed_20, ((MR_Box) (transform_hlds__dead_proc_elim__V_36_36)), &transform_hlds__dead_proc_elim__conv0_V_22_22);
      }
#line 898 "dead_proc_elim.m"
      if (transform_hlds__dead_proc_elim__succeeded)
#line 898 "dead_proc_elim.m"
        {
#line 898 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__V_22_22 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_V_22_22);
#line 898 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 898 "dead_proc_elim.m"
        }
#line 898 "dead_proc_elim.m"
    }
#line 899 "dead_proc_elim.m"
    if (!(transform_hlds__dead_proc_elim__succeeded))
#line 901 "dead_proc_elim.m"
      {
#line 901 "dead_proc_elim.m"
        MR_Integer transform_hlds__dead_proc_elim__V_56_56;

#line 901 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__succeeded = ((MR_tag((MR_Word) transform_hlds__dead_proc_elim__Keep_13)) == (MR_mktag((MR_Integer) 1)));
#line 901 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 901 "dead_proc_elim.m"
          {
#line 901 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__Keep_13, (MR_Integer) 0)));
#line 901 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__ProcId_16 == transform_hlds__dead_proc_elim__V_56_56);
#line 901 "dead_proc_elim.m"
          }
#line 901 "dead_proc_elim.m"
      }
#line 905 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 904 "dead_proc_elim.m"
      {
#line 904 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Specs_35 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Specs_0_34;
#line 904 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Changed_33 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Changed_0_32;
#line 904 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcTable_31 = transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcTable_0_30;
#line 904 "dead_proc_elim.m"
      }
#line 905 "dead_proc_elim.m"
    else
#line 906 "dead_proc_elim.m"
      {
#line 906 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_55_55;
#line 906 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__Globals_23;
#line 906 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__VeryVerbose_24;
#line 906 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__ProcInfo0_26;
#line 906 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__HasForeignExports_27;
#line 919 "dead_proc_elim.m"
        MR_Box transform_hlds__dead_proc_elim__conv1_ProcInfo0_26;

#line 906 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Changed_33 = (MR_Integer) 1;
#line 907 "dead_proc_elim.m"
        {
#line 907 "dead_proc_elim.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_21, &transform_hlds__dead_proc_elim__Globals_23);
        }
#line 908 "dead_proc_elim.m"
        {
#line 908 "dead_proc_elim.m"
          libs__globals__lookup_bool_option_3_p_0(transform_hlds__dead_proc_elim__Globals_23, (MR_Integer) 47, &transform_hlds__dead_proc_elim__VeryVerbose_24);
        }
#line 916 "dead_proc_elim.m"
#line 916 "dead_proc_elim.m"
        switch (transform_hlds__dead_proc_elim__VeryVerbose_24) {
#line 916 "dead_proc_elim.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 916 "dead_proc_elim.m"
          case (MR_Integer) 0:
#line 917 "dead_proc_elim.m"
            {
#line 917 "dead_proc_elim.m"
            }
#line 916 "dead_proc_elim.m"
            break;
#line 916 "dead_proc_elim.m"
          case (MR_Integer) 1:
#line 911 "dead_proc_elim.m"
            {
#line 912 "dead_proc_elim.m"
              {
#line 912 "dead_proc_elim.m"
                hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Eliminated the dead procedure ", transform_hlds__dead_proc_elim__PredId_12, transform_hlds__dead_proc_elim__ProcId_16, transform_hlds__dead_proc_elim__ModuleInfo_21);
              }
#line 911 "dead_proc_elim.m"
            }
#line 916 "dead_proc_elim.m"
            break;
#line 916 "dead_proc_elim.m"
        }
#line 6368 "transform_hlds.dead_proc_elim.c"
        transform_hlds__dead_proc_elim__TypeCtorInfo_55_55 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 919 "dead_proc_elim.m"
        {
#line 919 "dead_proc_elim.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_55_55, transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcTable_0_30, transform_hlds__dead_proc_elim__ProcId_16, &transform_hlds__dead_proc_elim__conv1_ProcInfo0_26);
        }
#line 919 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__ProcInfo0_26 = ((MR_Word) transform_hlds__dead_proc_elim__conv1_ProcInfo0_26);
#line 920 "dead_proc_elim.m"
        {
#line 920 "dead_proc_elim.m"
          hlds__hlds_pred__proc_info_get_has_any_foreign_exports_2_p_0(transform_hlds__dead_proc_elim__ProcInfo0_26, &transform_hlds__dead_proc_elim__HasForeignExports_27);
        }
#line 922 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__WarnForThisPred_14 == (MR_Integer) 1);
#line 922 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 923 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__HasForeignExports_27 == (MR_Integer) 0);
#line 928 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 925 "dead_proc_elim.m"
          {
#line 925 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_43_94;
#line 925 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Context_28;
#line 925 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Spec_29;
#line 925 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__ProcPieces_62;
#line 925 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Pieces_63;
#line 925 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Msg_64;
#line 925 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_67_67;
#line 925 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_72_72;
#line 925 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_79_79;
#line 925 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_80_80;
#line 925 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_83_83;
#line 925 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_84_84;
#line 925 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_92_92;

#line 925 "dead_proc_elim.m"
            {
#line 925 "dead_proc_elim.m"
              hlds__hlds_pred__proc_info_get_context_2_p_0(transform_hlds__dead_proc_elim__ProcInfo0_26, &transform_hlds__dead_proc_elim__Context_28);
            }
#line 939 "dead_proc_elim.m"
            {
#line 939 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 939 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_67_67, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_12));
#line 939 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_67_67, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_16));
#line 939 "dead_proc_elim.m"
            }
#line 938 "dead_proc_elim.m"
            {
#line 938 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__ProcPieces_62 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__dead_proc_elim__ModuleInfo_21, (MR_Integer) 1, transform_hlds__dead_proc_elim__V_67_67);
            }
#line 6439 "transform_hlds.dead_proc_elim.c"
            transform_hlds__dead_proc_elim__TypeCtorInfo_43_94 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 940 "dead_proc_elim.m"
            {
#line 940 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__V_72_72 = mercury__list__f_43_43_2_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_43_94, transform_hlds__dead_proc_elim__ProcPieces_62, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_1[10]));
            }
#line 940 "dead_proc_elim.m"
            {
#line 940 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__Pieces_63 = mercury__list__f_43_43_2_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_43_94, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_1[12]), transform_hlds__dead_proc_elim__V_72_72);
            }
#line 943 "dead_proc_elim.m"
            {
#line 943 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 943 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_84_84, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Pieces_63));
#line 943 "dead_proc_elim.m"
            }
#line 943 "dead_proc_elim.m"
            {
#line 943 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 943 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_83_83, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__V_84_84));
#line 943 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 943 "dead_proc_elim.m"
            }
#line 943 "dead_proc_elim.m"
            {
#line 943 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 943 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_80_80, 0) = ((MR_Box) (((MR_Integer) 30 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 943 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_80_80, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__V_83_83));
#line 943 "dead_proc_elim.m"
            }
#line 943 "dead_proc_elim.m"
            {
#line 943 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 943 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_79_79, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__V_80_80));
#line 943 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 943 "dead_proc_elim.m"
            }
#line 942 "dead_proc_elim.m"
            {
#line 942 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__Msg_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 942 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Msg_64, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Context_28));
#line 942 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Msg_64, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__V_79_79));
#line 942 "dead_proc_elim.m"
            }
#line 946 "dead_proc_elim.m"
            {
#line 946 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 946 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_92_92, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Msg_64));
#line 946 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 946 "dead_proc_elim.m"
            }
#line 946 "dead_proc_elim.m"
            {
#line 946 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__Spec_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 946 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Spec_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_3[0])));
#line 946 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Spec_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 946 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Spec_29, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__V_92_92));
#line 946 "dead_proc_elim.m"
            }
#line 927 "dead_proc_elim.m"
            {
#line 927 "dead_proc_elim.m"
              MR_Word base;
#line 927 "dead_proc_elim.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 927 "dead_proc_elim.m"
              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Specs_35 = base;
#line 927 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Spec_29));
#line 927 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Specs_0_34));
#line 927 "dead_proc_elim.m"
            }
#line 925 "dead_proc_elim.m"
          }
#line 928 "dead_proc_elim.m"
        else
#line 928 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Specs_35 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Specs_0_34;
#line 931 "dead_proc_elim.m"
        {
#line 931 "dead_proc_elim.m"
          mercury__map__delete_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__dead_proc_elim__TypeCtorInfo_55_55, ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_16)), transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcTable_0_30, transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcTable_31);
        }
#line 906 "dead_proc_elim.m"
      }
#line 892 "dead_proc_elim.m"
  }
#line 887 "dead_proc_elim.m"
}

#line 853 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0_2(
#line 853 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 853 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 853 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 853 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 853 "dead_proc_elim.m"
{
#line 853 "dead_proc_elim.m"
  {
#line 853 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 853 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv7_LambdaHeadVar__3_48;

#line 853 "dead_proc_elim.m"
    {
#line 853 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_proc_eliminate_pred__853__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv7_LambdaHeadVar__3_48);
    }
#line 853 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv7_LambdaHeadVar__3_48));
#line 853 "dead_proc_elim.m"
  }
#line 853 "dead_proc_elim.m"
}

#line 832 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0_1(
#line 832 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 832 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 832 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 832 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 832 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 832 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5,
#line 832 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_6,
#line 832 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_7)
#line 832 "dead_proc_elim.m"
{
#line 832 "dead_proc_elim.m"
  {
#line 832 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 832 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_ProcTable_31;
#line 832 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Changed_33;
#line 832 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Specs_35;

#line 832 "dead_proc_elim.m"
    {
#line 832 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__closure, (MR_Integer) 6))), ((MR_Integer) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_ProcTable_31, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_4), &transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Changed_33, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_6), &transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Specs_35);
    }
#line 832 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_ProcTable_31));
#line 832 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_5 = ((MR_Box) (transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Changed_33));
#line 832 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_7 = ((MR_Box) (transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Specs_35));
#line 832 "dead_proc_elim.m"
  }
#line 832 "dead_proc_elim.m"
}

#line 783 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0(
#line 783 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ElimOptImported_5,
#line 783 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__PredId_6,
#line 783 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_0_36,
#line 783 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_37)
#line 783 "dead_proc_elim.m"
{
#line 786 "dead_proc_elim.m"
  {
#line 786 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 786 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 786 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_74_74 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 786 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Needed_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_0_36, (MR_Integer) 0)));
#line 786 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ModuleInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_0_36, (MR_Integer) 1)));
#line 786 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredTable0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_0_36, (MR_Integer) 2)));
#line 786 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Changed0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_0_36, (MR_Integer) 3)));
#line 786 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Specs0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_0_36, (MR_Integer) 4)));
#line 786 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredInfo0_13;
#line 786 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredStatus_14;
#line 789 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv0_PredInfo0_13;
#line 839 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Keep_15;
#line 839 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__WarnForThisPred_16;
#line 819 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_90_90;

#line 789 "dead_proc_elim.m"
    {
#line 789 "dead_proc_elim.m"
      mercury__map__lookup_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_73_73, transform_hlds__dead_proc_elim__TypeCtorInfo_74_74, transform_hlds__dead_proc_elim__PredTable0_10, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_6)), &transform_hlds__dead_proc_elim__conv0_PredInfo0_13);
    }
#line 789 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__PredInfo0_13 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_PredInfo0_13);
#line 790 "dead_proc_elim.m"
    {
#line 790 "dead_proc_elim.m"
      hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__dead_proc_elim__PredInfo0_13, &transform_hlds__dead_proc_elim__PredStatus_14);
    }
#line 795 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__V_90_90 = (MR_Word) transform_hlds__dead_proc_elim__PredStatus_14;
#line 819 "dead_proc_elim.m"
#line 819 "dead_proc_elim.m"
    switch (MR_tag((MR_Word) transform_hlds__dead_proc_elim__V_90_90)) {
#line 819 "dead_proc_elim.m"
      default:
#line 819 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__succeeded = MR_FALSE;
#line 819 "dead_proc_elim.m"
        break;
#line 819 "dead_proc_elim.m"
      case (MR_Integer) 0:
#line 819 "dead_proc_elim.m"
#line 819 "dead_proc_elim.m"
        switch (MR_unmkbody(transform_hlds__dead_proc_elim__V_90_90)) {
#line 819 "dead_proc_elim.m"
          default:
#line 819 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__succeeded = MR_FALSE;
#line 819 "dead_proc_elim.m"
            break;
#line 819 "dead_proc_elim.m"
          case (MR_Integer) 2:
#line 820 "dead_proc_elim.m"
            {
#line 821 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__Keep_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 822 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__WarnForThisPred_16 = (MR_Integer) 0;
#line 820 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 820 "dead_proc_elim.m"
            }
#line 819 "dead_proc_elim.m"
            break;
#line 819 "dead_proc_elim.m"
          case (MR_Integer) 6:
#line 824 "dead_proc_elim.m"
            {
#line 824 "dead_proc_elim.m"
              MR_Integer transform_hlds__dead_proc_elim__InitProcId_18;

#line 825 "dead_proc_elim.m"
              {
#line 825 "dead_proc_elim.m"
                hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&transform_hlds__dead_proc_elim__InitProcId_18);
              }
#line 826 "dead_proc_elim.m"
              {
#line 826 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__Keep_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 826 "dead_proc_elim.m"
                MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__Keep_15, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__InitProcId_18));
#line 826 "dead_proc_elim.m"
              }
#line 827 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__WarnForThisPred_16 = (MR_Integer) 0;
#line 824 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 824 "dead_proc_elim.m"
            }
#line 819 "dead_proc_elim.m"
            break;
#line 819 "dead_proc_elim.m"
          case (MR_Integer) 8:
#line 795 "dead_proc_elim.m"
            {
#line 796 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__Keep_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 800 "dead_proc_elim.m"
              {
#line 800 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__dead_proc_elim__PredInfo0_13);
              }
#line 803 "dead_proc_elim.m"
              if (transform_hlds__dead_proc_elim__succeeded)
#line 802 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__WarnForThisPred_16 = (MR_Integer) 0;
#line 803 "dead_proc_elim.m"
              else
#line 816 "dead_proc_elim.m"
                {
#line 810 "dead_proc_elim.m"
                  MR_String transform_hlds__dead_proc_elim__PredName_17;

#line 810 "dead_proc_elim.m"
                  {
#line 810 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__PredName_17 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__dead_proc_elim__PredInfo0_13);
                  }
#line 811 "dead_proc_elim.m"
                  {
#line 811 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__succeeded = mercury__string__prefix_2_p_0(transform_hlds__dead_proc_elim__PredName_17, (MR_String) "IntroducedFrom__");
                  }
#line 812 "dead_proc_elim.m"
                  if (!(transform_hlds__dead_proc_elim__succeeded))
#line 812 "dead_proc_elim.m"
                    {
#line 812 "dead_proc_elim.m"
                      {
#line 812 "dead_proc_elim.m"
                        transform_hlds__dead_proc_elim__succeeded = mercury__string__prefix_2_p_0(transform_hlds__dead_proc_elim__PredName_17, (MR_String) "TypeSpecOf__");
                      }
#line 812 "dead_proc_elim.m"
                    }
#line 816 "dead_proc_elim.m"
                  if (transform_hlds__dead_proc_elim__succeeded)
#line 815 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__WarnForThisPred_16 = (MR_Integer) 0;
#line 816 "dead_proc_elim.m"
                  else
#line 817 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__WarnForThisPred_16 = (MR_Integer) 1;
#line 816 "dead_proc_elim.m"
                }
#line 795 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 795 "dead_proc_elim.m"
            }
#line 819 "dead_proc_elim.m"
            break;
#line 819 "dead_proc_elim.m"
        }
#line 819 "dead_proc_elim.m"
        break;
#line 819 "dead_proc_elim.m"
    }
#line 839 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 830 "dead_proc_elim.m"
      {
#line 830 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__ProcIds_19;
#line 830 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__ProcTable0_20;
#line 830 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__ProcTable_21;
#line 830 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__Changed_22;
#line 830 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__Specs_23;
#line 830 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__PredInfo_24;
#line 830 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__PredTable_25;
#line 830 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_43_43;
#line 832 "dead_proc_elim.m"
        MR_Box transform_hlds__dead_proc_elim__conv6_ProcTable_21;
#line 832 "dead_proc_elim.m"
        MR_Box transform_hlds__dead_proc_elim__conv5_Changed_22;
#line 832 "dead_proc_elim.m"
        MR_Box transform_hlds__dead_proc_elim__conv4_Specs_23;

#line 830 "dead_proc_elim.m"
        {
#line 830 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__ProcIds_19 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__dead_proc_elim__PredInfo0_13);
        }
#line 831 "dead_proc_elim.m"
        {
#line 831 "dead_proc_elim.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__dead_proc_elim__PredInfo0_13, &transform_hlds__dead_proc_elim__ProcTable0_20);
        }
#line 832 "dead_proc_elim.m"
        {
#line 832 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 832 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_43_43, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_9[0]));
#line 832 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_43_43, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0_1));
#line 832 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 832 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_43_43, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_6));
#line 832 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_43_43, 4) = ((MR_Box) (transform_hlds__dead_proc_elim__Keep_15));
#line 832 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_43_43, 5) = ((MR_Box) (transform_hlds__dead_proc_elim__WarnForThisPred_16));
#line 832 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_43_43, 6) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_0_36));
#line 832 "dead_proc_elim.m"
        }
#line 832 "dead_proc_elim.m"
        {
#line 832 "dead_proc_elim.m"
          mercury__list__foldl3_8_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[1], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[5], transform_hlds__dead_proc_elim__V_43_43, transform_hlds__dead_proc_elim__ProcIds_19, ((MR_Box) (transform_hlds__dead_proc_elim__ProcTable0_20)), &transform_hlds__dead_proc_elim__conv6_ProcTable_21, ((MR_Box) (transform_hlds__dead_proc_elim__Changed0_11)), &transform_hlds__dead_proc_elim__conv5_Changed_22, ((MR_Box) (transform_hlds__dead_proc_elim__Specs0_12)), &transform_hlds__dead_proc_elim__conv4_Specs_23);
        }
#line 832 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__ProcTable_21 = ((MR_Word) transform_hlds__dead_proc_elim__conv6_ProcTable_21);
#line 832 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__Changed_22 = ((MR_Word) transform_hlds__dead_proc_elim__conv5_Changed_22);
#line 832 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__Specs_23 = ((MR_Word) transform_hlds__dead_proc_elim__conv4_Specs_23);
#line 835 "dead_proc_elim.m"
        {
#line 835 "dead_proc_elim.m"
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__dead_proc_elim__ProcTable_21, transform_hlds__dead_proc_elim__PredInfo0_13, &transform_hlds__dead_proc_elim__PredInfo_24);
        }
#line 836 "dead_proc_elim.m"
        {
#line 836 "dead_proc_elim.m"
          mercury__map__det_update_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_73_73, transform_hlds__dead_proc_elim__TypeCtorInfo_74_74, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_6)), ((MR_Box) (transform_hlds__dead_proc_elim__PredInfo_24)), transform_hlds__dead_proc_elim__PredTable0_10, &transform_hlds__dead_proc_elim__PredTable_25);
        }
#line 837 "dead_proc_elim.m"
        {
#line 837 "dead_proc_elim.m"
          MR_Word base;
#line 837 "dead_proc_elim.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 837 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_37 = base;
#line 837 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Needed_8));
#line 837 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ModuleInfo_9));
#line 837 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__PredTable_25));
#line 837 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__Changed_22));
#line 837 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__dead_proc_elim__Specs_23));
#line 837 "dead_proc_elim.m"
        }
#line 830 "dead_proc_elim.m"
      }
#line 839 "dead_proc_elim.m"
    else
#line 880 "dead_proc_elim.m"
      {
#line 845 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_45_45;

#line 845 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__ElimOptImported_5 == (MR_Integer) 0);
#line 845 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 845 "dead_proc_elim.m"
          {
#line 846 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__V_45_45 = (MR_Word) transform_hlds__dead_proc_elim__PredStatus_14;
#line 846 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 845 "dead_proc_elim.m"
          }
#line 880 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 848 "dead_proc_elim.m"
          {
#line 848 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__DestroyGoal_26;
#line 848 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PredInfo1_32;
#line 848 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Globals_33;
#line 848 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__VeryVerbose_34;
#line 848 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__ProcIds_61;
#line 848 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__ProcTable0_62;
#line 848 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__ProcTable_63;
#line 848 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PredInfo_65;
#line 848 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PredTable_66;
#line 859 "dead_proc_elim.m"
            MR_Box transform_hlds__dead_proc_elim__conv8_ProcTable_63;

#line 849 "dead_proc_elim.m"
            {
#line 849 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__ProcIds_61 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__dead_proc_elim__PredInfo0_13);
            }
#line 850 "dead_proc_elim.m"
            {
#line 850 "dead_proc_elim.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__dead_proc_elim__PredInfo0_13, &transform_hlds__dead_proc_elim__ProcTable0_62);
            }
#line 853 "dead_proc_elim.m"
            {
#line 853 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__DestroyGoal_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 853 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DestroyGoal_26, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_6[2]));
#line 853 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DestroyGoal_26, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0_2));
#line 853 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DestroyGoal_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 853 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DestroyGoal_26, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcTable0_62));
#line 853 "dead_proc_elim.m"
            }
#line 859 "dead_proc_elim.m"
            {
#line 859 "dead_proc_elim.m"
              mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[1], transform_hlds__dead_proc_elim__DestroyGoal_26, transform_hlds__dead_proc_elim__ProcIds_61, ((MR_Box) (transform_hlds__dead_proc_elim__ProcTable0_62)), &transform_hlds__dead_proc_elim__conv8_ProcTable_63);
            }
#line 859 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__ProcTable_63 = ((MR_Word) transform_hlds__dead_proc_elim__conv8_ProcTable_63);
#line 860 "dead_proc_elim.m"
            {
#line 860 "dead_proc_elim.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__dead_proc_elim__ProcTable_63, transform_hlds__dead_proc_elim__PredInfo0_13, &transform_hlds__dead_proc_elim__PredInfo1_32);
            }
#line 861 "dead_proc_elim.m"
            {
#line 861 "dead_proc_elim.m"
              hlds__hlds_pred__pred_info_set_status_3_p_0((MR_Word) ((MR_Box) (MR_mkword(MR_mktag(2), &transform_hlds__dead_proc_elim_scalar_common_8[1]))), transform_hlds__dead_proc_elim__PredInfo1_32, &transform_hlds__dead_proc_elim__PredInfo_65);
            }
#line 864 "dead_proc_elim.m"
            {
#line 864 "dead_proc_elim.m"
              mercury__map__det_update_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_73_73, transform_hlds__dead_proc_elim__TypeCtorInfo_74_74, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_6)), ((MR_Box) (transform_hlds__dead_proc_elim__PredInfo_65)), transform_hlds__dead_proc_elim__PredTable0_10, &transform_hlds__dead_proc_elim__PredTable_66);
            }
#line 866 "dead_proc_elim.m"
            {
#line 866 "dead_proc_elim.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_9, &transform_hlds__dead_proc_elim__Globals_33);
            }
#line 867 "dead_proc_elim.m"
            {
#line 867 "dead_proc_elim.m"
              libs__globals__lookup_bool_option_3_p_0(transform_hlds__dead_proc_elim__Globals_33, (MR_Integer) 47, &transform_hlds__dead_proc_elim__VeryVerbose_34);
            }
#line 875 "dead_proc_elim.m"
#line 875 "dead_proc_elim.m"
            switch (transform_hlds__dead_proc_elim__VeryVerbose_34) {
#line 875 "dead_proc_elim.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 875 "dead_proc_elim.m"
              case (MR_Integer) 0:
#line 876 "dead_proc_elim.m"
                {
#line 876 "dead_proc_elim.m"
                }
#line 875 "dead_proc_elim.m"
                break;
#line 875 "dead_proc_elim.m"
              case (MR_Integer) 1:
#line 869 "dead_proc_elim.m"
                {
#line 871 "dead_proc_elim.m"
                  {
#line 871 "dead_proc_elim.m"
                    hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Eliminated opt_imported predicate ", transform_hlds__dead_proc_elim__PredId_6, transform_hlds__dead_proc_elim__ModuleInfo_9);
                  }
#line 869 "dead_proc_elim.m"
                }
#line 875 "dead_proc_elim.m"
                break;
#line 875 "dead_proc_elim.m"
            }
#line 878 "dead_proc_elim.m"
            {
#line 878 "dead_proc_elim.m"
              MR_Word base;
#line 878 "dead_proc_elim.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 878 "dead_proc_elim.m"
              *transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_37 = base;
#line 878 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Needed_8));
#line 878 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ModuleInfo_9));
#line 878 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__PredTable_66));
#line 878 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 1));
#line 878 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__dead_proc_elim__Specs0_12));
#line 878 "dead_proc_elim.m"
            }
#line 848 "dead_proc_elim.m"
          }
#line 880 "dead_proc_elim.m"
        else
#line 880 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_37 = transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_0_36;
#line 880 "dead_proc_elim.m"
      }
#line 786 "dead_proc_elim.m"
  }
#line 783 "dead_proc_elim.m"
}

#line 750 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_5_p_0_1(
#line 750 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 750 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 750 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 750 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 750 "dead_proc_elim.m"
{
#line 750 "dead_proc_elim.m"
  {
#line 750 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 750 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_ProcElimInfo_37;

#line 750 "dead_proc_elim.m"
    {
#line 750 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_ProcElimInfo_37);
    }
#line 750 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_ProcElimInfo_37));
#line 750 "dead_proc_elim.m"
  }
#line 750 "dead_proc_elim.m"
}

#line 741 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_5_p_0(
#line 741 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ElimOptImported_6,
#line 741 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_22,
#line 741 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_23,
#line 741 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_24,
#line 741 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__Specs_9)
#line 741 "dead_proc_elim.m"
{
#line 744 "dead_proc_elim.m"
  {
#line 744 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 744 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredIds_10;
#line 744 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredTable0_11;
#line 744 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ProcElimInfo0_13;
#line 744 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ProcElimInfo_14;
#line 744 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredTable_15;
#line 744 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Changed_16;
#line 744 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfos0_17;
#line 744 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfos_18;
#line 744 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ConstStructDb0_19;
#line 744 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ConstNumStructs0_20;
#line 744 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ConstStructDb_21;
#line 744 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_26_26;
#line 744 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_27;
#line 744 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_28_28;
#line 744 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_29_29;
#line 744 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_30_30;
#line 744 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_31_31;
#line 750 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv1_ProcElimInfo_14;

#line 745 "dead_proc_elim.m"
    {
#line 745 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_23, &transform_hlds__dead_proc_elim__PredIds_10);
    }
#line 746 "dead_proc_elim.m"
    {
#line 746 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_23, &transform_hlds__dead_proc_elim__PredTable0_11);
    }
#line 748 "dead_proc_elim.m"
    {
#line 748 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__ProcElimInfo0_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 748 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo0_13, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_22));
#line 748 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo0_13, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_23));
#line 748 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo0_13, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__PredTable0_11));
#line 748 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo0_13, 3) = ((MR_Box) ((MR_Integer) 0));
#line 748 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo0_13, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 748 "dead_proc_elim.m"
    }
#line 750 "dead_proc_elim.m"
    {
#line 750 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 750 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_26_26, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_6[1]));
#line 750 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_26_26, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__dead_proc_eliminate_5_p_0_1));
#line 750 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 750 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_26_26, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__ElimOptImported_6));
#line 750 "dead_proc_elim.m"
    }
#line 750 "dead_proc_elim.m"
    {
#line 750 "dead_proc_elim.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_proc_elim_info_0, transform_hlds__dead_proc_elim__V_26_26, transform_hlds__dead_proc_elim__PredIds_10, ((MR_Box) (transform_hlds__dead_proc_elim__ProcElimInfo0_13)), &transform_hlds__dead_proc_elim__conv1_ProcElimInfo_14);
    }
#line 750 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__ProcElimInfo_14 = ((MR_Word) transform_hlds__dead_proc_elim__conv1_ProcElimInfo_14);
#line 752 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo_14, (MR_Integer) 0)));
#line 752 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo_14, (MR_Integer) 1)));
#line 752 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__PredTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo_14, (MR_Integer) 2)));
#line 752 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__Changed_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo_14, (MR_Integer) 3)));
#line 752 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__Specs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo_14, (MR_Integer) 4)));
#line 754 "dead_proc_elim.m"
    {
#line 754 "dead_proc_elim.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__dead_proc_elim__PredTable_15, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_28_28, &transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_29_29);
    }
#line 756 "dead_proc_elim.m"
    {
#line 756 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_type_ctor_gen_infos_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_29_29, &transform_hlds__dead_proc_elim__TypeCtorGenInfos0_17);
    }
#line 757 "dead_proc_elim.m"
    {
#line 757 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_eliminate_type_ctor_infos_3_p_0(transform_hlds__dead_proc_elim__TypeCtorGenInfos0_17, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_27, &transform_hlds__dead_proc_elim__TypeCtorGenInfos_18);
    }
#line 759 "dead_proc_elim.m"
    {
#line 759 "dead_proc_elim.m"
      hlds__hlds_module__module_info_set_type_ctor_gen_infos_3_p_0(transform_hlds__dead_proc_elim__TypeCtorGenInfos_18, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_29_29, &transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_30_30);
    }
#line 766 "dead_proc_elim.m"
    {
#line 766 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_const_struct_db_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_30_30, &transform_hlds__dead_proc_elim__ConstStructDb0_19);
    }
#line 767 "dead_proc_elim.m"
    {
#line 767 "dead_proc_elim.m"
      hlds__const_struct__const_struct_db_get_structs_2_p_0(transform_hlds__dead_proc_elim__ConstStructDb0_19, &transform_hlds__dead_proc_elim__ConstNumStructs0_20);
    }
#line 768 "dead_proc_elim.m"
    {
#line 768 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_eliminate_const_structs_4_p_0(transform_hlds__dead_proc_elim__ConstNumStructs0_20, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_27, transform_hlds__dead_proc_elim__ConstStructDb0_19, &transform_hlds__dead_proc_elim__ConstStructDb_21);
    }
#line 770 "dead_proc_elim.m"
    {
#line 770 "dead_proc_elim.m"
      hlds__hlds_module__module_info_set_const_struct_db_3_p_0(transform_hlds__dead_proc_elim__ConstStructDb_21, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_30_30, &transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_31_31);
    }
#line 777 "dead_proc_elim.m"
#line 777 "dead_proc_elim.m"
    switch (transform_hlds__dead_proc_elim__Changed_16) {
#line 777 "dead_proc_elim.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 777 "dead_proc_elim.m"
      case (MR_Integer) 0:
#line 778 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_24 = transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_31_31;
#line 777 "dead_proc_elim.m"
        break;
#line 777 "dead_proc_elim.m"
      case (MR_Integer) 1:
#line 776 "dead_proc_elim.m"
        {
#line 776 "dead_proc_elim.m"
          hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_31_31, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_24);
        }
#line 777 "dead_proc_elim.m"
        break;
#line 777 "dead_proc_elim.m"
    }
#line 744 "dead_proc_elim.m"
  }
#line 741 "dead_proc_elim.m"
}

#line 540 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_p_0(
#line 540 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Goal_7,
#line 540 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__CurrProc_8,
#line 540 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96,
#line 540 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97,
#line 540 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98,
#line 540 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99)
#line 540 "dead_proc_elim.m"
{
#line 544 "dead_proc_elim.m"
  while (MR_TRUE)
#line 544 "dead_proc_elim.m"
    {
#line 544 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 544 "dead_proc_elim.m"
      {
#line 544 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 544 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Goal_7, (MR_Integer) 0)));
#line 545 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Goal_7, (MR_Integer) 1)));

#line 551 "dead_proc_elim.m"
#line 551 "dead_proc_elim.m"
        switch (MR_tag((MR_Word) transform_hlds__dead_proc_elim__GoalExpr_11)) {
#line 551 "dead_proc_elim.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 551 "dead_proc_elim.m"
          case (MR_Integer) 0:
#line 555 "dead_proc_elim.m"
            {
#line 555 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__SubGoal_18 = (MR_Word) MR_body(((MR_Word) transform_hlds__dead_proc_elim__GoalExpr_11), (MR_Integer) 0);

#line 556 "dead_proc_elim.m"
              /* direct tailcall eliminated */
#line 556 "dead_proc_elim.m"
              {
#line 556 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__Goal__tmp_copy_7 = transform_hlds__dead_proc_elim__SubGoal_18;

#line 556 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__Goal_7 = transform_hlds__dead_proc_elim__Goal__tmp_copy_7;
#line 556 "dead_proc_elim.m"
              }
#line 556 "dead_proc_elim.m"
              continue;
#line 555 "dead_proc_elim.m"
            }
#line 551 "dead_proc_elim.m"
            break;
#line 551 "dead_proc_elim.m"
          case (MR_Integer) 1:
#line 640 "dead_proc_elim.m"
            {
#line 640 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__Unification_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 3)));
#line 640 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim___LHS_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 0)));
#line 640 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim___RHS_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 1)));
#line 640 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim___UniModes_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 2)));
#line 640 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim___UnifyContext_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 4)));

#line 698 "dead_proc_elim.m"
#line 698 "dead_proc_elim.m"
              switch (MR_tag((MR_Word) transform_hlds__dead_proc_elim__Unification_50)) {
#line 698 "dead_proc_elim.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 698 "dead_proc_elim.m"
                case (MR_Integer) 0:
#line 642 "dead_proc_elim.m"
                  {
#line 642 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__ConsId_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Unification_50, (MR_Integer) 1)));
#line 642 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Unification_50, (MR_Integer) 0)));
#line 642 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Unification_50, (MR_Integer) 2)));
#line 642 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Unification_50, (MR_Integer) 3)));
#line 642 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Unification_50, (MR_Integer) 4)));
#line 642 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Unification_50, (MR_Integer) 5)));
#line 642 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Unification_50, (MR_Integer) 6)));

#line 674 "dead_proc_elim.m"
#line 674 "dead_proc_elim.m"
                    switch (MR_tag((MR_Word) transform_hlds__dead_proc_elim__ConsId_53)) {
#line 674 "dead_proc_elim.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 674 "dead_proc_elim.m"
                      case (MR_Integer) 0:
#line 692 "dead_proc_elim.m"
                        {
#line 692 "dead_proc_elim.m"
                          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 692 "dead_proc_elim.m"
                          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 692 "dead_proc_elim.m"
                        }
#line 674 "dead_proc_elim.m"
                        break;
#line 674 "dead_proc_elim.m"
                      case (MR_Integer) 1:
#line 691 "dead_proc_elim.m"
                        {
#line 691 "dead_proc_elim.m"
                          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 691 "dead_proc_elim.m"
                          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 691 "dead_proc_elim.m"
                        }
#line 674 "dead_proc_elim.m"
                        break;
#line 674 "dead_proc_elim.m"
                      case (MR_Integer) 2:
#line 671 "dead_proc_elim.m"
                        {
#line 671 "dead_proc_elim.m"
                          MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_245_254;
#line 671 "dead_proc_elim.m"
                          MR_Word transform_hlds__dead_proc_elim__V_109_109;
#line 671 "dead_proc_elim.m"
                          MR_Word transform_hlds__dead_proc_elim__PredId_217;
#line 671 "dead_proc_elim.m"
                          MR_Integer transform_hlds__dead_proc_elim__ProcId_218;
#line 671 "dead_proc_elim.m"
                          MR_Word transform_hlds__dead_proc_elim__ShroudedPredProcId_219 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 0)));
#line 671 "dead_proc_elim.m"
                          MR_Word transform_hlds__dead_proc_elim__Entity_253;

#line 662 "dead_proc_elim.m"
                          {
#line 662 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__V_109_109 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(transform_hlds__dead_proc_elim__ShroudedPredProcId_219);
                          }
#line 661 "dead_proc_elim.m"
                          transform_hlds__dead_proc_elim__PredId_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_109_109, (MR_Integer) 0)));
#line 661 "dead_proc_elim.m"
                          transform_hlds__dead_proc_elim__ProcId_218 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_109_109, (MR_Integer) 1)));
#line 663 "dead_proc_elim.m"
                          {
#line 663 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__Entity_253 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 663 "dead_proc_elim.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__Entity_253, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_217));
#line 663 "dead_proc_elim.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__Entity_253, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_218));
#line 663 "dead_proc_elim.m"
                          }
#line 7456 "transform_hlds.dead_proc_elim.c"
                          transform_hlds__dead_proc_elim__TypeCtorInfo_245_254 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 672 "dead_proc_elim.m"
                          {
#line 672 "dead_proc_elim.m"
                            mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_245_254, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_253)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97);
                          }
#line 673 "dead_proc_elim.m"
                          {
#line 673 "dead_proc_elim.m"
                            mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_245_254, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_253)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
                          }
#line 671 "dead_proc_elim.m"
                        }
#line 674 "dead_proc_elim.m"
                        break;
#line 674 "dead_proc_elim.m"
                      case (MR_Integer) 3:
#line 674 "dead_proc_elim.m"
#line 674 "dead_proc_elim.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 0)))) {
#line 674 "dead_proc_elim.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 674 "dead_proc_elim.m"
                          case (MR_Integer) 0:
#line 694 "dead_proc_elim.m"
                            {
#line 694 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 694 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 694 "dead_proc_elim.m"
                            }
#line 674 "dead_proc_elim.m"
                            break;
#line 674 "dead_proc_elim.m"
                          case (MR_Integer) 1:
#line 693 "dead_proc_elim.m"
                            {
#line 693 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 693 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 693 "dead_proc_elim.m"
                            }
#line 674 "dead_proc_elim.m"
                            break;
#line 674 "dead_proc_elim.m"
                          case (MR_Integer) 2:
#line 683 "dead_proc_elim.m"
                            {
#line 683 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 683 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 683 "dead_proc_elim.m"
                            }
#line 674 "dead_proc_elim.m"
                            break;
#line 674 "dead_proc_elim.m"
                          case (MR_Integer) 3:
#line 684 "dead_proc_elim.m"
                            {
#line 684 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 684 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 684 "dead_proc_elim.m"
                            }
#line 674 "dead_proc_elim.m"
                            break;
#line 674 "dead_proc_elim.m"
                          case (MR_Integer) 4:
#line 671 "dead_proc_elim.m"
                            {
#line 671 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_245_245;
#line 671 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__ShroudedPredProcId_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 1)));
#line 671 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__V_120_120;
#line 671 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__PredId_215;
#line 671 "dead_proc_elim.m"
                              MR_Integer transform_hlds__dead_proc_elim__ProcId_216;
#line 671 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__Entity_224;

#line 647 "dead_proc_elim.m"
                              {
#line 647 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__V_120_120 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(transform_hlds__dead_proc_elim__ShroudedPredProcId_59);
                              }
#line 646 "dead_proc_elim.m"
                              transform_hlds__dead_proc_elim__PredId_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_120_120, (MR_Integer) 0)));
#line 646 "dead_proc_elim.m"
                              transform_hlds__dead_proc_elim__ProcId_216 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_120_120, (MR_Integer) 1)));
#line 648 "dead_proc_elim.m"
                              {
#line 648 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__Entity_224 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 648 "dead_proc_elim.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_224, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_215));
#line 648 "dead_proc_elim.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_224, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_216));
#line 648 "dead_proc_elim.m"
                              }
#line 7563 "transform_hlds.dead_proc_elim.c"
                              transform_hlds__dead_proc_elim__TypeCtorInfo_245_245 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 672 "dead_proc_elim.m"
                              {
#line 672 "dead_proc_elim.m"
                                mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_245_245, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_224)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97);
                              }
#line 673 "dead_proc_elim.m"
                              {
#line 673 "dead_proc_elim.m"
                                mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_245_245, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_224)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
                              }
#line 671 "dead_proc_elim.m"
                            }
#line 674 "dead_proc_elim.m"
                            break;
#line 674 "dead_proc_elim.m"
                          case (MR_Integer) 5:
#line 685 "dead_proc_elim.m"
                            {
#line 685 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 685 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 685 "dead_proc_elim.m"
                            }
#line 674 "dead_proc_elim.m"
                            break;
#line 674 "dead_proc_elim.m"
                          case (MR_Integer) 6:
#line 686 "dead_proc_elim.m"
                            {
#line 686 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 686 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 686 "dead_proc_elim.m"
                            }
#line 674 "dead_proc_elim.m"
                            break;
#line 674 "dead_proc_elim.m"
                          case (MR_Integer) 7:
#line 687 "dead_proc_elim.m"
                            {
#line 687 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 687 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 687 "dead_proc_elim.m"
                            }
#line 674 "dead_proc_elim.m"
                            break;
#line 674 "dead_proc_elim.m"
                          case (MR_Integer) 8:
#line 688 "dead_proc_elim.m"
                            {
#line 688 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 688 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 688 "dead_proc_elim.m"
                            }
#line 674 "dead_proc_elim.m"
                            break;
#line 674 "dead_proc_elim.m"
                          case (MR_Integer) 9:
#line 689 "dead_proc_elim.m"
                            {
#line 689 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 689 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 689 "dead_proc_elim.m"
                            }
#line 674 "dead_proc_elim.m"
                            break;
#line 674 "dead_proc_elim.m"
                          case (MR_Integer) 10:
#line 671 "dead_proc_elim.m"
                            {
#line 671 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_245_258;
#line 671 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__Module_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 1)));
#line 671 "dead_proc_elim.m"
                              MR_String transform_hlds__dead_proc_elim__TypeName_62 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 2)));
#line 671 "dead_proc_elim.m"
                              MR_Integer transform_hlds__dead_proc_elim__Arity_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 3)));
#line 671 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__Entity_257;

#line 658 "dead_proc_elim.m"
                              {
#line 658 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__Entity_257 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 658 "dead_proc_elim.m"
                                MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_257, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Module_61));
#line 658 "dead_proc_elim.m"
                                MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_257, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__TypeName_62));
#line 658 "dead_proc_elim.m"
                                MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_257, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__Arity_63));
#line 658 "dead_proc_elim.m"
                              }
#line 7666 "transform_hlds.dead_proc_elim.c"
                              transform_hlds__dead_proc_elim__TypeCtorInfo_245_258 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 672 "dead_proc_elim.m"
                              {
#line 672 "dead_proc_elim.m"
                                mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_245_258, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_257)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97);
                              }
#line 673 "dead_proc_elim.m"
                              {
#line 673 "dead_proc_elim.m"
                                mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_245_258, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_257)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
                              }
#line 671 "dead_proc_elim.m"
                            }
#line 674 "dead_proc_elim.m"
                            break;
#line 674 "dead_proc_elim.m"
                          case (MR_Integer) 11:
#line 690 "dead_proc_elim.m"
                            {
#line 690 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 690 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 690 "dead_proc_elim.m"
                            }
#line 674 "dead_proc_elim.m"
                            break;
#line 674 "dead_proc_elim.m"
                          case (MR_Integer) 12:
#line 678 "dead_proc_elim.m"
                            {
#line 678 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_247_263;
#line 678 "dead_proc_elim.m"
                              MR_Integer transform_hlds__dead_proc_elim__ConstNum_260 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 1)));
#line 678 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__Entity_262;

#line 679 "dead_proc_elim.m"
                              {
#line 679 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__Entity_262 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 679 "dead_proc_elim.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Entity_262, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ConstNum_260));
#line 679 "dead_proc_elim.m"
                              }
#line 7713 "transform_hlds.dead_proc_elim.c"
                              transform_hlds__dead_proc_elim__TypeCtorInfo_247_263 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 680 "dead_proc_elim.m"
                              {
#line 680 "dead_proc_elim.m"
                                mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_247_263, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_262)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97);
                              }
#line 681 "dead_proc_elim.m"
                              {
#line 681 "dead_proc_elim.m"
                                mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_247_263, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_262)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
                              }
#line 678 "dead_proc_elim.m"
                            }
#line 674 "dead_proc_elim.m"
                            break;
#line 674 "dead_proc_elim.m"
                          case (MR_Integer) 13:
#line 678 "dead_proc_elim.m"
                            {
#line 678 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_247_268;
#line 678 "dead_proc_elim.m"
                              MR_Integer transform_hlds__dead_proc_elim__ConstNum_265 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 1)));
#line 678 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__Entity_267;

#line 679 "dead_proc_elim.m"
                              {
#line 679 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__Entity_267 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 679 "dead_proc_elim.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Entity_267, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ConstNum_265));
#line 679 "dead_proc_elim.m"
                              }
#line 7748 "transform_hlds.dead_proc_elim.c"
                              transform_hlds__dead_proc_elim__TypeCtorInfo_247_268 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 680 "dead_proc_elim.m"
                              {
#line 680 "dead_proc_elim.m"
                                mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_247_268, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_267)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97);
                              }
#line 681 "dead_proc_elim.m"
                              {
#line 681 "dead_proc_elim.m"
                                mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_247_268, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_267)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
                              }
#line 678 "dead_proc_elim.m"
                            }
#line 674 "dead_proc_elim.m"
                            break;
#line 674 "dead_proc_elim.m"
                          case (MR_Integer) 14:
#line 678 "dead_proc_elim.m"
                            {
#line 678 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_247_247;
#line 678 "dead_proc_elim.m"
                              MR_Integer transform_hlds__dead_proc_elim__ConstNum_64 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 1)));
#line 678 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__Entity_225;
#line 677 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 2)));

#line 679 "dead_proc_elim.m"
                              {
#line 679 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__Entity_225 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 679 "dead_proc_elim.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Entity_225, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ConstNum_64));
#line 679 "dead_proc_elim.m"
                              }
#line 7785 "transform_hlds.dead_proc_elim.c"
                              transform_hlds__dead_proc_elim__TypeCtorInfo_247_247 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 680 "dead_proc_elim.m"
                              {
#line 680 "dead_proc_elim.m"
                                mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_247_247, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_225)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97);
                              }
#line 681 "dead_proc_elim.m"
                              {
#line 681 "dead_proc_elim.m"
                                mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_247_247, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_225)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
                              }
#line 678 "dead_proc_elim.m"
                            }
#line 674 "dead_proc_elim.m"
                            break;
#line 674 "dead_proc_elim.m"
                        }
#line 674 "dead_proc_elim.m"
                        break;
#line 674 "dead_proc_elim.m"
                    }
#line 642 "dead_proc_elim.m"
                  }
#line 698 "dead_proc_elim.m"
                  break;
#line 698 "dead_proc_elim.m"
                case (MR_Integer) 1:
#line 699 "dead_proc_elim.m"
                  {
#line 699 "dead_proc_elim.m"
                    *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 699 "dead_proc_elim.m"
                    *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 699 "dead_proc_elim.m"
                  }
#line 698 "dead_proc_elim.m"
                  break;
#line 698 "dead_proc_elim.m"
                case (MR_Integer) 2:
#line 700 "dead_proc_elim.m"
                  {
#line 700 "dead_proc_elim.m"
                    *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 700 "dead_proc_elim.m"
                    *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 700 "dead_proc_elim.m"
                  }
#line 698 "dead_proc_elim.m"
                  break;
#line 698 "dead_proc_elim.m"
                case (MR_Integer) 3:
#line 698 "dead_proc_elim.m"
#line 698 "dead_proc_elim.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Unification_50, (MR_Integer) 0)))) {
#line 698 "dead_proc_elim.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 698 "dead_proc_elim.m"
                    case (MR_Integer) 0:
#line 701 "dead_proc_elim.m"
                      {
#line 701 "dead_proc_elim.m"
                        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 701 "dead_proc_elim.m"
                        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 701 "dead_proc_elim.m"
                      }
#line 698 "dead_proc_elim.m"
                      break;
#line 698 "dead_proc_elim.m"
                    case (MR_Integer) 1:
#line 706 "dead_proc_elim.m"
                      {
#line 708 "dead_proc_elim.m"
                        {
#line 708 "dead_proc_elim.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.dead_proc_elim", (MR_String) "predicate \140transform_hlds.dead_proc_elim.dead_proc_examine_goal\'/6", (MR_String) "complicated_unify");
#line 708 "dead_proc_elim.m"
                          return;
                        }
#line 706 "dead_proc_elim.m"
                      }
#line 698 "dead_proc_elim.m"
                      break;
#line 698 "dead_proc_elim.m"
                  }
#line 698 "dead_proc_elim.m"
                  break;
#line 698 "dead_proc_elim.m"
              }
#line 640 "dead_proc_elim.m"
            }
#line 551 "dead_proc_elim.m"
            break;
#line 551 "dead_proc_elim.m"
          case (MR_Integer) 2:
#line 578 "dead_proc_elim.m"
            {
#line 578 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_238_238;
#line 578 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__PredId_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 0)));
#line 578 "dead_proc_elim.m"
              MR_Integer transform_hlds__dead_proc_elim__ProcId_32 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 1)));
#line 578 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__Entity_37;
#line 578 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 2)));
#line 578 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 3)));
#line 578 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 4)));
#line 578 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 5)));
#line 581 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__V_249_249;
#line 581 "dead_proc_elim.m"
              MR_Integer transform_hlds__dead_proc_elim__V_250_250;

#line 579 "dead_proc_elim.m"
              {
#line 579 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__Entity_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 579 "dead_proc_elim.m"
                MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_37, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_31));
#line 579 "dead_proc_elim.m"
                MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_37, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_32));
#line 579 "dead_proc_elim.m"
              }
#line 7914 "transform_hlds.dead_proc_elim.c"
              transform_hlds__dead_proc_elim__TypeCtorInfo_238_238 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 580 "dead_proc_elim.m"
              {
#line 580 "dead_proc_elim.m"
                mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_238_238, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_37)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97);
              }
#line 581 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__CurrProc_8, (MR_Integer) 0)));
#line 581 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__V_250_250 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__CurrProc_8, (MR_Integer) 1)));
#line 581 "dead_proc_elim.m"
              {
#line 581 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__dead_proc_elim__PredId_31, transform_hlds__dead_proc_elim__V_249_249);
              }
#line 581 "dead_proc_elim.m"
              if (transform_hlds__dead_proc_elim__succeeded)
#line 581 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__ProcId_32 == transform_hlds__dead_proc_elim__V_250_250);
#line 593 "dead_proc_elim.m"
              if (transform_hlds__dead_proc_elim__succeeded)
#line 588 "dead_proc_elim.m"
                {
#line 592 "dead_proc_elim.m"
                  {
#line 592 "dead_proc_elim.m"
                    mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_238_238, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_37)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
                  }
#line 588 "dead_proc_elim.m"
                }
#line 593 "dead_proc_elim.m"
              else
#line 616 "dead_proc_elim.m"
                {
#line 616 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__OldNotation_40;
#line 593 "dead_proc_elim.m"
                  MR_Box transform_hlds__dead_proc_elim__conv0_OldNotation_40;

#line 593 "dead_proc_elim.m"
                  {
#line 593 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__succeeded = mercury__map__search_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_238_238, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_37)), &transform_hlds__dead_proc_elim__conv0_OldNotation_40);
                  }
#line 593 "dead_proc_elim.m"
                  if (transform_hlds__dead_proc_elim__succeeded)
#line 593 "dead_proc_elim.m"
                    {
#line 593 "dead_proc_elim.m"
                      transform_hlds__dead_proc_elim__OldNotation_40 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_OldNotation_40);
#line 593 "dead_proc_elim.m"
                      transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 593 "dead_proc_elim.m"
                    }
#line 616 "dead_proc_elim.m"
                  if (transform_hlds__dead_proc_elim__succeeded)
#line 614 "dead_proc_elim.m"
                    {
#line 614 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__NewNotation_209;

#line 604 "dead_proc_elim.m"
                      if ((transform_hlds__dead_proc_elim__OldNotation_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 596 "dead_proc_elim.m"
                        transform_hlds__dead_proc_elim__NewNotation_209 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 604 "dead_proc_elim.m"
                      else
#line 605 "dead_proc_elim.m"
                        {
#line 605 "dead_proc_elim.m"
                          MR_Integer transform_hlds__dead_proc_elim__Count_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__OldNotation_40, (MR_Integer) 0)));
#line 605 "dead_proc_elim.m"
                          MR_Integer transform_hlds__dead_proc_elim__V_159_159 = (transform_hlds__dead_proc_elim__Count_41 + (MR_Integer) 1);

#line 606 "dead_proc_elim.m"
                          {
#line 606 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__NewNotation_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 606 "dead_proc_elim.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__NewNotation_209, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__V_159_159));
#line 606 "dead_proc_elim.m"
                          }
#line 605 "dead_proc_elim.m"
                        }
#line 615 "dead_proc_elim.m"
                      {
#line 615 "dead_proc_elim.m"
                        mercury__map__det_update_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_238_238, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_37)), ((MR_Box) (transform_hlds__dead_proc_elim__NewNotation_209)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
                      }
#line 614 "dead_proc_elim.m"
                    }
#line 616 "dead_proc_elim.m"
                  else
#line 623 "dead_proc_elim.m"
                    {
#line 625 "dead_proc_elim.m"
                      {
#line 625 "dead_proc_elim.m"
                        mercury__map__det_insert_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_238_238, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_37)), ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_8[0]))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
                      }
#line 623 "dead_proc_elim.m"
                    }
#line 616 "dead_proc_elim.m"
                }
#line 578 "dead_proc_elim.m"
            }
#line 551 "dead_proc_elim.m"
            break;
#line 551 "dead_proc_elim.m"
          case (MR_Integer) 3:
#line 551 "dead_proc_elim.m"
#line 551 "dead_proc_elim.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 0)))) {
#line 551 "dead_proc_elim.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 551 "dead_proc_elim.m"
              case (MR_Integer) 0:
#line 576 "dead_proc_elim.m"
                {
#line 576 "dead_proc_elim.m"
                  *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 576 "dead_proc_elim.m"
                  *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 576 "dead_proc_elim.m"
                }
#line 551 "dead_proc_elim.m"
                break;
#line 551 "dead_proc_elim.m"
              case (MR_Integer) 1:
#line 628 "dead_proc_elim.m"
                {
#line 628 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_243_243;
#line 628 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__PredId_212 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 2)));
#line 628 "dead_proc_elim.m"
                  MR_Integer transform_hlds__dead_proc_elim__ProcId_213 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 3)));
#line 628 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__Entity_214;
#line 628 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 1)));
#line 628 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 4)));
#line 628 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 5)));
#line 628 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 6)));
#line 628 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 7)));

#line 629 "dead_proc_elim.m"
                  {
#line 629 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__Entity_214 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 629 "dead_proc_elim.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_214, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_212));
#line 629 "dead_proc_elim.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_214, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_213));
#line 629 "dead_proc_elim.m"
                  }
#line 8075 "transform_hlds.dead_proc_elim.c"
                  transform_hlds__dead_proc_elim__TypeCtorInfo_243_243 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 637 "dead_proc_elim.m"
                  {
#line 637 "dead_proc_elim.m"
                    mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_243_243, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_214)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97);
                  }
#line 638 "dead_proc_elim.m"
                  {
#line 638 "dead_proc_elim.m"
                    mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_243_243, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_214)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
                  }
#line 628 "dead_proc_elim.m"
                }
#line 551 "dead_proc_elim.m"
                break;
#line 551 "dead_proc_elim.m"
              case (MR_Integer) 2:
#line 549 "dead_proc_elim.m"
                {
#line 549 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__Goals_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 2)));
#line 547 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim___ConjType_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 1)));

#line 550 "dead_proc_elim.m"
                  {
#line 550 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__dead_proc_examine_goals_6_p_0(transform_hlds__dead_proc_elim__Goals_14, transform_hlds__dead_proc_elim__CurrProc_8, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
                  }
#line 549 "dead_proc_elim.m"
                }
#line 551 "dead_proc_elim.m"
                break;
#line 551 "dead_proc_elim.m"
              case (MR_Integer) 3:
#line 549 "dead_proc_elim.m"
                {
#line 549 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__Goals_251 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 1)));

#line 550 "dead_proc_elim.m"
                  {
#line 550 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__dead_proc_examine_goals_6_p_0(transform_hlds__dead_proc_elim__Goals_251, transform_hlds__dead_proc_elim__CurrProc_8, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
                  }
#line 549 "dead_proc_elim.m"
                }
#line 551 "dead_proc_elim.m"
                break;
#line 551 "dead_proc_elim.m"
              case (MR_Integer) 4:
#line 552 "dead_proc_elim.m"
                {
#line 552 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__Cases_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 3)));
#line 552 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim___Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 1)));
#line 552 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim___CanFail_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 2)));

#line 553 "dead_proc_elim.m"
                  {
#line 553 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__dead_proc_examine_cases_6_p_0(transform_hlds__dead_proc_elim__Cases_17, transform_hlds__dead_proc_elim__CurrProc_8, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
                  }
#line 552 "dead_proc_elim.m"
                }
#line 551 "dead_proc_elim.m"
                break;
#line 551 "dead_proc_elim.m"
              case (MR_Integer) 5:
#line 558 "dead_proc_elim.m"
                {
#line 558 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__Reason_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 1)));
#line 558 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__SubGoal_208 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 2)));
#line 560 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__FGT_21;
#line 560 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_20_20;

#line 560 "dead_proc_elim.m"
                  transform_hlds__dead_proc_elim__succeeded = ((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__Reason_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Reason_19, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 560 "dead_proc_elim.m"
                  if (transform_hlds__dead_proc_elim__succeeded)
#line 560 "dead_proc_elim.m"
                    {
#line 560 "dead_proc_elim.m"
                      transform_hlds__dead_proc_elim__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Reason_19, (MR_Integer) 1)));
#line 560 "dead_proc_elim.m"
                      transform_hlds__dead_proc_elim__FGT_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Reason_19, (MR_Integer) 2)));
#line 562 "dead_proc_elim.m"
#line 562 "dead_proc_elim.m"
                      switch (transform_hlds__dead_proc_elim__FGT_21) {
#line 562 "dead_proc_elim.m"
                        default:
#line 562 "dead_proc_elim.m"
                          transform_hlds__dead_proc_elim__succeeded = MR_FALSE;
#line 562 "dead_proc_elim.m"
                          break;
#line 562 "dead_proc_elim.m"
                        case (MR_Integer) 1:
#line 561 "dead_proc_elim.m"
                          transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 562 "dead_proc_elim.m"
                          break;
#line 562 "dead_proc_elim.m"
                        case (MR_Integer) 2:
#line 562 "dead_proc_elim.m"
                          transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 562 "dead_proc_elim.m"
                          break;
#line 562 "dead_proc_elim.m"
                      }
#line 560 "dead_proc_elim.m"
                    }
#line 567 "dead_proc_elim.m"
                  if (transform_hlds__dead_proc_elim__succeeded)
#line 566 "dead_proc_elim.m"
                    {
#line 566 "dead_proc_elim.m"
                      *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 566 "dead_proc_elim.m"
                      *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 566 "dead_proc_elim.m"
                    }
#line 567 "dead_proc_elim.m"
                  else
#line 568 "dead_proc_elim.m"
                    {
#line 568 "dead_proc_elim.m"
                      /* direct tailcall eliminated */
#line 568 "dead_proc_elim.m"
                      {
#line 568 "dead_proc_elim.m"
                        MR_Word transform_hlds__dead_proc_elim__Goal__tmp_copy_7 = transform_hlds__dead_proc_elim__SubGoal_208;

#line 568 "dead_proc_elim.m"
                        transform_hlds__dead_proc_elim__Goal_7 = transform_hlds__dead_proc_elim__Goal__tmp_copy_7;
#line 568 "dead_proc_elim.m"
                      }
#line 568 "dead_proc_elim.m"
                      continue;
#line 568 "dead_proc_elim.m"
                    }
#line 558 "dead_proc_elim.m"
                }
#line 551 "dead_proc_elim.m"
                break;
#line 551 "dead_proc_elim.m"
              case (MR_Integer) 6:
#line 571 "dead_proc_elim.m"
                {
#line 571 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__Cond_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 2)));
#line 571 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__Then_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 3)));
#line 571 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__Else_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 4)));
#line 571 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_194_194;
#line 571 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_195_195;
#line 571 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_196_196;
#line 571 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_197_197;
#line 571 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 1)));

#line 572 "dead_proc_elim.m"
                  {
#line 572 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_p_0(transform_hlds__dead_proc_elim__Cond_23, transform_hlds__dead_proc_elim__CurrProc_8, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_194_194, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_195_195);
                  }
#line 573 "dead_proc_elim.m"
                  {
#line 573 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_p_0(transform_hlds__dead_proc_elim__Then_24, transform_hlds__dead_proc_elim__CurrProc_8, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_194_194, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_196_196, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_195_195, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_197_197);
                  }
#line 574 "dead_proc_elim.m"
                  /* direct tailcall eliminated */
#line 574 "dead_proc_elim.m"
                  {
#line 574 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__Goal__tmp_copy_7 = transform_hlds__dead_proc_elim__Else_25;
#line 574 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_96 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_196_196;
#line 574 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_98 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_197_197;

#line 574 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_98;
#line 574 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_96;
#line 574 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__Goal_7 = transform_hlds__dead_proc_elim__Goal__tmp_copy_7;
#line 574 "dead_proc_elim.m"
                  }
#line 574 "dead_proc_elim.m"
                  continue;
#line 571 "dead_proc_elim.m"
                }
#line 551 "dead_proc_elim.m"
                break;
#line 551 "dead_proc_elim.m"
              case (MR_Integer) 7:
#line 711 "dead_proc_elim.m"
                {
#line 713 "dead_proc_elim.m"
                  {
#line 713 "dead_proc_elim.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.dead_proc_elim", (MR_String) "predicate \140transform_hlds.dead_proc_elim.dead_proc_examine_goal\'/6", (MR_String) "shorthand");
#line 713 "dead_proc_elim.m"
                    return;
                  }
#line 711 "dead_proc_elim.m"
                }
#line 551 "dead_proc_elim.m"
                break;
#line 551 "dead_proc_elim.m"
            }
#line 551 "dead_proc_elim.m"
            break;
#line 551 "dead_proc_elim.m"
        }
#line 544 "dead_proc_elim.m"
      }
#line 544 "dead_proc_elim.m"
      break;
#line 544 "dead_proc_elim.m"
    }
#line 540 "dead_proc_elim.m"
}

#line 530 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_cases_6_p_0(
#line 530 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 530 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 530 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3,
#line 530 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4,
#line 530 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5,
#line 530 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6)
#line 530 "dead_proc_elim.m"
{
#line 534 "dead_proc_elim.m"
  while (MR_TRUE)
#line 534 "dead_proc_elim.m"
    {
#line 534 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 534 "dead_proc_elim.m"
      {
#line 534 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 534 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 534 "dead_proc_elim.m"
          {
#line 534 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5;
#line 534 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3;
#line 534 "dead_proc_elim.m"
          }
#line 534 "dead_proc_elim.m"
        else
#line 536 "dead_proc_elim.m"
          {
#line 536 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Goal_16;
#line 536 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Cases_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 536 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 536 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 536 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_27;
#line 535 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_25_25, (MR_Integer) 0)));
#line 535 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_25_25, (MR_Integer) 1)));

#line 535 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__Goal_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_25_25, (MR_Integer) 2)));
#line 537 "dead_proc_elim.m"
            {
#line 537 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_p_0(transform_hlds__dead_proc_elim__Goal_16, transform_hlds__dead_proc_elim__HeadVar__2_2, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_27);
            }
#line 538 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 538 "dead_proc_elim.m"
            {
#line 538 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1 = transform_hlds__dead_proc_elim__Cases_17;
#line 538 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 538 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_27;

#line 538 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_5;
#line 538 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_3;
#line 538 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1;
#line 538 "dead_proc_elim.m"
            }
#line 538 "dead_proc_elim.m"
            continue;
#line 536 "dead_proc_elim.m"
          }
#line 534 "dead_proc_elim.m"
      }
#line 534 "dead_proc_elim.m"
      break;
#line 534 "dead_proc_elim.m"
    }
#line 530 "dead_proc_elim.m"
}

#line 521 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_goals_6_p_0(
#line 521 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 521 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__CurrProc_2,
#line 521 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3,
#line 521 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4,
#line 521 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5,
#line 521 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6)
#line 521 "dead_proc_elim.m"
{
#line 525 "dead_proc_elim.m"
  while (MR_TRUE)
#line 525 "dead_proc_elim.m"
    {
#line 525 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 525 "dead_proc_elim.m"
      {
#line 525 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 525 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 525 "dead_proc_elim.m"
          {
#line 525 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5;
#line 525 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3;
#line 525 "dead_proc_elim.m"
          }
#line 525 "dead_proc_elim.m"
        else
#line 526 "dead_proc_elim.m"
          {
#line 526 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Goal_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 526 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Goals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 526 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_23;
#line 526 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_24_24;

#line 527 "dead_proc_elim.m"
            {
#line 527 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_p_0(transform_hlds__dead_proc_elim__Goal_14, transform_hlds__dead_proc_elim__CurrProc_2, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_23, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_24_24);
            }
#line 528 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 528 "dead_proc_elim.m"
            {
#line 528 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1 = transform_hlds__dead_proc_elim__Goals_15;
#line 528 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_23;
#line 528 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_24_24;

#line 528 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_5;
#line 528 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_3;
#line 528 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1;
#line 528 "dead_proc_elim.m"
            }
#line 528 "dead_proc_elim.m"
            continue;
#line 526 "dead_proc_elim.m"
          }
#line 525 "dead_proc_elim.m"
      }
#line 525 "dead_proc_elim.m"
      break;
#line 525 "dead_proc_elim.m"
    }
#line 521 "dead_proc_elim.m"
}

#line 471 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_proc_6_p_0(
#line 471 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 471 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ModuleInfo_9,
#line 471 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_22,
#line 471 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23,
#line 471 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24,
#line 471 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25)
#line 471 "dead_proc_elim.m"
{
#line 475 "dead_proc_elim.m"
  {
#line 475 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 475 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 475 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__ProcId_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 511 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ProcInfo_16;
#line 477 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_64_64;
#line 477 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredTable_12;
#line 477 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredInfo_13;
#line 477 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ProcIds_14;
#line 477 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ProcTable_15;
#line 478 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv0_PredInfo_13;
#line 482 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv1_ProcInfo_16;

#line 477 "dead_proc_elim.m"
    {
#line 477 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_9, &transform_hlds__dead_proc_elim__PredTable_12);
    }
#line 478 "dead_proc_elim.m"
    {
#line 478 "dead_proc_elim.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, transform_hlds__dead_proc_elim__PredTable_12, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_7)), &transform_hlds__dead_proc_elim__conv0_PredInfo_13);
    }
#line 478 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__PredInfo_13 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_PredInfo_13);
#line 479 "dead_proc_elim.m"
    {
#line 479 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__ProcIds_14 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__dead_proc_elim__PredInfo_13);
    }
#line 480 "dead_proc_elim.m"
    {
#line 480 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_8)), transform_hlds__dead_proc_elim__ProcIds_14);
    }
#line 477 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 477 "dead_proc_elim.m"
      {
#line 481 "dead_proc_elim.m"
        {
#line 481 "dead_proc_elim.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__dead_proc_elim__PredInfo_13, &transform_hlds__dead_proc_elim__ProcTable_15);
        }
#line 8569 "transform_hlds.dead_proc_elim.c"
        transform_hlds__dead_proc_elim__TypeCtorInfo_64_64 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 482 "dead_proc_elim.m"
        {
#line 482 "dead_proc_elim.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_64_64, transform_hlds__dead_proc_elim__ProcTable_15, transform_hlds__dead_proc_elim__ProcId_8, &transform_hlds__dead_proc_elim__conv1_ProcInfo_16);
        }
#line 482 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__ProcInfo_16 = ((MR_Word) transform_hlds__dead_proc_elim__conv1_ProcInfo_16);
#line 482 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 477 "dead_proc_elim.m"
      }
#line 511 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 490 "dead_proc_elim.m"
      {
#line 490 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__Goal_18;
#line 490 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__EvalMethod_19;
#line 490 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__HasPerProcTablingPtr_20;
#line 490 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_38_38;

#line 491 "dead_proc_elim.m"
        {
#line 491 "dead_proc_elim.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__dead_proc_elim__ProcInfo_16, &transform_hlds__dead_proc_elim__Goal_18);
        }
#line 492 "dead_proc_elim.m"
        {
#line 492 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_p_0(transform_hlds__dead_proc_elim__Goal_18, transform_hlds__dead_proc_elim__HeadVar__1_1, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_22, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_38_38);
        }
#line 494 "dead_proc_elim.m"
        {
#line 494 "dead_proc_elim.m"
          hlds__hlds_pred__proc_info_get_eval_method_2_p_0(transform_hlds__dead_proc_elim__ProcInfo_16, &transform_hlds__dead_proc_elim__EvalMethod_19);
        }
#line 495 "dead_proc_elim.m"
        {
#line 495 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__HasPerProcTablingPtr_20 = hlds__hlds_pred__eval_method_has_per_proc_tabling_pointer_1_f_0(transform_hlds__dead_proc_elim__EvalMethod_19);
        }
#line 499 "dead_proc_elim.m"
#line 499 "dead_proc_elim.m"
        switch (transform_hlds__dead_proc_elim__HasPerProcTablingPtr_20) {
#line 499 "dead_proc_elim.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 499 "dead_proc_elim.m"
          case (MR_Integer) 0:
#line 498 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_38_38;
#line 499 "dead_proc_elim.m"
            break;
#line 499 "dead_proc_elim.m"
          case (MR_Integer) 1:
#line 500 "dead_proc_elim.m"
            {
#line 500 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__TableStructEntity_21;

#line 508 "dead_proc_elim.m"
              {
#line 508 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__TableStructEntity_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 508 "dead_proc_elim.m"
                MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__TableStructEntity_21, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_7));
#line 508 "dead_proc_elim.m"
                MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__TableStructEntity_21, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_8));
#line 508 "dead_proc_elim.m"
              }
#line 509 "dead_proc_elim.m"
              {
#line 509 "dead_proc_elim.m"
                mercury__map__set_4_p_0((MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__TableStructEntity_21)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_38_38, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25);
              }
#line 500 "dead_proc_elim.m"
            }
#line 499 "dead_proc_elim.m"
            break;
#line 499 "dead_proc_elim.m"
        }
#line 490 "dead_proc_elim.m"
      }
#line 511 "dead_proc_elim.m"
    else
#line 512 "dead_proc_elim.m"
      {
#line 512 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24;
#line 512 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_22;
#line 512 "dead_proc_elim.m"
      }
#line 475 "dead_proc_elim.m"
  }
#line 471 "dead_proc_elim.m"
}

#line 446 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_const_struct_args_5_p_0(
#line 446 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 446 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 446 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 446 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4,
#line 446 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5)
#line 446 "dead_proc_elim.m"
{
#line 450 "dead_proc_elim.m"
  while (MR_TRUE)
#line 450 "dead_proc_elim.m"
    {
#line 450 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 450 "dead_proc_elim.m"
      {
#line 450 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 450 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 450 "dead_proc_elim.m"
          {
#line 450 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4;
#line 450 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2;
#line 450 "dead_proc_elim.m"
          }
#line 450 "dead_proc_elim.m"
        else
#line 451 "dead_proc_elim.m"
          {
#line 451 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Arg_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 451 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 451 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_30_30;
#line 451 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_32_32;

#line 457 "dead_proc_elim.m"
            if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__Arg_12)) == (MR_mktag((MR_Integer) 0))))
#line 453 "dead_proc_elim.m"
              {
#line 453 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_38_38;
#line 453 "dead_proc_elim.m"
                MR_Integer transform_hlds__dead_proc_elim__ConstNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Arg_12, (MR_Integer) 0)));
#line 453 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__Entity_17;

#line 454 "dead_proc_elim.m"
                {
#line 454 "dead_proc_elim.m"
                  transform_hlds__dead_proc_elim__Entity_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 454 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Entity_17, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ConstNum_16));
#line 454 "dead_proc_elim.m"
                }
#line 8739 "transform_hlds.dead_proc_elim.c"
                transform_hlds__dead_proc_elim__TypeCtorInfo_38_38 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 455 "dead_proc_elim.m"
                {
#line 455 "dead_proc_elim.m"
                  mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_38_38, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_17)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_30_30);
                }
#line 456 "dead_proc_elim.m"
                {
#line 456 "dead_proc_elim.m"
                  mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_38_38, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_17)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_32_32);
                }
#line 453 "dead_proc_elim.m"
              }
#line 457 "dead_proc_elim.m"
            else
#line 458 "dead_proc_elim.m"
              {
#line 458 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__ConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__Arg_12, (MR_Integer) 0)));
#line 458 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__Arg_12, (MR_Integer) 1)));
#line 463 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__Module_20;
#line 463 "dead_proc_elim.m"
                MR_String transform_hlds__dead_proc_elim__TypeName_21;
#line 463 "dead_proc_elim.m"
                MR_Integer transform_hlds__dead_proc_elim__Arity_22;

#line 459 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__succeeded = ((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__ConsId_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_18, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 459 "dead_proc_elim.m"
                if (transform_hlds__dead_proc_elim__succeeded)
#line 459 "dead_proc_elim.m"
                  {
#line 459 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__Module_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_18, (MR_Integer) 1)));
#line 459 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__TypeName_21 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_18, (MR_Integer) 2)));
#line 459 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_18, (MR_Integer) 3)));
#line 460 "dead_proc_elim.m"
                    {
#line 460 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_40_40;
#line 460 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__Entity_35;

#line 460 "dead_proc_elim.m"
                      {
#line 460 "dead_proc_elim.m"
                        transform_hlds__dead_proc_elim__Entity_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 460 "dead_proc_elim.m"
                        MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_35, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Module_20));
#line 460 "dead_proc_elim.m"
                        MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_35, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__TypeName_21));
#line 460 "dead_proc_elim.m"
                        MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_35, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__Arity_22));
#line 460 "dead_proc_elim.m"
                      }
#line 8799 "transform_hlds.dead_proc_elim.c"
                      transform_hlds__dead_proc_elim__TypeCtorInfo_40_40 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 461 "dead_proc_elim.m"
                      {
#line 461 "dead_proc_elim.m"
                        mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_40_40, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_35)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_30_30);
                      }
#line 462 "dead_proc_elim.m"
                      {
#line 462 "dead_proc_elim.m"
                        mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_40_40, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_35)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_32_32);
                      }
#line 460 "dead_proc_elim.m"
                    }
#line 459 "dead_proc_elim.m"
                  }
#line 459 "dead_proc_elim.m"
                else
#line 464 "dead_proc_elim.m"
                  {
#line 464 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_32_32 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4;
#line 464 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_30_30 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2;
#line 464 "dead_proc_elim.m"
                  }
#line 458 "dead_proc_elim.m"
              }
#line 467 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 467 "dead_proc_elim.m"
            {
#line 467 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1 = transform_hlds__dead_proc_elim__Args_13;
#line 467 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_2 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_30_30;
#line 467 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_32_32;

#line 467 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_4;
#line 467 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_2;
#line 467 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1;
#line 467 "dead_proc_elim.m"
            }
#line 467 "dead_proc_elim.m"
            continue;
#line 451 "dead_proc_elim.m"
          }
#line 450 "dead_proc_elim.m"
      }
#line 450 "dead_proc_elim.m"
      break;
#line 450 "dead_proc_elim.m"
    }
#line 446 "dead_proc_elim.m"
}

#line 415 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_refs_5_p_0(
#line 415 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 415 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 415 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 415 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4,
#line 415 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5)
#line 415 "dead_proc_elim.m"
{
#line 419 "dead_proc_elim.m"
  while (MR_TRUE)
#line 419 "dead_proc_elim.m"
    {
#line 419 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 419 "dead_proc_elim.m"
      {
#line 419 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 419 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 419 "dead_proc_elim.m"
          {
#line 419 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4;
#line 419 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2;
#line 419 "dead_proc_elim.m"
          }
#line 419 "dead_proc_elim.m"
        else
#line 420 "dead_proc_elim.m"
          {
#line 420 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_28_28;
#line 420 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Ref_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 420 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Refs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 420 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Ref_12, (MR_Integer) 0)));
#line 420 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__ProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Ref_12, (MR_Integer) 1)));
#line 420 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Entity_18;
#line 420 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_23;
#line 420 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25_25;

#line 422 "dead_proc_elim.m"
            {
#line 422 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__Entity_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 422 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_18, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_16));
#line 422 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_18, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_17));
#line 422 "dead_proc_elim.m"
            }
#line 8926 "transform_hlds.dead_proc_elim.c"
            transform_hlds__dead_proc_elim__TypeCtorInfo_28_28 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 423 "dead_proc_elim.m"
            {
#line 423 "dead_proc_elim.m"
              mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_28_28, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_18)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_23);
            }
#line 424 "dead_proc_elim.m"
            {
#line 424 "dead_proc_elim.m"
              mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_28_28, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_18)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25_25);
            }
#line 425 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 425 "dead_proc_elim.m"
            {
#line 425 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1 = transform_hlds__dead_proc_elim__Refs_13;
#line 425 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_2 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_23;
#line 425 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25_25;

#line 425 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_4;
#line 425 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_2;
#line 425 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1;
#line 425 "dead_proc_elim.m"
            }
#line 425 "dead_proc_elim.m"
            continue;
#line 420 "dead_proc_elim.m"
          }
#line 419 "dead_proc_elim.m"
      }
#line 419 "dead_proc_elim.m"
      break;
#line 419 "dead_proc_elim.m"
    }
#line 415 "dead_proc_elim.m"
}

#line 399 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim__find_type_ctor_info_5_p_0(
#line 399 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ModuleName_6,
#line 399 "dead_proc_elim.m"
  MR_String transform_hlds__dead_proc_elim__TypeName_7,
#line 399 "dead_proc_elim.m"
  MR_Integer transform_hlds__dead_proc_elim__TypeArity_8,
#line 399 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__4_4,
#line 399 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__Refs_11)
#line 399 "dead_proc_elim.m"
{
#line 404 "dead_proc_elim.m"
  while (MR_TRUE)
#line 404 "dead_proc_elim.m"
    {
#line 404 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 404 "dead_proc_elim.m"
      {
#line 404 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded = ((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 404 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfo_9;
#line 404 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfos_10;
#line 410 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__Unify_15;
#line 410 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__Compare_16;
#line 406 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_19_19;
#line 406 "dead_proc_elim.m"
        MR_String transform_hlds__dead_proc_elim__V_20_20;
#line 406 "dead_proc_elim.m"
        MR_Integer transform_hlds__dead_proc_elim__V_21_21;
#line 406 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim___TypeCtor_12;
#line 406 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim___Status_13;
#line 406 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim___HldsDefn_14;

#line 404 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 404 "dead_proc_elim.m"
          {
#line 404 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__TypeCtorGenInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__4_4, (MR_Integer) 0)));
#line 404 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__TypeCtorGenInfos_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__4_4, (MR_Integer) 1)));
#line 406 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim___TypeCtor_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_9, (MR_Integer) 0)));
#line 406 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_9, (MR_Integer) 1)));
#line 406 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_9, (MR_Integer) 2)));
#line 406 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_9, (MR_Integer) 3)));
#line 406 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim___Status_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_9, (MR_Integer) 4)));
#line 406 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim___HldsDefn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_9, (MR_Integer) 5)));
#line 406 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__Unify_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_9, (MR_Integer) 6)));
#line 406 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__Compare_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_9, (MR_Integer) 7)));
#line 406 "dead_proc_elim.m"
            {
#line 406 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__dead_proc_elim__ModuleName_6, transform_hlds__dead_proc_elim__V_19_19);
            }
#line 406 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 406 "dead_proc_elim.m"
              {
#line 406 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__succeeded = (strcmp(transform_hlds__dead_proc_elim__TypeName_7, transform_hlds__dead_proc_elim__V_20_20) == 0);
#line 406 "dead_proc_elim.m"
                if (transform_hlds__dead_proc_elim__succeeded)
#line 406 "dead_proc_elim.m"
                  transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__TypeArity_8 == transform_hlds__dead_proc_elim__V_21_21);
#line 406 "dead_proc_elim.m"
              }
#line 410 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 409 "dead_proc_elim.m"
              {
#line 409 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__V_17_17;

#line 409 "dead_proc_elim.m"
                {
#line 409 "dead_proc_elim.m"
                  transform_hlds__dead_proc_elim__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_17_17, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Compare_16));
#line 409 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 409 "dead_proc_elim.m"
                }
#line 409 "dead_proc_elim.m"
                {
#line 409 "dead_proc_elim.m"
                  MR_Word base;
#line 409 "dead_proc_elim.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "dead_proc_elim.m"
                  *transform_hlds__dead_proc_elim__Refs_11 = base;
#line 409 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Unify_15));
#line 409 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__V_17_17));
#line 409 "dead_proc_elim.m"
                }
#line 409 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 409 "dead_proc_elim.m"
              }
#line 410 "dead_proc_elim.m"
            else
#line 411 "dead_proc_elim.m"
              {
#line 411 "dead_proc_elim.m"
                /* direct tailcall eliminated */
#line 411 "dead_proc_elim.m"
                {
#line 411 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__HeadVar__4__tmp_copy_4 = transform_hlds__dead_proc_elim__TypeCtorGenInfos_10;

#line 411 "dead_proc_elim.m"
                  transform_hlds__dead_proc_elim__HeadVar__4_4 = transform_hlds__dead_proc_elim__HeadVar__4__tmp_copy_4;
#line 411 "dead_proc_elim.m"
                }
#line 411 "dead_proc_elim.m"
                continue;
#line 411 "dead_proc_elim.m"
              }
#line 404 "dead_proc_elim.m"
          }
#line 404 "dead_proc_elim.m"
        return transform_hlds__dead_proc_elim__succeeded;
#line 404 "dead_proc_elim.m"
      }
#line 404 "dead_proc_elim.m"
      break;
#line 404 "dead_proc_elim.m"
    }
#line 399 "dead_proc_elim.m"
}

#line 338 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_6_p_0(
#line 338 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_22,
#line 338 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_0_23,
#line 338 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__AnalyzeWhat_9,
#line 338 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ModuleInfo_10,
#line 338 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24,
#line 338 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25)
#line 338 "dead_proc_elim.m"
{
#line 377 "dead_proc_elim.m"
  while (MR_TRUE)
#line 377 "dead_proc_elim.m"
    {
#line 377 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 377 "dead_proc_elim.m"
      {
#line 377 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 377 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__Entity_12;
#line 377 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 343 "dead_proc_elim.m"
        MR_Box transform_hlds__dead_proc_elim__conv0_Entity_12;

#line 343 "dead_proc_elim.m"
        {
#line 343 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__succeeded = mercury__queue__get_3_p_0((MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0, &transform_hlds__dead_proc_elim__conv0_Entity_12, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_22, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26);
        }
#line 343 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 343 "dead_proc_elim.m"
          {
#line 343 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__Entity_12 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_Entity_12);
#line 343 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 343 "dead_proc_elim.m"
          }
#line 377 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 374 "dead_proc_elim.m"
          {
#line 374 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_32_32;
#line 374 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_33_33;
#line 374 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_34_34;
#line 372 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_27_27;

#line 345 "dead_proc_elim.m"
            {
#line 345 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_12)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_0_23, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_27_27);
            }
#line 372 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 350 "dead_proc_elim.m"
              {
#line 350 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_34_34 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_27_27;
#line 350 "dead_proc_elim.m"
#line 350 "dead_proc_elim.m"
                switch (MR_tag((MR_Word) transform_hlds__dead_proc_elim__Entity_12)) {
#line 350 "dead_proc_elim.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 350 "dead_proc_elim.m"
                  case (MR_Integer) 0:
#line 347 "dead_proc_elim.m"
                    {
#line 347 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_12, (MR_Integer) 0)));
#line 347 "dead_proc_elim.m"
                      MR_Integer transform_hlds__dead_proc_elim__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_12, (MR_Integer) 1)));
#line 347 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__PredProcId_15;

#line 348 "dead_proc_elim.m"
                      {
#line 348 "dead_proc_elim.m"
                        transform_hlds__dead_proc_elim__PredProcId_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 348 "dead_proc_elim.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__PredProcId_15, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_13));
#line 348 "dead_proc_elim.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__PredProcId_15, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_14));
#line 348 "dead_proc_elim.m"
                      }
#line 349 "dead_proc_elim.m"
                      {
#line 349 "dead_proc_elim.m"
                        transform_hlds__dead_proc_elim__dead_proc_examine_proc_6_p_0(transform_hlds__dead_proc_elim__PredProcId_15, transform_hlds__dead_proc_elim__ModuleInfo_10, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_32_32, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_33_33);
                      }
#line 347 "dead_proc_elim.m"
                    }
#line 350 "dead_proc_elim.m"
                    break;
#line 350 "dead_proc_elim.m"
                  case (MR_Integer) 1:
#line 351 "dead_proc_elim.m"
                    {
#line 351 "dead_proc_elim.m"
                      transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_32_32 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 351 "dead_proc_elim.m"
                      transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_33_33 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24;
#line 351 "dead_proc_elim.m"
                    }
#line 350 "dead_proc_elim.m"
                    break;
#line 350 "dead_proc_elim.m"
                  case (MR_Integer) 2:
#line 354 "dead_proc_elim.m"
                    {
#line 354 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__Module_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_12, (MR_Integer) 0)));
#line 354 "dead_proc_elim.m"
                      MR_String transform_hlds__dead_proc_elim__Type_19 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_12, (MR_Integer) 1)));
#line 354 "dead_proc_elim.m"
                      MR_Integer transform_hlds__dead_proc_elim__Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_12, (MR_Integer) 2)));

#line 357 "dead_proc_elim.m"
#line 357 "dead_proc_elim.m"
                      switch (transform_hlds__dead_proc_elim__AnalyzeWhat_9) {
#line 357 "dead_proc_elim.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 357 "dead_proc_elim.m"
                        case (MR_Integer) 1:
#line 388 "dead_proc_elim.m"
                          {
#line 388 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfos_77;
#line 395 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__Refs_78;

#line 389 "dead_proc_elim.m"
                            {
#line 389 "dead_proc_elim.m"
                              hlds__hlds_module__module_info_get_type_ctor_gen_infos_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_10, &transform_hlds__dead_proc_elim__TypeCtorGenInfos_77);
                            }
#line 391 "dead_proc_elim.m"
                            {
#line 391 "dead_proc_elim.m"
                              transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim__find_type_ctor_info_5_p_0(transform_hlds__dead_proc_elim__Module_18, transform_hlds__dead_proc_elim__Type_19, transform_hlds__dead_proc_elim__Arity_20, transform_hlds__dead_proc_elim__TypeCtorGenInfos_77, &transform_hlds__dead_proc_elim__Refs_78);
                            }
#line 395 "dead_proc_elim.m"
                            if (transform_hlds__dead_proc_elim__succeeded)
#line 394 "dead_proc_elim.m"
                              {
#line 394 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__dead_proc_examine_refs_5_p_0(transform_hlds__dead_proc_elim__Refs_78, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_32_32, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_33_33);
                              }
#line 395 "dead_proc_elim.m"
                            else
#line 396 "dead_proc_elim.m"
                              {
#line 396 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_33_33 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24;
#line 396 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_32_32 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 396 "dead_proc_elim.m"
                              }
#line 388 "dead_proc_elim.m"
                          }
#line 357 "dead_proc_elim.m"
                          break;
#line 357 "dead_proc_elim.m"
                        case (MR_Integer) 0:
#line 356 "dead_proc_elim.m"
                          {
#line 356 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_32_32 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 356 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_33_33 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24;
#line 356 "dead_proc_elim.m"
                          }
#line 357 "dead_proc_elim.m"
                          break;
#line 357 "dead_proc_elim.m"
                      }
#line 354 "dead_proc_elim.m"
                    }
#line 350 "dead_proc_elim.m"
                    break;
#line 350 "dead_proc_elim.m"
                  case (MR_Integer) 3:
#line 363 "dead_proc_elim.m"
                    {
#line 363 "dead_proc_elim.m"
                      MR_Integer transform_hlds__dead_proc_elim__ConstNum_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Entity_12, (MR_Integer) 0)));

#line 366 "dead_proc_elim.m"
#line 366 "dead_proc_elim.m"
                      switch (transform_hlds__dead_proc_elim__AnalyzeWhat_9) {
#line 366 "dead_proc_elim.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 366 "dead_proc_elim.m"
                        case (MR_Integer) 1:
#line 433 "dead_proc_elim.m"
                          {
#line 433 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__ConstStructDb_50;
#line 433 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__ConstStruct_51;
#line 433 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__ConsId_52;
#line 433 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__Args_53;
#line 433 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_60;
#line 433 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_62;
#line 436 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__V_54_54;
#line 436 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__V_55_55;
#line 441 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__Module_56;
#line 441 "dead_proc_elim.m"
                            MR_String transform_hlds__dead_proc_elim__TypeName_57;
#line 441 "dead_proc_elim.m"
                            MR_Integer transform_hlds__dead_proc_elim__Arity_58;

#line 434 "dead_proc_elim.m"
                            {
#line 434 "dead_proc_elim.m"
                              hlds__hlds_module__module_info_get_const_struct_db_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_10, &transform_hlds__dead_proc_elim__ConstStructDb_50);
                            }
#line 435 "dead_proc_elim.m"
                            {
#line 435 "dead_proc_elim.m"
                              hlds__const_struct__lookup_const_struct_num_3_p_0(transform_hlds__dead_proc_elim__ConstStructDb_50, transform_hlds__dead_proc_elim__ConstNum_21, &transform_hlds__dead_proc_elim__ConstStruct_51);
                            }
#line 436 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__ConsId_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ConstStruct_51, (MR_Integer) 0)));
#line 436 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__Args_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ConstStruct_51, (MR_Integer) 1)));
#line 436 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ConstStruct_51, (MR_Integer) 2)));
#line 436 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ConstStruct_51, (MR_Integer) 3)));
#line 437 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__succeeded = ((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__ConsId_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_52, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 437 "dead_proc_elim.m"
                            if (transform_hlds__dead_proc_elim__succeeded)
#line 437 "dead_proc_elim.m"
                              {
#line 437 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__Module_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_52, (MR_Integer) 1)));
#line 437 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__TypeName_57 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_52, (MR_Integer) 2)));
#line 437 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__Arity_58 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_52, (MR_Integer) 3)));
#line 438 "dead_proc_elim.m"
                                {
#line 438 "dead_proc_elim.m"
                                  MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_30_65;
#line 438 "dead_proc_elim.m"
                                  MR_Word transform_hlds__dead_proc_elim__Entity_59;

#line 438 "dead_proc_elim.m"
                                  {
#line 438 "dead_proc_elim.m"
                                    transform_hlds__dead_proc_elim__Entity_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 438 "dead_proc_elim.m"
                                    MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_59, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Module_56));
#line 438 "dead_proc_elim.m"
                                    MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_59, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__TypeName_57));
#line 438 "dead_proc_elim.m"
                                    MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_59, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__Arity_58));
#line 438 "dead_proc_elim.m"
                                  }
#line 9406 "transform_hlds.dead_proc_elim.c"
                                  transform_hlds__dead_proc_elim__TypeCtorInfo_30_65 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 439 "dead_proc_elim.m"
                                  {
#line 439 "dead_proc_elim.m"
                                    mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_30_65, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_59)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_60);
                                  }
#line 440 "dead_proc_elim.m"
                                  {
#line 440 "dead_proc_elim.m"
                                    mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_30_65, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_59)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_62);
                                  }
#line 438 "dead_proc_elim.m"
                                }
#line 437 "dead_proc_elim.m"
                              }
#line 437 "dead_proc_elim.m"
                            else
#line 442 "dead_proc_elim.m"
                              {
#line 442 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_62 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24;
#line 442 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_60 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 442 "dead_proc_elim.m"
                              }
#line 444 "dead_proc_elim.m"
                            {
#line 444 "dead_proc_elim.m"
                              transform_hlds__dead_proc_elim__dead_proc_examine_const_struct_args_5_p_0(transform_hlds__dead_proc_elim__Args_53, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_60, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_32_32, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_62, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_33_33);
                            }
#line 433 "dead_proc_elim.m"
                          }
#line 366 "dead_proc_elim.m"
                          break;
#line 366 "dead_proc_elim.m"
                        case (MR_Integer) 0:
#line 365 "dead_proc_elim.m"
                          {
#line 365 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_32_32 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 365 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_33_33 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24;
#line 365 "dead_proc_elim.m"
                          }
#line 366 "dead_proc_elim.m"
                          break;
#line 366 "dead_proc_elim.m"
                      }
#line 363 "dead_proc_elim.m"
                    }
#line 350 "dead_proc_elim.m"
                    break;
#line 350 "dead_proc_elim.m"
                }
#line 350 "dead_proc_elim.m"
              }
#line 372 "dead_proc_elim.m"
            else
#line 373 "dead_proc_elim.m"
              {
#line 373 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_33_33 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24;
#line 373 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_34_34 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_0_23;
#line 373 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_32_32 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 373 "dead_proc_elim.m"
              }
#line 375 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 375 "dead_proc_elim.m"
            {
#line 375 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_22 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_32_32;
#line 375 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_0__tmp_copy_23 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_34_34;
#line 375 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_24 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_33_33;

#line 375 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_24;
#line 375 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_0_23 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_0__tmp_copy_23;
#line 375 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_22 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_22;
#line 375 "dead_proc_elim.m"
            }
#line 375 "dead_proc_elim.m"
            continue;
#line 374 "dead_proc_elim.m"
          }
#line 377 "dead_proc_elim.m"
        else
#line 378 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24;
#line 377 "dead_proc_elim.m"
      }
#line 377 "dead_proc_elim.m"
      break;
#line 377 "dead_proc_elim.m"
    }
#line 338 "dead_proc_elim.m"
}

#line 326 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__get_class_interface_pred_proc_5_p_0(
#line 326 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ClassProc_6,
#line 326 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_12,
#line 326 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_13,
#line 326 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_14,
#line 326 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_15)
#line 326 "dead_proc_elim.m"
{
#line 330 "dead_proc_elim.m"
  {
#line 330 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 330 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_19_19;
#line 330 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ClassProc_6, (MR_Integer) 0)));
#line 330 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ClassProc_6, (MR_Integer) 1)));
#line 330 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Entity_11;

#line 332 "dead_proc_elim.m"
    {
#line 332 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__Entity_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 332 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_11, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_9));
#line 332 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_11, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_10));
#line 332 "dead_proc_elim.m"
    }
#line 9549 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_19_19 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 333 "dead_proc_elim.m"
    {
#line 333 "dead_proc_elim.m"
      mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_19_19, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_11)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_12, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_13);
    }
#line 334 "dead_proc_elim.m"
    {
#line 334 "dead_proc_elim.m"
      mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_19_19, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_11)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_14, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_15);
    }
#line 330 "dead_proc_elim.m"
  }
#line 326 "dead_proc_elim.m"
}

#line 324 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0_1(
#line 324 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 324 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 324 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 324 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 324 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 324 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5)
#line 324 "dead_proc_elim.m"
{
#line 324 "dead_proc_elim.m"
  {
#line 324 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 324 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_13;
#line 324 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_15;

#line 324 "dead_proc_elim.m"
    {
#line 324 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__get_class_interface_pred_proc_5_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_13, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_4), &transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_15);
    }
#line 324 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_13));
#line 324 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_5 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_15));
#line 324 "dead_proc_elim.m"
  }
#line 324 "dead_proc_elim.m"
}

#line 318 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0(
#line 318 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Class_6,
#line 318 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_10,
#line 318 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_11,
#line 318 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_12,
#line 318 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_13)
#line 318 "dead_proc_elim.m"
{
#line 322 "dead_proc_elim.m"
  {
#line 322 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 322 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Methods_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Class_6, (MR_Integer) 7)));
#line 323 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Class_6, (MR_Integer) 0)));
#line 323 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Class_6, (MR_Integer) 1)));
#line 323 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Class_6, (MR_Integer) 2)));
#line 323 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Class_6, (MR_Integer) 3)));
#line 323 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Class_6, (MR_Integer) 4)));
#line 323 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Class_6, (MR_Integer) 5)));
#line 323 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Class_6, (MR_Integer) 6)));
#line 323 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Class_6, (MR_Integer) 8)));
#line 323 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Class_6, (MR_Integer) 9)));
#line 324 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_11;
#line 324 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_13;

#line 324 "dead_proc_elim.m"
    {
#line 324 "dead_proc_elim.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[4], (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[0], (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[12], transform_hlds__dead_proc_elim__Methods_9, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_10)), &transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_11, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_12)), &transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_13);
    }
#line 324 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_11 = ((MR_Word) transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_11);
#line 324 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_13 = ((MR_Word) transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_13);
#line 322 "dead_proc_elim.m"
  }
#line 318 "dead_proc_elim.m"
}

#line 315 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0_1(
#line 315 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 315 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 315 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 315 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 315 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 315 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5)
#line 315 "dead_proc_elim.m"
{
#line 315 "dead_proc_elim.m"
  {
#line 315 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 315 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_13;
#line 315 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_15;

#line 315 "dead_proc_elim.m"
    {
#line 315 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__get_class_interface_pred_proc_5_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_13, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_4), &transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_15);
    }
#line 315 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_13));
#line 315 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_5 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_15));
#line 315 "dead_proc_elim.m"
  }
#line 315 "dead_proc_elim.m"
}

#line 302 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0(
#line 302 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Instance_6,
#line 302 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_20,
#line 302 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_21,
#line 302 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_22,
#line 302 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_23)
#line 302 "dead_proc_elim.m"
{
#line 306 "dead_proc_elim.m"
  {
#line 306 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 306 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredProcIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Instance_6, (MR_Integer) 7)));
#line 307 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Instance_6, (MR_Integer) 0)));
#line 307 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Instance_6, (MR_Integer) 1)));
#line 307 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Instance_6, (MR_Integer) 2)));
#line 307 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Instance_6, (MR_Integer) 3)));
#line 307 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Instance_6, (MR_Integer) 4)));
#line 307 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Instance_6, (MR_Integer) 5)));
#line 307 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Instance_6, (MR_Integer) 6)));
#line 307 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Instance_6, (MR_Integer) 8)));
#line 307 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Instance_6, (MR_Integer) 9)));

#line 313 "dead_proc_elim.m"
    if ((transform_hlds__dead_proc_elim__PredProcIds_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 312 "dead_proc_elim.m"
      {
#line 312 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_21 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_20;
#line 312 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_23 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_22;
#line 312 "dead_proc_elim.m"
      }
#line 313 "dead_proc_elim.m"
    else
#line 314 "dead_proc_elim.m"
      {
#line 314 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__Ids_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__PredProcIds_16, (MR_Integer) 0)));
#line 315 "dead_proc_elim.m"
        MR_Box transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_21;
#line 315 "dead_proc_elim.m"
        MR_Box transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_23;

#line 315 "dead_proc_elim.m"
        {
#line 315 "dead_proc_elim.m"
          mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[4], (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[0], (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[11], transform_hlds__dead_proc_elim__Ids_19, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_20)), &transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_21, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_22)), &transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_23);
        }
#line 315 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_21 = ((MR_Word) transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_21);
#line 315 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_23 = ((MR_Word) transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_23);
#line 314 "dead_proc_elim.m"
      }
#line 306 "dead_proc_elim.m"
  }
#line 302 "dead_proc_elim.m"
}

#line 300 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_p_0_2(
#line 300 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 300 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 300 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 300 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 300 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 300 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5)
#line 300 "dead_proc_elim.m"
{
#line 300 "dead_proc_elim.m"
  {
#line 300 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 300 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_Queue_11;
#line 300 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_Needed_13;

#line 300 "dead_proc_elim.m"
    {
#line 300 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_Queue_11, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_4), &transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_Needed_13);
    }
#line 300 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_Queue_11));
#line 300 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_5 = ((MR_Box) (transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_Needed_13));
#line 300 "dead_proc_elim.m"
  }
#line 300 "dead_proc_elim.m"
}

#line 298 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_p_0_1(
#line 298 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 298 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 298 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 298 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 298 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 298 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5)
#line 298 "dead_proc_elim.m"
{
#line 298 "dead_proc_elim.m"
  {
#line 298 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 298 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_21;
#line 298 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_23;

#line 298 "dead_proc_elim.m"
    {
#line 298 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_21, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_4), &transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_23);
    }
#line 298 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_21));
#line 298 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_5 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_23));
#line 298 "dead_proc_elim.m"
  }
#line 298 "dead_proc_elim.m"
}

#line 290 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_p_0(
#line 290 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Classes_7,
#line 290 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Instances_8,
#line 290 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_14,
#line 290 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_15,
#line 290 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_16,
#line 290 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_17)
#line 290 "dead_proc_elim.m"
{
#line 295 "dead_proc_elim.m"
  {
#line 295 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 295 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 295 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_26_26;
#line 295 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeInfo_32_32;
#line 295 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeInfo_33_33;
#line 295 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_34_34;
#line 295 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__InstanceDefnsLists_11;
#line 295 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__InstanceDefns_12;
#line 295 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ClassDefns_13;
#line 295 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_19;
#line 295 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_20;
#line 298 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_19_19;
#line 298 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_20_20;
#line 300 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv7_STATE_VARIABLE_Queue_15;
#line 300 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_Needed_17;

#line 296 "dead_proc_elim.m"
    {
#line 296 "dead_proc_elim.m"
      mercury__map__values_2_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_24_24, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[3], transform_hlds__dead_proc_elim__Instances_8, &transform_hlds__dead_proc_elim__InstanceDefnsLists_11);
    }
#line 9916 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
#line 297 "dead_proc_elim.m"
    {
#line 297 "dead_proc_elim.m"
      mercury__list__condense_2_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_26_26, transform_hlds__dead_proc_elim__InstanceDefnsLists_11, &transform_hlds__dead_proc_elim__InstanceDefns_12);
    }
#line 9923 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeInfo_32_32 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[4];
#line 9925 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeInfo_33_33 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[0];
#line 298 "dead_proc_elim.m"
    {
#line 298 "dead_proc_elim.m"
      mercury__list__foldl2_6_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_26_26, transform_hlds__dead_proc_elim__TypeInfo_32_32, transform_hlds__dead_proc_elim__TypeInfo_33_33, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[9], transform_hlds__dead_proc_elim__InstanceDefns_12, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_14)), &transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_19_19, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_16)), &transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_20_20);
    }
#line 298 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_19 = ((MR_Word) transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_19_19);
#line 298 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_20 = ((MR_Word) transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_20_20);
#line 9936 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_34_34 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0;
#line 299 "dead_proc_elim.m"
    {
#line 299 "dead_proc_elim.m"
      mercury__map__values_2_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_24_24, transform_hlds__dead_proc_elim__TypeCtorInfo_34_34, transform_hlds__dead_proc_elim__Classes_7, &transform_hlds__dead_proc_elim__ClassDefns_13);
    }
#line 300 "dead_proc_elim.m"
    {
#line 300 "dead_proc_elim.m"
      mercury__list__foldl2_6_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_34_34, transform_hlds__dead_proc_elim__TypeInfo_32_32, transform_hlds__dead_proc_elim__TypeInfo_33_33, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[10], transform_hlds__dead_proc_elim__ClassDefns_13, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_19)), &transform_hlds__dead_proc_elim__conv7_STATE_VARIABLE_Queue_15, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_20)), &transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_Needed_17);
    }
#line 300 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_15 = ((MR_Word) transform_hlds__dead_proc_elim__conv7_STATE_VARIABLE_Queue_15);
#line 300 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_17 = ((MR_Word) transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_Needed_17);
#line 295 "dead_proc_elim.m"
  }
#line 290 "dead_proc_elim.m"
}

#line 256 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_type_ctor_infos_5_p_0(
#line 256 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 256 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 256 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 256 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4,
#line 256 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5)
#line 256 "dead_proc_elim.m"
{
#line 260 "dead_proc_elim.m"
  while (MR_TRUE)
#line 260 "dead_proc_elim.m"
    {
#line 260 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 260 "dead_proc_elim.m"
      {
#line 260 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 260 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 260 "dead_proc_elim.m"
          {
#line 260 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4;
#line 260 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2;
#line 260 "dead_proc_elim.m"
          }
#line 260 "dead_proc_elim.m"
        else
#line 262 "dead_proc_elim.m"
          {
#line 262 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 262 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfos_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 262 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_12, (MR_Integer) 1)));
#line 262 "dead_proc_elim.m"
            MR_String transform_hlds__dead_proc_elim__TypeName_18 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_12, (MR_Integer) 2)));
#line 262 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__Arity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_12, (MR_Integer) 3)));
#line 262 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_29_29;
#line 262 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_31_31;
#line 263 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim___TypeCtor_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_12, (MR_Integer) 0)));
#line 263 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim___Status_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_12, (MR_Integer) 4)));
#line 263 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim___HldsDefn_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_12, (MR_Integer) 5)));
#line 263 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim___Unify_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_12, (MR_Integer) 6)));
#line 263 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim___Compare_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_12, (MR_Integer) 7)));

#line 280 "dead_proc_elim.m"
            {
#line 280 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__succeeded = mercury__builtin__semidet_succeed_0_p_0();
            }
#line 285 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 282 "dead_proc_elim.m"
              {
#line 282 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_34_34;
#line 282 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__Entity_24;

#line 282 "dead_proc_elim.m"
                {
#line 282 "dead_proc_elim.m"
                  transform_hlds__dead_proc_elim__Entity_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 282 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_24, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ModuleName_17));
#line 282 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_24, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__TypeName_18));
#line 282 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_24, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__Arity_19));
#line 282 "dead_proc_elim.m"
                }
#line 10048 "transform_hlds.dead_proc_elim.c"
                transform_hlds__dead_proc_elim__TypeCtorInfo_34_34 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 283 "dead_proc_elim.m"
                {
#line 283 "dead_proc_elim.m"
                  mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_34_34, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_24)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_29_29);
                }
#line 284 "dead_proc_elim.m"
                {
#line 284 "dead_proc_elim.m"
                  mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_34_34, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_24)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_31_31);
                }
#line 282 "dead_proc_elim.m"
              }
#line 285 "dead_proc_elim.m"
            else
#line 286 "dead_proc_elim.m"
              {
#line 286 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_31_31 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4;
#line 286 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_29_29 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2;
#line 286 "dead_proc_elim.m"
              }
#line 288 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 288 "dead_proc_elim.m"
            {
#line 288 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1 = transform_hlds__dead_proc_elim__TypeCtorGenInfos_13;
#line 288 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_2 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_29_29;
#line 288 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_31_31;

#line 288 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_4;
#line 288 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_2;
#line 288 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1;
#line 288 "dead_proc_elim.m"
            }
#line 288 "dead_proc_elim.m"
            continue;
#line 262 "dead_proc_elim.m"
          }
#line 260 "dead_proc_elim.m"
      }
#line 260 "dead_proc_elim.m"
      break;
#line 260 "dead_proc_elim.m"
    }
#line 256 "dead_proc_elim.m"
}

#line 244 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_p_0(
#line 244 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 244 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 244 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 244 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4,
#line 244 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5)
#line 244 "dead_proc_elim.m"
{
#line 248 "dead_proc_elim.m"
  while (MR_TRUE)
#line 248 "dead_proc_elim.m"
    {
#line 248 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 248 "dead_proc_elim.m"
      {
#line 248 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 248 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 248 "dead_proc_elim.m"
          {
#line 248 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4;
#line 248 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2;
#line 248 "dead_proc_elim.m"
          }
#line 248 "dead_proc_elim.m"
        else
#line 249 "dead_proc_elim.m"
          {
#line 249 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_28_28;
#line 249 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PPId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 249 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PPIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 249 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__PPId_12, (MR_Integer) 0)));
#line 249 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__ProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__PPId_12, (MR_Integer) 1)));
#line 249 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Entity_18;
#line 249 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_23;
#line 249 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25_25;

#line 251 "dead_proc_elim.m"
            {
#line 251 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__Entity_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 251 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_18, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_16));
#line 251 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_18, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_17));
#line 251 "dead_proc_elim.m"
            }
#line 10171 "transform_hlds.dead_proc_elim.c"
            transform_hlds__dead_proc_elim__TypeCtorInfo_28_28 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 252 "dead_proc_elim.m"
            {
#line 252 "dead_proc_elim.m"
              mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_28_28, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_18)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_23);
            }
#line 253 "dead_proc_elim.m"
            {
#line 253 "dead_proc_elim.m"
              mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_28_28, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_18)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25_25);
            }
#line 254 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 254 "dead_proc_elim.m"
            {
#line 254 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1 = transform_hlds__dead_proc_elim__PPIds_13;
#line 254 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_2 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_23;
#line 254 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25_25;

#line 254 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_4;
#line 254 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_2;
#line 254 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1;
#line 254 "dead_proc_elim.m"
            }
#line 254 "dead_proc_elim.m"
            continue;
#line 249 "dead_proc_elim.m"
          }
#line 248 "dead_proc_elim.m"
      }
#line 248 "dead_proc_elim.m"
      break;
#line 248 "dead_proc_elim.m"
    }
#line 244 "dead_proc_elim.m"
}

#line 227 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_p_0(
#line 227 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 227 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 227 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 227 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4,
#line 227 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5)
#line 227 "dead_proc_elim.m"
{
#line 231 "dead_proc_elim.m"
  while (MR_TRUE)
#line 231 "dead_proc_elim.m"
    {
#line 231 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 231 "dead_proc_elim.m"
      {
#line 231 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 231 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 231 "dead_proc_elim.m"
          {
#line 231 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4;
#line 231 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2;
#line 231 "dead_proc_elim.m"
          }
#line 231 "dead_proc_elim.m"
        else
#line 233 "dead_proc_elim.m"
          {
#line 233 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_31_31;
#line 233 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PragmaProc_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 233 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PragmaProcs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 233 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__PragmaProc_12, (MR_Integer) 1)));
#line 233 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__PragmaProc_12, (MR_Integer) 2)));
#line 233 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Entity_21;
#line 233 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 233 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_28_28;
#line 234 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim___Lang_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__PragmaProc_12, (MR_Integer) 0)));
#line 234 "dead_proc_elim.m"
            MR_String transform_hlds__dead_proc_elim___ExportName_19 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__PragmaProc_12, (MR_Integer) 3)));
#line 234 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim___Ctxt_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__PragmaProc_12, (MR_Integer) 4)));

#line 236 "dead_proc_elim.m"
            {
#line 236 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__Entity_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 236 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_21, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_17));
#line 236 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_21, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_18));
#line 236 "dead_proc_elim.m"
            }
#line 10288 "transform_hlds.dead_proc_elim.c"
            transform_hlds__dead_proc_elim__TypeCtorInfo_31_31 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 237 "dead_proc_elim.m"
            {
#line 237 "dead_proc_elim.m"
              mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_31_31, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_21)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26);
            }
#line 238 "dead_proc_elim.m"
            {
#line 238 "dead_proc_elim.m"
              mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_31_31, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_21)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_28_28);
            }
#line 239 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 239 "dead_proc_elim.m"
            {
#line 239 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1 = transform_hlds__dead_proc_elim__PragmaProcs_13;
#line 239 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_2 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 239 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_28_28;

#line 239 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_4;
#line 239 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_2;
#line 239 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1;
#line 239 "dead_proc_elim.m"
            }
#line 239 "dead_proc_elim.m"
            continue;
#line 233 "dead_proc_elim.m"
          }
#line 231 "dead_proc_elim.m"
      }
#line 231 "dead_proc_elim.m"
      break;
#line 231 "dead_proc_elim.m"
    }
#line 227 "dead_proc_elim.m"
}

#line 213 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_procs_6_p_0(
#line 213 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 213 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 213 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3,
#line 213 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4,
#line 213 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5,
#line 213 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6)
#line 213 "dead_proc_elim.m"
{
#line 217 "dead_proc_elim.m"
  while (MR_TRUE)
#line 217 "dead_proc_elim.m"
    {
#line 217 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 217 "dead_proc_elim.m"
      {
#line 217 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 217 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 217 "dead_proc_elim.m"
          {
#line 217 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5;
#line 217 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3;
#line 217 "dead_proc_elim.m"
          }
#line 217 "dead_proc_elim.m"
        else
#line 218 "dead_proc_elim.m"
          {
#line 218 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_29_29;
#line 218 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__ProcId_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));
#line 218 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__ProcIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 1)));
#line 218 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Entity_19;
#line 218 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_24_24;
#line 218 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_26_26;

#line 219 "dead_proc_elim.m"
            {
#line 219 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__Entity_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 219 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_19, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__HeadVar__1_1));
#line 219 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_19, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_15));
#line 219 "dead_proc_elim.m"
            }
#line 10397 "transform_hlds.dead_proc_elim.c"
            transform_hlds__dead_proc_elim__TypeCtorInfo_29_29 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 220 "dead_proc_elim.m"
            {
#line 220 "dead_proc_elim.m"
              mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_29_29, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_19)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_24_24);
            }
#line 221 "dead_proc_elim.m"
            {
#line 221 "dead_proc_elim.m"
              mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_29_29, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_19)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_26_26);
            }
#line 222 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 222 "dead_proc_elim.m"
            {
#line 222 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__HeadVar__2__tmp_copy_2 = transform_hlds__dead_proc_elim__ProcIds_16;
#line 222 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_24_24;
#line 222 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_26_26;

#line 222 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_5;
#line 222 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_3;
#line 222 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__HeadVar__2_2 = transform_hlds__dead_proc_elim__HeadVar__2__tmp_copy_2;
#line 222 "dead_proc_elim.m"
            }
#line 222 "dead_proc_elim.m"
            continue;
#line 218 "dead_proc_elim.m"
          }
#line 217 "dead_proc_elim.m"
      }
#line 217 "dead_proc_elim.m"
      break;
#line 217 "dead_proc_elim.m"
    }
#line 213 "dead_proc_elim.m"
}

#line 200 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_preds_6_p_0(
#line 200 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 200 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 200 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3,
#line 200 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4,
#line 200 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5,
#line 200 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6)
#line 200 "dead_proc_elim.m"
{
#line 204 "dead_proc_elim.m"
  while (MR_TRUE)
#line 204 "dead_proc_elim.m"
    {
#line 204 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 204 "dead_proc_elim.m"
      {
#line 204 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 204 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 204 "dead_proc_elim.m"
          {
#line 204 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5;
#line 204 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3;
#line 204 "dead_proc_elim.m"
          }
#line 204 "dead_proc_elim.m"
        else
#line 205 "dead_proc_elim.m"
          {
#line 205 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 205 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PredIds_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 205 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PredInfo_19;
#line 205 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__ProcIds_20;
#line 205 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_25;
#line 205 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_26_26;
#line 206 "dead_proc_elim.m"
            MR_Box transform_hlds__dead_proc_elim__conv0_PredInfo_19;

#line 206 "dead_proc_elim.m"
            {
#line 206 "dead_proc_elim.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, transform_hlds__dead_proc_elim__HeadVar__2_2, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_14)), &transform_hlds__dead_proc_elim__conv0_PredInfo_19);
            }
#line 206 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__PredInfo_19 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_PredInfo_19);
#line 207 "dead_proc_elim.m"
            {
#line 207 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__ProcIds_20 = hlds__hlds_pred__pred_info_exported_procids_1_f_0(transform_hlds__dead_proc_elim__PredInfo_19);
            }
#line 208 "dead_proc_elim.m"
            {
#line 208 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__dead_proc_initialize_procs_6_p_0(transform_hlds__dead_proc_elim__PredId_14, transform_hlds__dead_proc_elim__ProcIds_20, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_25, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_26_26);
            }
#line 209 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 209 "dead_proc_elim.m"
            {
#line 209 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1 = transform_hlds__dead_proc_elim__PredIds_15;
#line 209 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_25;
#line 209 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_26_26;

#line 209 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_5;
#line 209 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_3;
#line 209 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1;
#line 209 "dead_proc_elim.m"
            }
#line 209 "dead_proc_elim.m"
            continue;
#line 205 "dead_proc_elim.m"
          }
#line 204 "dead_proc_elim.m"
      }
#line 204 "dead_proc_elim.m"
      break;
#line 204 "dead_proc_elim.m"
    }
#line 200 "dead_proc_elim.m"
}

#line 1051 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_4(
#line 1051 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1051 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1)
#line 1051 "dead_proc_elim.m"
{
#line 1051 "dead_proc_elim.m"
  {
#line 1051 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 1051 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;

#line 1051 "dead_proc_elim.m"
    {
#line 1051 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__1051__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1));
    }
#line 1051 "dead_proc_elim.m"
    return transform_hlds__dead_proc_elim__succeeded;
#line 1051 "dead_proc_elim.m"
  }
#line 1051 "dead_proc_elim.m"
}

#line 1038 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_3(
#line 1038 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1038 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1038 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1038 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 1038 "dead_proc_elim.m"
{
#line 1038 "dead_proc_elim.m"
  {
#line 1038 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 1038 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv6_LambdaHeadVar__3_53;

#line 1038 "dead_proc_elim.m"
    {
#line 1038 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__1041__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv6_LambdaHeadVar__3_53);
    }
#line 1038 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv6_LambdaHeadVar__3_53));
#line 1038 "dead_proc_elim.m"
  }
#line 1038 "dead_proc_elim.m"
}

#line 1026 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_2(
#line 1026 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1026 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1026 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1026 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 1026 "dead_proc_elim.m"
{
#line 1026 "dead_proc_elim.m"
  {
#line 1026 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 1026 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv4_DeadInfo_6;

#line 1026 "dead_proc_elim.m"
    {
#line 1026 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv4_DeadInfo_6);
    }
#line 1026 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv4_DeadInfo_6));
#line 1026 "dead_proc_elim.m"
  }
#line 1026 "dead_proc_elim.m"
}

#line 1017 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_1(
#line 1017 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1017 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1017 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1017 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 1017 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 1017 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5)
#line 1017 "dead_proc_elim.m"
{
#line 1017 "dead_proc_elim.m"
  {
#line 1017 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 1017 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_3;
#line 1017 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Preds_5;

#line 1017 "dead_proc_elim.m"
    {
#line 1017 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_pred_elim_add_entity_5_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_3, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_4), &transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Preds_5);
    }
#line 1017 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_3));
#line 1017 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_5 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Preds_5));
#line 1017 "dead_proc_elim.m"
  }
#line 1017 "dead_proc_elim.m"
}

#line 76 "dead_proc_elim.m"
void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0(
#line 76 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_44,
#line 76 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_45)
#line 76 "dead_proc_elim.m"
{
#line 1000 "dead_proc_elim.m"
  {
#line 1000 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_61_61 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_62_62;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_64_64;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeInfo_71_71;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Queue0_4;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Needed0_5;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PragmaExports_6;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Needed1_8;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Instances_9;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Classes_10;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Needed_12;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Entities_13;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Queue1_14;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__NeededPreds0_15;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Queue_16;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__NeededPreds1_17;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredIds_18;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Preds0_19;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Names0_20;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__DeadInfo0_21;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__DeadInfo1_22;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__DeadInfo_23;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__NeededPreds2_26;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeSpecInfo0_28;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeSpecProcs0_29;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeSpecForcePreds0_30;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__SpecMap0_31;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PragmaMap0_32;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__NeededPredList2_33;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__NeededPreds_38;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeSpecForcePreds_39;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeSpecInfo_40;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredTable0_41;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PartialQualInfo_42;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredTable_43;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_46_46;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_49_49;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_50_50;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_54_54;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_55_55;
#line 1000 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_56_56;
#line 1004 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_7_7;
#line 1012 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_11_11;
#line 1017 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv3_Queue_16;
#line 1017 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv2_NeededPreds1_17;
#line 1026 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv5_DeadInfo1_22;
#line 1028 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_24_24;
#line 1028 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_25_25;
#line 1028 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_27_27;
#line 1038 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv7_NeededPreds_38;

#line 1001 "dead_proc_elim.m"
    {
#line 1001 "dead_proc_elim.m"
      mercury__queue__init_1_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_61_61, &transform_hlds__dead_proc_elim__Queue0_4);
    }
#line 10798 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_62_62 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0;
#line 1002 "dead_proc_elim.m"
    {
#line 1002 "dead_proc_elim.m"
      mercury__map__init_1_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_61_61, transform_hlds__dead_proc_elim__TypeCtorInfo_62_62, &transform_hlds__dead_proc_elim__Needed0_5);
    }
#line 1003 "dead_proc_elim.m"
    {
#line 1003 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_44, &transform_hlds__dead_proc_elim__PragmaExports_6);
    }
#line 1004 "dead_proc_elim.m"
    {
#line 1004 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__V_46_46 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, transform_hlds__dead_proc_elim__PragmaExports_6);
    }
#line 1004 "dead_proc_elim.m"
    {
#line 1004 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_p_0(transform_hlds__dead_proc_elim__V_46_46, transform_hlds__dead_proc_elim__Queue0_4, &transform_hlds__dead_proc_elim__V_7_7, transform_hlds__dead_proc_elim__Needed0_5, &transform_hlds__dead_proc_elim__Needed1_8);
    }
#line 1010 "dead_proc_elim.m"
    {
#line 1010 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_instance_table_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_44, &transform_hlds__dead_proc_elim__Instances_9);
    }
#line 1011 "dead_proc_elim.m"
    {
#line 1011 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_44, &transform_hlds__dead_proc_elim__Classes_10);
    }
#line 1012 "dead_proc_elim.m"
    {
#line 1012 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_p_0(transform_hlds__dead_proc_elim__Classes_10, transform_hlds__dead_proc_elim__Instances_9, transform_hlds__dead_proc_elim__Queue0_4, &transform_hlds__dead_proc_elim__V_11_11, transform_hlds__dead_proc_elim__Needed1_8, &transform_hlds__dead_proc_elim__Needed_12);
    }
#line 1014 "dead_proc_elim.m"
    {
#line 1014 "dead_proc_elim.m"
      mercury__map__keys_2_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_61_61, transform_hlds__dead_proc_elim__TypeCtorInfo_62_62, transform_hlds__dead_proc_elim__Needed_12, &transform_hlds__dead_proc_elim__Entities_13);
    }
#line 10840 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_64_64 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 1015 "dead_proc_elim.m"
    {
#line 1015 "dead_proc_elim.m"
      mercury__queue__init_1_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_64_64, &transform_hlds__dead_proc_elim__Queue1_14);
    }
#line 1016 "dead_proc_elim.m"
    {
#line 1016 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__NeededPreds0_15 = mercury__set_tree234__init_0_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_64_64);
    }
#line 10852 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeInfo_71_71 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[1];
#line 1017 "dead_proc_elim.m"
    {
#line 1017 "dead_proc_elim.m"
      mercury__list__foldl2_6_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_61_61, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[0], transform_hlds__dead_proc_elim__TypeInfo_71_71, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[7], transform_hlds__dead_proc_elim__Entities_13, ((MR_Box) (transform_hlds__dead_proc_elim__Queue1_14)), &transform_hlds__dead_proc_elim__conv3_Queue_16, ((MR_Box) (transform_hlds__dead_proc_elim__NeededPreds0_15)), &transform_hlds__dead_proc_elim__conv2_NeededPreds1_17);
    }
#line 1017 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__Queue_16 = ((MR_Word) transform_hlds__dead_proc_elim__conv3_Queue_16);
#line 1017 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__NeededPreds1_17 = ((MR_Word) transform_hlds__dead_proc_elim__conv2_NeededPreds1_17);
#line 1020 "dead_proc_elim.m"
    {
#line 1020 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_44, &transform_hlds__dead_proc_elim__PredIds_18);
    }
#line 1022 "dead_proc_elim.m"
    {
#line 1022 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__Preds0_19 = mercury__set_tree234__init_0_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_64_64);
    }
#line 1023 "dead_proc_elim.m"
    {
#line 1023 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__Names0_20 = mercury__set_tree234__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
    }
#line 1024 "dead_proc_elim.m"
    {
#line 1024 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__DeadInfo0_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1024 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo0_21, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_44));
#line 1024 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo0_21, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__Queue_16));
#line 1024 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo0_21, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__Preds0_19));
#line 1024 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo0_21, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__NeededPreds1_17));
#line 1024 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo0_21, 4) = ((MR_Box) (transform_hlds__dead_proc_elim__Names0_20));
#line 1024 "dead_proc_elim.m"
    }
#line 1026 "dead_proc_elim.m"
    {
#line 1026 "dead_proc_elim.m"
      mercury__list__foldl_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_64_64, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[8], transform_hlds__dead_proc_elim__PredIds_18, ((MR_Box) (transform_hlds__dead_proc_elim__DeadInfo0_21)), &transform_hlds__dead_proc_elim__conv5_DeadInfo1_22);
    }
#line 1026 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__DeadInfo1_22 = ((MR_Word) transform_hlds__dead_proc_elim__conv5_DeadInfo1_22);
#line 1027 "dead_proc_elim.m"
    {
#line 1027 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_p_0(transform_hlds__dead_proc_elim__DeadInfo1_22, &transform_hlds__dead_proc_elim__DeadInfo_23);
    }
#line 1028 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo_23, (MR_Integer) 0)));
#line 1028 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo_23, (MR_Integer) 1)));
#line 1028 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo_23, (MR_Integer) 2)));
#line 1028 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__NeededPreds2_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo_23, (MR_Integer) 3)));
#line 1028 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo_23, (MR_Integer) 4)));
#line 1034 "dead_proc_elim.m"
    {
#line 1034 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_type_spec_info_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_49_49, &transform_hlds__dead_proc_elim__TypeSpecInfo0_28);
    }
#line 1035 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__TypeSpecProcs0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeSpecInfo0_28, (MR_Integer) 0)));
#line 1035 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__TypeSpecForcePreds0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeSpecInfo0_28, (MR_Integer) 1)));
#line 1035 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__SpecMap0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeSpecInfo0_28, (MR_Integer) 2)));
#line 1035 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__PragmaMap0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeSpecInfo0_28, (MR_Integer) 3)));
#line 1037 "dead_proc_elim.m"
    {
#line 1037 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__NeededPredList2_33 = mercury__set_tree234__to_sorted_list_1_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_64_64, transform_hlds__dead_proc_elim__NeededPreds2_26);
    }
#line 1038 "dead_proc_elim.m"
    {
#line 1038 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1038 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_50_50, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_6[0]));
#line 1038 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_50_50, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_3));
#line 1038 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1038 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_50_50, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__SpecMap0_31));
#line 1038 "dead_proc_elim.m"
    }
#line 1038 "dead_proc_elim.m"
    {
#line 1038 "dead_proc_elim.m"
      mercury__list__foldl_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_64_64, transform_hlds__dead_proc_elim__TypeInfo_71_71, transform_hlds__dead_proc_elim__V_50_50, transform_hlds__dead_proc_elim__NeededPredList2_33, ((MR_Box) (transform_hlds__dead_proc_elim__NeededPreds2_26)), &transform_hlds__dead_proc_elim__conv7_NeededPreds_38);
    }
#line 1038 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__NeededPreds_38 = ((MR_Word) transform_hlds__dead_proc_elim__conv7_NeededPreds_38);
#line 1051 "dead_proc_elim.m"
    {
#line 1051 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1051 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_54_54, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_7[0]));
#line 1051 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_54_54, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_4));
#line 1051 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_54_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1051 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_54_54, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__NeededPreds_38));
#line 1051 "dead_proc_elim.m"
    }
#line 1051 "dead_proc_elim.m"
    {
#line 1051 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__TypeSpecForcePreds_39 = mercury__set__filter_2_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_64_64, transform_hlds__dead_proc_elim__V_54_54, transform_hlds__dead_proc_elim__TypeSpecForcePreds0_30);
    }
#line 1053 "dead_proc_elim.m"
    {
#line 1053 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__TypeSpecInfo_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1053 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeSpecInfo_40, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__TypeSpecProcs0_29));
#line 1053 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeSpecInfo_40, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__TypeSpecForcePreds_39));
#line 1053 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeSpecInfo_40, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__SpecMap0_31));
#line 1053 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeSpecInfo_40, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__PragmaMap0_32));
#line 1053 "dead_proc_elim.m"
    }
#line 1055 "dead_proc_elim.m"
    {
#line 1055 "dead_proc_elim.m"
      hlds__hlds_module__module_info_set_type_spec_info_3_p_0(transform_hlds__dead_proc_elim__TypeSpecInfo_40, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_49_49, &transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_55_55);
    }
#line 1057 "dead_proc_elim.m"
    {
#line 1057 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_55_55, &transform_hlds__dead_proc_elim__PredTable0_41);
    }
#line 1058 "dead_proc_elim.m"
    {
#line 1058 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_55_55, &transform_hlds__dead_proc_elim__PartialQualInfo_42);
    }
#line 1060 "dead_proc_elim.m"
    {
#line 1060 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__V_56_56 = mercury__set_tree234__to_sorted_list_1_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_64_64, transform_hlds__dead_proc_elim__NeededPreds_38);
    }
#line 1059 "dead_proc_elim.m"
    {
#line 1059 "dead_proc_elim.m"
      hlds__pred_table__predicate_table_restrict_4_p_0(transform_hlds__dead_proc_elim__PartialQualInfo_42, transform_hlds__dead_proc_elim__V_56_56, transform_hlds__dead_proc_elim__PredTable0_41, &transform_hlds__dead_proc_elim__PredTable_43);
    }
#line 1061 "dead_proc_elim.m"
    {
#line 1061 "dead_proc_elim.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__dead_proc_elim__PredTable_43, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_55_55, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_45);
    }
#line 1000 "dead_proc_elim.m"
  }
#line 76 "dead_proc_elim.m"
}

#line 300 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_analyze_2_p_0_2(
#line 300 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 300 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 300 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 300 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 300 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 300 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5)
#line 300 "dead_proc_elim.m"
{
#line 300 "dead_proc_elim.m"
  {
#line 300 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 300 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_Queue_11;
#line 300 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_Needed_13;

#line 300 "dead_proc_elim.m"
    {
#line 300 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_Queue_11, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_4), &transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_Needed_13);
    }
#line 300 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_Queue_11));
#line 300 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_5 = ((MR_Box) (transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_Needed_13));
#line 300 "dead_proc_elim.m"
  }
#line 300 "dead_proc_elim.m"
}

#line 298 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_analyze_2_p_0_1(
#line 298 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 298 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 298 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 298 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 298 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 298 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5)
#line 298 "dead_proc_elim.m"
{
#line 298 "dead_proc_elim.m"
  {
#line 298 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 298 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_21;
#line 298 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_23;

#line 298 "dead_proc_elim.m"
    {
#line 298 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_21, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_4), &transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_23);
    }
#line 298 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_21));
#line 298 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_5 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_23));
#line 298 "dead_proc_elim.m"
  }
#line 298 "dead_proc_elim.m"
}

#line 68 "dead_proc_elim.m"
void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_analyze_2_p_0(
#line 68 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ModuleInfo_3,
#line 68 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5)
#line 68 "dead_proc_elim.m"
{
#line 145 "dead_proc_elim.m"
  {
#line 145 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_32_45;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_24_65;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_26_67;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeInfo_32_73;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeInfo_33_74;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_34_75;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Examined0_12;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Queue0_13;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_10_14;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredIds_22;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredTable_23;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PragmaExports_24;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__InitProcs_25;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__FinalPreds_26;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfos_27;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Classes_28;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Instances_29;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_17_30;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_18_31;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_32;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_33;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_34_34;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_22_35;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_23_36;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_24_37;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25_38;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_39;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_40;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_28_41;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_29_42;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__InstanceDefnsLists_56;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__InstanceDefns_57;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ClassDefns_58;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_60;
#line 145 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_61;
#line 298 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_19_60;
#line 298 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_20_61;
#line 300 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv7_Queue0_13;
#line 300 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_Needed_10_14;

#line 162 "dead_proc_elim.m"
    {
#line 162 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__Examined0_12 = mercury__set_tree234__init_0_f_0((MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0);
    }
#line 11200 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_32_45 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 174 "dead_proc_elim.m"
    {
#line 174 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_17_30 = mercury__queue__init_0_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_32_45);
    }
#line 175 "dead_proc_elim.m"
    {
#line 175 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_18_31 = mercury__map__init_0_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_32_45, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0);
    }
#line 176 "dead_proc_elim.m"
    {
#line 176 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_3, &transform_hlds__dead_proc_elim__PredIds_22);
    }
#line 177 "dead_proc_elim.m"
    {
#line 177 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_3, &transform_hlds__dead_proc_elim__PredTable_23);
    }
#line 178 "dead_proc_elim.m"
    {
#line 178 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_preds_6_p_0(transform_hlds__dead_proc_elim__PredIds_22, transform_hlds__dead_proc_elim__PredTable_23, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_17_30, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_32, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_18_31, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_33);
    }
#line 180 "dead_proc_elim.m"
    {
#line 180 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_3, &transform_hlds__dead_proc_elim__PragmaExports_24);
    }
#line 181 "dead_proc_elim.m"
    {
#line 181 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__V_34_34 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, transform_hlds__dead_proc_elim__PragmaExports_24);
    }
#line 181 "dead_proc_elim.m"
    {
#line 181 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_p_0(transform_hlds__dead_proc_elim__V_34_34, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_32, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_22_35, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_33, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_23_36);
    }
#line 184 "dead_proc_elim.m"
    {
#line 184 "dead_proc_elim.m"
      hlds__hlds_module__module_info_user_init_pred_procs_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_3, &transform_hlds__dead_proc_elim__InitProcs_25);
    }
#line 185 "dead_proc_elim.m"
    {
#line 185 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_p_0(transform_hlds__dead_proc_elim__InitProcs_25, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_22_35, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_24_37, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_23_36, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25_38);
    }
#line 187 "dead_proc_elim.m"
    {
#line 187 "dead_proc_elim.m"
      hlds__hlds_module__module_info_user_final_pred_procs_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_3, &transform_hlds__dead_proc_elim__FinalPreds_26);
    }
#line 188 "dead_proc_elim.m"
    {
#line 188 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_p_0(transform_hlds__dead_proc_elim__FinalPreds_26, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_24_37, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_39, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25_38, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_40);
    }
#line 190 "dead_proc_elim.m"
    {
#line 190 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_type_ctor_gen_infos_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_3, &transform_hlds__dead_proc_elim__TypeCtorGenInfos_27);
    }
#line 191 "dead_proc_elim.m"
    {
#line 191 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_type_ctor_infos_5_p_0(transform_hlds__dead_proc_elim__TypeCtorGenInfos_27, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_39, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_28_41, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_40, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_29_42);
    }
#line 193 "dead_proc_elim.m"
    {
#line 193 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_3, &transform_hlds__dead_proc_elim__Classes_28);
    }
#line 194 "dead_proc_elim.m"
    {
#line 194 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_instance_table_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_3, &transform_hlds__dead_proc_elim__Instances_29);
    }
#line 11282 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_24_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 296 "dead_proc_elim.m"
    {
#line 296 "dead_proc_elim.m"
      mercury__map__values_2_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_24_65, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[3], transform_hlds__dead_proc_elim__Instances_29, &transform_hlds__dead_proc_elim__InstanceDefnsLists_56);
    }
#line 11289 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_26_67 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
#line 297 "dead_proc_elim.m"
    {
#line 297 "dead_proc_elim.m"
      mercury__list__condense_2_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_26_67, transform_hlds__dead_proc_elim__InstanceDefnsLists_56, &transform_hlds__dead_proc_elim__InstanceDefns_57);
    }
#line 11296 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeInfo_32_73 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[4];
#line 11298 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeInfo_33_74 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[0];
#line 298 "dead_proc_elim.m"
    {
#line 298 "dead_proc_elim.m"
      mercury__list__foldl2_6_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_26_67, transform_hlds__dead_proc_elim__TypeInfo_32_73, transform_hlds__dead_proc_elim__TypeInfo_33_74, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[5], transform_hlds__dead_proc_elim__InstanceDefns_57, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_28_41)), &transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_19_60, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_29_42)), &transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_20_61);
    }
#line 298 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_60 = ((MR_Word) transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_19_60);
#line 298 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_61 = ((MR_Word) transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_20_61);
#line 11309 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_34_75 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0;
#line 299 "dead_proc_elim.m"
    {
#line 299 "dead_proc_elim.m"
      mercury__map__values_2_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_24_65, transform_hlds__dead_proc_elim__TypeCtorInfo_34_75, transform_hlds__dead_proc_elim__Classes_28, &transform_hlds__dead_proc_elim__ClassDefns_58);
    }
#line 300 "dead_proc_elim.m"
    {
#line 300 "dead_proc_elim.m"
      mercury__list__foldl2_6_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_34_75, transform_hlds__dead_proc_elim__TypeInfo_32_73, transform_hlds__dead_proc_elim__TypeInfo_33_74, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[6], transform_hlds__dead_proc_elim__ClassDefns_58, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_60)), &transform_hlds__dead_proc_elim__conv7_Queue0_13, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_61)), &transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_Needed_10_14);
    }
#line 300 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__Queue0_13 = ((MR_Word) transform_hlds__dead_proc_elim__conv7_Queue0_13);
#line 300 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_10_14 = ((MR_Word) transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_Needed_10_14);
#line 164 "dead_proc_elim.m"
    {
#line 164 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_examine_6_p_0(transform_hlds__dead_proc_elim__Queue0_13, transform_hlds__dead_proc_elim__Examined0_12, (MR_Integer) 0, transform_hlds__dead_proc_elim__ModuleInfo_3, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_10_14, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5);
    }
#line 145 "dead_proc_elim.m"
  }
#line 68 "dead_proc_elim.m"
}

#line 300 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_elim_4_p_0_2(
#line 300 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 300 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 300 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 300 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 300 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 300 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5)
#line 300 "dead_proc_elim.m"
{
#line 300 "dead_proc_elim.m"
  {
#line 300 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 300 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_Queue_11;
#line 300 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_Needed_13;

#line 300 "dead_proc_elim.m"
    {
#line 300 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_Queue_11, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_4), &transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_Needed_13);
    }
#line 300 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_Queue_11));
#line 300 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_5 = ((MR_Box) (transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_Needed_13));
#line 300 "dead_proc_elim.m"
  }
#line 300 "dead_proc_elim.m"
}

#line 298 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_elim_4_p_0_1(
#line 298 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 298 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 298 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 298 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 298 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 298 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5)
#line 298 "dead_proc_elim.m"
{
#line 298 "dead_proc_elim.m"
  {
#line 298 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 298 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_21;
#line 298 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_23;

#line 298 "dead_proc_elim.m"
    {
#line 298 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_21, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_4), &transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_23);
    }
#line 298 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_21));
#line 298 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_5 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_23));
#line 298 "dead_proc_elim.m"
  }
#line 298 "dead_proc_elim.m"
}

#line 49 "dead_proc_elim.m"
void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_elim_4_p_0(
#line 49 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ElimOptImported_5,
#line 49 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_9,
#line 49 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_10,
#line 49 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__Specs_7)
#line 49 "dead_proc_elim.m"
{
#line 148 "dead_proc_elim.m"
  {
#line 148 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_32_50;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_24_70;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_26_72;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeInfo_32_78;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeInfo_33_79;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_34_80;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Needed_8;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Examined0_17;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Queue0_18;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_10_19;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredIds_27;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredTable_28;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PragmaExports_29;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__InitProcs_30;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__FinalPreds_31;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfos_32;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Classes_33;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Instances_34;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_17_35;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_18_36;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_37;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_38;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_39_39;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_22_40;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_23_41;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_24_42;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25_43;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_44;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_45;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_28_46;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_29_47;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__InstanceDefnsLists_61;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__InstanceDefns_62;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ClassDefns_63;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_65;
#line 148 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_66;
#line 298 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_19_65;
#line 298 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_20_66;
#line 300 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv7_Queue0_18;
#line 300 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_Needed_10_19;

#line 162 "dead_proc_elim.m"
    {
#line 162 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__Examined0_17 = mercury__set_tree234__init_0_f_0((MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0);
    }
#line 11518 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_32_50 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 174 "dead_proc_elim.m"
    {
#line 174 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_17_35 = mercury__queue__init_0_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_32_50);
    }
#line 175 "dead_proc_elim.m"
    {
#line 175 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_18_36 = mercury__map__init_0_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_32_50, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0);
    }
#line 176 "dead_proc_elim.m"
    {
#line 176 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_9, &transform_hlds__dead_proc_elim__PredIds_27);
    }
#line 177 "dead_proc_elim.m"
    {
#line 177 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_9, &transform_hlds__dead_proc_elim__PredTable_28);
    }
#line 178 "dead_proc_elim.m"
    {
#line 178 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_preds_6_p_0(transform_hlds__dead_proc_elim__PredIds_27, transform_hlds__dead_proc_elim__PredTable_28, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_17_35, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_37, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_18_36, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_38);
    }
#line 180 "dead_proc_elim.m"
    {
#line 180 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_9, &transform_hlds__dead_proc_elim__PragmaExports_29);
    }
#line 181 "dead_proc_elim.m"
    {
#line 181 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__V_39_39 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, transform_hlds__dead_proc_elim__PragmaExports_29);
    }
#line 181 "dead_proc_elim.m"
    {
#line 181 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_p_0(transform_hlds__dead_proc_elim__V_39_39, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_37, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_22_40, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_38, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_23_41);
    }
#line 184 "dead_proc_elim.m"
    {
#line 184 "dead_proc_elim.m"
      hlds__hlds_module__module_info_user_init_pred_procs_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_9, &transform_hlds__dead_proc_elim__InitProcs_30);
    }
#line 185 "dead_proc_elim.m"
    {
#line 185 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_p_0(transform_hlds__dead_proc_elim__InitProcs_30, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_22_40, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_24_42, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_23_41, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25_43);
    }
#line 187 "dead_proc_elim.m"
    {
#line 187 "dead_proc_elim.m"
      hlds__hlds_module__module_info_user_final_pred_procs_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_9, &transform_hlds__dead_proc_elim__FinalPreds_31);
    }
#line 188 "dead_proc_elim.m"
    {
#line 188 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_p_0(transform_hlds__dead_proc_elim__FinalPreds_31, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_24_42, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_44, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25_43, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_45);
    }
#line 190 "dead_proc_elim.m"
    {
#line 190 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_type_ctor_gen_infos_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_9, &transform_hlds__dead_proc_elim__TypeCtorGenInfos_32);
    }
#line 191 "dead_proc_elim.m"
    {
#line 191 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_type_ctor_infos_5_p_0(transform_hlds__dead_proc_elim__TypeCtorGenInfos_32, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_44, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_28_46, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_45, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_29_47);
    }
#line 193 "dead_proc_elim.m"
    {
#line 193 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_9, &transform_hlds__dead_proc_elim__Classes_33);
    }
#line 194 "dead_proc_elim.m"
    {
#line 194 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_instance_table_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_9, &transform_hlds__dead_proc_elim__Instances_34);
    }
#line 11600 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_24_70 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 296 "dead_proc_elim.m"
    {
#line 296 "dead_proc_elim.m"
      mercury__map__values_2_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_24_70, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[3], transform_hlds__dead_proc_elim__Instances_34, &transform_hlds__dead_proc_elim__InstanceDefnsLists_61);
    }
#line 11607 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_26_72 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
#line 297 "dead_proc_elim.m"
    {
#line 297 "dead_proc_elim.m"
      mercury__list__condense_2_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_26_72, transform_hlds__dead_proc_elim__InstanceDefnsLists_61, &transform_hlds__dead_proc_elim__InstanceDefns_62);
    }
#line 11614 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeInfo_32_78 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[4];
#line 11616 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeInfo_33_79 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[0];
#line 298 "dead_proc_elim.m"
    {
#line 298 "dead_proc_elim.m"
      mercury__list__foldl2_6_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_26_72, transform_hlds__dead_proc_elim__TypeInfo_32_78, transform_hlds__dead_proc_elim__TypeInfo_33_79, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[3], transform_hlds__dead_proc_elim__InstanceDefns_62, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_28_46)), &transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_19_65, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_29_47)), &transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_20_66);
    }
#line 298 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_65 = ((MR_Word) transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_19_65);
#line 298 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_66 = ((MR_Word) transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_20_66);
#line 11627 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_34_80 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0;
#line 299 "dead_proc_elim.m"
    {
#line 299 "dead_proc_elim.m"
      mercury__map__values_2_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_24_70, transform_hlds__dead_proc_elim__TypeCtorInfo_34_80, transform_hlds__dead_proc_elim__Classes_33, &transform_hlds__dead_proc_elim__ClassDefns_63);
    }
#line 300 "dead_proc_elim.m"
    {
#line 300 "dead_proc_elim.m"
      mercury__list__foldl2_6_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_34_80, transform_hlds__dead_proc_elim__TypeInfo_32_78, transform_hlds__dead_proc_elim__TypeInfo_33_79, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[4], transform_hlds__dead_proc_elim__ClassDefns_63, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_65)), &transform_hlds__dead_proc_elim__conv7_Queue0_18, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_66)), &transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_Needed_10_19);
    }
#line 300 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__Queue0_18 = ((MR_Word) transform_hlds__dead_proc_elim__conv7_Queue0_18);
#line 300 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_10_19 = ((MR_Word) transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_Needed_10_19);
#line 164 "dead_proc_elim.m"
    {
#line 164 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_examine_6_p_0(transform_hlds__dead_proc_elim__Queue0_18, transform_hlds__dead_proc_elim__Examined0_17, (MR_Integer) 1, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_9, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_10_19, &transform_hlds__dead_proc_elim__Needed_8);
    }
#line 150 "dead_proc_elim.m"
    {
#line 150 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_eliminate_5_p_0(transform_hlds__dead_proc_elim__ElimOptImported_5, transform_hlds__dead_proc_elim__Needed_8, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_9, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_10, transform_hlds__dead_proc_elim__Specs_7);
    }
#line 148 "dead_proc_elim.m"
  }
#line 49 "dead_proc_elim.m"
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
