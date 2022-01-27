/*
** Automatically generated from `dead_proc_elim.m'
** by the Mercury compiler,
** version rotd-2014-12-18
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
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
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




#line 142 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0;

#line 145 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0__plain_transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0;

#line 148 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 151 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 154 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 157 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 160 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0;

#line 163 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 166 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 169 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_analyze_what_0_0;

#line 172 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_analyze_what_0_1;

#line 175 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_value_ordered_analyze_what_0[2];

#line 178 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_analyze_what_0[2];

#line 181 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_analyze_what_0[2];

#line 184 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_0[2];

#line 187 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_0;

#line 190 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_1[2];

#line 193 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_1;

#line 196 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_2[3];

#line 199 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_2;

#line 202 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_3[1];

#line 205 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_3;

#line 208 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_0[1];

#line 211 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_1[1];

#line 214 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_2[1];

#line 217 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_3[1];

#line 220 "transform_hlds.dead_proc_elim.c"
static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_entity_0[4];

#line 223 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_entity_0[4];

#line 226 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_entity_0[4];

#line 229 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__ti_queue_1transform_hlds__dead_proc_elim__type_ctor_info_entity_0;

#line 232 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1transform_hlds__dead_proc_elim__type_ctor_info_entity_0;

#line 235 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_0;

#line 238 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_1;

#line 241 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_value_ordered_maybe_elim_opt_imported_0[2];

#line 244 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_maybe_elim_opt_imported_0[2];

#line 247 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_elim_opt_imported_0[2];

#line 250 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_maybe_needed_0_0;

#line 253 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_maybe_needed_0_1[1];

#line 256 "transform_hlds.dead_proc_elim.c"
static const MR_ConstString transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_maybe_needed_0_1[1];

#line 259 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_maybe_needed_0_1;

#line 262 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_maybe_needed_0_0[1];

#line 265 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_maybe_needed_0_1[1];

#line 268 "transform_hlds.dead_proc_elim.c"
static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_maybe_needed_0[2];

#line 271 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_maybe_needed_0[2];

#line 274 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_needed_0[2];

#line 277 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__ti_tree234_2transform_hlds__dead_proc_elim__type_ctor_info_entity_0transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0;

#line 280 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 283 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 286 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 289 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_pred_elim_info_0_0[5];

#line 292 "transform_hlds.dead_proc_elim.c"
static const MR_ConstString transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_pred_elim_info_0_0[5];

#line 295 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_pred_elim_info_0_0;

#line 298 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_pred_elim_info_0_0[1];

#line 301 "transform_hlds.dead_proc_elim.c"
static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_pred_elim_info_0[1];

#line 304 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_pred_elim_info_0[1];

#line 307 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_pred_elim_info_0[1];

#line 310 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 313 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 316 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_proc_elim_info_0_0[5];

#line 319 "transform_hlds.dead_proc_elim.c"
static const MR_ConstString transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_proc_elim_info_0_0[5];

#line 322 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_proc_elim_info_0_0;

#line 325 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_proc_elim_info_0_0[1];

#line 328 "transform_hlds.dead_proc_elim.c"
static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_proc_elim_info_0[1];

#line 331 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_proc_elim_info_0[1];

#line 334 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_proc_elim_info_0[1];

#line 337 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____analyze_what_0_0_10001(
#line 340 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 342 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2);

#line 345 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____analyze_what_0_0_10001(
#line 348 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 350 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 352 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 355 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____entity_0_0_10001(
#line 358 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 360 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2);

#line 363 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____entity_0_0_10001(
#line 366 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 368 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 370 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 373 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____entity_queue_0_0_10001(
#line 376 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 378 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2);

#line 381 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____entity_queue_0_0_10001(
#line 384 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 386 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 388 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 391 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____examined_set_0_0_10001(
#line 394 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 396 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2);

#line 399 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____examined_set_0_0_10001(
#line 402 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 404 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 406 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 409 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_elim_opt_imported_0_0_10001(
#line 412 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 414 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2);

#line 417 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_elim_opt_imported_0_0_10001(
#line 420 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 422 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 424 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 427 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_needed_0_0_10001(
#line 430 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 432 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2);

#line 435 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_needed_0_0_10001(
#line 438 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 440 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 442 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 445 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____needed_map_0_0_10001(
#line 448 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 450 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2);

#line 453 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____needed_map_0_0_10001(
#line 456 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 458 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 460 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 463 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____pred_elim_info_0_0_10001(
#line 466 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 468 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2);

#line 471 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____pred_elim_info_0_0_10001(
#line 474 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 476 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 478 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 481 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____proc_elim_info_0_0_10001(
#line 484 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 486 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2);

#line 489 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____proc_elim_info_0_0_10001(
#line 492 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 494 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 496 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 846 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_proc_eliminate_pred__846__1_4_p_0(
#line 846 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ProcTable0_57,
#line 846 "dead_proc_elim.m"
  MR_Integer transform_hlds__dead_proc_elim__HeadVar__2_42,
#line 846 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_43,
#line 846 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__4_44);

#line 1043 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__1043__1_2_p_0(
#line 1043 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__NeededPreds_38,
#line 1043 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_79);

#line 1033 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__1033__1_4_p_0(
#line 1033 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__SpecMap0_31,
#line 1033 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_51,
#line 1033 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_52,
#line 1033 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__4_53);

#line 713 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____proc_elim_info_0_0(
#line 713 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 713 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 713 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_3);

#line 713 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____proc_elim_info_0_0(
#line 713 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 713 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2);

#line 977 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____pred_elim_info_0_0(
#line 977 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 977 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 977 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_3);

#line 977 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____pred_elim_info_0_0(
#line 977 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 977 "dead_proc_elim.m"
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

#line 1250 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_p_0(
#line 1250 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Name_4,
#line 1250 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_13,
#line 1250 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_14);

#line 1232 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_p_0(
#line 1232 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__RHS_4,
#line 1232 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22,
#line 1232 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_23);

#line 1195 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_4(
#line 1195 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1195 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1195 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1195 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 1221 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_3(
#line 1221 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1221 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1221 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1221 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 1187 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_2(
#line 1187 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1187 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1187 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1187 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 1184 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_1(
#line 1184 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1184 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1184 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1184 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 1178 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0(
#line 1178 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__GoalExpr_4,
#line 1178 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52,
#line 1178 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53);

#line 1171 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(
#line 1171 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Goal_4,
#line 1171 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_8,
#line 1171 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_9);

#line 1164 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_case_3_p_0(
#line 1164 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Case_4,
#line 1164 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_9,
#line 1164 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_10);

#line 1158 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_process_clause_3_p_0(
#line 1158 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Clause_4,
#line 1158 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_6,
#line 1158 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_7);

#line 1150 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_p_0_1(
#line 1150 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1150 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1150 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1150 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 1130 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_p_0(
#line 1130 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_15,
#line 1130 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_16);

#line 1066 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_p_0(
#line 1066 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__PredId_4,
#line 1066 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__DeadInfo0_5,
#line 1066 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__DeadInfo_6);

#line 1055 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_add_entity_5_p_0(
#line 1055 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 1055 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 1055 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 1055 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_0_4,
#line 1055 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_5);

#line 959 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_const_structs_4_p_0(
#line 959 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 959 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 959 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_0_3,
#line 959 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_4);

#line 940 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_type_ctor_infos_3_p_0(
#line 940 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 940 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 940 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__3_3);

#line 879 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_p_0(
#line 879 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__PredId_12,
#line 879 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Keep_13,
#line 879 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__WarnForThisPred_14,
#line 879 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ProcElimInfo_15,
#line 879 "dead_proc_elim.m"
  MR_Integer transform_hlds__dead_proc_elim__ProcId_16,
#line 879 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcTable_0_30,
#line 879 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcTable_31,
#line 879 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Changed_0_32,
#line 879 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Changed_33,
#line 879 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Specs_0_34,
#line 879 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Specs_35);

#line 846 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0_2(
#line 846 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 846 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 846 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 846 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 825 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0_1(
#line 825 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 825 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 825 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 825 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 825 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 825 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5,
#line 825 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_6,
#line 825 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_7);

#line 776 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0(
#line 776 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ElimOptImported_5,
#line 776 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__PredId_6,
#line 776 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_0_36,
#line 776 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_37);

#line 743 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_5_p_0_1(
#line 743 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 743 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 743 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 743 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 734 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_5_p_0(
#line 734 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ElimOptImported_6,
#line 734 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_22,
#line 734 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_23,
#line 734 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_24,
#line 734 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__Specs_9);

#line 533 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_p_0(
#line 533 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Goal_7,
#line 533 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__CurrProc_8,
#line 533 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96,
#line 533 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97,
#line 533 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98,
#line 533 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);

#line 523 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_cases_6_p_0(
#line 523 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 523 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 523 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3,
#line 523 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4,
#line 523 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5,
#line 523 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6);

#line 514 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_goals_6_p_0(
#line 514 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 514 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__CurrProc_2,
#line 514 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3,
#line 514 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4,
#line 514 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5,
#line 514 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6);

#line 464 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_proc_6_p_0(
#line 464 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 464 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ModuleInfo_9,
#line 464 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_22,
#line 464 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23,
#line 464 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24,
#line 464 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25);

#line 439 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_const_struct_args_5_p_0(
#line 439 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 439 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 439 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 439 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4,
#line 439 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5);

#line 408 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_refs_5_p_0(
#line 408 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 408 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 408 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 408 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4,
#line 408 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5);

#line 392 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim__find_type_ctor_info_5_p_0(
#line 392 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ModuleName_6,
#line 392 "dead_proc_elim.m"
  MR_String transform_hlds__dead_proc_elim__TypeName_7,
#line 392 "dead_proc_elim.m"
  MR_Integer transform_hlds__dead_proc_elim__TypeArity_8,
#line 392 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__4_4,
#line 392 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__Refs_11);

#line 331 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_6_p_0(
#line 331 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_22,
#line 331 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_0_23,
#line 331 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__AnalyzeWhat_9,
#line 331 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ModuleInfo_10,
#line 331 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24,
#line 331 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25);

#line 319 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__get_class_interface_pred_proc_5_p_0(
#line 319 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ClassProc_6,
#line 319 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_12,
#line 319 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_13,
#line 319 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_14,
#line 319 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_15);

#line 317 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0_1(
#line 317 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 317 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 317 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 317 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 317 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 317 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5);

#line 311 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0(
#line 311 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Class_6,
#line 311 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_10,
#line 311 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_11,
#line 311 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_12,
#line 311 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_13);

#line 308 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0_1(
#line 308 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 308 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 308 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 308 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 308 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 308 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5);

#line 295 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0(
#line 295 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Instance_6,
#line 295 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_20,
#line 295 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_21,
#line 295 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_22,
#line 295 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_23);

#line 293 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_p_0_2(
#line 293 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 293 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 293 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 293 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 293 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 293 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5);

#line 291 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_p_0_1(
#line 291 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 291 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 291 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 291 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 291 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 291 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5);

#line 283 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_p_0(
#line 283 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Classes_7,
#line 283 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Instances_8,
#line 283 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_14,
#line 283 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_15,
#line 283 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_16,
#line 283 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_17);

#line 249 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_type_ctor_infos_5_p_0(
#line 249 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 249 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 249 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 249 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4,
#line 249 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5);

#line 237 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_p_0(
#line 237 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 237 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 237 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 237 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4,
#line 237 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5);

#line 220 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_p_0(
#line 220 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 220 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 220 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 220 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4,
#line 220 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5);

#line 206 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_procs_6_p_0(
#line 206 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 206 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 206 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3,
#line 206 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4,
#line 206 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5,
#line 206 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6);

#line 193 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_preds_6_p_0(
#line 193 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 193 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 193 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3,
#line 193 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4,
#line 193 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5,
#line 193 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6);

#line 1043 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_4(
#line 1043 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1043 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1);

#line 1030 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_3(
#line 1030 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1030 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1030 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1030 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 1018 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_2(
#line 1018 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1018 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1018 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1018 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3);

#line 1009 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_1(
#line 1009 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1009 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1009 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1009 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 1009 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 1009 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5);

#line 293 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_analyze_3_p_0_2(
#line 293 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 293 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 293 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 293 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 293 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 293 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5);

#line 291 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_analyze_3_p_0_1(
#line 291 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 291 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 291 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 291 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 291 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 291 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5);

#line 293 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_elim_4_p_0_2(
#line 293 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 293 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 293 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 293 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 293 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 293 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5);

#line 291 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_elim_4_p_0_1(
#line 291 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 291 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 291 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 291 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 291 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 291 "dead_proc_elim.m"
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
    ((MR_Box) (transform_hlds__dead_proc_elim__dead_proc_analyze_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__dead_proc_elim__dead_proc_analyze_3_p_0_2)),
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



#line 1710 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0 = {
  &mercury__queue__queue__type_ctor_info_queue_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0
  }
};

#line 1718 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0__plain_transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0,
    (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0
  }
};

#line 1727 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__queue__queue__type_ctor_info_queue_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1735 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1743 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1751 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1760 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1768 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 1777 "transform_hlds.dead_proc_elim.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1785 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_analyze_what_0_0 = {
  (MR_String) "analyze_procs",
  (MR_Integer) 0
};

#line 1791 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_analyze_what_0_1 = {
  (MR_String) "analyze_all",
  (MR_Integer) 1
};

#line 1797 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_value_ordered_analyze_what_0[2] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_analyze_what_0_0,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_analyze_what_0_1
};

#line 1803 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_analyze_what_0[2] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_analyze_what_0_1,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_analyze_what_0_0
};

#line 1809 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_analyze_what_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1815 "transform_hlds.dead_proc_elim.c"
const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_analyze_what_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____analyze_what_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____analyze_what_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "analyze_what",
  {
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_analyze_what_0
  },
  {
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_value_ordered_analyze_what_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_analyze_what_0
};

#line 1836 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1842 "transform_hlds.dead_proc_elim.c"
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

#line 1857 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_1[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1863 "transform_hlds.dead_proc_elim.c"
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

#line 1878 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_2[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1885 "transform_hlds.dead_proc_elim.c"
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

#line 1900 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1905 "transform_hlds.dead_proc_elim.c"
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

#line 1920 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_0[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_0
};

#line 1925 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_1[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_1
};

#line 1930 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_2[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_2
};

#line 1935 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_3[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_3
};

#line 1940 "transform_hlds.dead_proc_elim.c"
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

#line 1964 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_entity_0[4] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_3,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_0,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_1,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_2
};

#line 1972 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_entity_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 1980 "transform_hlds.dead_proc_elim.c"
const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____entity_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____entity_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "entity",
  {
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_entity_0
  },
  {
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_entity_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_entity_0
};

#line 2001 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__ti_queue_1transform_hlds__dead_proc_elim__type_ctor_info_entity_0 = {
  &mercury__queue__queue__type_ctor_info_queue_1,
  {
    (MR_TypeInfo) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0
  }
};

#line 2009 "transform_hlds.dead_proc_elim.c"
const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_queue_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____entity_queue_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____entity_queue_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "entity_queue",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__queue__ti_queue_1transform_hlds__dead_proc_elim__type_ctor_info_entity_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2030 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1transform_hlds__dead_proc_elim__type_ctor_info_entity_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0
  }
};

#line 2038 "transform_hlds.dead_proc_elim.c"
const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_examined_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____examined_set_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____examined_set_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "examined_set",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1transform_hlds__dead_proc_elim__type_ctor_info_entity_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2059 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_0 = {
  (MR_String) "elim_opt_imported",
  (MR_Integer) 0
};

#line 2065 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_1 = {
  (MR_String) "do_not_elim_opt_imported",
  (MR_Integer) 1
};

#line 2071 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_value_ordered_maybe_elim_opt_imported_0[2] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_0,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_1
};

#line 2077 "transform_hlds.dead_proc_elim.c"
static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_maybe_elim_opt_imported_0[2] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_1,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_0
};

#line 2083 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_elim_opt_imported_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2089 "transform_hlds.dead_proc_elim.c"
const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_elim_opt_imported_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____maybe_elim_opt_imported_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____maybe_elim_opt_imported_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "maybe_elim_opt_imported",
  {
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_maybe_elim_opt_imported_0
  },
  {
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_value_ordered_maybe_elim_opt_imported_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_elim_opt_imported_0
};

#line 2110 "transform_hlds.dead_proc_elim.c"
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

#line 2125 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_maybe_needed_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2130 "transform_hlds.dead_proc_elim.c"
static const MR_ConstString transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_maybe_needed_0_1[1] = {
  (MR_String) "num_references"
};

#line 2135 "transform_hlds.dead_proc_elim.c"
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

#line 2150 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_maybe_needed_0_0[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_maybe_needed_0_0
};

#line 2155 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_maybe_needed_0_1[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_maybe_needed_0_1
};

#line 2160 "transform_hlds.dead_proc_elim.c"
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

#line 2174 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_maybe_needed_0[2] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_maybe_needed_0_1,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_maybe_needed_0_0
};

#line 2180 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_needed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2186 "transform_hlds.dead_proc_elim.c"
const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____maybe_needed_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____maybe_needed_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "maybe_needed",
  {
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_maybe_needed_0
  },
  {
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_maybe_needed_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_needed_0
};

#line 2207 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__ti_tree234_2transform_hlds__dead_proc_elim__type_ctor_info_entity_0transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0,
    (MR_TypeInfo) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0
  }
};

#line 2216 "transform_hlds.dead_proc_elim.c"
const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_needed_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____needed_map_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____needed_map_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "needed_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__tree234__ti_tree234_2transform_hlds__dead_proc_elim__type_ctor_info_entity_0transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2237 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__queue__queue__type_ctor_info_queue_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 2245 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 2253 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 2261 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_pred_elim_info_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 2270 "transform_hlds.dead_proc_elim.c"
static const MR_ConstString transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_pred_elim_info_0_0[5] = {
  (MR_String) "pred_elim_module_info",
  (MR_String) "pred_elim_queue",
  (MR_String) "pred_elim_examined",
  (MR_String) "pred_elim_needed_ids",
  (MR_String) "pred_elim_needed_named"
};

#line 2279 "transform_hlds.dead_proc_elim.c"
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

#line 2294 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_pred_elim_info_0_0[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_pred_elim_info_0_0
};

#line 2299 "transform_hlds.dead_proc_elim.c"
static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_pred_elim_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_pred_elim_info_0_0
  }
};

#line 2308 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_pred_elim_info_0[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_pred_elim_info_0_0
};

#line 2313 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_pred_elim_info_0[1] = {
  (MR_Integer) 0
};

#line 2318 "transform_hlds.dead_proc_elim.c"
const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____pred_elim_info_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____pred_elim_info_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "pred_elim_info",
  {
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_pred_elim_info_0
  },
  {
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_pred_elim_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_pred_elim_info_0
};

#line 2339 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 2348 "transform_hlds.dead_proc_elim.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2356 "transform_hlds.dead_proc_elim.c"
static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_proc_elim_info_0_0[5] = {
  (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__tree234__ti_tree234_2transform_hlds__dead_proc_elim__type_ctor_info_entity_0transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &transform_hlds__dead_proc_elim__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 2365 "transform_hlds.dead_proc_elim.c"
static const MR_ConstString transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_proc_elim_info_0_0[5] = {
  (MR_String) "proc_elim_needed_map",
  (MR_String) "proc_elim_module_info",
  (MR_String) "proc_elim_pred_table",
  (MR_String) "proc_elim_changed",
  (MR_String) "proc_elim_warnings"
};

#line 2374 "transform_hlds.dead_proc_elim.c"
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

#line 2389 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_proc_elim_info_0_0[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_proc_elim_info_0_0
};

#line 2394 "transform_hlds.dead_proc_elim.c"
static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_proc_elim_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_proc_elim_info_0_0
  }
};

#line 2403 "transform_hlds.dead_proc_elim.c"
static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_proc_elim_info_0[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_proc_elim_info_0_0
};

#line 2408 "transform_hlds.dead_proc_elim.c"
static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_proc_elim_info_0[1] = {
  (MR_Integer) 0
};

#line 2413 "transform_hlds.dead_proc_elim.c"
const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_proc_elim_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____proc_elim_info_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____proc_elim_info_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "proc_elim_info",
  {
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_proc_elim_info_0
  },
  {
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_proc_elim_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_proc_elim_info_0
};

#line 2434 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____analyze_what_0_0_10001(
#line 2437 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2439 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2)
#line 2441 "transform_hlds.dead_proc_elim.c"
{
#line 2443 "transform_hlds.dead_proc_elim.c"
  {
#line 2445 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 2448 "transform_hlds.dead_proc_elim.c"
    {
#line 2450 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim____Unify____analyze_what_0_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2));
    }
#line 2453 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 2455 "transform_hlds.dead_proc_elim.c"
  }
#line 2457 "transform_hlds.dead_proc_elim.c"
}

#line 2460 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____analyze_what_0_0_10001(
#line 2463 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2465 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 2467 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 2469 "transform_hlds.dead_proc_elim.c"
{
#line 2471 "transform_hlds.dead_proc_elim.c"
  {
#line 2473 "transform_hlds.dead_proc_elim.c"
    MR_Word transform_hlds__dead_proc_elim__conv0_HeadVar__1_1;

#line 2476 "transform_hlds.dead_proc_elim.c"
    {
#line 2478 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim____Compare____analyze_what_0_0(&transform_hlds__dead_proc_elim__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_3));
    }
#line 2481 "transform_hlds.dead_proc_elim.c"
    *transform_hlds__dead_proc_elim__wrapper_arg_1 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_HeadVar__1_1));
#line 2483 "transform_hlds.dead_proc_elim.c"
  }
#line 2485 "transform_hlds.dead_proc_elim.c"
}

#line 2488 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____entity_0_0_10001(
#line 2491 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2493 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2)
#line 2495 "transform_hlds.dead_proc_elim.c"
{
#line 2497 "transform_hlds.dead_proc_elim.c"
  {
#line 2499 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 2502 "transform_hlds.dead_proc_elim.c"
    {
#line 2504 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim____Unify____entity_0_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2));
    }
#line 2507 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 2509 "transform_hlds.dead_proc_elim.c"
  }
#line 2511 "transform_hlds.dead_proc_elim.c"
}

#line 2514 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____entity_0_0_10001(
#line 2517 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2519 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 2521 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 2523 "transform_hlds.dead_proc_elim.c"
{
#line 2525 "transform_hlds.dead_proc_elim.c"
  {
#line 2527 "transform_hlds.dead_proc_elim.c"
    MR_Word transform_hlds__dead_proc_elim__conv0_HeadVar__1_1;

#line 2530 "transform_hlds.dead_proc_elim.c"
    {
#line 2532 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim____Compare____entity_0_0(&transform_hlds__dead_proc_elim__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_3));
    }
#line 2535 "transform_hlds.dead_proc_elim.c"
    *transform_hlds__dead_proc_elim__wrapper_arg_1 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_HeadVar__1_1));
#line 2537 "transform_hlds.dead_proc_elim.c"
  }
#line 2539 "transform_hlds.dead_proc_elim.c"
}

#line 2542 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____entity_queue_0_0_10001(
#line 2545 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2547 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2)
#line 2549 "transform_hlds.dead_proc_elim.c"
{
#line 2551 "transform_hlds.dead_proc_elim.c"
  {
#line 2553 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 2556 "transform_hlds.dead_proc_elim.c"
    {
#line 2558 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim____Unify____entity_queue_0_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2));
    }
#line 2561 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 2563 "transform_hlds.dead_proc_elim.c"
  }
#line 2565 "transform_hlds.dead_proc_elim.c"
}

#line 2568 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____entity_queue_0_0_10001(
#line 2571 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2573 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 2575 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 2577 "transform_hlds.dead_proc_elim.c"
{
#line 2579 "transform_hlds.dead_proc_elim.c"
  {
#line 2581 "transform_hlds.dead_proc_elim.c"
    MR_Word transform_hlds__dead_proc_elim__conv0_HeadVar__1_1;

#line 2584 "transform_hlds.dead_proc_elim.c"
    {
#line 2586 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim____Compare____entity_queue_0_0(&transform_hlds__dead_proc_elim__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_3));
    }
#line 2589 "transform_hlds.dead_proc_elim.c"
    *transform_hlds__dead_proc_elim__wrapper_arg_1 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_HeadVar__1_1));
#line 2591 "transform_hlds.dead_proc_elim.c"
  }
#line 2593 "transform_hlds.dead_proc_elim.c"
}

#line 2596 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____examined_set_0_0_10001(
#line 2599 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2601 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2)
#line 2603 "transform_hlds.dead_proc_elim.c"
{
#line 2605 "transform_hlds.dead_proc_elim.c"
  {
#line 2607 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 2610 "transform_hlds.dead_proc_elim.c"
    {
#line 2612 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim____Unify____examined_set_0_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2));
    }
#line 2615 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 2617 "transform_hlds.dead_proc_elim.c"
  }
#line 2619 "transform_hlds.dead_proc_elim.c"
}

#line 2622 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____examined_set_0_0_10001(
#line 2625 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2627 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 2629 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 2631 "transform_hlds.dead_proc_elim.c"
{
#line 2633 "transform_hlds.dead_proc_elim.c"
  {
#line 2635 "transform_hlds.dead_proc_elim.c"
    MR_Word transform_hlds__dead_proc_elim__conv0_HeadVar__1_1;

#line 2638 "transform_hlds.dead_proc_elim.c"
    {
#line 2640 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim____Compare____examined_set_0_0(&transform_hlds__dead_proc_elim__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_3));
    }
#line 2643 "transform_hlds.dead_proc_elim.c"
    *transform_hlds__dead_proc_elim__wrapper_arg_1 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_HeadVar__1_1));
#line 2645 "transform_hlds.dead_proc_elim.c"
  }
#line 2647 "transform_hlds.dead_proc_elim.c"
}

#line 2650 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_elim_opt_imported_0_0_10001(
#line 2653 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2655 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2)
#line 2657 "transform_hlds.dead_proc_elim.c"
{
#line 2659 "transform_hlds.dead_proc_elim.c"
  {
#line 2661 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 2664 "transform_hlds.dead_proc_elim.c"
    {
#line 2666 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim____Unify____maybe_elim_opt_imported_0_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2));
    }
#line 2669 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 2671 "transform_hlds.dead_proc_elim.c"
  }
#line 2673 "transform_hlds.dead_proc_elim.c"
}

#line 2676 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_elim_opt_imported_0_0_10001(
#line 2679 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2681 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 2683 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 2685 "transform_hlds.dead_proc_elim.c"
{
#line 2687 "transform_hlds.dead_proc_elim.c"
  {
#line 2689 "transform_hlds.dead_proc_elim.c"
    MR_Word transform_hlds__dead_proc_elim__conv0_HeadVar__1_1;

#line 2692 "transform_hlds.dead_proc_elim.c"
    {
#line 2694 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim____Compare____maybe_elim_opt_imported_0_0(&transform_hlds__dead_proc_elim__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_3));
    }
#line 2697 "transform_hlds.dead_proc_elim.c"
    *transform_hlds__dead_proc_elim__wrapper_arg_1 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_HeadVar__1_1));
#line 2699 "transform_hlds.dead_proc_elim.c"
  }
#line 2701 "transform_hlds.dead_proc_elim.c"
}

#line 2704 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_needed_0_0_10001(
#line 2707 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2709 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2)
#line 2711 "transform_hlds.dead_proc_elim.c"
{
#line 2713 "transform_hlds.dead_proc_elim.c"
  {
#line 2715 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 2718 "transform_hlds.dead_proc_elim.c"
    {
#line 2720 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim____Unify____maybe_needed_0_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2));
    }
#line 2723 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 2725 "transform_hlds.dead_proc_elim.c"
  }
#line 2727 "transform_hlds.dead_proc_elim.c"
}

#line 2730 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_needed_0_0_10001(
#line 2733 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2735 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 2737 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 2739 "transform_hlds.dead_proc_elim.c"
{
#line 2741 "transform_hlds.dead_proc_elim.c"
  {
#line 2743 "transform_hlds.dead_proc_elim.c"
    MR_Word transform_hlds__dead_proc_elim__conv0_HeadVar__1_1;

#line 2746 "transform_hlds.dead_proc_elim.c"
    {
#line 2748 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim____Compare____maybe_needed_0_0(&transform_hlds__dead_proc_elim__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_3));
    }
#line 2751 "transform_hlds.dead_proc_elim.c"
    *transform_hlds__dead_proc_elim__wrapper_arg_1 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_HeadVar__1_1));
#line 2753 "transform_hlds.dead_proc_elim.c"
  }
#line 2755 "transform_hlds.dead_proc_elim.c"
}

#line 2758 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____needed_map_0_0_10001(
#line 2761 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2763 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2)
#line 2765 "transform_hlds.dead_proc_elim.c"
{
#line 2767 "transform_hlds.dead_proc_elim.c"
  {
#line 2769 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 2772 "transform_hlds.dead_proc_elim.c"
    {
#line 2774 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim____Unify____needed_map_0_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2));
    }
#line 2777 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 2779 "transform_hlds.dead_proc_elim.c"
  }
#line 2781 "transform_hlds.dead_proc_elim.c"
}

#line 2784 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____needed_map_0_0_10001(
#line 2787 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2789 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 2791 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 2793 "transform_hlds.dead_proc_elim.c"
{
#line 2795 "transform_hlds.dead_proc_elim.c"
  {
#line 2797 "transform_hlds.dead_proc_elim.c"
    MR_Word transform_hlds__dead_proc_elim__conv0_HeadVar__1_1;

#line 2800 "transform_hlds.dead_proc_elim.c"
    {
#line 2802 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim____Compare____needed_map_0_0(&transform_hlds__dead_proc_elim__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_3));
    }
#line 2805 "transform_hlds.dead_proc_elim.c"
    *transform_hlds__dead_proc_elim__wrapper_arg_1 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_HeadVar__1_1));
#line 2807 "transform_hlds.dead_proc_elim.c"
  }
#line 2809 "transform_hlds.dead_proc_elim.c"
}

#line 2812 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____pred_elim_info_0_0_10001(
#line 2815 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2817 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2)
#line 2819 "transform_hlds.dead_proc_elim.c"
{
#line 2821 "transform_hlds.dead_proc_elim.c"
  {
#line 2823 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 2826 "transform_hlds.dead_proc_elim.c"
    {
#line 2828 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim____Unify____pred_elim_info_0_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2));
    }
#line 2831 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 2833 "transform_hlds.dead_proc_elim.c"
  }
#line 2835 "transform_hlds.dead_proc_elim.c"
}

#line 2838 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____pred_elim_info_0_0_10001(
#line 2841 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2843 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 2845 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 2847 "transform_hlds.dead_proc_elim.c"
{
#line 2849 "transform_hlds.dead_proc_elim.c"
  {
#line 2851 "transform_hlds.dead_proc_elim.c"
    MR_Word transform_hlds__dead_proc_elim__conv0_HeadVar__1_1;

#line 2854 "transform_hlds.dead_proc_elim.c"
    {
#line 2856 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim____Compare____pred_elim_info_0_0(&transform_hlds__dead_proc_elim__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_3));
    }
#line 2859 "transform_hlds.dead_proc_elim.c"
    *transform_hlds__dead_proc_elim__wrapper_arg_1 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_HeadVar__1_1));
#line 2861 "transform_hlds.dead_proc_elim.c"
  }
#line 2863 "transform_hlds.dead_proc_elim.c"
}

#line 2866 "transform_hlds.dead_proc_elim.c"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____proc_elim_info_0_0_10001(
#line 2869 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2871 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2)
#line 2873 "transform_hlds.dead_proc_elim.c"
{
#line 2875 "transform_hlds.dead_proc_elim.c"
  {
#line 2877 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 2880 "transform_hlds.dead_proc_elim.c"
    {
#line 2882 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim____Unify____proc_elim_info_0_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2));
    }
#line 2885 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 2887 "transform_hlds.dead_proc_elim.c"
  }
#line 2889 "transform_hlds.dead_proc_elim.c"
}

#line 2892 "transform_hlds.dead_proc_elim.c"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____proc_elim_info_0_0_10001(
#line 2895 "transform_hlds.dead_proc_elim.c"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 2897 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 2899 "transform_hlds.dead_proc_elim.c"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 2901 "transform_hlds.dead_proc_elim.c"
{
#line 2903 "transform_hlds.dead_proc_elim.c"
  {
#line 2905 "transform_hlds.dead_proc_elim.c"
    MR_Word transform_hlds__dead_proc_elim__conv0_HeadVar__1_1;

#line 2908 "transform_hlds.dead_proc_elim.c"
    {
#line 2910 "transform_hlds.dead_proc_elim.c"
      transform_hlds__dead_proc_elim____Compare____proc_elim_info_0_0(&transform_hlds__dead_proc_elim__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_3));
    }
#line 2913 "transform_hlds.dead_proc_elim.c"
    *transform_hlds__dead_proc_elim__wrapper_arg_1 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_HeadVar__1_1));
#line 2915 "transform_hlds.dead_proc_elim.c"
  }
#line 2917 "transform_hlds.dead_proc_elim.c"
}

#line 846 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_proc_eliminate_pred__846__1_4_p_0(
#line 846 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ProcTable0_57,
#line 846 "dead_proc_elim.m"
  MR_Integer transform_hlds__dead_proc_elim__HeadVar__2_42,
#line 846 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_43,
#line 846 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__4_44)
#line 846 "dead_proc_elim.m"
{
#line 846 "dead_proc_elim.m"
  {
#line 846 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 846 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_81_81 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 846 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_82_82 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 846 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ProcInfo0_30;
#line 846 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ProcInfo_31;
#line 846 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_45_45;
#line 848 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv0_ProcInfo0_30;

#line 848 "dead_proc_elim.m"
    {
#line 848 "dead_proc_elim.m"
      mercury__map__lookup_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_81_81, transform_hlds__dead_proc_elim__TypeCtorInfo_82_82, transform_hlds__dead_proc_elim__ProcTable0_57, ((MR_Box) (transform_hlds__dead_proc_elim__HeadVar__2_42)), &transform_hlds__dead_proc_elim__conv0_ProcInfo0_30);
    }
#line 848 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__ProcInfo0_30 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_ProcInfo0_30);
#line 849 "dead_proc_elim.m"
    {
#line 849 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__V_45_45 = hlds__make_goal__true_goal_0_f_0();
    }
#line 849 "dead_proc_elim.m"
    {
#line 849 "dead_proc_elim.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__dead_proc_elim__V_45_45, transform_hlds__dead_proc_elim__ProcInfo0_30, &transform_hlds__dead_proc_elim__ProcInfo_31);
    }
#line 850 "dead_proc_elim.m"
    {
#line 850 "dead_proc_elim.m"
      mercury__map__det_update_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_81_81, transform_hlds__dead_proc_elim__TypeCtorInfo_82_82, ((MR_Box) (transform_hlds__dead_proc_elim__HeadVar__2_42)), ((MR_Box) (transform_hlds__dead_proc_elim__ProcInfo_31)), transform_hlds__dead_proc_elim__HeadVar__3_43, transform_hlds__dead_proc_elim__HeadVar__4_44);
#line 850 "dead_proc_elim.m"
      return;
    }
#line 846 "dead_proc_elim.m"
  }
#line 846 "dead_proc_elim.m"
}

#line 1043 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__1043__1_2_p_0(
#line 1043 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__NeededPreds_38,
#line 1043 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_79)
#line 1043 "dead_proc_elim.m"
{
#line 1043 "dead_proc_elim.m"
  {
#line 1043 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 1043 "dead_proc_elim.m"
    {
#line 1043 "dead_proc_elim.m"
      return transform_hlds__dead_proc_elim__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__dead_proc_elim__NeededPreds_38, ((MR_Box) (transform_hlds__dead_proc_elim__HeadVar__2_79)));
    }
#line 1043 "dead_proc_elim.m"
    return transform_hlds__dead_proc_elim__succeeded;
#line 1043 "dead_proc_elim.m"
  }
#line 1043 "dead_proc_elim.m"
}

#line 1033 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__1033__1_4_p_0(
#line 1033 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__SpecMap0_31,
#line 1033 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_51,
#line 1033 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_52,
#line 1033 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__4_53)
#line 1033 "dead_proc_elim.m"
{
#line 1033 "dead_proc_elim.m"
  {
#line 1033 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 1033 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__NewNeededPreds_37;
#line 1031 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv0_NewNeededPreds_37;

#line 1031 "dead_proc_elim.m"
    {
#line 1031 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[2], transform_hlds__dead_proc_elim__SpecMap0_31, ((MR_Box) (transform_hlds__dead_proc_elim__HeadVar__2_51)), &transform_hlds__dead_proc_elim__conv0_NewNeededPreds_37);
    }
#line 1031 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 1031 "dead_proc_elim.m"
      {
#line 1031 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__NewNeededPreds_37 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_NewNeededPreds_37);
#line 1031 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 1031 "dead_proc_elim.m"
      }
#line 1033 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 1032 "dead_proc_elim.m"
      {
#line 1032 "dead_proc_elim.m"
        {
#line 1032 "dead_proc_elim.m"
          mercury__set_tree234__insert_list_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__dead_proc_elim__NewNeededPreds_37, transform_hlds__dead_proc_elim__HeadVar__3_52, transform_hlds__dead_proc_elim__HeadVar__4_53);
#line 1032 "dead_proc_elim.m"
          return;
        }
#line 1032 "dead_proc_elim.m"
      }
#line 1033 "dead_proc_elim.m"
    else
#line 1034 "dead_proc_elim.m"
      *transform_hlds__dead_proc_elim__HeadVar__4_53 = transform_hlds__dead_proc_elim__HeadVar__3_52;
#line 1033 "dead_proc_elim.m"
  }
#line 1033 "dead_proc_elim.m"
}

#line 713 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____proc_elim_info_0_0(
#line 713 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 713 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 713 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_3)
#line 713 "dead_proc_elim.m"
{
#line 713 "dead_proc_elim.m"
  {
#line 713 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 713 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastX_18 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__2_2;
#line 713 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastY_19 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__3_3;

#line 713 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__CastX_18 == transform_hlds__dead_proc_elim__CastY_19);
#line 713 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 3088 "transform_hlds.dead_proc_elim.c"
      *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 0;
#line 713 "dead_proc_elim.m"
    else
#line 713 "dead_proc_elim.m"
      {
#line 713 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));
#line 713 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 1)));
#line 713 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 2)));
#line 713 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 3)));
#line 713 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 4)));
#line 713 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 0)));
#line 713 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 1)));
#line 713 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 2)));
#line 713 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 3)));
#line 713 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 4)));
#line 713 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_14_14;

#line 713 "dead_proc_elim.m"
        {
#line 713 "dead_proc_elim.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[0], &transform_hlds__dead_proc_elim__V_14_14, ((MR_Box) (transform_hlds__dead_proc_elim__V_4_4)), ((MR_Box) (transform_hlds__dead_proc_elim__V_9_9)));
        }
#line 3122 "transform_hlds.dead_proc_elim.c"
        transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_14_14 == (MR_Integer) 0);
#line 713 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 713 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 713 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__V_14_14;
#line 713 "dead_proc_elim.m"
        else
#line 713 "dead_proc_elim.m"
          {
#line 713 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_15_15;

#line 713 "dead_proc_elim.m"
            {
#line 713 "dead_proc_elim.m"
              hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__dead_proc_elim__V_15_15, transform_hlds__dead_proc_elim__V_5_5, transform_hlds__dead_proc_elim__V_10_10);
            }
#line 3142 "transform_hlds.dead_proc_elim.c"
            transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_15_15 == (MR_Integer) 0);
#line 713 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 713 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 713 "dead_proc_elim.m"
              *transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__V_15_15;
#line 713 "dead_proc_elim.m"
            else
#line 713 "dead_proc_elim.m"
              {
#line 713 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__V_16_16;

#line 713 "dead_proc_elim.m"
                {
#line 713 "dead_proc_elim.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[2], &transform_hlds__dead_proc_elim__V_16_16, ((MR_Box) (transform_hlds__dead_proc_elim__V_6_6)), ((MR_Box) (transform_hlds__dead_proc_elim__V_11_11)));
                }
#line 3162 "transform_hlds.dead_proc_elim.c"
                transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_16_16 == (MR_Integer) 0);
#line 713 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 713 "dead_proc_elim.m"
                if (transform_hlds__dead_proc_elim__succeeded)
#line 713 "dead_proc_elim.m"
                  *transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__V_16_16;
#line 713 "dead_proc_elim.m"
                else
#line 713 "dead_proc_elim.m"
                  {
#line 713 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__V_17_17;
#line 713 "dead_proc_elim.m"
                    MR_Integer transform_hlds__dead_proc_elim__V_25_25 = (MR_Integer) transform_hlds__dead_proc_elim__V_7_7;
#line 713 "dead_proc_elim.m"
                    MR_Integer transform_hlds__dead_proc_elim__V_26_26 = (MR_Integer) transform_hlds__dead_proc_elim__V_12_12;

#line 713 "dead_proc_elim.m"
                    {
#line 713 "dead_proc_elim.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__dead_proc_elim__V_17_17, transform_hlds__dead_proc_elim__V_25_25, transform_hlds__dead_proc_elim__V_26_26);
                    }
#line 3186 "transform_hlds.dead_proc_elim.c"
                    transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_17_17 == (MR_Integer) 0);
#line 713 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 713 "dead_proc_elim.m"
                    if (transform_hlds__dead_proc_elim__succeeded)
#line 713 "dead_proc_elim.m"
                      *transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__V_17_17;
#line 713 "dead_proc_elim.m"
                    else
#line 713 "dead_proc_elim.m"
                      {
#line 713 "dead_proc_elim.m"
                        {
#line 713 "dead_proc_elim.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[5], transform_hlds__dead_proc_elim__HeadVar__1_1, ((MR_Box) (transform_hlds__dead_proc_elim__V_8_8)), ((MR_Box) (transform_hlds__dead_proc_elim__V_13_13)));
#line 713 "dead_proc_elim.m"
                          return;
                        }
#line 713 "dead_proc_elim.m"
                      }
#line 713 "dead_proc_elim.m"
                  }
#line 713 "dead_proc_elim.m"
              }
#line 713 "dead_proc_elim.m"
          }
#line 713 "dead_proc_elim.m"
      }
#line 713 "dead_proc_elim.m"
  }
#line 713 "dead_proc_elim.m"
}

#line 713 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____proc_elim_info_0_0(
#line 713 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 713 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2)
#line 713 "dead_proc_elim.m"
{
#line 713 "dead_proc_elim.m"
  {
#line 713 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 713 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastX_13 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__1_1;
#line 713 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastY_14 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__2_2;

#line 713 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__CastX_13 == transform_hlds__dead_proc_elim__CastY_14);
#line 713 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 713 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 713 "dead_proc_elim.m"
    else
#line 713 "dead_proc_elim.m"
      {
#line 713 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeInfo_17_17;
#line 713 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeInfo_18_18;
#line 713 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 713 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 713 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 2)));
#line 713 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 3)));
#line 713 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 4)));
#line 713 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));
#line 713 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 1)));
#line 713 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 2)));
#line 713 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 3)));
#line 713 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 4)));

#line 3273 "transform_hlds.dead_proc_elim.c"
        {
#line 3275 "transform_hlds.dead_proc_elim.c"
          transform_hlds__dead_proc_elim__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[0], ((MR_Box) (transform_hlds__dead_proc_elim__V_3_3)), ((MR_Box) (transform_hlds__dead_proc_elim__V_8_8)));
        }
#line 713 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 713 "dead_proc_elim.m"
          {
#line 3282 "transform_hlds.dead_proc_elim.c"
            {
#line 3284 "transform_hlds.dead_proc_elim.c"
              transform_hlds__dead_proc_elim__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__dead_proc_elim__V_4_4, transform_hlds__dead_proc_elim__V_9_9);
            }
#line 713 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 713 "dead_proc_elim.m"
              {
#line 3291 "transform_hlds.dead_proc_elim.c"
                transform_hlds__dead_proc_elim__TypeInfo_17_17 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[2];
#line 3293 "transform_hlds.dead_proc_elim.c"
                {
#line 3295 "transform_hlds.dead_proc_elim.c"
                  transform_hlds__dead_proc_elim__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__dead_proc_elim__TypeInfo_17_17, ((MR_Box) (transform_hlds__dead_proc_elim__V_5_5)), ((MR_Box) (transform_hlds__dead_proc_elim__V_10_10)));
                }
#line 713 "dead_proc_elim.m"
                if (transform_hlds__dead_proc_elim__succeeded)
#line 713 "dead_proc_elim.m"
                  {
#line 3302 "transform_hlds.dead_proc_elim.c"
                    transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_6_6 == transform_hlds__dead_proc_elim__V_11_11);
#line 713 "dead_proc_elim.m"
                    if (transform_hlds__dead_proc_elim__succeeded)
#line 713 "dead_proc_elim.m"
                      {
#line 3308 "transform_hlds.dead_proc_elim.c"
                        transform_hlds__dead_proc_elim__TypeInfo_18_18 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[5];
#line 3310 "transform_hlds.dead_proc_elim.c"
                        {
#line 3312 "transform_hlds.dead_proc_elim.c"
                          return transform_hlds__dead_proc_elim__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__dead_proc_elim__TypeInfo_18_18, ((MR_Box) (transform_hlds__dead_proc_elim__V_7_7)), ((MR_Box) (transform_hlds__dead_proc_elim__V_12_12)));
                        }
#line 713 "dead_proc_elim.m"
                      }
#line 713 "dead_proc_elim.m"
                  }
#line 713 "dead_proc_elim.m"
              }
#line 713 "dead_proc_elim.m"
          }
#line 713 "dead_proc_elim.m"
      }
#line 713 "dead_proc_elim.m"
    return transform_hlds__dead_proc_elim__succeeded;
#line 713 "dead_proc_elim.m"
  }
#line 713 "dead_proc_elim.m"
}

#line 977 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____pred_elim_info_0_0(
#line 977 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 977 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 977 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__3_3)
#line 977 "dead_proc_elim.m"
{
#line 977 "dead_proc_elim.m"
  {
#line 977 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 977 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastX_18 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__2_2;
#line 977 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastY_19 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__3_3;

#line 977 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__CastX_18 == transform_hlds__dead_proc_elim__CastY_19);
#line 977 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 3356 "transform_hlds.dead_proc_elim.c"
      *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 0;
#line 977 "dead_proc_elim.m"
    else
#line 977 "dead_proc_elim.m"
      {
#line 977 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));
#line 977 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 1)));
#line 977 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 2)));
#line 977 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 3)));
#line 977 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 4)));
#line 977 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 0)));
#line 977 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 1)));
#line 977 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 2)));
#line 977 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 3)));
#line 977 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__3_3, (MR_Integer) 4)));
#line 977 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_14_14;

#line 977 "dead_proc_elim.m"
        {
#line 977 "dead_proc_elim.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__dead_proc_elim__V_14_14, transform_hlds__dead_proc_elim__V_4_4, transform_hlds__dead_proc_elim__V_9_9);
        }
#line 3390 "transform_hlds.dead_proc_elim.c"
        transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_14_14 == (MR_Integer) 0);
#line 977 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 977 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 977 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__V_14_14;
#line 977 "dead_proc_elim.m"
        else
#line 977 "dead_proc_elim.m"
          {
#line 977 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_15_15;

#line 977 "dead_proc_elim.m"
            {
#line 977 "dead_proc_elim.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[0], &transform_hlds__dead_proc_elim__V_15_15, ((MR_Box) (transform_hlds__dead_proc_elim__V_5_5)), ((MR_Box) (transform_hlds__dead_proc_elim__V_10_10)));
            }
#line 3410 "transform_hlds.dead_proc_elim.c"
            transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_15_15 == (MR_Integer) 0);
#line 977 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 977 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 977 "dead_proc_elim.m"
              *transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__V_15_15;
#line 977 "dead_proc_elim.m"
            else
#line 977 "dead_proc_elim.m"
              {
#line 977 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__V_16_16;

#line 977 "dead_proc_elim.m"
                {
#line 977 "dead_proc_elim.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[1], &transform_hlds__dead_proc_elim__V_16_16, ((MR_Box) (transform_hlds__dead_proc_elim__V_6_6)), ((MR_Box) (transform_hlds__dead_proc_elim__V_11_11)));
                }
#line 3430 "transform_hlds.dead_proc_elim.c"
                transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_16_16 == (MR_Integer) 0);
#line 977 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 977 "dead_proc_elim.m"
                if (transform_hlds__dead_proc_elim__succeeded)
#line 977 "dead_proc_elim.m"
                  *transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__V_16_16;
#line 977 "dead_proc_elim.m"
                else
#line 977 "dead_proc_elim.m"
                  {
#line 977 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__V_17_17;

#line 977 "dead_proc_elim.m"
                    {
#line 977 "dead_proc_elim.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[1], &transform_hlds__dead_proc_elim__V_17_17, ((MR_Box) (transform_hlds__dead_proc_elim__V_7_7)), ((MR_Box) (transform_hlds__dead_proc_elim__V_12_12)));
                    }
#line 3450 "transform_hlds.dead_proc_elim.c"
                    transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_17_17 == (MR_Integer) 0);
#line 977 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 977 "dead_proc_elim.m"
                    if (transform_hlds__dead_proc_elim__succeeded)
#line 977 "dead_proc_elim.m"
                      *transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__V_17_17;
#line 977 "dead_proc_elim.m"
                    else
#line 977 "dead_proc_elim.m"
                      {
#line 977 "dead_proc_elim.m"
                        {
#line 977 "dead_proc_elim.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[7], transform_hlds__dead_proc_elim__HeadVar__1_1, ((MR_Box) (transform_hlds__dead_proc_elim__V_8_8)), ((MR_Box) (transform_hlds__dead_proc_elim__V_13_13)));
#line 977 "dead_proc_elim.m"
                          return;
                        }
#line 977 "dead_proc_elim.m"
                      }
#line 977 "dead_proc_elim.m"
                  }
#line 977 "dead_proc_elim.m"
              }
#line 977 "dead_proc_elim.m"
          }
#line 977 "dead_proc_elim.m"
      }
#line 977 "dead_proc_elim.m"
  }
#line 977 "dead_proc_elim.m"
}

#line 977 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____pred_elim_info_0_0(
#line 977 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 977 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2)
#line 977 "dead_proc_elim.m"
{
#line 977 "dead_proc_elim.m"
  {
#line 977 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 977 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastX_13 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__1_1;
#line 977 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__CastY_14 = (MR_Integer) transform_hlds__dead_proc_elim__HeadVar__2_2;

#line 977 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__CastX_13 == transform_hlds__dead_proc_elim__CastY_14);
#line 977 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 977 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 977 "dead_proc_elim.m"
    else
#line 977 "dead_proc_elim.m"
      {
#line 977 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeInfo_16_16;
#line 977 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeInfo_17_17;
#line 977 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeInfo_18_18;
#line 977 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeInfo_19_19;
#line 977 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 977 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 977 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 2)));
#line 977 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 3)));
#line 977 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 4)));
#line 977 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));
#line 977 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 1)));
#line 977 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 2)));
#line 977 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 3)));
#line 977 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 4)));

#line 3541 "transform_hlds.dead_proc_elim.c"
        {
#line 3543 "transform_hlds.dead_proc_elim.c"
          transform_hlds__dead_proc_elim__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__dead_proc_elim__V_3_3, transform_hlds__dead_proc_elim__V_8_8);
        }
#line 977 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 977 "dead_proc_elim.m"
          {
#line 3550 "transform_hlds.dead_proc_elim.c"
            transform_hlds__dead_proc_elim__TypeInfo_16_16 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[0];
#line 3552 "transform_hlds.dead_proc_elim.c"
            {
#line 3554 "transform_hlds.dead_proc_elim.c"
              transform_hlds__dead_proc_elim__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__dead_proc_elim__TypeInfo_16_16, ((MR_Box) (transform_hlds__dead_proc_elim__V_4_4)), ((MR_Box) (transform_hlds__dead_proc_elim__V_9_9)));
            }
#line 977 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 977 "dead_proc_elim.m"
              {
#line 3561 "transform_hlds.dead_proc_elim.c"
                transform_hlds__dead_proc_elim__TypeInfo_17_17 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[1];
#line 3563 "transform_hlds.dead_proc_elim.c"
                {
#line 3565 "transform_hlds.dead_proc_elim.c"
                  transform_hlds__dead_proc_elim__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__dead_proc_elim__TypeInfo_17_17, ((MR_Box) (transform_hlds__dead_proc_elim__V_5_5)), ((MR_Box) (transform_hlds__dead_proc_elim__V_10_10)));
                }
#line 977 "dead_proc_elim.m"
                if (transform_hlds__dead_proc_elim__succeeded)
#line 977 "dead_proc_elim.m"
                  {
#line 3572 "transform_hlds.dead_proc_elim.c"
                    transform_hlds__dead_proc_elim__TypeInfo_18_18 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[1];
#line 3574 "transform_hlds.dead_proc_elim.c"
                    {
#line 3576 "transform_hlds.dead_proc_elim.c"
                      transform_hlds__dead_proc_elim__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__dead_proc_elim__TypeInfo_18_18, ((MR_Box) (transform_hlds__dead_proc_elim__V_6_6)), ((MR_Box) (transform_hlds__dead_proc_elim__V_11_11)));
                    }
#line 977 "dead_proc_elim.m"
                    if (transform_hlds__dead_proc_elim__succeeded)
#line 977 "dead_proc_elim.m"
                      {
#line 3583 "transform_hlds.dead_proc_elim.c"
                        transform_hlds__dead_proc_elim__TypeInfo_19_19 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[7];
#line 3585 "transform_hlds.dead_proc_elim.c"
                        {
#line 3587 "transform_hlds.dead_proc_elim.c"
                          return transform_hlds__dead_proc_elim__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__dead_proc_elim__TypeInfo_19_19, ((MR_Box) (transform_hlds__dead_proc_elim__V_7_7)), ((MR_Box) (transform_hlds__dead_proc_elim__V_12_12)));
                        }
#line 977 "dead_proc_elim.m"
                      }
#line 977 "dead_proc_elim.m"
                  }
#line 977 "dead_proc_elim.m"
              }
#line 977 "dead_proc_elim.m"
          }
#line 977 "dead_proc_elim.m"
      }
#line 977 "dead_proc_elim.m"
    return transform_hlds__dead_proc_elim__succeeded;
#line 977 "dead_proc_elim.m"
  }
#line 977 "dead_proc_elim.m"
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
#line 3693 "transform_hlds.dead_proc_elim.c"
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
#line 3705 "transform_hlds.dead_proc_elim.c"
          *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "dead_proc_elim.m"
      else
#line 57 "dead_proc_elim.m"
        {
#line 57 "dead_proc_elim.m"
          MR_Integer transform_hlds__dead_proc_elim__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));

#line 57 "dead_proc_elim.m"
          if ((transform_hlds__dead_proc_elim__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3716 "transform_hlds.dead_proc_elim.c"
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
#line 3797 "transform_hlds.dead_proc_elim.c"
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
#line 3851 "transform_hlds.dead_proc_elim.c"
  {
#line 3853 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__HeadVar__2_1 == transform_hlds__dead_proc_elim__HeadVar__2_2);

#line 3856 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 3858 "transform_hlds.dead_proc_elim.c"
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
#line 4011 "transform_hlds.dead_proc_elim.c"
      *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 0;
#line 51 "dead_proc_elim.m"
    else
#line 51 "dead_proc_elim.m"
      if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 51 "dead_proc_elim.m"
        {
#line 51 "dead_proc_elim.m"
          MR_Integer transform_hlds__dead_proc_elim__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));

#line 51 "dead_proc_elim.m"
          if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
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
          else
#line 51 "dead_proc_elim.m"
            if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4042 "transform_hlds.dead_proc_elim.c"
              *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "dead_proc_elim.m"
            else
#line 51 "dead_proc_elim.m"
              if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4048 "transform_hlds.dead_proc_elim.c"
                *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "dead_proc_elim.m"
              else
#line 4052 "transform_hlds.dead_proc_elim.c"
                *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "dead_proc_elim.m"
        }
#line 51 "dead_proc_elim.m"
      else
#line 51 "dead_proc_elim.m"
        if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 51 "dead_proc_elim.m"
          {
#line 51 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 1)));
#line 51 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));

#line 51 "dead_proc_elim.m"
            if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 4069 "transform_hlds.dead_proc_elim.c"
              *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "dead_proc_elim.m"
            else
#line 51 "dead_proc_elim.m"
              if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
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
#line 4089 "transform_hlds.dead_proc_elim.c"
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
              else
#line 51 "dead_proc_elim.m"
                if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4112 "transform_hlds.dead_proc_elim.c"
                  *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "dead_proc_elim.m"
                else
#line 4116 "transform_hlds.dead_proc_elim.c"
                  *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "dead_proc_elim.m"
          }
#line 51 "dead_proc_elim.m"
        else
#line 51 "dead_proc_elim.m"
          if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 51 "dead_proc_elim.m"
            {
#line 51 "dead_proc_elim.m"
              MR_Integer transform_hlds__dead_proc_elim__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 1)));
#line 51 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));

#line 51 "dead_proc_elim.m"
              if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 4133 "transform_hlds.dead_proc_elim.c"
                *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "dead_proc_elim.m"
              else
#line 51 "dead_proc_elim.m"
                if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4139 "transform_hlds.dead_proc_elim.c"
                  *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "dead_proc_elim.m"
                else
#line 51 "dead_proc_elim.m"
                  if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
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
#line 4159 "transform_hlds.dead_proc_elim.c"
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
                  else
#line 4180 "transform_hlds.dead_proc_elim.c"
                    *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "dead_proc_elim.m"
            }
#line 51 "dead_proc_elim.m"
          else
#line 51 "dead_proc_elim.m"
            {
#line 51 "dead_proc_elim.m"
              MR_Integer transform_hlds__dead_proc_elim__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 2)));
#line 51 "dead_proc_elim.m"
              MR_String transform_hlds__dead_proc_elim__V_88_88 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 1)));
#line 51 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));

#line 51 "dead_proc_elim.m"
              if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 4197 "transform_hlds.dead_proc_elim.c"
                *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "dead_proc_elim.m"
              else
#line 51 "dead_proc_elim.m"
                if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4203 "transform_hlds.dead_proc_elim.c"
                  *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "dead_proc_elim.m"
                else
#line 51 "dead_proc_elim.m"
                  if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4209 "transform_hlds.dead_proc_elim.c"
                    *transform_hlds__dead_proc_elim__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "dead_proc_elim.m"
                  else
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
#line 4229 "transform_hlds.dead_proc_elim.c"
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
#line 4249 "transform_hlds.dead_proc_elim.c"
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
      if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
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
#line 4320 "transform_hlds.dead_proc_elim.c"
              transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_17_17 == transform_hlds__dead_proc_elim__V_18_18);
#line 51 "dead_proc_elim.m"
            }
#line 51 "dead_proc_elim.m"
        }
#line 51 "dead_proc_elim.m"
      else
#line 51 "dead_proc_elim.m"
        if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
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
        else
#line 51 "dead_proc_elim.m"
          if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
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
          else
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
#line 4431 "transform_hlds.dead_proc_elim.c"
                  {
#line 4433 "transform_hlds.dead_proc_elim.c"
                    transform_hlds__dead_proc_elim__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__dead_proc_elim__V_11_11, transform_hlds__dead_proc_elim__V_14_14);
                  }
#line 51 "dead_proc_elim.m"
                  if (transform_hlds__dead_proc_elim__succeeded)
#line 51 "dead_proc_elim.m"
                    {
#line 4440 "transform_hlds.dead_proc_elim.c"
                      transform_hlds__dead_proc_elim__succeeded = (strcmp(transform_hlds__dead_proc_elim__V_12_12, transform_hlds__dead_proc_elim__V_15_15) == 0);
#line 51 "dead_proc_elim.m"
                      if (transform_hlds__dead_proc_elim__succeeded)
#line 4444 "transform_hlds.dead_proc_elim.c"
                        transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__V_13_13 == transform_hlds__dead_proc_elim__V_16_16);
#line 51 "dead_proc_elim.m"
                    }
#line 51 "dead_proc_elim.m"
                }
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
#line 4500 "transform_hlds.dead_proc_elim.c"
  {
#line 4502 "transform_hlds.dead_proc_elim.c"
    MR_bool transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__HeadVar__2_1 == transform_hlds__dead_proc_elim__HeadVar__2_2);

#line 4505 "transform_hlds.dead_proc_elim.c"
    return transform_hlds__dead_proc_elim__succeeded;
#line 4507 "transform_hlds.dead_proc_elim.c"
  }
#line 148 "dead_proc_elim.m"
}

#line 1250 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_p_0(
#line 1250 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Name_4,
#line 1250 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_13,
#line 1250 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_14)
#line 1250 "dead_proc_elim.m"
{
#line 1256 "dead_proc_elim.m"
  {
#line 1256 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 1256 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ModuleInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_13, (MR_Integer) 0)));
#line 1256 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Examined_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_13, (MR_Integer) 2)));
#line 1256 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Needed_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_13, (MR_Integer) 3)));
#line 1256 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_13, (MR_Integer) 1)));
#line 1256 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_13, (MR_Integer) 4)));

#line 1257 "dead_proc_elim.m"
    {
#line 1257 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_16_16, ((MR_Box) (transform_hlds__dead_proc_elim__Name_4)));
    }
#line 1259 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 1258 "dead_proc_elim.m"
      *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_14 = transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_13;
#line 1259 "dead_proc_elim.m"
    else
#line 1260 "dead_proc_elim.m"
      {
#line 1260 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__PredicateTable_11;
#line 1260 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__PredIds_12;
#line 1260 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_17_21;
#line 1260 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_22;

#line 1260 "dead_proc_elim.m"
        {
#line 1260 "dead_proc_elim.m"
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_8, &transform_hlds__dead_proc_elim__PredicateTable_11);
        }
#line 1261 "dead_proc_elim.m"
        {
#line 1261 "dead_proc_elim.m"
          mercury__set_tree234__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (transform_hlds__dead_proc_elim__Name_4)), transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_16_16, &transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_17_21);
        }
#line 1262 "dead_proc_elim.m"
        {
#line 1262 "dead_proc_elim.m"
          hlds__pred_table__predicate_table_lookup_sym_4_p_0(transform_hlds__dead_proc_elim__PredicateTable_11, (MR_Integer) 1, transform_hlds__dead_proc_elim__Name_4, &transform_hlds__dead_proc_elim__PredIds_12);
        }
#line 1264 "dead_proc_elim.m"
        {
#line 1264 "dead_proc_elim.m"
          mercury__queue__put_list_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__dead_proc_elim__PredIds_12, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_15_15, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_22);
        }
#line 1265 "dead_proc_elim.m"
        {
#line 1265 "dead_proc_elim.m"
          MR_Word base;
#line 1265 "dead_proc_elim.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1265 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_14 = base;
#line 1265 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ModuleInfo_8));
#line 1265 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_22));
#line 1265 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__Examined_9));
#line 1265 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__Needed_10));
#line 1265 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_17_21));
#line 1265 "dead_proc_elim.m"
        }
#line 1260 "dead_proc_elim.m"
      }
#line 1256 "dead_proc_elim.m"
  }
#line 1250 "dead_proc_elim.m"
}

#line 1232 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_p_0(
#line 1232 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__RHS_4,
#line 1232 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22,
#line 1232 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_23)
#line 1232 "dead_proc_elim.m"
{
#line 1237 "dead_proc_elim.m"
  {
#line 1237 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 1237 "dead_proc_elim.m"
    if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__RHS_4)) == (MR_mktag((MR_Integer) 1))))
#line 1239 "dead_proc_elim.m"
      {
#line 1239 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__Functor_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 0)));
#line 1239 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 1)));
#line 1239 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 2)));
#line 1242 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__Name_10;
#line 1240 "dead_proc_elim.m"
        MR_Integer transform_hlds__dead_proc_elim__V_11_11;
#line 1240 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_12_12;

#line 1240 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__succeeded = ((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__Functor_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Functor_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1240 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 1240 "dead_proc_elim.m"
          {
#line 1240 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Functor_7, (MR_Integer) 1)));
#line 1240 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Functor_7, (MR_Integer) 2)));
#line 1240 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Functor_7, (MR_Integer) 3)));
#line 1256 "dead_proc_elim.m"
            {
#line 1256 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__ModuleInfo_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22, (MR_Integer) 0)));
#line 1256 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__Examined_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22, (MR_Integer) 2)));
#line 1256 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__Needed_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22, (MR_Integer) 3)));
#line 1256 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_15_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22, (MR_Integer) 1)));
#line 1256 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_16_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22, (MR_Integer) 4)));

#line 1257 "dead_proc_elim.m"
              {
#line 1257 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_16_38, ((MR_Box) (transform_hlds__dead_proc_elim__Name_10)));
              }
#line 1259 "dead_proc_elim.m"
              if (transform_hlds__dead_proc_elim__succeeded)
#line 1258 "dead_proc_elim.m"
                *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_23 = transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22;
#line 1259 "dead_proc_elim.m"
              else
#line 1260 "dead_proc_elim.m"
                {
#line 1260 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__PredicateTable_35;
#line 1260 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__PredIds_36;
#line 1260 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_17_43;
#line 1260 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_44;

#line 1260 "dead_proc_elim.m"
                  {
#line 1260 "dead_proc_elim.m"
                    hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_32, &transform_hlds__dead_proc_elim__PredicateTable_35);
                  }
#line 1261 "dead_proc_elim.m"
                  {
#line 1261 "dead_proc_elim.m"
                    mercury__set_tree234__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (transform_hlds__dead_proc_elim__Name_10)), transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_16_38, &transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_17_43);
                  }
#line 1262 "dead_proc_elim.m"
                  {
#line 1262 "dead_proc_elim.m"
                    hlds__pred_table__predicate_table_lookup_sym_4_p_0(transform_hlds__dead_proc_elim__PredicateTable_35, (MR_Integer) 1, transform_hlds__dead_proc_elim__Name_10, &transform_hlds__dead_proc_elim__PredIds_36);
                  }
#line 1264 "dead_proc_elim.m"
                  {
#line 1264 "dead_proc_elim.m"
                    mercury__queue__put_list_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__dead_proc_elim__PredIds_36, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_15_37, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_44);
                  }
#line 1265 "dead_proc_elim.m"
                  {
#line 1265 "dead_proc_elim.m"
                    MR_Word base;
#line 1265 "dead_proc_elim.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1265 "dead_proc_elim.m"
                    *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_23 = base;
#line 1265 "dead_proc_elim.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ModuleInfo_32));
#line 1265 "dead_proc_elim.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_44));
#line 1265 "dead_proc_elim.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__Examined_33));
#line 1265 "dead_proc_elim.m"
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__Needed_34));
#line 1265 "dead_proc_elim.m"
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_17_43));
#line 1265 "dead_proc_elim.m"
                  }
#line 1260 "dead_proc_elim.m"
                }
#line 1256 "dead_proc_elim.m"
            }
#line 1240 "dead_proc_elim.m"
          }
#line 1240 "dead_proc_elim.m"
        else
#line 1241 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_23 = transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22;
#line 1239 "dead_proc_elim.m"
      }
#line 1237 "dead_proc_elim.m"
    else
#line 1237 "dead_proc_elim.m"
      if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__RHS_4)) == (MR_mktag((MR_Integer) 2))))
#line 1246 "dead_proc_elim.m"
        {
#line 1246 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 6)));
#line 1246 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__GoalExpr_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Goal_21, (MR_Integer) 0)));
#line 1246 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1246 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1246 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1246 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 2)));
#line 1246 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 3)));
#line 1246 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 4)));
#line 1246 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__RHS_4, (MR_Integer) 5)));
#line 1175 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Goal_21, (MR_Integer) 1)));

#line 1176 "dead_proc_elim.m"
          {
#line 1176 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0(transform_hlds__dead_proc_elim__GoalExpr_52, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_23);
#line 1176 "dead_proc_elim.m"
            return;
          }
#line 1246 "dead_proc_elim.m"
        }
#line 1237 "dead_proc_elim.m"
      else
#line 1237 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_23 = transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_22;
#line 1237 "dead_proc_elim.m"
  }
#line 1232 "dead_proc_elim.m"
}

#line 1195 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_4(
#line 1195 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1195 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1195 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1195 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 1195 "dead_proc_elim.m"
{
#line 1195 "dead_proc_elim.m"
  {
#line 1195 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 1195 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_DeadInfo_10;

#line 1195 "dead_proc_elim.m"
    {
#line 1195 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__pre_modecheck_examine_case_3_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_DeadInfo_10);
    }
#line 1195 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_DeadInfo_10));
#line 1195 "dead_proc_elim.m"
  }
#line 1195 "dead_proc_elim.m"
}

#line 1221 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_3(
#line 1221 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1221 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1221 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1221 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 1221 "dead_proc_elim.m"
{
#line 1221 "dead_proc_elim.m"
  {
#line 1221 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 1221 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_DeadInfo_9;

#line 1221 "dead_proc_elim.m"
    {
#line 1221 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_DeadInfo_9);
    }
#line 1221 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_DeadInfo_9));
#line 1221 "dead_proc_elim.m"
  }
#line 1221 "dead_proc_elim.m"
}

#line 1187 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_2(
#line 1187 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1187 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1187 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1187 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 1187 "dead_proc_elim.m"
{
#line 1187 "dead_proc_elim.m"
  {
#line 1187 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 1187 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_DeadInfo_9;

#line 1187 "dead_proc_elim.m"
    {
#line 1187 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_DeadInfo_9);
    }
#line 1187 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_DeadInfo_9));
#line 1187 "dead_proc_elim.m"
  }
#line 1187 "dead_proc_elim.m"
}

#line 1184 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_1(
#line 1184 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1184 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1184 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1184 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 1184 "dead_proc_elim.m"
{
#line 1184 "dead_proc_elim.m"
  {
#line 1184 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 1184 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_DeadInfo_9;

#line 1184 "dead_proc_elim.m"
    {
#line 1184 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_DeadInfo_9);
    }
#line 1184 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_DeadInfo_9));
#line 1184 "dead_proc_elim.m"
  }
#line 1184 "dead_proc_elim.m"
}

#line 1178 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0(
#line 1178 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__GoalExpr_4,
#line 1178 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52,
#line 1178 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53)
#line 1178 "dead_proc_elim.m"
{
#line 1183 "dead_proc_elim.m"
  {
#line 1183 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 1183 "dead_proc_elim.m"
    if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__GoalExpr_4)) == (MR_mktag((MR_Integer) 0))))
#line 1197 "dead_proc_elim.m"
      {
#line 1197 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__SubGoal_15 = (MR_Word) MR_body(((MR_Word) transform_hlds__dead_proc_elim__GoalExpr_4), (MR_Integer) 0);

#line 1198 "dead_proc_elim.m"
        {
#line 1198 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(transform_hlds__dead_proc_elim__SubGoal_15, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53);
#line 1198 "dead_proc_elim.m"
          return;
        }
#line 1197 "dead_proc_elim.m"
      }
#line 1183 "dead_proc_elim.m"
    else
#line 1183 "dead_proc_elim.m"
      if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__GoalExpr_4)) == (MR_mktag((MR_Integer) 2))))
#line 1206 "dead_proc_elim.m"
        {
#line 1206 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__PredName_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 5)));
#line 1206 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 0)));
#line 1206 "dead_proc_elim.m"
          MR_Integer transform_hlds__dead_proc_elim__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 1)));
#line 1206 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 2)));
#line 1206 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 3)));
#line 1206 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 4)));

#line 1207 "dead_proc_elim.m"
          {
#line 1207 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_p_0(transform_hlds__dead_proc_elim__PredName_22, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53);
#line 1207 "dead_proc_elim.m"
            return;
          }
#line 1206 "dead_proc_elim.m"
        }
#line 1183 "dead_proc_elim.m"
      else
#line 1183 "dead_proc_elim.m"
        if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__GoalExpr_4)) == (MR_mktag((MR_Integer) 1))))
#line 1213 "dead_proc_elim.m"
          {
#line 1213 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__RHS_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 1)));
#line 1213 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 0)));
#line 1213 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 2)));
#line 1213 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 3)));
#line 1213 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 4)));

#line 1214 "dead_proc_elim.m"
            {
#line 1214 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_p_0(transform_hlds__dead_proc_elim__RHS_36, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53);
#line 1214 "dead_proc_elim.m"
              return;
            }
#line 1213 "dead_proc_elim.m"
          }
#line 1183 "dead_proc_elim.m"
        else
#line 1183 "dead_proc_elim.m"
          if (((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1211 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53 = transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52;
#line 1183 "dead_proc_elim.m"
          else
#line 1183 "dead_proc_elim.m"
            if (((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1183 "dead_proc_elim.m"
              {
#line 1183 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 2)));
#line 1183 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim___ConjType_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 1)));
#line 1184 "dead_proc_elim.m"
                MR_Box transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_DeadInfo_53;

#line 1184 "dead_proc_elim.m"
                {
#line 1184 "dead_proc_elim.m"
                  mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[14], transform_hlds__dead_proc_elim__Goals_7, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52)), &transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_DeadInfo_53);
                }
#line 1184 "dead_proc_elim.m"
                *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53 = ((MR_Word) transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_DeadInfo_53);
#line 1183 "dead_proc_elim.m"
              }
#line 1183 "dead_proc_elim.m"
            else
#line 1183 "dead_proc_elim.m"
              if (((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1186 "dead_proc_elim.m"
                {
#line 1186 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__Goals_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 1)));
#line 1187 "dead_proc_elim.m"
                  MR_Box transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_DeadInfo_53;

#line 1187 "dead_proc_elim.m"
                  {
#line 1187 "dead_proc_elim.m"
                    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[15], transform_hlds__dead_proc_elim__Goals_74, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52)), &transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_DeadInfo_53);
                  }
#line 1187 "dead_proc_elim.m"
                  *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53 = ((MR_Word) transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_DeadInfo_53);
#line 1186 "dead_proc_elim.m"
                }
#line 1183 "dead_proc_elim.m"
              else
#line 1183 "dead_proc_elim.m"
                if (((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1209 "dead_proc_elim.m"
                  *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53 = transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52;
#line 1183 "dead_proc_elim.m"
                else
#line 1183 "dead_proc_elim.m"
                  if (((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1189 "dead_proc_elim.m"
                    {
#line 1189 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__Cond_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 2)));
#line 1189 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__Then_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 3)));
#line 1189 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__Else_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 4)));
#line 1189 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_67_67;
#line 1189 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_68_68;
#line 1189 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 1)));

#line 1190 "dead_proc_elim.m"
                      {
#line 1190 "dead_proc_elim.m"
                        transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(transform_hlds__dead_proc_elim__Cond_9, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52, &transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_67_67);
                      }
#line 1191 "dead_proc_elim.m"
                      {
#line 1191 "dead_proc_elim.m"
                        transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(transform_hlds__dead_proc_elim__Then_10, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_67_67, &transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_68_68);
                      }
#line 1192 "dead_proc_elim.m"
                      {
#line 1192 "dead_proc_elim.m"
                        transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(transform_hlds__dead_proc_elim__Else_11, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_68_68, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53);
#line 1192 "dead_proc_elim.m"
                        return;
                      }
#line 1189 "dead_proc_elim.m"
                    }
#line 1183 "dead_proc_elim.m"
                  else
#line 1183 "dead_proc_elim.m"
                    if (((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1200 "dead_proc_elim.m"
                      {
#line 1200 "dead_proc_elim.m"
                        MR_Word transform_hlds__dead_proc_elim__SubGoal_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 2)));
#line 1200 "dead_proc_elim.m"
                        MR_Word transform_hlds__dead_proc_elim__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 1)));

#line 1204 "dead_proc_elim.m"
                        {
#line 1204 "dead_proc_elim.m"
                          transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(transform_hlds__dead_proc_elim__SubGoal_75, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53);
#line 1204 "dead_proc_elim.m"
                          return;
                        }
#line 1200 "dead_proc_elim.m"
                      }
#line 1183 "dead_proc_elim.m"
                    else
#line 1183 "dead_proc_elim.m"
                      if (((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1216 "dead_proc_elim.m"
                        {
#line 1216 "dead_proc_elim.m"
                          MR_Word transform_hlds__dead_proc_elim__ShortHand_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 1)));

#line 1222 "dead_proc_elim.m"
                          if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__ShortHand_40)) == (MR_mktag((MR_Integer) 1))))
#line 1219 "dead_proc_elim.m"
                            {
#line 1219 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__MainGoal_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__ShortHand_40, (MR_Integer) 4)));
#line 1219 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__OrElseGoals_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__ShortHand_40, (MR_Integer) 5)));
#line 1219 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_58_58;
#line 1218 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim___GoalType_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__ShortHand_40, (MR_Integer) 0)));
#line 1218 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim___Outer_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__ShortHand_40, (MR_Integer) 1)));
#line 1218 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim___Inner_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__ShortHand_40, (MR_Integer) 2)));
#line 1218 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim___MaybeOutputVars_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__ShortHand_40, (MR_Integer) 3)));
#line 1218 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim___OrElseInners_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__ShortHand_40, (MR_Integer) 6)));
#line 1221 "dead_proc_elim.m"
                              MR_Box transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_DeadInfo_53;

#line 1220 "dead_proc_elim.m"
                              {
#line 1220 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(transform_hlds__dead_proc_elim__MainGoal_45, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52, &transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_58_58);
                              }
#line 1221 "dead_proc_elim.m"
                              {
#line 1221 "dead_proc_elim.m"
                                mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[16], transform_hlds__dead_proc_elim__OrElseGoals_46, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_58_58)), &transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_DeadInfo_53);
                              }
#line 1221 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53 = ((MR_Word) transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_DeadInfo_53);
#line 1219 "dead_proc_elim.m"
                            }
#line 1222 "dead_proc_elim.m"
                          else
#line 1222 "dead_proc_elim.m"
                            if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__ShortHand_40)) == (MR_mktag((MR_Integer) 0))))
#line 1226 "dead_proc_elim.m"
                              {
#line 1228 "dead_proc_elim.m"
                                {
#line 1228 "dead_proc_elim.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.dead_proc_elim", (MR_String) "predicate \140transform_hlds.dead_proc_elim.pre_modecheck_examine_goal_expr\'/3", (MR_String) "unexpected bi_implication");
#line 1228 "dead_proc_elim.m"
                                  return;
                                }
#line 1226 "dead_proc_elim.m"
                              }
#line 1222 "dead_proc_elim.m"
                            else
#line 1223 "dead_proc_elim.m"
                              {
#line 1223 "dead_proc_elim.m"
                                MR_Word transform_hlds__dead_proc_elim__SubGoal_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__ShortHand_40, (MR_Integer) 2)));
#line 1223 "dead_proc_elim.m"
                                MR_Word transform_hlds__dead_proc_elim___MaybeIO_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__ShortHand_40, (MR_Integer) 0)));
#line 1223 "dead_proc_elim.m"
                                MR_Word transform_hlds__dead_proc_elim___ResultVar_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__ShortHand_40, (MR_Integer) 1)));

#line 1224 "dead_proc_elim.m"
                                {
#line 1224 "dead_proc_elim.m"
                                  transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(transform_hlds__dead_proc_elim__SubGoal_76, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53);
#line 1224 "dead_proc_elim.m"
                                  return;
                                }
#line 1223 "dead_proc_elim.m"
                              }
#line 1216 "dead_proc_elim.m"
                        }
#line 1183 "dead_proc_elim.m"
                      else
#line 1194 "dead_proc_elim.m"
                        {
#line 1194 "dead_proc_elim.m"
                          MR_Word transform_hlds__dead_proc_elim__Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 3)));
#line 1194 "dead_proc_elim.m"
                          MR_Word transform_hlds__dead_proc_elim__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 1)));
#line 1194 "dead_proc_elim.m"
                          MR_Word transform_hlds__dead_proc_elim__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_4, (MR_Integer) 2)));
#line 1195 "dead_proc_elim.m"
                          MR_Box transform_hlds__dead_proc_elim__conv7_STATE_VARIABLE_DeadInfo_53;

#line 1195 "dead_proc_elim.m"
                          {
#line 1195 "dead_proc_elim.m"
                            mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[17], transform_hlds__dead_proc_elim__Cases_14, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_52)), &transform_hlds__dead_proc_elim__conv7_STATE_VARIABLE_DeadInfo_53);
                          }
#line 1195 "dead_proc_elim.m"
                          *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_53 = ((MR_Word) transform_hlds__dead_proc_elim__conv7_STATE_VARIABLE_DeadInfo_53);
#line 1194 "dead_proc_elim.m"
                        }
#line 1183 "dead_proc_elim.m"
  }
#line 1178 "dead_proc_elim.m"
}

#line 1171 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(
#line 1171 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Goal_4,
#line 1171 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_8,
#line 1171 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_9)
#line 1171 "dead_proc_elim.m"
{
#line 1174 "dead_proc_elim.m"
  {
#line 1174 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 1174 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Goal_4, (MR_Integer) 0)));
#line 1175 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Goal_4, (MR_Integer) 1)));

#line 1176 "dead_proc_elim.m"
    {
#line 1176 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0(transform_hlds__dead_proc_elim__GoalExpr_6, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_8, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_9);
#line 1176 "dead_proc_elim.m"
      return;
    }
#line 1174 "dead_proc_elim.m"
  }
#line 1171 "dead_proc_elim.m"
}

#line 1164 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_case_3_p_0(
#line 1164 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Case_4,
#line 1164 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_9,
#line 1164 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_10)
#line 1164 "dead_proc_elim.m"
{
#line 1167 "dead_proc_elim.m"
  {
#line 1167 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 1167 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Case_4, (MR_Integer) 2)));
#line 1168 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Case_4, (MR_Integer) 0)));
#line 1168 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Case_4, (MR_Integer) 1)));

#line 1169 "dead_proc_elim.m"
    {
#line 1169 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(transform_hlds__dead_proc_elim__Goal_8, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_9, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_10);
#line 1169 "dead_proc_elim.m"
      return;
    }
#line 1167 "dead_proc_elim.m"
  }
#line 1164 "dead_proc_elim.m"
}

#line 1158 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_process_clause_3_p_0(
#line 1158 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Clause_4,
#line 1158 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_6,
#line 1158 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_7)
#line 1158 "dead_proc_elim.m"
{
#line 1161 "dead_proc_elim.m"
  {
#line 1161 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 1161 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_8_8;
#line 1161 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__GoalExpr_14;
#line 1175 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_15_15;

#line 1162 "dead_proc_elim.m"
    {
#line 1162 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__V_8_8 = hlds__hlds_clauses__clause_body_1_f_0(transform_hlds__dead_proc_elim__Clause_4);
    }
#line 1175 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_8_8, (MR_Integer) 0)));
#line 1175 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_8_8, (MR_Integer) 1)));
#line 1176 "dead_proc_elim.m"
    {
#line 1176 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0(transform_hlds__dead_proc_elim__GoalExpr_14, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_6, transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_7);
#line 1176 "dead_proc_elim.m"
      return;
    }
#line 1161 "dead_proc_elim.m"
  }
#line 1158 "dead_proc_elim.m"
}

#line 1150 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_p_0_1(
#line 1150 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1150 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1150 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1150 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 1150 "dead_proc_elim.m"
{
#line 1150 "dead_proc_elim.m"
  {
#line 1150 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 1150 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_DeadInfo_7;

#line 1150 "dead_proc_elim.m"
    {
#line 1150 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_pred_elim_process_clause_3_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_DeadInfo_7);
    }
#line 1150 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_DeadInfo_7));
#line 1150 "dead_proc_elim.m"
  }
#line 1150 "dead_proc_elim.m"
}

#line 1130 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_p_0(
#line 1130 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_15,
#line 1130 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_16)
#line 1130 "dead_proc_elim.m"
{
#line 1135 "dead_proc_elim.m"
  while (MR_TRUE)
#line 1135 "dead_proc_elim.m"
    {
#line 1135 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 1135 "dead_proc_elim.m"
      {
#line 1135 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 1135 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__ModuleInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_15, (MR_Integer) 0)));
#line 1135 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__NeededNames_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_15, (MR_Integer) 4)));
#line 1135 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_15, (MR_Integer) 1)));
#line 1135 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_15, (MR_Integer) 2)));
#line 1135 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_15, (MR_Integer) 3)));
#line 1153 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__PredId_9;
#line 1153 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_20_20;
#line 1136 "dead_proc_elim.m"
        MR_Box transform_hlds__dead_proc_elim__conv0_PredId_9;

#line 1136 "dead_proc_elim.m"
        {
#line 1136 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__succeeded = mercury__queue__get_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, &transform_hlds__dead_proc_elim__conv0_PredId_9, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_17_17, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_20_20);
        }
#line 1136 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 1136 "dead_proc_elim.m"
          {
#line 1136 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__PredId_9 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_PredId_9);
#line 1136 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 1136 "dead_proc_elim.m"
          }
#line 1153 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 1151 "dead_proc_elim.m"
          {
#line 1151 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_21_21;

#line 1137 "dead_proc_elim.m"
            {
#line 1137 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_18_18, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_9)));
            }
#line 1140 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 1138 "dead_proc_elim.m"
              {
#line 1138 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1138 "dead_proc_elim.m"
                MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_21_21, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ModuleInfo_7));
#line 1138 "dead_proc_elim.m"
                MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_21_21, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_20_20));
#line 1138 "dead_proc_elim.m"
                MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_21_21, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_18_18));
#line 1138 "dead_proc_elim.m"
                MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_21_21, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_19_19));
#line 1138 "dead_proc_elim.m"
                MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_21_21, 4) = ((MR_Box) (transform_hlds__dead_proc_elim__NeededNames_8));
#line 1138 "dead_proc_elim.m"
              }
#line 1140 "dead_proc_elim.m"
            else
#line 1141 "dead_proc_elim.m"
              {
#line 1141 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_39_39 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 1141 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__PredInfo_10;
#line 1141 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__ClausesInfo_11;
#line 1141 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__ClausesRep_12;
#line 1141 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__Clauses_14;
#line 1141 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_24_24;
#line 1141 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_22_29;
#line 1141 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_23_30;
#line 1147 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim___ItemNumbers_13;
#line 1150 "dead_proc_elim.m"
                MR_Box transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_DeadInfo_21_21;

#line 1141 "dead_proc_elim.m"
                {
#line 1141 "dead_proc_elim.m"
                  mercury__set_tree234__insert_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_39_39, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_9)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_19_19, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_22_29);
                }
#line 1142 "dead_proc_elim.m"
                {
#line 1142 "dead_proc_elim.m"
                  mercury__set_tree234__insert_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_39_39, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_9)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_18_18, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_23_30);
                }
#line 1143 "dead_proc_elim.m"
                {
#line 1143 "dead_proc_elim.m"
                  transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1143 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_24_24, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ModuleInfo_7));
#line 1143 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_24_24, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_20_20));
#line 1143 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_24_24, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_23_30));
#line 1143 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_24_24, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_22_29));
#line 1143 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_24_24, 4) = ((MR_Box) (transform_hlds__dead_proc_elim__NeededNames_8));
#line 1143 "dead_proc_elim.m"
                }
#line 1145 "dead_proc_elim.m"
                {
#line 1145 "dead_proc_elim.m"
                  hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__dead_proc_elim__ModuleInfo_7, transform_hlds__dead_proc_elim__PredId_9, &transform_hlds__dead_proc_elim__PredInfo_10);
                }
#line 1146 "dead_proc_elim.m"
                {
#line 1146 "dead_proc_elim.m"
                  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(transform_hlds__dead_proc_elim__PredInfo_10, &transform_hlds__dead_proc_elim__ClausesInfo_11);
                }
#line 1147 "dead_proc_elim.m"
                {
#line 1147 "dead_proc_elim.m"
                  hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(transform_hlds__dead_proc_elim__ClausesInfo_11, &transform_hlds__dead_proc_elim__ClausesRep_12, &transform_hlds__dead_proc_elim___ItemNumbers_13);
                }
#line 1149 "dead_proc_elim.m"
                {
#line 1149 "dead_proc_elim.m"
                  hlds__hlds_clauses__get_clause_list_any_order_2_p_0(transform_hlds__dead_proc_elim__ClausesRep_12, &transform_hlds__dead_proc_elim__Clauses_14);
                }
#line 1150 "dead_proc_elim.m"
                {
#line 1150 "dead_proc_elim.m"
                  mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[13], transform_hlds__dead_proc_elim__Clauses_14, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_24_24)), &transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_DeadInfo_21_21);
                }
#line 1150 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_21_21 = ((MR_Word) transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_DeadInfo_21_21);
#line 1141 "dead_proc_elim.m"
              }
#line 1152 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 1152 "dead_proc_elim.m"
            {
#line 1152 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0__tmp_copy_15 = transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_21_21;

#line 1152 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_15 = transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0__tmp_copy_15;
#line 1152 "dead_proc_elim.m"
            }
#line 1152 "dead_proc_elim.m"
            continue;
#line 1151 "dead_proc_elim.m"
          }
#line 1153 "dead_proc_elim.m"
        else
#line 1154 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_16 = transform_hlds__dead_proc_elim__STATE_VARIABLE_DeadInfo_0_15;
#line 1135 "dead_proc_elim.m"
      }
#line 1135 "dead_proc_elim.m"
      break;
#line 1135 "dead_proc_elim.m"
    }
#line 1130 "dead_proc_elim.m"
}

#line 1066 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_p_0(
#line 1066 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__PredId_4,
#line 1066 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__DeadInfo0_5,
#line 1066 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__DeadInfo_6)
#line 1066 "dead_proc_elim.m"
{
#line 1072 "dead_proc_elim.m"
  {
#line 1072 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 1072 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ModuleInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo0_5, (MR_Integer) 0)));
#line 1072 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Examined_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo0_5, (MR_Integer) 2)));
#line 1072 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__NeededIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo0_5, (MR_Integer) 3)));
#line 1072 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredInfo_12;
#line 1072 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo0_5, (MR_Integer) 1)));
#line 1072 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo0_5, (MR_Integer) 4)));
#line 1072 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_24_24;
#line 1072 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_25;
#line 1123 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredModule_13;
#line 1123 "dead_proc_elim.m"
    MR_String transform_hlds__dead_proc_elim__PredName_14;
#line 1075 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__PredArity_15;

#line 1073 "dead_proc_elim.m"
    {
#line 1073 "dead_proc_elim.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__dead_proc_elim__ModuleInfo_9, transform_hlds__dead_proc_elim__PredId_4, &transform_hlds__dead_proc_elim__PredInfo_12);
    }
#line 1075 "dead_proc_elim.m"
    {
#line 1075 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__PredModule_13 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__dead_proc_elim__PredInfo_12);
    }
#line 1076 "dead_proc_elim.m"
    {
#line 1076 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__PredName_14 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__dead_proc_elim__PredInfo_12);
    }
#line 1077 "dead_proc_elim.m"
    {
#line 1077 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__PredArity_15 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__dead_proc_elim__PredInfo_12);
    }
#line 1081 "dead_proc_elim.m"
    {
#line 1081 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__dead_proc_elim__PredInfo_12);
    }
#line 1082 "dead_proc_elim.m"
    if (!(transform_hlds__dead_proc_elim__succeeded))
#line 1082 "dead_proc_elim.m"
      {
#line 1086 "dead_proc_elim.m"
        {
#line 1086 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(transform_hlds__dead_proc_elim__PredModule_13);
        }
#line 1082 "dead_proc_elim.m"
        if (!(transform_hlds__dead_proc_elim__succeeded))
#line 1082 "dead_proc_elim.m"
          {
#line 1090 "dead_proc_elim.m"
            {
#line 1090 "dead_proc_elim.m"
              MR_String transform_hlds__dead_proc_elim__PredModuleName_16;

#line 1090 "dead_proc_elim.m"
              {
#line 1090 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(transform_hlds__dead_proc_elim__PredModule_13, &transform_hlds__dead_proc_elim__PredModuleName_16);
              }
#line 1090 "dead_proc_elim.m"
              if (transform_hlds__dead_proc_elim__succeeded)
#line 1091 "dead_proc_elim.m"
                {
#line 1091 "dead_proc_elim.m"
                  transform_hlds__dead_proc_elim__succeeded = check_hlds__simplify__simplify_proc__simplify_may_introduce_calls_3_p_0(transform_hlds__dead_proc_elim__PredModuleName_16, transform_hlds__dead_proc_elim__PredName_14, transform_hlds__dead_proc_elim__PredArity_15);
                }
#line 1090 "dead_proc_elim.m"
            }
#line 1082 "dead_proc_elim.m"
            if (!(transform_hlds__dead_proc_elim__succeeded))
#line 1082 "dead_proc_elim.m"
              {
#line 1099 "dead_proc_elim.m"
                {
#line 1099 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_28_28;

#line 1099 "dead_proc_elim.m"
                  {
#line 1099 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__V_28_28 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
                  }
#line 1099 "dead_proc_elim.m"
                  {
#line 1099 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__dead_proc_elim__PredModule_13, transform_hlds__dead_proc_elim__V_28_28);
                  }
#line 1099 "dead_proc_elim.m"
                  if (transform_hlds__dead_proc_elim__succeeded)
#line 1100 "dead_proc_elim.m"
                    {
#line 1100 "dead_proc_elim.m"
                      transform_hlds__dead_proc_elim__succeeded = check_hlds__try_expand__try_expand_may_introduce_calls_2_p_0(transform_hlds__dead_proc_elim__PredName_14, transform_hlds__dead_proc_elim__PredArity_15);
                    }
#line 1099 "dead_proc_elim.m"
                }
#line 1082 "dead_proc_elim.m"
                if (!(transform_hlds__dead_proc_elim__succeeded))
#line 1082 "dead_proc_elim.m"
                  {
#line 1104 "dead_proc_elim.m"
                    {
#line 1105 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__V_22_22;
#line 1105 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__V_29_29;

#line 1104 "dead_proc_elim.m"
                      {
#line 1104 "dead_proc_elim.m"
                        transform_hlds__dead_proc_elim__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__dead_proc_elim__PredInfo_12);
                      }
#line 1104 "dead_proc_elim.m"
                      transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 1104 "dead_proc_elim.m"
                      if (transform_hlds__dead_proc_elim__succeeded)
#line 1104 "dead_proc_elim.m"
                        {
#line 1105 "dead_proc_elim.m"
                          transform_hlds__dead_proc_elim__V_22_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1105 "dead_proc_elim.m"
                          {
#line 1105 "dead_proc_elim.m"
                            hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__dead_proc_elim__PredInfo_12, &transform_hlds__dead_proc_elim__V_29_29);
                          }
#line 1105 "dead_proc_elim.m"
                          {
#line 1105 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__succeeded = hlds__hlds_pred____Unify____import_status_0_0(transform_hlds__dead_proc_elim__V_22_22, transform_hlds__dead_proc_elim__V_29_29);
                          }
#line 1105 "dead_proc_elim.m"
                          transform_hlds__dead_proc_elim__succeeded = !(transform_hlds__dead_proc_elim__succeeded);
#line 1104 "dead_proc_elim.m"
                        }
#line 1104 "dead_proc_elim.m"
                    }
#line 1082 "dead_proc_elim.m"
                    if (!(transform_hlds__dead_proc_elim__succeeded))
#line 1082 "dead_proc_elim.m"
                      {
#line 1109 "dead_proc_elim.m"
                        {
#line 1109 "dead_proc_elim.m"
                          MR_Word transform_hlds__dead_proc_elim__V_30_30;

#line 1109 "dead_proc_elim.m"
                          {
#line 1109 "dead_proc_elim.m"
                            hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_9, &transform_hlds__dead_proc_elim__V_30_30);
                          }
#line 1109 "dead_proc_elim.m"
                          {
#line 1109 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__dead_proc_elim__PredModule_13, transform_hlds__dead_proc_elim__V_30_30);
                          }
#line 1109 "dead_proc_elim.m"
                        }
#line 1082 "dead_proc_elim.m"
                        if (!(transform_hlds__dead_proc_elim__succeeded))
#line 1082 "dead_proc_elim.m"
                          {
#line 1114 "dead_proc_elim.m"
                            {
#line 1114 "dead_proc_elim.m"
                              MR_String transform_hlds__dead_proc_elim__V_17_17;

#line 1114 "dead_proc_elim.m"
                              {
#line 1114 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__succeeded = mercury__string__remove_suffix_3_p_0(transform_hlds__dead_proc_elim__PredName_14, (MR_String) "_init_any", &transform_hlds__dead_proc_elim__V_17_17);
                              }
#line 1114 "dead_proc_elim.m"
                              if (transform_hlds__dead_proc_elim__succeeded)
#line 1115 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__PredArity_15 == (MR_Integer) 1);
#line 1114 "dead_proc_elim.m"
                            }
#line 1082 "dead_proc_elim.m"
                            if (!(transform_hlds__dead_proc_elim__succeeded))
#line 1118 "dead_proc_elim.m"
                              {
#line 1118 "dead_proc_elim.m"
                                MR_Word transform_hlds__dead_proc_elim__V_18_18;

#line 1118 "dead_proc_elim.m"
                                {
#line 1118 "dead_proc_elim.m"
                                  transform_hlds__dead_proc_elim__succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(transform_hlds__dead_proc_elim__PredInfo_12, &transform_hlds__dead_proc_elim__V_18_18);
                                }
#line 1118 "dead_proc_elim.m"
                              }
#line 1082 "dead_proc_elim.m"
                          }
#line 1082 "dead_proc_elim.m"
                      }
#line 1082 "dead_proc_elim.m"
                  }
#line 1082 "dead_proc_elim.m"
              }
#line 1082 "dead_proc_elim.m"
          }
#line 1082 "dead_proc_elim.m"
      }
#line 1123 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 1121 "dead_proc_elim.m"
      {
#line 1121 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_23_23;

#line 1121 "dead_proc_elim.m"
        {
#line 1121 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1121 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_23_23, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredModule_13));
#line 1121 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_23_23, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__PredName_14));
#line 1121 "dead_proc_elim.m"
        }
#line 1121 "dead_proc_elim.m"
        {
#line 1121 "dead_proc_elim.m"
          mercury__set_tree234__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (transform_hlds__dead_proc_elim__V_23_23)), transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_20_20, &transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_24_24);
        }
#line 1122 "dead_proc_elim.m"
        {
#line 1122 "dead_proc_elim.m"
          mercury__queue__put_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_4)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_19, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_25);
        }
#line 1121 "dead_proc_elim.m"
      }
#line 1123 "dead_proc_elim.m"
    else
#line 1124 "dead_proc_elim.m"
      {
#line 1124 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_24_24 = transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_20_20;
#line 1124 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_25 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_19;
#line 1124 "dead_proc_elim.m"
      }
#line 1126 "dead_proc_elim.m"
    {
#line 1126 "dead_proc_elim.m"
      MR_Word base;
#line 1126 "dead_proc_elim.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1126 "dead_proc_elim.m"
      *transform_hlds__dead_proc_elim__DeadInfo_6 = base;
#line 1126 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ModuleInfo_9));
#line 1126 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_25));
#line 1126 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__Examined_10));
#line 1126 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__NeededIds_11));
#line 1126 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_NeededNames_24_24));
#line 1126 "dead_proc_elim.m"
    }
#line 1072 "dead_proc_elim.m"
  }
#line 1066 "dead_proc_elim.m"
}

#line 1055 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_add_entity_5_p_0(
#line 1055 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 1055 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 1055 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 1055 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_0_4,
#line 1055 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_5)
#line 1055 "dead_proc_elim.m"
{
#line 1059 "dead_proc_elim.m"
  {
#line 1059 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 1059 "dead_proc_elim.m"
    if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 1064 "dead_proc_elim.m"
      {
#line 1064 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_0_4;
#line 1064 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2;
#line 1064 "dead_proc_elim.m"
      }
#line 1059 "dead_proc_elim.m"
    else
#line 1059 "dead_proc_elim.m"
      if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1059 "dead_proc_elim.m"
        {
#line 1059 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 1059 "dead_proc_elim.m"
          MR_Word transform_hlds__dead_proc_elim__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 1059 "dead_proc_elim.m"
          MR_Integer transform_hlds__dead_proc_elim__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));

#line 1060 "dead_proc_elim.m"
          {
#line 1060 "dead_proc_elim.m"
            mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_40_40, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_6)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3);
          }
#line 1061 "dead_proc_elim.m"
          {
#line 1061 "dead_proc_elim.m"
            mercury__set_tree234__insert_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_40_40, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_6)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_0_4, transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_5);
#line 1061 "dead_proc_elim.m"
            return;
          }
#line 1059 "dead_proc_elim.m"
        }
#line 1059 "dead_proc_elim.m"
      else
#line 1059 "dead_proc_elim.m"
        if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1062 "dead_proc_elim.m"
          {
#line 1062 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_0_4;
#line 1062 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2;
#line 1062 "dead_proc_elim.m"
          }
#line 1059 "dead_proc_elim.m"
        else
#line 1063 "dead_proc_elim.m"
          {
#line 1063 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Preds_0_4;
#line 1063 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2;
#line 1063 "dead_proc_elim.m"
          }
#line 1059 "dead_proc_elim.m"
  }
#line 1055 "dead_proc_elim.m"
}

#line 959 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_const_structs_4_p_0(
#line 959 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 959 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 959 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_0_3,
#line 959 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_4)
#line 959 "dead_proc_elim.m"
{
#line 962 "dead_proc_elim.m"
  while (MR_TRUE)
#line 962 "dead_proc_elim.m"
    {
#line 962 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 962 "dead_proc_elim.m"
      {
#line 962 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 962 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 962 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_0_3;
#line 962 "dead_proc_elim.m"
        else
#line 964 "dead_proc_elim.m"
          {
#line 964 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__ConstNum_9;
#line 964 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__ConstNumStructs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 964 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Entity_14;
#line 964 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 964 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_19_19;
#line 963 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_10_10;
#line 966 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_15_15;
#line 966 "dead_proc_elim.m"
            MR_Box transform_hlds__dead_proc_elim__conv0_V_15_15;

#line 963 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__ConstNum_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_18_18, (MR_Integer) 0)));
#line 963 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_18_18, (MR_Integer) 1)));
#line 965 "dead_proc_elim.m"
            {
#line 965 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__Entity_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 965 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Entity_14, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ConstNum_9));
#line 965 "dead_proc_elim.m"
            }
#line 966 "dead_proc_elim.m"
            {
#line 966 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, transform_hlds__dead_proc_elim__HeadVar__2_2, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_14)), &transform_hlds__dead_proc_elim__conv0_V_15_15);
            }
#line 966 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 966 "dead_proc_elim.m"
              {
#line 966 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__V_15_15 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_V_15_15);
#line 966 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 966 "dead_proc_elim.m"
              }
#line 968 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 966 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_19_19 = transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_0_3;
#line 968 "dead_proc_elim.m"
            else
#line 969 "dead_proc_elim.m"
              {
#line 969 "dead_proc_elim.m"
                hlds__const_struct__delete_const_struct_3_p_0(transform_hlds__dead_proc_elim__ConstNum_9, transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_0_3, &transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_19_19);
              }
#line 971 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 971 "dead_proc_elim.m"
            {
#line 971 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1 = transform_hlds__dead_proc_elim__ConstNumStructs_11;
#line 971 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_0__tmp_copy_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_19_19;

#line 971 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_0_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_ConstStructDb_0__tmp_copy_3;
#line 971 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1;
#line 971 "dead_proc_elim.m"
            }
#line 971 "dead_proc_elim.m"
            continue;
#line 964 "dead_proc_elim.m"
          }
#line 962 "dead_proc_elim.m"
      }
#line 962 "dead_proc_elim.m"
      break;
#line 962 "dead_proc_elim.m"
    }
#line 959 "dead_proc_elim.m"
}

#line 940 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_type_ctor_infos_3_p_0(
#line 940 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 940 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 940 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__HeadVar__3_3)
#line 940 "dead_proc_elim.m"
{
#line 943 "dead_proc_elim.m"
  {
#line 943 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 943 "dead_proc_elim.m"
    if ((transform_hlds__dead_proc_elim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 943 "dead_proc_elim.m"
      *transform_hlds__dead_proc_elim__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 943 "dead_proc_elim.m"
    else
#line 945 "dead_proc_elim.m"
      {
#line 945 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfo0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 945 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfos0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 945 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfos1_9;
#line 945 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__ModuleName_11;
#line 945 "dead_proc_elim.m"
        MR_String transform_hlds__dead_proc_elim__TypeName_12;
#line 945 "dead_proc_elim.m"
        MR_Integer transform_hlds__dead_proc_elim__Arity_13;
#line 948 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim___TypeCtor_10;
#line 948 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim___Status_14;
#line 948 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim___HldsDefn_15;
#line 948 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim___Unify_16;
#line 948 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim___Compare_17;
#line 951 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__Entity_18;
#line 952 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_19_19;
#line 952 "dead_proc_elim.m"
        MR_Box transform_hlds__dead_proc_elim__conv0_V_19_19;

#line 946 "dead_proc_elim.m"
        {
#line 946 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__dead_proc_eliminate_type_ctor_infos_3_p_0(transform_hlds__dead_proc_elim__TypeCtorGenInfos0_6, transform_hlds__dead_proc_elim__HeadVar__2_2, &transform_hlds__dead_proc_elim__TypeCtorGenInfos1_9);
        }
#line 948 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim___TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo0_5, (MR_Integer) 0)));
#line 948 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo0_5, (MR_Integer) 1)));
#line 948 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__TypeName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo0_5, (MR_Integer) 2)));
#line 948 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo0_5, (MR_Integer) 3)));
#line 948 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim___Status_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo0_5, (MR_Integer) 4)));
#line 948 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim___HldsDefn_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo0_5, (MR_Integer) 5)));
#line 948 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim___Unify_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo0_5, (MR_Integer) 6)));
#line 948 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim___Compare_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo0_5, (MR_Integer) 7)));
#line 951 "dead_proc_elim.m"
        {
#line 951 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__Entity_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 951 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_18, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ModuleName_11));
#line 951 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_18, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__TypeName_12));
#line 951 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_18, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__Arity_13));
#line 951 "dead_proc_elim.m"
        }
#line 952 "dead_proc_elim.m"
        {
#line 952 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, transform_hlds__dead_proc_elim__HeadVar__2_2, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_18)), &transform_hlds__dead_proc_elim__conv0_V_19_19);
        }
#line 952 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 952 "dead_proc_elim.m"
          {
#line 952 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__V_19_19 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_V_19_19);
#line 952 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 952 "dead_proc_elim.m"
          }
#line 955 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 954 "dead_proc_elim.m"
          {
#line 954 "dead_proc_elim.m"
            MR_Word base;
#line 954 "dead_proc_elim.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 954 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__HeadVar__3_3 = base;
#line 954 "dead_proc_elim.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__TypeCtorGenInfo0_5));
#line 954 "dead_proc_elim.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__TypeCtorGenInfos1_9));
#line 954 "dead_proc_elim.m"
          }
#line 955 "dead_proc_elim.m"
        else
#line 956 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__HeadVar__3_3 = transform_hlds__dead_proc_elim__TypeCtorGenInfos1_9;
#line 945 "dead_proc_elim.m"
      }
#line 943 "dead_proc_elim.m"
  }
#line 940 "dead_proc_elim.m"
}

#line 879 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_p_0(
#line 879 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__PredId_12,
#line 879 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Keep_13,
#line 879 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__WarnForThisPred_14,
#line 879 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ProcElimInfo_15,
#line 879 "dead_proc_elim.m"
  MR_Integer transform_hlds__dead_proc_elim__ProcId_16,
#line 879 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcTable_0_30,
#line 879 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcTable_31,
#line 879 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Changed_0_32,
#line 879 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Changed_33,
#line 879 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Specs_0_34,
#line 879 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Specs_35)
#line 879 "dead_proc_elim.m"
{
#line 884 "dead_proc_elim.m"
  {
#line 884 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 884 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Needed_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo_15, (MR_Integer) 0)));
#line 884 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ModuleInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo_15, (MR_Integer) 1)));
#line 885 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo_15, (MR_Integer) 2)));
#line 885 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo_15, (MR_Integer) 3)));
#line 885 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo_15, (MR_Integer) 4)));

#line 890 "dead_proc_elim.m"
    {
#line 890 "dead_proc_elim.m"
      MR_Word transform_hlds__dead_proc_elim__V_36_36;
#line 890 "dead_proc_elim.m"
      MR_Word transform_hlds__dead_proc_elim__V_22_22;
#line 890 "dead_proc_elim.m"
      MR_Box transform_hlds__dead_proc_elim__conv0_V_22_22;

#line 890 "dead_proc_elim.m"
      {
#line 890 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 890 "dead_proc_elim.m"
        MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_36_36, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_12));
#line 890 "dead_proc_elim.m"
        MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_36_36, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_16));
#line 890 "dead_proc_elim.m"
      }
#line 890 "dead_proc_elim.m"
      {
#line 890 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, transform_hlds__dead_proc_elim__Needed_20, ((MR_Box) (transform_hlds__dead_proc_elim__V_36_36)), &transform_hlds__dead_proc_elim__conv0_V_22_22);
      }
#line 890 "dead_proc_elim.m"
      if (transform_hlds__dead_proc_elim__succeeded)
#line 890 "dead_proc_elim.m"
        {
#line 890 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__V_22_22 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_V_22_22);
#line 890 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 890 "dead_proc_elim.m"
        }
#line 890 "dead_proc_elim.m"
    }
#line 891 "dead_proc_elim.m"
    if (!(transform_hlds__dead_proc_elim__succeeded))
#line 893 "dead_proc_elim.m"
      {
#line 893 "dead_proc_elim.m"
        MR_Integer transform_hlds__dead_proc_elim__V_56_56;

#line 893 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__succeeded = ((MR_tag((MR_Word) transform_hlds__dead_proc_elim__Keep_13)) == (MR_mktag((MR_Integer) 1)));
#line 893 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 893 "dead_proc_elim.m"
          {
#line 893 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__Keep_13, (MR_Integer) 0)));
#line 893 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__ProcId_16 == transform_hlds__dead_proc_elim__V_56_56);
#line 893 "dead_proc_elim.m"
          }
#line 893 "dead_proc_elim.m"
      }
#line 897 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 896 "dead_proc_elim.m"
      {
#line 896 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Specs_35 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Specs_0_34;
#line 896 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Changed_33 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Changed_0_32;
#line 896 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcTable_31 = transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcTable_0_30;
#line 896 "dead_proc_elim.m"
      }
#line 897 "dead_proc_elim.m"
    else
#line 898 "dead_proc_elim.m"
      {
#line 898 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_54_54;
#line 898 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_55_55;
#line 898 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__Globals_23;
#line 898 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__VeryVerbose_24;
#line 898 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__ProcInfo0_26;
#line 898 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__HasForeignExports_27;
#line 911 "dead_proc_elim.m"
        MR_Box transform_hlds__dead_proc_elim__conv1_ProcInfo0_26;

#line 898 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Changed_33 = (MR_Integer) 1;
#line 899 "dead_proc_elim.m"
        {
#line 899 "dead_proc_elim.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_21, &transform_hlds__dead_proc_elim__Globals_23);
        }
#line 900 "dead_proc_elim.m"
        {
#line 900 "dead_proc_elim.m"
          libs__globals__lookup_bool_option_3_p_0(transform_hlds__dead_proc_elim__Globals_23, (MR_Integer) 46, &transform_hlds__dead_proc_elim__VeryVerbose_24);
        }
#line 908 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__VeryVerbose_24 == (MR_Integer) 0))
#line 909 "dead_proc_elim.m"
          {
#line 909 "dead_proc_elim.m"
          }
#line 908 "dead_proc_elim.m"
        else
#line 903 "dead_proc_elim.m"
          {
#line 904 "dead_proc_elim.m"
            {
#line 904 "dead_proc_elim.m"
              hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Eliminated the dead procedure ", transform_hlds__dead_proc_elim__PredId_12, transform_hlds__dead_proc_elim__ProcId_16, transform_hlds__dead_proc_elim__ModuleInfo_21);
            }
#line 903 "dead_proc_elim.m"
          }
#line 6330 "transform_hlds.dead_proc_elim.c"
        transform_hlds__dead_proc_elim__TypeCtorInfo_54_54 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 6332 "transform_hlds.dead_proc_elim.c"
        transform_hlds__dead_proc_elim__TypeCtorInfo_55_55 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 911 "dead_proc_elim.m"
        {
#line 911 "dead_proc_elim.m"
          mercury__map__lookup_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_54_54, transform_hlds__dead_proc_elim__TypeCtorInfo_55_55, transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcTable_0_30, ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_16)), &transform_hlds__dead_proc_elim__conv1_ProcInfo0_26);
        }
#line 911 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__ProcInfo0_26 = ((MR_Word) transform_hlds__dead_proc_elim__conv1_ProcInfo0_26);
#line 912 "dead_proc_elim.m"
        {
#line 912 "dead_proc_elim.m"
          hlds__hlds_pred__proc_info_get_has_any_foreign_exports_2_p_0(transform_hlds__dead_proc_elim__ProcInfo0_26, &transform_hlds__dead_proc_elim__HasForeignExports_27);
        }
#line 914 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__WarnForThisPred_14 == (MR_Integer) 1);
#line 914 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 915 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__HasForeignExports_27 == (MR_Integer) 0);
#line 920 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 917 "dead_proc_elim.m"
          {
#line 917 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_43_95;
#line 917 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Context_28;
#line 917 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Spec_29;
#line 917 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__ProcPieces_63;
#line 917 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Pieces_64;
#line 917 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Msg_65;
#line 917 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_68_68;
#line 917 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_73_73;
#line 917 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_80_80;
#line 917 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_81_81;
#line 917 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_84_84;
#line 917 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_85_85;
#line 917 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_93_93;

#line 917 "dead_proc_elim.m"
            {
#line 917 "dead_proc_elim.m"
              hlds__hlds_pred__proc_info_get_context_2_p_0(transform_hlds__dead_proc_elim__ProcInfo0_26, &transform_hlds__dead_proc_elim__Context_28);
            }
#line 931 "dead_proc_elim.m"
            {
#line 931 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 931 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_68_68, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_12));
#line 931 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_68_68, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_16));
#line 931 "dead_proc_elim.m"
            }
#line 930 "dead_proc_elim.m"
            {
#line 930 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__ProcPieces_63 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__dead_proc_elim__ModuleInfo_21, (MR_Integer) 1, transform_hlds__dead_proc_elim__V_68_68);
            }
#line 6403 "transform_hlds.dead_proc_elim.c"
            transform_hlds__dead_proc_elim__TypeCtorInfo_43_95 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 932 "dead_proc_elim.m"
            {
#line 932 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__V_73_73 = mercury__list__f_43_43_2_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_43_95, transform_hlds__dead_proc_elim__ProcPieces_63, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_1[10]));
            }
#line 932 "dead_proc_elim.m"
            {
#line 932 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__Pieces_64 = mercury__list__f_43_43_2_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_43_95, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_1[12]), transform_hlds__dead_proc_elim__V_73_73);
            }
#line 935 "dead_proc_elim.m"
            {
#line 935 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 935 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_85_85, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Pieces_64));
#line 935 "dead_proc_elim.m"
            }
#line 935 "dead_proc_elim.m"
            {
#line 935 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 935 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_84_84, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__V_85_85));
#line 935 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 935 "dead_proc_elim.m"
            }
#line 935 "dead_proc_elim.m"
            {
#line 935 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 935 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_81_81, 0) = ((MR_Box) (((MR_Integer) 29 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 935 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_81_81, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__V_84_84));
#line 935 "dead_proc_elim.m"
            }
#line 935 "dead_proc_elim.m"
            {
#line 935 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 935 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_80_80, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__V_81_81));
#line 935 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 935 "dead_proc_elim.m"
            }
#line 934 "dead_proc_elim.m"
            {
#line 934 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__Msg_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 934 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Msg_65, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Context_28));
#line 934 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Msg_65, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__V_80_80));
#line 934 "dead_proc_elim.m"
            }
#line 938 "dead_proc_elim.m"
            {
#line 938 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 938 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_93_93, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Msg_65));
#line 938 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 938 "dead_proc_elim.m"
            }
#line 938 "dead_proc_elim.m"
            {
#line 938 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__Spec_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 938 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Spec_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_3[0])));
#line 938 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Spec_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 938 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Spec_29, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__V_93_93));
#line 938 "dead_proc_elim.m"
            }
#line 919 "dead_proc_elim.m"
            {
#line 919 "dead_proc_elim.m"
              MR_Word base;
#line 919 "dead_proc_elim.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 919 "dead_proc_elim.m"
              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Specs_35 = base;
#line 919 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Spec_29));
#line 919 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Specs_0_34));
#line 919 "dead_proc_elim.m"
            }
#line 917 "dead_proc_elim.m"
          }
#line 920 "dead_proc_elim.m"
        else
#line 919 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Specs_35 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Specs_0_34;
#line 923 "dead_proc_elim.m"
        {
#line 923 "dead_proc_elim.m"
          mercury__map__delete_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_54_54, transform_hlds__dead_proc_elim__TypeCtorInfo_55_55, ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_16)), transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcTable_0_30, transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcTable_31);
#line 923 "dead_proc_elim.m"
          return;
        }
#line 898 "dead_proc_elim.m"
      }
#line 884 "dead_proc_elim.m"
  }
#line 879 "dead_proc_elim.m"
}

#line 846 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0_2(
#line 846 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 846 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 846 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 846 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 846 "dead_proc_elim.m"
{
#line 846 "dead_proc_elim.m"
  {
#line 846 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 846 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv7_HeadVar__4_44;

#line 846 "dead_proc_elim.m"
    {
#line 846 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_proc_eliminate_pred__846__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv7_HeadVar__4_44);
    }
#line 846 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv7_HeadVar__4_44));
#line 846 "dead_proc_elim.m"
  }
#line 846 "dead_proc_elim.m"
}

#line 825 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0_1(
#line 825 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 825 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 825 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 825 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 825 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 825 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5,
#line 825 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_6,
#line 825 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_7)
#line 825 "dead_proc_elim.m"
{
#line 825 "dead_proc_elim.m"
  {
#line 825 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 825 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_ProcTable_31;
#line 825 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Changed_33;
#line 825 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Specs_35;

#line 825 "dead_proc_elim.m"
    {
#line 825 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__closure, (MR_Integer) 6))), ((MR_Integer) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_ProcTable_31, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_4), &transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Changed_33, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_6), &transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Specs_35);
    }
#line 825 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_ProcTable_31));
#line 825 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_5 = ((MR_Box) (transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Changed_33));
#line 825 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_7 = ((MR_Box) (transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Specs_35));
#line 825 "dead_proc_elim.m"
  }
#line 825 "dead_proc_elim.m"
}

#line 776 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0(
#line 776 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ElimOptImported_5,
#line 776 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__PredId_6,
#line 776 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_0_36,
#line 776 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_37)
#line 776 "dead_proc_elim.m"
{
#line 779 "dead_proc_elim.m"
  {
#line 779 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 779 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_68_68 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 779 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_69_69 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 779 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Needed_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_0_36, (MR_Integer) 0)));
#line 779 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ModuleInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_0_36, (MR_Integer) 1)));
#line 779 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredTable0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_0_36, (MR_Integer) 2)));
#line 779 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Changed0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_0_36, (MR_Integer) 3)));
#line 779 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Specs0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_0_36, (MR_Integer) 4)));
#line 779 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredInfo0_13;
#line 779 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Status_14;
#line 782 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv0_PredInfo0_13;
#line 832 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Keep_15;
#line 832 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__WarnForThisPred_16;

#line 782 "dead_proc_elim.m"
    {
#line 782 "dead_proc_elim.m"
      mercury__map__lookup_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_68_68, transform_hlds__dead_proc_elim__TypeCtorInfo_69_69, transform_hlds__dead_proc_elim__PredTable0_10, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_6)), &transform_hlds__dead_proc_elim__conv0_PredInfo0_13);
    }
#line 782 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__PredInfo0_13 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_PredInfo0_13);
#line 783 "dead_proc_elim.m"
    {
#line 783 "dead_proc_elim.m"
      hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__dead_proc_elim__PredInfo0_13, &transform_hlds__dead_proc_elim__Status_14);
    }
#line 812 "dead_proc_elim.m"
    if ((transform_hlds__dead_proc_elim__Status_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 788 "dead_proc_elim.m"
      {
#line 789 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__Keep_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 793 "dead_proc_elim.m"
        {
#line 793 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__dead_proc_elim__PredInfo0_13);
        }
#line 796 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 795 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__WarnForThisPred_16 = (MR_Integer) 0;
#line 796 "dead_proc_elim.m"
        else
#line 809 "dead_proc_elim.m"
          {
#line 803 "dead_proc_elim.m"
            MR_String transform_hlds__dead_proc_elim__PredName_17;

#line 803 "dead_proc_elim.m"
            {
#line 803 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__PredName_17 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__dead_proc_elim__PredInfo0_13);
            }
#line 804 "dead_proc_elim.m"
            {
#line 804 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__succeeded = mercury__string__prefix_2_p_0(transform_hlds__dead_proc_elim__PredName_17, (MR_String) "IntroducedFrom__");
            }
#line 805 "dead_proc_elim.m"
            if (!(transform_hlds__dead_proc_elim__succeeded))
#line 805 "dead_proc_elim.m"
              {
#line 805 "dead_proc_elim.m"
                {
#line 805 "dead_proc_elim.m"
                  transform_hlds__dead_proc_elim__succeeded = mercury__string__prefix_2_p_0(transform_hlds__dead_proc_elim__PredName_17, (MR_String) "TypeSpecOf__");
                }
#line 805 "dead_proc_elim.m"
              }
#line 809 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 808 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__WarnForThisPred_16 = (MR_Integer) 0;
#line 809 "dead_proc_elim.m"
            else
#line 810 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__WarnForThisPred_16 = (MR_Integer) 1;
#line 809 "dead_proc_elim.m"
          }
#line 788 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 788 "dead_proc_elim.m"
      }
#line 812 "dead_proc_elim.m"
    else
#line 812 "dead_proc_elim.m"
      if ((transform_hlds__dead_proc_elim__Status_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 817 "dead_proc_elim.m"
        {
#line 817 "dead_proc_elim.m"
          MR_Integer transform_hlds__dead_proc_elim__InitProcId_18;

#line 818 "dead_proc_elim.m"
          {
#line 818 "dead_proc_elim.m"
            hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&transform_hlds__dead_proc_elim__InitProcId_18);
          }
#line 819 "dead_proc_elim.m"
          {
#line 819 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__Keep_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 819 "dead_proc_elim.m"
            MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__Keep_15, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__InitProcId_18));
#line 819 "dead_proc_elim.m"
          }
#line 820 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__WarnForThisPred_16 = (MR_Integer) 0;
#line 817 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 817 "dead_proc_elim.m"
        }
#line 812 "dead_proc_elim.m"
      else
#line 812 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__Status_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 813 "dead_proc_elim.m"
          {
#line 814 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__Keep_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 815 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__WarnForThisPred_16 = (MR_Integer) 0;
#line 813 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 813 "dead_proc_elim.m"
          }
#line 812 "dead_proc_elim.m"
        else
#line 812 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__succeeded = MR_FALSE;
#line 832 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 823 "dead_proc_elim.m"
      {
#line 823 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__ProcIds_19;
#line 823 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__ProcTable0_20;
#line 823 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__ProcTable_21;
#line 823 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__Changed_22;
#line 823 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__Specs_23;
#line 823 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__PredInfo_24;
#line 823 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__PredTable_25;
#line 823 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_40_40;
#line 825 "dead_proc_elim.m"
        MR_Box transform_hlds__dead_proc_elim__conv6_ProcTable_21;
#line 825 "dead_proc_elim.m"
        MR_Box transform_hlds__dead_proc_elim__conv5_Changed_22;
#line 825 "dead_proc_elim.m"
        MR_Box transform_hlds__dead_proc_elim__conv4_Specs_23;

#line 823 "dead_proc_elim.m"
        {
#line 823 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__ProcIds_19 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__dead_proc_elim__PredInfo0_13);
        }
#line 824 "dead_proc_elim.m"
        {
#line 824 "dead_proc_elim.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__dead_proc_elim__PredInfo0_13, &transform_hlds__dead_proc_elim__ProcTable0_20);
        }
#line 825 "dead_proc_elim.m"
        {
#line 825 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 825 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_40_40, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_9[0]));
#line 825 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_40_40, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0_1));
#line 825 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 825 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_40_40, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_6));
#line 825 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_40_40, 4) = ((MR_Box) (transform_hlds__dead_proc_elim__Keep_15));
#line 825 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_40_40, 5) = ((MR_Box) (transform_hlds__dead_proc_elim__WarnForThisPred_16));
#line 825 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_40_40, 6) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_0_36));
#line 825 "dead_proc_elim.m"
        }
#line 825 "dead_proc_elim.m"
        {
#line 825 "dead_proc_elim.m"
          mercury__list__foldl3_8_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[1], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[5], transform_hlds__dead_proc_elim__V_40_40, transform_hlds__dead_proc_elim__ProcIds_19, ((MR_Box) (transform_hlds__dead_proc_elim__ProcTable0_20)), &transform_hlds__dead_proc_elim__conv6_ProcTable_21, ((MR_Box) (transform_hlds__dead_proc_elim__Changed0_11)), &transform_hlds__dead_proc_elim__conv5_Changed_22, ((MR_Box) (transform_hlds__dead_proc_elim__Specs0_12)), &transform_hlds__dead_proc_elim__conv4_Specs_23);
        }
#line 825 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__ProcTable_21 = ((MR_Word) transform_hlds__dead_proc_elim__conv6_ProcTable_21);
#line 825 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__Changed_22 = ((MR_Word) transform_hlds__dead_proc_elim__conv5_Changed_22);
#line 825 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__Specs_23 = ((MR_Word) transform_hlds__dead_proc_elim__conv4_Specs_23);
#line 828 "dead_proc_elim.m"
        {
#line 828 "dead_proc_elim.m"
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__dead_proc_elim__ProcTable_21, transform_hlds__dead_proc_elim__PredInfo0_13, &transform_hlds__dead_proc_elim__PredInfo_24);
        }
#line 829 "dead_proc_elim.m"
        {
#line 829 "dead_proc_elim.m"
          mercury__map__det_update_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_68_68, transform_hlds__dead_proc_elim__TypeCtorInfo_69_69, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_6)), ((MR_Box) (transform_hlds__dead_proc_elim__PredInfo_24)), transform_hlds__dead_proc_elim__PredTable0_10, &transform_hlds__dead_proc_elim__PredTable_25);
        }
#line 830 "dead_proc_elim.m"
        {
#line 830 "dead_proc_elim.m"
          MR_Word base;
#line 830 "dead_proc_elim.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 830 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_37 = base;
#line 830 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Needed_8));
#line 830 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ModuleInfo_9));
#line 830 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__PredTable_25));
#line 830 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__Changed_22));
#line 830 "dead_proc_elim.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__dead_proc_elim__Specs_23));
#line 830 "dead_proc_elim.m"
        }
#line 823 "dead_proc_elim.m"
      }
#line 832 "dead_proc_elim.m"
    else
#line 872 "dead_proc_elim.m"
      {
#line 838 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__ElimOptImported_5 == (MR_Integer) 0);
#line 838 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 839 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__Status_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 872 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 841 "dead_proc_elim.m"
          {
#line 841 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__DestroyGoal_26;
#line 841 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PredInfo1_32;
#line 841 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Globals_33;
#line 841 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__VeryVerbose_34;
#line 841 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__ProcIds_56;
#line 841 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__ProcTable0_57;
#line 841 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__ProcTable_58;
#line 841 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PredInfo_60;
#line 841 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PredTable_61;
#line 852 "dead_proc_elim.m"
            MR_Box transform_hlds__dead_proc_elim__conv8_ProcTable_58;

#line 842 "dead_proc_elim.m"
            {
#line 842 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__ProcIds_56 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__dead_proc_elim__PredInfo0_13);
            }
#line 843 "dead_proc_elim.m"
            {
#line 843 "dead_proc_elim.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__dead_proc_elim__PredInfo0_13, &transform_hlds__dead_proc_elim__ProcTable0_57);
            }
#line 846 "dead_proc_elim.m"
            {
#line 846 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__DestroyGoal_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 846 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DestroyGoal_26, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_6[2]));
#line 846 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DestroyGoal_26, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0_2));
#line 846 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DestroyGoal_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 846 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DestroyGoal_26, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcTable0_57));
#line 846 "dead_proc_elim.m"
            }
#line 852 "dead_proc_elim.m"
            {
#line 852 "dead_proc_elim.m"
              mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[1], transform_hlds__dead_proc_elim__DestroyGoal_26, transform_hlds__dead_proc_elim__ProcIds_56, ((MR_Box) (transform_hlds__dead_proc_elim__ProcTable0_57)), &transform_hlds__dead_proc_elim__conv8_ProcTable_58);
            }
#line 852 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__ProcTable_58 = ((MR_Word) transform_hlds__dead_proc_elim__conv8_ProcTable_58);
#line 853 "dead_proc_elim.m"
            {
#line 853 "dead_proc_elim.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__dead_proc_elim__ProcTable_58, transform_hlds__dead_proc_elim__PredInfo0_13, &transform_hlds__dead_proc_elim__PredInfo1_32);
            }
#line 854 "dead_proc_elim.m"
            {
#line 854 "dead_proc_elim.m"
              hlds__hlds_pred__pred_info_set_import_status_3_p_0((MR_Word) MR_mkword(MR_mktag(2), &transform_hlds__dead_proc_elim_scalar_common_8[1]), transform_hlds__dead_proc_elim__PredInfo1_32, &transform_hlds__dead_proc_elim__PredInfo_60);
            }
#line 856 "dead_proc_elim.m"
            {
#line 856 "dead_proc_elim.m"
              mercury__map__det_update_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_68_68, transform_hlds__dead_proc_elim__TypeCtorInfo_69_69, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_6)), ((MR_Box) (transform_hlds__dead_proc_elim__PredInfo_60)), transform_hlds__dead_proc_elim__PredTable0_10, &transform_hlds__dead_proc_elim__PredTable_61);
            }
#line 858 "dead_proc_elim.m"
            {
#line 858 "dead_proc_elim.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_9, &transform_hlds__dead_proc_elim__Globals_33);
            }
#line 859 "dead_proc_elim.m"
            {
#line 859 "dead_proc_elim.m"
              libs__globals__lookup_bool_option_3_p_0(transform_hlds__dead_proc_elim__Globals_33, (MR_Integer) 46, &transform_hlds__dead_proc_elim__VeryVerbose_34);
            }
#line 867 "dead_proc_elim.m"
            if ((transform_hlds__dead_proc_elim__VeryVerbose_34 == (MR_Integer) 0))
#line 868 "dead_proc_elim.m"
              {
#line 868 "dead_proc_elim.m"
              }
#line 867 "dead_proc_elim.m"
            else
#line 862 "dead_proc_elim.m"
              {
#line 863 "dead_proc_elim.m"
                {
#line 863 "dead_proc_elim.m"
                  hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Eliminated opt_imported predicate ", transform_hlds__dead_proc_elim__PredId_6, transform_hlds__dead_proc_elim__ModuleInfo_9);
                }
#line 862 "dead_proc_elim.m"
              }
#line 870 "dead_proc_elim.m"
            {
#line 870 "dead_proc_elim.m"
              MR_Word base;
#line 870 "dead_proc_elim.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 870 "dead_proc_elim.m"
              *transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_37 = base;
#line 870 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Needed_8));
#line 870 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ModuleInfo_9));
#line 870 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__PredTable_61));
#line 870 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 1));
#line 870 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__dead_proc_elim__Specs0_12));
#line 870 "dead_proc_elim.m"
            }
#line 841 "dead_proc_elim.m"
          }
#line 872 "dead_proc_elim.m"
        else
#line 870 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_37 = transform_hlds__dead_proc_elim__STATE_VARIABLE_ProcElimInfo_0_36;
#line 872 "dead_proc_elim.m"
      }
#line 779 "dead_proc_elim.m"
  }
#line 776 "dead_proc_elim.m"
}

#line 743 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_5_p_0_1(
#line 743 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 743 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 743 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 743 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 743 "dead_proc_elim.m"
{
#line 743 "dead_proc_elim.m"
  {
#line 743 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 743 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_ProcElimInfo_37;

#line 743 "dead_proc_elim.m"
    {
#line 743 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_ProcElimInfo_37);
    }
#line 743 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_ProcElimInfo_37));
#line 743 "dead_proc_elim.m"
  }
#line 743 "dead_proc_elim.m"
}

#line 734 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_5_p_0(
#line 734 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ElimOptImported_6,
#line 734 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_22,
#line 734 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_23,
#line 734 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_24,
#line 734 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__Specs_9)
#line 734 "dead_proc_elim.m"
{
#line 737 "dead_proc_elim.m"
  {
#line 737 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 737 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredIds_10;
#line 737 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredTable0_11;
#line 737 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ProcElimInfo0_13;
#line 737 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ProcElimInfo_14;
#line 737 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredTable_15;
#line 737 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Changed_16;
#line 737 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfos0_17;
#line 737 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfos_18;
#line 737 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ConstStructDb0_19;
#line 737 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ConstNumStructs0_20;
#line 737 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ConstStructDb_21;
#line 737 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_25_25;
#line 737 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_27_27;
#line 737 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_28_28;
#line 737 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_29_29;
#line 737 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_30_30;
#line 737 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_31_31;
#line 737 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_32_32;
#line 743 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv1_ProcElimInfo_14;

#line 738 "dead_proc_elim.m"
    {
#line 738 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_valid_predids_3_p_0(&transform_hlds__dead_proc_elim__PredIds_10, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_23, &transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_25_25);
    }
#line 739 "dead_proc_elim.m"
    {
#line 739 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_25_25, &transform_hlds__dead_proc_elim__PredTable0_11);
    }
#line 741 "dead_proc_elim.m"
    {
#line 741 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__ProcElimInfo0_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 741 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo0_13, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_22));
#line 741 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo0_13, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_25_25));
#line 741 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo0_13, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__PredTable0_11));
#line 741 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo0_13, 3) = ((MR_Box) ((MR_Integer) 0));
#line 741 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo0_13, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 741 "dead_proc_elim.m"
    }
#line 743 "dead_proc_elim.m"
    {
#line 743 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 743 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_27_27, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_6[1]));
#line 743 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_27_27, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__dead_proc_eliminate_5_p_0_1));
#line 743 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 743 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_27_27, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__ElimOptImported_6));
#line 743 "dead_proc_elim.m"
    }
#line 743 "dead_proc_elim.m"
    {
#line 743 "dead_proc_elim.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_proc_elim_info_0, transform_hlds__dead_proc_elim__V_27_27, transform_hlds__dead_proc_elim__PredIds_10, ((MR_Box) (transform_hlds__dead_proc_elim__ProcElimInfo0_13)), &transform_hlds__dead_proc_elim__conv1_ProcElimInfo_14);
    }
#line 743 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__ProcElimInfo_14 = ((MR_Word) transform_hlds__dead_proc_elim__conv1_ProcElimInfo_14);
#line 745 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo_14, (MR_Integer) 0)));
#line 745 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo_14, (MR_Integer) 1)));
#line 745 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__PredTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo_14, (MR_Integer) 2)));
#line 745 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__Changed_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo_14, (MR_Integer) 3)));
#line 745 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__Specs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ProcElimInfo_14, (MR_Integer) 4)));
#line 747 "dead_proc_elim.m"
    {
#line 747 "dead_proc_elim.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__dead_proc_elim__PredTable_15, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_29_29, &transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_30_30);
    }
#line 749 "dead_proc_elim.m"
    {
#line 749 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_type_ctor_gen_infos_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_30_30, &transform_hlds__dead_proc_elim__TypeCtorGenInfos0_17);
    }
#line 750 "dead_proc_elim.m"
    {
#line 750 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_eliminate_type_ctor_infos_3_p_0(transform_hlds__dead_proc_elim__TypeCtorGenInfos0_17, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_28_28, &transform_hlds__dead_proc_elim__TypeCtorGenInfos_18);
    }
#line 752 "dead_proc_elim.m"
    {
#line 752 "dead_proc_elim.m"
      hlds__hlds_module__module_info_set_type_ctor_gen_infos_3_p_0(transform_hlds__dead_proc_elim__TypeCtorGenInfos_18, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_30_30, &transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_31_31);
    }
#line 759 "dead_proc_elim.m"
    {
#line 759 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_const_struct_db_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_31_31, &transform_hlds__dead_proc_elim__ConstStructDb0_19);
    }
#line 760 "dead_proc_elim.m"
    {
#line 760 "dead_proc_elim.m"
      hlds__const_struct__const_struct_db_get_structs_2_p_0(transform_hlds__dead_proc_elim__ConstStructDb0_19, &transform_hlds__dead_proc_elim__ConstNumStructs0_20);
    }
#line 761 "dead_proc_elim.m"
    {
#line 761 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_eliminate_const_structs_4_p_0(transform_hlds__dead_proc_elim__ConstNumStructs0_20, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_28_28, transform_hlds__dead_proc_elim__ConstStructDb0_19, &transform_hlds__dead_proc_elim__ConstStructDb_21);
    }
#line 763 "dead_proc_elim.m"
    {
#line 763 "dead_proc_elim.m"
      hlds__hlds_module__module_info_set_const_struct_db_3_p_0(transform_hlds__dead_proc_elim__ConstStructDb_21, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_31_31, &transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_32_32);
    }
#line 770 "dead_proc_elim.m"
    if ((transform_hlds__dead_proc_elim__Changed_16 == (MR_Integer) 0))
#line 771 "dead_proc_elim.m"
      *transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_24 = transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_32_32;
#line 770 "dead_proc_elim.m"
    else
#line 769 "dead_proc_elim.m"
      {
#line 769 "dead_proc_elim.m"
        hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_32_32, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_24);
#line 769 "dead_proc_elim.m"
        return;
      }
#line 737 "dead_proc_elim.m"
  }
#line 734 "dead_proc_elim.m"
}

#line 533 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_p_0(
#line 533 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Goal_7,
#line 533 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__CurrProc_8,
#line 533 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96,
#line 533 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97,
#line 533 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98,
#line 533 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99)
#line 533 "dead_proc_elim.m"
{
#line 537 "dead_proc_elim.m"
  while (MR_TRUE)
#line 537 "dead_proc_elim.m"
    {
#line 537 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 537 "dead_proc_elim.m"
      {
#line 537 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 537 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Goal_7, (MR_Integer) 0)));
#line 538 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Goal_7, (MR_Integer) 1)));

#line 544 "dead_proc_elim.m"
        if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__GoalExpr_11)) == (MR_mktag((MR_Integer) 0))))
#line 548 "dead_proc_elim.m"
          {
#line 548 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__SubGoal_18 = (MR_Word) MR_body(((MR_Word) transform_hlds__dead_proc_elim__GoalExpr_11), (MR_Integer) 0);

#line 549 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 549 "dead_proc_elim.m"
            {
#line 549 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__Goal__tmp_copy_7 = transform_hlds__dead_proc_elim__SubGoal_18;

#line 549 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__Goal_7 = transform_hlds__dead_proc_elim__Goal__tmp_copy_7;
#line 549 "dead_proc_elim.m"
            }
#line 549 "dead_proc_elim.m"
            continue;
#line 548 "dead_proc_elim.m"
          }
#line 544 "dead_proc_elim.m"
        else
#line 544 "dead_proc_elim.m"
          if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__GoalExpr_11)) == (MR_mktag((MR_Integer) 2))))
#line 571 "dead_proc_elim.m"
            {
#line 571 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_238_238;
#line 571 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__PredId_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 0)));
#line 571 "dead_proc_elim.m"
              MR_Integer transform_hlds__dead_proc_elim__ProcId_32 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 1)));
#line 571 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__Entity_37;
#line 571 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 2)));
#line 571 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 3)));
#line 571 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 4)));
#line 571 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 5)));
#line 574 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__V_249_249;
#line 574 "dead_proc_elim.m"
              MR_Integer transform_hlds__dead_proc_elim__V_250_250;

#line 572 "dead_proc_elim.m"
              {
#line 572 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__Entity_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 572 "dead_proc_elim.m"
                MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_37, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_31));
#line 572 "dead_proc_elim.m"
                MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_37, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_32));
#line 572 "dead_proc_elim.m"
              }
#line 7293 "transform_hlds.dead_proc_elim.c"
              transform_hlds__dead_proc_elim__TypeCtorInfo_238_238 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 573 "dead_proc_elim.m"
              {
#line 573 "dead_proc_elim.m"
                mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_238_238, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_37)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97);
              }
#line 574 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__CurrProc_8, (MR_Integer) 0)));
#line 574 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__V_250_250 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__CurrProc_8, (MR_Integer) 1)));
#line 574 "dead_proc_elim.m"
              {
#line 574 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__dead_proc_elim__PredId_31, transform_hlds__dead_proc_elim__V_249_249);
              }
#line 574 "dead_proc_elim.m"
              if (transform_hlds__dead_proc_elim__succeeded)
#line 574 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__ProcId_32 == transform_hlds__dead_proc_elim__V_250_250);
#line 586 "dead_proc_elim.m"
              if (transform_hlds__dead_proc_elim__succeeded)
#line 581 "dead_proc_elim.m"
                {
#line 585 "dead_proc_elim.m"
                  {
#line 585 "dead_proc_elim.m"
                    mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_238_238, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_37)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
#line 585 "dead_proc_elim.m"
                    return;
                  }
#line 581 "dead_proc_elim.m"
                }
#line 586 "dead_proc_elim.m"
              else
#line 609 "dead_proc_elim.m"
                {
#line 609 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__OldNotation_40;
#line 586 "dead_proc_elim.m"
                  MR_Box transform_hlds__dead_proc_elim__conv0_OldNotation_40;

#line 586 "dead_proc_elim.m"
                  {
#line 586 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__succeeded = mercury__map__search_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_238_238, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_37)), &transform_hlds__dead_proc_elim__conv0_OldNotation_40);
                  }
#line 586 "dead_proc_elim.m"
                  if (transform_hlds__dead_proc_elim__succeeded)
#line 586 "dead_proc_elim.m"
                    {
#line 586 "dead_proc_elim.m"
                      transform_hlds__dead_proc_elim__OldNotation_40 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_OldNotation_40);
#line 586 "dead_proc_elim.m"
                      transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 586 "dead_proc_elim.m"
                    }
#line 609 "dead_proc_elim.m"
                  if (transform_hlds__dead_proc_elim__succeeded)
#line 607 "dead_proc_elim.m"
                    {
#line 607 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__NewNotation_209;

#line 597 "dead_proc_elim.m"
                      if ((transform_hlds__dead_proc_elim__OldNotation_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 589 "dead_proc_elim.m"
                        transform_hlds__dead_proc_elim__NewNotation_209 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 597 "dead_proc_elim.m"
                      else
#line 598 "dead_proc_elim.m"
                        {
#line 598 "dead_proc_elim.m"
                          MR_Integer transform_hlds__dead_proc_elim__Count_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__OldNotation_40, (MR_Integer) 0)));
#line 598 "dead_proc_elim.m"
                          MR_Integer transform_hlds__dead_proc_elim__V_159_159 = (transform_hlds__dead_proc_elim__Count_41 + (MR_Integer) 1);

#line 599 "dead_proc_elim.m"
                          {
#line 599 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__NewNotation_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 599 "dead_proc_elim.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__NewNotation_209, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__V_159_159));
#line 599 "dead_proc_elim.m"
                          }
#line 598 "dead_proc_elim.m"
                        }
#line 608 "dead_proc_elim.m"
                      {
#line 608 "dead_proc_elim.m"
                        mercury__map__det_update_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_238_238, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_37)), ((MR_Box) (transform_hlds__dead_proc_elim__NewNotation_209)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
#line 608 "dead_proc_elim.m"
                        return;
                      }
#line 607 "dead_proc_elim.m"
                    }
#line 609 "dead_proc_elim.m"
                  else
#line 616 "dead_proc_elim.m"
                    {
#line 618 "dead_proc_elim.m"
                      {
#line 618 "dead_proc_elim.m"
                        mercury__map__det_insert_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_238_238, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_37)), ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_8[0]))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
#line 618 "dead_proc_elim.m"
                        return;
                      }
#line 616 "dead_proc_elim.m"
                    }
#line 609 "dead_proc_elim.m"
                }
#line 571 "dead_proc_elim.m"
            }
#line 544 "dead_proc_elim.m"
          else
#line 544 "dead_proc_elim.m"
            if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__GoalExpr_11)) == (MR_mktag((MR_Integer) 1))))
#line 633 "dead_proc_elim.m"
              {
#line 633 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__Unification_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 3)));
#line 633 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim___LHS_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 0)));
#line 633 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim___RHS_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 1)));
#line 633 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim___UniModes_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 2)));
#line 633 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim___UnifyContext_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 4)));

#line 691 "dead_proc_elim.m"
                if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__Unification_50)) == (MR_mktag((MR_Integer) 2))))
#line 693 "dead_proc_elim.m"
                  {
#line 693 "dead_proc_elim.m"
                    *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 693 "dead_proc_elim.m"
                    *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 693 "dead_proc_elim.m"
                  }
#line 691 "dead_proc_elim.m"
                else
#line 691 "dead_proc_elim.m"
                  if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__Unification_50)) == (MR_mktag((MR_Integer) 0))))
#line 635 "dead_proc_elim.m"
                    {
#line 635 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__ConsId_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Unification_50, (MR_Integer) 1)));
#line 635 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Unification_50, (MR_Integer) 0)));
#line 635 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Unification_50, (MR_Integer) 2)));
#line 635 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Unification_50, (MR_Integer) 3)));
#line 635 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Unification_50, (MR_Integer) 4)));
#line 635 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Unification_50, (MR_Integer) 5)));
#line 635 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Unification_50, (MR_Integer) 6)));

#line 667 "dead_proc_elim.m"
                      if ((transform_hlds__dead_proc_elim__ConsId_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 685 "dead_proc_elim.m"
                        {
#line 685 "dead_proc_elim.m"
                          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 685 "dead_proc_elim.m"
                          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 685 "dead_proc_elim.m"
                        }
#line 667 "dead_proc_elim.m"
                      else
#line 667 "dead_proc_elim.m"
                        if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__ConsId_53)) == (MR_mktag((MR_Integer) 2))))
#line 664 "dead_proc_elim.m"
                          {
#line 664 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_245_254;
#line 664 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__V_109_109;
#line 664 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__PredId_217;
#line 664 "dead_proc_elim.m"
                            MR_Integer transform_hlds__dead_proc_elim__ProcId_218;
#line 664 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__ShroudedPredProcId_219 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 0)));
#line 664 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__Entity_253;

#line 655 "dead_proc_elim.m"
                            {
#line 655 "dead_proc_elim.m"
                              transform_hlds__dead_proc_elim__V_109_109 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(transform_hlds__dead_proc_elim__ShroudedPredProcId_219);
                            }
#line 654 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__PredId_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_109_109, (MR_Integer) 0)));
#line 654 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__ProcId_218 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_109_109, (MR_Integer) 1)));
#line 656 "dead_proc_elim.m"
                            {
#line 656 "dead_proc_elim.m"
                              transform_hlds__dead_proc_elim__Entity_253 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 656 "dead_proc_elim.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__Entity_253, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_217));
#line 656 "dead_proc_elim.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__Entity_253, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_218));
#line 656 "dead_proc_elim.m"
                            }
#line 7502 "transform_hlds.dead_proc_elim.c"
                            transform_hlds__dead_proc_elim__TypeCtorInfo_245_254 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 665 "dead_proc_elim.m"
                            {
#line 665 "dead_proc_elim.m"
                              mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_245_254, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_253)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97);
                            }
#line 666 "dead_proc_elim.m"
                            {
#line 666 "dead_proc_elim.m"
                              mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_245_254, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_253)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
#line 666 "dead_proc_elim.m"
                              return;
                            }
#line 664 "dead_proc_elim.m"
                          }
#line 667 "dead_proc_elim.m"
                        else
#line 667 "dead_proc_elim.m"
                          if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__ConsId_53)) == (MR_mktag((MR_Integer) 1))))
#line 684 "dead_proc_elim.m"
                            {
#line 684 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 684 "dead_proc_elim.m"
                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 684 "dead_proc_elim.m"
                            }
#line 667 "dead_proc_elim.m"
                          else
#line 667 "dead_proc_elim.m"
                            if (((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__ConsId_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 683 "dead_proc_elim.m"
                              {
#line 683 "dead_proc_elim.m"
                                *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 683 "dead_proc_elim.m"
                                *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 683 "dead_proc_elim.m"
                              }
#line 667 "dead_proc_elim.m"
                            else
#line 667 "dead_proc_elim.m"
                              if (((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__ConsId_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 680 "dead_proc_elim.m"
                                {
#line 680 "dead_proc_elim.m"
                                  *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 680 "dead_proc_elim.m"
                                  *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 680 "dead_proc_elim.m"
                                }
#line 667 "dead_proc_elim.m"
                              else
#line 667 "dead_proc_elim.m"
                                if (((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__ConsId_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 664 "dead_proc_elim.m"
                                  {
#line 664 "dead_proc_elim.m"
                                    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_245_245;
#line 664 "dead_proc_elim.m"
                                    MR_Word transform_hlds__dead_proc_elim__ShroudedPredProcId_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 1)));
#line 664 "dead_proc_elim.m"
                                    MR_Word transform_hlds__dead_proc_elim__V_120_120;
#line 664 "dead_proc_elim.m"
                                    MR_Word transform_hlds__dead_proc_elim__PredId_215;
#line 664 "dead_proc_elim.m"
                                    MR_Integer transform_hlds__dead_proc_elim__ProcId_216;
#line 664 "dead_proc_elim.m"
                                    MR_Word transform_hlds__dead_proc_elim__Entity_224;

#line 640 "dead_proc_elim.m"
                                    {
#line 640 "dead_proc_elim.m"
                                      transform_hlds__dead_proc_elim__V_120_120 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(transform_hlds__dead_proc_elim__ShroudedPredProcId_59);
                                    }
#line 639 "dead_proc_elim.m"
                                    transform_hlds__dead_proc_elim__PredId_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_120_120, (MR_Integer) 0)));
#line 639 "dead_proc_elim.m"
                                    transform_hlds__dead_proc_elim__ProcId_216 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_120_120, (MR_Integer) 1)));
#line 641 "dead_proc_elim.m"
                                    {
#line 641 "dead_proc_elim.m"
                                      transform_hlds__dead_proc_elim__Entity_224 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 641 "dead_proc_elim.m"
                                      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_224, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_215));
#line 641 "dead_proc_elim.m"
                                      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_224, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_216));
#line 641 "dead_proc_elim.m"
                                    }
#line 7592 "transform_hlds.dead_proc_elim.c"
                                    transform_hlds__dead_proc_elim__TypeCtorInfo_245_245 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 665 "dead_proc_elim.m"
                                    {
#line 665 "dead_proc_elim.m"
                                      mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_245_245, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_224)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97);
                                    }
#line 666 "dead_proc_elim.m"
                                    {
#line 666 "dead_proc_elim.m"
                                      mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_245_245, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_224)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
#line 666 "dead_proc_elim.m"
                                      return;
                                    }
#line 664 "dead_proc_elim.m"
                                  }
#line 667 "dead_proc_elim.m"
                                else
#line 667 "dead_proc_elim.m"
                                  if (((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__ConsId_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 676 "dead_proc_elim.m"
                                    {
#line 676 "dead_proc_elim.m"
                                      *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 676 "dead_proc_elim.m"
                                      *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 676 "dead_proc_elim.m"
                                    }
#line 667 "dead_proc_elim.m"
                                  else
#line 667 "dead_proc_elim.m"
                                    if (((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__ConsId_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 686 "dead_proc_elim.m"
                                      {
#line 686 "dead_proc_elim.m"
                                        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 686 "dead_proc_elim.m"
                                        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 686 "dead_proc_elim.m"
                                      }
#line 667 "dead_proc_elim.m"
                                    else
#line 667 "dead_proc_elim.m"
                                      if (((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__ConsId_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 679 "dead_proc_elim.m"
                                        {
#line 679 "dead_proc_elim.m"
                                          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 679 "dead_proc_elim.m"
                                          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 679 "dead_proc_elim.m"
                                        }
#line 667 "dead_proc_elim.m"
                                      else
#line 667 "dead_proc_elim.m"
                                        if (((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__ConsId_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 671 "dead_proc_elim.m"
                                          {
#line 671 "dead_proc_elim.m"
                                            MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_247_247;
#line 671 "dead_proc_elim.m"
                                            MR_Integer transform_hlds__dead_proc_elim__ConstNum_64 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 1)));
#line 671 "dead_proc_elim.m"
                                            MR_Word transform_hlds__dead_proc_elim__Entity_225;
#line 670 "dead_proc_elim.m"
                                            MR_Word transform_hlds__dead_proc_elim__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 2)));

#line 672 "dead_proc_elim.m"
                                            {
#line 672 "dead_proc_elim.m"
                                              transform_hlds__dead_proc_elim__Entity_225 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 672 "dead_proc_elim.m"
                                              MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Entity_225, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ConstNum_64));
#line 672 "dead_proc_elim.m"
                                            }
#line 7667 "transform_hlds.dead_proc_elim.c"
                                            transform_hlds__dead_proc_elim__TypeCtorInfo_247_247 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 673 "dead_proc_elim.m"
                                            {
#line 673 "dead_proc_elim.m"
                                              mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_247_247, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_225)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97);
                                            }
#line 674 "dead_proc_elim.m"
                                            {
#line 674 "dead_proc_elim.m"
                                              mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_247_247, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_225)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
#line 674 "dead_proc_elim.m"
                                              return;
                                            }
#line 671 "dead_proc_elim.m"
                                          }
#line 667 "dead_proc_elim.m"
                                        else
#line 667 "dead_proc_elim.m"
                                          if (((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__ConsId_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 682 "dead_proc_elim.m"
                                            {
#line 682 "dead_proc_elim.m"
                                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 682 "dead_proc_elim.m"
                                              *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 682 "dead_proc_elim.m"
                                            }
#line 667 "dead_proc_elim.m"
                                          else
#line 667 "dead_proc_elim.m"
                                            if (((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__ConsId_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 678 "dead_proc_elim.m"
                                              {
#line 678 "dead_proc_elim.m"
                                                *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 678 "dead_proc_elim.m"
                                                *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 678 "dead_proc_elim.m"
                                              }
#line 667 "dead_proc_elim.m"
                                            else
#line 667 "dead_proc_elim.m"
                                              if (((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__ConsId_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 681 "dead_proc_elim.m"
                                                {
#line 681 "dead_proc_elim.m"
                                                  *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 681 "dead_proc_elim.m"
                                                  *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 681 "dead_proc_elim.m"
                                                }
#line 667 "dead_proc_elim.m"
                                              else
#line 667 "dead_proc_elim.m"
                                                if (((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__ConsId_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 687 "dead_proc_elim.m"
                                                  {
#line 687 "dead_proc_elim.m"
                                                    *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 687 "dead_proc_elim.m"
                                                    *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 687 "dead_proc_elim.m"
                                                  }
#line 667 "dead_proc_elim.m"
                                                else
#line 667 "dead_proc_elim.m"
                                                  if (((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__ConsId_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 677 "dead_proc_elim.m"
                                                    {
#line 677 "dead_proc_elim.m"
                                                      *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 677 "dead_proc_elim.m"
                                                      *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 677 "dead_proc_elim.m"
                                                    }
#line 667 "dead_proc_elim.m"
                                                  else
#line 667 "dead_proc_elim.m"
                                                    if (((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__ConsId_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 664 "dead_proc_elim.m"
                                                      {
#line 664 "dead_proc_elim.m"
                                                        MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_245_258;
#line 664 "dead_proc_elim.m"
                                                        MR_Word transform_hlds__dead_proc_elim__Module_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 1)));
#line 664 "dead_proc_elim.m"
                                                        MR_String transform_hlds__dead_proc_elim__TypeName_62 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 2)));
#line 664 "dead_proc_elim.m"
                                                        MR_Integer transform_hlds__dead_proc_elim__Arity_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 3)));
#line 664 "dead_proc_elim.m"
                                                        MR_Word transform_hlds__dead_proc_elim__Entity_257;

#line 651 "dead_proc_elim.m"
                                                        {
#line 651 "dead_proc_elim.m"
                                                          transform_hlds__dead_proc_elim__Entity_257 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 651 "dead_proc_elim.m"
                                                          MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_257, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Module_61));
#line 651 "dead_proc_elim.m"
                                                          MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_257, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__TypeName_62));
#line 651 "dead_proc_elim.m"
                                                          MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_257, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__Arity_63));
#line 651 "dead_proc_elim.m"
                                                        }
#line 7772 "transform_hlds.dead_proc_elim.c"
                                                        transform_hlds__dead_proc_elim__TypeCtorInfo_245_258 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 665 "dead_proc_elim.m"
                                                        {
#line 665 "dead_proc_elim.m"
                                                          mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_245_258, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_257)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97);
                                                        }
#line 666 "dead_proc_elim.m"
                                                        {
#line 666 "dead_proc_elim.m"
                                                          mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_245_258, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_257)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
#line 666 "dead_proc_elim.m"
                                                          return;
                                                        }
#line 664 "dead_proc_elim.m"
                                                      }
#line 667 "dead_proc_elim.m"
                                                    else
#line 667 "dead_proc_elim.m"
                                                      if (((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__ConsId_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 671 "dead_proc_elim.m"
                                                        {
#line 671 "dead_proc_elim.m"
                                                          MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_247_263;
#line 671 "dead_proc_elim.m"
                                                          MR_Integer transform_hlds__dead_proc_elim__ConstNum_260 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 1)));
#line 671 "dead_proc_elim.m"
                                                          MR_Word transform_hlds__dead_proc_elim__Entity_262;

#line 672 "dead_proc_elim.m"
                                                          {
#line 672 "dead_proc_elim.m"
                                                            transform_hlds__dead_proc_elim__Entity_262 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 672 "dead_proc_elim.m"
                                                            MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Entity_262, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ConstNum_260));
#line 672 "dead_proc_elim.m"
                                                          }
#line 7809 "transform_hlds.dead_proc_elim.c"
                                                          transform_hlds__dead_proc_elim__TypeCtorInfo_247_263 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 673 "dead_proc_elim.m"
                                                          {
#line 673 "dead_proc_elim.m"
                                                            mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_247_263, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_262)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97);
                                                          }
#line 674 "dead_proc_elim.m"
                                                          {
#line 674 "dead_proc_elim.m"
                                                            mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_247_263, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_262)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
#line 674 "dead_proc_elim.m"
                                                            return;
                                                          }
#line 671 "dead_proc_elim.m"
                                                        }
#line 667 "dead_proc_elim.m"
                                                      else
#line 671 "dead_proc_elim.m"
                                                        {
#line 671 "dead_proc_elim.m"
                                                          MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_247_268;
#line 671 "dead_proc_elim.m"
                                                          MR_Integer transform_hlds__dead_proc_elim__ConstNum_265 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_53, (MR_Integer) 1)));
#line 671 "dead_proc_elim.m"
                                                          MR_Word transform_hlds__dead_proc_elim__Entity_267;

#line 672 "dead_proc_elim.m"
                                                          {
#line 672 "dead_proc_elim.m"
                                                            transform_hlds__dead_proc_elim__Entity_267 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 672 "dead_proc_elim.m"
                                                            MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Entity_267, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ConstNum_265));
#line 672 "dead_proc_elim.m"
                                                          }
#line 7844 "transform_hlds.dead_proc_elim.c"
                                                          transform_hlds__dead_proc_elim__TypeCtorInfo_247_268 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 673 "dead_proc_elim.m"
                                                          {
#line 673 "dead_proc_elim.m"
                                                            mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_247_268, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_267)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97);
                                                          }
#line 674 "dead_proc_elim.m"
                                                          {
#line 674 "dead_proc_elim.m"
                                                            mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_247_268, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_267)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
#line 674 "dead_proc_elim.m"
                                                            return;
                                                          }
#line 671 "dead_proc_elim.m"
                                                        }
#line 635 "dead_proc_elim.m"
                    }
#line 691 "dead_proc_elim.m"
                  else
#line 691 "dead_proc_elim.m"
                    if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__Unification_50)) == (MR_mktag((MR_Integer) 1))))
#line 692 "dead_proc_elim.m"
                      {
#line 692 "dead_proc_elim.m"
                        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 692 "dead_proc_elim.m"
                        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 692 "dead_proc_elim.m"
                      }
#line 691 "dead_proc_elim.m"
                    else
#line 691 "dead_proc_elim.m"
                      if (((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__Unification_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Unification_50, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 699 "dead_proc_elim.m"
                        {
#line 701 "dead_proc_elim.m"
                          {
#line 701 "dead_proc_elim.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.dead_proc_elim", (MR_String) "predicate \140transform_hlds.dead_proc_elim.dead_proc_examine_goal\'/6", (MR_String) "complicated_unify");
#line 701 "dead_proc_elim.m"
                            return;
                          }
#line 699 "dead_proc_elim.m"
                        }
#line 691 "dead_proc_elim.m"
                      else
#line 694 "dead_proc_elim.m"
                        {
#line 694 "dead_proc_elim.m"
                          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 694 "dead_proc_elim.m"
                          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 694 "dead_proc_elim.m"
                        }
#line 633 "dead_proc_elim.m"
              }
#line 544 "dead_proc_elim.m"
            else
#line 544 "dead_proc_elim.m"
              if (((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__GoalExpr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 621 "dead_proc_elim.m"
                {
#line 621 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_243_243;
#line 621 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__PredId_212 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 2)));
#line 621 "dead_proc_elim.m"
                  MR_Integer transform_hlds__dead_proc_elim__ProcId_213 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 3)));
#line 621 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__Entity_214;
#line 621 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 1)));
#line 621 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 4)));
#line 621 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 5)));
#line 621 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 6)));
#line 621 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 7)));

#line 622 "dead_proc_elim.m"
                  {
#line 622 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__Entity_214 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 622 "dead_proc_elim.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_214, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_212));
#line 622 "dead_proc_elim.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_214, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_213));
#line 622 "dead_proc_elim.m"
                  }
#line 7936 "transform_hlds.dead_proc_elim.c"
                  transform_hlds__dead_proc_elim__TypeCtorInfo_243_243 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 630 "dead_proc_elim.m"
                  {
#line 630 "dead_proc_elim.m"
                    mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_243_243, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_214)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97);
                  }
#line 631 "dead_proc_elim.m"
                  {
#line 631 "dead_proc_elim.m"
                    mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_243_243, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_214)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
#line 631 "dead_proc_elim.m"
                    return;
                  }
#line 621 "dead_proc_elim.m"
                }
#line 544 "dead_proc_elim.m"
              else
#line 544 "dead_proc_elim.m"
                if (((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__GoalExpr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 542 "dead_proc_elim.m"
                  {
#line 542 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim__Goals_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 2)));
#line 540 "dead_proc_elim.m"
                    MR_Word transform_hlds__dead_proc_elim___ConjType_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 1)));

#line 543 "dead_proc_elim.m"
                    {
#line 543 "dead_proc_elim.m"
                      transform_hlds__dead_proc_elim__dead_proc_examine_goals_6_p_0(transform_hlds__dead_proc_elim__Goals_14, transform_hlds__dead_proc_elim__CurrProc_8, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
#line 543 "dead_proc_elim.m"
                      return;
                    }
#line 542 "dead_proc_elim.m"
                  }
#line 544 "dead_proc_elim.m"
                else
#line 544 "dead_proc_elim.m"
                  if (((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__GoalExpr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 542 "dead_proc_elim.m"
                    {
#line 542 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__Goals_251 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 1)));

#line 543 "dead_proc_elim.m"
                      {
#line 543 "dead_proc_elim.m"
                        transform_hlds__dead_proc_elim__dead_proc_examine_goals_6_p_0(transform_hlds__dead_proc_elim__Goals_251, transform_hlds__dead_proc_elim__CurrProc_8, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
#line 543 "dead_proc_elim.m"
                        return;
                      }
#line 542 "dead_proc_elim.m"
                    }
#line 544 "dead_proc_elim.m"
                  else
#line 544 "dead_proc_elim.m"
                    if (((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__GoalExpr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 569 "dead_proc_elim.m"
                      {
#line 569 "dead_proc_elim.m"
                        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 569 "dead_proc_elim.m"
                        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 569 "dead_proc_elim.m"
                      }
#line 544 "dead_proc_elim.m"
                    else
#line 544 "dead_proc_elim.m"
                      if (((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__GoalExpr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 564 "dead_proc_elim.m"
                        {
#line 564 "dead_proc_elim.m"
                          MR_Word transform_hlds__dead_proc_elim__Cond_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 2)));
#line 564 "dead_proc_elim.m"
                          MR_Word transform_hlds__dead_proc_elim__Then_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 3)));
#line 564 "dead_proc_elim.m"
                          MR_Word transform_hlds__dead_proc_elim__Else_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 4)));
#line 564 "dead_proc_elim.m"
                          MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_194_194;
#line 564 "dead_proc_elim.m"
                          MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_195_195;
#line 564 "dead_proc_elim.m"
                          MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_196_196;
#line 564 "dead_proc_elim.m"
                          MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_197_197;
#line 564 "dead_proc_elim.m"
                          MR_Word transform_hlds__dead_proc_elim__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 1)));

#line 565 "dead_proc_elim.m"
                          {
#line 565 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_p_0(transform_hlds__dead_proc_elim__Cond_23, transform_hlds__dead_proc_elim__CurrProc_8, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_194_194, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_195_195);
                          }
#line 566 "dead_proc_elim.m"
                          {
#line 566 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_p_0(transform_hlds__dead_proc_elim__Then_24, transform_hlds__dead_proc_elim__CurrProc_8, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_194_194, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_196_196, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_195_195, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_197_197);
                          }
#line 567 "dead_proc_elim.m"
                          /* direct tailcall eliminated */
#line 567 "dead_proc_elim.m"
                          {
#line 567 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__Goal__tmp_copy_7 = transform_hlds__dead_proc_elim__Else_25;
#line 567 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_96 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_196_196;
#line 567 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_98 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_197_197;

#line 567 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_98;
#line 567 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_96;
#line 567 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__Goal_7 = transform_hlds__dead_proc_elim__Goal__tmp_copy_7;
#line 567 "dead_proc_elim.m"
                          }
#line 567 "dead_proc_elim.m"
                          continue;
#line 564 "dead_proc_elim.m"
                        }
#line 544 "dead_proc_elim.m"
                      else
#line 544 "dead_proc_elim.m"
                        if (((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__GoalExpr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 551 "dead_proc_elim.m"
                          {
#line 551 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__Reason_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 1)));
#line 551 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__SubGoal_208 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 2)));
#line 553 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__FGT_21;
#line 553 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__V_20_20;

#line 553 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__succeeded = ((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__Reason_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Reason_19, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 553 "dead_proc_elim.m"
                            if (transform_hlds__dead_proc_elim__succeeded)
#line 553 "dead_proc_elim.m"
                              {
#line 553 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Reason_19, (MR_Integer) 1)));
#line 553 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__FGT_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Reason_19, (MR_Integer) 2)));
#line 555 "dead_proc_elim.m"
                                if ((transform_hlds__dead_proc_elim__FGT_21 == (MR_Integer) 1))
#line 554 "dead_proc_elim.m"
                                  transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 555 "dead_proc_elim.m"
                                else
#line 555 "dead_proc_elim.m"
                                  if ((transform_hlds__dead_proc_elim__FGT_21 == (MR_Integer) 2))
#line 555 "dead_proc_elim.m"
                                    transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 555 "dead_proc_elim.m"
                                  else
#line 555 "dead_proc_elim.m"
                                    transform_hlds__dead_proc_elim__succeeded = MR_FALSE;
#line 553 "dead_proc_elim.m"
                              }
#line 560 "dead_proc_elim.m"
                            if (transform_hlds__dead_proc_elim__succeeded)
#line 559 "dead_proc_elim.m"
                              {
#line 559 "dead_proc_elim.m"
                                *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98;
#line 559 "dead_proc_elim.m"
                                *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96;
#line 559 "dead_proc_elim.m"
                              }
#line 560 "dead_proc_elim.m"
                            else
#line 561 "dead_proc_elim.m"
                              {
#line 561 "dead_proc_elim.m"
                                /* direct tailcall eliminated */
#line 561 "dead_proc_elim.m"
                                {
#line 561 "dead_proc_elim.m"
                                  MR_Word transform_hlds__dead_proc_elim__Goal__tmp_copy_7 = transform_hlds__dead_proc_elim__SubGoal_208;

#line 561 "dead_proc_elim.m"
                                  transform_hlds__dead_proc_elim__Goal_7 = transform_hlds__dead_proc_elim__Goal__tmp_copy_7;
#line 561 "dead_proc_elim.m"
                                }
#line 561 "dead_proc_elim.m"
                                continue;
#line 561 "dead_proc_elim.m"
                              }
#line 551 "dead_proc_elim.m"
                          }
#line 544 "dead_proc_elim.m"
                        else
#line 544 "dead_proc_elim.m"
                          if (((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__GoalExpr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 704 "dead_proc_elim.m"
                            {
#line 706 "dead_proc_elim.m"
                              {
#line 706 "dead_proc_elim.m"
                                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.dead_proc_elim", (MR_String) "predicate \140transform_hlds.dead_proc_elim.dead_proc_examine_goal\'/6", (MR_String) "shorthand");
#line 706 "dead_proc_elim.m"
                                return;
                              }
#line 704 "dead_proc_elim.m"
                            }
#line 544 "dead_proc_elim.m"
                          else
#line 545 "dead_proc_elim.m"
                            {
#line 545 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__Cases_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 3)));
#line 545 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim___Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 1)));
#line 545 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim___CanFail_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__GoalExpr_11, (MR_Integer) 2)));

#line 546 "dead_proc_elim.m"
                              {
#line 546 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__dead_proc_examine_cases_6_p_0(transform_hlds__dead_proc_elim__Cases_17, transform_hlds__dead_proc_elim__CurrProc_8, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_96, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_97, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_98, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_99);
#line 546 "dead_proc_elim.m"
                                return;
                              }
#line 545 "dead_proc_elim.m"
                            }
#line 537 "dead_proc_elim.m"
      }
#line 537 "dead_proc_elim.m"
      break;
#line 537 "dead_proc_elim.m"
    }
#line 533 "dead_proc_elim.m"
}

#line 523 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_cases_6_p_0(
#line 523 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 523 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 523 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3,
#line 523 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4,
#line 523 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5,
#line 523 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6)
#line 523 "dead_proc_elim.m"
{
#line 527 "dead_proc_elim.m"
  while (MR_TRUE)
#line 527 "dead_proc_elim.m"
    {
#line 527 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 527 "dead_proc_elim.m"
      {
#line 527 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 527 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 527 "dead_proc_elim.m"
          {
#line 527 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5;
#line 527 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3;
#line 527 "dead_proc_elim.m"
          }
#line 527 "dead_proc_elim.m"
        else
#line 529 "dead_proc_elim.m"
          {
#line 529 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Goal_16;
#line 529 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Cases_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 529 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 529 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 529 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_27;
#line 528 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_25_25, (MR_Integer) 0)));
#line 528 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_25_25, (MR_Integer) 1)));

#line 528 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__Goal_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_25_25, (MR_Integer) 2)));
#line 530 "dead_proc_elim.m"
            {
#line 530 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_p_0(transform_hlds__dead_proc_elim__Goal_16, transform_hlds__dead_proc_elim__HeadVar__2_2, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_27);
            }
#line 531 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 531 "dead_proc_elim.m"
            {
#line 531 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1 = transform_hlds__dead_proc_elim__Cases_17;
#line 531 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 531 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_27;

#line 531 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_5;
#line 531 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_3;
#line 531 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1;
#line 531 "dead_proc_elim.m"
            }
#line 531 "dead_proc_elim.m"
            continue;
#line 529 "dead_proc_elim.m"
          }
#line 527 "dead_proc_elim.m"
      }
#line 527 "dead_proc_elim.m"
      break;
#line 527 "dead_proc_elim.m"
    }
#line 523 "dead_proc_elim.m"
}

#line 514 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_goals_6_p_0(
#line 514 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 514 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__CurrProc_2,
#line 514 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3,
#line 514 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4,
#line 514 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5,
#line 514 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6)
#line 514 "dead_proc_elim.m"
{
#line 518 "dead_proc_elim.m"
  while (MR_TRUE)
#line 518 "dead_proc_elim.m"
    {
#line 518 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 518 "dead_proc_elim.m"
      {
#line 518 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 518 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 518 "dead_proc_elim.m"
          {
#line 518 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5;
#line 518 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3;
#line 518 "dead_proc_elim.m"
          }
#line 518 "dead_proc_elim.m"
        else
#line 519 "dead_proc_elim.m"
          {
#line 519 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Goal_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 519 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Goals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 519 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_23;
#line 519 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_24_24;

#line 520 "dead_proc_elim.m"
            {
#line 520 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_p_0(transform_hlds__dead_proc_elim__Goal_14, transform_hlds__dead_proc_elim__CurrProc_2, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_23, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_24_24);
            }
#line 521 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 521 "dead_proc_elim.m"
            {
#line 521 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1 = transform_hlds__dead_proc_elim__Goals_15;
#line 521 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_23;
#line 521 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_24_24;

#line 521 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_5;
#line 521 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_3;
#line 521 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1;
#line 521 "dead_proc_elim.m"
            }
#line 521 "dead_proc_elim.m"
            continue;
#line 519 "dead_proc_elim.m"
          }
#line 518 "dead_proc_elim.m"
      }
#line 518 "dead_proc_elim.m"
      break;
#line 518 "dead_proc_elim.m"
    }
#line 514 "dead_proc_elim.m"
}

#line 464 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_proc_6_p_0(
#line 464 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 464 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ModuleInfo_9,
#line 464 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_22,
#line 464 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23,
#line 464 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24,
#line 464 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25)
#line 464 "dead_proc_elim.m"
{
#line 468 "dead_proc_elim.m"
  {
#line 468 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 468 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 468 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__ProcId_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 504 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ProcInfo_16;
#line 470 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_63_63;
#line 470 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_64_64;
#line 470 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredTable_12;
#line 470 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredInfo_13;
#line 470 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ProcIds_14;
#line 470 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ProcTable_15;
#line 471 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv0_PredInfo_13;
#line 475 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv1_ProcInfo_16;

#line 470 "dead_proc_elim.m"
    {
#line 470 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_9, &transform_hlds__dead_proc_elim__PredTable_12);
    }
#line 471 "dead_proc_elim.m"
    {
#line 471 "dead_proc_elim.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, transform_hlds__dead_proc_elim__PredTable_12, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_7)), &transform_hlds__dead_proc_elim__conv0_PredInfo_13);
    }
#line 471 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__PredInfo_13 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_PredInfo_13);
#line 472 "dead_proc_elim.m"
    {
#line 472 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__ProcIds_14 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__dead_proc_elim__PredInfo_13);
    }
#line 8419 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_63_63 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 473 "dead_proc_elim.m"
    {
#line 473 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__succeeded = mercury__list__member_2_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_63_63, ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_8)), transform_hlds__dead_proc_elim__ProcIds_14);
    }
#line 470 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 470 "dead_proc_elim.m"
      {
#line 474 "dead_proc_elim.m"
        {
#line 474 "dead_proc_elim.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__dead_proc_elim__PredInfo_13, &transform_hlds__dead_proc_elim__ProcTable_15);
        }
#line 8435 "transform_hlds.dead_proc_elim.c"
        transform_hlds__dead_proc_elim__TypeCtorInfo_64_64 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 475 "dead_proc_elim.m"
        {
#line 475 "dead_proc_elim.m"
          mercury__map__lookup_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_63_63, transform_hlds__dead_proc_elim__TypeCtorInfo_64_64, transform_hlds__dead_proc_elim__ProcTable_15, ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_8)), &transform_hlds__dead_proc_elim__conv1_ProcInfo_16);
        }
#line 475 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__ProcInfo_16 = ((MR_Word) transform_hlds__dead_proc_elim__conv1_ProcInfo_16);
#line 475 "dead_proc_elim.m"
        transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 470 "dead_proc_elim.m"
      }
#line 504 "dead_proc_elim.m"
    if (transform_hlds__dead_proc_elim__succeeded)
#line 483 "dead_proc_elim.m"
      {
#line 483 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__Goal_18;
#line 483 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__EvalMethod_19;
#line 483 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__HasPerProcTablingPtr_20;
#line 483 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_38_38;

#line 484 "dead_proc_elim.m"
        {
#line 484 "dead_proc_elim.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__dead_proc_elim__ProcInfo_16, &transform_hlds__dead_proc_elim__Goal_18);
        }
#line 485 "dead_proc_elim.m"
        {
#line 485 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_p_0(transform_hlds__dead_proc_elim__Goal_18, transform_hlds__dead_proc_elim__HeadVar__1_1, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_22, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_38_38);
        }
#line 487 "dead_proc_elim.m"
        {
#line 487 "dead_proc_elim.m"
          hlds__hlds_pred__proc_info_get_eval_method_2_p_0(transform_hlds__dead_proc_elim__ProcInfo_16, &transform_hlds__dead_proc_elim__EvalMethod_19);
        }
#line 488 "dead_proc_elim.m"
        {
#line 488 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__HasPerProcTablingPtr_20 = hlds__hlds_pred__eval_method_has_per_proc_tabling_pointer_1_f_0(transform_hlds__dead_proc_elim__EvalMethod_19);
        }
#line 492 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HasPerProcTablingPtr_20 == (MR_Integer) 0))
#line 491 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_38_38;
#line 492 "dead_proc_elim.m"
        else
#line 493 "dead_proc_elim.m"
          {
#line 493 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__TableStructEntity_21;

#line 501 "dead_proc_elim.m"
            {
#line 501 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__TableStructEntity_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__TableStructEntity_21, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_7));
#line 501 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__TableStructEntity_21, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_8));
#line 501 "dead_proc_elim.m"
            }
#line 502 "dead_proc_elim.m"
            {
#line 502 "dead_proc_elim.m"
              mercury__map__set_4_p_0((MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__TableStructEntity_21)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_38_38, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25);
#line 502 "dead_proc_elim.m"
              return;
            }
#line 493 "dead_proc_elim.m"
          }
#line 483 "dead_proc_elim.m"
      }
#line 504 "dead_proc_elim.m"
    else
#line 505 "dead_proc_elim.m"
      {
#line 505 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24;
#line 505 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_22;
#line 505 "dead_proc_elim.m"
      }
#line 468 "dead_proc_elim.m"
  }
#line 464 "dead_proc_elim.m"
}

#line 439 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_const_struct_args_5_p_0(
#line 439 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 439 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 439 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 439 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4,
#line 439 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5)
#line 439 "dead_proc_elim.m"
{
#line 443 "dead_proc_elim.m"
  while (MR_TRUE)
#line 443 "dead_proc_elim.m"
    {
#line 443 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 443 "dead_proc_elim.m"
      {
#line 443 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 443 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 443 "dead_proc_elim.m"
          {
#line 443 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4;
#line 443 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2;
#line 443 "dead_proc_elim.m"
          }
#line 443 "dead_proc_elim.m"
        else
#line 444 "dead_proc_elim.m"
          {
#line 444 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Arg_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 444 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 444 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_30_30;
#line 444 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_32_32;

#line 450 "dead_proc_elim.m"
            if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__Arg_12)) == (MR_mktag((MR_Integer) 0))))
#line 446 "dead_proc_elim.m"
              {
#line 446 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_38_38;
#line 446 "dead_proc_elim.m"
                MR_Integer transform_hlds__dead_proc_elim__ConstNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Arg_12, (MR_Integer) 0)));
#line 446 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__Entity_17;

#line 447 "dead_proc_elim.m"
                {
#line 447 "dead_proc_elim.m"
                  transform_hlds__dead_proc_elim__Entity_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 447 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Entity_17, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ConstNum_16));
#line 447 "dead_proc_elim.m"
                }
#line 8596 "transform_hlds.dead_proc_elim.c"
                transform_hlds__dead_proc_elim__TypeCtorInfo_38_38 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 448 "dead_proc_elim.m"
                {
#line 448 "dead_proc_elim.m"
                  mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_38_38, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_17)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_30_30);
                }
#line 449 "dead_proc_elim.m"
                {
#line 449 "dead_proc_elim.m"
                  mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_38_38, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_17)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_32_32);
                }
#line 446 "dead_proc_elim.m"
              }
#line 450 "dead_proc_elim.m"
            else
#line 451 "dead_proc_elim.m"
              {
#line 451 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__ConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__Arg_12, (MR_Integer) 0)));
#line 451 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__Arg_12, (MR_Integer) 1)));
#line 456 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__Module_20;
#line 456 "dead_proc_elim.m"
                MR_String transform_hlds__dead_proc_elim__TypeName_21;
#line 456 "dead_proc_elim.m"
                MR_Integer transform_hlds__dead_proc_elim__Arity_22;

#line 452 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__succeeded = ((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__ConsId_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_18, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 452 "dead_proc_elim.m"
                if (transform_hlds__dead_proc_elim__succeeded)
#line 452 "dead_proc_elim.m"
                  {
#line 452 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__Module_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_18, (MR_Integer) 1)));
#line 452 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__TypeName_21 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_18, (MR_Integer) 2)));
#line 452 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_18, (MR_Integer) 3)));
#line 453 "dead_proc_elim.m"
                    {
#line 453 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_40_40;
#line 453 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__Entity_35;

#line 453 "dead_proc_elim.m"
                      {
#line 453 "dead_proc_elim.m"
                        transform_hlds__dead_proc_elim__Entity_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 453 "dead_proc_elim.m"
                        MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_35, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Module_20));
#line 453 "dead_proc_elim.m"
                        MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_35, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__TypeName_21));
#line 453 "dead_proc_elim.m"
                        MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_35, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__Arity_22));
#line 453 "dead_proc_elim.m"
                      }
#line 8656 "transform_hlds.dead_proc_elim.c"
                      transform_hlds__dead_proc_elim__TypeCtorInfo_40_40 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 454 "dead_proc_elim.m"
                      {
#line 454 "dead_proc_elim.m"
                        mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_40_40, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_35)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_30_30);
                      }
#line 455 "dead_proc_elim.m"
                      {
#line 455 "dead_proc_elim.m"
                        mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_40_40, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_35)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_32_32);
                      }
#line 453 "dead_proc_elim.m"
                    }
#line 452 "dead_proc_elim.m"
                  }
#line 452 "dead_proc_elim.m"
                else
#line 457 "dead_proc_elim.m"
                  {
#line 457 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_32_32 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4;
#line 457 "dead_proc_elim.m"
                    transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_30_30 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2;
#line 457 "dead_proc_elim.m"
                  }
#line 451 "dead_proc_elim.m"
              }
#line 460 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 460 "dead_proc_elim.m"
            {
#line 460 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1 = transform_hlds__dead_proc_elim__Args_13;
#line 460 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_2 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_30_30;
#line 460 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_32_32;

#line 460 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_4;
#line 460 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_2;
#line 460 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1;
#line 460 "dead_proc_elim.m"
            }
#line 460 "dead_proc_elim.m"
            continue;
#line 444 "dead_proc_elim.m"
          }
#line 443 "dead_proc_elim.m"
      }
#line 443 "dead_proc_elim.m"
      break;
#line 443 "dead_proc_elim.m"
    }
#line 439 "dead_proc_elim.m"
}

#line 408 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_refs_5_p_0(
#line 408 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 408 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 408 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 408 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4,
#line 408 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5)
#line 408 "dead_proc_elim.m"
{
#line 412 "dead_proc_elim.m"
  while (MR_TRUE)
#line 412 "dead_proc_elim.m"
    {
#line 412 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 412 "dead_proc_elim.m"
      {
#line 412 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 412 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 412 "dead_proc_elim.m"
          {
#line 412 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4;
#line 412 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2;
#line 412 "dead_proc_elim.m"
          }
#line 412 "dead_proc_elim.m"
        else
#line 413 "dead_proc_elim.m"
          {
#line 413 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_28_28;
#line 413 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Ref_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 413 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Refs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 413 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Ref_12, (MR_Integer) 0)));
#line 413 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__ProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Ref_12, (MR_Integer) 1)));
#line 413 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Entity_18;
#line 413 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_23;
#line 413 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25_25;

#line 415 "dead_proc_elim.m"
            {
#line 415 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__Entity_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 415 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_18, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_16));
#line 415 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_18, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_17));
#line 415 "dead_proc_elim.m"
            }
#line 8783 "transform_hlds.dead_proc_elim.c"
            transform_hlds__dead_proc_elim__TypeCtorInfo_28_28 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 416 "dead_proc_elim.m"
            {
#line 416 "dead_proc_elim.m"
              mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_28_28, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_18)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_23);
            }
#line 417 "dead_proc_elim.m"
            {
#line 417 "dead_proc_elim.m"
              mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_28_28, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_18)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25_25);
            }
#line 418 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 418 "dead_proc_elim.m"
            {
#line 418 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1 = transform_hlds__dead_proc_elim__Refs_13;
#line 418 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_2 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_23;
#line 418 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25_25;

#line 418 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_4;
#line 418 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_2;
#line 418 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1;
#line 418 "dead_proc_elim.m"
            }
#line 418 "dead_proc_elim.m"
            continue;
#line 413 "dead_proc_elim.m"
          }
#line 412 "dead_proc_elim.m"
      }
#line 412 "dead_proc_elim.m"
      break;
#line 412 "dead_proc_elim.m"
    }
#line 408 "dead_proc_elim.m"
}

#line 392 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim__find_type_ctor_info_5_p_0(
#line 392 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ModuleName_6,
#line 392 "dead_proc_elim.m"
  MR_String transform_hlds__dead_proc_elim__TypeName_7,
#line 392 "dead_proc_elim.m"
  MR_Integer transform_hlds__dead_proc_elim__TypeArity_8,
#line 392 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__4_4,
#line 392 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__Refs_11)
#line 392 "dead_proc_elim.m"
{
#line 397 "dead_proc_elim.m"
  while (MR_TRUE)
#line 397 "dead_proc_elim.m"
    {
#line 397 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 397 "dead_proc_elim.m"
      {
#line 397 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded = ((MR_tag((MR_Word) transform_hlds__dead_proc_elim__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 397 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfo_9;
#line 397 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfos_10;
#line 403 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__Unify_15;
#line 403 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__Compare_16;
#line 399 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__V_19_19;
#line 399 "dead_proc_elim.m"
        MR_String transform_hlds__dead_proc_elim__V_20_20;
#line 399 "dead_proc_elim.m"
        MR_Integer transform_hlds__dead_proc_elim__V_21_21;
#line 399 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim___TypeCtor_12;
#line 399 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim___Status_13;
#line 399 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim___HldsDefn_14;

#line 397 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 397 "dead_proc_elim.m"
          {
#line 397 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__TypeCtorGenInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__4_4, (MR_Integer) 0)));
#line 397 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__TypeCtorGenInfos_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__4_4, (MR_Integer) 1)));
#line 399 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim___TypeCtor_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_9, (MR_Integer) 0)));
#line 399 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_9, (MR_Integer) 1)));
#line 399 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_9, (MR_Integer) 2)));
#line 399 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_9, (MR_Integer) 3)));
#line 399 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim___Status_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_9, (MR_Integer) 4)));
#line 399 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim___HldsDefn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_9, (MR_Integer) 5)));
#line 399 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__Unify_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_9, (MR_Integer) 6)));
#line 399 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__Compare_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_9, (MR_Integer) 7)));
#line 399 "dead_proc_elim.m"
            {
#line 399 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__dead_proc_elim__ModuleName_6, transform_hlds__dead_proc_elim__V_19_19);
            }
#line 399 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 399 "dead_proc_elim.m"
              {
#line 399 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__succeeded = (strcmp(transform_hlds__dead_proc_elim__TypeName_7, transform_hlds__dead_proc_elim__V_20_20) == 0);
#line 399 "dead_proc_elim.m"
                if (transform_hlds__dead_proc_elim__succeeded)
#line 399 "dead_proc_elim.m"
                  transform_hlds__dead_proc_elim__succeeded = (transform_hlds__dead_proc_elim__TypeArity_8 == transform_hlds__dead_proc_elim__V_21_21);
#line 399 "dead_proc_elim.m"
              }
#line 403 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 402 "dead_proc_elim.m"
              {
#line 402 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__V_17_17;

#line 402 "dead_proc_elim.m"
                {
#line 402 "dead_proc_elim.m"
                  transform_hlds__dead_proc_elim__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_17_17, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Compare_16));
#line 402 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 402 "dead_proc_elim.m"
                }
#line 402 "dead_proc_elim.m"
                {
#line 402 "dead_proc_elim.m"
                  MR_Word base;
#line 402 "dead_proc_elim.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "dead_proc_elim.m"
                  *transform_hlds__dead_proc_elim__Refs_11 = base;
#line 402 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Unify_15));
#line 402 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__V_17_17));
#line 402 "dead_proc_elim.m"
                }
#line 402 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 402 "dead_proc_elim.m"
              }
#line 403 "dead_proc_elim.m"
            else
#line 404 "dead_proc_elim.m"
              {
#line 404 "dead_proc_elim.m"
                /* direct tailcall eliminated */
#line 404 "dead_proc_elim.m"
                {
#line 404 "dead_proc_elim.m"
                  MR_Word transform_hlds__dead_proc_elim__HeadVar__4__tmp_copy_4 = transform_hlds__dead_proc_elim__TypeCtorGenInfos_10;

#line 404 "dead_proc_elim.m"
                  transform_hlds__dead_proc_elim__HeadVar__4_4 = transform_hlds__dead_proc_elim__HeadVar__4__tmp_copy_4;
#line 404 "dead_proc_elim.m"
                }
#line 404 "dead_proc_elim.m"
                continue;
#line 404 "dead_proc_elim.m"
              }
#line 397 "dead_proc_elim.m"
          }
#line 397 "dead_proc_elim.m"
        return transform_hlds__dead_proc_elim__succeeded;
#line 397 "dead_proc_elim.m"
      }
#line 397 "dead_proc_elim.m"
      break;
#line 397 "dead_proc_elim.m"
    }
#line 392 "dead_proc_elim.m"
}

#line 331 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_6_p_0(
#line 331 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_22,
#line 331 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_0_23,
#line 331 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__AnalyzeWhat_9,
#line 331 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ModuleInfo_10,
#line 331 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24,
#line 331 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25)
#line 331 "dead_proc_elim.m"
{
#line 370 "dead_proc_elim.m"
  while (MR_TRUE)
#line 370 "dead_proc_elim.m"
    {
#line 370 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 370 "dead_proc_elim.m"
      {
#line 370 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 370 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__Entity_12;
#line 370 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 336 "dead_proc_elim.m"
        MR_Box transform_hlds__dead_proc_elim__conv0_Entity_12;

#line 336 "dead_proc_elim.m"
        {
#line 336 "dead_proc_elim.m"
          transform_hlds__dead_proc_elim__succeeded = mercury__queue__get_3_p_0((MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0, &transform_hlds__dead_proc_elim__conv0_Entity_12, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_22, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26);
        }
#line 336 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 336 "dead_proc_elim.m"
          {
#line 336 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__Entity_12 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_Entity_12);
#line 336 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__succeeded = MR_TRUE;
#line 336 "dead_proc_elim.m"
          }
#line 370 "dead_proc_elim.m"
        if (transform_hlds__dead_proc_elim__succeeded)
#line 367 "dead_proc_elim.m"
          {
#line 367 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_32_32;
#line 367 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_33_33;
#line 367 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_34_34;
#line 365 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_27_27;

#line 338 "dead_proc_elim.m"
            {
#line 338 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_12)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_0_23, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_27_27);
            }
#line 365 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 343 "dead_proc_elim.m"
              {
#line 343 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_34_34 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_27_27;
#line 343 "dead_proc_elim.m"
                if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__Entity_12)) == (MR_mktag((MR_Integer) 3))))
#line 356 "dead_proc_elim.m"
                  {
#line 356 "dead_proc_elim.m"
                    MR_Integer transform_hlds__dead_proc_elim__ConstNum_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__Entity_12, (MR_Integer) 0)));

#line 359 "dead_proc_elim.m"
                    if ((transform_hlds__dead_proc_elim__AnalyzeWhat_9 == (MR_Integer) 1))
#line 426 "dead_proc_elim.m"
                      {
#line 426 "dead_proc_elim.m"
                        MR_Word transform_hlds__dead_proc_elim__ConstStructDb_50;
#line 426 "dead_proc_elim.m"
                        MR_Word transform_hlds__dead_proc_elim__ConstStruct_51;
#line 426 "dead_proc_elim.m"
                        MR_Word transform_hlds__dead_proc_elim__ConsId_52;
#line 426 "dead_proc_elim.m"
                        MR_Word transform_hlds__dead_proc_elim__Args_53;
#line 426 "dead_proc_elim.m"
                        MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_60;
#line 426 "dead_proc_elim.m"
                        MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_62;
#line 429 "dead_proc_elim.m"
                        MR_Word transform_hlds__dead_proc_elim__V_54_54;
#line 429 "dead_proc_elim.m"
                        MR_Word transform_hlds__dead_proc_elim__V_55_55;
#line 434 "dead_proc_elim.m"
                        MR_Word transform_hlds__dead_proc_elim__Module_56;
#line 434 "dead_proc_elim.m"
                        MR_String transform_hlds__dead_proc_elim__TypeName_57;
#line 434 "dead_proc_elim.m"
                        MR_Integer transform_hlds__dead_proc_elim__Arity_58;

#line 427 "dead_proc_elim.m"
                        {
#line 427 "dead_proc_elim.m"
                          hlds__hlds_module__module_info_get_const_struct_db_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_10, &transform_hlds__dead_proc_elim__ConstStructDb_50);
                        }
#line 428 "dead_proc_elim.m"
                        {
#line 428 "dead_proc_elim.m"
                          hlds__const_struct__lookup_const_struct_num_3_p_0(transform_hlds__dead_proc_elim__ConstStructDb_50, transform_hlds__dead_proc_elim__ConstNum_21, &transform_hlds__dead_proc_elim__ConstStruct_51);
                        }
#line 429 "dead_proc_elim.m"
                        transform_hlds__dead_proc_elim__ConsId_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ConstStruct_51, (MR_Integer) 0)));
#line 429 "dead_proc_elim.m"
                        transform_hlds__dead_proc_elim__Args_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ConstStruct_51, (MR_Integer) 1)));
#line 429 "dead_proc_elim.m"
                        transform_hlds__dead_proc_elim__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ConstStruct_51, (MR_Integer) 2)));
#line 429 "dead_proc_elim.m"
                        transform_hlds__dead_proc_elim__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ConstStruct_51, (MR_Integer) 3)));
#line 430 "dead_proc_elim.m"
                        transform_hlds__dead_proc_elim__succeeded = ((((MR_tag((MR_Word) transform_hlds__dead_proc_elim__ConsId_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_52, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 430 "dead_proc_elim.m"
                        if (transform_hlds__dead_proc_elim__succeeded)
#line 430 "dead_proc_elim.m"
                          {
#line 430 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__Module_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_52, (MR_Integer) 1)));
#line 430 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__TypeName_57 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_52, (MR_Integer) 2)));
#line 430 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__Arity_58 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__dead_proc_elim__ConsId_52, (MR_Integer) 3)));
#line 431 "dead_proc_elim.m"
                            {
#line 431 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_30_65;
#line 431 "dead_proc_elim.m"
                              MR_Word transform_hlds__dead_proc_elim__Entity_59;

#line 431 "dead_proc_elim.m"
                              {
#line 431 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__Entity_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 431 "dead_proc_elim.m"
                                MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_59, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__Module_56));
#line 431 "dead_proc_elim.m"
                                MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_59, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__TypeName_57));
#line 431 "dead_proc_elim.m"
                                MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_59, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__Arity_58));
#line 431 "dead_proc_elim.m"
                              }
#line 9137 "transform_hlds.dead_proc_elim.c"
                              transform_hlds__dead_proc_elim__TypeCtorInfo_30_65 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 432 "dead_proc_elim.m"
                              {
#line 432 "dead_proc_elim.m"
                                mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_30_65, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_59)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_60);
                              }
#line 433 "dead_proc_elim.m"
                              {
#line 433 "dead_proc_elim.m"
                                mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_30_65, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_59)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_62);
                              }
#line 431 "dead_proc_elim.m"
                            }
#line 430 "dead_proc_elim.m"
                          }
#line 430 "dead_proc_elim.m"
                        else
#line 435 "dead_proc_elim.m"
                          {
#line 435 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_62 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24;
#line 435 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_60 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 435 "dead_proc_elim.m"
                          }
#line 437 "dead_proc_elim.m"
                        {
#line 437 "dead_proc_elim.m"
                          transform_hlds__dead_proc_elim__dead_proc_examine_const_struct_args_5_p_0(transform_hlds__dead_proc_elim__Args_53, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_60, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_32_32, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_27_62, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_33_33);
                        }
#line 426 "dead_proc_elim.m"
                      }
#line 359 "dead_proc_elim.m"
                    else
#line 358 "dead_proc_elim.m"
                      {
#line 358 "dead_proc_elim.m"
                        transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_32_32 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 358 "dead_proc_elim.m"
                        transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_33_33 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24;
#line 358 "dead_proc_elim.m"
                      }
#line 356 "dead_proc_elim.m"
                  }
#line 343 "dead_proc_elim.m"
                else
#line 343 "dead_proc_elim.m"
                  if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__Entity_12)) == (MR_mktag((MR_Integer) 0))))
#line 340 "dead_proc_elim.m"
                    {
#line 340 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_12, (MR_Integer) 0)));
#line 340 "dead_proc_elim.m"
                      MR_Integer transform_hlds__dead_proc_elim__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_12, (MR_Integer) 1)));
#line 340 "dead_proc_elim.m"
                      MR_Word transform_hlds__dead_proc_elim__PredProcId_15;

#line 341 "dead_proc_elim.m"
                      {
#line 341 "dead_proc_elim.m"
                        transform_hlds__dead_proc_elim__PredProcId_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 341 "dead_proc_elim.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__PredProcId_15, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_13));
#line 341 "dead_proc_elim.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__PredProcId_15, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_14));
#line 341 "dead_proc_elim.m"
                      }
#line 342 "dead_proc_elim.m"
                      {
#line 342 "dead_proc_elim.m"
                        transform_hlds__dead_proc_elim__dead_proc_examine_proc_6_p_0(transform_hlds__dead_proc_elim__PredProcId_15, transform_hlds__dead_proc_elim__ModuleInfo_10, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_32_32, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_33_33);
                      }
#line 340 "dead_proc_elim.m"
                    }
#line 343 "dead_proc_elim.m"
                  else
#line 343 "dead_proc_elim.m"
                    if (((MR_tag((MR_Word) transform_hlds__dead_proc_elim__Entity_12)) == (MR_mktag((MR_Integer) 1))))
#line 344 "dead_proc_elim.m"
                      {
#line 344 "dead_proc_elim.m"
                        transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_32_32 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 344 "dead_proc_elim.m"
                        transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_33_33 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24;
#line 344 "dead_proc_elim.m"
                      }
#line 343 "dead_proc_elim.m"
                    else
#line 347 "dead_proc_elim.m"
                      {
#line 347 "dead_proc_elim.m"
                        MR_Word transform_hlds__dead_proc_elim__Module_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_12, (MR_Integer) 0)));
#line 347 "dead_proc_elim.m"
                        MR_String transform_hlds__dead_proc_elim__Type_19 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_12, (MR_Integer) 1)));
#line 347 "dead_proc_elim.m"
                        MR_Integer transform_hlds__dead_proc_elim__Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_12, (MR_Integer) 2)));

#line 350 "dead_proc_elim.m"
                        if ((transform_hlds__dead_proc_elim__AnalyzeWhat_9 == (MR_Integer) 1))
#line 381 "dead_proc_elim.m"
                          {
#line 381 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfos_77;
#line 388 "dead_proc_elim.m"
                            MR_Word transform_hlds__dead_proc_elim__Refs_78;

#line 382 "dead_proc_elim.m"
                            {
#line 382 "dead_proc_elim.m"
                              hlds__hlds_module__module_info_get_type_ctor_gen_infos_2_p_0(transform_hlds__dead_proc_elim__ModuleInfo_10, &transform_hlds__dead_proc_elim__TypeCtorGenInfos_77);
                            }
#line 384 "dead_proc_elim.m"
                            {
#line 384 "dead_proc_elim.m"
                              transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim__find_type_ctor_info_5_p_0(transform_hlds__dead_proc_elim__Module_18, transform_hlds__dead_proc_elim__Type_19, transform_hlds__dead_proc_elim__Arity_20, transform_hlds__dead_proc_elim__TypeCtorGenInfos_77, &transform_hlds__dead_proc_elim__Refs_78);
                            }
#line 388 "dead_proc_elim.m"
                            if (transform_hlds__dead_proc_elim__succeeded)
#line 387 "dead_proc_elim.m"
                              {
#line 387 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__dead_proc_examine_refs_5_p_0(transform_hlds__dead_proc_elim__Refs_78, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_32_32, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_33_33);
                              }
#line 388 "dead_proc_elim.m"
                            else
#line 389 "dead_proc_elim.m"
                              {
#line 389 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_33_33 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24;
#line 389 "dead_proc_elim.m"
                                transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_32_32 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 389 "dead_proc_elim.m"
                              }
#line 381 "dead_proc_elim.m"
                          }
#line 350 "dead_proc_elim.m"
                        else
#line 349 "dead_proc_elim.m"
                          {
#line 349 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_32_32 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 349 "dead_proc_elim.m"
                            transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_33_33 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24;
#line 349 "dead_proc_elim.m"
                          }
#line 347 "dead_proc_elim.m"
                      }
#line 343 "dead_proc_elim.m"
              }
#line 365 "dead_proc_elim.m"
            else
#line 366 "dead_proc_elim.m"
              {
#line 366 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_33_33 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24;
#line 366 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_34_34 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_0_23;
#line 366 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_32_32 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 366 "dead_proc_elim.m"
              }
#line 368 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 368 "dead_proc_elim.m"
            {
#line 368 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_22 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_32_32;
#line 368 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_0__tmp_copy_23 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_34_34;
#line 368 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_24 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_33_33;

#line 368 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_24;
#line 368 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_0_23 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Examined_0__tmp_copy_23;
#line 368 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_22 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_22;
#line 368 "dead_proc_elim.m"
            }
#line 368 "dead_proc_elim.m"
            continue;
#line 367 "dead_proc_elim.m"
          }
#line 370 "dead_proc_elim.m"
        else
#line 371 "dead_proc_elim.m"
          *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_24;
#line 370 "dead_proc_elim.m"
      }
#line 370 "dead_proc_elim.m"
      break;
#line 370 "dead_proc_elim.m"
    }
#line 331 "dead_proc_elim.m"
}

#line 319 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__get_class_interface_pred_proc_5_p_0(
#line 319 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__ClassProc_6,
#line 319 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_12,
#line 319 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_13,
#line 319 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_14,
#line 319 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_15)
#line 319 "dead_proc_elim.m"
{
#line 323 "dead_proc_elim.m"
  {
#line 323 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 323 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_19_19;
#line 323 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ClassProc_6, (MR_Integer) 0)));
#line 323 "dead_proc_elim.m"
    MR_Integer transform_hlds__dead_proc_elim__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__ClassProc_6, (MR_Integer) 1)));
#line 323 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Entity_11;

#line 325 "dead_proc_elim.m"
    {
#line 325 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__Entity_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 325 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_11, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_9));
#line 325 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_11, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_10));
#line 325 "dead_proc_elim.m"
    }
#line 9373 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_19_19 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 326 "dead_proc_elim.m"
    {
#line 326 "dead_proc_elim.m"
      mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_19_19, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_11)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_12, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_13);
    }
#line 327 "dead_proc_elim.m"
    {
#line 327 "dead_proc_elim.m"
      mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_19_19, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_11)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_14, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_15);
#line 327 "dead_proc_elim.m"
      return;
    }
#line 323 "dead_proc_elim.m"
  }
#line 319 "dead_proc_elim.m"
}

#line 317 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0_1(
#line 317 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 317 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 317 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 317 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 317 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 317 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5)
#line 317 "dead_proc_elim.m"
{
#line 317 "dead_proc_elim.m"
  {
#line 317 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 317 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_13;
#line 317 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_15;

#line 317 "dead_proc_elim.m"
    {
#line 317 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__get_class_interface_pred_proc_5_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_13, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_4), &transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_15);
    }
#line 317 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_13));
#line 317 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_5 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_15));
#line 317 "dead_proc_elim.m"
  }
#line 317 "dead_proc_elim.m"
}

#line 311 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0(
#line 311 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Class_6,
#line 311 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_10,
#line 311 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_11,
#line 311 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_12,
#line 311 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_13)
#line 311 "dead_proc_elim.m"
{
#line 315 "dead_proc_elim.m"
  {
#line 315 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 315 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Methods_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Class_6, (MR_Integer) 7)));
#line 316 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Class_6, (MR_Integer) 0)));
#line 316 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Class_6, (MR_Integer) 1)));
#line 316 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Class_6, (MR_Integer) 2)));
#line 316 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Class_6, (MR_Integer) 3)));
#line 316 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Class_6, (MR_Integer) 4)));
#line 316 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Class_6, (MR_Integer) 5)));
#line 316 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Class_6, (MR_Integer) 6)));
#line 316 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Class_6, (MR_Integer) 8)));
#line 316 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Class_6, (MR_Integer) 9)));
#line 317 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_11;
#line 317 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_13;

#line 317 "dead_proc_elim.m"
    {
#line 317 "dead_proc_elim.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[4], (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[0], (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[12], transform_hlds__dead_proc_elim__Methods_9, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_10)), &transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_11, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_12)), &transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_13);
    }
#line 317 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_11 = ((MR_Word) transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_11);
#line 317 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_13 = ((MR_Word) transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_13);
#line 315 "dead_proc_elim.m"
  }
#line 311 "dead_proc_elim.m"
}

#line 308 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0_1(
#line 308 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 308 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 308 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 308 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 308 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 308 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5)
#line 308 "dead_proc_elim.m"
{
#line 308 "dead_proc_elim.m"
  {
#line 308 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 308 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_13;
#line 308 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_15;

#line 308 "dead_proc_elim.m"
    {
#line 308 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__get_class_interface_pred_proc_5_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_13, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_4), &transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_15);
    }
#line 308 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_13));
#line 308 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_5 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_15));
#line 308 "dead_proc_elim.m"
  }
#line 308 "dead_proc_elim.m"
}

#line 295 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0(
#line 295 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Instance_6,
#line 295 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_20,
#line 295 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_21,
#line 295 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_22,
#line 295 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_23)
#line 295 "dead_proc_elim.m"
{
#line 299 "dead_proc_elim.m"
  {
#line 299 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 299 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredProcIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Instance_6, (MR_Integer) 7)));
#line 300 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Instance_6, (MR_Integer) 0)));
#line 300 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Instance_6, (MR_Integer) 1)));
#line 300 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Instance_6, (MR_Integer) 2)));
#line 300 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Instance_6, (MR_Integer) 3)));
#line 300 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Instance_6, (MR_Integer) 4)));
#line 300 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Instance_6, (MR_Integer) 5)));
#line 300 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Instance_6, (MR_Integer) 6)));
#line 300 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Instance_6, (MR_Integer) 8)));
#line 300 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Instance_6, (MR_Integer) 9)));

#line 306 "dead_proc_elim.m"
    if ((transform_hlds__dead_proc_elim__PredProcIds_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 305 "dead_proc_elim.m"
      {
#line 305 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_21 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_20;
#line 305 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_23 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_22;
#line 305 "dead_proc_elim.m"
      }
#line 306 "dead_proc_elim.m"
    else
#line 307 "dead_proc_elim.m"
      {
#line 307 "dead_proc_elim.m"
        MR_Word transform_hlds__dead_proc_elim__Ids_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__PredProcIds_16, (MR_Integer) 0)));
#line 308 "dead_proc_elim.m"
        MR_Box transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_21;
#line 308 "dead_proc_elim.m"
        MR_Box transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_23;

#line 308 "dead_proc_elim.m"
        {
#line 308 "dead_proc_elim.m"
          mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[4], (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[0], (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[11], transform_hlds__dead_proc_elim__Ids_19, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_20)), &transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_21, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_22)), &transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_23);
        }
#line 308 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_21 = ((MR_Word) transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_21);
#line 308 "dead_proc_elim.m"
        *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_23 = ((MR_Word) transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_23);
#line 307 "dead_proc_elim.m"
      }
#line 299 "dead_proc_elim.m"
  }
#line 295 "dead_proc_elim.m"
}

#line 293 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_p_0_2(
#line 293 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 293 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 293 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 293 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 293 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 293 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5)
#line 293 "dead_proc_elim.m"
{
#line 293 "dead_proc_elim.m"
  {
#line 293 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 293 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_Queue_11;
#line 293 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_Needed_13;

#line 293 "dead_proc_elim.m"
    {
#line 293 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_Queue_11, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_4), &transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_Needed_13);
    }
#line 293 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_Queue_11));
#line 293 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_5 = ((MR_Box) (transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_Needed_13));
#line 293 "dead_proc_elim.m"
  }
#line 293 "dead_proc_elim.m"
}

#line 291 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_p_0_1(
#line 291 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 291 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 291 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 291 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 291 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 291 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5)
#line 291 "dead_proc_elim.m"
{
#line 291 "dead_proc_elim.m"
  {
#line 291 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 291 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_21;
#line 291 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_23;

#line 291 "dead_proc_elim.m"
    {
#line 291 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_21, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_4), &transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_23);
    }
#line 291 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_21));
#line 291 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_5 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_23));
#line 291 "dead_proc_elim.m"
  }
#line 291 "dead_proc_elim.m"
}

#line 283 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_p_0(
#line 283 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Classes_7,
#line 283 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__Instances_8,
#line 283 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_14,
#line 283 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_15,
#line 283 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_16,
#line 283 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_17)
#line 283 "dead_proc_elim.m"
{
#line 288 "dead_proc_elim.m"
  {
#line 288 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 288 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 288 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_26_26;
#line 288 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeInfo_32_32;
#line 288 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeInfo_33_33;
#line 288 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_34_34;
#line 288 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__InstanceDefnsLists_11;
#line 288 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__InstanceDefns_12;
#line 288 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ClassDefns_13;
#line 288 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_19;
#line 288 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_20;
#line 291 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_19_19;
#line 291 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_20_20;
#line 293 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv7_STATE_VARIABLE_Queue_15;
#line 293 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_Needed_17;

#line 289 "dead_proc_elim.m"
    {
#line 289 "dead_proc_elim.m"
      mercury__map__values_2_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_24_24, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[3], transform_hlds__dead_proc_elim__Instances_8, &transform_hlds__dead_proc_elim__InstanceDefnsLists_11);
    }
#line 9742 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
#line 290 "dead_proc_elim.m"
    {
#line 290 "dead_proc_elim.m"
      mercury__list__condense_2_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_26_26, transform_hlds__dead_proc_elim__InstanceDefnsLists_11, &transform_hlds__dead_proc_elim__InstanceDefns_12);
    }
#line 9749 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeInfo_32_32 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[4];
#line 9751 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeInfo_33_33 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[0];
#line 291 "dead_proc_elim.m"
    {
#line 291 "dead_proc_elim.m"
      mercury__list__foldl2_6_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_26_26, transform_hlds__dead_proc_elim__TypeInfo_32_32, transform_hlds__dead_proc_elim__TypeInfo_33_33, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[9], transform_hlds__dead_proc_elim__InstanceDefns_12, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_14)), &transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_19_19, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_16)), &transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_20_20);
    }
#line 291 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_19 = ((MR_Word) transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_19_19);
#line 291 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_20 = ((MR_Word) transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_20_20);
#line 9762 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_34_34 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0;
#line 292 "dead_proc_elim.m"
    {
#line 292 "dead_proc_elim.m"
      mercury__map__values_2_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_24_24, transform_hlds__dead_proc_elim__TypeCtorInfo_34_34, transform_hlds__dead_proc_elim__Classes_7, &transform_hlds__dead_proc_elim__ClassDefns_13);
    }
#line 293 "dead_proc_elim.m"
    {
#line 293 "dead_proc_elim.m"
      mercury__list__foldl2_6_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_34_34, transform_hlds__dead_proc_elim__TypeInfo_32_32, transform_hlds__dead_proc_elim__TypeInfo_33_33, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[10], transform_hlds__dead_proc_elim__ClassDefns_13, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_19)), &transform_hlds__dead_proc_elim__conv7_STATE_VARIABLE_Queue_15, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_20)), &transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_Needed_17);
    }
#line 293 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_15 = ((MR_Word) transform_hlds__dead_proc_elim__conv7_STATE_VARIABLE_Queue_15);
#line 293 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_17 = ((MR_Word) transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_Needed_17);
#line 288 "dead_proc_elim.m"
  }
#line 283 "dead_proc_elim.m"
}

#line 249 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_type_ctor_infos_5_p_0(
#line 249 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 249 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 249 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 249 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4,
#line 249 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5)
#line 249 "dead_proc_elim.m"
{
#line 253 "dead_proc_elim.m"
  while (MR_TRUE)
#line 253 "dead_proc_elim.m"
    {
#line 253 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 253 "dead_proc_elim.m"
      {
#line 253 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 253 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 253 "dead_proc_elim.m"
          {
#line 253 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4;
#line 253 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2;
#line 253 "dead_proc_elim.m"
          }
#line 253 "dead_proc_elim.m"
        else
#line 255 "dead_proc_elim.m"
          {
#line 255 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 255 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfos_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 255 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_12, (MR_Integer) 1)));
#line 255 "dead_proc_elim.m"
            MR_String transform_hlds__dead_proc_elim__TypeName_18 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_12, (MR_Integer) 2)));
#line 255 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__Arity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_12, (MR_Integer) 3)));
#line 255 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_29_29;
#line 255 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_31_31;
#line 256 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim___TypeCtor_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_12, (MR_Integer) 0)));
#line 256 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim___Status_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_12, (MR_Integer) 4)));
#line 256 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim___HldsDefn_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_12, (MR_Integer) 5)));
#line 256 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim___Unify_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_12, (MR_Integer) 6)));
#line 256 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim___Compare_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeCtorGenInfo_12, (MR_Integer) 7)));

#line 273 "dead_proc_elim.m"
            {
#line 273 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__succeeded = mercury__builtin__semidet_succeed_0_p_0();
            }
#line 278 "dead_proc_elim.m"
            if (transform_hlds__dead_proc_elim__succeeded)
#line 275 "dead_proc_elim.m"
              {
#line 275 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_34_34;
#line 275 "dead_proc_elim.m"
                MR_Word transform_hlds__dead_proc_elim__Entity_24;

#line 275 "dead_proc_elim.m"
                {
#line 275 "dead_proc_elim.m"
                  transform_hlds__dead_proc_elim__Entity_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 275 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_24, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__ModuleName_17));
#line 275 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_24, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__TypeName_18));
#line 275 "dead_proc_elim.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__dead_proc_elim__Entity_24, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__Arity_19));
#line 275 "dead_proc_elim.m"
                }
#line 9874 "transform_hlds.dead_proc_elim.c"
                transform_hlds__dead_proc_elim__TypeCtorInfo_34_34 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 276 "dead_proc_elim.m"
                {
#line 276 "dead_proc_elim.m"
                  mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_34_34, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_24)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_29_29);
                }
#line 277 "dead_proc_elim.m"
                {
#line 277 "dead_proc_elim.m"
                  mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_34_34, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_24)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_31_31);
                }
#line 275 "dead_proc_elim.m"
              }
#line 278 "dead_proc_elim.m"
            else
#line 279 "dead_proc_elim.m"
              {
#line 279 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_31_31 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4;
#line 279 "dead_proc_elim.m"
                transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_29_29 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2;
#line 279 "dead_proc_elim.m"
              }
#line 281 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 281 "dead_proc_elim.m"
            {
#line 281 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1 = transform_hlds__dead_proc_elim__TypeCtorGenInfos_13;
#line 281 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_2 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_29_29;
#line 281 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_31_31;

#line 281 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_4;
#line 281 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_2;
#line 281 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1;
#line 281 "dead_proc_elim.m"
            }
#line 281 "dead_proc_elim.m"
            continue;
#line 255 "dead_proc_elim.m"
          }
#line 253 "dead_proc_elim.m"
      }
#line 253 "dead_proc_elim.m"
      break;
#line 253 "dead_proc_elim.m"
    }
#line 249 "dead_proc_elim.m"
}

#line 237 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_p_0(
#line 237 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 237 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 237 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 237 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4,
#line 237 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5)
#line 237 "dead_proc_elim.m"
{
#line 241 "dead_proc_elim.m"
  while (MR_TRUE)
#line 241 "dead_proc_elim.m"
    {
#line 241 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 241 "dead_proc_elim.m"
      {
#line 241 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 241 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 241 "dead_proc_elim.m"
          {
#line 241 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4;
#line 241 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2;
#line 241 "dead_proc_elim.m"
          }
#line 241 "dead_proc_elim.m"
        else
#line 242 "dead_proc_elim.m"
          {
#line 242 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_28_28;
#line 242 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PPId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 242 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PPIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 242 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__PPId_12, (MR_Integer) 0)));
#line 242 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__ProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__PPId_12, (MR_Integer) 1)));
#line 242 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Entity_18;
#line 242 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_23;
#line 242 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25_25;

#line 244 "dead_proc_elim.m"
            {
#line 244 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__Entity_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 244 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_18, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_16));
#line 244 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_18, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_17));
#line 244 "dead_proc_elim.m"
            }
#line 9997 "transform_hlds.dead_proc_elim.c"
            transform_hlds__dead_proc_elim__TypeCtorInfo_28_28 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 245 "dead_proc_elim.m"
            {
#line 245 "dead_proc_elim.m"
              mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_28_28, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_18)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_23);
            }
#line 246 "dead_proc_elim.m"
            {
#line 246 "dead_proc_elim.m"
              mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_28_28, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_18)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25_25);
            }
#line 247 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 247 "dead_proc_elim.m"
            {
#line 247 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1 = transform_hlds__dead_proc_elim__PPIds_13;
#line 247 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_2 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_23;
#line 247 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_25_25;

#line 247 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_4;
#line 247 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_2;
#line 247 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1;
#line 247 "dead_proc_elim.m"
            }
#line 247 "dead_proc_elim.m"
            continue;
#line 242 "dead_proc_elim.m"
          }
#line 241 "dead_proc_elim.m"
      }
#line 241 "dead_proc_elim.m"
      break;
#line 241 "dead_proc_elim.m"
    }
#line 237 "dead_proc_elim.m"
}

#line 220 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_p_0(
#line 220 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 220 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2,
#line 220 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3,
#line 220 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4,
#line 220 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5)
#line 220 "dead_proc_elim.m"
{
#line 224 "dead_proc_elim.m"
  while (MR_TRUE)
#line 224 "dead_proc_elim.m"
    {
#line 224 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 224 "dead_proc_elim.m"
      {
#line 224 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 224 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 224 "dead_proc_elim.m"
          {
#line 224 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4;
#line 224 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2;
#line 224 "dead_proc_elim.m"
          }
#line 224 "dead_proc_elim.m"
        else
#line 226 "dead_proc_elim.m"
          {
#line 226 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_31_31;
#line 226 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PragmaProc_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 226 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PragmaProcs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 226 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__PragmaProc_12, (MR_Integer) 1)));
#line 226 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__PragmaProc_12, (MR_Integer) 2)));
#line 226 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Entity_21;
#line 226 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 226 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_28_28;
#line 227 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim___Lang_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__PragmaProc_12, (MR_Integer) 0)));
#line 227 "dead_proc_elim.m"
            MR_String transform_hlds__dead_proc_elim___ExportName_19 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__PragmaProc_12, (MR_Integer) 3)));
#line 227 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim___Ctxt_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__PragmaProc_12, (MR_Integer) 4)));

#line 229 "dead_proc_elim.m"
            {
#line 229 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__Entity_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 229 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_21, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__PredId_17));
#line 229 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_21, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_18));
#line 229 "dead_proc_elim.m"
            }
#line 10114 "transform_hlds.dead_proc_elim.c"
            transform_hlds__dead_proc_elim__TypeCtorInfo_31_31 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 230 "dead_proc_elim.m"
            {
#line 230 "dead_proc_elim.m"
              mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_31_31, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_21)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26);
            }
#line 231 "dead_proc_elim.m"
            {
#line 231 "dead_proc_elim.m"
              mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_31_31, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_21)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_28_28);
            }
#line 232 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 232 "dead_proc_elim.m"
            {
#line 232 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1 = transform_hlds__dead_proc_elim__PragmaProcs_13;
#line 232 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_2 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_26_26;
#line 232 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_28_28;

#line 232 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_4;
#line 232 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_2 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_2;
#line 232 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1;
#line 232 "dead_proc_elim.m"
            }
#line 232 "dead_proc_elim.m"
            continue;
#line 226 "dead_proc_elim.m"
          }
#line 224 "dead_proc_elim.m"
      }
#line 224 "dead_proc_elim.m"
      break;
#line 224 "dead_proc_elim.m"
    }
#line 220 "dead_proc_elim.m"
}

#line 206 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_procs_6_p_0(
#line 206 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 206 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 206 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3,
#line 206 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4,
#line 206 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5,
#line 206 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6)
#line 206 "dead_proc_elim.m"
{
#line 210 "dead_proc_elim.m"
  while (MR_TRUE)
#line 210 "dead_proc_elim.m"
    {
#line 210 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 210 "dead_proc_elim.m"
      {
#line 210 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 210 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 210 "dead_proc_elim.m"
          {
#line 210 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5;
#line 210 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3;
#line 210 "dead_proc_elim.m"
          }
#line 210 "dead_proc_elim.m"
        else
#line 211 "dead_proc_elim.m"
          {
#line 211 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_29_29;
#line 211 "dead_proc_elim.m"
            MR_Integer transform_hlds__dead_proc_elim__ProcId_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 0)));
#line 211 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__ProcIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__2_2, (MR_Integer) 1)));
#line 211 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__Entity_19;
#line 211 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_24_24;
#line 211 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_26_26;

#line 212 "dead_proc_elim.m"
            {
#line 212 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__Entity_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 212 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_19, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__HeadVar__1_1));
#line 212 "dead_proc_elim.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__Entity_19, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__ProcId_15));
#line 212 "dead_proc_elim.m"
            }
#line 10223 "transform_hlds.dead_proc_elim.c"
            transform_hlds__dead_proc_elim__TypeCtorInfo_29_29 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 213 "dead_proc_elim.m"
            {
#line 213 "dead_proc_elim.m"
              mercury__queue__put_3_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_29_29, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_19)), transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_24_24);
            }
#line 214 "dead_proc_elim.m"
            {
#line 214 "dead_proc_elim.m"
              mercury__map__set_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_29_29, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, ((MR_Box) (transform_hlds__dead_proc_elim__Entity_19)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_26_26);
            }
#line 215 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 215 "dead_proc_elim.m"
            {
#line 215 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__HeadVar__2__tmp_copy_2 = transform_hlds__dead_proc_elim__ProcIds_16;
#line 215 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_24_24;
#line 215 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_26_26;

#line 215 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_5;
#line 215 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_3;
#line 215 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__HeadVar__2_2 = transform_hlds__dead_proc_elim__HeadVar__2__tmp_copy_2;
#line 215 "dead_proc_elim.m"
            }
#line 215 "dead_proc_elim.m"
            continue;
#line 211 "dead_proc_elim.m"
          }
#line 210 "dead_proc_elim.m"
      }
#line 210 "dead_proc_elim.m"
      break;
#line 210 "dead_proc_elim.m"
    }
#line 206 "dead_proc_elim.m"
}

#line 193 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_preds_6_p_0(
#line 193 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__1_1,
#line 193 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__HeadVar__2_2,
#line 193 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3,
#line 193 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4,
#line 193 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5,
#line 193 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6)
#line 193 "dead_proc_elim.m"
{
#line 197 "dead_proc_elim.m"
  while (MR_TRUE)
#line 197 "dead_proc_elim.m"
    {
#line 197 "dead_proc_elim.m"
      /* tailcall optimized into a loop */
#line 197 "dead_proc_elim.m"
      {
#line 197 "dead_proc_elim.m"
        MR_bool transform_hlds__dead_proc_elim__succeeded;

#line 197 "dead_proc_elim.m"
        if ((transform_hlds__dead_proc_elim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 197 "dead_proc_elim.m"
          {
#line 197 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_6 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5;
#line 197 "dead_proc_elim.m"
            *transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_4 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3;
#line 197 "dead_proc_elim.m"
          }
#line 197 "dead_proc_elim.m"
        else
#line 198 "dead_proc_elim.m"
          {
#line 198 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 0)));
#line 198 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PredIds_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dead_proc_elim__HeadVar__1_1, (MR_Integer) 1)));
#line 198 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__PredInfo_19;
#line 198 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__ProcIds_20;
#line 198 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_25;
#line 198 "dead_proc_elim.m"
            MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_26_26;
#line 199 "dead_proc_elim.m"
            MR_Box transform_hlds__dead_proc_elim__conv0_PredInfo_19;

#line 199 "dead_proc_elim.m"
            {
#line 199 "dead_proc_elim.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, transform_hlds__dead_proc_elim__HeadVar__2_2, ((MR_Box) (transform_hlds__dead_proc_elim__PredId_14)), &transform_hlds__dead_proc_elim__conv0_PredInfo_19);
            }
#line 199 "dead_proc_elim.m"
            transform_hlds__dead_proc_elim__PredInfo_19 = ((MR_Word) transform_hlds__dead_proc_elim__conv0_PredInfo_19);
#line 200 "dead_proc_elim.m"
            {
#line 200 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__ProcIds_20 = hlds__hlds_pred__pred_info_exported_procids_1_f_0(transform_hlds__dead_proc_elim__PredInfo_19);
            }
#line 201 "dead_proc_elim.m"
            {
#line 201 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__dead_proc_initialize_procs_6_p_0(transform_hlds__dead_proc_elim__PredId_14, transform_hlds__dead_proc_elim__ProcIds_20, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_25, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_26_26);
            }
#line 202 "dead_proc_elim.m"
            /* direct tailcall eliminated */
#line 202 "dead_proc_elim.m"
            {
#line 202 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1 = transform_hlds__dead_proc_elim__PredIds_15;
#line 202 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_25;
#line 202 "dead_proc_elim.m"
              MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_26_26;

#line 202 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0_5 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_0__tmp_copy_5;
#line 202 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0_3 = transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_0__tmp_copy_3;
#line 202 "dead_proc_elim.m"
              transform_hlds__dead_proc_elim__HeadVar__1_1 = transform_hlds__dead_proc_elim__HeadVar__1__tmp_copy_1;
#line 202 "dead_proc_elim.m"
            }
#line 202 "dead_proc_elim.m"
            continue;
#line 198 "dead_proc_elim.m"
          }
#line 197 "dead_proc_elim.m"
      }
#line 197 "dead_proc_elim.m"
      break;
#line 197 "dead_proc_elim.m"
    }
#line 193 "dead_proc_elim.m"
}

#line 1043 "dead_proc_elim.m"
static MR_bool MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_4(
#line 1043 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1043 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1)
#line 1043 "dead_proc_elim.m"
{
#line 1043 "dead_proc_elim.m"
  {
#line 1043 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 1043 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;

#line 1043 "dead_proc_elim.m"
    {
#line 1043 "dead_proc_elim.m"
      return transform_hlds__dead_proc_elim__succeeded = transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__1043__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1));
    }
#line 1043 "dead_proc_elim.m"
    return transform_hlds__dead_proc_elim__succeeded;
#line 1043 "dead_proc_elim.m"
  }
#line 1043 "dead_proc_elim.m"
}

#line 1030 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_3(
#line 1030 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1030 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1030 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1030 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 1030 "dead_proc_elim.m"
{
#line 1030 "dead_proc_elim.m"
  {
#line 1030 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 1030 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv6_HeadVar__4_53;

#line 1030 "dead_proc_elim.m"
    {
#line 1030 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__1033__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv6_HeadVar__4_53);
    }
#line 1030 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv6_HeadVar__4_53));
#line 1030 "dead_proc_elim.m"
  }
#line 1030 "dead_proc_elim.m"
}

#line 1018 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_2(
#line 1018 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1018 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1018 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1018 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3)
#line 1018 "dead_proc_elim.m"
{
#line 1018 "dead_proc_elim.m"
  {
#line 1018 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 1018 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv4_DeadInfo_6;

#line 1018 "dead_proc_elim.m"
    {
#line 1018 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv4_DeadInfo_6);
    }
#line 1018 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv4_DeadInfo_6));
#line 1018 "dead_proc_elim.m"
  }
#line 1018 "dead_proc_elim.m"
}

#line 1009 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_1(
#line 1009 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 1009 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 1009 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 1009 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 1009 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 1009 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5)
#line 1009 "dead_proc_elim.m"
{
#line 1009 "dead_proc_elim.m"
  {
#line 1009 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 1009 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_3;
#line 1009 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Preds_5;

#line 1009 "dead_proc_elim.m"
    {
#line 1009 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_pred_elim_add_entity_5_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_3, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_4), &transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Preds_5);
    }
#line 1009 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_3));
#line 1009 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_5 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Preds_5));
#line 1009 "dead_proc_elim.m"
  }
#line 1009 "dead_proc_elim.m"
}

#line 74 "dead_proc_elim.m"
void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0(
#line 74 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_44,
#line 74 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_45)
#line 74 "dead_proc_elim.m"
{
#line 992 "dead_proc_elim.m"
  {
#line 992 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_61_61 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_62_62;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_63_63;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeInfo_70_70;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Queue0_4;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Needed0_5;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PragmaExports_6;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Needed1_8;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Instances_9;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Classes_10;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Needed_12;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Entities_13;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Queue1_14;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__NeededPreds0_15;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Queue_16;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__NeededPreds1_17;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredIds_18;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Preds0_19;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Names0_20;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__DeadInfo0_21;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__DeadInfo1_22;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__DeadInfo_23;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__NeededPreds2_26;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeSpecInfo0_28;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeSpecProcs0_29;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeSpecForcePreds0_30;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__SpecMap0_31;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PragmaMap0_32;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__NeededPredList2_33;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__NeededPreds_38;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeSpecForcePreds_39;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeSpecInfo_40;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredTable0_41;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PartialQualInfo_42;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredTable_43;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_47_47;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_49_49;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_50_50;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_54_54;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_55_55;
#line 992 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_56_56;
#line 996 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_7_7;
#line 1004 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_11_11;
#line 1009 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv3_Queue_16;
#line 1009 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv2_NeededPreds1_17;
#line 1018 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv5_DeadInfo1_22;
#line 1020 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_24_24;
#line 1020 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_25_25;
#line 1020 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__V_27_27;
#line 1030 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv7_NeededPreds_38;

#line 993 "dead_proc_elim.m"
    {
#line 993 "dead_proc_elim.m"
      mercury__queue__init_1_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_61_61, &transform_hlds__dead_proc_elim__Queue0_4);
    }
#line 10624 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_62_62 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0;
#line 994 "dead_proc_elim.m"
    {
#line 994 "dead_proc_elim.m"
      mercury__map__init_1_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_61_61, transform_hlds__dead_proc_elim__TypeCtorInfo_62_62, &transform_hlds__dead_proc_elim__Needed0_5);
    }
#line 995 "dead_proc_elim.m"
    {
#line 995 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_44, &transform_hlds__dead_proc_elim__PragmaExports_6);
    }
#line 996 "dead_proc_elim.m"
    {
#line 996 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_p_0(transform_hlds__dead_proc_elim__PragmaExports_6, transform_hlds__dead_proc_elim__Queue0_4, &transform_hlds__dead_proc_elim__V_7_7, transform_hlds__dead_proc_elim__Needed0_5, &transform_hlds__dead_proc_elim__Needed1_8);
    }
#line 1002 "dead_proc_elim.m"
    {
#line 1002 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_instance_table_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_44, &transform_hlds__dead_proc_elim__Instances_9);
    }
#line 1003 "dead_proc_elim.m"
    {
#line 1003 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_44, &transform_hlds__dead_proc_elim__Classes_10);
    }
#line 1004 "dead_proc_elim.m"
    {
#line 1004 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_p_0(transform_hlds__dead_proc_elim__Classes_10, transform_hlds__dead_proc_elim__Instances_9, transform_hlds__dead_proc_elim__Queue0_4, &transform_hlds__dead_proc_elim__V_11_11, transform_hlds__dead_proc_elim__Needed1_8, &transform_hlds__dead_proc_elim__Needed_12);
    }
#line 1006 "dead_proc_elim.m"
    {
#line 1006 "dead_proc_elim.m"
      mercury__map__keys_2_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_61_61, transform_hlds__dead_proc_elim__TypeCtorInfo_62_62, transform_hlds__dead_proc_elim__Needed_12, &transform_hlds__dead_proc_elim__Entities_13);
    }
#line 10661 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_63_63 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 1007 "dead_proc_elim.m"
    {
#line 1007 "dead_proc_elim.m"
      mercury__queue__init_1_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_63_63, &transform_hlds__dead_proc_elim__Queue1_14);
    }
#line 1008 "dead_proc_elim.m"
    {
#line 1008 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__NeededPreds0_15 = mercury__set_tree234__init_0_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_63_63);
    }
#line 10673 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeInfo_70_70 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[1];
#line 1009 "dead_proc_elim.m"
    {
#line 1009 "dead_proc_elim.m"
      mercury__list__foldl2_6_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_61_61, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[0], transform_hlds__dead_proc_elim__TypeInfo_70_70, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[7], transform_hlds__dead_proc_elim__Entities_13, ((MR_Box) (transform_hlds__dead_proc_elim__Queue1_14)), &transform_hlds__dead_proc_elim__conv3_Queue_16, ((MR_Box) (transform_hlds__dead_proc_elim__NeededPreds0_15)), &transform_hlds__dead_proc_elim__conv2_NeededPreds1_17);
    }
#line 1009 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__Queue_16 = ((MR_Word) transform_hlds__dead_proc_elim__conv3_Queue_16);
#line 1009 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__NeededPreds1_17 = ((MR_Word) transform_hlds__dead_proc_elim__conv2_NeededPreds1_17);
#line 1012 "dead_proc_elim.m"
    {
#line 1012 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_valid_predids_3_p_0(&transform_hlds__dead_proc_elim__PredIds_18, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_44, &transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_47_47);
    }
#line 1014 "dead_proc_elim.m"
    {
#line 1014 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__Preds0_19 = mercury__set_tree234__init_0_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_63_63);
    }
#line 1015 "dead_proc_elim.m"
    {
#line 1015 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__Names0_20 = mercury__set_tree234__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
    }
#line 1016 "dead_proc_elim.m"
    {
#line 1016 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__DeadInfo0_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1016 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo0_21, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_47_47));
#line 1016 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo0_21, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__Queue_16));
#line 1016 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo0_21, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__Preds0_19));
#line 1016 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo0_21, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__NeededPreds1_17));
#line 1016 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo0_21, 4) = ((MR_Box) (transform_hlds__dead_proc_elim__Names0_20));
#line 1016 "dead_proc_elim.m"
    }
#line 1018 "dead_proc_elim.m"
    {
#line 1018 "dead_proc_elim.m"
      mercury__list__foldl_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_63_63, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[8], transform_hlds__dead_proc_elim__PredIds_18, ((MR_Box) (transform_hlds__dead_proc_elim__DeadInfo0_21)), &transform_hlds__dead_proc_elim__conv5_DeadInfo1_22);
    }
#line 1018 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__DeadInfo1_22 = ((MR_Word) transform_hlds__dead_proc_elim__conv5_DeadInfo1_22);
#line 1019 "dead_proc_elim.m"
    {
#line 1019 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_p_0(transform_hlds__dead_proc_elim__DeadInfo1_22, &transform_hlds__dead_proc_elim__DeadInfo_23);
    }
#line 1020 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo_23, (MR_Integer) 0)));
#line 1020 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo_23, (MR_Integer) 1)));
#line 1020 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo_23, (MR_Integer) 2)));
#line 1020 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__NeededPreds2_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo_23, (MR_Integer) 3)));
#line 1020 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__DeadInfo_23, (MR_Integer) 4)));
#line 1026 "dead_proc_elim.m"
    {
#line 1026 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_type_spec_info_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_49_49, &transform_hlds__dead_proc_elim__TypeSpecInfo0_28);
    }
#line 1027 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__TypeSpecProcs0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeSpecInfo0_28, (MR_Integer) 0)));
#line 1027 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__TypeSpecForcePreds0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeSpecInfo0_28, (MR_Integer) 1)));
#line 1027 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__SpecMap0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeSpecInfo0_28, (MR_Integer) 2)));
#line 1027 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__PragmaMap0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeSpecInfo0_28, (MR_Integer) 3)));
#line 1029 "dead_proc_elim.m"
    {
#line 1029 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__NeededPredList2_33 = mercury__set_tree234__to_sorted_list_1_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_63_63, transform_hlds__dead_proc_elim__NeededPreds2_26);
    }
#line 1030 "dead_proc_elim.m"
    {
#line 1030 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1030 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_50_50, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_6[0]));
#line 1030 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_50_50, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_3));
#line 1030 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1030 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_50_50, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__SpecMap0_31));
#line 1030 "dead_proc_elim.m"
    }
#line 1030 "dead_proc_elim.m"
    {
#line 1030 "dead_proc_elim.m"
      mercury__list__foldl_4_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_63_63, transform_hlds__dead_proc_elim__TypeInfo_70_70, transform_hlds__dead_proc_elim__V_50_50, transform_hlds__dead_proc_elim__NeededPredList2_33, ((MR_Box) (transform_hlds__dead_proc_elim__NeededPreds2_26)), &transform_hlds__dead_proc_elim__conv7_NeededPreds_38);
    }
#line 1030 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__NeededPreds_38 = ((MR_Word) transform_hlds__dead_proc_elim__conv7_NeededPreds_38);
#line 1043 "dead_proc_elim.m"
    {
#line 1043 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1043 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_54_54, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_7[0]));
#line 1043 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_54_54, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_4));
#line 1043 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_54_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1043 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__V_54_54, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__NeededPreds_38));
#line 1043 "dead_proc_elim.m"
    }
#line 1043 "dead_proc_elim.m"
    {
#line 1043 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__TypeSpecForcePreds_39 = mercury__set__filter_2_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_63_63, transform_hlds__dead_proc_elim__V_54_54, transform_hlds__dead_proc_elim__TypeSpecForcePreds0_30);
    }
#line 1045 "dead_proc_elim.m"
    {
#line 1045 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__TypeSpecInfo_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1045 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeSpecInfo_40, 0) = ((MR_Box) (transform_hlds__dead_proc_elim__TypeSpecProcs0_29));
#line 1045 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeSpecInfo_40, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__TypeSpecForcePreds_39));
#line 1045 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeSpecInfo_40, 2) = ((MR_Box) (transform_hlds__dead_proc_elim__SpecMap0_31));
#line 1045 "dead_proc_elim.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dead_proc_elim__TypeSpecInfo_40, 3) = ((MR_Box) (transform_hlds__dead_proc_elim__PragmaMap0_32));
#line 1045 "dead_proc_elim.m"
    }
#line 1047 "dead_proc_elim.m"
    {
#line 1047 "dead_proc_elim.m"
      hlds__hlds_module__module_info_set_type_spec_info_3_p_0(transform_hlds__dead_proc_elim__TypeSpecInfo_40, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_49_49, &transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_55_55);
    }
#line 1049 "dead_proc_elim.m"
    {
#line 1049 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_55_55, &transform_hlds__dead_proc_elim__PredTable0_41);
    }
#line 1050 "dead_proc_elim.m"
    {
#line 1050 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_55_55, &transform_hlds__dead_proc_elim__PartialQualInfo_42);
    }
#line 1052 "dead_proc_elim.m"
    {
#line 1052 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__V_56_56 = mercury__set_tree234__to_sorted_list_1_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_63_63, transform_hlds__dead_proc_elim__NeededPreds_38);
    }
#line 1051 "dead_proc_elim.m"
    {
#line 1051 "dead_proc_elim.m"
      hlds__pred_table__predicate_table_restrict_4_p_0(transform_hlds__dead_proc_elim__PartialQualInfo_42, transform_hlds__dead_proc_elim__V_56_56, transform_hlds__dead_proc_elim__PredTable0_41, &transform_hlds__dead_proc_elim__PredTable_43);
    }
#line 1053 "dead_proc_elim.m"
    {
#line 1053 "dead_proc_elim.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__dead_proc_elim__PredTable_43, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_55_55, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_45);
#line 1053 "dead_proc_elim.m"
      return;
    }
#line 992 "dead_proc_elim.m"
  }
#line 74 "dead_proc_elim.m"
}

#line 293 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_analyze_3_p_0_2(
#line 293 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 293 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 293 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 293 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 293 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 293 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5)
#line 293 "dead_proc_elim.m"
{
#line 293 "dead_proc_elim.m"
  {
#line 293 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 293 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_Queue_11;
#line 293 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_Needed_13;

#line 293 "dead_proc_elim.m"
    {
#line 293 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_Queue_11, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_4), &transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_Needed_13);
    }
#line 293 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_Queue_11));
#line 293 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_5 = ((MR_Box) (transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_Needed_13));
#line 293 "dead_proc_elim.m"
  }
#line 293 "dead_proc_elim.m"
}

#line 291 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_analyze_3_p_0_1(
#line 291 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 291 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 291 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 291 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 291 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 291 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5)
#line 291 "dead_proc_elim.m"
{
#line 291 "dead_proc_elim.m"
  {
#line 291 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 291 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_21;
#line 291 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_23;

#line 291 "dead_proc_elim.m"
    {
#line 291 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_21, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_4), &transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_23);
    }
#line 291 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_21));
#line 291 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_5 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_23));
#line 291 "dead_proc_elim.m"
  }
#line 291 "dead_proc_elim.m"
}

#line 65 "dead_proc_elim.m"
void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_analyze_3_p_0(
#line 65 "dead_proc_elim.m"
  MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_6,
#line 65 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_7,
#line 65 "dead_proc_elim.m"
  MR_Word * transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_8)
#line 65 "dead_proc_elim.m"
{
#line 139 "dead_proc_elim.m"
  {
#line 139 "dead_proc_elim.m"
    MR_bool transform_hlds__dead_proc_elim__succeeded;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_35_54;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_24_73;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_26_75;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeInfo_32_81;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeInfo_33_82;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_34_83;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Examined0_18;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Queue0_19;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_14_21;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredIds_31;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredTable_32;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PragmaExports_33;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__InitProcs_34;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__FinalPreds_35;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfos_36;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Classes_37;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Instances_38;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_20_39;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_21_40;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_42;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_24_43;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_44;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_26_45;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_27_46;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_28_47;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_29_48;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_30_49;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_31_50;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_32_51;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__InstanceDefnsLists_64;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__InstanceDefns_65;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ClassDefns_66;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_68;
#line 139 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_69;
#line 291 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_19_68;
#line 291 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_20_69;
#line 293 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv7_Queue0_19;
#line 293 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_Needed_14_21;

#line 156 "dead_proc_elim.m"
    {
#line 156 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__Examined0_18 = mercury__set_tree234__init_0_f_0((MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0);
    }
#line 11023 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_35_54 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 168 "dead_proc_elim.m"
    {
#line 168 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_20_39 = mercury__queue__init_0_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_35_54);
    }
#line 169 "dead_proc_elim.m"
    {
#line 169 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_21_40 = mercury__map__init_0_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_35_54, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0);
    }
#line 170 "dead_proc_elim.m"
    {
#line 170 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_valid_predids_3_p_0(&transform_hlds__dead_proc_elim__PredIds_31, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_6, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_7);
    }
#line 171 "dead_proc_elim.m"
    {
#line 171 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(*transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_7, &transform_hlds__dead_proc_elim__PredTable_32);
    }
#line 172 "dead_proc_elim.m"
    {
#line 172 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_preds_6_p_0(transform_hlds__dead_proc_elim__PredIds_31, transform_hlds__dead_proc_elim__PredTable_32, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_20_39, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_42, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_21_40, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_24_43);
    }
#line 174 "dead_proc_elim.m"
    {
#line 174 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(*transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_7, &transform_hlds__dead_proc_elim__PragmaExports_33);
    }
#line 175 "dead_proc_elim.m"
    {
#line 175 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_p_0(transform_hlds__dead_proc_elim__PragmaExports_33, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_42, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_44, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_24_43, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_26_45);
    }
#line 177 "dead_proc_elim.m"
    {
#line 177 "dead_proc_elim.m"
      hlds__hlds_module__module_info_user_init_pred_procs_2_p_0(*transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_7, &transform_hlds__dead_proc_elim__InitProcs_34);
    }
#line 178 "dead_proc_elim.m"
    {
#line 178 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_p_0(transform_hlds__dead_proc_elim__InitProcs_34, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_44, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_27_46, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_26_45, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_28_47);
    }
#line 180 "dead_proc_elim.m"
    {
#line 180 "dead_proc_elim.m"
      hlds__hlds_module__module_info_user_final_pred_procs_2_p_0(*transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_7, &transform_hlds__dead_proc_elim__FinalPreds_35);
    }
#line 181 "dead_proc_elim.m"
    {
#line 181 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_p_0(transform_hlds__dead_proc_elim__FinalPreds_35, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_27_46, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_29_48, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_28_47, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_30_49);
    }
#line 183 "dead_proc_elim.m"
    {
#line 183 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_type_ctor_gen_infos_2_p_0(*transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_7, &transform_hlds__dead_proc_elim__TypeCtorGenInfos_36);
    }
#line 184 "dead_proc_elim.m"
    {
#line 184 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_type_ctor_infos_5_p_0(transform_hlds__dead_proc_elim__TypeCtorGenInfos_36, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_29_48, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_31_50, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_30_49, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_32_51);
    }
#line 186 "dead_proc_elim.m"
    {
#line 186 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(*transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_7, &transform_hlds__dead_proc_elim__Classes_37);
    }
#line 187 "dead_proc_elim.m"
    {
#line 187 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_instance_table_2_p_0(*transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_7, &transform_hlds__dead_proc_elim__Instances_38);
    }
#line 11100 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_24_73 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 289 "dead_proc_elim.m"
    {
#line 289 "dead_proc_elim.m"
      mercury__map__values_2_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_24_73, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[3], transform_hlds__dead_proc_elim__Instances_38, &transform_hlds__dead_proc_elim__InstanceDefnsLists_64);
    }
#line 11107 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_26_75 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
#line 290 "dead_proc_elim.m"
    {
#line 290 "dead_proc_elim.m"
      mercury__list__condense_2_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_26_75, transform_hlds__dead_proc_elim__InstanceDefnsLists_64, &transform_hlds__dead_proc_elim__InstanceDefns_65);
    }
#line 11114 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeInfo_32_81 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[4];
#line 11116 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeInfo_33_82 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[0];
#line 291 "dead_proc_elim.m"
    {
#line 291 "dead_proc_elim.m"
      mercury__list__foldl2_6_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_26_75, transform_hlds__dead_proc_elim__TypeInfo_32_81, transform_hlds__dead_proc_elim__TypeInfo_33_82, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[5], transform_hlds__dead_proc_elim__InstanceDefns_65, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_31_50)), &transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_19_68, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_32_51)), &transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_20_69);
    }
#line 291 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_68 = ((MR_Word) transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_19_68);
#line 291 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_69 = ((MR_Word) transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_20_69);
#line 11127 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_34_83 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0;
#line 292 "dead_proc_elim.m"
    {
#line 292 "dead_proc_elim.m"
      mercury__map__values_2_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_24_73, transform_hlds__dead_proc_elim__TypeCtorInfo_34_83, transform_hlds__dead_proc_elim__Classes_37, &transform_hlds__dead_proc_elim__ClassDefns_66);
    }
#line 293 "dead_proc_elim.m"
    {
#line 293 "dead_proc_elim.m"
      mercury__list__foldl2_6_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_34_83, transform_hlds__dead_proc_elim__TypeInfo_32_81, transform_hlds__dead_proc_elim__TypeInfo_33_82, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[6], transform_hlds__dead_proc_elim__ClassDefns_66, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_68)), &transform_hlds__dead_proc_elim__conv7_Queue0_19, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_69)), &transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_Needed_14_21);
    }
#line 293 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__Queue0_19 = ((MR_Word) transform_hlds__dead_proc_elim__conv7_Queue0_19);
#line 293 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_14_21 = ((MR_Word) transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_Needed_14_21);
#line 158 "dead_proc_elim.m"
    {
#line 158 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_examine_6_p_0(transform_hlds__dead_proc_elim__Queue0_19, transform_hlds__dead_proc_elim__Examined0_18, (MR_Integer) 0, *transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_7, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_14_21, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_8);
#line 158 "dead_proc_elim.m"
      return;
    }
#line 139 "dead_proc_elim.m"
  }
#line 65 "dead_proc_elim.m"
}

#line 293 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_elim_4_p_0_2(
#line 293 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 293 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 293 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 293 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 293 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 293 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5)
#line 293 "dead_proc_elim.m"
{
#line 293 "dead_proc_elim.m"
  {
#line 293 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 293 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_Queue_11;
#line 293 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_Needed_13;

#line 293 "dead_proc_elim.m"
    {
#line 293 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_Queue_11, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_4), &transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_Needed_13);
    }
#line 293 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv5_STATE_VARIABLE_Queue_11));
#line 293 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_5 = ((MR_Box) (transform_hlds__dead_proc_elim__conv4_STATE_VARIABLE_Needed_13));
#line 293 "dead_proc_elim.m"
  }
#line 293 "dead_proc_elim.m"
}

#line 291 "dead_proc_elim.m"
static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_elim_4_p_0_1(
#line 291 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__closure_arg,
#line 291 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_1,
#line 291 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_2,
#line 291 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_3,
#line 291 "dead_proc_elim.m"
  MR_Box transform_hlds__dead_proc_elim__wrapper_arg_4,
#line 291 "dead_proc_elim.m"
  MR_Box * transform_hlds__dead_proc_elim__wrapper_arg_5)
#line 291 "dead_proc_elim.m"
{
#line 291 "dead_proc_elim.m"
  {
#line 291 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__closure = transform_hlds__dead_proc_elim__closure_arg;
#line 291 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_21;
#line 291 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_23;

#line 291 "dead_proc_elim.m"
    {
#line 291 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0(((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_1), ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_2), &transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_21, ((MR_Word) transform_hlds__dead_proc_elim__wrapper_arg_4), &transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_23);
    }
#line 291 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_3 = ((MR_Box) (transform_hlds__dead_proc_elim__conv1_STATE_VARIABLE_Queue_21));
#line 291 "dead_proc_elim.m"
    *transform_hlds__dead_proc_elim__wrapper_arg_5 = ((MR_Box) (transform_hlds__dead_proc_elim__conv0_STATE_VARIABLE_Needed_23));
#line 291 "dead_proc_elim.m"
  }
#line 291 "dead_proc_elim.m"
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
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_35_56;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_24_75;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_26_77;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeInfo_32_83;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeInfo_33_84;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorInfo_34_85;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Needed_8;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_11_11;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Examined0_20;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Queue0_21;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_14_23;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredIds_33;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PredTable_34;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__PragmaExports_35;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__InitProcs_36;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__FinalPreds_37;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__TypeCtorGenInfos_38;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Classes_39;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__Instances_40;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_20_41;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_21_42;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_44;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_24_45;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_46;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_26_47;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_27_48;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_28_49;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_29_50;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_30_51;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_31_52;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_32_53;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__InstanceDefnsLists_66;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__InstanceDefns_67;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__ClassDefns_68;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_70;
#line 142 "dead_proc_elim.m"
    MR_Word transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_71;
#line 291 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_19_70;
#line 291 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_20_71;
#line 293 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv7_Queue0_21;
#line 293 "dead_proc_elim.m"
    MR_Box transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_Needed_14_23;

#line 156 "dead_proc_elim.m"
    {
#line 156 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__Examined0_20 = mercury__set_tree234__init_0_f_0((MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0);
    }
#line 11338 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_35_56 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 168 "dead_proc_elim.m"
    {
#line 168 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_20_41 = mercury__queue__init_0_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_35_56);
    }
#line 169 "dead_proc_elim.m"
    {
#line 169 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_21_42 = mercury__map__init_0_f_0(transform_hlds__dead_proc_elim__TypeCtorInfo_35_56, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0);
    }
#line 170 "dead_proc_elim.m"
    {
#line 170 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_valid_predids_3_p_0(&transform_hlds__dead_proc_elim__PredIds_33, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_0_9, &transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_11_11);
    }
#line 171 "dead_proc_elim.m"
    {
#line 171 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_11_11, &transform_hlds__dead_proc_elim__PredTable_34);
    }
#line 172 "dead_proc_elim.m"
    {
#line 172 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_preds_6_p_0(transform_hlds__dead_proc_elim__PredIds_33, transform_hlds__dead_proc_elim__PredTable_34, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_20_41, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_44, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_21_42, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_24_45);
    }
#line 174 "dead_proc_elim.m"
    {
#line 174 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_11_11, &transform_hlds__dead_proc_elim__PragmaExports_35);
    }
#line 175 "dead_proc_elim.m"
    {
#line 175 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_p_0(transform_hlds__dead_proc_elim__PragmaExports_35, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_23_44, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_46, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_24_45, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_26_47);
    }
#line 177 "dead_proc_elim.m"
    {
#line 177 "dead_proc_elim.m"
      hlds__hlds_module__module_info_user_init_pred_procs_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_11_11, &transform_hlds__dead_proc_elim__InitProcs_36);
    }
#line 178 "dead_proc_elim.m"
    {
#line 178 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_p_0(transform_hlds__dead_proc_elim__InitProcs_36, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_25_46, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_27_48, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_26_47, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_28_49);
    }
#line 180 "dead_proc_elim.m"
    {
#line 180 "dead_proc_elim.m"
      hlds__hlds_module__module_info_user_final_pred_procs_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_11_11, &transform_hlds__dead_proc_elim__FinalPreds_37);
    }
#line 181 "dead_proc_elim.m"
    {
#line 181 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_p_0(transform_hlds__dead_proc_elim__FinalPreds_37, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_27_48, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_29_50, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_28_49, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_30_51);
    }
#line 183 "dead_proc_elim.m"
    {
#line 183 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_type_ctor_gen_infos_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_11_11, &transform_hlds__dead_proc_elim__TypeCtorGenInfos_38);
    }
#line 184 "dead_proc_elim.m"
    {
#line 184 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_initialize_type_ctor_infos_5_p_0(transform_hlds__dead_proc_elim__TypeCtorGenInfos_38, transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_29_50, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_31_52, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_30_51, &transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_32_53);
    }
#line 186 "dead_proc_elim.m"
    {
#line 186 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_11_11, &transform_hlds__dead_proc_elim__Classes_39);
    }
#line 187 "dead_proc_elim.m"
    {
#line 187 "dead_proc_elim.m"
      hlds__hlds_module__module_info_get_instance_table_2_p_0(transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_11_11, &transform_hlds__dead_proc_elim__Instances_40);
    }
#line 11415 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_24_75 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 289 "dead_proc_elim.m"
    {
#line 289 "dead_proc_elim.m"
      mercury__map__values_2_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_24_75, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[3], transform_hlds__dead_proc_elim__Instances_40, &transform_hlds__dead_proc_elim__InstanceDefnsLists_66);
    }
#line 11422 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_26_77 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
#line 290 "dead_proc_elim.m"
    {
#line 290 "dead_proc_elim.m"
      mercury__list__condense_2_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_26_77, transform_hlds__dead_proc_elim__InstanceDefnsLists_66, &transform_hlds__dead_proc_elim__InstanceDefns_67);
    }
#line 11429 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeInfo_32_83 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_1[4];
#line 11431 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeInfo_33_84 = (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[0];
#line 291 "dead_proc_elim.m"
    {
#line 291 "dead_proc_elim.m"
      mercury__list__foldl2_6_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_26_77, transform_hlds__dead_proc_elim__TypeInfo_32_83, transform_hlds__dead_proc_elim__TypeInfo_33_84, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[3], transform_hlds__dead_proc_elim__InstanceDefns_67, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_31_52)), &transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_19_70, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_32_53)), &transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_20_71);
    }
#line 291 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_70 = ((MR_Word) transform_hlds__dead_proc_elim__conv3_STATE_VARIABLE_Queue_19_70);
#line 291 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_71 = ((MR_Word) transform_hlds__dead_proc_elim__conv2_STATE_VARIABLE_Needed_20_71);
#line 11442 "transform_hlds.dead_proc_elim.c"
    transform_hlds__dead_proc_elim__TypeCtorInfo_34_85 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0;
#line 292 "dead_proc_elim.m"
    {
#line 292 "dead_proc_elim.m"
      mercury__map__values_2_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_24_75, transform_hlds__dead_proc_elim__TypeCtorInfo_34_85, transform_hlds__dead_proc_elim__Classes_39, &transform_hlds__dead_proc_elim__ClassDefns_68);
    }
#line 293 "dead_proc_elim.m"
    {
#line 293 "dead_proc_elim.m"
      mercury__list__foldl2_6_p_0(transform_hlds__dead_proc_elim__TypeCtorInfo_34_85, transform_hlds__dead_proc_elim__TypeInfo_32_83, transform_hlds__dead_proc_elim__TypeInfo_33_84, (MR_Word) &transform_hlds__dead_proc_elim_scalar_common_2[4], transform_hlds__dead_proc_elim__ClassDefns_68, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Queue_19_70)), &transform_hlds__dead_proc_elim__conv7_Queue0_21, ((MR_Box) (transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_20_71)), &transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_Needed_14_23);
    }
#line 293 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__Queue0_21 = ((MR_Word) transform_hlds__dead_proc_elim__conv7_Queue0_21);
#line 293 "dead_proc_elim.m"
    transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_14_23 = ((MR_Word) transform_hlds__dead_proc_elim__conv6_STATE_VARIABLE_Needed_14_23);
#line 158 "dead_proc_elim.m"
    {
#line 158 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_examine_6_p_0(transform_hlds__dead_proc_elim__Queue0_21, transform_hlds__dead_proc_elim__Examined0_20, (MR_Integer) 1, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_11_11, transform_hlds__dead_proc_elim__STATE_VARIABLE_Needed_14_23, &transform_hlds__dead_proc_elim__Needed_8);
    }
#line 144 "dead_proc_elim.m"
    {
#line 144 "dead_proc_elim.m"
      transform_hlds__dead_proc_elim__dead_proc_eliminate_5_p_0(transform_hlds__dead_proc_elim__ElimOptImported_5, transform_hlds__dead_proc_elim__Needed_8, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_11_11, transform_hlds__dead_proc_elim__STATE_VARIABLE_ModuleInfo_10, transform_hlds__dead_proc_elim__Specs_7);
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
