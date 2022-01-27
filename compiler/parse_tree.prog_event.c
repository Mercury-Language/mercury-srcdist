/*
** Automatically generated from `prog_event.m'
** by the Mercury compiler,
** version rotd-2014-10-24
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


/* :- module parse_tree.prog_event. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_event__init
ENDINIT
*/

#include "parse_tree.prog_event.mih"


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
#include "libs.globals.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 135 "parse_tree.prog_event.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_event__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 138 "parse_tree.prog_event.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_event__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__prog_event__type_ctor_info_attr_info_0;

#line 141 "parse_tree.prog_event.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_event__digraph__ti_digraph_1builtin__type_ctor_info_string_0;

#line 144 "parse_tree.prog_event.c"
static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_attr_info_0_0[4];

#line 147 "parse_tree.prog_event.c"
static const MR_ConstString parse_tree__prog_event__parse_tree__prog_event__field_names_attr_info_0_0[4];

#line 150 "parse_tree.prog_event.c"
static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_attr_info_0_0;

#line 153 "parse_tree.prog_event.c"
static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_attr_info_0_0[1];

#line 156 "parse_tree.prog_event.c"
static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_attr_info_0[1];

#line 159 "parse_tree.prog_event.c"
static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_attr_info_0[1];

#line 162 "parse_tree.prog_event.c"
static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_attr_info_0[1];

#line 165 "parse_tree.prog_event.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_event__digraph__ti_digraph_key_1builtin__type_ctor_info_string_0;

#line 168 "parse_tree.prog_event.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_event__bimap__ti_bimap_2builtin__type_ctor_info_string_0digraph__ti_digraph_key_1builtin__type_ctor_info_string_0;

#line 171 "parse_tree.prog_event.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_event__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_event__type_ctor_info_attr_info_0;

#line 174 "parse_tree.prog_event.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_event__tree234__ti_tree234_2builtin__type_ctor_info_int_0parse_tree__prog_event__type_ctor_info_attr_info_0;

#line 177 "parse_tree.prog_event.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_event__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 180 "parse_tree.prog_event.c"
static const MR_EnumFunctorDesc parse_tree__prog_event__parse_tree__prog_event__enum_functor_desc_event_attr_function_kind_0_0;

#line 183 "parse_tree.prog_event.c"
static const MR_EnumFunctorDesc parse_tree__prog_event__parse_tree__prog_event__enum_functor_desc_event_attr_function_kind_0_1;

#line 186 "parse_tree.prog_event.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__enum_value_ordered_event_attr_function_kind_0[2];

#line 189 "parse_tree.prog_event.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__enum_name_ordered_event_attr_function_kind_0[2];

#line 192 "parse_tree.prog_event.c"
static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_function_kind_0[2];

#line 195 "parse_tree.prog_event.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_event__list__ti_list_1builtin__type_ctor_info_string_0;

#line 198 "parse_tree.prog_event.c"
static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_synth_call_term_0_0[2];

#line 201 "parse_tree.prog_event.c"
static const MR_ConstString parse_tree__prog_event__parse_tree__prog_event__field_names_event_attr_synth_call_term_0_0[2];

#line 204 "parse_tree.prog_event.c"
static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_synth_call_term_0_0;

#line 207 "parse_tree.prog_event.c"
static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_synth_call_term_0_0[1];

#line 210 "parse_tree.prog_event.c"
static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_attr_synth_call_term_0[1];

#line 213 "parse_tree.prog_event.c"
static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_attr_synth_call_term_0[1];

#line 216 "parse_tree.prog_event.c"
static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_synth_call_term_0[1];

#line 219 "parse_tree.prog_event.c"
static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_term_0_0[3];

#line 222 "parse_tree.prog_event.c"
static const MR_ConstString parse_tree__prog_event__parse_tree__prog_event__field_names_event_attr_term_0_0[3];

#line 225 "parse_tree.prog_event.c"
static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_term_0_0;

#line 228 "parse_tree.prog_event.c"
static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_term_0_0[1];

#line 231 "parse_tree.prog_event.c"
static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_attr_term_0[1];

#line 234 "parse_tree.prog_event.c"
static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_attr_term_0[1];

#line 237 "parse_tree.prog_event.c"
static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_term_0[1];

#line 240 "parse_tree.prog_event.c"
static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_type_0_0[1];

#line 243 "parse_tree.prog_event.c"
static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_0_0;

#line 246 "parse_tree.prog_event.c"
static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_type_0_1[2];

#line 249 "parse_tree.prog_event.c"
static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_0_1;

#line 252 "parse_tree.prog_event.c"
static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_type_0_2[1];

#line 255 "parse_tree.prog_event.c"
static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_0_2;

#line 258 "parse_tree.prog_event.c"
static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_type_0_0[1];

#line 261 "parse_tree.prog_event.c"
static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_type_0_1[1];

#line 264 "parse_tree.prog_event.c"
static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_type_0_2[1];

#line 267 "parse_tree.prog_event.c"
static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_attr_type_0[3];

#line 270 "parse_tree.prog_event.c"
static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_attr_type_0[3];

#line 273 "parse_tree.prog_event.c"
static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_type_0[3];

#line 276 "parse_tree.prog_event.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_event__list__ti_list_1parse_tree__prog_event__type_ctor_info_event_attr_type_term_0;

#line 279 "parse_tree.prog_event.c"
static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_type_term_0_0[2];

#line 282 "parse_tree.prog_event.c"
static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_term_0_0;

#line 285 "parse_tree.prog_event.c"
static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_type_term_0_0[1];

#line 288 "parse_tree.prog_event.c"
static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_attr_type_term_0[1];

#line 291 "parse_tree.prog_event.c"
static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_attr_type_term_0[1];

#line 294 "parse_tree.prog_event.c"
static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_type_term_0[1];

#line 297 "parse_tree.prog_event.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_event__list__ti_list_1parse_tree__prog_event__type_ctor_info_event_spec_term_0;

#line 300 "parse_tree.prog_event.c"
static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_set_spec_0_0[2];

#line 303 "parse_tree.prog_event.c"
static const MR_ConstString parse_tree__prog_event__parse_tree__prog_event__field_names_event_set_spec_0_0[2];

#line 306 "parse_tree.prog_event.c"
static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_set_spec_0_0;

#line 309 "parse_tree.prog_event.c"
static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_set_spec_0_0[1];

#line 312 "parse_tree.prog_event.c"
static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_set_spec_0[1];

#line 315 "parse_tree.prog_event.c"
static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_set_spec_0[1];

#line 318 "parse_tree.prog_event.c"
static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_set_spec_0[1];

#line 321 "parse_tree.prog_event.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_event__list__ti_list_1parse_tree__prog_event__type_ctor_info_event_attr_term_0;

#line 324 "parse_tree.prog_event.c"
static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_spec_term_0_0[4];

#line 327 "parse_tree.prog_event.c"
static const MR_ConstString parse_tree__prog_event__parse_tree__prog_event__field_names_event_spec_term_0_0[4];

#line 330 "parse_tree.prog_event.c"
static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_spec_term_0_0;

#line 333 "parse_tree.prog_event.c"
static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_spec_term_0_0[1];

#line 336 "parse_tree.prog_event.c"
static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_spec_term_0[1];

#line 339 "parse_tree.prog_event.c"
static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_spec_term_0[1];

#line 342 "parse_tree.prog_event.c"
static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_spec_term_0[1];

#line 345 "parse_tree.prog_event.c"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_dep_rel_0_0_10001(
#line 348 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 350 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2);

#line 353 "parse_tree.prog_event.c"
static void MR_CALL 
parse_tree__prog_event____Compare____attr_dep_rel_0_0_10001(
#line 356 "parse_tree.prog_event.c"
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
#line 358 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2,
#line 360 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_3);

#line 363 "parse_tree.prog_event.c"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_info_0_0_10001(
#line 366 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 368 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2);

#line 371 "parse_tree.prog_event.c"
static void MR_CALL 
parse_tree__prog_event____Compare____attr_info_0_0_10001(
#line 374 "parse_tree.prog_event.c"
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
#line 376 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2,
#line 378 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_3);

#line 381 "parse_tree.prog_event.c"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_key_0_0_10001(
#line 384 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 386 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2);

#line 389 "parse_tree.prog_event.c"
static void MR_CALL 
parse_tree__prog_event____Compare____attr_key_0_0_10001(
#line 392 "parse_tree.prog_event.c"
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
#line 394 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2,
#line 396 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_3);

#line 399 "parse_tree.prog_event.c"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_key_map_0_0_10001(
#line 402 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 404 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2);

#line 407 "parse_tree.prog_event.c"
static void MR_CALL 
parse_tree__prog_event____Compare____attr_key_map_0_0_10001(
#line 410 "parse_tree.prog_event.c"
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
#line 412 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2,
#line 414 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_3);

#line 417 "parse_tree.prog_event.c"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_name_map_0_0_10001(
#line 420 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 422 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2);

#line 425 "parse_tree.prog_event.c"
static void MR_CALL 
parse_tree__prog_event____Compare____attr_name_map_0_0_10001(
#line 428 "parse_tree.prog_event.c"
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
#line 430 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2,
#line 432 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_3);

#line 435 "parse_tree.prog_event.c"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_num_map_0_0_10001(
#line 438 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 440 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2);

#line 443 "parse_tree.prog_event.c"
static void MR_CALL 
parse_tree__prog_event____Compare____attr_num_map_0_0_10001(
#line 446 "parse_tree.prog_event.c"
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
#line 448 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2,
#line 450 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_3);

#line 453 "parse_tree.prog_event.c"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_type_map_0_0_10001(
#line 456 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 458 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2);

#line 461 "parse_tree.prog_event.c"
static void MR_CALL 
parse_tree__prog_event____Compare____attr_type_map_0_0_10001(
#line 464 "parse_tree.prog_event.c"
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
#line 466 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2,
#line 468 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_3);

#line 471 "parse_tree.prog_event.c"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_function_kind_0_0_10001(
#line 474 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 476 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2);

#line 479 "parse_tree.prog_event.c"
static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_function_kind_0_0_10001(
#line 482 "parse_tree.prog_event.c"
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
#line 484 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2,
#line 486 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_3);

#line 489 "parse_tree.prog_event.c"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_synth_call_term_0_0_10001(
#line 492 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 494 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2);

#line 497 "parse_tree.prog_event.c"
static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_synth_call_term_0_0_10001(
#line 500 "parse_tree.prog_event.c"
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
#line 502 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2,
#line 504 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_3);

#line 507 "parse_tree.prog_event.c"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_term_0_0_10001(
#line 510 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 512 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2);

#line 515 "parse_tree.prog_event.c"
static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_term_0_0_10001(
#line 518 "parse_tree.prog_event.c"
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
#line 520 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2,
#line 522 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_3);

#line 525 "parse_tree.prog_event.c"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_type_0_0_10001(
#line 528 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 530 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2);

#line 533 "parse_tree.prog_event.c"
static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_type_0_0_10001(
#line 536 "parse_tree.prog_event.c"
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
#line 538 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2,
#line 540 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_3);

#line 543 "parse_tree.prog_event.c"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_type_term_0_0_10001(
#line 546 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 548 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2);

#line 551 "parse_tree.prog_event.c"
static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_type_term_0_0_10001(
#line 554 "parse_tree.prog_event.c"
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
#line 556 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2,
#line 558 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_3);

#line 561 "parse_tree.prog_event.c"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_set_spec_0_0_10001(
#line 564 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 566 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2);

#line 569 "parse_tree.prog_event.c"
static void MR_CALL 
parse_tree__prog_event____Compare____event_set_spec_0_0_10001(
#line 572 "parse_tree.prog_event.c"
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
#line 574 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2,
#line 576 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_3);

#line 579 "parse_tree.prog_event.c"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_spec_term_0_0_10001(
#line 582 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 584 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2);

#line 587 "parse_tree.prog_event.c"
static void MR_CALL 
parse_tree__prog_event____Compare____event_spec_term_0_0_10001(
#line 590 "parse_tree.prog_event.c"
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
#line 592 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2,
#line 594 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_3);

#line 805 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event__IntroducedFrom__pred__describe_attr_type__805__1_2_p_0(
#line 805 "prog_event.m"
  MR_Word parse_tree__prog_event__Kind_7,
#line 805 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_32);

#line 643 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event__IntroducedFrom__pred__convert_terms_to_attrs__643__1_3_p_0(
#line 643 "prog_event.m"
  MR_Word parse_tree__prog_event__AttrNameMap_3,
#line 643 "prog_event.m"
  MR_String parse_tree__prog_event__HeadVar__2_113,
#line 643 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__3_114);

#line 531 "prog_event.m"
static MR_Word MR_CALL 
parse_tree__prog_event__IntroducedFrom__func__build_dep_map__531__1_2_f_0(
#line 531 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6,
#line 531 "prog_event.m"
  MR_String parse_tree__prog_event__HeadVar__2_142);

#line 290 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event____Compare____event_spec_term_0_0(
#line 290 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
#line 290 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 290 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__3_3);

#line 290 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_spec_term_0_0(
#line 290 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__1_1,
#line 290 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2);

#line 284 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event____Compare____event_set_spec_0_0(
#line 284 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
#line 284 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 284 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__3_3);

#line 284 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_set_spec_0_0(
#line 284 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__1_1,
#line 284 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2);

#line 327 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_type_term_0_0(
#line 327 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
#line 327 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 327 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__3_3);

#line 327 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_type_term_0_0(
#line 327 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__1_1,
#line 327 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2);

#line 315 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_type_0_0(
#line 315 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
#line 315 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 315 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__3_3);

#line 315 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_type_0_0(
#line 315 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__1_1,
#line 315 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2);

#line 298 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_term_0_0(
#line 298 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
#line 298 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 298 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__3_3);

#line 298 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_term_0_0(
#line 298 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__1_1,
#line 298 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2);

#line 305 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_synth_call_term_0_0(
#line 305 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
#line 305 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 305 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__3_3);

#line 305 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_synth_call_term_0_0(
#line 305 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__1_1,
#line 305 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2);

#line 311 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_function_kind_0_0(
#line 311 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
#line 311 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 311 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__3_3);

#line 311 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_function_kind_0_0(
#line 311 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_1,
#line 311 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2);

#line 445 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event____Compare____attr_type_map_0_0(
#line 445 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
#line 445 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 445 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__3_3);

#line 445 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_type_map_0_0(
#line 445 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__1_1,
#line 445 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2);

#line 439 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event____Compare____attr_num_map_0_0(
#line 439 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
#line 439 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 439 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__3_3);

#line 439 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_num_map_0_0(
#line 439 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__1_1,
#line 439 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2);

#line 442 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event____Compare____attr_name_map_0_0(
#line 442 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
#line 442 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 442 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__3_3);

#line 442 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_name_map_0_0(
#line 442 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__1_1,
#line 442 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2);

#line 454 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event____Compare____attr_key_map_0_0(
#line 454 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
#line 454 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 454 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__3_3);

#line 454 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_key_map_0_0(
#line 454 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__1_1,
#line 454 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2);

#line 453 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event____Compare____attr_key_0_0(
#line 453 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
#line 453 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 453 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__3_3);

#line 453 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_key_0_0(
#line 453 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__1_1,
#line 453 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2);

#line 428 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event____Compare____attr_info_0_0(
#line 428 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
#line 428 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 428 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__3_3);

#line 428 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_info_0_0(
#line 428 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__1_1,
#line 428 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2);

#line 452 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event____Compare____attr_dep_rel_0_0(
#line 452 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
#line 452 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 452 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__3_3);

#line 452 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_dep_rel_0_0(
#line 452 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__1_1,
#line 452 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2);

#line 859 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event__project_event_arg_mode_2_p_0(
#line 859 "prog_event.m"
  MR_Word parse_tree__prog_event__Attribute_3,
#line 859 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__2_2);

#line 854 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event__project_event_arg_type_2_p_0(
#line 854 "prog_event.m"
  MR_Word parse_tree__prog_event__Attribute_3,
#line 854 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__2_2);

#line 812 "prog_event.m"
static MR_Box MR_CALL 
parse_tree__prog_event__describe_attr_type_1_f_0_2(
#line 812 "prog_event.m"
  MR_Box parse_tree__prog_event__closure_arg,
#line 812 "prog_event.m"
  MR_Box parse_tree__prog_event__wrapper_arg_1);

#line 805 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event__describe_attr_type_1_f_0_1(
#line 805 "prog_event.m"
  MR_Box parse_tree__prog_event__closure_arg);

#line 800 "prog_event.m"
static MR_String MR_CALL 
parse_tree__prog_event__describe_attr_type_1_f_0(
#line 800 "prog_event.m"
  MR_Word parse_tree__prog_event__Type_3);

#line 782 "prog_event.m"
static MR_String MR_CALL 
parse_tree__prog_event__describe_event_attr_1_f_0(
#line 782 "prog_event.m"
  MR_Word parse_tree__prog_event__Attr_3);

#line 779 "prog_event.m"
static MR_Box MR_CALL 
parse_tree__prog_event__describe_event_spec_1_f_0_1(
#line 779 "prog_event.m"
  MR_Box parse_tree__prog_event__closure_arg,
#line 779 "prog_event.m"
  MR_Box parse_tree__prog_event__wrapper_arg_1);

#line 774 "prog_event.m"
static MR_String MR_CALL 
parse_tree__prog_event__describe_event_spec_1_f_0(
#line 774 "prog_event.m"
  MR_Word parse_tree__prog_event__Spec_3);

#line 768 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event__compare_event_specs_by_num_3_p_0(
#line 768 "prog_event.m"
  MR_Word parse_tree__prog_event__SpecA_4,
#line 768 "prog_event.m"
  MR_Word parse_tree__prog_event__SpecB_5,
#line 768 "prog_event.m"
  MR_Word * parse_tree__prog_event__Result_6);

#line 761 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event__update_max_num_attr_3_p_0(
#line 761 "prog_event.m"
  MR_Word parse_tree__prog_event__Spec_4,
#line 761 "prog_event.m"
  MR_Integer parse_tree__prog_event__STATE_VARIABLE_MaxNumAttr_0_8,
#line 761 "prog_event.m"
  MR_Integer * parse_tree__prog_event__STATE_VARIABLE_MaxNumAttr_9);

#line 734 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_p_0(
#line 734 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__1_1,
#line 734 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 734 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__3_3,
#line 734 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_0_4,
#line 734 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_5,
#line 734 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__6_6);

#line 696 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event__compute_prev_synth_attr_order_6_p_0(
#line 696 "prog_event.m"
  MR_Word parse_tree__prog_event__AttrNameMap_7,
#line 696 "prog_event.m"
  MR_String parse_tree__prog_event__AttrName_8,
#line 696 "prog_event.m"
  MR_Word parse_tree__prog_event__Ancestors_9,
#line 696 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_0_23,
#line 696 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_24,
#line 696 "prog_event.m"
  MR_Word * parse_tree__prog_event__PrevSynthOrder_11);

#line 690 "prog_event.m"
static MR_Box MR_CALL 
parse_tree__prog_event__convert_term_to_type_1_f_0_1(
#line 690 "prog_event.m"
  MR_Box parse_tree__prog_event__closure_arg,
#line 690 "prog_event.m"
  MR_Box parse_tree__prog_event__wrapper_arg_1);

#line 679 "prog_event.m"
static MR_Word MR_CALL 
parse_tree__prog_event__convert_term_to_type_1_f_0(
#line 679 "prog_event.m"
  MR_Word parse_tree__prog_event__Term_3);

#line 645 "prog_event.m"
static MR_Box MR_CALL 
parse_tree__prog_event__convert_terms_to_attrs_10_p_0_2(
#line 645 "prog_event.m"
  MR_Box parse_tree__prog_event__closure_arg,
#line 645 "prog_event.m"
  MR_Box parse_tree__prog_event__wrapper_arg_1);

#line 643 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event__convert_terms_to_attrs_10_p_0_1(
#line 643 "prog_event.m"
  MR_Box parse_tree__prog_event__closure_arg,
#line 643 "prog_event.m"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 643 "prog_event.m"
  MR_Box * parse_tree__prog_event__wrapper_arg_2);

#line 621 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event__convert_terms_to_attrs_10_p_0(
#line 621 "prog_event.m"
  MR_String parse_tree__prog_event__EventName_1,
#line 621 "prog_event.m"
  MR_String parse_tree__prog_event__FileName_2,
#line 621 "prog_event.m"
  MR_Word parse_tree__prog_event__AttrNameMap_3,
#line 621 "prog_event.m"
  MR_Word parse_tree__prog_event__AttrTypeMap_4,
#line 621 "prog_event.m"
  MR_Integer parse_tree__prog_event__AttrNum_5,
#line 621 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__6_6,
#line 621 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_RevAttrs_0_7,
#line 621 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_RevAttrs_8,
#line 621 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_9,
#line 621 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_10);

#line 595 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event__record_arg_dependencies_11_p_0(
#line 595 "prog_event.m"
  MR_String parse_tree__prog_event__EventName_1,
#line 595 "prog_event.m"
  MR_String parse_tree__prog_event__FileName_2,
#line 595 "prog_event.m"
  MR_Integer parse_tree__prog_event__AttrLineNumber_3,
#line 595 "prog_event.m"
  MR_Word parse_tree__prog_event__KeyMap_4,
#line 595 "prog_event.m"
  MR_String parse_tree__prog_event__SynthAttrName_5,
#line 595 "prog_event.m"
  MR_Word parse_tree__prog_event__SynthAttrKey_6,
#line 595 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__7_7,
#line 595 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_DepRel_0_8,
#line 595 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_DepRel_9,
#line 595 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10,
#line 595 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_11);

#line 531 "prog_event.m"
static MR_Box MR_CALL 
parse_tree__prog_event__build_dep_map_11_p_0_1(
#line 531 "prog_event.m"
  MR_Box parse_tree__prog_event__closure_arg,
#line 531 "prog_event.m"
  MR_Box parse_tree__prog_event__wrapper_arg_1);

#line 507 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event__build_dep_map_11_p_0(
#line 507 "prog_event.m"
  MR_String parse_tree__prog_event__EventName_1,
#line 507 "prog_event.m"
  MR_String parse_tree__prog_event__FileName_2,
#line 507 "prog_event.m"
  MR_Word parse_tree__prog_event__AttrNameMap_3,
#line 507 "prog_event.m"
  MR_Word parse_tree__prog_event__KeyMap_4,
#line 507 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__5_5,
#line 507 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6,
#line 507 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_7,
#line 507 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_DepRel_0_8,
#line 507 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_DepRel_9,
#line 507 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10,
#line 507 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_11);

#line 459 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event__build_plain_type_map_17_p_0(
#line 459 "prog_event.m"
  MR_String parse_tree__prog_event__EventName_1,
#line 459 "prog_event.m"
  MR_String parse_tree__prog_event__FileName_2,
#line 459 "prog_event.m"
  MR_Integer parse_tree__prog_event__EventLineNumber_3,
#line 459 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__4_4,
#line 459 "prog_event.m"
  MR_Integer parse_tree__prog_event__AttrNum_5,
#line 459 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrNumMap_0_6,
#line 459 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_AttrNumMap_7,
#line 459 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrNameMap_0_8,
#line 459 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_AttrNameMap_9,
#line 459 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_10,
#line 459 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_11,
#line 459 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_KeyMap_0_12,
#line 459 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_KeyMap_13,
#line 459 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_DepRel_0_14,
#line 459 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_DepRel_15,
#line 459 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_16,
#line 459 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_17);

#line 436 "prog_event.m"
static MR_Integer MR_CALL 
parse_tree__prog_event__attr_info_number_1_f_0(
#line 436 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__1_1);

#line 411 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event__keep_only_synth_attr_nums_3_p_0(
#line 411 "prog_event.m"
  MR_Word parse_tree__prog_event__AttrMap_1,
#line 411 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 411 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__3_3);

#line 343 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event__convert_term_to_spec_map_6_p_0(
#line 343 "prog_event.m"
  MR_String parse_tree__prog_event__FileName_7,
#line 343 "prog_event.m"
  MR_Word parse_tree__prog_event__SpecTerm_8,
#line 343 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_0_34,
#line 343 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_35,
#line 343 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_36,
#line 343 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_37);

#line 333 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event__convert_list_to_spec_map_6_p_0(
#line 333 "prog_event.m"
  MR_String parse_tree__prog_event__FileName_1,
#line 333 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 333 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_0_3,
#line 333 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_4,
#line 333 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_5,
#line 333 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_6);

#line 146 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event__read_specs_file_5_p_0(
#line 146 "prog_event.m"
  MR_String parse_tree__prog_event__SpecsFileName_1,
#line 146 "prog_event.m"
  MR_String parse_tree__prog_event__TermFileName_2,
#line 146 "prog_event.m"
  MR_String * parse_tree__prog_event__Problem_3);

#line 847 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event__event_arg_modes_3_p_0_1(
#line 847 "prog_event.m"
  MR_Box parse_tree__prog_event__closure_arg,
#line 847 "prog_event.m"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 847 "prog_event.m"
  MR_Box * parse_tree__prog_event__wrapper_arg_2);

#line 843 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event__event_arg_types_3_p_0_1(
#line 843 "prog_event.m"
  MR_Box parse_tree__prog_event__closure_arg,
#line 843 "prog_event.m"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 843 "prog_event.m"
  MR_Box * parse_tree__prog_event__wrapper_arg_2);

#line 757 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event__derive_event_set_data_1_f_0_3(
#line 757 "prog_event.m"
  MR_Box parse_tree__prog_event__closure_arg,
#line 757 "prog_event.m"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 757 "prog_event.m"
  MR_Box parse_tree__prog_event__wrapper_arg_2,
#line 757 "prog_event.m"
  MR_Box * parse_tree__prog_event__wrapper_arg_3);

#line 754 "prog_event.m"
static MR_Box MR_CALL 
parse_tree__prog_event__derive_event_set_data_1_f_0_2(
#line 754 "prog_event.m"
  MR_Box parse_tree__prog_event__closure_arg,
#line 754 "prog_event.m"
  MR_Box parse_tree__prog_event__wrapper_arg_1);

#line 753 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event__derive_event_set_data_1_f_0_1(
#line 753 "prog_event.m"
  MR_Box parse_tree__prog_event__closure_arg,
#line 753 "prog_event.m"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 753 "prog_event.m"
  MR_Box parse_tree__prog_event__wrapper_arg_2,
#line 753 "prog_event.m"
  MR_Box * parse_tree__prog_event__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_event_scalar_common_1[34][2];

static /* final */ const MR_Box parse_tree__prog_event_scalar_common_2[14][3];

static /* final */ const MR_Box parse_tree__prog_event_scalar_common_3[2][1];

static /* final */ const MR_Box parse_tree__prog_event_scalar_common_4[1][4];

static /* final */ const MR_Box parse_tree__prog_event_scalar_common_5[4][6];

static /* final */ const MR_Box parse_tree__prog_event_scalar_common_6[8][5];




static /* final */ const MR_Box parse_tree__prog_event_scalar_common_1[34][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_term_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_spec_term_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_term_0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "eof in term specification file"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[6])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The previous event specification is here."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[6])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "by synthesized attributes."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[6])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is assigned inconsistent types"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in its synthesis."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[6])))
  },
  /* row 19 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_3[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_4[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_2[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Circular dependency among"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "the synthesized attributes of event"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Duplicate event specification for event"))
  },
  /* row 25 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Event"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "has more than one attribute named"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Attribute"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "cannot be synthesized"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "by non-function attribute"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "of event"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "uses nonexistent attribute"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "does not use the function attribute"))
  },
};

static /* final */ const MR_Box parse_tree__prog_event_scalar_common_2[14][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__bimap__bimap__type_ctor_info_bimap_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_event_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[20])))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_5[0])),
    ((MR_Box) (parse_tree__prog_event__derive_event_set_data_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_6[0])),
    ((MR_Box) (parse_tree__prog_event__derive_event_set_data_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_5[1])),
    ((MR_Box) (parse_tree__prog_event__derive_event_set_data_1_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_6[1])),
    ((MR_Box) (parse_tree__prog_event__event_arg_types_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_6[2])),
    ((MR_Box) (parse_tree__prog_event__event_arg_modes_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_6[3])),
    ((MR_Box) (parse_tree__prog_event__convert_terms_to_attrs_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_6[4])),
    ((MR_Box) (parse_tree__prog_event__convert_term_to_type_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_6[5])),
    ((MR_Box) (parse_tree__prog_event__describe_event_spec_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_6[7])),
    ((MR_Box) (parse_tree__prog_event__describe_attr_type_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_event_scalar_common_3[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[8])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[12])))
  },
};

static /* final */ const MR_Box parse_tree__prog_event_scalar_common_4[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[19])))
  },
};

static /* final */ const MR_Box parse_tree__prog_event_scalar_common_5[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_event__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_event__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__prog_event__type_ctor_info_attr_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_event_scalar_common_6[8][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_attribute_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_attribute_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_term_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_attribute_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "parse_tree.prog_event.mh"
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
#line 180 "prog_event.m"


MR_String
read_specs_file_2(MR_AllocSiteInfoPtr alloc_id, MR_String specs_file_name,
    MR_String term_file_name)
{
    int         spec_fd;
    MR_String   problem;
    char        errbuf[MR_STRERROR_BUF_SIZE];

    /*
    ** There are race conditions between opening the file, stat'ing the file
    ** and reading the contents of the file, but the Unix API doesn't really
    ** allow these race conditions to be resolved.
    */

    spec_fd = open(specs_file_name, O_RDONLY);
    if (spec_fd < 0) {
        problem = MR_make_string(alloc_id, "could not open %s: %s",
            specs_file_name, MR_strerror(errno, errbuf, sizeof(errbuf)));
    } else {
        problem = read_specs_file_3(alloc_id, specs_file_name,
            term_file_name, spec_fd);
        (void) close(spec_fd);
    }
    return problem;
}

MR_String
read_specs_file_3(MR_AllocSiteInfoPtr alloc_id, MR_String specs_file_name,
    MR_String term_file_name, int spec_fd)
{
    struct stat stat_buf;
    MR_String   problem;

    if (fstat(spec_fd, &stat_buf) != 0) {
        problem = MR_make_string(alloc_id, "could not stat %s",
            specs_file_name);
    } else {
        char        *spec_buf;

        spec_buf = malloc(stat_buf.st_size + 1);
        if (spec_buf == NULL) {
            problem = MR_make_string(alloc_id,
                "could not allocate memory for a copy of %s",
                specs_file_name);
        } else {
            problem = read_specs_file_4(alloc_id, specs_file_name,
                term_file_name, spec_fd, stat_buf.st_size, spec_buf);
            free(spec_buf);
        }
    }
    return problem;
}

MR_String
read_specs_file_4(MR_AllocSiteInfoPtr alloc_id, MR_String specs_file_name,
    MR_String term_file_name, int spec_fd, size_t size, char *spec_buf)
{
    size_t      num_bytes_read;
    MR_String   problem;

    /* XXX we don't handle successful but partial reads */
    do {
        num_bytes_read = read(spec_fd, spec_buf, size);
    } while (num_bytes_read == -1 && MR_is_eintr(errno));
    if (num_bytes_read != size) {
        problem = MR_make_string(alloc_id, "could not read in %s",
            specs_file_name);
    } else {
        MR_EventSet event_set;

        /* NULL terminate the string we have read in. */
        spec_buf[num_bytes_read] = '\0';
        event_set = MR_read_event_set(specs_file_name, spec_buf);
        if (event_set == NULL) {
            problem = MR_make_string(alloc_id, "could not parse %s",
                specs_file_name);
        } else {
            FILE *term_fp;
            char errbuf[MR_STRERROR_BUF_SIZE];

            term_fp = fopen(term_file_name, "w");
            if (term_fp == NULL) {
                problem = MR_make_string(alloc_id, "could not open %s: %s",
                    term_file_name,
                    MR_strerror(errno, errbuf, sizeof(errbuf)));
            } else {
                MR_print_event_set(term_fp, event_set);
                fclose(term_fp);

                /*
                ** Our caller tests Problem against the empty string, not NULL.
                */
                problem = MR_make_string(alloc_id, "");
            }
        }
    }
    return problem;
}



#line 1769 "parse_tree.prog_event.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_event__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1778 "parse_tree.prog_event.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_event__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__prog_event__type_ctor_info_attr_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0
  }
};

#line 1787 "parse_tree.prog_event.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_event__digraph__ti_digraph_1builtin__type_ctor_info_string_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1795 "parse_tree.prog_event.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_dep_rel_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_event____Unify____attr_dep_rel_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____attr_dep_rel_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "attr_dep_rel",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_event__digraph__ti_digraph_1builtin__type_ctor_info_string_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1816 "parse_tree.prog_event.c"
static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_attr_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_0
};

#line 1824 "parse_tree.prog_event.c"
static const MR_ConstString parse_tree__prog_event__parse_tree__prog_event__field_names_attr_info_0_0[4] = {
  (MR_String) "attr_info_number",
  (MR_String) "attr_info_name",
  (MR_String) "attr_info_linenumber",
  (MR_String) "attr_info_type"
};

#line 1832 "parse_tree.prog_event.c"
static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_attr_info_0_0 = {
  (MR_String) "attr_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_event__parse_tree__prog_event__field_types_attr_info_0_0,
  parse_tree__prog_event__parse_tree__prog_event__field_names_attr_info_0_0,
  NULL,
  NULL
};

#line 1847 "parse_tree.prog_event.c"
static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_attr_info_0_0[1] = {
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_attr_info_0_0
};

#line 1852 "parse_tree.prog_event.c"
static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_attr_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_attr_info_0_0
  }
};

#line 1861 "parse_tree.prog_event.c"
static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_attr_info_0[1] = {
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_attr_info_0_0
};

#line 1866 "parse_tree.prog_event.c"
static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_attr_info_0[1] = {
  (MR_Integer) 0
};

#line 1871 "parse_tree.prog_event.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_event____Unify____attr_info_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____attr_info_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "attr_info",
  {
    parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_attr_info_0
  },
  {
    parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_attr_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_event__parse_tree__prog_event__functor_number_map_attr_info_0
};

#line 1892 "parse_tree.prog_event.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_event__digraph__ti_digraph_key_1builtin__type_ctor_info_string_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1900 "parse_tree.prog_event.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_key_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_event____Unify____attr_key_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____attr_key_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "attr_key",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_event__digraph__ti_digraph_key_1builtin__type_ctor_info_string_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1921 "parse_tree.prog_event.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_event__bimap__ti_bimap_2builtin__type_ctor_info_string_0digraph__ti_digraph_key_1builtin__type_ctor_info_string_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &parse_tree__prog_event__digraph__ti_digraph_key_1builtin__type_ctor_info_string_0
  }
};

#line 1930 "parse_tree.prog_event.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_key_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_event____Unify____attr_key_map_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____attr_key_map_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "attr_key_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_event__bimap__ti_bimap_2builtin__type_ctor_info_string_0digraph__ti_digraph_key_1builtin__type_ctor_info_string_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1951 "parse_tree.prog_event.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_event__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_event__type_ctor_info_attr_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0
  }
};

#line 1960 "parse_tree.prog_event.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_name_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_event____Unify____attr_name_map_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____attr_name_map_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "attr_name_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_event__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_event__type_ctor_info_attr_info_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1981 "parse_tree.prog_event.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_event__tree234__ti_tree234_2builtin__type_ctor_info_int_0parse_tree__prog_event__type_ctor_info_attr_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0
  }
};

#line 1990 "parse_tree.prog_event.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_num_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_event____Unify____attr_num_map_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____attr_num_map_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "attr_num_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_event__tree234__ti_tree234_2builtin__type_ctor_info_int_0parse_tree__prog_event__type_ctor_info_attr_info_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2011 "parse_tree.prog_event.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_event__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2020 "parse_tree.prog_event.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_type_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_event____Unify____attr_type_map_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____attr_type_map_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "attr_type_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_event__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_data__type_ctor_info_mer_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2041 "parse_tree.prog_event.c"
static const MR_EnumFunctorDesc parse_tree__prog_event__parse_tree__prog_event__enum_functor_desc_event_attr_function_kind_0_0 = {
  (MR_String) "event_attr_pure_function",
  (MR_Integer) 0
};

#line 2047 "parse_tree.prog_event.c"
static const MR_EnumFunctorDesc parse_tree__prog_event__parse_tree__prog_event__enum_functor_desc_event_attr_function_kind_0_1 = {
  (MR_String) "event_attr_impure_function",
  (MR_Integer) 1
};

#line 2053 "parse_tree.prog_event.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__enum_value_ordered_event_attr_function_kind_0[2] = {
  &parse_tree__prog_event__parse_tree__prog_event__enum_functor_desc_event_attr_function_kind_0_0,
  &parse_tree__prog_event__parse_tree__prog_event__enum_functor_desc_event_attr_function_kind_0_1
};

#line 2059 "parse_tree.prog_event.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__enum_name_ordered_event_attr_function_kind_0[2] = {
  &parse_tree__prog_event__parse_tree__prog_event__enum_functor_desc_event_attr_function_kind_0_1,
  &parse_tree__prog_event__parse_tree__prog_event__enum_functor_desc_event_attr_function_kind_0_0
};

#line 2065 "parse_tree.prog_event.c"
static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_function_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2071 "parse_tree.prog_event.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_function_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_event____Unify____event_attr_function_kind_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____event_attr_function_kind_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "event_attr_function_kind",
  {
    parse_tree__prog_event__parse_tree__prog_event__enum_name_ordered_event_attr_function_kind_0
  },
  {
    parse_tree__prog_event__parse_tree__prog_event__enum_value_ordered_event_attr_function_kind_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_function_kind_0
};

#line 2092 "parse_tree.prog_event.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_event__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2100 "parse_tree.prog_event.c"
static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_synth_call_term_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_event__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 2106 "parse_tree.prog_event.c"
static const MR_ConstString parse_tree__prog_event__parse_tree__prog_event__field_names_event_attr_synth_call_term_0_0[2] = {
  (MR_String) "func_attr_name",
  (MR_String) "arg_attr_names"
};

#line 2112 "parse_tree.prog_event.c"
static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_synth_call_term_0_0 = {
  (MR_String) "event_attr_synth_call_term",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_synth_call_term_0_0,
  parse_tree__prog_event__parse_tree__prog_event__field_names_event_attr_synth_call_term_0_0,
  NULL,
  NULL
};

#line 2127 "parse_tree.prog_event.c"
static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_synth_call_term_0_0[1] = {
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_synth_call_term_0_0
};

#line 2132 "parse_tree.prog_event.c"
static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_attr_synth_call_term_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_synth_call_term_0_0
  }
};

#line 2141 "parse_tree.prog_event.c"
static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_attr_synth_call_term_0[1] = {
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_synth_call_term_0_0
};

#line 2146 "parse_tree.prog_event.c"
static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_synth_call_term_0[1] = {
  (MR_Integer) 0
};

#line 2151 "parse_tree.prog_event.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_synth_call_term_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_event____Unify____event_attr_synth_call_term_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____event_attr_synth_call_term_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "event_attr_synth_call_term",
  {
    parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_attr_synth_call_term_0
  },
  {
    parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_attr_synth_call_term_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_synth_call_term_0
};

#line 2172 "parse_tree.prog_event.c"
static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_term_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_0
};

#line 2179 "parse_tree.prog_event.c"
static const MR_ConstString parse_tree__prog_event__parse_tree__prog_event__field_names_event_attr_term_0_0[3] = {
  (MR_String) "attr_name",
  (MR_String) "attr_linenum",
  (MR_String) "attr_type"
};

#line 2186 "parse_tree.prog_event.c"
static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_term_0_0 = {
  (MR_String) "event_attr_term",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_term_0_0,
  parse_tree__prog_event__parse_tree__prog_event__field_names_event_attr_term_0_0,
  NULL,
  NULL
};

#line 2201 "parse_tree.prog_event.c"
static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_term_0_0[1] = {
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_term_0_0
};

#line 2206 "parse_tree.prog_event.c"
static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_attr_term_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_term_0_0
  }
};

#line 2215 "parse_tree.prog_event.c"
static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_attr_term_0[1] = {
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_term_0_0
};

#line 2220 "parse_tree.prog_event.c"
static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_term_0[1] = {
  (MR_Integer) 0
};

#line 2225 "parse_tree.prog_event.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_term_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_event____Unify____event_attr_term_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____event_attr_term_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "event_attr_term",
  {
    parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_attr_term_0
  },
  {
    parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_attr_term_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_term_0
};

#line 2246 "parse_tree.prog_event.c"
static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_type_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_term_0
};

#line 2251 "parse_tree.prog_event.c"
static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_0_0 = {
  (MR_String) "event_attr_type_ordinary",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_type_0_0,
  NULL,
  NULL,
  NULL
};

#line 2266 "parse_tree.prog_event.c"
static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_type_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_term_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_synth_call_term_0
};

#line 2272 "parse_tree.prog_event.c"
static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_0_1 = {
  (MR_String) "event_attr_type_synthesized",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_type_0_1,
  NULL,
  NULL,
  NULL
};

#line 2287 "parse_tree.prog_event.c"
static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_type_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_function_kind_0
};

#line 2292 "parse_tree.prog_event.c"
static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_0_2 = {
  (MR_String) "event_attr_type_function",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_type_0_2,
  NULL,
  NULL,
  NULL
};

#line 2307 "parse_tree.prog_event.c"
static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_type_0_0[1] = {
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_0_0
};

#line 2312 "parse_tree.prog_event.c"
static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_type_0_1[1] = {
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_0_1
};

#line 2317 "parse_tree.prog_event.c"
static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_type_0_2[1] = {
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_0_2
};

#line 2322 "parse_tree.prog_event.c"
static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_attr_type_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_type_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_type_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_type_0_2
  }
};

#line 2341 "parse_tree.prog_event.c"
static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_attr_type_0[3] = {
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_0_2,
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_0_0,
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_0_1
};

#line 2348 "parse_tree.prog_event.c"
static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_type_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2355 "parse_tree.prog_event.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_event____Unify____event_attr_type_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____event_attr_type_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "event_attr_type",
  {
    parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_attr_type_0
  },
  {
    parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_attr_type_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_type_0
};

#line 2376 "parse_tree.prog_event.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_event__list__ti_list_1parse_tree__prog_event__type_ctor_info_event_attr_type_term_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_term_0
  }
};

#line 2384 "parse_tree.prog_event.c"
static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_type_term_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_event__list__ti_list_1parse_tree__prog_event__type_ctor_info_event_attr_type_term_0
};

#line 2390 "parse_tree.prog_event.c"
static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_term_0_0 = {
  (MR_String) "event_attr_type_term",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_type_term_0_0,
  NULL,
  NULL,
  NULL
};

#line 2405 "parse_tree.prog_event.c"
static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_type_term_0_0[1] = {
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_term_0_0
};

#line 2410 "parse_tree.prog_event.c"
static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_attr_type_term_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_type_term_0_0
  }
};

#line 2419 "parse_tree.prog_event.c"
static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_attr_type_term_0[1] = {
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_term_0_0
};

#line 2424 "parse_tree.prog_event.c"
static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_type_term_0[1] = {
  (MR_Integer) 0
};

#line 2429 "parse_tree.prog_event.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_term_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_event____Unify____event_attr_type_term_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____event_attr_type_term_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "event_attr_type_term",
  {
    parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_attr_type_term_0
  },
  {
    parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_attr_type_term_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_type_term_0
};

#line 2450 "parse_tree.prog_event.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_event__list__ti_list_1parse_tree__prog_event__type_ctor_info_event_spec_term_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_spec_term_0
  }
};

#line 2458 "parse_tree.prog_event.c"
static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_set_spec_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_event__list__ti_list_1parse_tree__prog_event__type_ctor_info_event_spec_term_0
};

#line 2464 "parse_tree.prog_event.c"
static const MR_ConstString parse_tree__prog_event__parse_tree__prog_event__field_names_event_set_spec_0_0[2] = {
  (MR_String) "event_set_name",
  (MR_String) "event_set_specs"
};

#line 2470 "parse_tree.prog_event.c"
static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_set_spec_0_0 = {
  (MR_String) "event_set_spec",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_event__parse_tree__prog_event__field_types_event_set_spec_0_0,
  parse_tree__prog_event__parse_tree__prog_event__field_names_event_set_spec_0_0,
  NULL,
  NULL
};

#line 2485 "parse_tree.prog_event.c"
static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_set_spec_0_0[1] = {
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_set_spec_0_0
};

#line 2490 "parse_tree.prog_event.c"
static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_set_spec_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_set_spec_0_0
  }
};

#line 2499 "parse_tree.prog_event.c"
static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_set_spec_0[1] = {
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_set_spec_0_0
};

#line 2504 "parse_tree.prog_event.c"
static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_set_spec_0[1] = {
  (MR_Integer) 0
};

#line 2509 "parse_tree.prog_event.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_set_spec_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_event____Unify____event_set_spec_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____event_set_spec_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "event_set_spec",
  {
    parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_set_spec_0
  },
  {
    parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_set_spec_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_set_spec_0
};

#line 2530 "parse_tree.prog_event.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_event__list__ti_list_1parse_tree__prog_event__type_ctor_info_event_attr_term_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_term_0
  }
};

#line 2538 "parse_tree.prog_event.c"
static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_spec_term_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_event__list__ti_list_1parse_tree__prog_event__type_ctor_info_event_attr_term_0
};

#line 2546 "parse_tree.prog_event.c"
static const MR_ConstString parse_tree__prog_event__parse_tree__prog_event__field_names_event_spec_term_0_0[4] = {
  (MR_String) "event_name",
  (MR_String) "event_num",
  (MR_String) "event_linenumber",
  (MR_String) "event_attrs"
};

#line 2554 "parse_tree.prog_event.c"
static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_spec_term_0_0 = {
  (MR_String) "event_spec_term",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_event__parse_tree__prog_event__field_types_event_spec_term_0_0,
  parse_tree__prog_event__parse_tree__prog_event__field_names_event_spec_term_0_0,
  NULL,
  NULL
};

#line 2569 "parse_tree.prog_event.c"
static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_spec_term_0_0[1] = {
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_spec_term_0_0
};

#line 2574 "parse_tree.prog_event.c"
static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_spec_term_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_spec_term_0_0
  }
};

#line 2583 "parse_tree.prog_event.c"
static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_spec_term_0[1] = {
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_spec_term_0_0
};

#line 2588 "parse_tree.prog_event.c"
static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_spec_term_0[1] = {
  (MR_Integer) 0
};

#line 2593 "parse_tree.prog_event.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_spec_term_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_event____Unify____event_spec_term_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____event_spec_term_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "event_spec_term",
  {
    parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_spec_term_0
  },
  {
    parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_spec_term_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_spec_term_0
};

#line 2614 "parse_tree.prog_event.c"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_dep_rel_0_0_10001(
#line 2617 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 2619 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2)
#line 2621 "parse_tree.prog_event.c"
{
#line 2623 "parse_tree.prog_event.c"
  {
#line 2625 "parse_tree.prog_event.c"
    MR_bool parse_tree__prog_event__succeeded;

#line 2628 "parse_tree.prog_event.c"
    {
#line 2630 "parse_tree.prog_event.c"
      parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____attr_dep_rel_0_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_event__wrapper_arg_2));
    }
#line 2633 "parse_tree.prog_event.c"
    return parse_tree__prog_event__succeeded;
#line 2635 "parse_tree.prog_event.c"
  }
#line 2637 "parse_tree.prog_event.c"
}

#line 2640 "parse_tree.prog_event.c"
static void MR_CALL 
parse_tree__prog_event____Compare____attr_dep_rel_0_0_10001(
#line 2643 "parse_tree.prog_event.c"
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
#line 2645 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2,
#line 2647 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_3)
#line 2649 "parse_tree.prog_event.c"
{
#line 2651 "parse_tree.prog_event.c"
  {
#line 2653 "parse_tree.prog_event.c"
    MR_Word parse_tree__prog_event__conv0_HeadVar__1_1;

#line 2656 "parse_tree.prog_event.c"
    {
#line 2658 "parse_tree.prog_event.c"
      parse_tree__prog_event____Compare____attr_dep_rel_0_0(&parse_tree__prog_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_event__wrapper_arg_3));
    }
#line 2661 "parse_tree.prog_event.c"
    *parse_tree__prog_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_event__conv0_HeadVar__1_1));
#line 2663 "parse_tree.prog_event.c"
  }
#line 2665 "parse_tree.prog_event.c"
}

#line 2668 "parse_tree.prog_event.c"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_info_0_0_10001(
#line 2671 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 2673 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2)
#line 2675 "parse_tree.prog_event.c"
{
#line 2677 "parse_tree.prog_event.c"
  {
#line 2679 "parse_tree.prog_event.c"
    MR_bool parse_tree__prog_event__succeeded;

#line 2682 "parse_tree.prog_event.c"
    {
#line 2684 "parse_tree.prog_event.c"
      parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____attr_info_0_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_event__wrapper_arg_2));
    }
#line 2687 "parse_tree.prog_event.c"
    return parse_tree__prog_event__succeeded;
#line 2689 "parse_tree.prog_event.c"
  }
#line 2691 "parse_tree.prog_event.c"
}

#line 2694 "parse_tree.prog_event.c"
static void MR_CALL 
parse_tree__prog_event____Compare____attr_info_0_0_10001(
#line 2697 "parse_tree.prog_event.c"
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
#line 2699 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2,
#line 2701 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_3)
#line 2703 "parse_tree.prog_event.c"
{
#line 2705 "parse_tree.prog_event.c"
  {
#line 2707 "parse_tree.prog_event.c"
    MR_Word parse_tree__prog_event__conv0_HeadVar__1_1;

#line 2710 "parse_tree.prog_event.c"
    {
#line 2712 "parse_tree.prog_event.c"
      parse_tree__prog_event____Compare____attr_info_0_0(&parse_tree__prog_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_event__wrapper_arg_3));
    }
#line 2715 "parse_tree.prog_event.c"
    *parse_tree__prog_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_event__conv0_HeadVar__1_1));
#line 2717 "parse_tree.prog_event.c"
  }
#line 2719 "parse_tree.prog_event.c"
}

#line 2722 "parse_tree.prog_event.c"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_key_0_0_10001(
#line 2725 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 2727 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2)
#line 2729 "parse_tree.prog_event.c"
{
#line 2731 "parse_tree.prog_event.c"
  {
#line 2733 "parse_tree.prog_event.c"
    MR_bool parse_tree__prog_event__succeeded;

#line 2736 "parse_tree.prog_event.c"
    {
#line 2738 "parse_tree.prog_event.c"
      parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____attr_key_0_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_event__wrapper_arg_2));
    }
#line 2741 "parse_tree.prog_event.c"
    return parse_tree__prog_event__succeeded;
#line 2743 "parse_tree.prog_event.c"
  }
#line 2745 "parse_tree.prog_event.c"
}

#line 2748 "parse_tree.prog_event.c"
static void MR_CALL 
parse_tree__prog_event____Compare____attr_key_0_0_10001(
#line 2751 "parse_tree.prog_event.c"
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
#line 2753 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2,
#line 2755 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_3)
#line 2757 "parse_tree.prog_event.c"
{
#line 2759 "parse_tree.prog_event.c"
  {
#line 2761 "parse_tree.prog_event.c"
    MR_Word parse_tree__prog_event__conv0_HeadVar__1_1;

#line 2764 "parse_tree.prog_event.c"
    {
#line 2766 "parse_tree.prog_event.c"
      parse_tree__prog_event____Compare____attr_key_0_0(&parse_tree__prog_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_event__wrapper_arg_3));
    }
#line 2769 "parse_tree.prog_event.c"
    *parse_tree__prog_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_event__conv0_HeadVar__1_1));
#line 2771 "parse_tree.prog_event.c"
  }
#line 2773 "parse_tree.prog_event.c"
}

#line 2776 "parse_tree.prog_event.c"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_key_map_0_0_10001(
#line 2779 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 2781 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2)
#line 2783 "parse_tree.prog_event.c"
{
#line 2785 "parse_tree.prog_event.c"
  {
#line 2787 "parse_tree.prog_event.c"
    MR_bool parse_tree__prog_event__succeeded;

#line 2790 "parse_tree.prog_event.c"
    {
#line 2792 "parse_tree.prog_event.c"
      parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____attr_key_map_0_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_event__wrapper_arg_2));
    }
#line 2795 "parse_tree.prog_event.c"
    return parse_tree__prog_event__succeeded;
#line 2797 "parse_tree.prog_event.c"
  }
#line 2799 "parse_tree.prog_event.c"
}

#line 2802 "parse_tree.prog_event.c"
static void MR_CALL 
parse_tree__prog_event____Compare____attr_key_map_0_0_10001(
#line 2805 "parse_tree.prog_event.c"
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
#line 2807 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2,
#line 2809 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_3)
#line 2811 "parse_tree.prog_event.c"
{
#line 2813 "parse_tree.prog_event.c"
  {
#line 2815 "parse_tree.prog_event.c"
    MR_Word parse_tree__prog_event__conv0_HeadVar__1_1;

#line 2818 "parse_tree.prog_event.c"
    {
#line 2820 "parse_tree.prog_event.c"
      parse_tree__prog_event____Compare____attr_key_map_0_0(&parse_tree__prog_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_event__wrapper_arg_3));
    }
#line 2823 "parse_tree.prog_event.c"
    *parse_tree__prog_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_event__conv0_HeadVar__1_1));
#line 2825 "parse_tree.prog_event.c"
  }
#line 2827 "parse_tree.prog_event.c"
}

#line 2830 "parse_tree.prog_event.c"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_name_map_0_0_10001(
#line 2833 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 2835 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2)
#line 2837 "parse_tree.prog_event.c"
{
#line 2839 "parse_tree.prog_event.c"
  {
#line 2841 "parse_tree.prog_event.c"
    MR_bool parse_tree__prog_event__succeeded;

#line 2844 "parse_tree.prog_event.c"
    {
#line 2846 "parse_tree.prog_event.c"
      parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____attr_name_map_0_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_event__wrapper_arg_2));
    }
#line 2849 "parse_tree.prog_event.c"
    return parse_tree__prog_event__succeeded;
#line 2851 "parse_tree.prog_event.c"
  }
#line 2853 "parse_tree.prog_event.c"
}

#line 2856 "parse_tree.prog_event.c"
static void MR_CALL 
parse_tree__prog_event____Compare____attr_name_map_0_0_10001(
#line 2859 "parse_tree.prog_event.c"
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
#line 2861 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2,
#line 2863 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_3)
#line 2865 "parse_tree.prog_event.c"
{
#line 2867 "parse_tree.prog_event.c"
  {
#line 2869 "parse_tree.prog_event.c"
    MR_Word parse_tree__prog_event__conv0_HeadVar__1_1;

#line 2872 "parse_tree.prog_event.c"
    {
#line 2874 "parse_tree.prog_event.c"
      parse_tree__prog_event____Compare____attr_name_map_0_0(&parse_tree__prog_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_event__wrapper_arg_3));
    }
#line 2877 "parse_tree.prog_event.c"
    *parse_tree__prog_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_event__conv0_HeadVar__1_1));
#line 2879 "parse_tree.prog_event.c"
  }
#line 2881 "parse_tree.prog_event.c"
}

#line 2884 "parse_tree.prog_event.c"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_num_map_0_0_10001(
#line 2887 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 2889 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2)
#line 2891 "parse_tree.prog_event.c"
{
#line 2893 "parse_tree.prog_event.c"
  {
#line 2895 "parse_tree.prog_event.c"
    MR_bool parse_tree__prog_event__succeeded;

#line 2898 "parse_tree.prog_event.c"
    {
#line 2900 "parse_tree.prog_event.c"
      parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____attr_num_map_0_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_event__wrapper_arg_2));
    }
#line 2903 "parse_tree.prog_event.c"
    return parse_tree__prog_event__succeeded;
#line 2905 "parse_tree.prog_event.c"
  }
#line 2907 "parse_tree.prog_event.c"
}

#line 2910 "parse_tree.prog_event.c"
static void MR_CALL 
parse_tree__prog_event____Compare____attr_num_map_0_0_10001(
#line 2913 "parse_tree.prog_event.c"
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
#line 2915 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2,
#line 2917 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_3)
#line 2919 "parse_tree.prog_event.c"
{
#line 2921 "parse_tree.prog_event.c"
  {
#line 2923 "parse_tree.prog_event.c"
    MR_Word parse_tree__prog_event__conv0_HeadVar__1_1;

#line 2926 "parse_tree.prog_event.c"
    {
#line 2928 "parse_tree.prog_event.c"
      parse_tree__prog_event____Compare____attr_num_map_0_0(&parse_tree__prog_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_event__wrapper_arg_3));
    }
#line 2931 "parse_tree.prog_event.c"
    *parse_tree__prog_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_event__conv0_HeadVar__1_1));
#line 2933 "parse_tree.prog_event.c"
  }
#line 2935 "parse_tree.prog_event.c"
}

#line 2938 "parse_tree.prog_event.c"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_type_map_0_0_10001(
#line 2941 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 2943 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2)
#line 2945 "parse_tree.prog_event.c"
{
#line 2947 "parse_tree.prog_event.c"
  {
#line 2949 "parse_tree.prog_event.c"
    MR_bool parse_tree__prog_event__succeeded;

#line 2952 "parse_tree.prog_event.c"
    {
#line 2954 "parse_tree.prog_event.c"
      parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____attr_type_map_0_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_event__wrapper_arg_2));
    }
#line 2957 "parse_tree.prog_event.c"
    return parse_tree__prog_event__succeeded;
#line 2959 "parse_tree.prog_event.c"
  }
#line 2961 "parse_tree.prog_event.c"
}

#line 2964 "parse_tree.prog_event.c"
static void MR_CALL 
parse_tree__prog_event____Compare____attr_type_map_0_0_10001(
#line 2967 "parse_tree.prog_event.c"
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
#line 2969 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2,
#line 2971 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_3)
#line 2973 "parse_tree.prog_event.c"
{
#line 2975 "parse_tree.prog_event.c"
  {
#line 2977 "parse_tree.prog_event.c"
    MR_Word parse_tree__prog_event__conv0_HeadVar__1_1;

#line 2980 "parse_tree.prog_event.c"
    {
#line 2982 "parse_tree.prog_event.c"
      parse_tree__prog_event____Compare____attr_type_map_0_0(&parse_tree__prog_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_event__wrapper_arg_3));
    }
#line 2985 "parse_tree.prog_event.c"
    *parse_tree__prog_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_event__conv0_HeadVar__1_1));
#line 2987 "parse_tree.prog_event.c"
  }
#line 2989 "parse_tree.prog_event.c"
}

#line 2992 "parse_tree.prog_event.c"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_function_kind_0_0_10001(
#line 2995 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 2997 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2)
#line 2999 "parse_tree.prog_event.c"
{
#line 3001 "parse_tree.prog_event.c"
  {
#line 3003 "parse_tree.prog_event.c"
    MR_bool parse_tree__prog_event__succeeded;

#line 3006 "parse_tree.prog_event.c"
    {
#line 3008 "parse_tree.prog_event.c"
      parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____event_attr_function_kind_0_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_event__wrapper_arg_2));
    }
#line 3011 "parse_tree.prog_event.c"
    return parse_tree__prog_event__succeeded;
#line 3013 "parse_tree.prog_event.c"
  }
#line 3015 "parse_tree.prog_event.c"
}

#line 3018 "parse_tree.prog_event.c"
static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_function_kind_0_0_10001(
#line 3021 "parse_tree.prog_event.c"
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
#line 3023 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2,
#line 3025 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_3)
#line 3027 "parse_tree.prog_event.c"
{
#line 3029 "parse_tree.prog_event.c"
  {
#line 3031 "parse_tree.prog_event.c"
    MR_Word parse_tree__prog_event__conv0_HeadVar__1_1;

#line 3034 "parse_tree.prog_event.c"
    {
#line 3036 "parse_tree.prog_event.c"
      parse_tree__prog_event____Compare____event_attr_function_kind_0_0(&parse_tree__prog_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_event__wrapper_arg_3));
    }
#line 3039 "parse_tree.prog_event.c"
    *parse_tree__prog_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_event__conv0_HeadVar__1_1));
#line 3041 "parse_tree.prog_event.c"
  }
#line 3043 "parse_tree.prog_event.c"
}

#line 3046 "parse_tree.prog_event.c"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_synth_call_term_0_0_10001(
#line 3049 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 3051 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2)
#line 3053 "parse_tree.prog_event.c"
{
#line 3055 "parse_tree.prog_event.c"
  {
#line 3057 "parse_tree.prog_event.c"
    MR_bool parse_tree__prog_event__succeeded;

#line 3060 "parse_tree.prog_event.c"
    {
#line 3062 "parse_tree.prog_event.c"
      parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____event_attr_synth_call_term_0_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_event__wrapper_arg_2));
    }
#line 3065 "parse_tree.prog_event.c"
    return parse_tree__prog_event__succeeded;
#line 3067 "parse_tree.prog_event.c"
  }
#line 3069 "parse_tree.prog_event.c"
}

#line 3072 "parse_tree.prog_event.c"
static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_synth_call_term_0_0_10001(
#line 3075 "parse_tree.prog_event.c"
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
#line 3077 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2,
#line 3079 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_3)
#line 3081 "parse_tree.prog_event.c"
{
#line 3083 "parse_tree.prog_event.c"
  {
#line 3085 "parse_tree.prog_event.c"
    MR_Word parse_tree__prog_event__conv0_HeadVar__1_1;

#line 3088 "parse_tree.prog_event.c"
    {
#line 3090 "parse_tree.prog_event.c"
      parse_tree__prog_event____Compare____event_attr_synth_call_term_0_0(&parse_tree__prog_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_event__wrapper_arg_3));
    }
#line 3093 "parse_tree.prog_event.c"
    *parse_tree__prog_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_event__conv0_HeadVar__1_1));
#line 3095 "parse_tree.prog_event.c"
  }
#line 3097 "parse_tree.prog_event.c"
}

#line 3100 "parse_tree.prog_event.c"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_term_0_0_10001(
#line 3103 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 3105 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2)
#line 3107 "parse_tree.prog_event.c"
{
#line 3109 "parse_tree.prog_event.c"
  {
#line 3111 "parse_tree.prog_event.c"
    MR_bool parse_tree__prog_event__succeeded;

#line 3114 "parse_tree.prog_event.c"
    {
#line 3116 "parse_tree.prog_event.c"
      parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____event_attr_term_0_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_event__wrapper_arg_2));
    }
#line 3119 "parse_tree.prog_event.c"
    return parse_tree__prog_event__succeeded;
#line 3121 "parse_tree.prog_event.c"
  }
#line 3123 "parse_tree.prog_event.c"
}

#line 3126 "parse_tree.prog_event.c"
static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_term_0_0_10001(
#line 3129 "parse_tree.prog_event.c"
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
#line 3131 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2,
#line 3133 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_3)
#line 3135 "parse_tree.prog_event.c"
{
#line 3137 "parse_tree.prog_event.c"
  {
#line 3139 "parse_tree.prog_event.c"
    MR_Word parse_tree__prog_event__conv0_HeadVar__1_1;

#line 3142 "parse_tree.prog_event.c"
    {
#line 3144 "parse_tree.prog_event.c"
      parse_tree__prog_event____Compare____event_attr_term_0_0(&parse_tree__prog_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_event__wrapper_arg_3));
    }
#line 3147 "parse_tree.prog_event.c"
    *parse_tree__prog_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_event__conv0_HeadVar__1_1));
#line 3149 "parse_tree.prog_event.c"
  }
#line 3151 "parse_tree.prog_event.c"
}

#line 3154 "parse_tree.prog_event.c"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_type_0_0_10001(
#line 3157 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 3159 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2)
#line 3161 "parse_tree.prog_event.c"
{
#line 3163 "parse_tree.prog_event.c"
  {
#line 3165 "parse_tree.prog_event.c"
    MR_bool parse_tree__prog_event__succeeded;

#line 3168 "parse_tree.prog_event.c"
    {
#line 3170 "parse_tree.prog_event.c"
      parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____event_attr_type_0_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_event__wrapper_arg_2));
    }
#line 3173 "parse_tree.prog_event.c"
    return parse_tree__prog_event__succeeded;
#line 3175 "parse_tree.prog_event.c"
  }
#line 3177 "parse_tree.prog_event.c"
}

#line 3180 "parse_tree.prog_event.c"
static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_type_0_0_10001(
#line 3183 "parse_tree.prog_event.c"
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
#line 3185 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2,
#line 3187 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_3)
#line 3189 "parse_tree.prog_event.c"
{
#line 3191 "parse_tree.prog_event.c"
  {
#line 3193 "parse_tree.prog_event.c"
    MR_Word parse_tree__prog_event__conv0_HeadVar__1_1;

#line 3196 "parse_tree.prog_event.c"
    {
#line 3198 "parse_tree.prog_event.c"
      parse_tree__prog_event____Compare____event_attr_type_0_0(&parse_tree__prog_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_event__wrapper_arg_3));
    }
#line 3201 "parse_tree.prog_event.c"
    *parse_tree__prog_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_event__conv0_HeadVar__1_1));
#line 3203 "parse_tree.prog_event.c"
  }
#line 3205 "parse_tree.prog_event.c"
}

#line 3208 "parse_tree.prog_event.c"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_type_term_0_0_10001(
#line 3211 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 3213 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2)
#line 3215 "parse_tree.prog_event.c"
{
#line 3217 "parse_tree.prog_event.c"
  {
#line 3219 "parse_tree.prog_event.c"
    MR_bool parse_tree__prog_event__succeeded;

#line 3222 "parse_tree.prog_event.c"
    {
#line 3224 "parse_tree.prog_event.c"
      parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____event_attr_type_term_0_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_event__wrapper_arg_2));
    }
#line 3227 "parse_tree.prog_event.c"
    return parse_tree__prog_event__succeeded;
#line 3229 "parse_tree.prog_event.c"
  }
#line 3231 "parse_tree.prog_event.c"
}

#line 3234 "parse_tree.prog_event.c"
static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_type_term_0_0_10001(
#line 3237 "parse_tree.prog_event.c"
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
#line 3239 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2,
#line 3241 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_3)
#line 3243 "parse_tree.prog_event.c"
{
#line 3245 "parse_tree.prog_event.c"
  {
#line 3247 "parse_tree.prog_event.c"
    MR_Word parse_tree__prog_event__conv0_HeadVar__1_1;

#line 3250 "parse_tree.prog_event.c"
    {
#line 3252 "parse_tree.prog_event.c"
      parse_tree__prog_event____Compare____event_attr_type_term_0_0(&parse_tree__prog_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_event__wrapper_arg_3));
    }
#line 3255 "parse_tree.prog_event.c"
    *parse_tree__prog_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_event__conv0_HeadVar__1_1));
#line 3257 "parse_tree.prog_event.c"
  }
#line 3259 "parse_tree.prog_event.c"
}

#line 3262 "parse_tree.prog_event.c"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_set_spec_0_0_10001(
#line 3265 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 3267 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2)
#line 3269 "parse_tree.prog_event.c"
{
#line 3271 "parse_tree.prog_event.c"
  {
#line 3273 "parse_tree.prog_event.c"
    MR_bool parse_tree__prog_event__succeeded;

#line 3276 "parse_tree.prog_event.c"
    {
#line 3278 "parse_tree.prog_event.c"
      parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____event_set_spec_0_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_event__wrapper_arg_2));
    }
#line 3281 "parse_tree.prog_event.c"
    return parse_tree__prog_event__succeeded;
#line 3283 "parse_tree.prog_event.c"
  }
#line 3285 "parse_tree.prog_event.c"
}

#line 3288 "parse_tree.prog_event.c"
static void MR_CALL 
parse_tree__prog_event____Compare____event_set_spec_0_0_10001(
#line 3291 "parse_tree.prog_event.c"
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
#line 3293 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2,
#line 3295 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_3)
#line 3297 "parse_tree.prog_event.c"
{
#line 3299 "parse_tree.prog_event.c"
  {
#line 3301 "parse_tree.prog_event.c"
    MR_Word parse_tree__prog_event__conv0_HeadVar__1_1;

#line 3304 "parse_tree.prog_event.c"
    {
#line 3306 "parse_tree.prog_event.c"
      parse_tree__prog_event____Compare____event_set_spec_0_0(&parse_tree__prog_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_event__wrapper_arg_3));
    }
#line 3309 "parse_tree.prog_event.c"
    *parse_tree__prog_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_event__conv0_HeadVar__1_1));
#line 3311 "parse_tree.prog_event.c"
  }
#line 3313 "parse_tree.prog_event.c"
}

#line 3316 "parse_tree.prog_event.c"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_spec_term_0_0_10001(
#line 3319 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 3321 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2)
#line 3323 "parse_tree.prog_event.c"
{
#line 3325 "parse_tree.prog_event.c"
  {
#line 3327 "parse_tree.prog_event.c"
    MR_bool parse_tree__prog_event__succeeded;

#line 3330 "parse_tree.prog_event.c"
    {
#line 3332 "parse_tree.prog_event.c"
      parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____event_spec_term_0_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_event__wrapper_arg_2));
    }
#line 3335 "parse_tree.prog_event.c"
    return parse_tree__prog_event__succeeded;
#line 3337 "parse_tree.prog_event.c"
  }
#line 3339 "parse_tree.prog_event.c"
}

#line 3342 "parse_tree.prog_event.c"
static void MR_CALL 
parse_tree__prog_event____Compare____event_spec_term_0_0_10001(
#line 3345 "parse_tree.prog_event.c"
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
#line 3347 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_2,
#line 3349 "parse_tree.prog_event.c"
  MR_Box parse_tree__prog_event__wrapper_arg_3)
#line 3351 "parse_tree.prog_event.c"
{
#line 3353 "parse_tree.prog_event.c"
  {
#line 3355 "parse_tree.prog_event.c"
    MR_Word parse_tree__prog_event__conv0_HeadVar__1_1;

#line 3358 "parse_tree.prog_event.c"
    {
#line 3360 "parse_tree.prog_event.c"
      parse_tree__prog_event____Compare____event_spec_term_0_0(&parse_tree__prog_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_event__wrapper_arg_3));
    }
#line 3363 "parse_tree.prog_event.c"
    *parse_tree__prog_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_event__conv0_HeadVar__1_1));
#line 3365 "parse_tree.prog_event.c"
  }
#line 3367 "parse_tree.prog_event.c"
}

#line 805 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event__IntroducedFrom__pred__describe_attr_type__805__1_2_p_0(
#line 805 "prog_event.m"
  MR_Word parse_tree__prog_event__Kind_7,
#line 805 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_32)
#line 805 "prog_event.m"
{
#line 805 "prog_event.m"
  {
#line 805 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;

#line 805 "prog_event.m"
    {
#line 805 "prog_event.m"
      return parse_tree__prog_event__succeeded = parse_tree__prog_data____Unify____kind_0_0(parse_tree__prog_event__Kind_7, parse_tree__prog_event__HeadVar__2_32);
    }
#line 805 "prog_event.m"
    return parse_tree__prog_event__succeeded;
#line 805 "prog_event.m"
  }
#line 805 "prog_event.m"
}

#line 643 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event__IntroducedFrom__pred__convert_terms_to_attrs__643__1_3_p_0(
#line 643 "prog_event.m"
  MR_Word parse_tree__prog_event__AttrNameMap_3,
#line 643 "prog_event.m"
  MR_String parse_tree__prog_event__HeadVar__2_113,
#line 643 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__3_114)
#line 643 "prog_event.m"
{
#line 643 "prog_event.m"
  {
#line 643 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 643 "prog_event.m"
    MR_Box parse_tree__prog_event__conv0_HeadVar__3_114;

#line 643 "prog_event.m"
    {
#line 643 "prog_event.m"
      parse_tree__prog_event__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0, parse_tree__prog_event__AttrNameMap_3, ((MR_Box) (parse_tree__prog_event__HeadVar__2_113)), &parse_tree__prog_event__conv0_HeadVar__3_114);
    }
#line 643 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 643 "prog_event.m"
      {
#line 643 "prog_event.m"
        *parse_tree__prog_event__HeadVar__3_114 = ((MR_Word) parse_tree__prog_event__conv0_HeadVar__3_114);
#line 643 "prog_event.m"
        parse_tree__prog_event__succeeded = MR_TRUE;
#line 643 "prog_event.m"
      }
#line 643 "prog_event.m"
    return parse_tree__prog_event__succeeded;
#line 643 "prog_event.m"
  }
#line 643 "prog_event.m"
}

#line 531 "prog_event.m"
static MR_Word MR_CALL 
parse_tree__prog_event__IntroducedFrom__func__build_dep_map__531__1_2_f_0(
#line 531 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6,
#line 531 "prog_event.m"
  MR_String parse_tree__prog_event__HeadVar__2_142)
#line 531 "prog_event.m"
{
#line 531 "prog_event.m"
  {
#line 531 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 531 "prog_event.m"
    MR_Word parse_tree__prog_event__HeadVar__3_143;
#line 531 "prog_event.m"
    MR_Box parse_tree__prog_event__conv0_HeadVar__3_143;

#line 531 "prog_event.m"
    {
#line 531 "prog_event.m"
      parse_tree__prog_event__conv0_HeadVar__3_143 = mercury__map__lookup_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6, ((MR_Box) (parse_tree__prog_event__HeadVar__2_142)));
    }
#line 531 "prog_event.m"
    parse_tree__prog_event__HeadVar__3_143 = ((MR_Word) parse_tree__prog_event__conv0_HeadVar__3_143);
#line 531 "prog_event.m"
    return parse_tree__prog_event__HeadVar__3_143;
#line 531 "prog_event.m"
  }
#line 531 "prog_event.m"
}

#line 290 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event____Compare____event_spec_term_0_0(
#line 290 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
#line 290 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 290 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__3_3)
#line 290 "prog_event.m"
{
#line 290 "prog_event.m"
  {
#line 290 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 290 "prog_event.m"
    MR_Integer parse_tree__prog_event__CastX_15 = (MR_Integer) parse_tree__prog_event__HeadVar__2_2;
#line 290 "prog_event.m"
    MR_Integer parse_tree__prog_event__CastY_16 = (MR_Integer) parse_tree__prog_event__HeadVar__3_3;

#line 290 "prog_event.m"
    parse_tree__prog_event__succeeded = (parse_tree__prog_event__CastX_15 == parse_tree__prog_event__CastY_16);
#line 290 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 3492 "parse_tree.prog_event.c"
      *parse_tree__prog_event__HeadVar__1_1 = (MR_Integer) 0;
#line 290 "prog_event.m"
    else
#line 290 "prog_event.m"
      {
#line 290 "prog_event.m"
        MR_String parse_tree__prog_event__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
#line 290 "prog_event.m"
        MR_Integer parse_tree__prog_event__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));
#line 290 "prog_event.m"
        MR_Integer parse_tree__prog_event__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 2)));
#line 290 "prog_event.m"
        MR_Word parse_tree__prog_event__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 3)));
#line 290 "prog_event.m"
        MR_String parse_tree__prog_event__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 0)));
#line 290 "prog_event.m"
        MR_Integer parse_tree__prog_event__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 1)));
#line 290 "prog_event.m"
        MR_Integer parse_tree__prog_event__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 2)));
#line 290 "prog_event.m"
        MR_Word parse_tree__prog_event__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 3)));
#line 290 "prog_event.m"
        MR_Word parse_tree__prog_event__V_12_12;

#line 290 "prog_event.m"
        {
#line 290 "prog_event.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__prog_event__V_12_12, parse_tree__prog_event__V_4_4, parse_tree__prog_event__V_8_8);
        }
#line 3522 "parse_tree.prog_event.c"
        parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_12_12 == (MR_Integer) 0);
#line 290 "prog_event.m"
        parse_tree__prog_event__succeeded = !(parse_tree__prog_event__succeeded);
#line 290 "prog_event.m"
        if (parse_tree__prog_event__succeeded)
#line 290 "prog_event.m"
          *parse_tree__prog_event__HeadVar__1_1 = parse_tree__prog_event__V_12_12;
#line 290 "prog_event.m"
        else
#line 290 "prog_event.m"
          {
#line 290 "prog_event.m"
            MR_Word parse_tree__prog_event__V_13_13;

#line 290 "prog_event.m"
            {
#line 290 "prog_event.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_event__V_13_13, parse_tree__prog_event__V_5_5, parse_tree__prog_event__V_9_9);
            }
#line 3542 "parse_tree.prog_event.c"
            parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_13_13 == (MR_Integer) 0);
#line 290 "prog_event.m"
            parse_tree__prog_event__succeeded = !(parse_tree__prog_event__succeeded);
#line 290 "prog_event.m"
            if (parse_tree__prog_event__succeeded)
#line 290 "prog_event.m"
              *parse_tree__prog_event__HeadVar__1_1 = parse_tree__prog_event__V_13_13;
#line 290 "prog_event.m"
            else
#line 290 "prog_event.m"
              {
#line 290 "prog_event.m"
                MR_Word parse_tree__prog_event__V_14_14;

#line 290 "prog_event.m"
                {
#line 290 "prog_event.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_event__V_14_14, parse_tree__prog_event__V_6_6, parse_tree__prog_event__V_10_10);
                }
#line 3562 "parse_tree.prog_event.c"
                parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_14_14 == (MR_Integer) 0);
#line 290 "prog_event.m"
                parse_tree__prog_event__succeeded = !(parse_tree__prog_event__succeeded);
#line 290 "prog_event.m"
                if (parse_tree__prog_event__succeeded)
#line 290 "prog_event.m"
                  *parse_tree__prog_event__HeadVar__1_1 = parse_tree__prog_event__V_14_14;
#line 290 "prog_event.m"
                else
#line 290 "prog_event.m"
                  {
#line 290 "prog_event.m"
                    {
#line 290 "prog_event.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_event_scalar_common_1[5], parse_tree__prog_event__HeadVar__1_1, ((MR_Box) (parse_tree__prog_event__V_7_7)), ((MR_Box) (parse_tree__prog_event__V_11_11)));
#line 290 "prog_event.m"
                      return;
                    }
#line 290 "prog_event.m"
                  }
#line 290 "prog_event.m"
              }
#line 290 "prog_event.m"
          }
#line 290 "prog_event.m"
      }
#line 290 "prog_event.m"
  }
#line 290 "prog_event.m"
}

#line 290 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_spec_term_0_0(
#line 290 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__1_1,
#line 290 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2)
#line 290 "prog_event.m"
{
#line 290 "prog_event.m"
  {
#line 290 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 290 "prog_event.m"
    MR_Integer parse_tree__prog_event__CastX_11 = (MR_Integer) parse_tree__prog_event__HeadVar__1_1;
#line 290 "prog_event.m"
    MR_Integer parse_tree__prog_event__CastY_12 = (MR_Integer) parse_tree__prog_event__HeadVar__2_2;

#line 290 "prog_event.m"
    parse_tree__prog_event__succeeded = (parse_tree__prog_event__CastX_11 == parse_tree__prog_event__CastY_12);
#line 290 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 290 "prog_event.m"
      parse_tree__prog_event__succeeded = MR_TRUE;
#line 290 "prog_event.m"
    else
#line 290 "prog_event.m"
      {
#line 290 "prog_event.m"
        MR_Word parse_tree__prog_event__TypeInfo_13_13;
#line 290 "prog_event.m"
        MR_String parse_tree__prog_event__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 0)));
#line 290 "prog_event.m"
        MR_Integer parse_tree__prog_event__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 1)));
#line 290 "prog_event.m"
        MR_Integer parse_tree__prog_event__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 2)));
#line 290 "prog_event.m"
        MR_Word parse_tree__prog_event__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 3)));
#line 290 "prog_event.m"
        MR_String parse_tree__prog_event__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
#line 290 "prog_event.m"
        MR_Integer parse_tree__prog_event__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));
#line 290 "prog_event.m"
        MR_Integer parse_tree__prog_event__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 2)));
#line 290 "prog_event.m"
        MR_Word parse_tree__prog_event__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 3)));

#line 3641 "parse_tree.prog_event.c"
        parse_tree__prog_event__succeeded = (strcmp(parse_tree__prog_event__V_3_3, parse_tree__prog_event__V_7_7) == 0);
#line 290 "prog_event.m"
        if (parse_tree__prog_event__succeeded)
#line 290 "prog_event.m"
          {
#line 3647 "parse_tree.prog_event.c"
            parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_4_4 == parse_tree__prog_event__V_8_8);
#line 290 "prog_event.m"
            if (parse_tree__prog_event__succeeded)
#line 290 "prog_event.m"
              {
#line 3653 "parse_tree.prog_event.c"
                parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_5_5 == parse_tree__prog_event__V_9_9);
#line 290 "prog_event.m"
                if (parse_tree__prog_event__succeeded)
#line 290 "prog_event.m"
                  {
#line 3659 "parse_tree.prog_event.c"
                    parse_tree__prog_event__TypeInfo_13_13 = (MR_Word) &parse_tree__prog_event_scalar_common_1[5];
#line 3661 "parse_tree.prog_event.c"
                    {
#line 3663 "parse_tree.prog_event.c"
                      return parse_tree__prog_event__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_event__TypeInfo_13_13, ((MR_Box) (parse_tree__prog_event__V_6_6)), ((MR_Box) (parse_tree__prog_event__V_10_10)));
                    }
#line 290 "prog_event.m"
                  }
#line 290 "prog_event.m"
              }
#line 290 "prog_event.m"
          }
#line 290 "prog_event.m"
      }
#line 290 "prog_event.m"
    return parse_tree__prog_event__succeeded;
#line 290 "prog_event.m"
  }
#line 290 "prog_event.m"
}

#line 284 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event____Compare____event_set_spec_0_0(
#line 284 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
#line 284 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 284 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__3_3)
#line 284 "prog_event.m"
{
#line 284 "prog_event.m"
  {
#line 284 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 284 "prog_event.m"
    MR_Integer parse_tree__prog_event__CastX_9 = (MR_Integer) parse_tree__prog_event__HeadVar__2_2;
#line 284 "prog_event.m"
    MR_Integer parse_tree__prog_event__CastY_10 = (MR_Integer) parse_tree__prog_event__HeadVar__3_3;

#line 284 "prog_event.m"
    parse_tree__prog_event__succeeded = (parse_tree__prog_event__CastX_9 == parse_tree__prog_event__CastY_10);
#line 284 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 3705 "parse_tree.prog_event.c"
      *parse_tree__prog_event__HeadVar__1_1 = (MR_Integer) 0;
#line 284 "prog_event.m"
    else
#line 284 "prog_event.m"
      {
#line 284 "prog_event.m"
        MR_String parse_tree__prog_event__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
#line 284 "prog_event.m"
        MR_Word parse_tree__prog_event__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));
#line 284 "prog_event.m"
        MR_String parse_tree__prog_event__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 0)));
#line 284 "prog_event.m"
        MR_Word parse_tree__prog_event__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 1)));
#line 284 "prog_event.m"
        MR_Word parse_tree__prog_event__V_8_8;

#line 284 "prog_event.m"
        {
#line 284 "prog_event.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__prog_event__V_8_8, parse_tree__prog_event__V_4_4, parse_tree__prog_event__V_6_6);
        }
#line 3727 "parse_tree.prog_event.c"
        parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_8_8 == (MR_Integer) 0);
#line 284 "prog_event.m"
        parse_tree__prog_event__succeeded = !(parse_tree__prog_event__succeeded);
#line 284 "prog_event.m"
        if (parse_tree__prog_event__succeeded)
#line 284 "prog_event.m"
          *parse_tree__prog_event__HeadVar__1_1 = parse_tree__prog_event__V_8_8;
#line 284 "prog_event.m"
        else
#line 284 "prog_event.m"
          {
#line 284 "prog_event.m"
            {
#line 284 "prog_event.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_event_scalar_common_1[4], parse_tree__prog_event__HeadVar__1_1, ((MR_Box) (parse_tree__prog_event__V_5_5)), ((MR_Box) (parse_tree__prog_event__V_7_7)));
#line 284 "prog_event.m"
              return;
            }
#line 284 "prog_event.m"
          }
#line 284 "prog_event.m"
      }
#line 284 "prog_event.m"
  }
#line 284 "prog_event.m"
}

#line 284 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_set_spec_0_0(
#line 284 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__1_1,
#line 284 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2)
#line 284 "prog_event.m"
{
#line 284 "prog_event.m"
  {
#line 284 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 284 "prog_event.m"
    MR_Integer parse_tree__prog_event__CastX_7 = (MR_Integer) parse_tree__prog_event__HeadVar__1_1;
#line 284 "prog_event.m"
    MR_Integer parse_tree__prog_event__CastY_8 = (MR_Integer) parse_tree__prog_event__HeadVar__2_2;

#line 284 "prog_event.m"
    parse_tree__prog_event__succeeded = (parse_tree__prog_event__CastX_7 == parse_tree__prog_event__CastY_8);
#line 284 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 284 "prog_event.m"
      parse_tree__prog_event__succeeded = MR_TRUE;
#line 284 "prog_event.m"
    else
#line 284 "prog_event.m"
      {
#line 284 "prog_event.m"
        MR_Word parse_tree__prog_event__TypeInfo_9_9;
#line 284 "prog_event.m"
        MR_String parse_tree__prog_event__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 0)));
#line 284 "prog_event.m"
        MR_Word parse_tree__prog_event__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 1)));
#line 284 "prog_event.m"
        MR_String parse_tree__prog_event__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
#line 284 "prog_event.m"
        MR_Word parse_tree__prog_event__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));

#line 3794 "parse_tree.prog_event.c"
        parse_tree__prog_event__succeeded = (strcmp(parse_tree__prog_event__V_3_3, parse_tree__prog_event__V_5_5) == 0);
#line 284 "prog_event.m"
        if (parse_tree__prog_event__succeeded)
#line 284 "prog_event.m"
          {
#line 3800 "parse_tree.prog_event.c"
            parse_tree__prog_event__TypeInfo_9_9 = (MR_Word) &parse_tree__prog_event_scalar_common_1[4];
#line 3802 "parse_tree.prog_event.c"
            {
#line 3804 "parse_tree.prog_event.c"
              return parse_tree__prog_event__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_event__TypeInfo_9_9, ((MR_Box) (parse_tree__prog_event__V_4_4)), ((MR_Box) (parse_tree__prog_event__V_6_6)));
            }
#line 284 "prog_event.m"
          }
#line 284 "prog_event.m"
      }
#line 284 "prog_event.m"
    return parse_tree__prog_event__succeeded;
#line 284 "prog_event.m"
  }
#line 284 "prog_event.m"
}

#line 327 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_type_term_0_0(
#line 327 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
#line 327 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 327 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__3_3)
#line 327 "prog_event.m"
{
#line 327 "prog_event.m"
  {
#line 327 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 327 "prog_event.m"
    MR_Integer parse_tree__prog_event__CastX_9 = (MR_Integer) parse_tree__prog_event__HeadVar__2_2;
#line 327 "prog_event.m"
    MR_Integer parse_tree__prog_event__CastY_10 = (MR_Integer) parse_tree__prog_event__HeadVar__3_3;

#line 327 "prog_event.m"
    parse_tree__prog_event__succeeded = (parse_tree__prog_event__CastX_9 == parse_tree__prog_event__CastY_10);
#line 327 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 3842 "parse_tree.prog_event.c"
      *parse_tree__prog_event__HeadVar__1_1 = (MR_Integer) 0;
#line 327 "prog_event.m"
    else
#line 327 "prog_event.m"
      {
#line 327 "prog_event.m"
        MR_String parse_tree__prog_event__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
#line 327 "prog_event.m"
        MR_Word parse_tree__prog_event__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));
#line 327 "prog_event.m"
        MR_String parse_tree__prog_event__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 0)));
#line 327 "prog_event.m"
        MR_Word parse_tree__prog_event__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 1)));
#line 327 "prog_event.m"
        MR_Word parse_tree__prog_event__V_8_8;

#line 327 "prog_event.m"
        {
#line 327 "prog_event.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__prog_event__V_8_8, parse_tree__prog_event__V_4_4, parse_tree__prog_event__V_6_6);
        }
#line 3864 "parse_tree.prog_event.c"
        parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_8_8 == (MR_Integer) 0);
#line 327 "prog_event.m"
        parse_tree__prog_event__succeeded = !(parse_tree__prog_event__succeeded);
#line 327 "prog_event.m"
        if (parse_tree__prog_event__succeeded)
#line 327 "prog_event.m"
          *parse_tree__prog_event__HeadVar__1_1 = parse_tree__prog_event__V_8_8;
#line 327 "prog_event.m"
        else
#line 327 "prog_event.m"
          {
#line 327 "prog_event.m"
            {
#line 327 "prog_event.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_event_scalar_common_1[3], parse_tree__prog_event__HeadVar__1_1, ((MR_Box) (parse_tree__prog_event__V_5_5)), ((MR_Box) (parse_tree__prog_event__V_7_7)));
#line 327 "prog_event.m"
              return;
            }
#line 327 "prog_event.m"
          }
#line 327 "prog_event.m"
      }
#line 327 "prog_event.m"
  }
#line 327 "prog_event.m"
}

#line 327 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_type_term_0_0(
#line 327 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__1_1,
#line 327 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2)
#line 327 "prog_event.m"
{
#line 327 "prog_event.m"
  {
#line 327 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 327 "prog_event.m"
    MR_Integer parse_tree__prog_event__CastX_7 = (MR_Integer) parse_tree__prog_event__HeadVar__1_1;
#line 327 "prog_event.m"
    MR_Integer parse_tree__prog_event__CastY_8 = (MR_Integer) parse_tree__prog_event__HeadVar__2_2;

#line 327 "prog_event.m"
    parse_tree__prog_event__succeeded = (parse_tree__prog_event__CastX_7 == parse_tree__prog_event__CastY_8);
#line 327 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 327 "prog_event.m"
      parse_tree__prog_event__succeeded = MR_TRUE;
#line 327 "prog_event.m"
    else
#line 327 "prog_event.m"
      {
#line 327 "prog_event.m"
        MR_Word parse_tree__prog_event__TypeInfo_9_9;
#line 327 "prog_event.m"
        MR_String parse_tree__prog_event__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 0)));
#line 327 "prog_event.m"
        MR_Word parse_tree__prog_event__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 1)));
#line 327 "prog_event.m"
        MR_String parse_tree__prog_event__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
#line 327 "prog_event.m"
        MR_Word parse_tree__prog_event__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));

#line 3931 "parse_tree.prog_event.c"
        parse_tree__prog_event__succeeded = (strcmp(parse_tree__prog_event__V_3_3, parse_tree__prog_event__V_5_5) == 0);
#line 327 "prog_event.m"
        if (parse_tree__prog_event__succeeded)
#line 327 "prog_event.m"
          {
#line 3937 "parse_tree.prog_event.c"
            parse_tree__prog_event__TypeInfo_9_9 = (MR_Word) &parse_tree__prog_event_scalar_common_1[3];
#line 3939 "parse_tree.prog_event.c"
            {
#line 3941 "parse_tree.prog_event.c"
              return parse_tree__prog_event__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_event__TypeInfo_9_9, ((MR_Box) (parse_tree__prog_event__V_4_4)), ((MR_Box) (parse_tree__prog_event__V_6_6)));
            }
#line 327 "prog_event.m"
          }
#line 327 "prog_event.m"
      }
#line 327 "prog_event.m"
    return parse_tree__prog_event__succeeded;
#line 327 "prog_event.m"
  }
#line 327 "prog_event.m"
}

#line 315 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_type_0_0(
#line 315 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
#line 315 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 315 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__3_3)
#line 315 "prog_event.m"
{
#line 315 "prog_event.m"
  {
#line 315 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 315 "prog_event.m"
    MR_Integer parse_tree__prog_event__CastX_29 = (MR_Integer) parse_tree__prog_event__HeadVar__2_2;
#line 315 "prog_event.m"
    MR_Integer parse_tree__prog_event__CastY_30 = (MR_Integer) parse_tree__prog_event__HeadVar__3_3;

#line 315 "prog_event.m"
    parse_tree__prog_event__succeeded = (parse_tree__prog_event__CastX_29 == parse_tree__prog_event__CastY_30);
#line 315 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 3979 "parse_tree.prog_event.c"
      *parse_tree__prog_event__HeadVar__1_1 = (MR_Integer) 0;
#line 315 "prog_event.m"
    else
#line 315 "prog_event.m"
      if (((MR_tag((MR_Word) parse_tree__prog_event__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 315 "prog_event.m"
        {
#line 315 "prog_event.m"
          MR_Word parse_tree__prog_event__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));

#line 315 "prog_event.m"
          if (((MR_tag((MR_Word) parse_tree__prog_event__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 315 "prog_event.m"
            {
#line 315 "prog_event.m"
              MR_Word parse_tree__prog_event__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 0)));
#line 315 "prog_event.m"
              MR_Integer parse_tree__prog_event__V_39_39 = (MR_Integer) parse_tree__prog_event__V_35_35;
#line 315 "prog_event.m"
              MR_Integer parse_tree__prog_event__V_40_40 = (MR_Integer) parse_tree__prog_event__V_28_28;

#line 315 "prog_event.m"
              {
#line 315 "prog_event.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_event__HeadVar__1_1, parse_tree__prog_event__V_39_39, parse_tree__prog_event__V_40_40);
#line 315 "prog_event.m"
                return;
              }
#line 315 "prog_event.m"
            }
#line 315 "prog_event.m"
          else
#line 315 "prog_event.m"
            if (((MR_tag((MR_Word) parse_tree__prog_event__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4014 "parse_tree.prog_event.c"
              *parse_tree__prog_event__HeadVar__1_1 = (MR_Integer) 2;
#line 315 "prog_event.m"
            else
#line 4018 "parse_tree.prog_event.c"
              *parse_tree__prog_event__HeadVar__1_1 = (MR_Integer) 2;
#line 315 "prog_event.m"
        }
#line 315 "prog_event.m"
      else
#line 315 "prog_event.m"
        if (((MR_tag((MR_Word) parse_tree__prog_event__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 315 "prog_event.m"
          {
#line 315 "prog_event.m"
            MR_Word parse_tree__prog_event__V_36_36 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_event__HeadVar__2_2), (MR_Integer) 0);

#line 315 "prog_event.m"
            if (((MR_tag((MR_Word) parse_tree__prog_event__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4033 "parse_tree.prog_event.c"
              *parse_tree__prog_event__HeadVar__1_1 = (MR_Integer) 1;
#line 315 "prog_event.m"
            else
#line 315 "prog_event.m"
              if (((MR_tag((MR_Word) parse_tree__prog_event__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 315 "prog_event.m"
                {
#line 315 "prog_event.m"
                  MR_Word parse_tree__prog_event__V_5_5 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_event__HeadVar__3_3), (MR_Integer) 0);

#line 315 "prog_event.m"
                  {
#line 315 "prog_event.m"
                    parse_tree__prog_event____Compare____event_attr_type_term_0_0(parse_tree__prog_event__HeadVar__1_1, parse_tree__prog_event__V_36_36, parse_tree__prog_event__V_5_5);
#line 315 "prog_event.m"
                    return;
                  }
#line 315 "prog_event.m"
                }
#line 315 "prog_event.m"
              else
#line 4055 "parse_tree.prog_event.c"
                *parse_tree__prog_event__HeadVar__1_1 = (MR_Integer) 1;
#line 315 "prog_event.m"
          }
#line 315 "prog_event.m"
        else
#line 315 "prog_event.m"
          {
#line 315 "prog_event.m"
            MR_Word parse_tree__prog_event__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));
#line 315 "prog_event.m"
            MR_Word parse_tree__prog_event__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));

#line 315 "prog_event.m"
            if (((MR_tag((MR_Word) parse_tree__prog_event__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4070 "parse_tree.prog_event.c"
              *parse_tree__prog_event__HeadVar__1_1 = (MR_Integer) 1;
#line 315 "prog_event.m"
            else
#line 315 "prog_event.m"
              if (((MR_tag((MR_Word) parse_tree__prog_event__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4076 "parse_tree.prog_event.c"
                *parse_tree__prog_event__HeadVar__1_1 = (MR_Integer) 2;
#line 315 "prog_event.m"
              else
#line 315 "prog_event.m"
                {
#line 315 "prog_event.m"
                  MR_Word parse_tree__prog_event__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 0)));
#line 315 "prog_event.m"
                  MR_Word parse_tree__prog_event__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 1)));
#line 315 "prog_event.m"
                  MR_Word parse_tree__prog_event__V_18_18;

#line 315 "prog_event.m"
                  {
#line 315 "prog_event.m"
                    parse_tree__prog_event____Compare____event_attr_type_term_0_0(&parse_tree__prog_event__V_18_18, parse_tree__prog_event__V_38_38, parse_tree__prog_event__V_16_16);
                  }
#line 4094 "parse_tree.prog_event.c"
                  parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_18_18 == (MR_Integer) 0);
#line 315 "prog_event.m"
                  parse_tree__prog_event__succeeded = !(parse_tree__prog_event__succeeded);
#line 315 "prog_event.m"
                  if (parse_tree__prog_event__succeeded)
#line 315 "prog_event.m"
                    *parse_tree__prog_event__HeadVar__1_1 = parse_tree__prog_event__V_18_18;
#line 315 "prog_event.m"
                  else
#line 315 "prog_event.m"
                    {
#line 315 "prog_event.m"
                      parse_tree__prog_event____Compare____event_attr_synth_call_term_0_0(parse_tree__prog_event__HeadVar__1_1, parse_tree__prog_event__V_37_37, parse_tree__prog_event__V_17_17);
#line 315 "prog_event.m"
                      return;
                    }
#line 315 "prog_event.m"
                }
#line 315 "prog_event.m"
          }
#line 315 "prog_event.m"
  }
#line 315 "prog_event.m"
}

#line 315 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_type_0_0(
#line 315 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__1_1,
#line 315 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2)
#line 315 "prog_event.m"
{
#line 315 "prog_event.m"
  {
#line 315 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 315 "prog_event.m"
    MR_Integer parse_tree__prog_event__CastX_11 = (MR_Integer) parse_tree__prog_event__HeadVar__1_1;
#line 315 "prog_event.m"
    MR_Integer parse_tree__prog_event__CastY_12 = (MR_Integer) parse_tree__prog_event__HeadVar__2_2;

#line 315 "prog_event.m"
    parse_tree__prog_event__succeeded = (parse_tree__prog_event__CastX_11 == parse_tree__prog_event__CastY_12);
#line 315 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 315 "prog_event.m"
      parse_tree__prog_event__succeeded = MR_TRUE;
#line 315 "prog_event.m"
    else
#line 315 "prog_event.m"
      if (((MR_tag((MR_Word) parse_tree__prog_event__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 315 "prog_event.m"
        {
#line 315 "prog_event.m"
          MR_Word parse_tree__prog_event__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 0)));
#line 315 "prog_event.m"
          MR_Word parse_tree__prog_event__V_10_10;

#line 315 "prog_event.m"
          parse_tree__prog_event__succeeded = ((MR_tag((MR_Word) parse_tree__prog_event__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 315 "prog_event.m"
          if (parse_tree__prog_event__succeeded)
#line 315 "prog_event.m"
            {
#line 315 "prog_event.m"
              parse_tree__prog_event__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
#line 4163 "parse_tree.prog_event.c"
              parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_9_9 == parse_tree__prog_event__V_10_10);
#line 315 "prog_event.m"
            }
#line 315 "prog_event.m"
        }
#line 315 "prog_event.m"
      else
#line 315 "prog_event.m"
        if (((MR_tag((MR_Word) parse_tree__prog_event__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 315 "prog_event.m"
          {
#line 315 "prog_event.m"
            MR_Word parse_tree__prog_event__V_3_3 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_event__HeadVar__1_1), (MR_Integer) 0);
#line 315 "prog_event.m"
            MR_Word parse_tree__prog_event__V_4_4;

#line 315 "prog_event.m"
            parse_tree__prog_event__succeeded = ((MR_tag((MR_Word) parse_tree__prog_event__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 315 "prog_event.m"
            if (parse_tree__prog_event__succeeded)
#line 315 "prog_event.m"
              {
#line 315 "prog_event.m"
                parse_tree__prog_event__V_4_4 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_event__HeadVar__2_2), (MR_Integer) 0);
#line 4188 "parse_tree.prog_event.c"
                {
#line 4190 "parse_tree.prog_event.c"
                  return parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____event_attr_type_term_0_0(parse_tree__prog_event__V_3_3, parse_tree__prog_event__V_4_4);
                }
#line 315 "prog_event.m"
              }
#line 315 "prog_event.m"
          }
#line 315 "prog_event.m"
        else
#line 315 "prog_event.m"
          {
#line 315 "prog_event.m"
            MR_Word parse_tree__prog_event__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 0)));
#line 315 "prog_event.m"
            MR_Word parse_tree__prog_event__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 1)));
#line 315 "prog_event.m"
            MR_Word parse_tree__prog_event__V_7_7;
#line 315 "prog_event.m"
            MR_Word parse_tree__prog_event__V_8_8;

#line 315 "prog_event.m"
            parse_tree__prog_event__succeeded = ((MR_tag((MR_Word) parse_tree__prog_event__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 315 "prog_event.m"
            if (parse_tree__prog_event__succeeded)
#line 315 "prog_event.m"
              {
#line 315 "prog_event.m"
                parse_tree__prog_event__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
#line 315 "prog_event.m"
                parse_tree__prog_event__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));
#line 4220 "parse_tree.prog_event.c"
                {
#line 4222 "parse_tree.prog_event.c"
                  parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____event_attr_type_term_0_0(parse_tree__prog_event__V_5_5, parse_tree__prog_event__V_7_7);
                }
#line 315 "prog_event.m"
                if (parse_tree__prog_event__succeeded)
#line 4227 "parse_tree.prog_event.c"
                  {
#line 4229 "parse_tree.prog_event.c"
                    return parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____event_attr_synth_call_term_0_0(parse_tree__prog_event__V_6_6, parse_tree__prog_event__V_8_8);
                  }
#line 315 "prog_event.m"
              }
#line 315 "prog_event.m"
          }
#line 315 "prog_event.m"
    return parse_tree__prog_event__succeeded;
#line 315 "prog_event.m"
  }
#line 315 "prog_event.m"
}

#line 298 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_term_0_0(
#line 298 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
#line 298 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 298 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__3_3)
#line 298 "prog_event.m"
{
#line 298 "prog_event.m"
  {
#line 298 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 298 "prog_event.m"
    MR_Integer parse_tree__prog_event__CastX_12 = (MR_Integer) parse_tree__prog_event__HeadVar__2_2;
#line 298 "prog_event.m"
    MR_Integer parse_tree__prog_event__CastY_13 = (MR_Integer) parse_tree__prog_event__HeadVar__3_3;

#line 298 "prog_event.m"
    parse_tree__prog_event__succeeded = (parse_tree__prog_event__CastX_12 == parse_tree__prog_event__CastY_13);
#line 298 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 4267 "parse_tree.prog_event.c"
      *parse_tree__prog_event__HeadVar__1_1 = (MR_Integer) 0;
#line 298 "prog_event.m"
    else
#line 298 "prog_event.m"
      {
#line 298 "prog_event.m"
        MR_String parse_tree__prog_event__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
#line 298 "prog_event.m"
        MR_Integer parse_tree__prog_event__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));
#line 298 "prog_event.m"
        MR_Word parse_tree__prog_event__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 2)));
#line 298 "prog_event.m"
        MR_String parse_tree__prog_event__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 0)));
#line 298 "prog_event.m"
        MR_Integer parse_tree__prog_event__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 1)));
#line 298 "prog_event.m"
        MR_Word parse_tree__prog_event__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 2)));
#line 298 "prog_event.m"
        MR_Word parse_tree__prog_event__V_10_10;

#line 298 "prog_event.m"
        {
#line 298 "prog_event.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__prog_event__V_10_10, parse_tree__prog_event__V_4_4, parse_tree__prog_event__V_7_7);
        }
#line 4293 "parse_tree.prog_event.c"
        parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_10_10 == (MR_Integer) 0);
#line 298 "prog_event.m"
        parse_tree__prog_event__succeeded = !(parse_tree__prog_event__succeeded);
#line 298 "prog_event.m"
        if (parse_tree__prog_event__succeeded)
#line 298 "prog_event.m"
          *parse_tree__prog_event__HeadVar__1_1 = parse_tree__prog_event__V_10_10;
#line 298 "prog_event.m"
        else
#line 298 "prog_event.m"
          {
#line 298 "prog_event.m"
            MR_Word parse_tree__prog_event__V_11_11;

#line 298 "prog_event.m"
            {
#line 298 "prog_event.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_event__V_11_11, parse_tree__prog_event__V_5_5, parse_tree__prog_event__V_8_8);
            }
#line 4313 "parse_tree.prog_event.c"
            parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_11_11 == (MR_Integer) 0);
#line 298 "prog_event.m"
            parse_tree__prog_event__succeeded = !(parse_tree__prog_event__succeeded);
#line 298 "prog_event.m"
            if (parse_tree__prog_event__succeeded)
#line 298 "prog_event.m"
              *parse_tree__prog_event__HeadVar__1_1 = parse_tree__prog_event__V_11_11;
#line 298 "prog_event.m"
            else
#line 298 "prog_event.m"
              {
#line 298 "prog_event.m"
                parse_tree__prog_event____Compare____event_attr_type_0_0(parse_tree__prog_event__HeadVar__1_1, parse_tree__prog_event__V_6_6, parse_tree__prog_event__V_9_9);
#line 298 "prog_event.m"
                return;
              }
#line 298 "prog_event.m"
          }
#line 298 "prog_event.m"
      }
#line 298 "prog_event.m"
  }
#line 298 "prog_event.m"
}

#line 298 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_term_0_0(
#line 298 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__1_1,
#line 298 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2)
#line 298 "prog_event.m"
{
#line 298 "prog_event.m"
  {
#line 298 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 298 "prog_event.m"
    MR_Integer parse_tree__prog_event__CastX_9 = (MR_Integer) parse_tree__prog_event__HeadVar__1_1;
#line 298 "prog_event.m"
    MR_Integer parse_tree__prog_event__CastY_10 = (MR_Integer) parse_tree__prog_event__HeadVar__2_2;

#line 298 "prog_event.m"
    parse_tree__prog_event__succeeded = (parse_tree__prog_event__CastX_9 == parse_tree__prog_event__CastY_10);
#line 298 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 298 "prog_event.m"
      parse_tree__prog_event__succeeded = MR_TRUE;
#line 298 "prog_event.m"
    else
#line 298 "prog_event.m"
      {
#line 298 "prog_event.m"
        MR_String parse_tree__prog_event__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 0)));
#line 298 "prog_event.m"
        MR_Integer parse_tree__prog_event__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 1)));
#line 298 "prog_event.m"
        MR_Word parse_tree__prog_event__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 2)));
#line 298 "prog_event.m"
        MR_String parse_tree__prog_event__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
#line 298 "prog_event.m"
        MR_Integer parse_tree__prog_event__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));
#line 298 "prog_event.m"
        MR_Word parse_tree__prog_event__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 2)));

#line 4380 "parse_tree.prog_event.c"
        parse_tree__prog_event__succeeded = (strcmp(parse_tree__prog_event__V_3_3, parse_tree__prog_event__V_6_6) == 0);
#line 298 "prog_event.m"
        if (parse_tree__prog_event__succeeded)
#line 298 "prog_event.m"
          {
#line 4386 "parse_tree.prog_event.c"
            parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_4_4 == parse_tree__prog_event__V_7_7);
#line 298 "prog_event.m"
            if (parse_tree__prog_event__succeeded)
#line 4390 "parse_tree.prog_event.c"
              {
#line 4392 "parse_tree.prog_event.c"
                return parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____event_attr_type_0_0(parse_tree__prog_event__V_5_5, parse_tree__prog_event__V_8_8);
              }
#line 298 "prog_event.m"
          }
#line 298 "prog_event.m"
      }
#line 298 "prog_event.m"
    return parse_tree__prog_event__succeeded;
#line 298 "prog_event.m"
  }
#line 298 "prog_event.m"
}

#line 305 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_synth_call_term_0_0(
#line 305 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
#line 305 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 305 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__3_3)
#line 305 "prog_event.m"
{
#line 305 "prog_event.m"
  {
#line 305 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 305 "prog_event.m"
    MR_Integer parse_tree__prog_event__CastX_9 = (MR_Integer) parse_tree__prog_event__HeadVar__2_2;
#line 305 "prog_event.m"
    MR_Integer parse_tree__prog_event__CastY_10 = (MR_Integer) parse_tree__prog_event__HeadVar__3_3;

#line 305 "prog_event.m"
    parse_tree__prog_event__succeeded = (parse_tree__prog_event__CastX_9 == parse_tree__prog_event__CastY_10);
#line 305 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 4430 "parse_tree.prog_event.c"
      *parse_tree__prog_event__HeadVar__1_1 = (MR_Integer) 0;
#line 305 "prog_event.m"
    else
#line 305 "prog_event.m"
      {
#line 305 "prog_event.m"
        MR_String parse_tree__prog_event__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
#line 305 "prog_event.m"
        MR_Word parse_tree__prog_event__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));
#line 305 "prog_event.m"
        MR_String parse_tree__prog_event__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 0)));
#line 305 "prog_event.m"
        MR_Word parse_tree__prog_event__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 1)));
#line 305 "prog_event.m"
        MR_Word parse_tree__prog_event__V_8_8;

#line 305 "prog_event.m"
        {
#line 305 "prog_event.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__prog_event__V_8_8, parse_tree__prog_event__V_4_4, parse_tree__prog_event__V_6_6);
        }
#line 4452 "parse_tree.prog_event.c"
        parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_8_8 == (MR_Integer) 0);
#line 305 "prog_event.m"
        parse_tree__prog_event__succeeded = !(parse_tree__prog_event__succeeded);
#line 305 "prog_event.m"
        if (parse_tree__prog_event__succeeded)
#line 305 "prog_event.m"
          *parse_tree__prog_event__HeadVar__1_1 = parse_tree__prog_event__V_8_8;
#line 305 "prog_event.m"
        else
#line 305 "prog_event.m"
          {
#line 305 "prog_event.m"
            {
#line 305 "prog_event.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_event_scalar_common_1[2], parse_tree__prog_event__HeadVar__1_1, ((MR_Box) (parse_tree__prog_event__V_5_5)), ((MR_Box) (parse_tree__prog_event__V_7_7)));
#line 305 "prog_event.m"
              return;
            }
#line 305 "prog_event.m"
          }
#line 305 "prog_event.m"
      }
#line 305 "prog_event.m"
  }
#line 305 "prog_event.m"
}

#line 305 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_synth_call_term_0_0(
#line 305 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__1_1,
#line 305 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2)
#line 305 "prog_event.m"
{
#line 305 "prog_event.m"
  {
#line 305 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 305 "prog_event.m"
    MR_Integer parse_tree__prog_event__CastX_7 = (MR_Integer) parse_tree__prog_event__HeadVar__1_1;
#line 305 "prog_event.m"
    MR_Integer parse_tree__prog_event__CastY_8 = (MR_Integer) parse_tree__prog_event__HeadVar__2_2;

#line 305 "prog_event.m"
    parse_tree__prog_event__succeeded = (parse_tree__prog_event__CastX_7 == parse_tree__prog_event__CastY_8);
#line 305 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 305 "prog_event.m"
      parse_tree__prog_event__succeeded = MR_TRUE;
#line 305 "prog_event.m"
    else
#line 305 "prog_event.m"
      {
#line 305 "prog_event.m"
        MR_Word parse_tree__prog_event__TypeInfo_9_9;
#line 305 "prog_event.m"
        MR_String parse_tree__prog_event__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 0)));
#line 305 "prog_event.m"
        MR_Word parse_tree__prog_event__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 1)));
#line 305 "prog_event.m"
        MR_String parse_tree__prog_event__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
#line 305 "prog_event.m"
        MR_Word parse_tree__prog_event__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));

#line 4519 "parse_tree.prog_event.c"
        parse_tree__prog_event__succeeded = (strcmp(parse_tree__prog_event__V_3_3, parse_tree__prog_event__V_5_5) == 0);
#line 305 "prog_event.m"
        if (parse_tree__prog_event__succeeded)
#line 305 "prog_event.m"
          {
#line 4525 "parse_tree.prog_event.c"
            parse_tree__prog_event__TypeInfo_9_9 = (MR_Word) &parse_tree__prog_event_scalar_common_1[2];
#line 4527 "parse_tree.prog_event.c"
            {
#line 4529 "parse_tree.prog_event.c"
              return parse_tree__prog_event__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_event__TypeInfo_9_9, ((MR_Box) (parse_tree__prog_event__V_4_4)), ((MR_Box) (parse_tree__prog_event__V_6_6)));
            }
#line 305 "prog_event.m"
          }
#line 305 "prog_event.m"
      }
#line 305 "prog_event.m"
    return parse_tree__prog_event__succeeded;
#line 305 "prog_event.m"
  }
#line 305 "prog_event.m"
}

#line 311 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_function_kind_0_0(
#line 311 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
#line 311 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 311 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__3_3)
#line 311 "prog_event.m"
{
#line 311 "prog_event.m"
  {
#line 311 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 311 "prog_event.m"
    MR_Integer parse_tree__prog_event__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_event__HeadVar__2_2;
#line 311 "prog_event.m"
    MR_Integer parse_tree__prog_event__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_event__HeadVar__3_3;

#line 311 "prog_event.m"
    {
#line 311 "prog_event.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_event__HeadVar__1_1, parse_tree__prog_event__Cast_HeadVar1_4, parse_tree__prog_event__Cast_HeadVar2_5);
#line 311 "prog_event.m"
      return;
    }
#line 311 "prog_event.m"
  }
#line 311 "prog_event.m"
}

#line 311 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_function_kind_0_0(
#line 311 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_1,
#line 311 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2)
#line 311 "prog_event.m"
{
#line 4584 "parse_tree.prog_event.c"
  {
#line 4586 "parse_tree.prog_event.c"
    MR_bool parse_tree__prog_event__succeeded = (parse_tree__prog_event__HeadVar__2_1 == parse_tree__prog_event__HeadVar__2_2);

#line 4589 "parse_tree.prog_event.c"
    return parse_tree__prog_event__succeeded;
#line 4591 "parse_tree.prog_event.c"
  }
#line 311 "prog_event.m"
}

#line 445 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event____Compare____attr_type_map_0_0(
#line 445 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
#line 445 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 445 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__3_3)
#line 445 "prog_event.m"
{
#line 445 "prog_event.m"
  {
#line 445 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 445 "prog_event.m"
    MR_Word parse_tree__prog_event__Cast_HeadVar1_4 = parse_tree__prog_event__HeadVar__2_2;
#line 445 "prog_event.m"
    MR_Word parse_tree__prog_event__Cast_HeadVar2_5 = parse_tree__prog_event__HeadVar__3_3;

#line 445 "prog_event.m"
    {
#line 445 "prog_event.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_event_scalar_common_2[3], parse_tree__prog_event__HeadVar__1_1, ((MR_Box) (parse_tree__prog_event__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_event__Cast_HeadVar2_5)));
#line 445 "prog_event.m"
      return;
    }
#line 445 "prog_event.m"
  }
#line 445 "prog_event.m"
}

#line 445 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_type_map_0_0(
#line 445 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__1_1,
#line 445 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2)
#line 445 "prog_event.m"
{
#line 445 "prog_event.m"
  {
#line 445 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 445 "prog_event.m"
    MR_Word parse_tree__prog_event__Cast_HeadVar1_3 = parse_tree__prog_event__HeadVar__1_1;
#line 445 "prog_event.m"
    MR_Word parse_tree__prog_event__Cast_HeadVar2_4 = parse_tree__prog_event__HeadVar__2_2;

#line 445 "prog_event.m"
    {
#line 445 "prog_event.m"
      return parse_tree__prog_event__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_event_scalar_common_2[3], ((MR_Box) (parse_tree__prog_event__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_event__Cast_HeadVar2_4)));
    }
#line 445 "prog_event.m"
    return parse_tree__prog_event__succeeded;
#line 445 "prog_event.m"
  }
#line 445 "prog_event.m"
}

#line 439 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event____Compare____attr_num_map_0_0(
#line 439 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
#line 439 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 439 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__3_3)
#line 439 "prog_event.m"
{
#line 439 "prog_event.m"
  {
#line 439 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 439 "prog_event.m"
    MR_Word parse_tree__prog_event__Cast_HeadVar1_4 = parse_tree__prog_event__HeadVar__2_2;
#line 439 "prog_event.m"
    MR_Word parse_tree__prog_event__Cast_HeadVar2_5 = parse_tree__prog_event__HeadVar__3_3;

#line 439 "prog_event.m"
    {
#line 439 "prog_event.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_event_scalar_common_2[2], parse_tree__prog_event__HeadVar__1_1, ((MR_Box) (parse_tree__prog_event__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_event__Cast_HeadVar2_5)));
#line 439 "prog_event.m"
      return;
    }
#line 439 "prog_event.m"
  }
#line 439 "prog_event.m"
}

#line 439 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_num_map_0_0(
#line 439 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__1_1,
#line 439 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2)
#line 439 "prog_event.m"
{
#line 439 "prog_event.m"
  {
#line 439 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 439 "prog_event.m"
    MR_Word parse_tree__prog_event__Cast_HeadVar1_3 = parse_tree__prog_event__HeadVar__1_1;
#line 439 "prog_event.m"
    MR_Word parse_tree__prog_event__Cast_HeadVar2_4 = parse_tree__prog_event__HeadVar__2_2;

#line 439 "prog_event.m"
    {
#line 439 "prog_event.m"
      return parse_tree__prog_event__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_event_scalar_common_2[2], ((MR_Box) (parse_tree__prog_event__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_event__Cast_HeadVar2_4)));
    }
#line 439 "prog_event.m"
    return parse_tree__prog_event__succeeded;
#line 439 "prog_event.m"
  }
#line 439 "prog_event.m"
}

#line 442 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event____Compare____attr_name_map_0_0(
#line 442 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
#line 442 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 442 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__3_3)
#line 442 "prog_event.m"
{
#line 442 "prog_event.m"
  {
#line 442 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 442 "prog_event.m"
    MR_Word parse_tree__prog_event__Cast_HeadVar1_4 = parse_tree__prog_event__HeadVar__2_2;
#line 442 "prog_event.m"
    MR_Word parse_tree__prog_event__Cast_HeadVar2_5 = parse_tree__prog_event__HeadVar__3_3;

#line 442 "prog_event.m"
    {
#line 442 "prog_event.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_event_scalar_common_2[1], parse_tree__prog_event__HeadVar__1_1, ((MR_Box) (parse_tree__prog_event__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_event__Cast_HeadVar2_5)));
#line 442 "prog_event.m"
      return;
    }
#line 442 "prog_event.m"
  }
#line 442 "prog_event.m"
}

#line 442 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_name_map_0_0(
#line 442 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__1_1,
#line 442 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2)
#line 442 "prog_event.m"
{
#line 442 "prog_event.m"
  {
#line 442 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 442 "prog_event.m"
    MR_Word parse_tree__prog_event__Cast_HeadVar1_3 = parse_tree__prog_event__HeadVar__1_1;
#line 442 "prog_event.m"
    MR_Word parse_tree__prog_event__Cast_HeadVar2_4 = parse_tree__prog_event__HeadVar__2_2;

#line 442 "prog_event.m"
    {
#line 442 "prog_event.m"
      return parse_tree__prog_event__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_event_scalar_common_2[1], ((MR_Box) (parse_tree__prog_event__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_event__Cast_HeadVar2_4)));
    }
#line 442 "prog_event.m"
    return parse_tree__prog_event__succeeded;
#line 442 "prog_event.m"
  }
#line 442 "prog_event.m"
}

#line 454 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event____Compare____attr_key_map_0_0(
#line 454 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
#line 454 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 454 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__3_3)
#line 454 "prog_event.m"
{
#line 454 "prog_event.m"
  {
#line 454 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 454 "prog_event.m"
    MR_Word parse_tree__prog_event__Cast_HeadVar1_4 = parse_tree__prog_event__HeadVar__2_2;
#line 454 "prog_event.m"
    MR_Word parse_tree__prog_event__Cast_HeadVar2_5 = parse_tree__prog_event__HeadVar__3_3;

#line 454 "prog_event.m"
    {
#line 454 "prog_event.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_event_scalar_common_2[0], parse_tree__prog_event__HeadVar__1_1, ((MR_Box) (parse_tree__prog_event__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_event__Cast_HeadVar2_5)));
#line 454 "prog_event.m"
      return;
    }
#line 454 "prog_event.m"
  }
#line 454 "prog_event.m"
}

#line 454 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_key_map_0_0(
#line 454 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__1_1,
#line 454 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2)
#line 454 "prog_event.m"
{
#line 454 "prog_event.m"
  {
#line 454 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 454 "prog_event.m"
    MR_Word parse_tree__prog_event__Cast_HeadVar1_3 = parse_tree__prog_event__HeadVar__1_1;
#line 454 "prog_event.m"
    MR_Word parse_tree__prog_event__Cast_HeadVar2_4 = parse_tree__prog_event__HeadVar__2_2;

#line 454 "prog_event.m"
    {
#line 454 "prog_event.m"
      return parse_tree__prog_event__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_event_scalar_common_2[0], ((MR_Box) (parse_tree__prog_event__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_event__Cast_HeadVar2_4)));
    }
#line 454 "prog_event.m"
    return parse_tree__prog_event__succeeded;
#line 454 "prog_event.m"
  }
#line 454 "prog_event.m"
}

#line 453 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event____Compare____attr_key_0_0(
#line 453 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
#line 453 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 453 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__3_3)
#line 453 "prog_event.m"
{
#line 453 "prog_event.m"
  {
#line 453 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 453 "prog_event.m"
    MR_Word parse_tree__prog_event__Cast_HeadVar1_4 = parse_tree__prog_event__HeadVar__2_2;
#line 453 "prog_event.m"
    MR_Word parse_tree__prog_event__Cast_HeadVar2_5 = parse_tree__prog_event__HeadVar__3_3;

#line 453 "prog_event.m"
    {
#line 453 "prog_event.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_event_scalar_common_1[0], parse_tree__prog_event__HeadVar__1_1, ((MR_Box) (parse_tree__prog_event__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_event__Cast_HeadVar2_5)));
#line 453 "prog_event.m"
      return;
    }
#line 453 "prog_event.m"
  }
#line 453 "prog_event.m"
}

#line 453 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_key_0_0(
#line 453 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__1_1,
#line 453 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2)
#line 453 "prog_event.m"
{
#line 453 "prog_event.m"
  {
#line 453 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 453 "prog_event.m"
    MR_Word parse_tree__prog_event__Cast_HeadVar1_3 = parse_tree__prog_event__HeadVar__1_1;
#line 453 "prog_event.m"
    MR_Word parse_tree__prog_event__Cast_HeadVar2_4 = parse_tree__prog_event__HeadVar__2_2;

#line 453 "prog_event.m"
    {
#line 453 "prog_event.m"
      return parse_tree__prog_event__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_event_scalar_common_1[0], ((MR_Box) (parse_tree__prog_event__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_event__Cast_HeadVar2_4)));
    }
#line 453 "prog_event.m"
    return parse_tree__prog_event__succeeded;
#line 453 "prog_event.m"
  }
#line 453 "prog_event.m"
}

#line 428 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event____Compare____attr_info_0_0(
#line 428 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
#line 428 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 428 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__3_3)
#line 428 "prog_event.m"
{
#line 428 "prog_event.m"
  {
#line 428 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 428 "prog_event.m"
    MR_Integer parse_tree__prog_event__CastX_15 = (MR_Integer) parse_tree__prog_event__HeadVar__2_2;
#line 428 "prog_event.m"
    MR_Integer parse_tree__prog_event__CastY_16 = (MR_Integer) parse_tree__prog_event__HeadVar__3_3;

#line 428 "prog_event.m"
    parse_tree__prog_event__succeeded = (parse_tree__prog_event__CastX_15 == parse_tree__prog_event__CastY_16);
#line 428 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 4930 "parse_tree.prog_event.c"
      *parse_tree__prog_event__HeadVar__1_1 = (MR_Integer) 0;
#line 428 "prog_event.m"
    else
#line 428 "prog_event.m"
      {
#line 428 "prog_event.m"
        MR_Integer parse_tree__prog_event__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
#line 428 "prog_event.m"
        MR_String parse_tree__prog_event__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));
#line 428 "prog_event.m"
        MR_Integer parse_tree__prog_event__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 2)));
#line 428 "prog_event.m"
        MR_Word parse_tree__prog_event__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 3)));
#line 428 "prog_event.m"
        MR_Integer parse_tree__prog_event__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 0)));
#line 428 "prog_event.m"
        MR_String parse_tree__prog_event__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 1)));
#line 428 "prog_event.m"
        MR_Integer parse_tree__prog_event__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 2)));
#line 428 "prog_event.m"
        MR_Word parse_tree__prog_event__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 3)));
#line 428 "prog_event.m"
        MR_Word parse_tree__prog_event__V_12_12;

#line 428 "prog_event.m"
        {
#line 428 "prog_event.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_event__V_12_12, parse_tree__prog_event__V_4_4, parse_tree__prog_event__V_8_8);
        }
#line 4960 "parse_tree.prog_event.c"
        parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_12_12 == (MR_Integer) 0);
#line 428 "prog_event.m"
        parse_tree__prog_event__succeeded = !(parse_tree__prog_event__succeeded);
#line 428 "prog_event.m"
        if (parse_tree__prog_event__succeeded)
#line 428 "prog_event.m"
          *parse_tree__prog_event__HeadVar__1_1 = parse_tree__prog_event__V_12_12;
#line 428 "prog_event.m"
        else
#line 428 "prog_event.m"
          {
#line 428 "prog_event.m"
            MR_Word parse_tree__prog_event__V_13_13;

#line 428 "prog_event.m"
            {
#line 428 "prog_event.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__prog_event__V_13_13, parse_tree__prog_event__V_5_5, parse_tree__prog_event__V_9_9);
            }
#line 4980 "parse_tree.prog_event.c"
            parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_13_13 == (MR_Integer) 0);
#line 428 "prog_event.m"
            parse_tree__prog_event__succeeded = !(parse_tree__prog_event__succeeded);
#line 428 "prog_event.m"
            if (parse_tree__prog_event__succeeded)
#line 428 "prog_event.m"
              *parse_tree__prog_event__HeadVar__1_1 = parse_tree__prog_event__V_13_13;
#line 428 "prog_event.m"
            else
#line 428 "prog_event.m"
              {
#line 428 "prog_event.m"
                MR_Word parse_tree__prog_event__V_14_14;

#line 428 "prog_event.m"
                {
#line 428 "prog_event.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_event__V_14_14, parse_tree__prog_event__V_6_6, parse_tree__prog_event__V_10_10);
                }
#line 5000 "parse_tree.prog_event.c"
                parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_14_14 == (MR_Integer) 0);
#line 428 "prog_event.m"
                parse_tree__prog_event__succeeded = !(parse_tree__prog_event__succeeded);
#line 428 "prog_event.m"
                if (parse_tree__prog_event__succeeded)
#line 428 "prog_event.m"
                  *parse_tree__prog_event__HeadVar__1_1 = parse_tree__prog_event__V_14_14;
#line 428 "prog_event.m"
                else
#line 428 "prog_event.m"
                  {
#line 428 "prog_event.m"
                    parse_tree__prog_event____Compare____event_attr_type_0_0(parse_tree__prog_event__HeadVar__1_1, parse_tree__prog_event__V_7_7, parse_tree__prog_event__V_11_11);
#line 428 "prog_event.m"
                    return;
                  }
#line 428 "prog_event.m"
              }
#line 428 "prog_event.m"
          }
#line 428 "prog_event.m"
      }
#line 428 "prog_event.m"
  }
#line 428 "prog_event.m"
}

#line 428 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_info_0_0(
#line 428 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__1_1,
#line 428 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2)
#line 428 "prog_event.m"
{
#line 428 "prog_event.m"
  {
#line 428 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 428 "prog_event.m"
    MR_Integer parse_tree__prog_event__CastX_11 = (MR_Integer) parse_tree__prog_event__HeadVar__1_1;
#line 428 "prog_event.m"
    MR_Integer parse_tree__prog_event__CastY_12 = (MR_Integer) parse_tree__prog_event__HeadVar__2_2;

#line 428 "prog_event.m"
    parse_tree__prog_event__succeeded = (parse_tree__prog_event__CastX_11 == parse_tree__prog_event__CastY_12);
#line 428 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 428 "prog_event.m"
      parse_tree__prog_event__succeeded = MR_TRUE;
#line 428 "prog_event.m"
    else
#line 428 "prog_event.m"
      {
#line 428 "prog_event.m"
        MR_Integer parse_tree__prog_event__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 0)));
#line 428 "prog_event.m"
        MR_String parse_tree__prog_event__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 1)));
#line 428 "prog_event.m"
        MR_Integer parse_tree__prog_event__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 2)));
#line 428 "prog_event.m"
        MR_Word parse_tree__prog_event__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 3)));
#line 428 "prog_event.m"
        MR_Integer parse_tree__prog_event__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
#line 428 "prog_event.m"
        MR_String parse_tree__prog_event__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));
#line 428 "prog_event.m"
        MR_Integer parse_tree__prog_event__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 2)));
#line 428 "prog_event.m"
        MR_Word parse_tree__prog_event__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 3)));

#line 5073 "parse_tree.prog_event.c"
        parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_3_3 == parse_tree__prog_event__V_7_7);
#line 428 "prog_event.m"
        if (parse_tree__prog_event__succeeded)
#line 428 "prog_event.m"
          {
#line 5079 "parse_tree.prog_event.c"
            parse_tree__prog_event__succeeded = (strcmp(parse_tree__prog_event__V_4_4, parse_tree__prog_event__V_8_8) == 0);
#line 428 "prog_event.m"
            if (parse_tree__prog_event__succeeded)
#line 428 "prog_event.m"
              {
#line 5085 "parse_tree.prog_event.c"
                parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_5_5 == parse_tree__prog_event__V_9_9);
#line 428 "prog_event.m"
                if (parse_tree__prog_event__succeeded)
#line 5089 "parse_tree.prog_event.c"
                  {
#line 5091 "parse_tree.prog_event.c"
                    return parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____event_attr_type_0_0(parse_tree__prog_event__V_6_6, parse_tree__prog_event__V_10_10);
                  }
#line 428 "prog_event.m"
              }
#line 428 "prog_event.m"
          }
#line 428 "prog_event.m"
      }
#line 428 "prog_event.m"
    return parse_tree__prog_event__succeeded;
#line 428 "prog_event.m"
  }
#line 428 "prog_event.m"
}

#line 452 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event____Compare____attr_dep_rel_0_0(
#line 452 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
#line 452 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 452 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__3_3)
#line 452 "prog_event.m"
{
#line 452 "prog_event.m"
  {
#line 452 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 452 "prog_event.m"
    MR_Word parse_tree__prog_event__Cast_HeadVar1_4 = parse_tree__prog_event__HeadVar__2_2;
#line 452 "prog_event.m"
    MR_Word parse_tree__prog_event__Cast_HeadVar2_5 = parse_tree__prog_event__HeadVar__3_3;

#line 452 "prog_event.m"
    {
#line 452 "prog_event.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_event_scalar_common_1[1], parse_tree__prog_event__HeadVar__1_1, ((MR_Box) (parse_tree__prog_event__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_event__Cast_HeadVar2_5)));
#line 452 "prog_event.m"
      return;
    }
#line 452 "prog_event.m"
  }
#line 452 "prog_event.m"
}

#line 452 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_dep_rel_0_0(
#line 452 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__1_1,
#line 452 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2)
#line 452 "prog_event.m"
{
#line 452 "prog_event.m"
  {
#line 452 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 452 "prog_event.m"
    MR_Word parse_tree__prog_event__Cast_HeadVar1_3 = parse_tree__prog_event__HeadVar__1_1;
#line 452 "prog_event.m"
    MR_Word parse_tree__prog_event__Cast_HeadVar2_4 = parse_tree__prog_event__HeadVar__2_2;

#line 452 "prog_event.m"
    {
#line 452 "prog_event.m"
      return parse_tree__prog_event__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_event_scalar_common_1[1], ((MR_Box) (parse_tree__prog_event__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_event__Cast_HeadVar2_4)));
    }
#line 452 "prog_event.m"
    return parse_tree__prog_event__succeeded;
#line 452 "prog_event.m"
  }
#line 452 "prog_event.m"
}

#line 859 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event__project_event_arg_mode_2_p_0(
#line 859 "prog_event.m"
  MR_Word parse_tree__prog_event__Attribute_3,
#line 859 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__2_2)
#line 859 "prog_event.m"
{
#line 861 "prog_event.m"
  {
#line 861 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 861 "prog_event.m"
    MR_Word parse_tree__prog_event__V_8_8;
#line 861 "prog_event.m"
    MR_Integer parse_tree__prog_event__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Attribute_3, (MR_Integer) 0)));
#line 861 "prog_event.m"
    MR_String parse_tree__prog_event__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Attribute_3, (MR_Integer) 1)));
#line 861 "prog_event.m"
    MR_Word parse_tree__prog_event__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Attribute_3, (MR_Integer) 2)));

#line 861 "prog_event.m"
    *parse_tree__prog_event__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Attribute_3, (MR_Integer) 3)));
#line 861 "prog_event.m"
    parse_tree__prog_event__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Attribute_3, (MR_Integer) 4)));
#line 862 "prog_event.m"
    parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 861 "prog_event.m"
    return parse_tree__prog_event__succeeded;
#line 861 "prog_event.m"
  }
#line 859 "prog_event.m"
}

#line 854 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event__project_event_arg_type_2_p_0(
#line 854 "prog_event.m"
  MR_Word parse_tree__prog_event__Attribute_3,
#line 854 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__2_2)
#line 854 "prog_event.m"
{
#line 856 "prog_event.m"
  {
#line 856 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 856 "prog_event.m"
    MR_Word parse_tree__prog_event__V_8_8;
#line 856 "prog_event.m"
    MR_Integer parse_tree__prog_event__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Attribute_3, (MR_Integer) 0)));
#line 856 "prog_event.m"
    MR_String parse_tree__prog_event__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Attribute_3, (MR_Integer) 1)));
#line 856 "prog_event.m"
    MR_Word parse_tree__prog_event__V_7_7;

#line 856 "prog_event.m"
    *parse_tree__prog_event__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Attribute_3, (MR_Integer) 2)));
#line 856 "prog_event.m"
    parse_tree__prog_event__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Attribute_3, (MR_Integer) 3)));
#line 856 "prog_event.m"
    parse_tree__prog_event__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Attribute_3, (MR_Integer) 4)));
#line 857 "prog_event.m"
    parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 856 "prog_event.m"
    return parse_tree__prog_event__succeeded;
#line 856 "prog_event.m"
  }
#line 854 "prog_event.m"
}

#line 812 "prog_event.m"
static MR_Box MR_CALL 
parse_tree__prog_event__describe_attr_type_1_f_0_2(
#line 812 "prog_event.m"
  MR_Box parse_tree__prog_event__closure_arg,
#line 812 "prog_event.m"
  MR_Box parse_tree__prog_event__wrapper_arg_1)
#line 812 "prog_event.m"
{
#line 812 "prog_event.m"
  {
#line 812 "prog_event.m"
    MR_Box parse_tree__prog_event__wrapper_arg_2;
#line 812 "prog_event.m"
    MR_Box parse_tree__prog_event__closure = parse_tree__prog_event__closure_arg;
#line 812 "prog_event.m"
    MR_String parse_tree__prog_event__conv0_Desc_4;

#line 812 "prog_event.m"
    {
#line 812 "prog_event.m"
      parse_tree__prog_event__conv0_Desc_4 = parse_tree__prog_event__describe_attr_type_1_f_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1));
    }
#line 812 "prog_event.m"
    parse_tree__prog_event__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_event__conv0_Desc_4));
#line 812 "prog_event.m"
    return parse_tree__prog_event__wrapper_arg_2;
#line 812 "prog_event.m"
  }
#line 812 "prog_event.m"
}

#line 805 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event__describe_attr_type_1_f_0_1(
#line 805 "prog_event.m"
  MR_Box parse_tree__prog_event__closure_arg)
#line 805 "prog_event.m"
{
#line 805 "prog_event.m"
  {
#line 805 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 805 "prog_event.m"
    MR_Box parse_tree__prog_event__closure = parse_tree__prog_event__closure_arg;

#line 805 "prog_event.m"
    {
#line 805 "prog_event.m"
      return parse_tree__prog_event__succeeded = parse_tree__prog_event__IntroducedFrom__pred__describe_attr_type__805__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__closure, (MR_Integer) 4))));
    }
#line 805 "prog_event.m"
    return parse_tree__prog_event__succeeded;
#line 805 "prog_event.m"
  }
#line 805 "prog_event.m"
}

#line 800 "prog_event.m"
static MR_String MR_CALL 
parse_tree__prog_event__describe_attr_type_1_f_0(
#line 800 "prog_event.m"
  MR_Word parse_tree__prog_event__Type_3)
#line 800 "prog_event.m"
{
#line 804 "prog_event.m"
  {
#line 804 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 804 "prog_event.m"
    MR_String parse_tree__prog_event__Desc_4;

#line 804 "prog_event.m"
    if (((MR_tag((MR_Word) parse_tree__prog_event__Type_3)) == (MR_mktag((MR_Integer) 2))))
#line 817 "prog_event.m"
      {
#line 817 "prog_event.m"
        MR_Word parse_tree__prog_event__BuiltinType_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_event__Type_3, (MR_Integer) 0)));

#line 818 "prog_event.m"
        {
#line 818 "prog_event.m"
          parse_tree__prog_out__builtin_type_to_string_2_p_0(parse_tree__prog_event__BuiltinType_11, &parse_tree__prog_event__Desc_4);
        }
#line 817 "prog_event.m"
      }
#line 804 "prog_event.m"
    else
#line 804 "prog_event.m"
      if (((MR_tag((MR_Word) parse_tree__prog_event__Type_3)) == (MR_mktag((MR_Integer) 1))))
#line 804 "prog_event.m"
        {
#line 804 "prog_event.m"
          MR_Word parse_tree__prog_event__SymName_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__Type_3, (MR_Integer) 0)));
#line 804 "prog_event.m"
          MR_Word parse_tree__prog_event__ArgTypes_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__Type_3, (MR_Integer) 1)));
#line 804 "prog_event.m"
          MR_Word parse_tree__prog_event__Kind_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__Type_3, (MR_Integer) 2)));
#line 804 "prog_event.m"
          MR_String parse_tree__prog_event__ArgTypeDescs_8;
#line 804 "prog_event.m"
          MR_Word parse_tree__prog_event__V_28_28;
#line 804 "prog_event.m"
          MR_String parse_tree__prog_event__V_40_40;

#line 805 "prog_event.m"
          {
#line 805 "prog_event.m"
            parse_tree__prog_event__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 805 "prog_event.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_28_28, 0) = ((MR_Box) (&parse_tree__prog_event_scalar_common_6[6]));
#line 805 "prog_event.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_28_28, 1) = ((MR_Box) (parse_tree__prog_event__describe_attr_type_1_f_0_1));
#line 805 "prog_event.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 805 "prog_event.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_28_28, 3) = ((MR_Box) (parse_tree__prog_event__Kind_7));
#line 805 "prog_event.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_28_28, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 805 "prog_event.m"
          }
#line 805 "prog_event.m"
          {
#line 805 "prog_event.m"
            mercury__require__expect_4_p_0(parse_tree__prog_event__V_28_28, (MR_String) "parse_tree.prog_event", (MR_String) "function \140parse_tree.prog_event.describe_attr_type\'/1", (MR_String) "not kind_star");
          }
#line 809 "prog_event.m"
          if ((parse_tree__prog_event__ArgTypes_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 808 "prog_event.m"
            parse_tree__prog_event__ArgTypeDescs_8 = (MR_String) "";
#line 809 "prog_event.m"
          else
#line 810 "prog_event.m"
            {
#line 810 "prog_event.m"
              MR_String parse_tree__prog_event__V_34_34;
#line 810 "prog_event.m"
              MR_String parse_tree__prog_event__V_35_35;
#line 810 "prog_event.m"
              MR_Word parse_tree__prog_event__V_37_37;

#line 812 "prog_event.m"
              {
#line 812 "prog_event.m"
                parse_tree__prog_event__V_37_37 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_event_scalar_common_2[13], parse_tree__prog_event__ArgTypes_6);
              }
#line 812 "prog_event.m"
              {
#line 812 "prog_event.m"
                parse_tree__prog_event__V_35_35 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__prog_event__V_37_37);
              }
#line 813 "prog_event.m"
              {
#line 813 "prog_event.m"
                parse_tree__prog_event__V_34_34 = mercury__string__f_43_43_2_f_0(parse_tree__prog_event__V_35_35, (MR_String) ")");
              }
#line 811 "prog_event.m"
              {
#line 811 "prog_event.m"
                parse_tree__prog_event__ArgTypeDescs_8 = mercury__string__f_43_43_2_f_0((MR_String) "(", parse_tree__prog_event__V_34_34);
              }
#line 810 "prog_event.m"
            }
#line 815 "prog_event.m"
          {
#line 815 "prog_event.m"
            parse_tree__prog_event__V_40_40 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__prog_event__SymName_5);
          }
#line 815 "prog_event.m"
          {
#line 815 "prog_event.m"
            return parse_tree__prog_event__Desc_4 = mercury__string__f_43_43_2_f_0(parse_tree__prog_event__V_40_40, parse_tree__prog_event__ArgTypeDescs_8);
          }
#line 804 "prog_event.m"
        }
#line 804 "prog_event.m"
      else
#line 804 "prog_event.m"
        if (((((MR_tag((MR_Word) parse_tree__prog_event__Type_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_event__Type_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 821 "prog_event.m"
          parse_tree__prog_event__Desc_4 = (MR_String) "function";
#line 804 "prog_event.m"
        else
#line 827 "prog_event.m"
          {
#line 828 "prog_event.m"
            {
#line 828 "prog_event.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_event", (MR_String) "function \140parse_tree.prog_event.describe_attr_type\'/1", (MR_String) "type not constructed by prog_event");
            }
#line 827 "prog_event.m"
          }
#line 804 "prog_event.m"
    return parse_tree__prog_event__Desc_4;
#line 804 "prog_event.m"
  }
#line 800 "prog_event.m"
}

#line 782 "prog_event.m"
static MR_String MR_CALL 
parse_tree__prog_event__describe_event_attr_1_f_0(
#line 782 "prog_event.m"
  MR_Word parse_tree__prog_event__Attr_3)
#line 782 "prog_event.m"
{
#line 784 "prog_event.m"
  {
#line 784 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 784 "prog_event.m"
    MR_String parse_tree__prog_event__Desc_4;
#line 784 "prog_event.m"
    MR_String parse_tree__prog_event__Name_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Attr_3, (MR_Integer) 1)));
#line 784 "prog_event.m"
    MR_Word parse_tree__prog_event__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Attr_3, (MR_Integer) 2)));
#line 784 "prog_event.m"
    MR_Word parse_tree__prog_event__MaybeSynthCall_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Attr_3, (MR_Integer) 4)));
#line 784 "prog_event.m"
    MR_String parse_tree__prog_event__TypeDesc_10;
#line 784 "prog_event.m"
    MR_String parse_tree__prog_event__SynthCallDesc_11;
#line 784 "prog_event.m"
    MR_String parse_tree__prog_event__V_26_26;
#line 784 "prog_event.m"
    MR_String parse_tree__prog_event__V_28_28;
#line 785 "prog_event.m"
    MR_Integer parse_tree__prog_event___Num_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Attr_3, (MR_Integer) 0)));
#line 785 "prog_event.m"
    MR_Word parse_tree__prog_event___Mode_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Attr_3, (MR_Integer) 3)));

#line 786 "prog_event.m"
    {
#line 786 "prog_event.m"
      parse_tree__prog_event__TypeDesc_10 = parse_tree__prog_event__describe_attr_type_1_f_0(parse_tree__prog_event__Type_7);
    }
#line 790 "prog_event.m"
    if ((parse_tree__prog_event__MaybeSynthCall_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 789 "prog_event.m"
      parse_tree__prog_event__SynthCallDesc_11 = (MR_String) "";
#line 790 "prog_event.m"
    else
#line 791 "prog_event.m"
      {
#line 791 "prog_event.m"
        MR_Word parse_tree__prog_event__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 791 "prog_event.m"
        MR_Word parse_tree__prog_event__TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 791 "prog_event.m"
        MR_Word parse_tree__prog_event__SynthCall_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__MaybeSynthCall_9, (MR_Integer) 0)));
#line 791 "prog_event.m"
        MR_Word parse_tree__prog_event__FuncAttrNameNum_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SynthCall_12, (MR_Integer) 0)));
#line 791 "prog_event.m"
        MR_Word parse_tree__prog_event__ArgAttrNameNums_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SynthCall_12, (MR_Integer) 1)));
#line 791 "prog_event.m"
        MR_String parse_tree__prog_event__ArgAttrDesc_16;
#line 791 "prog_event.m"
        MR_Word parse_tree__prog_event__V_18_18;
#line 791 "prog_event.m"
        MR_String parse_tree__prog_event__V_20_20;
#line 791 "prog_event.m"
        MR_String parse_tree__prog_event__V_21_21;
#line 791 "prog_event.m"
        MR_String parse_tree__prog_event__V_22_22;
#line 791 "prog_event.m"
        MR_String parse_tree__prog_event__V_24_24;
#line 792 "prog_event.m"
        MR_Word parse_tree__prog_event___Order_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SynthCall_12, (MR_Integer) 2)));
#line 796 "prog_event.m"
        MR_Box parse_tree__prog_event__conv0_V_21_21;

#line 794 "prog_event.m"
        {
#line 794 "prog_event.m"
          parse_tree__prog_event__V_18_18 = mercury__assoc_list__keys_1_f_0(parse_tree__prog_event__TypeCtorInfo_29_29, parse_tree__prog_event__TypeCtorInfo_30_30, parse_tree__prog_event__ArgAttrNameNums_14);
        }
#line 794 "prog_event.m"
        {
#line 794 "prog_event.m"
          parse_tree__prog_event__ArgAttrDesc_16 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__prog_event__V_18_18);
        }
#line 796 "prog_event.m"
        {
#line 796 "prog_event.m"
          parse_tree__prog_event__conv0_V_21_21 = mercury__pair__fst_1_f_0(parse_tree__prog_event__TypeCtorInfo_29_29, parse_tree__prog_event__TypeCtorInfo_30_30, parse_tree__prog_event__FuncAttrNameNum_13);
        }
#line 796 "prog_event.m"
        parse_tree__prog_event__V_21_21 = ((MR_String) parse_tree__prog_event__conv0_V_21_21);
#line 796 "prog_event.m"
        {
#line 796 "prog_event.m"
          parse_tree__prog_event__V_24_24 = mercury__string__f_43_43_2_f_0(parse_tree__prog_event__ArgAttrDesc_16, (MR_String) ")");
        }
#line 796 "prog_event.m"
        {
#line 796 "prog_event.m"
          parse_tree__prog_event__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) "(", parse_tree__prog_event__V_24_24);
        }
#line 796 "prog_event.m"
        {
#line 796 "prog_event.m"
          parse_tree__prog_event__V_20_20 = mercury__string__f_43_43_2_f_0(parse_tree__prog_event__V_21_21, parse_tree__prog_event__V_22_22);
        }
#line 795 "prog_event.m"
        {
#line 795 "prog_event.m"
          parse_tree__prog_event__SynthCallDesc_11 = mercury__string__f_43_43_2_f_0((MR_String) " synthesized by ", parse_tree__prog_event__V_20_20);
        }
#line 791 "prog_event.m"
      }
#line 798 "prog_event.m"
    {
#line 798 "prog_event.m"
      parse_tree__prog_event__V_28_28 = mercury__string__f_43_43_2_f_0(parse_tree__prog_event__TypeDesc_10, parse_tree__prog_event__SynthCallDesc_11);
    }
#line 798 "prog_event.m"
    {
#line 798 "prog_event.m"
      parse_tree__prog_event__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) ": ", parse_tree__prog_event__V_28_28);
    }
#line 798 "prog_event.m"
    {
#line 798 "prog_event.m"
      return parse_tree__prog_event__Desc_4 = mercury__string__f_43_43_2_f_0(parse_tree__prog_event__Name_6, parse_tree__prog_event__V_26_26);
    }
#line 784 "prog_event.m"
    return parse_tree__prog_event__Desc_4;
#line 784 "prog_event.m"
  }
#line 782 "prog_event.m"
}

#line 779 "prog_event.m"
static MR_Box MR_CALL 
parse_tree__prog_event__describe_event_spec_1_f_0_1(
#line 779 "prog_event.m"
  MR_Box parse_tree__prog_event__closure_arg,
#line 779 "prog_event.m"
  MR_Box parse_tree__prog_event__wrapper_arg_1)
#line 779 "prog_event.m"
{
#line 779 "prog_event.m"
  {
#line 779 "prog_event.m"
    MR_Box parse_tree__prog_event__wrapper_arg_2;
#line 779 "prog_event.m"
    MR_Box parse_tree__prog_event__closure = parse_tree__prog_event__closure_arg;
#line 779 "prog_event.m"
    MR_String parse_tree__prog_event__conv0_Desc_4;

#line 779 "prog_event.m"
    {
#line 779 "prog_event.m"
      parse_tree__prog_event__conv0_Desc_4 = parse_tree__prog_event__describe_event_attr_1_f_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1));
    }
#line 779 "prog_event.m"
    parse_tree__prog_event__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_event__conv0_Desc_4));
#line 779 "prog_event.m"
    return parse_tree__prog_event__wrapper_arg_2;
#line 779 "prog_event.m"
  }
#line 779 "prog_event.m"
}

#line 774 "prog_event.m"
static MR_String MR_CALL 
parse_tree__prog_event__describe_event_spec_1_f_0(
#line 774 "prog_event.m"
  MR_Word parse_tree__prog_event__Spec_3)
#line 774 "prog_event.m"
{
#line 776 "prog_event.m"
  {
#line 776 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 776 "prog_event.m"
    MR_String parse_tree__prog_event__Desc_4;
#line 776 "prog_event.m"
    MR_String parse_tree__prog_event__EventName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Spec_3, (MR_Integer) 1)));
#line 776 "prog_event.m"
    MR_Word parse_tree__prog_event__Attrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Spec_3, (MR_Integer) 3)));
#line 776 "prog_event.m"
    MR_String parse_tree__prog_event__AttrDescs_10;
#line 776 "prog_event.m"
    MR_Word parse_tree__prog_event__V_12_12;
#line 776 "prog_event.m"
    MR_String parse_tree__prog_event__V_15_15;
#line 776 "prog_event.m"
    MR_String parse_tree__prog_event__V_16_16;
#line 776 "prog_event.m"
    MR_String parse_tree__prog_event__V_18_18;
#line 777 "prog_event.m"
    MR_Integer parse_tree__prog_event___EventNumber_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Spec_3, (MR_Integer) 0)));
#line 777 "prog_event.m"
    MR_Integer parse_tree__prog_event___EventLineNumber_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Spec_3, (MR_Integer) 2)));
#line 777 "prog_event.m"
    MR_Word parse_tree__prog_event___SynthAttrNumOrder_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Spec_3, (MR_Integer) 4)));

#line 779 "prog_event.m"
    {
#line 779 "prog_event.m"
      parse_tree__prog_event__V_12_12 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_attribute_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_event_scalar_common_2[12], parse_tree__prog_event__Attrs_8);
    }
#line 779 "prog_event.m"
    {
#line 779 "prog_event.m"
      parse_tree__prog_event__AttrDescs_10 = mercury__string__join_list_2_f_0((MR_String) ",\n", parse_tree__prog_event__V_12_12);
    }
#line 780 "prog_event.m"
    {
#line 780 "prog_event.m"
      parse_tree__prog_event__V_18_18 = mercury__string__f_43_43_2_f_0(parse_tree__prog_event__AttrDescs_10, (MR_String) ")\n");
    }
#line 780 "prog_event.m"
    {
#line 780 "prog_event.m"
      parse_tree__prog_event__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) "(", parse_tree__prog_event__V_18_18);
    }
#line 780 "prog_event.m"
    {
#line 780 "prog_event.m"
      parse_tree__prog_event__V_15_15 = mercury__string__f_43_43_2_f_0(parse_tree__prog_event__EventName_6, parse_tree__prog_event__V_16_16);
    }
#line 780 "prog_event.m"
    {
#line 780 "prog_event.m"
      return parse_tree__prog_event__Desc_4 = mercury__string__f_43_43_2_f_0((MR_String) "event ", parse_tree__prog_event__V_15_15);
    }
#line 776 "prog_event.m"
    return parse_tree__prog_event__Desc_4;
#line 776 "prog_event.m"
  }
#line 774 "prog_event.m"
}

#line 768 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event__compare_event_specs_by_num_3_p_0(
#line 768 "prog_event.m"
  MR_Word parse_tree__prog_event__SpecA_4,
#line 768 "prog_event.m"
  MR_Word parse_tree__prog_event__SpecB_5,
#line 768 "prog_event.m"
  MR_Word * parse_tree__prog_event__Result_6)
#line 768 "prog_event.m"
{
#line 771 "prog_event.m"
  {
#line 771 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 771 "prog_event.m"
    MR_Integer parse_tree__prog_event__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SpecA_4, (MR_Integer) 0)));
#line 771 "prog_event.m"
    MR_Integer parse_tree__prog_event__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SpecB_5, (MR_Integer) 0)));
#line 772 "prog_event.m"
    MR_String parse_tree__prog_event__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SpecA_4, (MR_Integer) 1)));
#line 772 "prog_event.m"
    MR_Integer parse_tree__prog_event__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SpecA_4, (MR_Integer) 2)));
#line 772 "prog_event.m"
    MR_Word parse_tree__prog_event__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SpecA_4, (MR_Integer) 3)));
#line 772 "prog_event.m"
    MR_Word parse_tree__prog_event__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SpecA_4, (MR_Integer) 4)));
#line 772 "prog_event.m"
    MR_String parse_tree__prog_event__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SpecB_5, (MR_Integer) 1)));
#line 772 "prog_event.m"
    MR_Integer parse_tree__prog_event__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SpecB_5, (MR_Integer) 2)));
#line 772 "prog_event.m"
    MR_Word parse_tree__prog_event__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SpecB_5, (MR_Integer) 3)));
#line 772 "prog_event.m"
    MR_Word parse_tree__prog_event__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SpecB_5, (MR_Integer) 4)));

#line 772 "prog_event.m"
    {
#line 772 "prog_event.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_event__Result_6, parse_tree__prog_event__V_7_7, parse_tree__prog_event__V_8_8);
#line 772 "prog_event.m"
      return;
    }
#line 771 "prog_event.m"
  }
#line 768 "prog_event.m"
}

#line 761 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event__update_max_num_attr_3_p_0(
#line 761 "prog_event.m"
  MR_Word parse_tree__prog_event__Spec_4,
#line 761 "prog_event.m"
  MR_Integer parse_tree__prog_event__STATE_VARIABLE_MaxNumAttr_0_8,
#line 761 "prog_event.m"
  MR_Integer * parse_tree__prog_event__STATE_VARIABLE_MaxNumAttr_9)
#line 761 "prog_event.m"
{
#line 763 "prog_event.m"
  {
#line 763 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 763 "prog_event.m"
    MR_Word parse_tree__prog_event__AllAttrs_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Spec_4, (MR_Integer) 3)));
#line 763 "prog_event.m"
    MR_Integer parse_tree__prog_event__NumAttr_7;
#line 764 "prog_event.m"
    MR_Integer parse_tree__prog_event__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Spec_4, (MR_Integer) 0)));
#line 764 "prog_event.m"
    MR_String parse_tree__prog_event__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Spec_4, (MR_Integer) 1)));
#line 764 "prog_event.m"
    MR_Integer parse_tree__prog_event__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Spec_4, (MR_Integer) 2)));
#line 764 "prog_event.m"
    MR_Word parse_tree__prog_event__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Spec_4, (MR_Integer) 4)));

#line 765 "prog_event.m"
    {
#line 765 "prog_event.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_attribute_0, parse_tree__prog_event__AllAttrs_6, &parse_tree__prog_event__NumAttr_7);
    }
#line 766 "prog_event.m"
    {
#line 766 "prog_event.m"
      *parse_tree__prog_event__STATE_VARIABLE_MaxNumAttr_9 = mercury__int__max_2_f_0(parse_tree__prog_event__STATE_VARIABLE_MaxNumAttr_0_8, parse_tree__prog_event__NumAttr_7);
    }
#line 763 "prog_event.m"
  }
#line 761 "prog_event.m"
}

#line 734 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_p_0(
#line 734 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__1_1,
#line 734 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 734 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__3_3,
#line 734 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_0_4,
#line 734 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_5,
#line 734 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__6_6)
#line 734 "prog_event.m"
{
#line 738 "prog_event.m"
  {
#line 738 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;

#line 738 "prog_event.m"
    if ((parse_tree__prog_event__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 738 "prog_event.m"
      {
#line 739 "prog_event.m"
        *parse_tree__prog_event__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 739 "prog_event.m"
        *parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_5 = parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_0_4;
#line 738 "prog_event.m"
      }
#line 738 "prog_event.m"
    else
#line 741 "prog_event.m"
      {
#line 741 "prog_event.m"
        MR_String parse_tree__prog_event__ArgName_13 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
#line 741 "prog_event.m"
        MR_Word parse_tree__prog_event__ArgNames_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));
#line 741 "prog_event.m"
        MR_Word parse_tree__prog_event__PrevSynthOrderArg_18;
#line 741 "prog_event.m"
        MR_Word parse_tree__prog_event__PrevSynthOrderArgs_19;
#line 741 "prog_event.m"
        MR_Word parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_22_22;

#line 701 "prog_event.m"
        {
#line 701 "prog_event.m"
          parse_tree__prog_event__succeeded = mercury__set__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (parse_tree__prog_event__ArgName_13)), parse_tree__prog_event__HeadVar__3_3);
        }
#line 705 "prog_event.m"
        if (parse_tree__prog_event__succeeded)
#line 704 "prog_event.m"
          {
#line 704 "prog_event.m"
            parse_tree__prog_event__PrevSynthOrderArg_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 704 "prog_event.m"
            parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_22_22 = parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_0_4;
#line 704 "prog_event.m"
          }
#line 705 "prog_event.m"
        else
#line 727 "prog_event.m"
          {
#line 727 "prog_event.m"
            MR_Word parse_tree__prog_event__AttrInfo_32;
#line 706 "prog_event.m"
            MR_Box parse_tree__prog_event__conv0_AttrInfo_32;

#line 706 "prog_event.m"
            {
#line 706 "prog_event.m"
              parse_tree__prog_event__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0, parse_tree__prog_event__HeadVar__1_1, ((MR_Box) (parse_tree__prog_event__ArgName_13)), &parse_tree__prog_event__conv0_AttrInfo_32);
            }
#line 706 "prog_event.m"
            if (parse_tree__prog_event__succeeded)
#line 706 "prog_event.m"
              {
#line 706 "prog_event.m"
                parse_tree__prog_event__AttrInfo_32 = ((MR_Word) parse_tree__prog_event__conv0_AttrInfo_32);
#line 706 "prog_event.m"
                parse_tree__prog_event__succeeded = MR_TRUE;
#line 706 "prog_event.m"
              }
#line 727 "prog_event.m"
            if (parse_tree__prog_event__succeeded)
#line 707 "prog_event.m"
              {
#line 707 "prog_event.m"
                MR_Word parse_tree__prog_event__AttrTerm_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_32, (MR_Integer) 3)));
#line 707 "prog_event.m"
                MR_Integer parse_tree__prog_event__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_32, (MR_Integer) 0)));
#line 707 "prog_event.m"
                MR_String parse_tree__prog_event__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_32, (MR_Integer) 1)));
#line 707 "prog_event.m"
                MR_Integer parse_tree__prog_event__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_32, (MR_Integer) 2)));

#line 713 "prog_event.m"
                if (((MR_tag((MR_Word) parse_tree__prog_event__AttrTerm_33)) == (MR_mktag((MR_Integer) 1))))
#line 714 "prog_event.m"
                  {
#line 714 "prog_event.m"
                    MR_Word parse_tree__prog_event__TypeCtorInfo_36_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 714 "prog_event.m"
                    MR_Word parse_tree__prog_event__SynthCall_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__AttrTerm_33, (MR_Integer) 1)));
#line 714 "prog_event.m"
                    MR_String parse_tree__prog_event__FuncAttrName_38 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SynthCall_37, (MR_Integer) 0)));
#line 714 "prog_event.m"
                    MR_Word parse_tree__prog_event__ArgAttrNames_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SynthCall_37, (MR_Integer) 1)));
#line 714 "prog_event.m"
                    MR_Word parse_tree__prog_event__SubAncestors_40;
#line 714 "prog_event.m"
                    MR_Word parse_tree__prog_event__SubPrevSynthOrder_41;
#line 714 "prog_event.m"
                    MR_Integer parse_tree__prog_event__AttrNum_42;
#line 714 "prog_event.m"
                    MR_Word parse_tree__prog_event__V_43_43;
#line 714 "prog_event.m"
                    MR_Word parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_26_44;
#line 714 "prog_event.m"
                    MR_Word parse_tree__prog_event__V_46_46;
#line 714 "prog_event.m"
                    MR_Word parse_tree__prog_event__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__AttrTerm_33, (MR_Integer) 0)));
#line 436 "prog_event.m"
                    MR_String parse_tree__prog_event__V_56_56;
#line 436 "prog_event.m"
                    MR_Integer parse_tree__prog_event__V_57_57;
#line 436 "prog_event.m"
                    MR_Word parse_tree__prog_event__V_58_58;

#line 717 "prog_event.m"
                    {
#line 717 "prog_event.m"
                      mercury__set__insert_3_p_0(parse_tree__prog_event__TypeCtorInfo_36_54, ((MR_Box) (parse_tree__prog_event__ArgName_13)), parse_tree__prog_event__HeadVar__3_3, &parse_tree__prog_event__SubAncestors_40);
                    }
#line 719 "prog_event.m"
                    {
#line 719 "prog_event.m"
                      parse_tree__prog_event__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "prog_event.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_43_43, 0) = ((MR_Box) (parse_tree__prog_event__FuncAttrName_38));
#line 719 "prog_event.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_43_43, 1) = ((MR_Box) (parse_tree__prog_event__ArgAttrNames_39));
#line 719 "prog_event.m"
                    }
#line 718 "prog_event.m"
                    {
#line 718 "prog_event.m"
                      parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_p_0(parse_tree__prog_event__HeadVar__1_1, parse_tree__prog_event__V_43_43, parse_tree__prog_event__SubAncestors_40, parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_0_4, &parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_26_44, &parse_tree__prog_event__SubPrevSynthOrder_41);
                    }
#line 721 "prog_event.m"
                    {
#line 721 "prog_event.m"
                      mercury__set__insert_3_p_0(parse_tree__prog_event__TypeCtorInfo_36_54, ((MR_Box) (parse_tree__prog_event__ArgName_13)), parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_26_44, &parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_22_22);
                    }
#line 436 "prog_event.m"
                    parse_tree__prog_event__AttrNum_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_32, (MR_Integer) 0)));
#line 436 "prog_event.m"
                    parse_tree__prog_event__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_32, (MR_Integer) 1)));
#line 436 "prog_event.m"
                    parse_tree__prog_event__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_32, (MR_Integer) 2)));
#line 436 "prog_event.m"
                    parse_tree__prog_event__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_32, (MR_Integer) 3)));
#line 725 "prog_event.m"
                    {
#line 725 "prog_event.m"
                      parse_tree__prog_event__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "prog_event.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_46_46, 0) = ((MR_Box) (parse_tree__prog_event__AttrNum_42));
#line 725 "prog_event.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 725 "prog_event.m"
                    }
#line 725 "prog_event.m"
                    {
#line 725 "prog_event.m"
                      parse_tree__prog_event__PrevSynthOrderArg_18 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, parse_tree__prog_event__SubPrevSynthOrder_41, parse_tree__prog_event__V_46_46);
                    }
#line 714 "prog_event.m"
                  }
#line 713 "prog_event.m"
                else
#line 711 "prog_event.m"
                  {
#line 712 "prog_event.m"
                    parse_tree__prog_event__PrevSynthOrderArg_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 712 "prog_event.m"
                    parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_22_22 = parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_0_4;
#line 711 "prog_event.m"
                  }
#line 707 "prog_event.m"
              }
#line 727 "prog_event.m"
            else
#line 730 "prog_event.m"
              {
#line 730 "prog_event.m"
                parse_tree__prog_event__PrevSynthOrderArg_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 730 "prog_event.m"
                parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_22_22 = parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_0_4;
#line 730 "prog_event.m"
              }
#line 727 "prog_event.m"
          }
#line 744 "prog_event.m"
        {
#line 744 "prog_event.m"
          parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_p_0(parse_tree__prog_event__HeadVar__1_1, parse_tree__prog_event__ArgNames_14, parse_tree__prog_event__HeadVar__3_3, parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_22_22, parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_5, &parse_tree__prog_event__PrevSynthOrderArgs_19);
        }
#line 746 "prog_event.m"
        {
#line 746 "prog_event.m"
          *parse_tree__prog_event__HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, parse_tree__prog_event__PrevSynthOrderArg_18, parse_tree__prog_event__PrevSynthOrderArgs_19);
        }
#line 741 "prog_event.m"
      }
#line 738 "prog_event.m"
  }
#line 734 "prog_event.m"
}

#line 696 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event__compute_prev_synth_attr_order_6_p_0(
#line 696 "prog_event.m"
  MR_Word parse_tree__prog_event__AttrNameMap_7,
#line 696 "prog_event.m"
  MR_String parse_tree__prog_event__AttrName_8,
#line 696 "prog_event.m"
  MR_Word parse_tree__prog_event__Ancestors_9,
#line 696 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_0_23,
#line 696 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_24,
#line 696 "prog_event.m"
  MR_Word * parse_tree__prog_event__PrevSynthOrder_11)
#line 696 "prog_event.m"
{
#line 705 "prog_event.m"
  {
#line 705 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;

#line 701 "prog_event.m"
    {
#line 701 "prog_event.m"
      parse_tree__prog_event__succeeded = mercury__set__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (parse_tree__prog_event__AttrName_8)), parse_tree__prog_event__Ancestors_9);
    }
#line 705 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 704 "prog_event.m"
      {
#line 704 "prog_event.m"
        *parse_tree__prog_event__PrevSynthOrder_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 704 "prog_event.m"
        *parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_24 = parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_0_23;
#line 704 "prog_event.m"
      }
#line 705 "prog_event.m"
    else
#line 727 "prog_event.m"
      {
#line 727 "prog_event.m"
        MR_Word parse_tree__prog_event__AttrInfo_12;
#line 706 "prog_event.m"
        MR_Box parse_tree__prog_event__conv0_AttrInfo_12;

#line 706 "prog_event.m"
        {
#line 706 "prog_event.m"
          parse_tree__prog_event__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0, parse_tree__prog_event__AttrNameMap_7, ((MR_Box) (parse_tree__prog_event__AttrName_8)), &parse_tree__prog_event__conv0_AttrInfo_12);
        }
#line 706 "prog_event.m"
        if (parse_tree__prog_event__succeeded)
#line 706 "prog_event.m"
          {
#line 706 "prog_event.m"
            parse_tree__prog_event__AttrInfo_12 = ((MR_Word) parse_tree__prog_event__conv0_AttrInfo_12);
#line 706 "prog_event.m"
            parse_tree__prog_event__succeeded = MR_TRUE;
#line 706 "prog_event.m"
          }
#line 727 "prog_event.m"
        if (parse_tree__prog_event__succeeded)
#line 707 "prog_event.m"
          {
#line 707 "prog_event.m"
            MR_Word parse_tree__prog_event__AttrTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_12, (MR_Integer) 3)));
#line 707 "prog_event.m"
            MR_Integer parse_tree__prog_event__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_12, (MR_Integer) 0)));
#line 707 "prog_event.m"
            MR_String parse_tree__prog_event__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_12, (MR_Integer) 1)));
#line 707 "prog_event.m"
            MR_Integer parse_tree__prog_event__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_12, (MR_Integer) 2)));

#line 713 "prog_event.m"
            if (((MR_tag((MR_Word) parse_tree__prog_event__AttrTerm_13)) == (MR_mktag((MR_Integer) 1))))
#line 714 "prog_event.m"
              {
#line 714 "prog_event.m"
                MR_Word parse_tree__prog_event__TypeCtorInfo_36_36 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 714 "prog_event.m"
                MR_Word parse_tree__prog_event__SynthCall_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__AttrTerm_13, (MR_Integer) 1)));
#line 714 "prog_event.m"
                MR_String parse_tree__prog_event__FuncAttrName_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SynthCall_17, (MR_Integer) 0)));
#line 714 "prog_event.m"
                MR_Word parse_tree__prog_event__ArgAttrNames_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SynthCall_17, (MR_Integer) 1)));
#line 714 "prog_event.m"
                MR_Word parse_tree__prog_event__SubAncestors_20;
#line 714 "prog_event.m"
                MR_Word parse_tree__prog_event__SubPrevSynthOrder_21;
#line 714 "prog_event.m"
                MR_Integer parse_tree__prog_event__AttrNum_22;
#line 714 "prog_event.m"
                MR_Word parse_tree__prog_event__V_25_25;
#line 714 "prog_event.m"
                MR_Word parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_26_26;
#line 714 "prog_event.m"
                MR_Word parse_tree__prog_event__V_28_28;
#line 714 "prog_event.m"
                MR_Word parse_tree__prog_event__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__AttrTerm_13, (MR_Integer) 0)));
#line 436 "prog_event.m"
                MR_String parse_tree__prog_event__V_38_38;
#line 436 "prog_event.m"
                MR_Integer parse_tree__prog_event__V_39_39;
#line 436 "prog_event.m"
                MR_Word parse_tree__prog_event__V_40_40;

#line 717 "prog_event.m"
                {
#line 717 "prog_event.m"
                  mercury__set__insert_3_p_0(parse_tree__prog_event__TypeCtorInfo_36_36, ((MR_Box) (parse_tree__prog_event__AttrName_8)), parse_tree__prog_event__Ancestors_9, &parse_tree__prog_event__SubAncestors_20);
                }
#line 719 "prog_event.m"
                {
#line 719 "prog_event.m"
                  parse_tree__prog_event__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_25_25, 0) = ((MR_Box) (parse_tree__prog_event__FuncAttrName_18));
#line 719 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_25_25, 1) = ((MR_Box) (parse_tree__prog_event__ArgAttrNames_19));
#line 719 "prog_event.m"
                }
#line 718 "prog_event.m"
                {
#line 718 "prog_event.m"
                  parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_p_0(parse_tree__prog_event__AttrNameMap_7, parse_tree__prog_event__V_25_25, parse_tree__prog_event__SubAncestors_20, parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_0_23, &parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_26_26, &parse_tree__prog_event__SubPrevSynthOrder_21);
                }
#line 721 "prog_event.m"
                {
#line 721 "prog_event.m"
                  mercury__set__insert_3_p_0(parse_tree__prog_event__TypeCtorInfo_36_36, ((MR_Box) (parse_tree__prog_event__AttrName_8)), parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_26_26, parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_24);
                }
#line 436 "prog_event.m"
                parse_tree__prog_event__AttrNum_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_12, (MR_Integer) 0)));
#line 436 "prog_event.m"
                parse_tree__prog_event__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_12, (MR_Integer) 1)));
#line 436 "prog_event.m"
                parse_tree__prog_event__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_12, (MR_Integer) 2)));
#line 436 "prog_event.m"
                parse_tree__prog_event__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_12, (MR_Integer) 3)));
#line 725 "prog_event.m"
                {
#line 725 "prog_event.m"
                  parse_tree__prog_event__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_28_28, 0) = ((MR_Box) (parse_tree__prog_event__AttrNum_22));
#line 725 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 725 "prog_event.m"
                }
#line 725 "prog_event.m"
                {
#line 725 "prog_event.m"
                  *parse_tree__prog_event__PrevSynthOrder_11 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, parse_tree__prog_event__SubPrevSynthOrder_21, parse_tree__prog_event__V_28_28);
                }
#line 714 "prog_event.m"
              }
#line 713 "prog_event.m"
            else
#line 711 "prog_event.m"
              {
#line 712 "prog_event.m"
                *parse_tree__prog_event__PrevSynthOrder_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 712 "prog_event.m"
                *parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_24 = parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_0_23;
#line 711 "prog_event.m"
              }
#line 707 "prog_event.m"
          }
#line 727 "prog_event.m"
        else
#line 730 "prog_event.m"
          {
#line 730 "prog_event.m"
            *parse_tree__prog_event__PrevSynthOrder_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 730 "prog_event.m"
            *parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_24 = parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_0_23;
#line 730 "prog_event.m"
          }
#line 727 "prog_event.m"
      }
#line 705 "prog_event.m"
  }
#line 696 "prog_event.m"
}

#line 690 "prog_event.m"
static MR_Box MR_CALL 
parse_tree__prog_event__convert_term_to_type_1_f_0_1(
#line 690 "prog_event.m"
  MR_Box parse_tree__prog_event__closure_arg,
#line 690 "prog_event.m"
  MR_Box parse_tree__prog_event__wrapper_arg_1)
#line 690 "prog_event.m"
{
#line 690 "prog_event.m"
  {
#line 690 "prog_event.m"
    MR_Box parse_tree__prog_event__wrapper_arg_2;
#line 690 "prog_event.m"
    MR_Box parse_tree__prog_event__closure = parse_tree__prog_event__closure_arg;
#line 690 "prog_event.m"
    MR_Word parse_tree__prog_event__conv0_Type_4;

#line 690 "prog_event.m"
    {
#line 690 "prog_event.m"
      parse_tree__prog_event__conv0_Type_4 = parse_tree__prog_event__convert_term_to_type_1_f_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1));
    }
#line 690 "prog_event.m"
    parse_tree__prog_event__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_event__conv0_Type_4));
#line 690 "prog_event.m"
    return parse_tree__prog_event__wrapper_arg_2;
#line 690 "prog_event.m"
  }
#line 690 "prog_event.m"
}

#line 679 "prog_event.m"
static MR_Word MR_CALL 
parse_tree__prog_event__convert_term_to_type_1_f_0(
#line 679 "prog_event.m"
  MR_Word parse_tree__prog_event__Term_3)
#line 679 "prog_event.m"
{
#line 681 "prog_event.m"
  {
#line 681 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 681 "prog_event.m"
    MR_Word parse_tree__prog_event__Type_4;
#line 681 "prog_event.m"
    MR_String parse_tree__prog_event__Name_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Term_3, (MR_Integer) 0)));
#line 681 "prog_event.m"
    MR_Word parse_tree__prog_event__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Term_3, (MR_Integer) 1)));
#line 688 "prog_event.m"
    MR_Word parse_tree__prog_event__BuiltinType_7;

#line 684 "prog_event.m"
    parse_tree__prog_event__succeeded = (parse_tree__prog_event__Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 684 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 685 "prog_event.m"
      {
#line 685 "prog_event.m"
        parse_tree__prog_event__succeeded = parse_tree__prog_out__builtin_type_to_string_2_p_1(&parse_tree__prog_event__BuiltinType_7, parse_tree__prog_event__Name_5);
      }
#line 688 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 687 "prog_event.m"
      {
#line 687 "prog_event.m"
        parse_tree__prog_event__Type_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 687 "prog_event.m"
        MR_hl_field(MR_mktag(2), parse_tree__prog_event__Type_4, 0) = ((MR_Box) (parse_tree__prog_event__BuiltinType_7));
#line 687 "prog_event.m"
      }
#line 688 "prog_event.m"
    else
#line 689 "prog_event.m"
      {
#line 689 "prog_event.m"
        MR_Word parse_tree__prog_event__SymName_8;
#line 689 "prog_event.m"
        MR_Word parse_tree__prog_event__ArgTypes_9;

#line 689 "prog_event.m"
        {
#line 689 "prog_event.m"
          parse_tree__prog_event__SymName_8 = mdbcomp__sym_name__string_to_sym_name_1_f_0(parse_tree__prog_event__Name_5);
        }
#line 690 "prog_event.m"
        {
#line 690 "prog_event.m"
          parse_tree__prog_event__ArgTypes_9 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_term_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_event_scalar_common_2[11], parse_tree__prog_event__Args_6);
        }
#line 691 "prog_event.m"
        {
#line 691 "prog_event.m"
          parse_tree__prog_event__Type_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 691 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__Type_4, 0) = ((MR_Box) (parse_tree__prog_event__SymName_8));
#line 691 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__Type_4, 1) = ((MR_Box) (parse_tree__prog_event__ArgTypes_9));
#line 691 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__Type_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 691 "prog_event.m"
        }
#line 689 "prog_event.m"
      }
#line 681 "prog_event.m"
    return parse_tree__prog_event__Type_4;
#line 681 "prog_event.m"
  }
#line 679 "prog_event.m"
}

#line 645 "prog_event.m"
static MR_Box MR_CALL 
parse_tree__prog_event__convert_terms_to_attrs_10_p_0_2(
#line 645 "prog_event.m"
  MR_Box parse_tree__prog_event__closure_arg,
#line 645 "prog_event.m"
  MR_Box parse_tree__prog_event__wrapper_arg_1)
#line 645 "prog_event.m"
{
#line 645 "prog_event.m"
  {
#line 645 "prog_event.m"
    MR_Box parse_tree__prog_event__wrapper_arg_2;
#line 645 "prog_event.m"
    MR_Box parse_tree__prog_event__closure = parse_tree__prog_event__closure_arg;
#line 645 "prog_event.m"
    MR_Integer parse_tree__prog_event__conv5_HeadVar__2_2;

#line 645 "prog_event.m"
    {
#line 645 "prog_event.m"
      parse_tree__prog_event__conv5_HeadVar__2_2 = parse_tree__prog_event__attr_info_number_1_f_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1));
    }
#line 645 "prog_event.m"
    parse_tree__prog_event__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_event__conv5_HeadVar__2_2));
#line 645 "prog_event.m"
    return parse_tree__prog_event__wrapper_arg_2;
#line 645 "prog_event.m"
  }
#line 645 "prog_event.m"
}

#line 643 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event__convert_terms_to_attrs_10_p_0_1(
#line 643 "prog_event.m"
  MR_Box parse_tree__prog_event__closure_arg,
#line 643 "prog_event.m"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 643 "prog_event.m"
  MR_Box * parse_tree__prog_event__wrapper_arg_2)
#line 643 "prog_event.m"
{
#line 643 "prog_event.m"
  {
#line 643 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 643 "prog_event.m"
    MR_Box parse_tree__prog_event__closure = parse_tree__prog_event__closure_arg;
#line 643 "prog_event.m"
    MR_Word parse_tree__prog_event__conv4_HeadVar__3_114;

#line 643 "prog_event.m"
    {
#line 643 "prog_event.m"
      parse_tree__prog_event__succeeded = parse_tree__prog_event__IntroducedFrom__pred__convert_terms_to_attrs__643__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__closure, (MR_Integer) 3))), ((MR_String) parse_tree__prog_event__wrapper_arg_1), &parse_tree__prog_event__conv4_HeadVar__3_114);
    }
#line 643 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 643 "prog_event.m"
      {
#line 643 "prog_event.m"
        *parse_tree__prog_event__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_event__conv4_HeadVar__3_114));
#line 643 "prog_event.m"
        parse_tree__prog_event__succeeded = MR_TRUE;
#line 643 "prog_event.m"
      }
#line 643 "prog_event.m"
    return parse_tree__prog_event__succeeded;
#line 643 "prog_event.m"
  }
#line 643 "prog_event.m"
}

#line 621 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event__convert_terms_to_attrs_10_p_0(
#line 621 "prog_event.m"
  MR_String parse_tree__prog_event__EventName_1,
#line 621 "prog_event.m"
  MR_String parse_tree__prog_event__FileName_2,
#line 621 "prog_event.m"
  MR_Word parse_tree__prog_event__AttrNameMap_3,
#line 621 "prog_event.m"
  MR_Word parse_tree__prog_event__AttrTypeMap_4,
#line 621 "prog_event.m"
  MR_Integer parse_tree__prog_event__AttrNum_5,
#line 621 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__6_6,
#line 621 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_RevAttrs_0_7,
#line 621 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_RevAttrs_8,
#line 621 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_9,
#line 621 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_10)
#line 621 "prog_event.m"
{
#line 626 "prog_event.m"
  while (MR_TRUE)
#line 626 "prog_event.m"
    {
#line 626 "prog_event.m"
      /* tailcall optimized into a loop */
#line 626 "prog_event.m"
      {
#line 626 "prog_event.m"
        MR_bool parse_tree__prog_event__succeeded;

#line 626 "prog_event.m"
        if ((parse_tree__prog_event__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 626 "prog_event.m"
          {
#line 626 "prog_event.m"
            *parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_10 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_9;
#line 626 "prog_event.m"
            *parse_tree__prog_event__STATE_VARIABLE_RevAttrs_8 = parse_tree__prog_event__STATE_VARIABLE_RevAttrs_0_7;
#line 626 "prog_event.m"
          }
#line 626 "prog_event.m"
        else
#line 629 "prog_event.m"
          {
#line 629 "prog_event.m"
            MR_Word parse_tree__prog_event__AttrTerm_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__6_6, (MR_Integer) 0)));
#line 629 "prog_event.m"
            MR_Word parse_tree__prog_event__AttrTerms_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__6_6, (MR_Integer) 1)));
#line 629 "prog_event.m"
            MR_String parse_tree__prog_event__AttrName_31 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrTerm_27, (MR_Integer) 0)));
#line 629 "prog_event.m"
            MR_Integer parse_tree__prog_event__AttrLineNumber_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrTerm_27, (MR_Integer) 1)));
#line 629 "prog_event.m"
            MR_Word parse_tree__prog_event__AttrTypeTerm_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrTerm_27, (MR_Integer) 2)));
#line 629 "prog_event.m"
            MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_83_83;
#line 629 "prog_event.m"
            MR_Word parse_tree__prog_event__STATE_VARIABLE_RevAttrs_94_94;
#line 629 "prog_event.m"
            MR_Integer parse_tree__prog_event__V_95_95;

#line 636 "prog_event.m"
            if (((MR_tag((MR_Word) parse_tree__prog_event__AttrTypeTerm_33)) == (MR_mktag((MR_Integer) 2))))
#line 666 "prog_event.m"
              {
#line 666 "prog_event.m"
                MR_Word parse_tree__prog_event__AttrType_104;
#line 662 "prog_event.m"
                MR_Box parse_tree__prog_event__conv0_AttrType_104;

#line 662 "prog_event.m"
                {
#line 662 "prog_event.m"
                  parse_tree__prog_event__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_event__AttrTypeMap_4, ((MR_Box) (parse_tree__prog_event__AttrName_31)), &parse_tree__prog_event__conv0_AttrType_104);
                }
#line 662 "prog_event.m"
                if (parse_tree__prog_event__succeeded)
#line 662 "prog_event.m"
                  {
#line 662 "prog_event.m"
                    parse_tree__prog_event__AttrType_104 = ((MR_Word) parse_tree__prog_event__conv0_AttrType_104);
#line 662 "prog_event.m"
                    parse_tree__prog_event__succeeded = MR_TRUE;
#line 662 "prog_event.m"
                  }
#line 666 "prog_event.m"
                if (parse_tree__prog_event__succeeded)
#line 664 "prog_event.m"
                  {
#line 664 "prog_event.m"
                    MR_Word parse_tree__prog_event__V_56_56;
#line 664 "prog_event.m"
                    MR_Word parse_tree__prog_event__EventAttr_103;

#line 663 "prog_event.m"
                    {
#line 663 "prog_event.m"
                      parse_tree__prog_event__V_56_56 = parse_tree__prog_mode__in_mode_0_f_0();
                    }
#line 663 "prog_event.m"
                    {
#line 663 "prog_event.m"
                      parse_tree__prog_event__EventAttr_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 663 "prog_event.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventAttr_103, 0) = ((MR_Box) (parse_tree__prog_event__AttrNum_5));
#line 663 "prog_event.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventAttr_103, 1) = ((MR_Box) (parse_tree__prog_event__AttrName_31));
#line 663 "prog_event.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventAttr_103, 2) = ((MR_Box) (parse_tree__prog_event__AttrType_104));
#line 663 "prog_event.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventAttr_103, 3) = ((MR_Box) (parse_tree__prog_event__V_56_56));
#line 663 "prog_event.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventAttr_103, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 663 "prog_event.m"
                    }
#line 665 "prog_event.m"
                    {
#line 665 "prog_event.m"
                      parse_tree__prog_event__STATE_VARIABLE_RevAttrs_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "prog_event.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_RevAttrs_94_94, 0) = ((MR_Box) (parse_tree__prog_event__EventAttr_103));
#line 665 "prog_event.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_RevAttrs_94_94, 1) = ((MR_Box) (parse_tree__prog_event__STATE_VARIABLE_RevAttrs_0_7));
#line 665 "prog_event.m"
                    }
#line 665 "prog_event.m"
                    parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_83_83 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_9;
#line 664 "prog_event.m"
                  }
#line 666 "prog_event.m"
                else
#line 669 "prog_event.m"
                  {
#line 669 "prog_event.m"
                    MR_Word parse_tree__prog_event__Pieces_50;
#line 669 "prog_event.m"
                    MR_Word parse_tree__prog_event__ErrorSpec_51;
#line 669 "prog_event.m"
                    MR_Word parse_tree__prog_event__V_61_61;
#line 669 "prog_event.m"
                    MR_Word parse_tree__prog_event__V_62_62;
#line 669 "prog_event.m"
                    MR_Word parse_tree__prog_event__V_63_63;
#line 669 "prog_event.m"
                    MR_Word parse_tree__prog_event__V_66_66;
#line 669 "prog_event.m"
                    MR_Word parse_tree__prog_event__V_67_67;
#line 669 "prog_event.m"
                    MR_Word parse_tree__prog_event__V_76_76;
#line 669 "prog_event.m"
                    MR_Word parse_tree__prog_event__V_77_77;
#line 669 "prog_event.m"
                    MR_Word parse_tree__prog_event__V_78_78;
#line 669 "prog_event.m"
                    MR_Word parse_tree__prog_event__V_79_79;
#line 669 "prog_event.m"
                    MR_Word parse_tree__prog_event__V_80_80;

#line 667 "prog_event.m"
                    {
#line 667 "prog_event.m"
                      parse_tree__prog_event__V_62_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 667 "prog_event.m"
                      MR_hl_field(MR_mktag(2), parse_tree__prog_event__V_62_62, 0) = ((MR_Box) (parse_tree__prog_event__EventName_1));
#line 667 "prog_event.m"
                    }
#line 669 "prog_event.m"
                    {
#line 669 "prog_event.m"
                      parse_tree__prog_event__V_67_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 669 "prog_event.m"
                      MR_hl_field(MR_mktag(2), parse_tree__prog_event__V_67_67, 0) = ((MR_Box) (parse_tree__prog_event__AttrName_31));
#line 669 "prog_event.m"
                    }
#line 669 "prog_event.m"
                    {
#line 669 "prog_event.m"
                      parse_tree__prog_event__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "prog_event.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_66_66, 0) = ((MR_Box) (parse_tree__prog_event__V_67_67));
#line 669 "prog_event.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[10])));
#line 669 "prog_event.m"
                    }
#line 668 "prog_event.m"
                    {
#line 668 "prog_event.m"
                      parse_tree__prog_event__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 668 "prog_event.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[33])));
#line 668 "prog_event.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_63_63, 1) = ((MR_Box) (parse_tree__prog_event__V_66_66));
#line 668 "prog_event.m"
                    }
#line 667 "prog_event.m"
                    {
#line 667 "prog_event.m"
                      parse_tree__prog_event__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "prog_event.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_61_61, 0) = ((MR_Box) (parse_tree__prog_event__V_62_62));
#line 667 "prog_event.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_61_61, 1) = ((MR_Box) (parse_tree__prog_event__V_63_63));
#line 667 "prog_event.m"
                    }
#line 667 "prog_event.m"
                    {
#line 667 "prog_event.m"
                      parse_tree__prog_event__Pieces_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "prog_event.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[26])));
#line 667 "prog_event.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_50, 1) = ((MR_Box) (parse_tree__prog_event__V_61_61));
#line 667 "prog_event.m"
                    }
#line 671 "prog_event.m"
                    {
#line 671 "prog_event.m"
                      parse_tree__prog_event__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 671 "prog_event.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_78_78, 0) = ((MR_Box) (parse_tree__prog_event__FileName_2));
#line 671 "prog_event.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_78_78, 1) = ((MR_Box) (parse_tree__prog_event__AttrLineNumber_32));
#line 671 "prog_event.m"
                    }
#line 672 "prog_event.m"
                    {
#line 672 "prog_event.m"
                      parse_tree__prog_event__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 672 "prog_event.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_80_80, 0) = ((MR_Box) (parse_tree__prog_event__Pieces_50));
#line 672 "prog_event.m"
                    }
#line 672 "prog_event.m"
                    {
#line 672 "prog_event.m"
                      parse_tree__prog_event__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "prog_event.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_79_79, 0) = ((MR_Box) (parse_tree__prog_event__V_80_80));
#line 672 "prog_event.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 672 "prog_event.m"
                    }
#line 671 "prog_event.m"
                    {
#line 671 "prog_event.m"
                      parse_tree__prog_event__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 671 "prog_event.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_77_77, 0) = ((MR_Box) (parse_tree__prog_event__V_78_78));
#line 671 "prog_event.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_77_77, 1) = ((MR_Box) (parse_tree__prog_event__V_79_79));
#line 671 "prog_event.m"
                    }
#line 672 "prog_event.m"
                    {
#line 672 "prog_event.m"
                      parse_tree__prog_event__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "prog_event.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_76_76, 0) = ((MR_Box) (parse_tree__prog_event__V_77_77));
#line 672 "prog_event.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 672 "prog_event.m"
                    }
#line 670 "prog_event.m"
                    {
#line 670 "prog_event.m"
                      parse_tree__prog_event__ErrorSpec_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 670 "prog_event.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 670 "prog_event.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 670 "prog_event.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_51, 2) = ((MR_Box) (parse_tree__prog_event__V_76_76));
#line 670 "prog_event.m"
                    }
#line 673 "prog_event.m"
                    {
#line 673 "prog_event.m"
                      parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 673 "prog_event.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_83_83, 0) = ((MR_Box) (parse_tree__prog_event__ErrorSpec_51));
#line 673 "prog_event.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_83_83, 1) = ((MR_Box) (parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_9));
#line 673 "prog_event.m"
                    }
#line 673 "prog_event.m"
                    parse_tree__prog_event__STATE_VARIABLE_RevAttrs_94_94 = parse_tree__prog_event__STATE_VARIABLE_RevAttrs_0_7;
#line 669 "prog_event.m"
                  }
#line 666 "prog_event.m"
              }
#line 636 "prog_event.m"
            else
#line 636 "prog_event.m"
              if (((MR_tag((MR_Word) parse_tree__prog_event__AttrTypeTerm_33)) == (MR_mktag((MR_Integer) 0))))
#line 632 "prog_event.m"
                {
#line 632 "prog_event.m"
                  MR_Word parse_tree__prog_event__AttrType_35;
#line 632 "prog_event.m"
                  MR_Word parse_tree__prog_event__EventAttr_36;
#line 632 "prog_event.m"
                  MR_Word parse_tree__prog_event__V_92_92;
#line 633 "prog_event.m"
                  MR_Box parse_tree__prog_event__conv1_AttrType_35;

#line 633 "prog_event.m"
                  {
#line 633 "prog_event.m"
                    mercury__map__lookup_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_event__AttrTypeMap_4, ((MR_Box) (parse_tree__prog_event__AttrName_31)), &parse_tree__prog_event__conv1_AttrType_35);
                  }
#line 633 "prog_event.m"
                  parse_tree__prog_event__AttrType_35 = ((MR_Word) parse_tree__prog_event__conv1_AttrType_35);
#line 634 "prog_event.m"
                  {
#line 634 "prog_event.m"
                    parse_tree__prog_event__V_92_92 = parse_tree__prog_mode__in_mode_0_f_0();
                  }
#line 634 "prog_event.m"
                  {
#line 634 "prog_event.m"
                    parse_tree__prog_event__EventAttr_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 634 "prog_event.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventAttr_36, 0) = ((MR_Box) (parse_tree__prog_event__AttrNum_5));
#line 634 "prog_event.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventAttr_36, 1) = ((MR_Box) (parse_tree__prog_event__AttrName_31));
#line 634 "prog_event.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventAttr_36, 2) = ((MR_Box) (parse_tree__prog_event__AttrType_35));
#line 634 "prog_event.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventAttr_36, 3) = ((MR_Box) (parse_tree__prog_event__V_92_92));
#line 634 "prog_event.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventAttr_36, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 634 "prog_event.m"
                  }
#line 635 "prog_event.m"
                  {
#line 635 "prog_event.m"
                    parse_tree__prog_event__STATE_VARIABLE_RevAttrs_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 635 "prog_event.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_RevAttrs_94_94, 0) = ((MR_Box) (parse_tree__prog_event__EventAttr_36));
#line 635 "prog_event.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_RevAttrs_94_94, 1) = ((MR_Box) (parse_tree__prog_event__STATE_VARIABLE_RevAttrs_0_7));
#line 635 "prog_event.m"
                  }
#line 635 "prog_event.m"
                  parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_83_83 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_9;
#line 632 "prog_event.m"
                }
#line 636 "prog_event.m"
              else
#line 637 "prog_event.m"
                {
#line 637 "prog_event.m"
                  MR_Word parse_tree__prog_event__TypeCtorInfo_110_110 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 637 "prog_event.m"
                  MR_Word parse_tree__prog_event__SynthCallTerm_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__AttrTypeTerm_33, (MR_Integer) 1)));
#line 637 "prog_event.m"
                  MR_String parse_tree__prog_event__FuncAttrName_39;
#line 637 "prog_event.m"
                  MR_Word parse_tree__prog_event__ArgAttrNames_40;
#line 637 "prog_event.m"
                  MR_Word parse_tree__prog_event__AttrType_101;
#line 637 "prog_event.m"
                  MR_Word parse_tree__prog_event__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__AttrTypeTerm_33, (MR_Integer) 0)));
#line 638 "prog_event.m"
                  MR_Box parse_tree__prog_event__conv2_AttrType_101;
#line 655 "prog_event.m"
                  MR_Integer parse_tree__prog_event__FuncAttrNum_42;
#line 655 "prog_event.m"
                  MR_Word parse_tree__prog_event__ArgAttrInfos_43;
#line 641 "prog_event.m"
                  MR_Word parse_tree__prog_event__TypeCtorInfo_112_112;
#line 641 "prog_event.m"
                  MR_Word parse_tree__prog_event__FuncAttrInfo_41;
#line 641 "prog_event.m"
                  MR_Word parse_tree__prog_event__V_84_84;
#line 641 "prog_event.m"
                  MR_Box parse_tree__prog_event__conv3_FuncAttrInfo_41;

#line 638 "prog_event.m"
                  {
#line 638 "prog_event.m"
                    mercury__map__lookup_3_p_0(parse_tree__prog_event__TypeCtorInfo_110_110, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_event__AttrTypeMap_4, ((MR_Box) (parse_tree__prog_event__AttrName_31)), &parse_tree__prog_event__conv2_AttrType_101);
                  }
#line 638 "prog_event.m"
                  parse_tree__prog_event__AttrType_101 = ((MR_Word) parse_tree__prog_event__conv2_AttrType_101);
#line 639 "prog_event.m"
                  parse_tree__prog_event__FuncAttrName_39 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SynthCallTerm_38, (MR_Integer) 0)));
#line 639 "prog_event.m"
                  parse_tree__prog_event__ArgAttrNames_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SynthCallTerm_38, (MR_Integer) 1)));
#line 6756 "parse_tree.prog_event.c"
                  parse_tree__prog_event__TypeCtorInfo_112_112 = (MR_Word) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0;
#line 641 "prog_event.m"
                  {
#line 641 "prog_event.m"
                    parse_tree__prog_event__succeeded = mercury__map__search_2_f_0(parse_tree__prog_event__TypeCtorInfo_110_110, parse_tree__prog_event__TypeCtorInfo_112_112, parse_tree__prog_event__AttrNameMap_3, ((MR_Box) (parse_tree__prog_event__FuncAttrName_39)), &parse_tree__prog_event__conv3_FuncAttrInfo_41);
                  }
#line 641 "prog_event.m"
                  if (parse_tree__prog_event__succeeded)
#line 641 "prog_event.m"
                    {
#line 641 "prog_event.m"
                      parse_tree__prog_event__FuncAttrInfo_41 = ((MR_Word) parse_tree__prog_event__conv3_FuncAttrInfo_41);
#line 641 "prog_event.m"
                      parse_tree__prog_event__succeeded = MR_TRUE;
#line 641 "prog_event.m"
                    }
#line 641 "prog_event.m"
                  if (parse_tree__prog_event__succeeded)
#line 641 "prog_event.m"
                    {
#line 642 "prog_event.m"
                      {
#line 642 "prog_event.m"
                        parse_tree__prog_event__FuncAttrNum_42 = parse_tree__prog_event__attr_info_number_1_f_0(parse_tree__prog_event__FuncAttrInfo_41);
                      }
#line 643 "prog_event.m"
                      {
#line 643 "prog_event.m"
                        parse_tree__prog_event__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 643 "prog_event.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_84_84, 0) = ((MR_Box) (&parse_tree__prog_event_scalar_common_5[3]));
#line 643 "prog_event.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_84_84, 1) = ((MR_Box) (parse_tree__prog_event__convert_terms_to_attrs_10_p_0_1));
#line 643 "prog_event.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_84_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 643 "prog_event.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_84_84, 3) = ((MR_Box) (parse_tree__prog_event__AttrNameMap_3));
#line 643 "prog_event.m"
                      }
#line 643 "prog_event.m"
                      {
#line 643 "prog_event.m"
                        parse_tree__prog_event__succeeded = mercury__list__map_3_p_2(parse_tree__prog_event__TypeCtorInfo_110_110, parse_tree__prog_event__TypeCtorInfo_112_112, parse_tree__prog_event__V_84_84, parse_tree__prog_event__ArgAttrNames_40, &parse_tree__prog_event__ArgAttrInfos_43);
                      }
#line 641 "prog_event.m"
                    }
#line 655 "prog_event.m"
                  if (parse_tree__prog_event__succeeded)
#line 645 "prog_event.m"
                    {
#line 645 "prog_event.m"
                      MR_Word parse_tree__prog_event__TypeCtorInfo_118_118 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 645 "prog_event.m"
                      MR_Word parse_tree__prog_event__ArgAttrNums_44;
#line 645 "prog_event.m"
                      MR_Word parse_tree__prog_event__ArgAttrNameNums_45;
#line 645 "prog_event.m"
                      MR_Word parse_tree__prog_event__PrevSynthAttrOrder_47;
#line 645 "prog_event.m"
                      MR_Word parse_tree__prog_event__SynthCall_48;
#line 645 "prog_event.m"
                      MR_Word parse_tree__prog_event__V_86_86;
#line 645 "prog_event.m"
                      MR_Word parse_tree__prog_event__V_87_87;
#line 645 "prog_event.m"
                      MR_Word parse_tree__prog_event__V_88_88;
#line 645 "prog_event.m"
                      MR_Word parse_tree__prog_event__V_89_89;
#line 645 "prog_event.m"
                      MR_Word parse_tree__prog_event__V_90_90;
#line 645 "prog_event.m"
                      MR_Word parse_tree__prog_event__EventAttr_99;
#line 648 "prog_event.m"
                      MR_Word parse_tree__prog_event__V_46_46;

#line 645 "prog_event.m"
                      {
#line 645 "prog_event.m"
                        parse_tree__prog_event__ArgAttrNums_44 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0, parse_tree__prog_event__TypeCtorInfo_118_118, (MR_Word) &parse_tree__prog_event_scalar_common_2[10], parse_tree__prog_event__ArgAttrInfos_43);
                      }
#line 646 "prog_event.m"
                      {
#line 646 "prog_event.m"
                        parse_tree__prog_event__ArgAttrNameNums_45 = mercury__assoc_list__from_corresponding_lists_2_f_0(parse_tree__prog_event__TypeCtorInfo_110_110, parse_tree__prog_event__TypeCtorInfo_118_118, parse_tree__prog_event__ArgAttrNames_40, parse_tree__prog_event__ArgAttrNums_44);
                      }
#line 649 "prog_event.m"
                      {
#line 649 "prog_event.m"
                        parse_tree__prog_event__V_86_86 = mercury__set__init_0_f_0(parse_tree__prog_event__TypeCtorInfo_110_110);
                      }
#line 649 "prog_event.m"
                      {
#line 649 "prog_event.m"
                        parse_tree__prog_event__V_87_87 = mercury__set__init_0_f_0(parse_tree__prog_event__TypeCtorInfo_110_110);
                      }
#line 648 "prog_event.m"
                      {
#line 648 "prog_event.m"
                        parse_tree__prog_event__compute_prev_synth_attr_order_6_p_0(parse_tree__prog_event__AttrNameMap_3, parse_tree__prog_event__AttrName_31, parse_tree__prog_event__V_86_86, parse_tree__prog_event__V_87_87, &parse_tree__prog_event__V_46_46, &parse_tree__prog_event__PrevSynthAttrOrder_47);
                      }
#line 650 "prog_event.m"
                      {
#line 650 "prog_event.m"
                        parse_tree__prog_event__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 650 "prog_event.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_88_88, 0) = ((MR_Box) (parse_tree__prog_event__FuncAttrName_39));
#line 650 "prog_event.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_88_88, 1) = ((MR_Box) (parse_tree__prog_event__FuncAttrNum_42));
#line 650 "prog_event.m"
                      }
#line 650 "prog_event.m"
                      {
#line 650 "prog_event.m"
                        parse_tree__prog_event__SynthCall_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 650 "prog_event.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__SynthCall_48, 0) = ((MR_Box) (parse_tree__prog_event__V_88_88));
#line 650 "prog_event.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__SynthCall_48, 1) = ((MR_Box) (parse_tree__prog_event__ArgAttrNameNums_45));
#line 650 "prog_event.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__SynthCall_48, 2) = ((MR_Box) (parse_tree__prog_event__PrevSynthAttrOrder_47));
#line 650 "prog_event.m"
                      }
#line 652 "prog_event.m"
                      {
#line 652 "prog_event.m"
                        parse_tree__prog_event__V_89_89 = parse_tree__prog_mode__in_mode_0_f_0();
                      }
#line 653 "prog_event.m"
                      {
#line 653 "prog_event.m"
                        parse_tree__prog_event__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 653 "prog_event.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_90_90, 0) = ((MR_Box) (parse_tree__prog_event__SynthCall_48));
#line 653 "prog_event.m"
                      }
#line 652 "prog_event.m"
                      {
#line 652 "prog_event.m"
                        parse_tree__prog_event__EventAttr_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 652 "prog_event.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventAttr_99, 0) = ((MR_Box) (parse_tree__prog_event__AttrNum_5));
#line 652 "prog_event.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventAttr_99, 1) = ((MR_Box) (parse_tree__prog_event__AttrName_31));
#line 652 "prog_event.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventAttr_99, 2) = ((MR_Box) (parse_tree__prog_event__AttrType_101));
#line 652 "prog_event.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventAttr_99, 3) = ((MR_Box) (parse_tree__prog_event__V_89_89));
#line 652 "prog_event.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventAttr_99, 4) = ((MR_Box) (parse_tree__prog_event__V_90_90));
#line 652 "prog_event.m"
                      }
#line 654 "prog_event.m"
                      {
#line 654 "prog_event.m"
                        parse_tree__prog_event__STATE_VARIABLE_RevAttrs_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 654 "prog_event.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_RevAttrs_94_94, 0) = ((MR_Box) (parse_tree__prog_event__EventAttr_99));
#line 654 "prog_event.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_RevAttrs_94_94, 1) = ((MR_Box) (parse_tree__prog_event__STATE_VARIABLE_RevAttrs_0_7));
#line 654 "prog_event.m"
                      }
#line 645 "prog_event.m"
                    }
#line 655 "prog_event.m"
                  else
#line 654 "prog_event.m"
                    parse_tree__prog_event__STATE_VARIABLE_RevAttrs_94_94 = parse_tree__prog_event__STATE_VARIABLE_RevAttrs_0_7;
#line 654 "prog_event.m"
                  parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_83_83 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_9;
#line 637 "prog_event.m"
                }
#line 677 "prog_event.m"
            parse_tree__prog_event__V_95_95 = (parse_tree__prog_event__AttrNum_5 + (MR_Integer) 1);
#line 676 "prog_event.m"
            /* direct tailcall eliminated */
#line 676 "prog_event.m"
            {
#line 676 "prog_event.m"
              MR_Integer parse_tree__prog_event__AttrNum__tmp_copy_5 = parse_tree__prog_event__V_95_95;
#line 676 "prog_event.m"
              MR_Word parse_tree__prog_event__HeadVar__6__tmp_copy_6 = parse_tree__prog_event__AttrTerms_28;
#line 676 "prog_event.m"
              MR_Word parse_tree__prog_event__STATE_VARIABLE_RevAttrs_0__tmp_copy_7 = parse_tree__prog_event__STATE_VARIABLE_RevAttrs_94_94;
#line 676 "prog_event.m"
              MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0__tmp_copy_9 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_83_83;

#line 676 "prog_event.m"
              parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_9 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0__tmp_copy_9;
#line 676 "prog_event.m"
              parse_tree__prog_event__STATE_VARIABLE_RevAttrs_0_7 = parse_tree__prog_event__STATE_VARIABLE_RevAttrs_0__tmp_copy_7;
#line 676 "prog_event.m"
              parse_tree__prog_event__HeadVar__6_6 = parse_tree__prog_event__HeadVar__6__tmp_copy_6;
#line 676 "prog_event.m"
              parse_tree__prog_event__AttrNum_5 = parse_tree__prog_event__AttrNum__tmp_copy_5;
#line 676 "prog_event.m"
            }
#line 676 "prog_event.m"
            continue;
#line 629 "prog_event.m"
          }
#line 626 "prog_event.m"
      }
#line 626 "prog_event.m"
      break;
#line 626 "prog_event.m"
    }
#line 621 "prog_event.m"
}

#line 595 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event__record_arg_dependencies_11_p_0(
#line 595 "prog_event.m"
  MR_String parse_tree__prog_event__EventName_1,
#line 595 "prog_event.m"
  MR_String parse_tree__prog_event__FileName_2,
#line 595 "prog_event.m"
  MR_Integer parse_tree__prog_event__AttrLineNumber_3,
#line 595 "prog_event.m"
  MR_Word parse_tree__prog_event__KeyMap_4,
#line 595 "prog_event.m"
  MR_String parse_tree__prog_event__SynthAttrName_5,
#line 595 "prog_event.m"
  MR_Word parse_tree__prog_event__SynthAttrKey_6,
#line 595 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__7_7,
#line 595 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_DepRel_0_8,
#line 595 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_DepRel_9,
#line 595 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10,
#line 595 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_11)
#line 595 "prog_event.m"
{
#line 600 "prog_event.m"
  while (MR_TRUE)
#line 600 "prog_event.m"
    {
#line 600 "prog_event.m"
      /* tailcall optimized into a loop */
#line 600 "prog_event.m"
      {
#line 600 "prog_event.m"
        MR_bool parse_tree__prog_event__succeeded;

#line 600 "prog_event.m"
        if ((parse_tree__prog_event__HeadVar__7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 600 "prog_event.m"
          {
#line 600 "prog_event.m"
            *parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_11 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10;
#line 600 "prog_event.m"
            *parse_tree__prog_event__STATE_VARIABLE_DepRel_9 = parse_tree__prog_event__STATE_VARIABLE_DepRel_0_8;
#line 600 "prog_event.m"
          }
#line 600 "prog_event.m"
        else
#line 603 "prog_event.m"
          {
#line 603 "prog_event.m"
            MR_String parse_tree__prog_event__AttrName_30 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__7_7, (MR_Integer) 0)));
#line 603 "prog_event.m"
            MR_Word parse_tree__prog_event__AttrNames_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__7_7, (MR_Integer) 1)));
#line 603 "prog_event.m"
            MR_Word parse_tree__prog_event__STATE_VARIABLE_DepRel_41_41;
#line 603 "prog_event.m"
            MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_71_71;
#line 606 "prog_event.m"
            MR_Word parse_tree__prog_event__AttrKey_34;
#line 604 "prog_event.m"
            MR_Box parse_tree__prog_event__conv0_AttrKey_34;

#line 604 "prog_event.m"
            {
#line 604 "prog_event.m"
              parse_tree__prog_event__succeeded = mercury__bimap__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_event_scalar_common_1[0], parse_tree__prog_event__KeyMap_4, ((MR_Box) (parse_tree__prog_event__AttrName_30)), &parse_tree__prog_event__conv0_AttrKey_34);
            }
#line 604 "prog_event.m"
            if (parse_tree__prog_event__succeeded)
#line 604 "prog_event.m"
              {
#line 604 "prog_event.m"
                parse_tree__prog_event__AttrKey_34 = ((MR_Word) parse_tree__prog_event__conv0_AttrKey_34);
#line 604 "prog_event.m"
                parse_tree__prog_event__succeeded = MR_TRUE;
#line 604 "prog_event.m"
              }
#line 606 "prog_event.m"
            if (parse_tree__prog_event__succeeded)
#line 605 "prog_event.m"
              {
#line 605 "prog_event.m"
                {
#line 605 "prog_event.m"
                  mercury__digraph__add_edge_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_event__AttrKey_34, parse_tree__prog_event__SynthAttrKey_6, parse_tree__prog_event__STATE_VARIABLE_DepRel_0_8, &parse_tree__prog_event__STATE_VARIABLE_DepRel_41_41);
                }
#line 605 "prog_event.m"
                parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_71_71 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10;
#line 605 "prog_event.m"
              }
#line 606 "prog_event.m"
            else
#line 610 "prog_event.m"
              {
#line 610 "prog_event.m"
                MR_Word parse_tree__prog_event__Pieces_35;
#line 610 "prog_event.m"
                MR_Word parse_tree__prog_event__ErrorSpec_36;
#line 610 "prog_event.m"
                MR_Word parse_tree__prog_event__V_44_44;
#line 610 "prog_event.m"
                MR_Word parse_tree__prog_event__V_45_45;
#line 610 "prog_event.m"
                MR_Word parse_tree__prog_event__V_46_46;
#line 610 "prog_event.m"
                MR_Word parse_tree__prog_event__V_49_49;
#line 610 "prog_event.m"
                MR_Word parse_tree__prog_event__V_50_50;
#line 610 "prog_event.m"
                MR_Word parse_tree__prog_event__V_51_51;
#line 610 "prog_event.m"
                MR_Word parse_tree__prog_event__V_54_54;
#line 610 "prog_event.m"
                MR_Word parse_tree__prog_event__V_55_55;
#line 610 "prog_event.m"
                MR_Word parse_tree__prog_event__V_64_64;
#line 610 "prog_event.m"
                MR_Word parse_tree__prog_event__V_65_65;
#line 610 "prog_event.m"
                MR_Word parse_tree__prog_event__V_66_66;
#line 610 "prog_event.m"
                MR_Word parse_tree__prog_event__V_67_67;
#line 610 "prog_event.m"
                MR_Word parse_tree__prog_event__V_68_68;

#line 607 "prog_event.m"
                {
#line 607 "prog_event.m"
                  parse_tree__prog_event__V_45_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 607 "prog_event.m"
                  MR_hl_field(MR_mktag(2), parse_tree__prog_event__V_45_45, 0) = ((MR_Box) (parse_tree__prog_event__SynthAttrName_5));
#line 607 "prog_event.m"
                }
#line 608 "prog_event.m"
                {
#line 608 "prog_event.m"
                  parse_tree__prog_event__V_50_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 608 "prog_event.m"
                  MR_hl_field(MR_mktag(2), parse_tree__prog_event__V_50_50, 0) = ((MR_Box) (parse_tree__prog_event__EventName_1));
#line 608 "prog_event.m"
                }
#line 609 "prog_event.m"
                {
#line 609 "prog_event.m"
                  parse_tree__prog_event__V_55_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 609 "prog_event.m"
                  MR_hl_field(MR_mktag(2), parse_tree__prog_event__V_55_55, 0) = ((MR_Box) (parse_tree__prog_event__AttrName_30));
#line 609 "prog_event.m"
                }
#line 609 "prog_event.m"
                {
#line 609 "prog_event.m"
                  parse_tree__prog_event__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 609 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_54_54, 0) = ((MR_Box) (parse_tree__prog_event__V_55_55));
#line 609 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[18])));
#line 609 "prog_event.m"
                }
#line 609 "prog_event.m"
                {
#line 609 "prog_event.m"
                  parse_tree__prog_event__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 609 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_51_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[32])));
#line 609 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_51_51, 1) = ((MR_Box) (parse_tree__prog_event__V_54_54));
#line 609 "prog_event.m"
                }
#line 608 "prog_event.m"
                {
#line 608 "prog_event.m"
                  parse_tree__prog_event__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 608 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_49_49, 0) = ((MR_Box) (parse_tree__prog_event__V_50_50));
#line 608 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_49_49, 1) = ((MR_Box) (parse_tree__prog_event__V_51_51));
#line 608 "prog_event.m"
                }
#line 608 "prog_event.m"
                {
#line 608 "prog_event.m"
                  parse_tree__prog_event__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 608 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_46_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[31])));
#line 608 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_46_46, 1) = ((MR_Box) (parse_tree__prog_event__V_49_49));
#line 608 "prog_event.m"
                }
#line 607 "prog_event.m"
                {
#line 607 "prog_event.m"
                  parse_tree__prog_event__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 607 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_44_44, 0) = ((MR_Box) (parse_tree__prog_event__V_45_45));
#line 607 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_44_44, 1) = ((MR_Box) (parse_tree__prog_event__V_46_46));
#line 607 "prog_event.m"
                }
#line 607 "prog_event.m"
                {
#line 607 "prog_event.m"
                  parse_tree__prog_event__Pieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 607 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[28])));
#line 607 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_35, 1) = ((MR_Box) (parse_tree__prog_event__V_44_44));
#line 607 "prog_event.m"
                }
#line 612 "prog_event.m"
                {
#line 612 "prog_event.m"
                  parse_tree__prog_event__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 612 "prog_event.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_66_66, 0) = ((MR_Box) (parse_tree__prog_event__FileName_2));
#line 612 "prog_event.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_66_66, 1) = ((MR_Box) (parse_tree__prog_event__AttrLineNumber_3));
#line 612 "prog_event.m"
                }
#line 612 "prog_event.m"
                {
#line 612 "prog_event.m"
                  parse_tree__prog_event__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 612 "prog_event.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_68_68, 0) = ((MR_Box) (parse_tree__prog_event__Pieces_35));
#line 612 "prog_event.m"
                }
#line 612 "prog_event.m"
                {
#line 612 "prog_event.m"
                  parse_tree__prog_event__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_67_67, 0) = ((MR_Box) (parse_tree__prog_event__V_68_68));
#line 612 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 612 "prog_event.m"
                }
#line 612 "prog_event.m"
                {
#line 612 "prog_event.m"
                  parse_tree__prog_event__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 612 "prog_event.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_65_65, 0) = ((MR_Box) (parse_tree__prog_event__V_66_66));
#line 612 "prog_event.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_65_65, 1) = ((MR_Box) (parse_tree__prog_event__V_67_67));
#line 612 "prog_event.m"
                }
#line 612 "prog_event.m"
                {
#line 612 "prog_event.m"
                  parse_tree__prog_event__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_64_64, 0) = ((MR_Box) (parse_tree__prog_event__V_65_65));
#line 612 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 612 "prog_event.m"
                }
#line 611 "prog_event.m"
                {
#line 611 "prog_event.m"
                  parse_tree__prog_event__ErrorSpec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 611 "prog_event.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 611 "prog_event.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 611 "prog_event.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_36, 2) = ((MR_Box) (parse_tree__prog_event__V_64_64));
#line 611 "prog_event.m"
                }
#line 613 "prog_event.m"
                {
#line 613 "prog_event.m"
                  parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 613 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_71_71, 0) = ((MR_Box) (parse_tree__prog_event__ErrorSpec_36));
#line 613 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_71_71, 1) = ((MR_Box) (parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10));
#line 613 "prog_event.m"
                }
#line 613 "prog_event.m"
                parse_tree__prog_event__STATE_VARIABLE_DepRel_41_41 = parse_tree__prog_event__STATE_VARIABLE_DepRel_0_8;
#line 610 "prog_event.m"
              }
#line 615 "prog_event.m"
            /* direct tailcall eliminated */
#line 615 "prog_event.m"
            {
#line 615 "prog_event.m"
              MR_Word parse_tree__prog_event__HeadVar__7__tmp_copy_7 = parse_tree__prog_event__AttrNames_31;
#line 615 "prog_event.m"
              MR_Word parse_tree__prog_event__STATE_VARIABLE_DepRel_0__tmp_copy_8 = parse_tree__prog_event__STATE_VARIABLE_DepRel_41_41;
#line 615 "prog_event.m"
              MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0__tmp_copy_10 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_71_71;

#line 615 "prog_event.m"
              parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0__tmp_copy_10;
#line 615 "prog_event.m"
              parse_tree__prog_event__STATE_VARIABLE_DepRel_0_8 = parse_tree__prog_event__STATE_VARIABLE_DepRel_0__tmp_copy_8;
#line 615 "prog_event.m"
              parse_tree__prog_event__HeadVar__7_7 = parse_tree__prog_event__HeadVar__7__tmp_copy_7;
#line 615 "prog_event.m"
            }
#line 615 "prog_event.m"
            continue;
#line 603 "prog_event.m"
          }
#line 600 "prog_event.m"
      }
#line 600 "prog_event.m"
      break;
#line 600 "prog_event.m"
    }
#line 595 "prog_event.m"
}

#line 531 "prog_event.m"
static MR_Box MR_CALL 
parse_tree__prog_event__build_dep_map_11_p_0_1(
#line 531 "prog_event.m"
  MR_Box parse_tree__prog_event__closure_arg,
#line 531 "prog_event.m"
  MR_Box parse_tree__prog_event__wrapper_arg_1)
#line 531 "prog_event.m"
{
#line 531 "prog_event.m"
  {
#line 531 "prog_event.m"
    MR_Box parse_tree__prog_event__wrapper_arg_2;
#line 531 "prog_event.m"
    MR_Box parse_tree__prog_event__closure = parse_tree__prog_event__closure_arg;
#line 531 "prog_event.m"
    MR_Word parse_tree__prog_event__conv2_HeadVar__3_143;

#line 531 "prog_event.m"
    {
#line 531 "prog_event.m"
      parse_tree__prog_event__conv2_HeadVar__3_143 = parse_tree__prog_event__IntroducedFrom__func__build_dep_map__531__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__closure, (MR_Integer) 3))), ((MR_String) parse_tree__prog_event__wrapper_arg_1));
    }
#line 531 "prog_event.m"
    parse_tree__prog_event__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_event__conv2_HeadVar__3_143));
#line 531 "prog_event.m"
    return parse_tree__prog_event__wrapper_arg_2;
#line 531 "prog_event.m"
  }
#line 531 "prog_event.m"
}

#line 507 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event__build_dep_map_11_p_0(
#line 507 "prog_event.m"
  MR_String parse_tree__prog_event__EventName_1,
#line 507 "prog_event.m"
  MR_String parse_tree__prog_event__FileName_2,
#line 507 "prog_event.m"
  MR_Word parse_tree__prog_event__AttrNameMap_3,
#line 507 "prog_event.m"
  MR_Word parse_tree__prog_event__KeyMap_4,
#line 507 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__5_5,
#line 507 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6,
#line 507 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_7,
#line 507 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_DepRel_0_8,
#line 507 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_DepRel_9,
#line 507 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10,
#line 507 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_11)
#line 507 "prog_event.m"
{
#line 512 "prog_event.m"
  while (MR_TRUE)
#line 512 "prog_event.m"
    {
#line 512 "prog_event.m"
      /* tailcall optimized into a loop */
#line 512 "prog_event.m"
      {
#line 512 "prog_event.m"
        MR_bool parse_tree__prog_event__succeeded;

#line 512 "prog_event.m"
        if ((parse_tree__prog_event__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 512 "prog_event.m"
          {
#line 512 "prog_event.m"
            *parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_11 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10;
#line 512 "prog_event.m"
            *parse_tree__prog_event__STATE_VARIABLE_DepRel_9 = parse_tree__prog_event__STATE_VARIABLE_DepRel_0_8;
#line 512 "prog_event.m"
            *parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_7 = parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6;
#line 512 "prog_event.m"
          }
#line 512 "prog_event.m"
        else
#line 514 "prog_event.m"
          {
#line 514 "prog_event.m"
            MR_Word parse_tree__prog_event__TypeCtorInfo_136_136 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 514 "prog_event.m"
            MR_Word parse_tree__prog_event__AttrTerm_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__5_5, (MR_Integer) 0)));
#line 514 "prog_event.m"
            MR_Word parse_tree__prog_event__AttrTerms_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__5_5, (MR_Integer) 1)));
#line 514 "prog_event.m"
            MR_String parse_tree__prog_event__AttrName_34 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrTerm_29, (MR_Integer) 0)));
#line 514 "prog_event.m"
            MR_Integer parse_tree__prog_event__AttrLineNumber_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrTerm_29, (MR_Integer) 1)));
#line 514 "prog_event.m"
            MR_Word parse_tree__prog_event__AttrTypeTerm_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrTerm_29, (MR_Integer) 2)));
#line 514 "prog_event.m"
            MR_Word parse_tree__prog_event__AttrKey_37;
#line 514 "prog_event.m"
            MR_Word parse_tree__prog_event__STATE_VARIABLE_DepRel_62_62;
#line 514 "prog_event.m"
            MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_121_121;
#line 514 "prog_event.m"
            MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_122_122;
#line 516 "prog_event.m"
            MR_Box parse_tree__prog_event__conv0_AttrKey_37;

#line 516 "prog_event.m"
            {
#line 516 "prog_event.m"
              mercury__bimap__lookup_3_p_0(parse_tree__prog_event__TypeCtorInfo_136_136, (MR_Word) &parse_tree__prog_event_scalar_common_1[0], parse_tree__prog_event__KeyMap_4, ((MR_Box) (parse_tree__prog_event__AttrName_34)), &parse_tree__prog_event__conv0_AttrKey_37);
            }
#line 516 "prog_event.m"
            parse_tree__prog_event__AttrKey_37 = ((MR_Word) parse_tree__prog_event__conv0_AttrKey_37);
#line 587 "prog_event.m"
            if (((MR_tag((MR_Word) parse_tree__prog_event__AttrTypeTerm_36)) == (MR_mktag((MR_Integer) 2))))
#line 590 "prog_event.m"
              {
#line 590 "prog_event.m"
                parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_121_121 = parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6;
#line 590 "prog_event.m"
                parse_tree__prog_event__STATE_VARIABLE_DepRel_62_62 = parse_tree__prog_event__STATE_VARIABLE_DepRel_0_8;
#line 590 "prog_event.m"
                parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_122_122 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10;
#line 590 "prog_event.m"
              }
#line 587 "prog_event.m"
            else
#line 587 "prog_event.m"
              if (((MR_tag((MR_Word) parse_tree__prog_event__AttrTypeTerm_36)) == (MR_mktag((MR_Integer) 0))))
#line 588 "prog_event.m"
                {
#line 588 "prog_event.m"
                  parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_121_121 = parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6;
#line 588 "prog_event.m"
                  parse_tree__prog_event__STATE_VARIABLE_DepRel_62_62 = parse_tree__prog_event__STATE_VARIABLE_DepRel_0_8;
#line 588 "prog_event.m"
                  parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_122_122 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10;
#line 588 "prog_event.m"
                }
#line 587 "prog_event.m"
              else
#line 518 "prog_event.m"
                {
#line 518 "prog_event.m"
                  MR_Word parse_tree__prog_event__SynthCallTerm_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__AttrTypeTerm_36, (MR_Integer) 1)));
#line 518 "prog_event.m"
                  MR_String parse_tree__prog_event__FuncAttrName_40 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SynthCallTerm_39, (MR_Integer) 0)));
#line 518 "prog_event.m"
                  MR_Word parse_tree__prog_event__ArgAttrNames_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SynthCallTerm_39, (MR_Integer) 1)));
#line 518 "prog_event.m"
                  MR_Word parse_tree__prog_event__AttrErrorSpecs_42;
#line 518 "prog_event.m"
                  MR_Word parse_tree__prog_event___TypeTerm_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__AttrTypeTerm_36, (MR_Integer) 0)));

#line 520 "prog_event.m"
                  {
#line 520 "prog_event.m"
                    parse_tree__prog_event__record_arg_dependencies_11_p_0(parse_tree__prog_event__EventName_1, parse_tree__prog_event__FileName_2, parse_tree__prog_event__AttrLineNumber_35, parse_tree__prog_event__KeyMap_4, parse_tree__prog_event__AttrName_34, parse_tree__prog_event__AttrKey_37, parse_tree__prog_event__ArgAttrNames_41, parse_tree__prog_event__STATE_VARIABLE_DepRel_0_8, &parse_tree__prog_event__STATE_VARIABLE_DepRel_62_62, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_event__AttrErrorSpecs_42);
                  }
#line 528 "prog_event.m"
                  if ((parse_tree__prog_event__AttrErrorSpecs_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 582 "prog_event.m"
                    {
#line 582 "prog_event.m"
                      MR_Word parse_tree__prog_event__AttrType_45;
#line 530 "prog_event.m"
                      MR_Box parse_tree__prog_event__conv1_AttrType_45;

#line 530 "prog_event.m"
                      {
#line 530 "prog_event.m"
                        parse_tree__prog_event__succeeded = mercury__map__search_3_p_0(parse_tree__prog_event__TypeCtorInfo_136_136, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6, ((MR_Box) (parse_tree__prog_event__AttrName_34)), &parse_tree__prog_event__conv1_AttrType_45);
                      }
#line 530 "prog_event.m"
                      if (parse_tree__prog_event__succeeded)
#line 530 "prog_event.m"
                        {
#line 530 "prog_event.m"
                          parse_tree__prog_event__AttrType_45 = ((MR_Word) parse_tree__prog_event__conv1_AttrType_45);
#line 530 "prog_event.m"
                          parse_tree__prog_event__succeeded = MR_TRUE;
#line 530 "prog_event.m"
                        }
#line 582 "prog_event.m"
                      if (parse_tree__prog_event__succeeded)
#line 531 "prog_event.m"
                        {
#line 531 "prog_event.m"
                          MR_Word parse_tree__prog_event__TypeCtorInfo_141_141 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 531 "prog_event.m"
                          MR_Word parse_tree__prog_event__ArgTypes_46;
#line 531 "prog_event.m"
                          MR_Word parse_tree__prog_event__V_64_64;
#line 571 "prog_event.m"
                          MR_Word parse_tree__prog_event__FuncAttrInfo_47;
#line 571 "prog_event.m"
                          MR_Word parse_tree__prog_event__FuncAttrPurity_48;
#line 533 "prog_event.m"
                          MR_Word parse_tree__prog_event__V_65_65;
#line 533 "prog_event.m"
                          MR_Box parse_tree__prog_event__conv3_FuncAttrInfo_47;
#line 534 "prog_event.m"
                          MR_Integer parse_tree__prog_event__V_130_130;
#line 534 "prog_event.m"
                          MR_String parse_tree__prog_event__V_131_131;
#line 534 "prog_event.m"
                          MR_Integer parse_tree__prog_event__V_132_132;

#line 531 "prog_event.m"
                          {
#line 531 "prog_event.m"
                            parse_tree__prog_event__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 531 "prog_event.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_64_64, 0) = ((MR_Box) (&parse_tree__prog_event_scalar_common_5[2]));
#line 531 "prog_event.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_64_64, 1) = ((MR_Box) (parse_tree__prog_event__build_dep_map_11_p_0_1));
#line 531 "prog_event.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 531 "prog_event.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_64_64, 3) = ((MR_Box) (parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6));
#line 531 "prog_event.m"
                          }
#line 531 "prog_event.m"
                          {
#line 531 "prog_event.m"
                            parse_tree__prog_event__ArgTypes_46 = mercury__list__map_2_f_0(parse_tree__prog_event__TypeCtorInfo_136_136, parse_tree__prog_event__TypeCtorInfo_141_141, parse_tree__prog_event__V_64_64, parse_tree__prog_event__ArgAttrNames_41);
                          }
#line 533 "prog_event.m"
                          {
#line 533 "prog_event.m"
                            parse_tree__prog_event__succeeded = mercury__map__search_3_p_0(parse_tree__prog_event__TypeCtorInfo_136_136, (MR_Word) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0, parse_tree__prog_event__AttrNameMap_3, ((MR_Box) (parse_tree__prog_event__FuncAttrName_40)), &parse_tree__prog_event__conv3_FuncAttrInfo_47);
                          }
#line 533 "prog_event.m"
                          if (parse_tree__prog_event__succeeded)
#line 533 "prog_event.m"
                            {
#line 533 "prog_event.m"
                              parse_tree__prog_event__FuncAttrInfo_47 = ((MR_Word) parse_tree__prog_event__conv3_FuncAttrInfo_47);
#line 533 "prog_event.m"
                              parse_tree__prog_event__succeeded = MR_TRUE;
#line 533 "prog_event.m"
                            }
#line 533 "prog_event.m"
                          if (parse_tree__prog_event__succeeded)
#line 533 "prog_event.m"
                            {
#line 534 "prog_event.m"
                              parse_tree__prog_event__V_130_130 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__FuncAttrInfo_47, (MR_Integer) 0)));
#line 534 "prog_event.m"
                              parse_tree__prog_event__V_131_131 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__FuncAttrInfo_47, (MR_Integer) 1)));
#line 534 "prog_event.m"
                              parse_tree__prog_event__V_132_132 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__FuncAttrInfo_47, (MR_Integer) 2)));
#line 534 "prog_event.m"
                              parse_tree__prog_event__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__FuncAttrInfo_47, (MR_Integer) 3)));
#line 535 "prog_event.m"
                              parse_tree__prog_event__succeeded = ((MR_tag((MR_Word) parse_tree__prog_event__V_65_65)) == (MR_mktag((MR_Integer) 2)));
#line 535 "prog_event.m"
                              if (parse_tree__prog_event__succeeded)
#line 535 "prog_event.m"
                                parse_tree__prog_event__FuncAttrPurity_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_event__V_65_65, (MR_Integer) 0)));
#line 533 "prog_event.m"
                            }
#line 571 "prog_event.m"
                          if (parse_tree__prog_event__succeeded)
#line 543 "prog_event.m"
                            {
#line 543 "prog_event.m"
                              MR_Word parse_tree__prog_event__FuncPurity_49;
#line 543 "prog_event.m"
                              MR_Word parse_tree__prog_event__FuncAttrType_50;
#line 543 "prog_event.m"
                              MR_Word parse_tree__prog_event__V_66_66;
#line 567 "prog_event.m"
                              MR_Word parse_tree__prog_event__OldFuncAttrType_51;
#line 547 "prog_event.m"
                              MR_Box parse_tree__prog_event__conv4_OldFuncAttrType_51;

#line 540 "prog_event.m"
                              if ((parse_tree__prog_event__FuncAttrPurity_48 == (MR_Integer) 1))
#line 542 "prog_event.m"
                                parse_tree__prog_event__FuncPurity_49 = (MR_Integer) 2;
#line 540 "prog_event.m"
                              else
#line 539 "prog_event.m"
                                parse_tree__prog_event__FuncPurity_49 = (MR_Integer) 0;
#line 544 "prog_event.m"
                              {
#line 544 "prog_event.m"
                                parse_tree__prog_event__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 544 "prog_event.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_66_66, 0) = ((MR_Box) (parse_tree__prog_event__AttrType_45));
#line 544 "prog_event.m"
                              }
#line 545 "prog_event.m"
                              mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 544 "prog_event.m"
                              {
#line 544 "prog_event.m"
                                parse_tree__prog_event__FuncAttrType_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 544 "prog_event.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_event__FuncAttrType_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 544 "prog_event.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_event__FuncAttrType_50, 1) = ((MR_Box) (parse_tree__prog_event__ArgTypes_46));
#line 544 "prog_event.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_event__FuncAttrType_50, 2) = ((MR_Box) (parse_tree__prog_event__V_66_66));
#line 544 "prog_event.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_event__FuncAttrType_50, 3) = ((MR_Box) (parse_tree__prog_event__FuncPurity_49));
#line 544 "prog_event.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_event__FuncAttrType_50, 4) = NULL;
#line 544 "prog_event.m"
                              }
#line 547 "prog_event.m"
                              {
#line 547 "prog_event.m"
                                parse_tree__prog_event__succeeded = mercury__map__search_3_p_0(parse_tree__prog_event__TypeCtorInfo_136_136, parse_tree__prog_event__TypeCtorInfo_141_141, parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6, ((MR_Box) (parse_tree__prog_event__FuncAttrName_40)), &parse_tree__prog_event__conv4_OldFuncAttrType_51);
                              }
#line 547 "prog_event.m"
                              if (parse_tree__prog_event__succeeded)
#line 547 "prog_event.m"
                                {
#line 547 "prog_event.m"
                                  parse_tree__prog_event__OldFuncAttrType_51 = ((MR_Word) parse_tree__prog_event__conv4_OldFuncAttrType_51);
#line 547 "prog_event.m"
                                  parse_tree__prog_event__succeeded = MR_TRUE;
#line 547 "prog_event.m"
                                }
#line 567 "prog_event.m"
                              if (parse_tree__prog_event__succeeded)
#line 553 "prog_event.m"
                                {
#line 550 "prog_event.m"
                                  {
#line 550 "prog_event.m"
                                    parse_tree__prog_event__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__prog_event__FuncAttrType_50, parse_tree__prog_event__OldFuncAttrType_51);
                                  }
#line 553 "prog_event.m"
                                  if (parse_tree__prog_event__succeeded)
#line 550 "prog_event.m"
                                    parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_122_122 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10;
#line 553 "prog_event.m"
                                  else
#line 555 "prog_event.m"
                                    {
#line 555 "prog_event.m"
                                      MR_Integer parse_tree__prog_event__FuncAttrLineNumber_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__FuncAttrInfo_47, (MR_Integer) 2)));
#line 555 "prog_event.m"
                                      MR_Word parse_tree__prog_event__Pieces_53;
#line 555 "prog_event.m"
                                      MR_Word parse_tree__prog_event__ErrorSpec_54;
#line 555 "prog_event.m"
                                      MR_Word parse_tree__prog_event__V_70_70;
#line 555 "prog_event.m"
                                      MR_Word parse_tree__prog_event__V_71_71;
#line 555 "prog_event.m"
                                      MR_Word parse_tree__prog_event__V_83_83;
#line 555 "prog_event.m"
                                      MR_Word parse_tree__prog_event__V_84_84;
#line 555 "prog_event.m"
                                      MR_Word parse_tree__prog_event__V_85_85;
#line 555 "prog_event.m"
                                      MR_Word parse_tree__prog_event__V_86_86;
#line 555 "prog_event.m"
                                      MR_Word parse_tree__prog_event__V_87_87;
#line 554 "prog_event.m"
                                      MR_Integer parse_tree__prog_event__V_133_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__FuncAttrInfo_47, (MR_Integer) 0)));
#line 554 "prog_event.m"
                                      MR_String parse_tree__prog_event__V_134_134 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__FuncAttrInfo_47, (MR_Integer) 1)));
#line 554 "prog_event.m"
                                      MR_Word parse_tree__prog_event__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__FuncAttrInfo_47, (MR_Integer) 3)));

#line 557 "prog_event.m"
                                      {
#line 557 "prog_event.m"
                                        parse_tree__prog_event__V_71_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 557 "prog_event.m"
                                        MR_hl_field(MR_mktag(2), parse_tree__prog_event__V_71_71, 0) = ((MR_Box) (parse_tree__prog_event__FuncAttrName_40));
#line 557 "prog_event.m"
                                      }
#line 557 "prog_event.m"
                                      {
#line 557 "prog_event.m"
                                        parse_tree__prog_event__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "prog_event.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_70_70, 0) = ((MR_Box) (parse_tree__prog_event__V_71_71));
#line 557 "prog_event.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[16])));
#line 557 "prog_event.m"
                                      }
#line 557 "prog_event.m"
                                      {
#line 557 "prog_event.m"
                                        parse_tree__prog_event__Pieces_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "prog_event.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[28])));
#line 557 "prog_event.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_53, 1) = ((MR_Box) (parse_tree__prog_event__V_70_70));
#line 557 "prog_event.m"
                                      }
#line 563 "prog_event.m"
                                      {
#line 563 "prog_event.m"
                                        parse_tree__prog_event__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 563 "prog_event.m"
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_85_85, 0) = ((MR_Box) (parse_tree__prog_event__FileName_2));
#line 563 "prog_event.m"
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_85_85, 1) = ((MR_Box) (parse_tree__prog_event__FuncAttrLineNumber_52));
#line 563 "prog_event.m"
                                      }
#line 564 "prog_event.m"
                                      {
#line 564 "prog_event.m"
                                        parse_tree__prog_event__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 564 "prog_event.m"
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_87_87, 0) = ((MR_Box) (parse_tree__prog_event__Pieces_53));
#line 564 "prog_event.m"
                                      }
#line 564 "prog_event.m"
                                      {
#line 564 "prog_event.m"
                                        parse_tree__prog_event__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 564 "prog_event.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_86_86, 0) = ((MR_Box) (parse_tree__prog_event__V_87_87));
#line 564 "prog_event.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 564 "prog_event.m"
                                      }
#line 562 "prog_event.m"
                                      {
#line 562 "prog_event.m"
                                        parse_tree__prog_event__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 562 "prog_event.m"
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_84_84, 0) = ((MR_Box) (parse_tree__prog_event__V_85_85));
#line 562 "prog_event.m"
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_84_84, 1) = ((MR_Box) (parse_tree__prog_event__V_86_86));
#line 562 "prog_event.m"
                                      }
#line 564 "prog_event.m"
                                      {
#line 564 "prog_event.m"
                                        parse_tree__prog_event__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 564 "prog_event.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_83_83, 0) = ((MR_Box) (parse_tree__prog_event__V_84_84));
#line 564 "prog_event.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 564 "prog_event.m"
                                      }
#line 560 "prog_event.m"
                                      {
#line 560 "prog_event.m"
                                        parse_tree__prog_event__ErrorSpec_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 560 "prog_event.m"
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 560 "prog_event.m"
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 560 "prog_event.m"
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_54, 2) = ((MR_Box) (parse_tree__prog_event__V_83_83));
#line 560 "prog_event.m"
                                      }
#line 565 "prog_event.m"
                                      {
#line 565 "prog_event.m"
                                        parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 565 "prog_event.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_122_122, 0) = ((MR_Box) (parse_tree__prog_event__ErrorSpec_54));
#line 565 "prog_event.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_122_122, 1) = ((MR_Box) (parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10));
#line 565 "prog_event.m"
                                      }
#line 555 "prog_event.m"
                                    }
#line 565 "prog_event.m"
                                  parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_121_121 = parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6;
#line 553 "prog_event.m"
                                }
#line 567 "prog_event.m"
                              else
#line 568 "prog_event.m"
                                {
#line 568 "prog_event.m"
                                  {
#line 568 "prog_event.m"
                                    mercury__map__det_insert_4_p_0(parse_tree__prog_event__TypeCtorInfo_136_136, parse_tree__prog_event__TypeCtorInfo_141_141, ((MR_Box) (parse_tree__prog_event__FuncAttrName_40)), ((MR_Box) (parse_tree__prog_event__FuncAttrType_50)), parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6, &parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_121_121);
                                  }
#line 568 "prog_event.m"
                                  parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_122_122 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10;
#line 568 "prog_event.m"
                                }
#line 543 "prog_event.m"
                            }
#line 571 "prog_event.m"
                          else
#line 575 "prog_event.m"
                            {
#line 575 "prog_event.m"
                              MR_Word parse_tree__prog_event__V_94_94;
#line 575 "prog_event.m"
                              MR_Word parse_tree__prog_event__V_95_95;
#line 575 "prog_event.m"
                              MR_Word parse_tree__prog_event__V_96_96;
#line 575 "prog_event.m"
                              MR_Word parse_tree__prog_event__V_99_99;
#line 575 "prog_event.m"
                              MR_Word parse_tree__prog_event__V_102_102;
#line 575 "prog_event.m"
                              MR_Word parse_tree__prog_event__V_103_103;
#line 575 "prog_event.m"
                              MR_Word parse_tree__prog_event__V_112_112;
#line 575 "prog_event.m"
                              MR_Word parse_tree__prog_event__V_113_113;
#line 575 "prog_event.m"
                              MR_Word parse_tree__prog_event__V_114_114;
#line 575 "prog_event.m"
                              MR_Word parse_tree__prog_event__V_115_115;
#line 575 "prog_event.m"
                              MR_Word parse_tree__prog_event__V_116_116;
#line 575 "prog_event.m"
                              MR_Word parse_tree__prog_event__Pieces_126;
#line 575 "prog_event.m"
                              MR_Word parse_tree__prog_event__ErrorSpec_127;

#line 572 "prog_event.m"
                              {
#line 572 "prog_event.m"
                                parse_tree__prog_event__V_95_95 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 572 "prog_event.m"
                                MR_hl_field(MR_mktag(2), parse_tree__prog_event__V_95_95, 0) = ((MR_Box) (parse_tree__prog_event__AttrName_34));
#line 572 "prog_event.m"
                              }
#line 575 "prog_event.m"
                              {
#line 575 "prog_event.m"
                                parse_tree__prog_event__V_103_103 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 575 "prog_event.m"
                                MR_hl_field(MR_mktag(2), parse_tree__prog_event__V_103_103, 0) = ((MR_Box) (parse_tree__prog_event__FuncAttrName_40));
#line 575 "prog_event.m"
                              }
#line 575 "prog_event.m"
                              {
#line 575 "prog_event.m"
                                parse_tree__prog_event__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 575 "prog_event.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_102_102, 0) = ((MR_Box) (parse_tree__prog_event__V_103_103));
#line 575 "prog_event.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[10])));
#line 575 "prog_event.m"
                              }
#line 574 "prog_event.m"
                              {
#line 574 "prog_event.m"
                                parse_tree__prog_event__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "prog_event.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_99_99, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[30])));
#line 574 "prog_event.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_99_99, 1) = ((MR_Box) (parse_tree__prog_event__V_102_102));
#line 574 "prog_event.m"
                              }
#line 573 "prog_event.m"
                              {
#line 573 "prog_event.m"
                                parse_tree__prog_event__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 573 "prog_event.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_96_96, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[29])));
#line 573 "prog_event.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_96_96, 1) = ((MR_Box) (parse_tree__prog_event__V_99_99));
#line 573 "prog_event.m"
                              }
#line 572 "prog_event.m"
                              {
#line 572 "prog_event.m"
                                parse_tree__prog_event__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "prog_event.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_94_94, 0) = ((MR_Box) (parse_tree__prog_event__V_95_95));
#line 572 "prog_event.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_94_94, 1) = ((MR_Box) (parse_tree__prog_event__V_96_96));
#line 572 "prog_event.m"
                              }
#line 572 "prog_event.m"
                              {
#line 572 "prog_event.m"
                                parse_tree__prog_event__Pieces_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "prog_event.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_126, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[28])));
#line 572 "prog_event.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_126, 1) = ((MR_Box) (parse_tree__prog_event__V_94_94));
#line 572 "prog_event.m"
                              }
#line 578 "prog_event.m"
                              {
#line 578 "prog_event.m"
                                parse_tree__prog_event__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 578 "prog_event.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_114_114, 0) = ((MR_Box) (parse_tree__prog_event__FileName_2));
#line 578 "prog_event.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_114_114, 1) = ((MR_Box) (parse_tree__prog_event__AttrLineNumber_35));
#line 578 "prog_event.m"
                              }
#line 579 "prog_event.m"
                              {
#line 579 "prog_event.m"
                                parse_tree__prog_event__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 579 "prog_event.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_116_116, 0) = ((MR_Box) (parse_tree__prog_event__Pieces_126));
#line 579 "prog_event.m"
                              }
#line 579 "prog_event.m"
                              {
#line 579 "prog_event.m"
                                parse_tree__prog_event__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 579 "prog_event.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_115_115, 0) = ((MR_Box) (parse_tree__prog_event__V_116_116));
#line 579 "prog_event.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 579 "prog_event.m"
                              }
#line 578 "prog_event.m"
                              {
#line 578 "prog_event.m"
                                parse_tree__prog_event__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 578 "prog_event.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_113_113, 0) = ((MR_Box) (parse_tree__prog_event__V_114_114));
#line 578 "prog_event.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_113_113, 1) = ((MR_Box) (parse_tree__prog_event__V_115_115));
#line 578 "prog_event.m"
                              }
#line 579 "prog_event.m"
                              {
#line 579 "prog_event.m"
                                parse_tree__prog_event__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 579 "prog_event.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_112_112, 0) = ((MR_Box) (parse_tree__prog_event__V_113_113));
#line 579 "prog_event.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_112_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 579 "prog_event.m"
                              }
#line 576 "prog_event.m"
                              {
#line 576 "prog_event.m"
                                parse_tree__prog_event__ErrorSpec_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 576 "prog_event.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_127, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 576 "prog_event.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 576 "prog_event.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_127, 2) = ((MR_Box) (parse_tree__prog_event__V_112_112));
#line 576 "prog_event.m"
                              }
#line 580 "prog_event.m"
                              {
#line 580 "prog_event.m"
                                parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 580 "prog_event.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_122_122, 0) = ((MR_Box) (parse_tree__prog_event__ErrorSpec_127));
#line 580 "prog_event.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_122_122, 1) = ((MR_Box) (parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10));
#line 580 "prog_event.m"
                              }
#line 580 "prog_event.m"
                              parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_121_121 = parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6;
#line 575 "prog_event.m"
                            }
#line 531 "prog_event.m"
                        }
#line 582 "prog_event.m"
                      else
#line 584 "prog_event.m"
                        {
#line 584 "prog_event.m"
                          parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_122_122 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10;
#line 584 "prog_event.m"
                          parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_121_121 = parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6;
#line 584 "prog_event.m"
                        }
#line 582 "prog_event.m"
                    }
#line 528 "prog_event.m"
                  else
#line 523 "prog_event.m"
                    {
#line 523 "prog_event.m"
                      MR_Word parse_tree__prog_event__V_120_120;

#line 526 "prog_event.m"
                      {
#line 526 "prog_event.m"
                        parse_tree__prog_event__V_120_120 = parse_tree__builtin_lib_types__void_type_0_f_0();
                      }
#line 526 "prog_event.m"
                      {
#line 526 "prog_event.m"
                        mercury__map__det_insert_4_p_0(parse_tree__prog_event__TypeCtorInfo_136_136, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (parse_tree__prog_event__FuncAttrName_40)), ((MR_Box) (parse_tree__prog_event__V_120_120)), parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6, &parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_121_121);
                      }
#line 527 "prog_event.m"
                      {
#line 527 "prog_event.m"
                        parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_122_122 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_event__AttrErrorSpecs_42, parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10);
                      }
#line 523 "prog_event.m"
                    }
#line 518 "prog_event.m"
                }
#line 592 "prog_event.m"
            /* direct tailcall eliminated */
#line 592 "prog_event.m"
            {
#line 592 "prog_event.m"
              MR_Word parse_tree__prog_event__HeadVar__5__tmp_copy_5 = parse_tree__prog_event__AttrTerms_30;
#line 592 "prog_event.m"
              MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0__tmp_copy_6 = parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_121_121;
#line 592 "prog_event.m"
              MR_Word parse_tree__prog_event__STATE_VARIABLE_DepRel_0__tmp_copy_8 = parse_tree__prog_event__STATE_VARIABLE_DepRel_62_62;
#line 592 "prog_event.m"
              MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0__tmp_copy_10 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_122_122;

#line 592 "prog_event.m"
              parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0__tmp_copy_10;
#line 592 "prog_event.m"
              parse_tree__prog_event__STATE_VARIABLE_DepRel_0_8 = parse_tree__prog_event__STATE_VARIABLE_DepRel_0__tmp_copy_8;
#line 592 "prog_event.m"
              parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6 = parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0__tmp_copy_6;
#line 592 "prog_event.m"
              parse_tree__prog_event__HeadVar__5_5 = parse_tree__prog_event__HeadVar__5__tmp_copy_5;
#line 592 "prog_event.m"
            }
#line 592 "prog_event.m"
            continue;
#line 514 "prog_event.m"
          }
#line 512 "prog_event.m"
      }
#line 512 "prog_event.m"
      break;
#line 512 "prog_event.m"
    }
#line 507 "prog_event.m"
}

#line 459 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event__build_plain_type_map_17_p_0(
#line 459 "prog_event.m"
  MR_String parse_tree__prog_event__EventName_1,
#line 459 "prog_event.m"
  MR_String parse_tree__prog_event__FileName_2,
#line 459 "prog_event.m"
  MR_Integer parse_tree__prog_event__EventLineNumber_3,
#line 459 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__4_4,
#line 459 "prog_event.m"
  MR_Integer parse_tree__prog_event__AttrNum_5,
#line 459 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrNumMap_0_6,
#line 459 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_AttrNumMap_7,
#line 459 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrNameMap_0_8,
#line 459 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_AttrNameMap_9,
#line 459 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_10,
#line 459 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_11,
#line 459 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_KeyMap_0_12,
#line 459 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_KeyMap_13,
#line 459 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_DepRel_0_14,
#line 459 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_DepRel_15,
#line 459 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_16,
#line 459 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_17)
#line 459 "prog_event.m"
{
#line 466 "prog_event.m"
  while (MR_TRUE)
#line 466 "prog_event.m"
    {
#line 466 "prog_event.m"
      /* tailcall optimized into a loop */
#line 466 "prog_event.m"
      {
#line 466 "prog_event.m"
        MR_bool parse_tree__prog_event__succeeded;

#line 466 "prog_event.m"
        if ((parse_tree__prog_event__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 466 "prog_event.m"
          {
#line 467 "prog_event.m"
            *parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_17 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_16;
#line 467 "prog_event.m"
            *parse_tree__prog_event__STATE_VARIABLE_DepRel_15 = parse_tree__prog_event__STATE_VARIABLE_DepRel_0_14;
#line 467 "prog_event.m"
            *parse_tree__prog_event__STATE_VARIABLE_KeyMap_13 = parse_tree__prog_event__STATE_VARIABLE_KeyMap_0_12;
#line 466 "prog_event.m"
            *parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_11 = parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_10;
#line 466 "prog_event.m"
            *parse_tree__prog_event__STATE_VARIABLE_AttrNameMap_9 = parse_tree__prog_event__STATE_VARIABLE_AttrNameMap_0_8;
#line 466 "prog_event.m"
            *parse_tree__prog_event__STATE_VARIABLE_AttrNumMap_7 = parse_tree__prog_event__STATE_VARIABLE_AttrNumMap_0_6;
#line 466 "prog_event.m"
          }
#line 466 "prog_event.m"
        else
#line 470 "prog_event.m"
          {
#line 470 "prog_event.m"
            MR_Word parse_tree__prog_event__TypeCtorInfo_116_116;
#line 470 "prog_event.m"
            MR_Word parse_tree__prog_event__TypeCtorInfo_117_117;
#line 470 "prog_event.m"
            MR_Word parse_tree__prog_event__AttrTerm_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__4_4, (MR_Integer) 0)));
#line 470 "prog_event.m"
            MR_Word parse_tree__prog_event__AttrTerms_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__4_4, (MR_Integer) 1)));
#line 470 "prog_event.m"
            MR_String parse_tree__prog_event__AttrName_52 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrTerm_43, (MR_Integer) 0)));
#line 470 "prog_event.m"
            MR_Integer parse_tree__prog_event__AttrLineNumber_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrTerm_43, (MR_Integer) 1)));
#line 470 "prog_event.m"
            MR_Word parse_tree__prog_event__AttrTypeTerm_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrTerm_43, (MR_Integer) 2)));
#line 470 "prog_event.m"
            MR_Word parse_tree__prog_event__AttrInfo_55;
#line 470 "prog_event.m"
            MR_Word parse_tree__prog_event__AttrKey_56;
#line 470 "prog_event.m"
            MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrNumMap_76_76;
#line 470 "prog_event.m"
            MR_Word parse_tree__prog_event__STATE_VARIABLE_DepRel_77_77;
#line 470 "prog_event.m"
            MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrNameMap_79_79;
#line 470 "prog_event.m"
            MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_104_104;
#line 470 "prog_event.m"
            MR_Word parse_tree__prog_event__STATE_VARIABLE_KeyMap_105_105;
#line 470 "prog_event.m"
            MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_106_106;
#line 470 "prog_event.m"
            MR_Integer parse_tree__prog_event__V_107_107;
#line 477 "prog_event.m"
            MR_Word parse_tree__prog_event__STATE_VARIABLE_KeyMap_78_78;

#line 472 "prog_event.m"
            {
#line 472 "prog_event.m"
              parse_tree__prog_event__AttrInfo_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 472 "prog_event.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_55, 0) = ((MR_Box) (parse_tree__prog_event__AttrNum_5));
#line 472 "prog_event.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_55, 1) = ((MR_Box) (parse_tree__prog_event__AttrName_52));
#line 472 "prog_event.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_55, 2) = ((MR_Box) (parse_tree__prog_event__AttrLineNumber_53));
#line 472 "prog_event.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_55, 3) = ((MR_Box) (parse_tree__prog_event__AttrTypeTerm_54));
#line 472 "prog_event.m"
            }
#line 8144 "parse_tree.prog_event.c"
            parse_tree__prog_event__TypeCtorInfo_116_116 = (MR_Word) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0;
#line 473 "prog_event.m"
            {
#line 473 "prog_event.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(parse_tree__prog_event__TypeCtorInfo_116_116, parse_tree__prog_event__AttrNum_5, ((MR_Box) (parse_tree__prog_event__AttrInfo_55)), parse_tree__prog_event__STATE_VARIABLE_AttrNumMap_0_6, &parse_tree__prog_event__STATE_VARIABLE_AttrNumMap_76_76);
            }
#line 8151 "parse_tree.prog_event.c"
            parse_tree__prog_event__TypeCtorInfo_117_117 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 474 "prog_event.m"
            {
#line 474 "prog_event.m"
              mercury__digraph__add_vertex_4_p_0(parse_tree__prog_event__TypeCtorInfo_117_117, ((MR_Box) (parse_tree__prog_event__AttrName_52)), &parse_tree__prog_event__AttrKey_56, parse_tree__prog_event__STATE_VARIABLE_DepRel_0_14, &parse_tree__prog_event__STATE_VARIABLE_DepRel_77_77);
            }
#line 475 "prog_event.m"
            {
#line 475 "prog_event.m"
              parse_tree__prog_event__succeeded = mercury__bimap__insert_4_p_0(parse_tree__prog_event__TypeCtorInfo_117_117, (MR_Word) &parse_tree__prog_event_scalar_common_1[0], ((MR_Box) (parse_tree__prog_event__AttrName_52)), ((MR_Box) (parse_tree__prog_event__AttrKey_56)), parse_tree__prog_event__STATE_VARIABLE_KeyMap_0_12, &parse_tree__prog_event__STATE_VARIABLE_KeyMap_78_78);
            }
#line 477 "prog_event.m"
            if (parse_tree__prog_event__succeeded)
#line 476 "prog_event.m"
              {
#line 476 "prog_event.m"
                parse_tree__prog_event__STATE_VARIABLE_KeyMap_105_105 = parse_tree__prog_event__STATE_VARIABLE_KeyMap_78_78;
#line 476 "prog_event.m"
                {
#line 476 "prog_event.m"
                  mercury__map__det_insert_4_p_0(parse_tree__prog_event__TypeCtorInfo_117_117, parse_tree__prog_event__TypeCtorInfo_116_116, ((MR_Box) (parse_tree__prog_event__AttrName_52)), ((MR_Box) (parse_tree__prog_event__AttrInfo_55)), parse_tree__prog_event__STATE_VARIABLE_AttrNameMap_0_8, &parse_tree__prog_event__STATE_VARIABLE_AttrNameMap_79_79);
                }
#line 476 "prog_event.m"
                parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_104_104 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_16;
#line 476 "prog_event.m"
              }
#line 477 "prog_event.m"
            else
#line 480 "prog_event.m"
              {
#line 480 "prog_event.m"
                MR_Word parse_tree__prog_event__Pieces_57;
#line 480 "prog_event.m"
                MR_Word parse_tree__prog_event__ErrorSpec_58;
#line 480 "prog_event.m"
                MR_Word parse_tree__prog_event__V_82_82;
#line 480 "prog_event.m"
                MR_Word parse_tree__prog_event__V_83_83;
#line 480 "prog_event.m"
                MR_Word parse_tree__prog_event__V_84_84;
#line 480 "prog_event.m"
                MR_Word parse_tree__prog_event__V_87_87;
#line 480 "prog_event.m"
                MR_Word parse_tree__prog_event__V_88_88;
#line 480 "prog_event.m"
                MR_Word parse_tree__prog_event__V_97_97;
#line 480 "prog_event.m"
                MR_Word parse_tree__prog_event__V_98_98;
#line 480 "prog_event.m"
                MR_Word parse_tree__prog_event__V_99_99;
#line 480 "prog_event.m"
                MR_Word parse_tree__prog_event__V_100_100;
#line 480 "prog_event.m"
                MR_Word parse_tree__prog_event__V_101_101;

#line 478 "prog_event.m"
                {
#line 478 "prog_event.m"
                  parse_tree__prog_event__V_83_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 478 "prog_event.m"
                  MR_hl_field(MR_mktag(2), parse_tree__prog_event__V_83_83, 0) = ((MR_Box) (parse_tree__prog_event__EventName_1));
#line 478 "prog_event.m"
                }
#line 480 "prog_event.m"
                {
#line 480 "prog_event.m"
                  parse_tree__prog_event__V_88_88 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 480 "prog_event.m"
                  MR_hl_field(MR_mktag(2), parse_tree__prog_event__V_88_88, 0) = ((MR_Box) (parse_tree__prog_event__AttrName_52));
#line 480 "prog_event.m"
                }
#line 480 "prog_event.m"
                {
#line 480 "prog_event.m"
                  parse_tree__prog_event__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 480 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_87_87, 0) = ((MR_Box) (parse_tree__prog_event__V_88_88));
#line 480 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[10])));
#line 480 "prog_event.m"
                }
#line 479 "prog_event.m"
                {
#line 479 "prog_event.m"
                  parse_tree__prog_event__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 479 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_84_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[27])));
#line 479 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_84_84, 1) = ((MR_Box) (parse_tree__prog_event__V_87_87));
#line 479 "prog_event.m"
                }
#line 478 "prog_event.m"
                {
#line 478 "prog_event.m"
                  parse_tree__prog_event__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 478 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_82_82, 0) = ((MR_Box) (parse_tree__prog_event__V_83_83));
#line 478 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_82_82, 1) = ((MR_Box) (parse_tree__prog_event__V_84_84));
#line 478 "prog_event.m"
                }
#line 478 "prog_event.m"
                {
#line 478 "prog_event.m"
                  parse_tree__prog_event__Pieces_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 478 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[26])));
#line 478 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_57, 1) = ((MR_Box) (parse_tree__prog_event__V_82_82));
#line 478 "prog_event.m"
                }
#line 482 "prog_event.m"
                {
#line 482 "prog_event.m"
                  parse_tree__prog_event__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 482 "prog_event.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_99_99, 0) = ((MR_Box) (parse_tree__prog_event__FileName_2));
#line 482 "prog_event.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_99_99, 1) = ((MR_Box) (parse_tree__prog_event__EventLineNumber_3));
#line 482 "prog_event.m"
                }
#line 483 "prog_event.m"
                {
#line 483 "prog_event.m"
                  parse_tree__prog_event__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 483 "prog_event.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_101_101, 0) = ((MR_Box) (parse_tree__prog_event__Pieces_57));
#line 483 "prog_event.m"
                }
#line 483 "prog_event.m"
                {
#line 483 "prog_event.m"
                  parse_tree__prog_event__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_100_100, 0) = ((MR_Box) (parse_tree__prog_event__V_101_101));
#line 483 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 483 "prog_event.m"
                }
#line 482 "prog_event.m"
                {
#line 482 "prog_event.m"
                  parse_tree__prog_event__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 482 "prog_event.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_98_98, 0) = ((MR_Box) (parse_tree__prog_event__V_99_99));
#line 482 "prog_event.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_98_98, 1) = ((MR_Box) (parse_tree__prog_event__V_100_100));
#line 482 "prog_event.m"
                }
#line 483 "prog_event.m"
                {
#line 483 "prog_event.m"
                  parse_tree__prog_event__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_97_97, 0) = ((MR_Box) (parse_tree__prog_event__V_98_98));
#line 483 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 483 "prog_event.m"
                }
#line 481 "prog_event.m"
                {
#line 481 "prog_event.m"
                  parse_tree__prog_event__ErrorSpec_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 481 "prog_event.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 481 "prog_event.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 481 "prog_event.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_58, 2) = ((MR_Box) (parse_tree__prog_event__V_97_97));
#line 481 "prog_event.m"
                }
#line 484 "prog_event.m"
                {
#line 484 "prog_event.m"
                  parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_104_104, 0) = ((MR_Box) (parse_tree__prog_event__ErrorSpec_58));
#line 484 "prog_event.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_104_104, 1) = ((MR_Box) (parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_16));
#line 484 "prog_event.m"
                }
#line 484 "prog_event.m"
                parse_tree__prog_event__STATE_VARIABLE_KeyMap_105_105 = parse_tree__prog_event__STATE_VARIABLE_KeyMap_0_12;
#line 484 "prog_event.m"
                parse_tree__prog_event__STATE_VARIABLE_AttrNameMap_79_79 = parse_tree__prog_event__STATE_VARIABLE_AttrNameMap_0_8;
#line 480 "prog_event.m"
              }
#line 497 "prog_event.m"
            if (((MR_tag((MR_Word) parse_tree__prog_event__AttrTypeTerm_54)) == (MR_mktag((MR_Integer) 2))))
#line 498 "prog_event.m"
              parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_106_106 = parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_10;
#line 497 "prog_event.m"
            else
#line 497 "prog_event.m"
              if (((MR_tag((MR_Word) parse_tree__prog_event__AttrTypeTerm_54)) == (MR_mktag((MR_Integer) 0))))
#line 489 "prog_event.m"
                {
#line 489 "prog_event.m"
                  MR_Word parse_tree__prog_event__TypeTerm_59 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_event__AttrTypeTerm_54), (MR_Integer) 0);
#line 489 "prog_event.m"
                  MR_Word parse_tree__prog_event__Type_61;
#line 491 "prog_event.m"
                  MR_Word parse_tree__prog_event___OldType_62;
#line 491 "prog_event.m"
                  MR_Box parse_tree__prog_event__conv0__OldType_62;

#line 490 "prog_event.m"
                  {
#line 490 "prog_event.m"
                    parse_tree__prog_event__Type_61 = parse_tree__prog_event__convert_term_to_type_1_f_0(parse_tree__prog_event__TypeTerm_59);
                  }
#line 491 "prog_event.m"
                  {
#line 491 "prog_event.m"
                    parse_tree__prog_event__succeeded = mercury__map__search_3_p_0(parse_tree__prog_event__TypeCtorInfo_117_117, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_10, ((MR_Box) (parse_tree__prog_event__AttrName_52)), &parse_tree__prog_event__conv0__OldType_62);
                  }
#line 491 "prog_event.m"
                  if (parse_tree__prog_event__succeeded)
#line 491 "prog_event.m"
                    {
#line 491 "prog_event.m"
                      parse_tree__prog_event___OldType_62 = ((MR_Word) parse_tree__prog_event__conv0__OldType_62);
#line 491 "prog_event.m"
                      parse_tree__prog_event__succeeded = MR_TRUE;
#line 491 "prog_event.m"
                    }
#line 494 "prog_event.m"
                  if (parse_tree__prog_event__succeeded)
#line 491 "prog_event.m"
                    parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_106_106 = parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_10;
#line 494 "prog_event.m"
                  else
#line 495 "prog_event.m"
                    {
#line 495 "prog_event.m"
                      {
#line 495 "prog_event.m"
                        mercury__map__det_insert_4_p_0(parse_tree__prog_event__TypeCtorInfo_117_117, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (parse_tree__prog_event__AttrName_52)), ((MR_Box) (parse_tree__prog_event__Type_61)), parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_10, &parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_106_106);
                      }
#line 495 "prog_event.m"
                    }
#line 489 "prog_event.m"
                }
#line 497 "prog_event.m"
              else
#line 489 "prog_event.m"
                {
#line 489 "prog_event.m"
                  MR_Word parse_tree__prog_event__TypeTerm_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__AttrTypeTerm_54, (MR_Integer) 0)));
#line 489 "prog_event.m"
                  MR_Word parse_tree__prog_event__Type_129;
#line 488 "prog_event.m"
                  MR_Word parse_tree__prog_event___SynthCall_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__AttrTypeTerm_54, (MR_Integer) 1)));
#line 491 "prog_event.m"
                  MR_Word parse_tree__prog_event___OldType_121;
#line 491 "prog_event.m"
                  MR_Box parse_tree__prog_event__conv1__OldType_121;

#line 490 "prog_event.m"
                  {
#line 490 "prog_event.m"
                    parse_tree__prog_event__Type_129 = parse_tree__prog_event__convert_term_to_type_1_f_0(parse_tree__prog_event__TypeTerm_128);
                  }
#line 491 "prog_event.m"
                  {
#line 491 "prog_event.m"
                    parse_tree__prog_event__succeeded = mercury__map__search_3_p_0(parse_tree__prog_event__TypeCtorInfo_117_117, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_10, ((MR_Box) (parse_tree__prog_event__AttrName_52)), &parse_tree__prog_event__conv1__OldType_121);
                  }
#line 491 "prog_event.m"
                  if (parse_tree__prog_event__succeeded)
#line 491 "prog_event.m"
                    {
#line 491 "prog_event.m"
                      parse_tree__prog_event___OldType_121 = ((MR_Word) parse_tree__prog_event__conv1__OldType_121);
#line 491 "prog_event.m"
                      parse_tree__prog_event__succeeded = MR_TRUE;
#line 491 "prog_event.m"
                    }
#line 494 "prog_event.m"
                  if (parse_tree__prog_event__succeeded)
#line 491 "prog_event.m"
                    parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_106_106 = parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_10;
#line 494 "prog_event.m"
                  else
#line 495 "prog_event.m"
                    {
#line 495 "prog_event.m"
                      {
#line 495 "prog_event.m"
                        mercury__map__det_insert_4_p_0(parse_tree__prog_event__TypeCtorInfo_117_117, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (parse_tree__prog_event__AttrName_52)), ((MR_Box) (parse_tree__prog_event__Type_129)), parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_10, &parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_106_106);
                      }
#line 495 "prog_event.m"
                    }
#line 489 "prog_event.m"
                }
#line 501 "prog_event.m"
            parse_tree__prog_event__V_107_107 = (parse_tree__prog_event__AttrNum_5 + (MR_Integer) 1);
#line 500 "prog_event.m"
            /* direct tailcall eliminated */
#line 500 "prog_event.m"
            {
#line 500 "prog_event.m"
              MR_Word parse_tree__prog_event__HeadVar__4__tmp_copy_4 = parse_tree__prog_event__AttrTerms_44;
#line 500 "prog_event.m"
              MR_Integer parse_tree__prog_event__AttrNum__tmp_copy_5 = parse_tree__prog_event__V_107_107;
#line 500 "prog_event.m"
              MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrNumMap_0__tmp_copy_6 = parse_tree__prog_event__STATE_VARIABLE_AttrNumMap_76_76;
#line 500 "prog_event.m"
              MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrNameMap_0__tmp_copy_8 = parse_tree__prog_event__STATE_VARIABLE_AttrNameMap_79_79;
#line 500 "prog_event.m"
              MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0__tmp_copy_10 = parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_106_106;
#line 500 "prog_event.m"
              MR_Word parse_tree__prog_event__STATE_VARIABLE_KeyMap_0__tmp_copy_12 = parse_tree__prog_event__STATE_VARIABLE_KeyMap_105_105;
#line 500 "prog_event.m"
              MR_Word parse_tree__prog_event__STATE_VARIABLE_DepRel_0__tmp_copy_14 = parse_tree__prog_event__STATE_VARIABLE_DepRel_77_77;
#line 500 "prog_event.m"
              MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0__tmp_copy_16 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_104_104;

#line 500 "prog_event.m"
              parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_16 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0__tmp_copy_16;
#line 500 "prog_event.m"
              parse_tree__prog_event__STATE_VARIABLE_DepRel_0_14 = parse_tree__prog_event__STATE_VARIABLE_DepRel_0__tmp_copy_14;
#line 500 "prog_event.m"
              parse_tree__prog_event__STATE_VARIABLE_KeyMap_0_12 = parse_tree__prog_event__STATE_VARIABLE_KeyMap_0__tmp_copy_12;
#line 500 "prog_event.m"
              parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_10 = parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0__tmp_copy_10;
#line 500 "prog_event.m"
              parse_tree__prog_event__STATE_VARIABLE_AttrNameMap_0_8 = parse_tree__prog_event__STATE_VARIABLE_AttrNameMap_0__tmp_copy_8;
#line 500 "prog_event.m"
              parse_tree__prog_event__STATE_VARIABLE_AttrNumMap_0_6 = parse_tree__prog_event__STATE_VARIABLE_AttrNumMap_0__tmp_copy_6;
#line 500 "prog_event.m"
              parse_tree__prog_event__AttrNum_5 = parse_tree__prog_event__AttrNum__tmp_copy_5;
#line 500 "prog_event.m"
              parse_tree__prog_event__HeadVar__4_4 = parse_tree__prog_event__HeadVar__4__tmp_copy_4;
#line 500 "prog_event.m"
            }
#line 500 "prog_event.m"
            continue;
#line 470 "prog_event.m"
          }
#line 466 "prog_event.m"
      }
#line 466 "prog_event.m"
      break;
#line 466 "prog_event.m"
    }
#line 459 "prog_event.m"
}

#line 436 "prog_event.m"
static MR_Integer MR_CALL 
parse_tree__prog_event__attr_info_number_1_f_0(
#line 436 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__1_1)
#line 436 "prog_event.m"
{
#line 436 "prog_event.m"
  {
#line 436 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 436 "prog_event.m"
    MR_Integer parse_tree__prog_event__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 0)));
#line 436 "prog_event.m"
    MR_String parse_tree__prog_event__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 1)));
#line 436 "prog_event.m"
    MR_Integer parse_tree__prog_event__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 2)));
#line 436 "prog_event.m"
    MR_Word parse_tree__prog_event__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 3)));

#line 436 "prog_event.m"
    return parse_tree__prog_event__HeadVar__2_2;
#line 436 "prog_event.m"
  }
#line 436 "prog_event.m"
}

#line 411 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event__keep_only_synth_attr_nums_3_p_0(
#line 411 "prog_event.m"
  MR_Word parse_tree__prog_event__AttrMap_1,
#line 411 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 411 "prog_event.m"
  MR_Word * parse_tree__prog_event__HeadVar__3_3)
#line 411 "prog_event.m"
{
#line 414 "prog_event.m"
  {
#line 414 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;

#line 414 "prog_event.m"
    if ((parse_tree__prog_event__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 414 "prog_event.m"
      *parse_tree__prog_event__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 414 "prog_event.m"
    else
#line 415 "prog_event.m"
      {
#line 415 "prog_event.m"
        MR_String parse_tree__prog_event__AttrName_6 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
#line 415 "prog_event.m"
        MR_Word parse_tree__prog_event__AttrNames_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));
#line 415 "prog_event.m"
        MR_Word parse_tree__prog_event__SynthAttrNumsTail_9;
#line 415 "prog_event.m"
        MR_Integer parse_tree__prog_event__AttrNum_10;
#line 415 "prog_event.m"
        MR_Word parse_tree__prog_event__AttrType_13;
#line 415 "prog_event.m"
        MR_Word parse_tree__prog_event__V_18_18;
#line 417 "prog_event.m"
        MR_Box parse_tree__prog_event__conv0_V_18_18;
#line 417 "prog_event.m"
        MR_String parse_tree__prog_event__V_11_11;
#line 417 "prog_event.m"
        MR_Integer parse_tree__prog_event__V_12_12;

#line 416 "prog_event.m"
        {
#line 416 "prog_event.m"
          parse_tree__prog_event__keep_only_synth_attr_nums_3_p_0(parse_tree__prog_event__AttrMap_1, parse_tree__prog_event__AttrNames_7, &parse_tree__prog_event__SynthAttrNumsTail_9);
        }
#line 417 "prog_event.m"
        {
#line 417 "prog_event.m"
          mercury__map__lookup_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0, parse_tree__prog_event__AttrMap_1, ((MR_Box) (parse_tree__prog_event__AttrName_6)), &parse_tree__prog_event__conv0_V_18_18);
        }
#line 417 "prog_event.m"
        parse_tree__prog_event__V_18_18 = ((MR_Word) parse_tree__prog_event__conv0_V_18_18);
#line 417 "prog_event.m"
        parse_tree__prog_event__AttrNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_18_18, (MR_Integer) 0)));
#line 417 "prog_event.m"
        parse_tree__prog_event__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_18_18, (MR_Integer) 1)));
#line 417 "prog_event.m"
        parse_tree__prog_event__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_18_18, (MR_Integer) 2)));
#line 417 "prog_event.m"
        parse_tree__prog_event__AttrType_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_18_18, (MR_Integer) 3)));
#line 423 "prog_event.m"
        if (((MR_tag((MR_Word) parse_tree__prog_event__AttrType_13)) == (MR_mktag((MR_Integer) 1))))
#line 425 "prog_event.m"
          {
#line 425 "prog_event.m"
            MR_Word base;
#line 425 "prog_event.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 425 "prog_event.m"
            *parse_tree__prog_event__HeadVar__3_3 = base;
#line 425 "prog_event.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_event__AttrNum_10));
#line 425 "prog_event.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_event__SynthAttrNumsTail_9));
#line 425 "prog_event.m"
          }
#line 423 "prog_event.m"
        else
#line 422 "prog_event.m"
          *parse_tree__prog_event__HeadVar__3_3 = parse_tree__prog_event__SynthAttrNumsTail_9;
#line 415 "prog_event.m"
      }
#line 414 "prog_event.m"
  }
#line 411 "prog_event.m"
}

#line 343 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event__convert_term_to_spec_map_6_p_0(
#line 343 "prog_event.m"
  MR_String parse_tree__prog_event__FileName_7,
#line 343 "prog_event.m"
  MR_Word parse_tree__prog_event__SpecTerm_8,
#line 343 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_0_34,
#line 343 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_35,
#line 343 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_36,
#line 343 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_37)
#line 343 "prog_event.m"
{
#line 347 "prog_event.m"
  {
#line 347 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 347 "prog_event.m"
    MR_Word parse_tree__prog_event__TypeCtorInfo_109_109 = (MR_Word) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0;
#line 347 "prog_event.m"
    MR_Word parse_tree__prog_event__TypeCtorInfo_110_110;
#line 347 "prog_event.m"
    MR_String parse_tree__prog_event__EventName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SpecTerm_8, (MR_Integer) 0)));
#line 347 "prog_event.m"
    MR_Integer parse_tree__prog_event__EventNumber_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SpecTerm_8, (MR_Integer) 1)));
#line 347 "prog_event.m"
    MR_Integer parse_tree__prog_event__EventLineNumber_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SpecTerm_8, (MR_Integer) 2)));
#line 347 "prog_event.m"
    MR_Word parse_tree__prog_event__AttrTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SpecTerm_8, (MR_Integer) 3)));
#line 347 "prog_event.m"
    MR_Word parse_tree__prog_event__AttrNameMap_16;
#line 347 "prog_event.m"
    MR_Word parse_tree__prog_event__AttrTypeMap0_17;
#line 347 "prog_event.m"
    MR_Word parse_tree__prog_event__KeyMap_18;
#line 347 "prog_event.m"
    MR_Word parse_tree__prog_event__DepRel0_19;
#line 347 "prog_event.m"
    MR_Word parse_tree__prog_event__AttrTypeMap_20;
#line 347 "prog_event.m"
    MR_Word parse_tree__prog_event__DepRel_21;
#line 347 "prog_event.m"
    MR_Word parse_tree__prog_event__RevAttrs_22;
#line 347 "prog_event.m"
    MR_Word parse_tree__prog_event__SynthAttrNumOrder_24;
#line 347 "prog_event.m"
    MR_Word parse_tree__prog_event__Attrs_27;
#line 347 "prog_event.m"
    MR_Word parse_tree__prog_event__EventSpec_28;
#line 347 "prog_event.m"
    MR_Word parse_tree__prog_event__V_39_39;
#line 347 "prog_event.m"
    MR_Word parse_tree__prog_event__V_40_40;
#line 347 "prog_event.m"
    MR_Word parse_tree__prog_event__V_41_41;
#line 347 "prog_event.m"
    MR_Word parse_tree__prog_event__V_42_42;
#line 347 "prog_event.m"
    MR_Word parse_tree__prog_event__V_43_43;
#line 347 "prog_event.m"
    MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_44_44;
#line 347 "prog_event.m"
    MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_45_45;
#line 347 "prog_event.m"
    MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_48_48;
#line 347 "prog_event.m"
    MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_71_71;
#line 369 "prog_event.m"
    MR_Word parse_tree__prog_event___AttrNumMap_15;
#line 381 "prog_event.m"
    MR_Word parse_tree__prog_event__AllAttrNameOrder_23;
#line 407 "prog_event.m"
    MR_Word parse_tree__prog_event__OldEventSpec_29;
#line 398 "prog_event.m"
    MR_Box parse_tree__prog_event__conv0_OldEventSpec_29;

#line 370 "prog_event.m"
    {
#line 370 "prog_event.m"
      parse_tree__prog_event__V_39_39 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, parse_tree__prog_event__TypeCtorInfo_109_109);
    }
#line 8703 "parse_tree.prog_event.c"
    parse_tree__prog_event__TypeCtorInfo_110_110 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 370 "prog_event.m"
    {
#line 370 "prog_event.m"
      parse_tree__prog_event__V_40_40 = mercury__map__init_0_f_0(parse_tree__prog_event__TypeCtorInfo_110_110, parse_tree__prog_event__TypeCtorInfo_109_109);
    }
#line 371 "prog_event.m"
    {
#line 371 "prog_event.m"
      parse_tree__prog_event__V_41_41 = mercury__map__init_0_f_0(parse_tree__prog_event__TypeCtorInfo_110_110, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
    }
#line 371 "prog_event.m"
    {
#line 371 "prog_event.m"
      parse_tree__prog_event__V_42_42 = mercury__bimap__init_0_f_0(parse_tree__prog_event__TypeCtorInfo_110_110, (MR_Word) &parse_tree__prog_event_scalar_common_1[0]);
    }
#line 372 "prog_event.m"
    {
#line 372 "prog_event.m"
      parse_tree__prog_event__V_43_43 = mercury__digraph__init_0_f_0(parse_tree__prog_event__TypeCtorInfo_110_110);
    }
#line 369 "prog_event.m"
    {
#line 369 "prog_event.m"
      parse_tree__prog_event__build_plain_type_map_17_p_0(parse_tree__prog_event__EventName_11, parse_tree__prog_event__FileName_7, parse_tree__prog_event__EventLineNumber_13, parse_tree__prog_event__AttrTerms_14, (MR_Integer) 0, parse_tree__prog_event__V_39_39, &parse_tree__prog_event___AttrNumMap_15, parse_tree__prog_event__V_40_40, &parse_tree__prog_event__AttrNameMap_16, parse_tree__prog_event__V_41_41, &parse_tree__prog_event__AttrTypeMap0_17, parse_tree__prog_event__V_42_42, &parse_tree__prog_event__KeyMap_18, parse_tree__prog_event__V_43_43, &parse_tree__prog_event__DepRel0_19, parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_36, &parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_44_44);
    }
#line 373 "prog_event.m"
    {
#line 373 "prog_event.m"
      parse_tree__prog_event__build_dep_map_11_p_0(parse_tree__prog_event__EventName_11, parse_tree__prog_event__FileName_7, parse_tree__prog_event__AttrNameMap_16, parse_tree__prog_event__KeyMap_18, parse_tree__prog_event__AttrTerms_14, parse_tree__prog_event__AttrTypeMap0_17, &parse_tree__prog_event__AttrTypeMap_20, parse_tree__prog_event__DepRel0_19, &parse_tree__prog_event__DepRel_21, parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_44_44, &parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_45_45);
    }
#line 375 "prog_event.m"
    {
#line 375 "prog_event.m"
      parse_tree__prog_event__convert_terms_to_attrs_10_p_0(parse_tree__prog_event__EventName_11, parse_tree__prog_event__FileName_7, parse_tree__prog_event__AttrNameMap_16, parse_tree__prog_event__AttrTypeMap_20, (MR_Integer) 0, parse_tree__prog_event__AttrTerms_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_event__RevAttrs_22, parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_45_45, &parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_48_48);
    }
#line 377 "prog_event.m"
    {
#line 377 "prog_event.m"
      parse_tree__prog_event__succeeded = mercury__digraph__tsort_2_p_0(parse_tree__prog_event__TypeCtorInfo_110_110, parse_tree__prog_event__DepRel_21, &parse_tree__prog_event__AllAttrNameOrder_23);
    }
#line 381 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 379 "prog_event.m"
      {
#line 379 "prog_event.m"
        {
#line 379 "prog_event.m"
          parse_tree__prog_event__keep_only_synth_attr_nums_3_p_0(parse_tree__prog_event__AttrNameMap_16, parse_tree__prog_event__AllAttrNameOrder_23, &parse_tree__prog_event__SynthAttrNumOrder_24);
        }
#line 379 "prog_event.m"
        parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_71_71 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_48_48;
#line 379 "prog_event.m"
      }
#line 381 "prog_event.m"
    else
#line 388 "prog_event.m"
      {
#line 388 "prog_event.m"
        MR_Word parse_tree__prog_event__Pieces_25;
#line 388 "prog_event.m"
        MR_Word parse_tree__prog_event__CircErrorSpec_26;
#line 388 "prog_event.m"
        MR_Word parse_tree__prog_event__V_51_51;
#line 388 "prog_event.m"
        MR_Word parse_tree__prog_event__V_54_54;
#line 388 "prog_event.m"
        MR_Word parse_tree__prog_event__V_55_55;
#line 388 "prog_event.m"
        MR_Word parse_tree__prog_event__V_64_64;
#line 388 "prog_event.m"
        MR_Word parse_tree__prog_event__V_65_65;
#line 388 "prog_event.m"
        MR_Word parse_tree__prog_event__V_66_66;
#line 388 "prog_event.m"
        MR_Word parse_tree__prog_event__V_67_67;
#line 388 "prog_event.m"
        MR_Word parse_tree__prog_event__V_68_68;

#line 388 "prog_event.m"
        {
#line 388 "prog_event.m"
          parse_tree__prog_event__V_55_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 388 "prog_event.m"
          MR_hl_field(MR_mktag(2), parse_tree__prog_event__V_55_55, 0) = ((MR_Box) (parse_tree__prog_event__EventName_11));
#line 388 "prog_event.m"
        }
#line 388 "prog_event.m"
        {
#line 388 "prog_event.m"
          parse_tree__prog_event__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_54_54, 0) = ((MR_Box) (parse_tree__prog_event__V_55_55));
#line 388 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[10])));
#line 388 "prog_event.m"
        }
#line 387 "prog_event.m"
        {
#line 387 "prog_event.m"
          parse_tree__prog_event__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_51_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[23])));
#line 387 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_51_51, 1) = ((MR_Box) (parse_tree__prog_event__V_54_54));
#line 387 "prog_event.m"
        }
#line 386 "prog_event.m"
        {
#line 386 "prog_event.m"
          parse_tree__prog_event__Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 386 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[22])));
#line 386 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_25, 1) = ((MR_Box) (parse_tree__prog_event__V_51_51));
#line 386 "prog_event.m"
        }
#line 390 "prog_event.m"
        {
#line 390 "prog_event.m"
          parse_tree__prog_event__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 390 "prog_event.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_66_66, 0) = ((MR_Box) (parse_tree__prog_event__FileName_7));
#line 390 "prog_event.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_66_66, 1) = ((MR_Box) (parse_tree__prog_event__EventLineNumber_13));
#line 390 "prog_event.m"
        }
#line 391 "prog_event.m"
        {
#line 391 "prog_event.m"
          parse_tree__prog_event__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 391 "prog_event.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_68_68, 0) = ((MR_Box) (parse_tree__prog_event__Pieces_25));
#line 391 "prog_event.m"
        }
#line 391 "prog_event.m"
        {
#line 391 "prog_event.m"
          parse_tree__prog_event__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_67_67, 0) = ((MR_Box) (parse_tree__prog_event__V_68_68));
#line 391 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 391 "prog_event.m"
        }
#line 390 "prog_event.m"
        {
#line 390 "prog_event.m"
          parse_tree__prog_event__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 390 "prog_event.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_65_65, 0) = ((MR_Box) (parse_tree__prog_event__V_66_66));
#line 390 "prog_event.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_65_65, 1) = ((MR_Box) (parse_tree__prog_event__V_67_67));
#line 390 "prog_event.m"
        }
#line 391 "prog_event.m"
        {
#line 391 "prog_event.m"
          parse_tree__prog_event__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_64_64, 0) = ((MR_Box) (parse_tree__prog_event__V_65_65));
#line 391 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 391 "prog_event.m"
        }
#line 389 "prog_event.m"
        {
#line 389 "prog_event.m"
          parse_tree__prog_event__CircErrorSpec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 389 "prog_event.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__CircErrorSpec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 389 "prog_event.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__CircErrorSpec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 389 "prog_event.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__CircErrorSpec_26, 2) = ((MR_Box) (parse_tree__prog_event__V_64_64));
#line 389 "prog_event.m"
        }
#line 392 "prog_event.m"
        {
#line 392 "prog_event.m"
          parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 392 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_71_71, 0) = ((MR_Box) (parse_tree__prog_event__CircErrorSpec_26));
#line 392 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_71_71, 1) = ((MR_Box) (parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_48_48));
#line 392 "prog_event.m"
        }
#line 393 "prog_event.m"
        parse_tree__prog_event__SynthAttrNumOrder_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 388 "prog_event.m"
      }
#line 395 "prog_event.m"
    {
#line 395 "prog_event.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_attribute_0, parse_tree__prog_event__RevAttrs_22, &parse_tree__prog_event__Attrs_27);
    }
#line 396 "prog_event.m"
    {
#line 396 "prog_event.m"
      parse_tree__prog_event__EventSpec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 396 "prog_event.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_28, 0) = ((MR_Box) (parse_tree__prog_event__EventNumber_12));
#line 396 "prog_event.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_28, 1) = ((MR_Box) (parse_tree__prog_event__EventName_11));
#line 396 "prog_event.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_28, 2) = ((MR_Box) (parse_tree__prog_event__EventLineNumber_13));
#line 396 "prog_event.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_28, 3) = ((MR_Box) (parse_tree__prog_event__Attrs_27));
#line 396 "prog_event.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_28, 4) = ((MR_Box) (parse_tree__prog_event__SynthAttrNumOrder_24));
#line 396 "prog_event.m"
    }
#line 398 "prog_event.m"
    {
#line 398 "prog_event.m"
      parse_tree__prog_event__succeeded = mercury__map__search_3_p_0(parse_tree__prog_event__TypeCtorInfo_110_110, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0, parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_0_34, ((MR_Box) (parse_tree__prog_event__EventName_11)), &parse_tree__prog_event__conv0_OldEventSpec_29);
    }
#line 398 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 398 "prog_event.m"
      {
#line 398 "prog_event.m"
        parse_tree__prog_event__OldEventSpec_29 = ((MR_Word) parse_tree__prog_event__conv0_OldEventSpec_29);
#line 398 "prog_event.m"
        parse_tree__prog_event__succeeded = MR_TRUE;
#line 398 "prog_event.m"
      }
#line 407 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 399 "prog_event.m"
      {
#line 399 "prog_event.m"
        MR_Integer parse_tree__prog_event__OldLineNumber_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__OldEventSpec_29, (MR_Integer) 2)));
#line 399 "prog_event.m"
        MR_Word parse_tree__prog_event__Pieces1_31;
#line 399 "prog_event.m"
        MR_Word parse_tree__prog_event__DuplErrorSpec_33;
#line 399 "prog_event.m"
        MR_Word parse_tree__prog_event__V_74_74;
#line 399 "prog_event.m"
        MR_Word parse_tree__prog_event__V_75_75;
#line 399 "prog_event.m"
        MR_Word parse_tree__prog_event__V_89_89;
#line 399 "prog_event.m"
        MR_Word parse_tree__prog_event__V_90_90;
#line 399 "prog_event.m"
        MR_Word parse_tree__prog_event__V_91_91;
#line 399 "prog_event.m"
        MR_Word parse_tree__prog_event__V_92_92;
#line 399 "prog_event.m"
        MR_Word parse_tree__prog_event__V_93_93;
#line 399 "prog_event.m"
        MR_Word parse_tree__prog_event__V_95_95;
#line 399 "prog_event.m"
        MR_Word parse_tree__prog_event__V_96_96;
#line 399 "prog_event.m"
        MR_Word parse_tree__prog_event__V_97_97;
#line 399 "prog_event.m"
        MR_Integer parse_tree__prog_event__V_104_104 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__OldEventSpec_29, (MR_Integer) 0)));
#line 399 "prog_event.m"
        MR_String parse_tree__prog_event__V_105_105 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__OldEventSpec_29, (MR_Integer) 1)));
#line 399 "prog_event.m"
        MR_Word parse_tree__prog_event__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__OldEventSpec_29, (MR_Integer) 3)));
#line 399 "prog_event.m"
        MR_Word parse_tree__prog_event__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__OldEventSpec_29, (MR_Integer) 4)));

#line 401 "prog_event.m"
        {
#line 401 "prog_event.m"
          parse_tree__prog_event__V_75_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 401 "prog_event.m"
          MR_hl_field(MR_mktag(2), parse_tree__prog_event__V_75_75, 0) = ((MR_Box) (parse_tree__prog_event__EventName_11));
#line 401 "prog_event.m"
        }
#line 401 "prog_event.m"
        {
#line 401 "prog_event.m"
          parse_tree__prog_event__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 401 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_74_74, 0) = ((MR_Box) (parse_tree__prog_event__V_75_75));
#line 401 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[10])));
#line 401 "prog_event.m"
        }
#line 400 "prog_event.m"
        {
#line 400 "prog_event.m"
          parse_tree__prog_event__Pieces1_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 400 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces1_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[24])));
#line 400 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces1_31, 1) = ((MR_Box) (parse_tree__prog_event__V_74_74));
#line 400 "prog_event.m"
        }
#line 404 "prog_event.m"
        {
#line 404 "prog_event.m"
          parse_tree__prog_event__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 404 "prog_event.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_91_91, 0) = ((MR_Box) (parse_tree__prog_event__FileName_7));
#line 404 "prog_event.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_91_91, 1) = ((MR_Box) (parse_tree__prog_event__EventLineNumber_13));
#line 404 "prog_event.m"
        }
#line 404 "prog_event.m"
        {
#line 404 "prog_event.m"
          parse_tree__prog_event__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 404 "prog_event.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_93_93, 0) = ((MR_Box) (parse_tree__prog_event__Pieces1_31));
#line 404 "prog_event.m"
        }
#line 404 "prog_event.m"
        {
#line 404 "prog_event.m"
          parse_tree__prog_event__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 404 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_92_92, 0) = ((MR_Box) (parse_tree__prog_event__V_93_93));
#line 404 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 404 "prog_event.m"
        }
#line 404 "prog_event.m"
        {
#line 404 "prog_event.m"
          parse_tree__prog_event__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 404 "prog_event.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_90_90, 0) = ((MR_Box) (parse_tree__prog_event__V_91_91));
#line 404 "prog_event.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_90_90, 1) = ((MR_Box) (parse_tree__prog_event__V_92_92));
#line 404 "prog_event.m"
        }
#line 405 "prog_event.m"
        {
#line 405 "prog_event.m"
          parse_tree__prog_event__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 405 "prog_event.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_97_97, 0) = ((MR_Box) (parse_tree__prog_event__FileName_7));
#line 405 "prog_event.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_97_97, 1) = ((MR_Box) (parse_tree__prog_event__OldLineNumber_30));
#line 405 "prog_event.m"
        }
#line 405 "prog_event.m"
        {
#line 405 "prog_event.m"
          parse_tree__prog_event__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 405 "prog_event.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_96_96, 0) = ((MR_Box) (parse_tree__prog_event__V_97_97));
#line 405 "prog_event.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[25])));
#line 405 "prog_event.m"
        }
#line 405 "prog_event.m"
        {
#line 405 "prog_event.m"
          parse_tree__prog_event__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 405 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_95_95, 0) = ((MR_Box) (parse_tree__prog_event__V_96_96));
#line 405 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 405 "prog_event.m"
        }
#line 404 "prog_event.m"
        {
#line 404 "prog_event.m"
          parse_tree__prog_event__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 404 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_89_89, 0) = ((MR_Box) (parse_tree__prog_event__V_90_90));
#line 404 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_89_89, 1) = ((MR_Box) (parse_tree__prog_event__V_95_95));
#line 404 "prog_event.m"
        }
#line 403 "prog_event.m"
        {
#line 403 "prog_event.m"
          parse_tree__prog_event__DuplErrorSpec_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 403 "prog_event.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__DuplErrorSpec_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 403 "prog_event.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__DuplErrorSpec_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 403 "prog_event.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__DuplErrorSpec_33, 2) = ((MR_Box) (parse_tree__prog_event__V_89_89));
#line 403 "prog_event.m"
        }
#line 406 "prog_event.m"
        {
#line 406 "prog_event.m"
          MR_Word base;
#line 406 "prog_event.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "prog_event.m"
          *parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_37 = base;
#line 406 "prog_event.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_event__DuplErrorSpec_33));
#line 406 "prog_event.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_71_71));
#line 406 "prog_event.m"
        }
#line 406 "prog_event.m"
        *parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_35 = parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_0_34;
#line 399 "prog_event.m"
      }
#line 407 "prog_event.m"
    else
#line 408 "prog_event.m"
      {
#line 408 "prog_event.m"
        {
#line 408 "prog_event.m"
          mercury__map__det_insert_4_p_0(parse_tree__prog_event__TypeCtorInfo_110_110, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0, ((MR_Box) (parse_tree__prog_event__EventName_11)), ((MR_Box) (parse_tree__prog_event__EventSpec_28)), parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_0_34, parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_35);
        }
#line 408 "prog_event.m"
        *parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_37 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_71_71;
#line 408 "prog_event.m"
      }
#line 347 "prog_event.m"
  }
#line 343 "prog_event.m"
}

#line 333 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event__convert_list_to_spec_map_6_p_0(
#line 333 "prog_event.m"
  MR_String parse_tree__prog_event__FileName_1,
#line 333 "prog_event.m"
  MR_Word parse_tree__prog_event__HeadVar__2_2,
#line 333 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_0_3,
#line 333 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_4,
#line 333 "prog_event.m"
  MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_5,
#line 333 "prog_event.m"
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_6)
#line 333 "prog_event.m"
{
#line 337 "prog_event.m"
  while (MR_TRUE)
#line 337 "prog_event.m"
    {
#line 337 "prog_event.m"
      /* tailcall optimized into a loop */
#line 337 "prog_event.m"
      {
#line 337 "prog_event.m"
        MR_bool parse_tree__prog_event__succeeded;

#line 337 "prog_event.m"
        if ((parse_tree__prog_event__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 337 "prog_event.m"
          {
#line 337 "prog_event.m"
            *parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_6 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_5;
#line 337 "prog_event.m"
            *parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_4 = parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_0_3;
#line 337 "prog_event.m"
          }
#line 337 "prog_event.m"
        else
#line 339 "prog_event.m"
          {
#line 339 "prog_event.m"
            MR_Word parse_tree__prog_event__SpecTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
#line 339 "prog_event.m"
            MR_Word parse_tree__prog_event__SpecTerms_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));
#line 339 "prog_event.m"
            MR_Word parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_23_23;
#line 339 "prog_event.m"
            MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_24_24;

#line 340 "prog_event.m"
            {
#line 340 "prog_event.m"
              parse_tree__prog_event__convert_term_to_spec_map_6_p_0(parse_tree__prog_event__FileName_1, parse_tree__prog_event__SpecTerm_15, parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_0_3, &parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_23_23, parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_5, &parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_24_24);
            }
#line 341 "prog_event.m"
            /* direct tailcall eliminated */
#line 341 "prog_event.m"
            {
#line 341 "prog_event.m"
              MR_Word parse_tree__prog_event__HeadVar__2__tmp_copy_2 = parse_tree__prog_event__SpecTerms_16;
#line 341 "prog_event.m"
              MR_Word parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_0__tmp_copy_3 = parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_23_23;
#line 341 "prog_event.m"
              MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0__tmp_copy_5 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_24_24;

#line 341 "prog_event.m"
              parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_5 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0__tmp_copy_5;
#line 341 "prog_event.m"
              parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_0_3 = parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_0__tmp_copy_3;
#line 341 "prog_event.m"
              parse_tree__prog_event__HeadVar__2_2 = parse_tree__prog_event__HeadVar__2__tmp_copy_2;
#line 341 "prog_event.m"
            }
#line 341 "prog_event.m"
            continue;
#line 339 "prog_event.m"
          }
#line 337 "prog_event.m"
      }
#line 337 "prog_event.m"
      break;
#line 337 "prog_event.m"
    }
#line 333 "prog_event.m"
}

#line 146 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event__read_specs_file_5_p_0(
#line 146 "prog_event.m"
  MR_String parse_tree__prog_event__SpecsFileName_1,
#line 146 "prog_event.m"
  MR_String parse_tree__prog_event__TermFileName_2,
#line 146 "prog_event.m"
  MR_String * parse_tree__prog_event__Problem_3)
#line 146 "prog_event.m"
{
#line 163 "prog_event.m"
  {
#line 163 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;

#line 167 "prog_event.m"
{
#define MR_PROC_LABEL parse_tree__prog_event__read_specs_file_5_p_0

	MR_String SpecsFileName;
	MR_String TermFileName;
	MR_String Problem;

	SpecsFileName =  parse_tree__prog_event__SpecsFileName_1 ;
	TermFileName =  parse_tree__prog_event__TermFileName_2 ;
		{
#line 167 "prog_event.m"

    /*
    ** We need to save/restore MR_hp so that we can allocate the return
    ** value on Mercury's heap if necessary.
    */
    MR_save_transient_hp();
    Problem = read_specs_file_2(MR_ALLOC_ID, SpecsFileName, TermFileName);
    MR_restore_transient_hp();

#line 9249 "parse_tree.prog_event.c"

		;}
#undef MR_PROC_LABEL
	 *parse_tree__prog_event__Problem_3  = Problem;
#line 167 "prog_event.m"
}
#line 163 "prog_event.m"
  }
#line 146 "prog_event.m"
}

#line 847 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event__event_arg_modes_3_p_0_1(
#line 847 "prog_event.m"
  MR_Box parse_tree__prog_event__closure_arg,
#line 847 "prog_event.m"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 847 "prog_event.m"
  MR_Box * parse_tree__prog_event__wrapper_arg_2)
#line 847 "prog_event.m"
{
#line 847 "prog_event.m"
  {
#line 847 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 847 "prog_event.m"
    MR_Box parse_tree__prog_event__closure = parse_tree__prog_event__closure_arg;
#line 847 "prog_event.m"
    MR_Word parse_tree__prog_event__conv1_HeadVar__2_2;

#line 847 "prog_event.m"
    {
#line 847 "prog_event.m"
      parse_tree__prog_event__succeeded = parse_tree__prog_event__project_event_arg_mode_2_p_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), &parse_tree__prog_event__conv1_HeadVar__2_2);
    }
#line 847 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 847 "prog_event.m"
      {
#line 847 "prog_event.m"
        *parse_tree__prog_event__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_event__conv1_HeadVar__2_2));
#line 847 "prog_event.m"
        parse_tree__prog_event__succeeded = MR_TRUE;
#line 847 "prog_event.m"
      }
#line 847 "prog_event.m"
    return parse_tree__prog_event__succeeded;
#line 847 "prog_event.m"
  }
#line 847 "prog_event.m"
}

#line 55 "prog_event.m"
MR_bool MR_CALL 
parse_tree__prog_event__event_arg_modes_3_p_0(
#line 55 "prog_event.m"
  MR_Word parse_tree__prog_event__EventSpecMap_4,
#line 55 "prog_event.m"
  MR_String parse_tree__prog_event__EventName_5,
#line 55 "prog_event.m"
  MR_Word * parse_tree__prog_event__ArgModes_6)
#line 55 "prog_event.m"
{
#line 845 "prog_event.m"
  {
#line 845 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 845 "prog_event.m"
    MR_Word parse_tree__prog_event__TypeCtorInfo_11_11;
#line 845 "prog_event.m"
    MR_Word parse_tree__prog_event__TypeCtorInfo_12_12;
#line 845 "prog_event.m"
    MR_Word parse_tree__prog_event__Attributes_7;
#line 845 "prog_event.m"
    MR_Word parse_tree__prog_event__V_8_8;
#line 845 "prog_event.m"
    MR_Word parse_tree__prog_event__EventSpec_16;
#line 838 "prog_event.m"
    MR_Box parse_tree__prog_event__conv0_EventSpec_16;
#line 839 "prog_event.m"
    MR_Integer parse_tree__prog_event__V_17_17;
#line 839 "prog_event.m"
    MR_String parse_tree__prog_event__V_18_18;
#line 839 "prog_event.m"
    MR_Integer parse_tree__prog_event__V_19_19;
#line 839 "prog_event.m"
    MR_Word parse_tree__prog_event__V_20_20;

#line 838 "prog_event.m"
    {
#line 838 "prog_event.m"
      parse_tree__prog_event__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0, parse_tree__prog_event__EventSpecMap_4, ((MR_Box) (parse_tree__prog_event__EventName_5)), &parse_tree__prog_event__conv0_EventSpec_16);
    }
#line 838 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 838 "prog_event.m"
      {
#line 838 "prog_event.m"
        parse_tree__prog_event__EventSpec_16 = ((MR_Word) parse_tree__prog_event__conv0_EventSpec_16);
#line 838 "prog_event.m"
        parse_tree__prog_event__succeeded = MR_TRUE;
#line 838 "prog_event.m"
      }
#line 845 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 845 "prog_event.m"
      {
#line 839 "prog_event.m"
        parse_tree__prog_event__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_16, (MR_Integer) 0)));
#line 839 "prog_event.m"
        parse_tree__prog_event__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_16, (MR_Integer) 1)));
#line 839 "prog_event.m"
        parse_tree__prog_event__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_16, (MR_Integer) 2)));
#line 839 "prog_event.m"
        parse_tree__prog_event__Attributes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_16, (MR_Integer) 3)));
#line 839 "prog_event.m"
        parse_tree__prog_event__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_16, (MR_Integer) 4)));
#line 847 "prog_event.m"
        parse_tree__prog_event__V_8_8 = (MR_Word) &parse_tree__prog_event_scalar_common_2[9];
#line 9370 "parse_tree.prog_event.c"
        parse_tree__prog_event__TypeCtorInfo_11_11 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_attribute_0;
#line 9372 "parse_tree.prog_event.c"
        parse_tree__prog_event__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 847 "prog_event.m"
        {
#line 847 "prog_event.m"
          mercury__list__filter_map_3_p_0(parse_tree__prog_event__TypeCtorInfo_11_11, parse_tree__prog_event__TypeCtorInfo_12_12, parse_tree__prog_event__V_8_8, parse_tree__prog_event__Attributes_7, parse_tree__prog_event__ArgModes_6);
        }
#line 847 "prog_event.m"
        parse_tree__prog_event__succeeded = MR_TRUE;
#line 845 "prog_event.m"
      }
#line 845 "prog_event.m"
    return parse_tree__prog_event__succeeded;
#line 845 "prog_event.m"
  }
#line 55 "prog_event.m"
}

#line 843 "prog_event.m"
static MR_bool MR_CALL 
parse_tree__prog_event__event_arg_types_3_p_0_1(
#line 843 "prog_event.m"
  MR_Box parse_tree__prog_event__closure_arg,
#line 843 "prog_event.m"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 843 "prog_event.m"
  MR_Box * parse_tree__prog_event__wrapper_arg_2)
#line 843 "prog_event.m"
{
#line 843 "prog_event.m"
  {
#line 843 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 843 "prog_event.m"
    MR_Box parse_tree__prog_event__closure = parse_tree__prog_event__closure_arg;
#line 843 "prog_event.m"
    MR_Word parse_tree__prog_event__conv1_HeadVar__2_2;

#line 843 "prog_event.m"
    {
#line 843 "prog_event.m"
      parse_tree__prog_event__succeeded = parse_tree__prog_event__project_event_arg_type_2_p_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), &parse_tree__prog_event__conv1_HeadVar__2_2);
    }
#line 843 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 843 "prog_event.m"
      {
#line 843 "prog_event.m"
        *parse_tree__prog_event__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_event__conv1_HeadVar__2_2));
#line 843 "prog_event.m"
        parse_tree__prog_event__succeeded = MR_TRUE;
#line 843 "prog_event.m"
      }
#line 843 "prog_event.m"
    return parse_tree__prog_event__succeeded;
#line 843 "prog_event.m"
  }
#line 843 "prog_event.m"
}

#line 50 "prog_event.m"
MR_bool MR_CALL 
parse_tree__prog_event__event_arg_types_3_p_0(
#line 50 "prog_event.m"
  MR_Word parse_tree__prog_event__EventSpecMap_4,
#line 50 "prog_event.m"
  MR_String parse_tree__prog_event__EventName_5,
#line 50 "prog_event.m"
  MR_Word * parse_tree__prog_event__ArgTypes_6)
#line 50 "prog_event.m"
{
#line 841 "prog_event.m"
  {
#line 841 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 841 "prog_event.m"
    MR_Word parse_tree__prog_event__TypeCtorInfo_11_11;
#line 841 "prog_event.m"
    MR_Word parse_tree__prog_event__TypeCtorInfo_12_12;
#line 841 "prog_event.m"
    MR_Word parse_tree__prog_event__Attributes_7;
#line 841 "prog_event.m"
    MR_Word parse_tree__prog_event__V_8_8;
#line 841 "prog_event.m"
    MR_Word parse_tree__prog_event__EventSpec_16;
#line 838 "prog_event.m"
    MR_Box parse_tree__prog_event__conv0_EventSpec_16;
#line 839 "prog_event.m"
    MR_Integer parse_tree__prog_event__V_17_17;
#line 839 "prog_event.m"
    MR_String parse_tree__prog_event__V_18_18;
#line 839 "prog_event.m"
    MR_Integer parse_tree__prog_event__V_19_19;
#line 839 "prog_event.m"
    MR_Word parse_tree__prog_event__V_20_20;

#line 838 "prog_event.m"
    {
#line 838 "prog_event.m"
      parse_tree__prog_event__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0, parse_tree__prog_event__EventSpecMap_4, ((MR_Box) (parse_tree__prog_event__EventName_5)), &parse_tree__prog_event__conv0_EventSpec_16);
    }
#line 838 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 838 "prog_event.m"
      {
#line 838 "prog_event.m"
        parse_tree__prog_event__EventSpec_16 = ((MR_Word) parse_tree__prog_event__conv0_EventSpec_16);
#line 838 "prog_event.m"
        parse_tree__prog_event__succeeded = MR_TRUE;
#line 838 "prog_event.m"
      }
#line 841 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 841 "prog_event.m"
      {
#line 839 "prog_event.m"
        parse_tree__prog_event__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_16, (MR_Integer) 0)));
#line 839 "prog_event.m"
        parse_tree__prog_event__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_16, (MR_Integer) 1)));
#line 839 "prog_event.m"
        parse_tree__prog_event__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_16, (MR_Integer) 2)));
#line 839 "prog_event.m"
        parse_tree__prog_event__Attributes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_16, (MR_Integer) 3)));
#line 839 "prog_event.m"
        parse_tree__prog_event__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_16, (MR_Integer) 4)));
#line 843 "prog_event.m"
        parse_tree__prog_event__V_8_8 = (MR_Word) &parse_tree__prog_event_scalar_common_2[8];
#line 9499 "parse_tree.prog_event.c"
        parse_tree__prog_event__TypeCtorInfo_11_11 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_attribute_0;
#line 9501 "parse_tree.prog_event.c"
        parse_tree__prog_event__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 843 "prog_event.m"
        {
#line 843 "prog_event.m"
          mercury__list__filter_map_3_p_0(parse_tree__prog_event__TypeCtorInfo_11_11, parse_tree__prog_event__TypeCtorInfo_12_12, parse_tree__prog_event__V_8_8, parse_tree__prog_event__Attributes_7, parse_tree__prog_event__ArgTypes_6);
        }
#line 843 "prog_event.m"
        parse_tree__prog_event__succeeded = MR_TRUE;
#line 841 "prog_event.m"
      }
#line 841 "prog_event.m"
    return parse_tree__prog_event__succeeded;
#line 841 "prog_event.m"
  }
#line 50 "prog_event.m"
}

#line 45 "prog_event.m"
MR_bool MR_CALL 
parse_tree__prog_event__event_attributes_3_p_0(
#line 45 "prog_event.m"
  MR_Word parse_tree__prog_event__EventSpecMap_4,
#line 45 "prog_event.m"
  MR_String parse_tree__prog_event__EventName_5,
#line 45 "prog_event.m"
  MR_Word * parse_tree__prog_event__Attributes_6)
#line 45 "prog_event.m"
{
#line 837 "prog_event.m"
  {
#line 837 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 837 "prog_event.m"
    MR_Word parse_tree__prog_event__EventSpec_7;
#line 838 "prog_event.m"
    MR_Box parse_tree__prog_event__conv0_EventSpec_7;
#line 839 "prog_event.m"
    MR_Integer parse_tree__prog_event__V_8_8;
#line 839 "prog_event.m"
    MR_String parse_tree__prog_event__V_9_9;
#line 839 "prog_event.m"
    MR_Integer parse_tree__prog_event__V_10_10;
#line 839 "prog_event.m"
    MR_Word parse_tree__prog_event__V_11_11;

#line 838 "prog_event.m"
    {
#line 838 "prog_event.m"
      parse_tree__prog_event__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0, parse_tree__prog_event__EventSpecMap_4, ((MR_Box) (parse_tree__prog_event__EventName_5)), &parse_tree__prog_event__conv0_EventSpec_7);
    }
#line 838 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 838 "prog_event.m"
      {
#line 838 "prog_event.m"
        parse_tree__prog_event__EventSpec_7 = ((MR_Word) parse_tree__prog_event__conv0_EventSpec_7);
#line 838 "prog_event.m"
        parse_tree__prog_event__succeeded = MR_TRUE;
#line 838 "prog_event.m"
      }
#line 837 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 837 "prog_event.m"
      {
#line 839 "prog_event.m"
        parse_tree__prog_event__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_7, (MR_Integer) 0)));
#line 839 "prog_event.m"
        parse_tree__prog_event__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_7, (MR_Integer) 1)));
#line 839 "prog_event.m"
        parse_tree__prog_event__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_7, (MR_Integer) 2)));
#line 839 "prog_event.m"
        *parse_tree__prog_event__Attributes_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_7, (MR_Integer) 3)));
#line 839 "prog_event.m"
        parse_tree__prog_event__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_7, (MR_Integer) 4)));
#line 839 "prog_event.m"
        parse_tree__prog_event__succeeded = MR_TRUE;
#line 837 "prog_event.m"
      }
#line 837 "prog_event.m"
    return parse_tree__prog_event__succeeded;
#line 837 "prog_event.m"
  }
#line 45 "prog_event.m"
}

#line 41 "prog_event.m"
MR_bool MR_CALL 
parse_tree__prog_event__event_number_3_p_0(
#line 41 "prog_event.m"
  MR_Word parse_tree__prog_event__EventSpecMap_4,
#line 41 "prog_event.m"
  MR_String parse_tree__prog_event__EventName_5,
#line 41 "prog_event.m"
  MR_Integer * parse_tree__prog_event__EventNumber_6)
#line 41 "prog_event.m"
{
#line 833 "prog_event.m"
  {
#line 833 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 833 "prog_event.m"
    MR_Word parse_tree__prog_event__EventSpec_7;
#line 834 "prog_event.m"
    MR_Box parse_tree__prog_event__conv0_EventSpec_7;
#line 835 "prog_event.m"
    MR_String parse_tree__prog_event__V_8_8;
#line 835 "prog_event.m"
    MR_Integer parse_tree__prog_event__V_9_9;
#line 835 "prog_event.m"
    MR_Word parse_tree__prog_event__V_10_10;
#line 835 "prog_event.m"
    MR_Word parse_tree__prog_event__V_11_11;

#line 834 "prog_event.m"
    {
#line 834 "prog_event.m"
      parse_tree__prog_event__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0, parse_tree__prog_event__EventSpecMap_4, ((MR_Box) (parse_tree__prog_event__EventName_5)), &parse_tree__prog_event__conv0_EventSpec_7);
    }
#line 834 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 834 "prog_event.m"
      {
#line 834 "prog_event.m"
        parse_tree__prog_event__EventSpec_7 = ((MR_Word) parse_tree__prog_event__conv0_EventSpec_7);
#line 834 "prog_event.m"
        parse_tree__prog_event__succeeded = MR_TRUE;
#line 834 "prog_event.m"
      }
#line 833 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 833 "prog_event.m"
      {
#line 835 "prog_event.m"
        *parse_tree__prog_event__EventNumber_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_7, (MR_Integer) 0)));
#line 835 "prog_event.m"
        parse_tree__prog_event__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_7, (MR_Integer) 1)));
#line 835 "prog_event.m"
        parse_tree__prog_event__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_7, (MR_Integer) 2)));
#line 835 "prog_event.m"
        parse_tree__prog_event__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_7, (MR_Integer) 3)));
#line 835 "prog_event.m"
        parse_tree__prog_event__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_7, (MR_Integer) 4)));
#line 835 "prog_event.m"
        parse_tree__prog_event__succeeded = MR_TRUE;
#line 833 "prog_event.m"
      }
#line 833 "prog_event.m"
    return parse_tree__prog_event__succeeded;
#line 833 "prog_event.m"
  }
#line 41 "prog_event.m"
}

#line 757 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event__derive_event_set_data_1_f_0_3(
#line 757 "prog_event.m"
  MR_Box parse_tree__prog_event__closure_arg,
#line 757 "prog_event.m"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 757 "prog_event.m"
  MR_Box parse_tree__prog_event__wrapper_arg_2,
#line 757 "prog_event.m"
  MR_Box * parse_tree__prog_event__wrapper_arg_3)
#line 757 "prog_event.m"
{
#line 757 "prog_event.m"
  {
#line 757 "prog_event.m"
    MR_Box parse_tree__prog_event__closure = parse_tree__prog_event__closure_arg;
#line 757 "prog_event.m"
    MR_Integer parse_tree__prog_event__conv2_STATE_VARIABLE_MaxNumAttr_9;

#line 757 "prog_event.m"
    {
#line 757 "prog_event.m"
      parse_tree__prog_event__update_max_num_attr_3_p_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), ((MR_Integer) parse_tree__prog_event__wrapper_arg_2), &parse_tree__prog_event__conv2_STATE_VARIABLE_MaxNumAttr_9);
    }
#line 757 "prog_event.m"
    *parse_tree__prog_event__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_event__conv2_STATE_VARIABLE_MaxNumAttr_9));
#line 757 "prog_event.m"
  }
#line 757 "prog_event.m"
}

#line 754 "prog_event.m"
static MR_Box MR_CALL 
parse_tree__prog_event__derive_event_set_data_1_f_0_2(
#line 754 "prog_event.m"
  MR_Box parse_tree__prog_event__closure_arg,
#line 754 "prog_event.m"
  MR_Box parse_tree__prog_event__wrapper_arg_1)
#line 754 "prog_event.m"
{
#line 754 "prog_event.m"
  {
#line 754 "prog_event.m"
    MR_Box parse_tree__prog_event__wrapper_arg_2;
#line 754 "prog_event.m"
    MR_Box parse_tree__prog_event__closure = parse_tree__prog_event__closure_arg;
#line 754 "prog_event.m"
    MR_String parse_tree__prog_event__conv1_Desc_4;

#line 754 "prog_event.m"
    {
#line 754 "prog_event.m"
      parse_tree__prog_event__conv1_Desc_4 = parse_tree__prog_event__describe_event_spec_1_f_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1));
    }
#line 754 "prog_event.m"
    parse_tree__prog_event__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_event__conv1_Desc_4));
#line 754 "prog_event.m"
    return parse_tree__prog_event__wrapper_arg_2;
#line 754 "prog_event.m"
  }
#line 754 "prog_event.m"
}

#line 753 "prog_event.m"
static void MR_CALL 
parse_tree__prog_event__derive_event_set_data_1_f_0_1(
#line 753 "prog_event.m"
  MR_Box parse_tree__prog_event__closure_arg,
#line 753 "prog_event.m"
  MR_Box parse_tree__prog_event__wrapper_arg_1,
#line 753 "prog_event.m"
  MR_Box parse_tree__prog_event__wrapper_arg_2,
#line 753 "prog_event.m"
  MR_Box * parse_tree__prog_event__wrapper_arg_3)
#line 753 "prog_event.m"
{
#line 753 "prog_event.m"
  {
#line 753 "prog_event.m"
    MR_Box parse_tree__prog_event__closure = parse_tree__prog_event__closure_arg;
#line 753 "prog_event.m"
    MR_Word parse_tree__prog_event__conv0_Result_6;

#line 753 "prog_event.m"
    {
#line 753 "prog_event.m"
      parse_tree__prog_event__compare_event_specs_by_num_3_p_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_event__wrapper_arg_2), &parse_tree__prog_event__conv0_Result_6);
    }
#line 753 "prog_event.m"
    *parse_tree__prog_event__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_event__conv0_Result_6));
#line 753 "prog_event.m"
  }
#line 753 "prog_event.m"
}

#line 37 "prog_event.m"
MR_Word MR_CALL 
parse_tree__prog_event__derive_event_set_data_1_f_0(
#line 37 "prog_event.m"
  MR_Word parse_tree__prog_event__EventSet_3)
#line 37 "prog_event.m"
{
#line 750 "prog_event.m"
  {
#line 750 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 750 "prog_event.m"
    MR_Word parse_tree__prog_event__EventSetData_4;
#line 750 "prog_event.m"
    MR_Word parse_tree__prog_event__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 750 "prog_event.m"
    MR_Word parse_tree__prog_event__TypeCtorInfo_22_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0;
#line 750 "prog_event.m"
    MR_String parse_tree__prog_event__EventSetName_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSet_3, (MR_Integer) 0)));
#line 750 "prog_event.m"
    MR_Word parse_tree__prog_event__EventSpecMap_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSet_3, (MR_Integer) 1)));
#line 750 "prog_event.m"
    MR_Word parse_tree__prog_event__EventSpecList_7;
#line 750 "prog_event.m"
    MR_Word parse_tree__prog_event__SortedEventSpecList_8;
#line 750 "prog_event.m"
    MR_Word parse_tree__prog_event__EventDescStrings_9;
#line 750 "prog_event.m"
    MR_String parse_tree__prog_event__EventDescs_10;
#line 750 "prog_event.m"
    MR_String parse_tree__prog_event__Desc_11;
#line 750 "prog_event.m"
    MR_Integer parse_tree__prog_event__MaxNumAttr_12;
#line 750 "prog_event.m"
    MR_String parse_tree__prog_event__V_16_16;
#line 750 "prog_event.m"
    MR_String parse_tree__prog_event__V_17_17;
#line 757 "prog_event.m"
    MR_Box parse_tree__prog_event__conv3_MaxNumAttr_12;

#line 752 "prog_event.m"
    {
#line 752 "prog_event.m"
      mercury__map__values_2_p_0(parse_tree__prog_event__TypeCtorInfo_21_21, parse_tree__prog_event__TypeCtorInfo_22_22, parse_tree__prog_event__EventSpecMap_6, &parse_tree__prog_event__EventSpecList_7);
    }
#line 753 "prog_event.m"
    {
#line 753 "prog_event.m"
      mercury__list__sort_3_p_0(parse_tree__prog_event__TypeCtorInfo_22_22, (MR_Word) &parse_tree__prog_event_scalar_common_2[5], parse_tree__prog_event__EventSpecList_7, &parse_tree__prog_event__SortedEventSpecList_8);
    }
#line 754 "prog_event.m"
    {
#line 754 "prog_event.m"
      parse_tree__prog_event__EventDescStrings_9 = mercury__list__map_2_f_0(parse_tree__prog_event__TypeCtorInfo_22_22, parse_tree__prog_event__TypeCtorInfo_21_21, (MR_Word) &parse_tree__prog_event_scalar_common_2[6], parse_tree__prog_event__SortedEventSpecList_8);
    }
#line 755 "prog_event.m"
    {
#line 755 "prog_event.m"
      mercury__string__append_list_2_p_0(parse_tree__prog_event__EventDescStrings_9, &parse_tree__prog_event__EventDescs_10);
    }
#line 756 "prog_event.m"
    {
#line 756 "prog_event.m"
      parse_tree__prog_event__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "\n", parse_tree__prog_event__EventDescs_10);
    }
#line 756 "prog_event.m"
    {
#line 756 "prog_event.m"
      parse_tree__prog_event__V_16_16 = mercury__string__f_43_43_2_f_0(parse_tree__prog_event__EventSetName_5, parse_tree__prog_event__V_17_17);
    }
#line 756 "prog_event.m"
    {
#line 756 "prog_event.m"
      parse_tree__prog_event__Desc_11 = mercury__string__f_43_43_2_f_0((MR_String) "event set ", parse_tree__prog_event__V_16_16);
    }
#line 757 "prog_event.m"
    {
#line 757 "prog_event.m"
      mercury__list__foldl_4_p_0(parse_tree__prog_event__TypeCtorInfo_22_22, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &parse_tree__prog_event_scalar_common_2[7], parse_tree__prog_event__EventSpecList_7, ((MR_Box) ((MR_Integer) -1)), &parse_tree__prog_event__conv3_MaxNumAttr_12);
    }
#line 757 "prog_event.m"
    parse_tree__prog_event__MaxNumAttr_12 = ((MR_Integer) parse_tree__prog_event__conv3_MaxNumAttr_12);
#line 758 "prog_event.m"
    {
#line 758 "prog_event.m"
      parse_tree__prog_event__EventSetData_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 758 "prog_event.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSetData_4, 0) = ((MR_Box) (parse_tree__prog_event__EventSetName_5));
#line 758 "prog_event.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSetData_4, 1) = ((MR_Box) (parse_tree__prog_event__Desc_11));
#line 758 "prog_event.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSetData_4, 2) = ((MR_Box) (parse_tree__prog_event__SortedEventSpecList_8));
#line 758 "prog_event.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSetData_4, 3) = ((MR_Box) (parse_tree__prog_event__MaxNumAttr_12));
#line 758 "prog_event.m"
    }
#line 750 "prog_event.m"
    return parse_tree__prog_event__EventSetData_4;
#line 750 "prog_event.m"
  }
#line 37 "prog_event.m"
}

#line 32 "prog_event.m"
void MR_CALL 
parse_tree__prog_event__read_event_set_6_p_0(
#line 32 "prog_event.m"
  MR_String parse_tree__prog_event__SpecsFileName_7,
#line 32 "prog_event.m"
  MR_String * parse_tree__prog_event__EventSetName_8,
#line 32 "prog_event.m"
  MR_Word * parse_tree__prog_event__EventSpecMap_9,
#line 32 "prog_event.m"
  MR_Word * parse_tree__prog_event__ErrorSpecs_10)
#line 32 "prog_event.m"
{
#line 79 "prog_event.m"
  {
#line 79 "prog_event.m"
    MR_bool parse_tree__prog_event__succeeded;
#line 79 "prog_event.m"
    MR_String parse_tree__prog_event__TermFileName_12;
#line 79 "prog_event.m"
    MR_String parse_tree__prog_event__Problem_13;
#line 144 "prog_event.m"
    MR_Word parse_tree__prog_event___RemoveRes_24;

#line 93 "prog_event.m"
    {
#line 93 "prog_event.m"
      mercury__io__make_temp_3_p_0(&parse_tree__prog_event__TermFileName_12);
    }
#line 94 "prog_event.m"
    {
#line 94 "prog_event.m"
      parse_tree__prog_event__read_specs_file_5_p_0(parse_tree__prog_event__SpecsFileName_7, parse_tree__prog_event__TermFileName_12, &parse_tree__prog_event__Problem_13);
    }
#line 95 "prog_event.m"
    parse_tree__prog_event__succeeded = (strcmp(parse_tree__prog_event__Problem_13, (MR_String) "") == 0);
#line 136 "prog_event.m"
    if (parse_tree__prog_event__succeeded)
#line 96 "prog_event.m"
      {
#line 96 "prog_event.m"
        MR_Word parse_tree__prog_event__TermOpenRes_14;

#line 96 "prog_event.m"
        {
#line 96 "prog_event.m"
          mercury__io__open_input_4_p_0(parse_tree__prog_event__TermFileName_12, &parse_tree__prog_event__TermOpenRes_14);
        }
#line 127 "prog_event.m"
        if (((MR_tag((MR_Word) parse_tree__prog_event__TermOpenRes_14)) == (MR_mktag((MR_Integer) 1))))
#line 128 "prog_event.m"
          {
#line 128 "prog_event.m"
            MR_Word parse_tree__prog_event__TermOpenError_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__TermOpenRes_14, (MR_Integer) 0)));
#line 128 "prog_event.m"
            MR_Word parse_tree__prog_event__V_30_30;
#line 128 "prog_event.m"
            MR_String parse_tree__prog_event__V_31_31;
#line 128 "prog_event.m"
            MR_Word parse_tree__prog_event__V_37_37;
#line 128 "prog_event.m"
            MR_Word parse_tree__prog_event__V_38_38;
#line 128 "prog_event.m"
            MR_Word parse_tree__prog_event__V_42_42;
#line 128 "prog_event.m"
            MR_Word parse_tree__prog_event__V_43_43;
#line 128 "prog_event.m"
            MR_Word parse_tree__prog_event__Pieces_101;
#line 128 "prog_event.m"
            MR_Word parse_tree__prog_event__ErrorSpec_102;

#line 129 "prog_event.m"
            *parse_tree__prog_event__EventSetName_8 = (MR_String) "";
#line 130 "prog_event.m"
            {
#line 130 "prog_event.m"
              *parse_tree__prog_event__EventSpecMap_9 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0);
            }
#line 131 "prog_event.m"
            {
#line 131 "prog_event.m"
              parse_tree__prog_event__V_31_31 = mercury__io__error_message_1_f_0(parse_tree__prog_event__TermOpenError_23);
            }
#line 131 "prog_event.m"
            {
#line 131 "prog_event.m"
              parse_tree__prog_event__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 131 "prog_event.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 131 "prog_event.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_30_30, 1) = ((MR_Box) (parse_tree__prog_event__V_31_31));
#line 131 "prog_event.m"
            }
#line 131 "prog_event.m"
            {
#line 131 "prog_event.m"
              parse_tree__prog_event__Pieces_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 131 "prog_event.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_101, 0) = ((MR_Box) (parse_tree__prog_event__V_30_30));
#line 131 "prog_event.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[6])));
#line 131 "prog_event.m"
            }
#line 133 "prog_event.m"
            {
#line 133 "prog_event.m"
              parse_tree__prog_event__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 133 "prog_event.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_43_43, 0) = ((MR_Box) (parse_tree__prog_event__Pieces_101));
#line 133 "prog_event.m"
            }
#line 133 "prog_event.m"
            {
#line 133 "prog_event.m"
              parse_tree__prog_event__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 133 "prog_event.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_42_42, 0) = ((MR_Box) (parse_tree__prog_event__V_43_43));
#line 133 "prog_event.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 133 "prog_event.m"
            }
#line 133 "prog_event.m"
            {
#line 133 "prog_event.m"
              parse_tree__prog_event__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 133 "prog_event.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_38_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 133 "prog_event.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_38_38, 1) = ((MR_Box) ((MR_Integer) 1));
#line 133 "prog_event.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_38_38, 2) = ((MR_Box) ((MR_Integer) 0));
#line 133 "prog_event.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_38_38, 3) = ((MR_Box) (parse_tree__prog_event__V_42_42));
#line 133 "prog_event.m"
            }
#line 133 "prog_event.m"
            {
#line 133 "prog_event.m"
              parse_tree__prog_event__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 133 "prog_event.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_37_37, 0) = ((MR_Box) (parse_tree__prog_event__V_38_38));
#line 133 "prog_event.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 133 "prog_event.m"
            }
#line 132 "prog_event.m"
            {
#line 132 "prog_event.m"
              parse_tree__prog_event__ErrorSpec_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 132 "prog_event.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_102, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 132 "prog_event.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 132 "prog_event.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_102, 2) = ((MR_Box) (parse_tree__prog_event__V_37_37));
#line 132 "prog_event.m"
            }
#line 134 "prog_event.m"
            {
#line 134 "prog_event.m"
              MR_Word base;
#line 134 "prog_event.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 134 "prog_event.m"
              *parse_tree__prog_event__ErrorSpecs_10 = base;
#line 134 "prog_event.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_event__ErrorSpec_102));
#line 134 "prog_event.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 134 "prog_event.m"
            }
#line 128 "prog_event.m"
          }
#line 127 "prog_event.m"
        else
#line 98 "prog_event.m"
          {
#line 98 "prog_event.m"
            MR_Word parse_tree__prog_event__TermStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__TermOpenRes_14, (MR_Integer) 0)));
#line 98 "prog_event.m"
            MR_Word parse_tree__prog_event__TermReadRes_16;

#line 99 "prog_event.m"
            {
#line 99 "prog_event.m"
              mercury__io__read_4_p_0((MR_Word) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_set_spec_0, parse_tree__prog_event__TermStream_15, &parse_tree__prog_event__TermReadRes_16);
            }
#line 105 "prog_event.m"
            if ((parse_tree__prog_event__TermReadRes_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 106 "prog_event.m"
              {
#line 107 "prog_event.m"
                *parse_tree__prog_event__EventSetName_8 = (MR_String) "";
#line 108 "prog_event.m"
                {
#line 108 "prog_event.m"
                  *parse_tree__prog_event__EventSpecMap_9 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0);
                }
#line 114 "prog_event.m"
                *parse_tree__prog_event__ErrorSpecs_10 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[21]);
#line 106 "prog_event.m"
              }
#line 105 "prog_event.m"
            else
#line 105 "prog_event.m"
              if (((MR_tag((MR_Word) parse_tree__prog_event__TermReadRes_16)) == (MR_mktag((MR_Integer) 2))))
#line 116 "prog_event.m"
                {
#line 116 "prog_event.m"
                  MR_String parse_tree__prog_event__TermReadMsg_21 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__prog_event__TermReadRes_16, (MR_Integer) 0)));
#line 116 "prog_event.m"
                  MR_Integer parse_tree__prog_event__LineNumber_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), parse_tree__prog_event__TermReadRes_16, (MR_Integer) 1)));
#line 116 "prog_event.m"
                  MR_Word parse_tree__prog_event__V_48_48;
#line 116 "prog_event.m"
                  MR_Word parse_tree__prog_event__V_54_54;
#line 116 "prog_event.m"
                  MR_Word parse_tree__prog_event__V_55_55;
#line 116 "prog_event.m"
                  MR_Word parse_tree__prog_event__V_56_56;
#line 116 "prog_event.m"
                  MR_Word parse_tree__prog_event__V_57_57;
#line 116 "prog_event.m"
                  MR_Word parse_tree__prog_event__V_58_58;
#line 116 "prog_event.m"
                  MR_Word parse_tree__prog_event__Pieces_99;
#line 116 "prog_event.m"
                  MR_Word parse_tree__prog_event__ErrorSpec_100;

#line 117 "prog_event.m"
                  *parse_tree__prog_event__EventSetName_8 = (MR_String) "";
#line 118 "prog_event.m"
                  {
#line 118 "prog_event.m"
                    *parse_tree__prog_event__EventSpecMap_9 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0);
                  }
#line 119 "prog_event.m"
                  {
#line 119 "prog_event.m"
                    parse_tree__prog_event__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 119 "prog_event.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 119 "prog_event.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_48_48, 1) = ((MR_Box) (parse_tree__prog_event__TermReadMsg_21));
#line 119 "prog_event.m"
                  }
#line 119 "prog_event.m"
                  {
#line 119 "prog_event.m"
                    parse_tree__prog_event__Pieces_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 119 "prog_event.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_99, 0) = ((MR_Box) (parse_tree__prog_event__V_48_48));
#line 119 "prog_event.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[6])));
#line 119 "prog_event.m"
                  }
#line 122 "prog_event.m"
                  {
#line 122 "prog_event.m"
                    parse_tree__prog_event__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 122 "prog_event.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_56_56, 0) = ((MR_Box) (parse_tree__prog_event__TermFileName_12));
#line 122 "prog_event.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_56_56, 1) = ((MR_Box) (parse_tree__prog_event__LineNumber_22));
#line 122 "prog_event.m"
                  }
#line 123 "prog_event.m"
                  {
#line 123 "prog_event.m"
                    parse_tree__prog_event__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 123 "prog_event.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_58_58, 0) = ((MR_Box) (parse_tree__prog_event__Pieces_99));
#line 123 "prog_event.m"
                  }
#line 123 "prog_event.m"
                  {
#line 123 "prog_event.m"
                    parse_tree__prog_event__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 123 "prog_event.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_57_57, 0) = ((MR_Box) (parse_tree__prog_event__V_58_58));
#line 123 "prog_event.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 123 "prog_event.m"
                  }
#line 122 "prog_event.m"
                  {
#line 122 "prog_event.m"
                    parse_tree__prog_event__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 122 "prog_event.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_55_55, 0) = ((MR_Box) (parse_tree__prog_event__V_56_56));
#line 122 "prog_event.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_55_55, 1) = ((MR_Box) (parse_tree__prog_event__V_57_57));
#line 122 "prog_event.m"
                  }
#line 123 "prog_event.m"
                  {
#line 123 "prog_event.m"
                    parse_tree__prog_event__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 123 "prog_event.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_54_54, 0) = ((MR_Box) (parse_tree__prog_event__V_55_55));
#line 123 "prog_event.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 123 "prog_event.m"
                  }
#line 120 "prog_event.m"
                  {
#line 120 "prog_event.m"
                    parse_tree__prog_event__ErrorSpec_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 120 "prog_event.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_100, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 120 "prog_event.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 120 "prog_event.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_100, 2) = ((MR_Box) (parse_tree__prog_event__V_54_54));
#line 120 "prog_event.m"
                  }
#line 124 "prog_event.m"
                  {
#line 124 "prog_event.m"
                    MR_Word base;
#line 124 "prog_event.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 124 "prog_event.m"
                    *parse_tree__prog_event__ErrorSpecs_10 = base;
#line 124 "prog_event.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_event__ErrorSpec_100));
#line 124 "prog_event.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 124 "prog_event.m"
                  }
#line 116 "prog_event.m"
                }
#line 105 "prog_event.m"
              else
#line 101 "prog_event.m"
                {
#line 101 "prog_event.m"
                  MR_Word parse_tree__prog_event__EventSetTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__TermReadRes_16, (MR_Integer) 0)));
#line 101 "prog_event.m"
                  MR_Word parse_tree__prog_event__EventSpecsTerm_18;
#line 101 "prog_event.m"
                  MR_Word parse_tree__prog_event__V_79_79;

#line 102 "prog_event.m"
                  *parse_tree__prog_event__EventSetName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSetTerm_17, (MR_Integer) 0)));
#line 102 "prog_event.m"
                  parse_tree__prog_event__EventSpecsTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSetTerm_17, (MR_Integer) 1)));
#line 104 "prog_event.m"
                  {
#line 104 "prog_event.m"
                    parse_tree__prog_event__V_79_79 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0);
                  }
#line 103 "prog_event.m"
                  {
#line 103 "prog_event.m"
                    parse_tree__prog_event__convert_list_to_spec_map_6_p_0(parse_tree__prog_event__SpecsFileName_7, parse_tree__prog_event__EventSpecsTerm_18, parse_tree__prog_event__V_79_79, parse_tree__prog_event__EventSpecMap_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_event__ErrorSpecs_10);
                  }
#line 101 "prog_event.m"
                }
#line 126 "prog_event.m"
            {
#line 126 "prog_event.m"
              mercury__io__close_input_3_p_0(parse_tree__prog_event__TermStream_15);
            }
#line 98 "prog_event.m"
          }
#line 96 "prog_event.m"
      }
#line 136 "prog_event.m"
    else
#line 137 "prog_event.m"
      {
#line 137 "prog_event.m"
        MR_Word parse_tree__prog_event__V_82_82;
#line 137 "prog_event.m"
        MR_Word parse_tree__prog_event__V_88_88;
#line 137 "prog_event.m"
        MR_Word parse_tree__prog_event__V_89_89;
#line 137 "prog_event.m"
        MR_Word parse_tree__prog_event__V_93_93;
#line 137 "prog_event.m"
        MR_Word parse_tree__prog_event__V_94_94;
#line 137 "prog_event.m"
        MR_Word parse_tree__prog_event__Pieces_103;
#line 137 "prog_event.m"
        MR_Word parse_tree__prog_event__ErrorSpec_104;

#line 137 "prog_event.m"
        *parse_tree__prog_event__EventSetName_8 = (MR_String) "";
#line 138 "prog_event.m"
        {
#line 138 "prog_event.m"
          *parse_tree__prog_event__EventSpecMap_9 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0);
        }
#line 139 "prog_event.m"
        {
#line 139 "prog_event.m"
          parse_tree__prog_event__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 139 "prog_event.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 139 "prog_event.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_82_82, 1) = ((MR_Box) (parse_tree__prog_event__Problem_13));
#line 139 "prog_event.m"
        }
#line 139 "prog_event.m"
        {
#line 139 "prog_event.m"
          parse_tree__prog_event__Pieces_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 139 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_103, 0) = ((MR_Box) (parse_tree__prog_event__V_82_82));
#line 139 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[6])));
#line 139 "prog_event.m"
        }
#line 141 "prog_event.m"
        {
#line 141 "prog_event.m"
          parse_tree__prog_event__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 141 "prog_event.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_94_94, 0) = ((MR_Box) (parse_tree__prog_event__Pieces_103));
#line 141 "prog_event.m"
        }
#line 141 "prog_event.m"
        {
#line 141 "prog_event.m"
          parse_tree__prog_event__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 141 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_93_93, 0) = ((MR_Box) (parse_tree__prog_event__V_94_94));
#line 141 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 141 "prog_event.m"
        }
#line 141 "prog_event.m"
        {
#line 141 "prog_event.m"
          parse_tree__prog_event__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 141 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_89_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 141 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_89_89, 1) = ((MR_Box) ((MR_Integer) 1));
#line 141 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_89_89, 2) = ((MR_Box) ((MR_Integer) 0));
#line 141 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_89_89, 3) = ((MR_Box) (parse_tree__prog_event__V_93_93));
#line 141 "prog_event.m"
        }
#line 141 "prog_event.m"
        {
#line 141 "prog_event.m"
          parse_tree__prog_event__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 141 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_88_88, 0) = ((MR_Box) (parse_tree__prog_event__V_89_89));
#line 141 "prog_event.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 141 "prog_event.m"
        }
#line 140 "prog_event.m"
        {
#line 140 "prog_event.m"
          parse_tree__prog_event__ErrorSpec_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 140 "prog_event.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_104, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 140 "prog_event.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 140 "prog_event.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_104, 2) = ((MR_Box) (parse_tree__prog_event__V_88_88));
#line 140 "prog_event.m"
        }
#line 142 "prog_event.m"
        {
#line 142 "prog_event.m"
          MR_Word base;
#line 142 "prog_event.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 142 "prog_event.m"
          *parse_tree__prog_event__ErrorSpecs_10 = base;
#line 142 "prog_event.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_event__ErrorSpec_104));
#line 142 "prog_event.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 142 "prog_event.m"
        }
#line 137 "prog_event.m"
      }
#line 144 "prog_event.m"
    {
#line 144 "prog_event.m"
      mercury__io__remove_file_4_p_0(parse_tree__prog_event__TermFileName_12, &parse_tree__prog_event___RemoveRes_24);
    }
#line 79 "prog_event.m"
  }
#line 32 "prog_event.m"
}

void mercury__parse_tree__prog_event__init(void)
{
}

void mercury__parse_tree__prog_event__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_dep_rel_0);
	MR_register_type_ctor_info(&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0);
	MR_register_type_ctor_info(&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_key_0);
	MR_register_type_ctor_info(&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_key_map_0);
	MR_register_type_ctor_info(&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_name_map_0);
	MR_register_type_ctor_info(&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_num_map_0);
	MR_register_type_ctor_info(&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_type_map_0);
	MR_register_type_ctor_info(&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_function_kind_0);
	MR_register_type_ctor_info(&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_synth_call_term_0);
	MR_register_type_ctor_info(&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_term_0);
	MR_register_type_ctor_info(&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_0);
	MR_register_type_ctor_info(&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_term_0);
	MR_register_type_ctor_info(&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_set_spec_0);
	MR_register_type_ctor_info(&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_spec_term_0);
}

void mercury__parse_tree__prog_event__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_event. */
