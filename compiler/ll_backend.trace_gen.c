/*
** Automatically generated from `trace_gen.m'
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


/* :- module ll_backend.trace_gen. */
/* :- implementation. */

/*
INIT mercury__ll_backend__trace_gen__init
ENDINIT
*/

#include "ll_backend.trace_gen.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.layout_out.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
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
#include "counter.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 162 "ll_backend.trace_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0;

#line 165 "ll_backend.trace_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_lval_0;

#line 168 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 171 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0;

#line 174 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0;

#line 177 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0;

#line 180 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_external_event_info_0_0[3];

#line 183 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_external_event_info_0_0;

#line 186 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_external_event_info_0_0[1];

#line 189 "ll_backend.trace_gen.c"
static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_external_event_info_0[1];

#line 192 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_external_event_info_0[1];

#line 195 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_external_event_info_0[1];

#line 198 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_0;

#line 201 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_1;

#line 204 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_2;

#line 207 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_3;

#line 210 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_value_ordered_external_trace_port_0[4];

#line 213 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_name_ordered_external_trace_port_0[4];

#line 216 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_external_trace_port_0[4];

#line 219 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_0;

#line 222 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_1;

#line 225 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_value_ordered_negation_end_port_0[2];

#line 228 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_name_ordered_negation_end_port_0[2];

#line 231 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_negation_end_port_0[2];

#line 234 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0;

#line 237 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0;

#line 240 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0;

#line 243 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0;

#line 246 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0;

#line 249 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0;

#line 252 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0;

#line 255 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_info_0_0[9];

#line 258 "ll_backend.trace_gen.c"
static const MR_ConstString ll_backend__trace_gen__ll_backend__trace_gen__field_names_trace_info_0_0[9];

#line 261 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_info_0_0;

#line 264 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_info_0_0[1];

#line 267 "ll_backend.trace_gen.c"
static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_info_0[1];

#line 270 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_info_0[1];

#line 273 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_info_0[1];

#line 276 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_0;

#line 279 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 282 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0;

#line 285 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0;

#line 288 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_1[2];

#line 291 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_1;

#line 294 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 297 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_2[2];

#line 300 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_2;

#line 303 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_3[1];

#line 306 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_3;

#line 309 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_4[1];

#line 312 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_4;

#line 315 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_0[1];

#line 318 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_1[1];

#line 321 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_2[1];

#line 324 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_3[2];

#line 327 "ll_backend.trace_gen.c"
static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_port_info_0[4];

#line 330 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_port_info_0[5];

#line 333 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_port_info_0[5];

#line 336 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 339 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_slot_info_0_0[6];

#line 342 "ll_backend.trace_gen.c"
static const MR_ConstString ll_backend__trace_gen__ll_backend__trace_gen__field_names_trace_slot_info_0_0[6];

#line 345 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_slot_info_0_0;

#line 348 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_slot_info_0_0[1];

#line 351 "ll_backend.trace_gen.c"
static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_slot_info_0[1];

#line 354 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_slot_info_0[1];

#line 357 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_slot_info_0[1];

#line 360 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_event_info_0_0_10001(
#line 363 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 365 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2);

#line 368 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____external_event_info_0_0_10001(
#line 371 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 373 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 375 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3);

#line 378 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_trace_port_0_0_10001(
#line 381 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 383 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2);

#line 386 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____external_trace_port_0_0_10001(
#line 389 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 391 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 393 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3);

#line 396 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____negation_end_port_0_0_10001(
#line 399 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 401 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2);

#line 404 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____negation_end_port_0_0_10001(
#line 407 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 409 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 411 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3);

#line 414 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_info_0_0_10001(
#line 417 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 419 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2);

#line 422 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____trace_info_0_0_10001(
#line 425 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 427 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 429 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3);

#line 432 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_port_info_0_0_10001(
#line 435 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 437 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2);

#line 440 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____trace_port_info_0_0_10001(
#line 443 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 445 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 447 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3);

#line 450 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_slot_info_0_0_10001(
#line 453 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 455 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2);

#line 458 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____trace_slot_info_0_0_10001(
#line 461 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 463 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 465 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3);

#line 1209 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_13_p_0(
#line 1209 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 1209 "trace_gen.m"
  MR_Word ll_backend__trace_gen__VarSet_2,
#line 1209 "trace_gen.m"
  MR_Word ll_backend__trace_gen__VarTypes_3,
#line 1209 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_TVars_0_6,
#line 1209 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_TVars_7,
#line 1209 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_VarInfos_0_8,
#line 1209 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_VarInfos_9,
#line 1209 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__10_10,
#line 1209 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__11_11,
#line 1209 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_12,
#line 1209 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_13);

#line 953 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__953__1_2_p_0(
#line 953 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeFromFullLval_17,
#line 953 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_62);

#line 947 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__947__1_2_p_0(
#line 947 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeRedoLabelLval_16,
#line 947 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_57);

#line 1189 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__maybe_setup_redo_event__1189__1_2_p_0(
#line 1189 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Lval_8,
#line 1189 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_20);

#line 273 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen____Compare____trace_port_info_0_0(
#line 273 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
#line 273 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 273 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3);

#line 273 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_port_info_0_0(
#line 273 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 273 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2);

#line 1311 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__redo_layout_slot_2_p_0(
#line 1311 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CodeModel_3,
#line 1311 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__RedoLayoutSlot_4);

#line 1310 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__call_depth_slot_2_p_0(
#line 1310 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CodeModel_3,
#line 1310 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__CallDepthSlot_4);

#line 1309 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__call_num_slot_2_p_0(
#line 1309 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CodeModel_3,
#line 1309 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__CallNumSlot_4);

#line 1308 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__event_num_slot_2_p_0(
#line 1308 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CodeModel_3,
#line 1308 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__EventNumSlot_4);

#line 1281 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__stackref_to_string_2_p_0(
#line 1281 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Lval_3,
#line 1281 "trace_gen.m"
  MR_String * ll_backend__trace_gen__LvalStr_4);

#line 1259 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__build_fail_vars_6_p_0(
#line 1259 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 1259 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 1259 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3,
#line 1259 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ModuleInfo_4,
#line 1259 "trace_gen.m"
  MR_Word ll_backend__trace_gen__VarTypes_5,
#line 1259 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__6_6);

#line 1175 "trace_gen.m"
static MR_Word MR_CALL 
ll_backend__trace_gen__find_lval_in_layout_locn_1_f_0(
#line 1175 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1);

#line 1170 "trace_gen.m"
static MR_Word MR_CALL 
ll_backend__trace_gen__find_lval_in_var_info_1_f_0(
#line 1170 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1);

#line 1154 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__find_output_vars_3_p_0(
#line 1154 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 1154 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2,
#line 1154 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_OutputVars_3);

#line 1097 "trace_gen.m"
static MR_Box MR_CALL 
ll_backend__trace_gen__generate_event_code_13_p_0_2(
#line 1097 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg,
#line 1097 "trace_gen.m"
  MR_Box ll_backend__trace_gen__wrapper_arg_1);

#line 1093 "trace_gen.m"
static MR_Box MR_CALL 
ll_backend__trace_gen__generate_event_code_13_p_0_1(
#line 1093 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg,
#line 1093 "trace_gen.m"
  MR_Box ll_backend__trace_gen__wrapper_arg_1);

#line 1024 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__generate_event_code_13_p_0(
#line 1024 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Port_14,
#line 1024 "trace_gen.m"
  MR_Word ll_backend__trace_gen__PortInfo_15,
#line 1024 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeTraceInfo_16,
#line 1024 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Context_17,
#line 1024 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HideEvent_18,
#line 1024 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeUserInfo_19,
#line 1024 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Label_20,
#line 1024 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__TvarDataMap_21,
#line 1024 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_22,
#line 1024 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_67,
#line 1024 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_68,
#line 1024 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_69,
#line 1024 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_70);

#line 953 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_2(
#line 953 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg);

#line 947 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_1(
#line 947 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg);

#line 927 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0(
#line 927 "trace_gen.m"
  MR_Word ll_backend__trace_gen__TraceInfo_5,
#line 927 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_6,
#line 927 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_42,
#line 927 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_43);

#line 1189 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__maybe_setup_redo_event_2_p_0_1(
#line 1189 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg);


static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_1[23][2];

static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_2[8][3];

static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_3[5][1];

static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_5[5][5];


#line 1301 "trace_gen.m"
/* sealed */ struct ll_backend__trace_gen__vector_common_type_4_0_s {
#line 1301 "trace_gen.m"
  const MR_Word ll_backend__trace_gen__vector_common_type_4_0__vct_4_f_0;
#line 1301 "trace_gen.m"
};

static /* final */ const struct ll_backend__trace_gen__vector_common_type_4_0_s ll_backend__trace_gen_vector_common_4[4];



static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_1[23][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_2[1]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_2[2]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_1[2]))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_2[3]))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_2[4]))),
    ((MR_Box) ((MR_String) "set up deep redo event"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_2[5]))),
    ((MR_Box) ((MR_String) "set up shallow redo event"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__trace_gen_scalar_common_3[4])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 4))
  },
};

static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_2[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_1[3])),
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_1[4]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_1[2])),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__trace_gen_scalar_common_3[0])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__trace_gen_scalar_common_3[2])))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_5[3])),
    ((MR_Box) (ll_backend__trace_gen__generate_event_code_13_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_5[4])),
    ((MR_Box) (ll_backend__trace_gen__generate_event_code_13_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_3[5][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_5[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
};


static /* final */ const struct ll_backend__trace_gen__vector_common_type_4_0_s ll_backend__trace_gen_vector_common_4[4] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 3 },
  /* row 3 */   {     (MR_Integer) 4 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 962 "ll_backend.trace_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 970 "ll_backend.trace_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 978 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 986 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0
  }
};

#line 994 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &ll_backend__trace_gen__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0
  }
};

#line 1003 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 1011 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_external_event_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0
};

#line 1018 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_external_event_info_0_0 = {
  (MR_String) "external_event_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__trace_gen__ll_backend__trace_gen__field_types_external_event_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 1033 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_external_event_info_0_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_external_event_info_0_0
};

#line 1038 "ll_backend.trace_gen.c"
static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_external_event_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_external_event_info_0_0
  }
};

#line 1047 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_external_event_info_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_external_event_info_0_0
};

#line 1052 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_external_event_info_0[1] = {
  (MR_Integer) 0
};

#line 1057 "ll_backend.trace_gen.c"
const MR_TypeCtorInfo_Struct ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_external_event_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__trace_gen____Unify____external_event_info_0_0_10001)),
  ((MR_Box) (ll_backend__trace_gen____Compare____external_event_info_0_0_10001)),
  (MR_String) "ll_backend.trace_gen",
  (MR_String) "external_event_info",
  {     ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_external_event_info_0 },
  {     ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_external_event_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_external_event_info_0
};

#line 1074 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_0 = {
  (MR_String) "external_port_call",
  (MR_Integer) 0
};

#line 1080 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_1 = {
  (MR_String) "external_port_exit",
  (MR_Integer) 1
};

#line 1086 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_2 = {
  (MR_String) "external_port_fail",
  (MR_Integer) 2
};

#line 1092 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_3 = {
  (MR_String) "external_port_tailrec_call",
  (MR_Integer) 3
};

#line 1098 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_value_ordered_external_trace_port_0[4] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_0,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_1,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_2,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_3
};

#line 1106 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_name_ordered_external_trace_port_0[4] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_0,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_1,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_2,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_3
};

#line 1114 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_external_trace_port_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 1122 "ll_backend.trace_gen.c"
const MR_TypeCtorInfo_Struct ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_external_trace_port_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__trace_gen____Unify____external_trace_port_0_0_10001)),
  ((MR_Box) (ll_backend__trace_gen____Compare____external_trace_port_0_0_10001)),
  (MR_String) "ll_backend.trace_gen",
  (MR_String) "external_trace_port",
  {     ll_backend__trace_gen__ll_backend__trace_gen__enum_name_ordered_external_trace_port_0 },
  {     ll_backend__trace_gen__ll_backend__trace_gen__enum_value_ordered_external_trace_port_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_external_trace_port_0
};

#line 1139 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_0 = {
  (MR_String) "neg_success",
  (MR_Integer) 0
};

#line 1145 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_1 = {
  (MR_String) "neg_failure",
  (MR_Integer) 1
};

#line 1151 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_value_ordered_negation_end_port_0[2] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_0,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_1
};

#line 1157 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_name_ordered_negation_end_port_0[2] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_1,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_0
};

#line 1163 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_negation_end_port_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1169 "ll_backend.trace_gen.c"
const MR_TypeCtorInfo_Struct ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_negation_end_port_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__trace_gen____Unify____negation_end_port_0_0_10001)),
  ((MR_Box) (ll_backend__trace_gen____Compare____negation_end_port_0_0_10001)),
  (MR_String) "ll_backend.trace_gen",
  (MR_String) "negation_end_port",
  {     ll_backend__trace_gen__ll_backend__trace_gen__enum_name_ordered_negation_end_port_0 },
  {     ll_backend__trace_gen__ll_backend__trace_gen__enum_value_ordered_negation_end_port_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_negation_end_port_0
};

#line 1186 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0
  }
};

#line 1194 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 1202 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 1211 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 1219 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1228 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1236 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1244 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_info_0_0[9] = {
  (MR_PseudoTypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_level_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0
};

#line 1257 "ll_backend.trace_gen.c"
static const MR_ConstString ll_backend__trace_gen__ll_backend__trace_gen__field_names_trace_info_0_0[9] = {
  (MR_String) "ti_trace_level",
  (MR_String) "ti_trace_suppress_items",
  (MR_String) "ti_from_full_lval",
  (MR_String) "ti_io_seq_lval",
  (MR_String) "ti_trail_lvals",
  (MR_String) "ti_maxfr_lval",
  (MR_String) "ti_call_table_tip_lval",
  (MR_String) "ti_tail_rec_info",
  (MR_String) "ti_redo_label"
};

#line 1270 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_info_0_0 = {
  (MR_String) "trace_info",
  (MR_Integer) 9,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_info_0_0,
  ll_backend__trace_gen__ll_backend__trace_gen__field_names_trace_info_0_0,
  NULL,
  NULL
};

#line 1285 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_info_0_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_info_0_0
};

#line 1290 "ll_backend.trace_gen.c"
static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_info_0_0
  }
};

#line 1299 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_info_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_info_0_0
};

#line 1304 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_info_0[1] = {
  (MR_Integer) 0
};

#line 1309 "ll_backend.trace_gen.c"
const MR_TypeCtorInfo_Struct ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_trace_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__trace_gen____Unify____trace_info_0_0_10001)),
  ((MR_Box) (ll_backend__trace_gen____Compare____trace_info_0_0_10001)),
  (MR_String) "ll_backend.trace_gen",
  (MR_String) "trace_info",
  {     ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_info_0 },
  {     ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_info_0
};

#line 1326 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_0 = {
  (MR_String) "port_info_external",
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

#line 1341 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1349 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0
  }
};

#line 1358 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0
  }
};

#line 1366 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0
};

#line 1372 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_1 = {
  (MR_String) "port_info_tailrec_call",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_1,
  NULL,
  NULL,
  NULL
};

#line 1387 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1395 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_2[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1401 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_2 = {
  (MR_String) "port_info_internal",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_2,
  NULL,
  NULL,
  NULL
};

#line 1416 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_3[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
};

#line 1421 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_3 = {
  (MR_String) "port_info_negation_end",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_3,
  NULL,
  NULL,
  NULL
};

#line 1436 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_4[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
};

#line 1441 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_4 = {
  (MR_String) "port_info_user",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_4,
  NULL,
  NULL,
  NULL
};

#line 1456 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_0
};

#line 1461 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_1[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_1
};

#line 1466 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_2[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_2
};

#line 1471 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_3[2] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_3,
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_4
};

#line 1477 "ll_backend.trace_gen.c"
static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_port_info_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_3
  }
};

#line 1501 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_port_info_0[5] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_0,
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_2,
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_3,
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_1,
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_4
};

#line 1510 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_port_info_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 4
};

#line 1519 "ll_backend.trace_gen.c"
const MR_TypeCtorInfo_Struct ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_trace_port_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__trace_gen____Unify____trace_port_info_0_0_10001)),
  ((MR_Box) (ll_backend__trace_gen____Compare____trace_port_info_0_0_10001)),
  (MR_String) "ll_backend.trace_gen",
  (MR_String) "trace_port_info",
  {     ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_port_info_0 },
  {     ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_port_info_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_port_info_0
};

#line 1536 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1544 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_slot_info_0_0[6] = {
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

#line 1554 "ll_backend.trace_gen.c"
static const MR_ConstString ll_backend__trace_gen__ll_backend__trace_gen__field_names_trace_slot_info_0_0[6] = {
  (MR_String) "slot_from_full",
  (MR_String) "slot_io",
  (MR_String) "slot_trail",
  (MR_String) "slot_maxfr",
  (MR_String) "slot_call_table",
  (MR_String) "slot_tail_rec"
};

#line 1564 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_slot_info_0_0 = {
  (MR_String) "trace_slot_info",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_slot_info_0_0,
  ll_backend__trace_gen__ll_backend__trace_gen__field_names_trace_slot_info_0_0,
  NULL,
  NULL
};

#line 1579 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_slot_info_0_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_slot_info_0_0
};

#line 1584 "ll_backend.trace_gen.c"
static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_slot_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_slot_info_0_0
  }
};

#line 1593 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_slot_info_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_slot_info_0_0
};

#line 1598 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_slot_info_0[1] = {
  (MR_Integer) 0
};

#line 1603 "ll_backend.trace_gen.c"
const MR_TypeCtorInfo_Struct ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_trace_slot_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__trace_gen____Unify____trace_slot_info_0_0_10001)),
  ((MR_Box) (ll_backend__trace_gen____Compare____trace_slot_info_0_0_10001)),
  (MR_String) "ll_backend.trace_gen",
  (MR_String) "trace_slot_info",
  {     ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_slot_info_0 },
  {     ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_slot_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_slot_info_0
};

#line 1620 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_event_info_0_0_10001(
#line 1623 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 1625 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2)
#line 1627 "ll_backend.trace_gen.c"
{
#line 1629 "ll_backend.trace_gen.c"
  {
#line 1631 "ll_backend.trace_gen.c"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1634 "ll_backend.trace_gen.c"
    {
#line 1636 "ll_backend.trace_gen.c"
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen____Unify____external_event_info_0_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1), ((MR_Word) ll_backend__trace_gen__wrapper_arg_2));
    }
#line 1639 "ll_backend.trace_gen.c"
    return ll_backend__trace_gen__succeeded;
#line 1641 "ll_backend.trace_gen.c"
  }
#line 1643 "ll_backend.trace_gen.c"
}

#line 1646 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____external_event_info_0_0_10001(
#line 1649 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 1651 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 1653 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3)
#line 1655 "ll_backend.trace_gen.c"
{
#line 1657 "ll_backend.trace_gen.c"
  {
#line 1659 "ll_backend.trace_gen.c"
    MR_Word ll_backend__trace_gen__conv0_HeadVar__1_1;

#line 1662 "ll_backend.trace_gen.c"
    {
#line 1664 "ll_backend.trace_gen.c"
      ll_backend__trace_gen____Compare____external_event_info_0_0(&ll_backend__trace_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__trace_gen__wrapper_arg_2), ((MR_Word) ll_backend__trace_gen__wrapper_arg_3));
    }
#line 1667 "ll_backend.trace_gen.c"
    *ll_backend__trace_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__trace_gen__conv0_HeadVar__1_1));
#line 1669 "ll_backend.trace_gen.c"
  }
#line 1671 "ll_backend.trace_gen.c"
}

#line 1674 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_trace_port_0_0_10001(
#line 1677 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 1679 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2)
#line 1681 "ll_backend.trace_gen.c"
{
#line 1683 "ll_backend.trace_gen.c"
  {
#line 1685 "ll_backend.trace_gen.c"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1688 "ll_backend.trace_gen.c"
    {
#line 1690 "ll_backend.trace_gen.c"
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen____Unify____external_trace_port_0_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1), ((MR_Word) ll_backend__trace_gen__wrapper_arg_2));
    }
#line 1693 "ll_backend.trace_gen.c"
    return ll_backend__trace_gen__succeeded;
#line 1695 "ll_backend.trace_gen.c"
  }
#line 1697 "ll_backend.trace_gen.c"
}

#line 1700 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____external_trace_port_0_0_10001(
#line 1703 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 1705 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 1707 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3)
#line 1709 "ll_backend.trace_gen.c"
{
#line 1711 "ll_backend.trace_gen.c"
  {
#line 1713 "ll_backend.trace_gen.c"
    MR_Word ll_backend__trace_gen__conv0_HeadVar__1_1;

#line 1716 "ll_backend.trace_gen.c"
    {
#line 1718 "ll_backend.trace_gen.c"
      ll_backend__trace_gen____Compare____external_trace_port_0_0(&ll_backend__trace_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__trace_gen__wrapper_arg_2), ((MR_Word) ll_backend__trace_gen__wrapper_arg_3));
    }
#line 1721 "ll_backend.trace_gen.c"
    *ll_backend__trace_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__trace_gen__conv0_HeadVar__1_1));
#line 1723 "ll_backend.trace_gen.c"
  }
#line 1725 "ll_backend.trace_gen.c"
}

#line 1728 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____negation_end_port_0_0_10001(
#line 1731 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 1733 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2)
#line 1735 "ll_backend.trace_gen.c"
{
#line 1737 "ll_backend.trace_gen.c"
  {
#line 1739 "ll_backend.trace_gen.c"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1742 "ll_backend.trace_gen.c"
    {
#line 1744 "ll_backend.trace_gen.c"
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen____Unify____negation_end_port_0_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1), ((MR_Word) ll_backend__trace_gen__wrapper_arg_2));
    }
#line 1747 "ll_backend.trace_gen.c"
    return ll_backend__trace_gen__succeeded;
#line 1749 "ll_backend.trace_gen.c"
  }
#line 1751 "ll_backend.trace_gen.c"
}

#line 1754 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____negation_end_port_0_0_10001(
#line 1757 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 1759 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 1761 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3)
#line 1763 "ll_backend.trace_gen.c"
{
#line 1765 "ll_backend.trace_gen.c"
  {
#line 1767 "ll_backend.trace_gen.c"
    MR_Word ll_backend__trace_gen__conv0_HeadVar__1_1;

#line 1770 "ll_backend.trace_gen.c"
    {
#line 1772 "ll_backend.trace_gen.c"
      ll_backend__trace_gen____Compare____negation_end_port_0_0(&ll_backend__trace_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__trace_gen__wrapper_arg_2), ((MR_Word) ll_backend__trace_gen__wrapper_arg_3));
    }
#line 1775 "ll_backend.trace_gen.c"
    *ll_backend__trace_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__trace_gen__conv0_HeadVar__1_1));
#line 1777 "ll_backend.trace_gen.c"
  }
#line 1779 "ll_backend.trace_gen.c"
}

#line 1782 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_info_0_0_10001(
#line 1785 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 1787 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2)
#line 1789 "ll_backend.trace_gen.c"
{
#line 1791 "ll_backend.trace_gen.c"
  {
#line 1793 "ll_backend.trace_gen.c"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1796 "ll_backend.trace_gen.c"
    {
#line 1798 "ll_backend.trace_gen.c"
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen____Unify____trace_info_0_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1), ((MR_Word) ll_backend__trace_gen__wrapper_arg_2));
    }
#line 1801 "ll_backend.trace_gen.c"
    return ll_backend__trace_gen__succeeded;
#line 1803 "ll_backend.trace_gen.c"
  }
#line 1805 "ll_backend.trace_gen.c"
}

#line 1808 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____trace_info_0_0_10001(
#line 1811 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 1813 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 1815 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3)
#line 1817 "ll_backend.trace_gen.c"
{
#line 1819 "ll_backend.trace_gen.c"
  {
#line 1821 "ll_backend.trace_gen.c"
    MR_Word ll_backend__trace_gen__conv0_HeadVar__1_1;

#line 1824 "ll_backend.trace_gen.c"
    {
#line 1826 "ll_backend.trace_gen.c"
      ll_backend__trace_gen____Compare____trace_info_0_0(&ll_backend__trace_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__trace_gen__wrapper_arg_2), ((MR_Word) ll_backend__trace_gen__wrapper_arg_3));
    }
#line 1829 "ll_backend.trace_gen.c"
    *ll_backend__trace_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__trace_gen__conv0_HeadVar__1_1));
#line 1831 "ll_backend.trace_gen.c"
  }
#line 1833 "ll_backend.trace_gen.c"
}

#line 1836 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_port_info_0_0_10001(
#line 1839 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 1841 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2)
#line 1843 "ll_backend.trace_gen.c"
{
#line 1845 "ll_backend.trace_gen.c"
  {
#line 1847 "ll_backend.trace_gen.c"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1850 "ll_backend.trace_gen.c"
    {
#line 1852 "ll_backend.trace_gen.c"
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen____Unify____trace_port_info_0_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1), ((MR_Word) ll_backend__trace_gen__wrapper_arg_2));
    }
#line 1855 "ll_backend.trace_gen.c"
    return ll_backend__trace_gen__succeeded;
#line 1857 "ll_backend.trace_gen.c"
  }
#line 1859 "ll_backend.trace_gen.c"
}

#line 1862 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____trace_port_info_0_0_10001(
#line 1865 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 1867 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 1869 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3)
#line 1871 "ll_backend.trace_gen.c"
{
#line 1873 "ll_backend.trace_gen.c"
  {
#line 1875 "ll_backend.trace_gen.c"
    MR_Word ll_backend__trace_gen__conv0_HeadVar__1_1;

#line 1878 "ll_backend.trace_gen.c"
    {
#line 1880 "ll_backend.trace_gen.c"
      ll_backend__trace_gen____Compare____trace_port_info_0_0(&ll_backend__trace_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__trace_gen__wrapper_arg_2), ((MR_Word) ll_backend__trace_gen__wrapper_arg_3));
    }
#line 1883 "ll_backend.trace_gen.c"
    *ll_backend__trace_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__trace_gen__conv0_HeadVar__1_1));
#line 1885 "ll_backend.trace_gen.c"
  }
#line 1887 "ll_backend.trace_gen.c"
}

#line 1890 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_slot_info_0_0_10001(
#line 1893 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 1895 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2)
#line 1897 "ll_backend.trace_gen.c"
{
#line 1899 "ll_backend.trace_gen.c"
  {
#line 1901 "ll_backend.trace_gen.c"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1904 "ll_backend.trace_gen.c"
    {
#line 1906 "ll_backend.trace_gen.c"
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen____Unify____trace_slot_info_0_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1), ((MR_Word) ll_backend__trace_gen__wrapper_arg_2));
    }
#line 1909 "ll_backend.trace_gen.c"
    return ll_backend__trace_gen__succeeded;
#line 1911 "ll_backend.trace_gen.c"
  }
#line 1913 "ll_backend.trace_gen.c"
}

#line 1916 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____trace_slot_info_0_0_10001(
#line 1919 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 1921 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 1923 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3)
#line 1925 "ll_backend.trace_gen.c"
{
#line 1927 "ll_backend.trace_gen.c"
  {
#line 1929 "ll_backend.trace_gen.c"
    MR_Word ll_backend__trace_gen__conv0_HeadVar__1_1;

#line 1932 "ll_backend.trace_gen.c"
    {
#line 1934 "ll_backend.trace_gen.c"
      ll_backend__trace_gen____Compare____trace_slot_info_0_0(&ll_backend__trace_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__trace_gen__wrapper_arg_2), ((MR_Word) ll_backend__trace_gen__wrapper_arg_3));
    }
#line 1937 "ll_backend.trace_gen.c"
    *ll_backend__trace_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__trace_gen__conv0_HeadVar__1_1));
#line 1939 "ll_backend.trace_gen.c"
  }
#line 1941 "ll_backend.trace_gen.c"
}

#line 1209 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_13_p_0(
#line 1209 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 1209 "trace_gen.m"
  MR_Word ll_backend__trace_gen__VarSet_2,
#line 1209 "trace_gen.m"
  MR_Word ll_backend__trace_gen__VarTypes_3,
#line 1209 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_TVars_0_6,
#line 1209 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_TVars_7,
#line 1209 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_VarInfos_0_8,
#line 1209 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_VarInfos_9,
#line 1209 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__10_10,
#line 1209 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__11_11,
#line 1209 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_12,
#line 1209 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_13)
#line 1209 "trace_gen.m"
{
#line 1214 "trace_gen.m"
  {
#line 1214 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1214 "trace_gen.m"
    if ((ll_backend__trace_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1214 "trace_gen.m"
      {
#line 1214 "trace_gen.m"
        {
#line 1214 "trace_gen.m"
          *ll_backend__trace_gen__HeadVar__10_10 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 1214 "trace_gen.m"
        *ll_backend__trace_gen__STATE_VARIABLE_CLD_13 = ll_backend__trace_gen__STATE_VARIABLE_CLD_0_12;
#line 1214 "trace_gen.m"
        *ll_backend__trace_gen__STATE_VARIABLE_VarInfos_9 = ll_backend__trace_gen__STATE_VARIABLE_VarInfos_0_8;
#line 1214 "trace_gen.m"
        *ll_backend__trace_gen__STATE_VARIABLE_TVars_7 = ll_backend__trace_gen__STATE_VARIABLE_TVars_0_6;
#line 1214 "trace_gen.m"
      }
#line 1214 "trace_gen.m"
    else
#line 1216 "trace_gen.m"
      {
#line 1216 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeCtorInfo_57_57 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 1216 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1216 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Vars_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1216 "trace_gen.m"
        MR_Word ll_backend__trace_gen__VarCode_36;
#line 1216 "trace_gen.m"
        MR_Word ll_backend__trace_gen__VarsCode_37;
#line 1216 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Type_40;
#line 1216 "trace_gen.m"
        MR_Word ll_backend__trace_gen__ModuleInfo_41;
#line 1216 "trace_gen.m"
        MR_Word ll_backend__trace_gen__IsDummy_42;
#line 1216 "trace_gen.m"
        MR_Word ll_backend__trace_gen__STATE_VARIABLE_TVars_50_50;
#line 1216 "trace_gen.m"
        MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_51_51;
#line 1216 "trace_gen.m"
        MR_Word ll_backend__trace_gen__STATE_VARIABLE_VarInfos_52_52;

#line 1217 "trace_gen.m"
        {
#line 1217 "trace_gen.m"
          hlds__vartypes__lookup_var_type_3_p_0(ll_backend__trace_gen__VarTypes_3, ll_backend__trace_gen__Var_28, &ll_backend__trace_gen__Type_40);
        }
#line 1218 "trace_gen.m"
        {
#line 1218 "trace_gen.m"
          ll_backend__code_info__get_module_info_2_p_0(ll_backend__trace_gen__HeadVar__11_11, &ll_backend__trace_gen__ModuleInfo_41);
        }
#line 1219 "trace_gen.m"
        {
#line 1219 "trace_gen.m"
          ll_backend__trace_gen__IsDummy_42 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__trace_gen__ModuleInfo_41, ll_backend__trace_gen__Type_40);
        }
#line 1223 "trace_gen.m"
#line 1223 "trace_gen.m"
        switch (ll_backend__trace_gen__IsDummy_42) {
#line 1223 "trace_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1223 "trace_gen.m"
          case (MR_Integer) 0:
#line 1221 "trace_gen.m"
            {
#line 1222 "trace_gen.m"
              {
#line 1222 "trace_gen.m"
                ll_backend__trace_gen__VarCode_36 = mercury__cord__empty_0_f_0(ll_backend__trace_gen__TypeCtorInfo_57_57);
              }
#line 1221 "trace_gen.m"
              ll_backend__trace_gen__STATE_VARIABLE_TVars_50_50 = ll_backend__trace_gen__STATE_VARIABLE_TVars_0_6;
#line 1221 "trace_gen.m"
              ll_backend__trace_gen__STATE_VARIABLE_VarInfos_52_52 = ll_backend__trace_gen__STATE_VARIABLE_VarInfos_0_8;
#line 1221 "trace_gen.m"
              ll_backend__trace_gen__STATE_VARIABLE_CLD_51_51 = ll_backend__trace_gen__STATE_VARIABLE_CLD_0_12;
#line 1221 "trace_gen.m"
            }
#line 1223 "trace_gen.m"
            break;
#line 1223 "trace_gen.m"
          case (MR_Integer) 1:
#line 1224 "trace_gen.m"
            {
#line 1224 "trace_gen.m"
              MR_Word ll_backend__trace_gen__VarInfo_43;
#line 1224 "trace_gen.m"
              MR_Word ll_backend__trace_gen__Lval_70;
#line 1224 "trace_gen.m"
              MR_Word ll_backend__trace_gen__Type_71;
#line 1224 "trace_gen.m"
              MR_String ll_backend__trace_gen__Name_73;
#line 1224 "trace_gen.m"
              MR_Word ll_backend__trace_gen__LiveType_75;
#line 1224 "trace_gen.m"
              MR_Word ll_backend__trace_gen__TypeVars_76;
#line 1224 "trace_gen.m"
              MR_Word ll_backend__trace_gen__V_78_78;
#line 1239 "trace_gen.m"
              MR_String ll_backend__trace_gen__SearchName_72;

#line 1237 "trace_gen.m"
              {
#line 1237 "trace_gen.m"
                ll_backend__code_loc_dep__produce_variable_in_reg_or_stack_6_p_0(ll_backend__trace_gen__Var_28, &ll_backend__trace_gen__VarCode_36, &ll_backend__trace_gen__Lval_70, ll_backend__trace_gen__HeadVar__11_11, ll_backend__trace_gen__STATE_VARIABLE_CLD_0_12, &ll_backend__trace_gen__STATE_VARIABLE_CLD_51_51);
              }
#line 1238 "trace_gen.m"
              {
#line 1238 "trace_gen.m"
                ll_backend__trace_gen__Type_71 = ll_backend__code_info__variable_type_2_f_0(ll_backend__trace_gen__HeadVar__11_11, ll_backend__trace_gen__Var_28);
              }
#line 1239 "trace_gen.m"
              {
#line 1239 "trace_gen.m"
                ll_backend__trace_gen__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__trace_gen__VarSet_2, ll_backend__trace_gen__Var_28, &ll_backend__trace_gen__SearchName_72);
              }
#line 1239 "trace_gen.m"
              if (ll_backend__trace_gen__succeeded)
#line 1240 "trace_gen.m"
                ll_backend__trace_gen__Name_73 = ll_backend__trace_gen__SearchName_72;
#line 1239 "trace_gen.m"
              else
#line 1242 "trace_gen.m"
                ll_backend__trace_gen__Name_73 = (MR_String) "";
#line 1251 "trace_gen.m"
              mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1252 "trace_gen.m"
              {
#line 1252 "trace_gen.m"
                ll_backend__trace_gen__LiveType_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1252 "trace_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__trace_gen__LiveType_75, 0) = ((MR_Box) (ll_backend__trace_gen__Var_28));
#line 1252 "trace_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__trace_gen__LiveType_75, 1) = ((MR_Box) (ll_backend__trace_gen__Name_73));
#line 1252 "trace_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__trace_gen__LiveType_75, 2) = ((MR_Box) (ll_backend__trace_gen__Type_71));
#line 1252 "trace_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__trace_gen__LiveType_75, 3) = NULL;
#line 1252 "trace_gen.m"
              }
#line 1253 "trace_gen.m"
              {
#line 1253 "trace_gen.m"
                ll_backend__trace_gen__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1253 "trace_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_78_78, 0) = ((MR_Box) (ll_backend__trace_gen__Lval_70));
#line 1253 "trace_gen.m"
              }
#line 1253 "trace_gen.m"
              {
#line 1253 "trace_gen.m"
                ll_backend__trace_gen__VarInfo_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1253 "trace_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__trace_gen__VarInfo_43, 0) = ((MR_Box) (ll_backend__trace_gen__V_78_78));
#line 1253 "trace_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__trace_gen__VarInfo_43, 1) = ((MR_Box) (ll_backend__trace_gen__LiveType_75));
#line 1253 "trace_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__trace_gen__VarInfo_43, 2) = ((MR_Box) ((MR_String) "trace"));
#line 1253 "trace_gen.m"
              }
#line 1254 "trace_gen.m"
              {
#line 1254 "trace_gen.m"
                parse_tree__prog_type__type_vars_2_p_0(ll_backend__trace_gen__Type_71, &ll_backend__trace_gen__TypeVars_76);
              }
#line 1255 "trace_gen.m"
              {
#line 1255 "trace_gen.m"
                mercury__set__insert_list_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[3], ll_backend__trace_gen__TypeVars_76, ll_backend__trace_gen__STATE_VARIABLE_TVars_0_6, &ll_backend__trace_gen__STATE_VARIABLE_TVars_50_50);
              }
#line 1227 "trace_gen.m"
              {
#line 1227 "trace_gen.m"
                ll_backend__trace_gen__STATE_VARIABLE_VarInfos_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1227 "trace_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__trace_gen__STATE_VARIABLE_VarInfos_52_52, 0) = ((MR_Box) (ll_backend__trace_gen__VarInfo_43));
#line 1227 "trace_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__trace_gen__STATE_VARIABLE_VarInfos_52_52, 1) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_VarInfos_0_8));
#line 1227 "trace_gen.m"
              }
#line 1224 "trace_gen.m"
            }
#line 1223 "trace_gen.m"
            break;
#line 1223 "trace_gen.m"
        }
#line 1229 "trace_gen.m"
        {
#line 1229 "trace_gen.m"
          ll_backend__trace_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_13_p_0(ll_backend__trace_gen__Vars_29, ll_backend__trace_gen__VarSet_2, ll_backend__trace_gen__VarTypes_3, ll_backend__trace_gen__STATE_VARIABLE_TVars_50_50, ll_backend__trace_gen__STATE_VARIABLE_TVars_7, ll_backend__trace_gen__STATE_VARIABLE_VarInfos_52_52, ll_backend__trace_gen__STATE_VARIABLE_VarInfos_9, &ll_backend__trace_gen__VarsCode_37, ll_backend__trace_gen__HeadVar__11_11, ll_backend__trace_gen__STATE_VARIABLE_CLD_51_51, ll_backend__trace_gen__STATE_VARIABLE_CLD_13);
        }
#line 1216 "trace_gen.m"
        {
#line 1216 "trace_gen.m"
          *ll_backend__trace_gen__HeadVar__10_10 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_57_57, ll_backend__trace_gen__VarCode_36, ll_backend__trace_gen__VarsCode_37);
        }
#line 1216 "trace_gen.m"
      }
#line 1214 "trace_gen.m"
  }
#line 1209 "trace_gen.m"
}

#line 953 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__953__1_2_p_0(
#line 953 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeFromFullLval_17,
#line 953 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_62)
#line 953 "trace_gen.m"
{
#line 953 "trace_gen.m"
  {
#line 953 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 953 "trace_gen.m"
    {
#line 953 "trace_gen.m"
      ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[1], ((MR_Box) (ll_backend__trace_gen__MaybeFromFullLval_17)), ((MR_Box) (ll_backend__trace_gen__HeadVar__2_62)));
    }
#line 953 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 953 "trace_gen.m"
  }
#line 953 "trace_gen.m"
}

#line 947 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__947__1_2_p_0(
#line 947 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeRedoLabelLval_16,
#line 947 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_57)
#line 947 "trace_gen.m"
{
#line 947 "trace_gen.m"
  {
#line 947 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 947 "trace_gen.m"
    {
#line 947 "trace_gen.m"
      ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[0], ((MR_Box) (ll_backend__trace_gen__MaybeRedoLabelLval_16)), ((MR_Box) (ll_backend__trace_gen__HeadVar__2_57)));
    }
#line 947 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 947 "trace_gen.m"
  }
#line 947 "trace_gen.m"
}

#line 1189 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__maybe_setup_redo_event__1189__1_2_p_0(
#line 1189 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Lval_8,
#line 1189 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_20)
#line 1189 "trace_gen.m"
{
#line 1189 "trace_gen.m"
  {
#line 1189 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1189 "trace_gen.m"
    {
#line 1189 "trace_gen.m"
      ll_backend__trace_gen__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__trace_gen__Lval_8, ll_backend__trace_gen__HeadVar__2_20);
    }
#line 1189 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 1189 "trace_gen.m"
  }
#line 1189 "trace_gen.m"
}

#line 100 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen____Compare____trace_slot_info_0_0(
#line 100 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
#line 100 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 100 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3)
#line 100 "trace_gen.m"
{
#line 100 "trace_gen.m"
  {
#line 100 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 100 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastX_21 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;
#line 100 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastY_22 = (MR_Integer) ll_backend__trace_gen__HeadVar__3_3;

#line 100 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_21 == ll_backend__trace_gen__CastY_22);
#line 100 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 2284 "ll_backend.trace_gen.c"
      *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 100 "trace_gen.m"
    else
#line 100 "trace_gen.m"
      {
#line 100 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 100 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 100 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 100 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 3)));
#line 100 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 4)));
#line 100 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 5)));
#line 100 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 100 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 100 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 2)));
#line 100 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 3)));
#line 100 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 4)));
#line 100 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 5)));
#line 100 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_16_16;

#line 100 "trace_gen.m"
        {
#line 100 "trace_gen.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[11], &ll_backend__trace_gen__V_16_16, ((MR_Box) (ll_backend__trace_gen__V_4_4)), ((MR_Box) (ll_backend__trace_gen__V_10_10)));
        }
#line 2322 "ll_backend.trace_gen.c"
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_16_16 == (MR_Integer) 0);
#line 100 "trace_gen.m"
        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 100 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 100 "trace_gen.m"
          *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_16_16;
#line 100 "trace_gen.m"
        else
#line 100 "trace_gen.m"
          {
#line 100 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_17_17;

#line 100 "trace_gen.m"
            {
#line 100 "trace_gen.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[11], &ll_backend__trace_gen__V_17_17, ((MR_Box) (ll_backend__trace_gen__V_5_5)), ((MR_Box) (ll_backend__trace_gen__V_11_11)));
            }
#line 2342 "ll_backend.trace_gen.c"
            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_17_17 == (MR_Integer) 0);
#line 100 "trace_gen.m"
            ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 100 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 100 "trace_gen.m"
              *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_17_17;
#line 100 "trace_gen.m"
            else
#line 100 "trace_gen.m"
              {
#line 100 "trace_gen.m"
                MR_Word ll_backend__trace_gen__V_18_18;

#line 100 "trace_gen.m"
                {
#line 100 "trace_gen.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[11], &ll_backend__trace_gen__V_18_18, ((MR_Box) (ll_backend__trace_gen__V_6_6)), ((MR_Box) (ll_backend__trace_gen__V_12_12)));
                }
#line 2362 "ll_backend.trace_gen.c"
                ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_18_18 == (MR_Integer) 0);
#line 100 "trace_gen.m"
                ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 100 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 100 "trace_gen.m"
                  *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_18_18;
#line 100 "trace_gen.m"
                else
#line 100 "trace_gen.m"
                  {
#line 100 "trace_gen.m"
                    MR_Word ll_backend__trace_gen__V_19_19;

#line 100 "trace_gen.m"
                    {
#line 100 "trace_gen.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[11], &ll_backend__trace_gen__V_19_19, ((MR_Box) (ll_backend__trace_gen__V_7_7)), ((MR_Box) (ll_backend__trace_gen__V_13_13)));
                    }
#line 2382 "ll_backend.trace_gen.c"
                    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_19_19 == (MR_Integer) 0);
#line 100 "trace_gen.m"
                    ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 100 "trace_gen.m"
                    if (ll_backend__trace_gen__succeeded)
#line 100 "trace_gen.m"
                      *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_19_19;
#line 100 "trace_gen.m"
                    else
#line 100 "trace_gen.m"
                      {
#line 100 "trace_gen.m"
                        MR_Word ll_backend__trace_gen__V_20_20;

#line 100 "trace_gen.m"
                        {
#line 100 "trace_gen.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[11], &ll_backend__trace_gen__V_20_20, ((MR_Box) (ll_backend__trace_gen__V_8_8)), ((MR_Box) (ll_backend__trace_gen__V_14_14)));
                        }
#line 2402 "ll_backend.trace_gen.c"
                        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_20_20 == (MR_Integer) 0);
#line 100 "trace_gen.m"
                        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 100 "trace_gen.m"
                        if (ll_backend__trace_gen__succeeded)
#line 100 "trace_gen.m"
                          *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_20_20;
#line 100 "trace_gen.m"
                        else
#line 100 "trace_gen.m"
                          {
#line 100 "trace_gen.m"
                            {
#line 100 "trace_gen.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[11], ll_backend__trace_gen__HeadVar__1_1, ((MR_Box) (ll_backend__trace_gen__V_9_9)), ((MR_Box) (ll_backend__trace_gen__V_15_15)));
                            }
#line 100 "trace_gen.m"
                          }
#line 100 "trace_gen.m"
                      }
#line 100 "trace_gen.m"
                  }
#line 100 "trace_gen.m"
              }
#line 100 "trace_gen.m"
          }
#line 100 "trace_gen.m"
      }
#line 100 "trace_gen.m"
  }
#line 100 "trace_gen.m"
}

#line 100 "trace_gen.m"
MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_slot_info_0_0(
#line 100 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 100 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2)
#line 100 "trace_gen.m"
{
#line 100 "trace_gen.m"
  {
#line 100 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 100 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastX_15 = (MR_Integer) ll_backend__trace_gen__HeadVar__1_1;
#line 100 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastY_16 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;

#line 100 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_15 == ll_backend__trace_gen__CastY_16);
#line 100 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 100 "trace_gen.m"
      ll_backend__trace_gen__succeeded = MR_TRUE;
#line 100 "trace_gen.m"
    else
#line 100 "trace_gen.m"
      {
#line 100 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_18_18;
#line 100 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_19_19;
#line 100 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_20_20;
#line 100 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_21_21;
#line 100 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_22_22;
#line 100 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 100 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 100 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 100 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 3)));
#line 100 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 4)));
#line 100 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 5)));
#line 100 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 100 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 100 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 100 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 3)));
#line 100 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 4)));
#line 100 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 5)));

#line 2499 "ll_backend.trace_gen.c"
        {
#line 2501 "ll_backend.trace_gen.c"
          ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[11], ((MR_Box) (ll_backend__trace_gen__V_3_3)), ((MR_Box) (ll_backend__trace_gen__V_9_9)));
        }
#line 100 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 100 "trace_gen.m"
          {
#line 2508 "ll_backend.trace_gen.c"
            ll_backend__trace_gen__TypeInfo_18_18 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[11];
#line 2510 "ll_backend.trace_gen.c"
            {
#line 2512 "ll_backend.trace_gen.c"
              ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_18_18, ((MR_Box) (ll_backend__trace_gen__V_4_4)), ((MR_Box) (ll_backend__trace_gen__V_10_10)));
            }
#line 100 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 100 "trace_gen.m"
              {
#line 2519 "ll_backend.trace_gen.c"
                ll_backend__trace_gen__TypeInfo_19_19 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[11];
#line 2521 "ll_backend.trace_gen.c"
                {
#line 2523 "ll_backend.trace_gen.c"
                  ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_19_19, ((MR_Box) (ll_backend__trace_gen__V_5_5)), ((MR_Box) (ll_backend__trace_gen__V_11_11)));
                }
#line 100 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 100 "trace_gen.m"
                  {
#line 2530 "ll_backend.trace_gen.c"
                    ll_backend__trace_gen__TypeInfo_20_20 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[11];
#line 2532 "ll_backend.trace_gen.c"
                    {
#line 2534 "ll_backend.trace_gen.c"
                      ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_20_20, ((MR_Box) (ll_backend__trace_gen__V_6_6)), ((MR_Box) (ll_backend__trace_gen__V_12_12)));
                    }
#line 100 "trace_gen.m"
                    if (ll_backend__trace_gen__succeeded)
#line 100 "trace_gen.m"
                      {
#line 2541 "ll_backend.trace_gen.c"
                        ll_backend__trace_gen__TypeInfo_21_21 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[11];
#line 2543 "ll_backend.trace_gen.c"
                        {
#line 2545 "ll_backend.trace_gen.c"
                          ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_21_21, ((MR_Box) (ll_backend__trace_gen__V_7_7)), ((MR_Box) (ll_backend__trace_gen__V_13_13)));
                        }
#line 100 "trace_gen.m"
                        if (ll_backend__trace_gen__succeeded)
#line 100 "trace_gen.m"
                          {
#line 2552 "ll_backend.trace_gen.c"
                            ll_backend__trace_gen__TypeInfo_22_22 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[11];
#line 2554 "ll_backend.trace_gen.c"
                            {
#line 2556 "ll_backend.trace_gen.c"
                              ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_22_22, ((MR_Box) (ll_backend__trace_gen__V_8_8)), ((MR_Box) (ll_backend__trace_gen__V_14_14)));
                            }
#line 100 "trace_gen.m"
                          }
#line 100 "trace_gen.m"
                      }
#line 100 "trace_gen.m"
                  }
#line 100 "trace_gen.m"
              }
#line 100 "trace_gen.m"
          }
#line 100 "trace_gen.m"
      }
#line 100 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 100 "trace_gen.m"
  }
#line 100 "trace_gen.m"
}

#line 273 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen____Compare____trace_port_info_0_0(
#line 273 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
#line 273 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 273 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3)
#line 273 "trace_gen.m"
{
#line 273 "trace_gen.m"
  {
#line 273 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 273 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastX_66 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;
#line 273 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastY_67 = (MR_Integer) ll_backend__trace_gen__HeadVar__3_3;

#line 273 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_66 == ll_backend__trace_gen__CastY_67);
#line 273 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 2602 "ll_backend.trace_gen.c"
      *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 273 "trace_gen.m"
    else
#line 273 "trace_gen.m"
#line 273 "trace_gen.m"
      switch (MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__2_2)) {
#line 273 "trace_gen.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 273 "trace_gen.m"
        case (MR_Integer) 0:
#line 273 "trace_gen.m"
#line 273 "trace_gen.m"
          switch (MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) {
#line 273 "trace_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 273 "trace_gen.m"
            case (MR_Integer) 0:
#line 273 "trace_gen.m"
              *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 273 "trace_gen.m"
              break;
#line 273 "trace_gen.m"
            case (MR_Integer) 1:
#line 2626 "ll_backend.trace_gen.c"
              *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 273 "trace_gen.m"
              break;
#line 273 "trace_gen.m"
            case (MR_Integer) 2:
#line 2632 "ll_backend.trace_gen.c"
              *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 273 "trace_gen.m"
              break;
#line 273 "trace_gen.m"
            case (MR_Integer) 3:
#line 273 "trace_gen.m"
#line 273 "trace_gen.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)))) {
#line 273 "trace_gen.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 273 "trace_gen.m"
                case (MR_Integer) 0:
#line 2645 "ll_backend.trace_gen.c"
                  *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 273 "trace_gen.m"
                  break;
#line 273 "trace_gen.m"
                case (MR_Integer) 1:
#line 2651 "ll_backend.trace_gen.c"
                  *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 273 "trace_gen.m"
                  break;
#line 273 "trace_gen.m"
              }
#line 273 "trace_gen.m"
              break;
#line 273 "trace_gen.m"
          }
#line 273 "trace_gen.m"
          break;
#line 273 "trace_gen.m"
        case (MR_Integer) 1:
#line 273 "trace_gen.m"
          {
#line 273 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 273 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));

#line 273 "trace_gen.m"
#line 273 "trace_gen.m"
            switch (MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) {
#line 273 "trace_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 273 "trace_gen.m"
              case (MR_Integer) 0:
#line 2679 "ll_backend.trace_gen.c"
                *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 273 "trace_gen.m"
                break;
#line 273 "trace_gen.m"
              case (MR_Integer) 1:
#line 273 "trace_gen.m"
                {
#line 273 "trace_gen.m"
                  MR_Word ll_backend__trace_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 273 "trace_gen.m"
                  MR_Word ll_backend__trace_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 273 "trace_gen.m"
                  MR_Word ll_backend__trace_gen__V_16_16;

#line 273 "trace_gen.m"
                  {
#line 273 "trace_gen.m"
                    mdbcomp__goal_path____Compare____forward_goal_path_0_0(&ll_backend__trace_gen__V_16_16, ll_backend__trace_gen__V_78_78, ll_backend__trace_gen__V_14_14);
                  }
#line 2699 "ll_backend.trace_gen.c"
                  ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_16_16 == (MR_Integer) 0);
#line 273 "trace_gen.m"
                  ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 273 "trace_gen.m"
                  if (ll_backend__trace_gen__succeeded)
#line 273 "trace_gen.m"
                    *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_16_16;
#line 273 "trace_gen.m"
                  else
#line 273 "trace_gen.m"
                    {
#line 273 "trace_gen.m"
                      {
#line 273 "trace_gen.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[10], ll_backend__trace_gen__HeadVar__1_1, ((MR_Box) (ll_backend__trace_gen__V_77_77)), ((MR_Box) (ll_backend__trace_gen__V_15_15)));
                      }
#line 273 "trace_gen.m"
                    }
#line 273 "trace_gen.m"
                }
#line 273 "trace_gen.m"
                break;
#line 273 "trace_gen.m"
              case (MR_Integer) 2:
#line 2724 "ll_backend.trace_gen.c"
                *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 273 "trace_gen.m"
                break;
#line 273 "trace_gen.m"
              case (MR_Integer) 3:
#line 273 "trace_gen.m"
#line 273 "trace_gen.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)))) {
#line 273 "trace_gen.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 273 "trace_gen.m"
                  case (MR_Integer) 0:
#line 2737 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 273 "trace_gen.m"
                    break;
#line 273 "trace_gen.m"
                  case (MR_Integer) 1:
#line 2743 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 273 "trace_gen.m"
                    break;
#line 273 "trace_gen.m"
                }
#line 273 "trace_gen.m"
                break;
#line 273 "trace_gen.m"
            }
#line 273 "trace_gen.m"
          }
#line 273 "trace_gen.m"
          break;
#line 273 "trace_gen.m"
        case (MR_Integer) 2:
#line 273 "trace_gen.m"
          {
#line 273 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 273 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));

#line 273 "trace_gen.m"
#line 273 "trace_gen.m"
            switch (MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) {
#line 273 "trace_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 273 "trace_gen.m"
              case (MR_Integer) 0:
#line 2773 "ll_backend.trace_gen.c"
                *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 273 "trace_gen.m"
                break;
#line 273 "trace_gen.m"
              case (MR_Integer) 1:
#line 2779 "ll_backend.trace_gen.c"
                *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 273 "trace_gen.m"
                break;
#line 273 "trace_gen.m"
              case (MR_Integer) 2:
#line 273 "trace_gen.m"
                {
#line 273 "trace_gen.m"
                  MR_Word ll_backend__trace_gen__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 273 "trace_gen.m"
                  MR_Word ll_backend__trace_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 273 "trace_gen.m"
                  MR_Word ll_backend__trace_gen__V_37_37;

#line 273 "trace_gen.m"
                  {
#line 273 "trace_gen.m"
                    mdbcomp__goal_path____Compare____forward_goal_path_0_0(&ll_backend__trace_gen__V_37_37, ll_backend__trace_gen__V_75_75, ll_backend__trace_gen__V_35_35);
                  }
#line 2799 "ll_backend.trace_gen.c"
                  ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_37_37 == (MR_Integer) 0);
#line 273 "trace_gen.m"
                  ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 273 "trace_gen.m"
                  if (ll_backend__trace_gen__succeeded)
#line 273 "trace_gen.m"
                    *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_37_37;
#line 273 "trace_gen.m"
                  else
#line 273 "trace_gen.m"
                    {
#line 273 "trace_gen.m"
                      {
#line 273 "trace_gen.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[9], ll_backend__trace_gen__HeadVar__1_1, ((MR_Box) (ll_backend__trace_gen__V_74_74)), ((MR_Box) (ll_backend__trace_gen__V_36_36)));
                      }
#line 273 "trace_gen.m"
                    }
#line 273 "trace_gen.m"
                }
#line 273 "trace_gen.m"
                break;
#line 273 "trace_gen.m"
              case (MR_Integer) 3:
#line 273 "trace_gen.m"
#line 273 "trace_gen.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)))) {
#line 273 "trace_gen.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 273 "trace_gen.m"
                  case (MR_Integer) 0:
#line 2831 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 273 "trace_gen.m"
                    break;
#line 273 "trace_gen.m"
                  case (MR_Integer) 1:
#line 2837 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 273 "trace_gen.m"
                    break;
#line 273 "trace_gen.m"
                }
#line 273 "trace_gen.m"
                break;
#line 273 "trace_gen.m"
            }
#line 273 "trace_gen.m"
          }
#line 273 "trace_gen.m"
          break;
#line 273 "trace_gen.m"
        case (MR_Integer) 3:
#line 273 "trace_gen.m"
#line 273 "trace_gen.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)))) {
#line 273 "trace_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 273 "trace_gen.m"
            case (MR_Integer) 0:
#line 273 "trace_gen.m"
              {
#line 273 "trace_gen.m"
                MR_Word ll_backend__trace_gen__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));

#line 273 "trace_gen.m"
#line 273 "trace_gen.m"
                switch (MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) {
#line 273 "trace_gen.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 273 "trace_gen.m"
                  case (MR_Integer) 0:
#line 2872 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 273 "trace_gen.m"
                    break;
#line 273 "trace_gen.m"
                  case (MR_Integer) 1:
#line 2878 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 273 "trace_gen.m"
                    break;
#line 273 "trace_gen.m"
                  case (MR_Integer) 2:
#line 2884 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 273 "trace_gen.m"
                    break;
#line 273 "trace_gen.m"
                  case (MR_Integer) 3:
#line 273 "trace_gen.m"
#line 273 "trace_gen.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)))) {
#line 273 "trace_gen.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 273 "trace_gen.m"
                      case (MR_Integer) 0:
#line 273 "trace_gen.m"
                        {
#line 273 "trace_gen.m"
                          MR_Word ll_backend__trace_gen__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));

#line 273 "trace_gen.m"
                          {
#line 273 "trace_gen.m"
                            mdbcomp__goal_path____Compare____forward_goal_path_0_0(ll_backend__trace_gen__HeadVar__1_1, ll_backend__trace_gen__V_76_76, ll_backend__trace_gen__V_52_52);
                          }
#line 273 "trace_gen.m"
                        }
#line 273 "trace_gen.m"
                        break;
#line 273 "trace_gen.m"
                      case (MR_Integer) 1:
#line 2913 "ll_backend.trace_gen.c"
                        *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 273 "trace_gen.m"
                        break;
#line 273 "trace_gen.m"
                    }
#line 273 "trace_gen.m"
                    break;
#line 273 "trace_gen.m"
                }
#line 273 "trace_gen.m"
              }
#line 273 "trace_gen.m"
              break;
#line 273 "trace_gen.m"
            case (MR_Integer) 1:
#line 273 "trace_gen.m"
              {
#line 273 "trace_gen.m"
                MR_Word ll_backend__trace_gen__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));

#line 273 "trace_gen.m"
#line 273 "trace_gen.m"
                switch (MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) {
#line 273 "trace_gen.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 273 "trace_gen.m"
                  case (MR_Integer) 0:
#line 2941 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 273 "trace_gen.m"
                    break;
#line 273 "trace_gen.m"
                  case (MR_Integer) 1:
#line 2947 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 273 "trace_gen.m"
                    break;
#line 273 "trace_gen.m"
                  case (MR_Integer) 2:
#line 2953 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 273 "trace_gen.m"
                    break;
#line 273 "trace_gen.m"
                  case (MR_Integer) 3:
#line 273 "trace_gen.m"
#line 273 "trace_gen.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)))) {
#line 273 "trace_gen.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 273 "trace_gen.m"
                      case (MR_Integer) 0:
#line 2966 "ll_backend.trace_gen.c"
                        *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 273 "trace_gen.m"
                        break;
#line 273 "trace_gen.m"
                      case (MR_Integer) 1:
#line 273 "trace_gen.m"
                        {
#line 273 "trace_gen.m"
                          MR_Word ll_backend__trace_gen__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));

#line 273 "trace_gen.m"
                          {
#line 273 "trace_gen.m"
                            mdbcomp__goal_path____Compare____forward_goal_path_0_0(ll_backend__trace_gen__HeadVar__1_1, ll_backend__trace_gen__V_79_79, ll_backend__trace_gen__V_65_65);
                          }
#line 273 "trace_gen.m"
                        }
#line 273 "trace_gen.m"
                        break;
#line 273 "trace_gen.m"
                    }
#line 273 "trace_gen.m"
                    break;
#line 273 "trace_gen.m"
                }
#line 273 "trace_gen.m"
              }
#line 273 "trace_gen.m"
              break;
#line 273 "trace_gen.m"
          }
#line 273 "trace_gen.m"
          break;
#line 273 "trace_gen.m"
      }
#line 273 "trace_gen.m"
  }
#line 273 "trace_gen.m"
}

#line 273 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_port_info_0_0(
#line 273 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 273 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2)
#line 273 "trace_gen.m"
{
#line 273 "trace_gen.m"
  {
#line 273 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 273 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastX_17 = (MR_Integer) ll_backend__trace_gen__HeadVar__1_1;
#line 273 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastY_18 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;

#line 273 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_17 == ll_backend__trace_gen__CastY_18);
#line 273 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 273 "trace_gen.m"
      ll_backend__trace_gen__succeeded = MR_TRUE;
#line 273 "trace_gen.m"
    else
#line 273 "trace_gen.m"
#line 273 "trace_gen.m"
      switch (MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__1_1)) {
#line 273 "trace_gen.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 273 "trace_gen.m"
        case (MR_Integer) 0:
#line 273 "trace_gen.m"
          {
#line 273 "trace_gen.m"
            MR_Integer ll_backend__trace_gen__CastX_3 = (MR_Integer) ll_backend__trace_gen__HeadVar__1_1;
#line 273 "trace_gen.m"
            MR_Integer ll_backend__trace_gen__CastY_4 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;

#line 273 "trace_gen.m"
            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastY_4 == ll_backend__trace_gen__CastX_3);
#line 273 "trace_gen.m"
          }
#line 273 "trace_gen.m"
          break;
#line 273 "trace_gen.m"
        case (MR_Integer) 1:
#line 273 "trace_gen.m"
          {
#line 273 "trace_gen.m"
            MR_Word ll_backend__trace_gen__TypeInfo_23_23;
#line 273 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 273 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 273 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_7_7;
#line 273 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_8_8;

#line 273 "trace_gen.m"
            ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 273 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 273 "trace_gen.m"
              {
#line 273 "trace_gen.m"
                ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 273 "trace_gen.m"
                ll_backend__trace_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 3078 "ll_backend.trace_gen.c"
                {
#line 3080 "ll_backend.trace_gen.c"
                  ll_backend__trace_gen__succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(ll_backend__trace_gen__V_5_5, ll_backend__trace_gen__V_7_7);
                }
#line 273 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 273 "trace_gen.m"
                  {
#line 3087 "ll_backend.trace_gen.c"
                    ll_backend__trace_gen__TypeInfo_23_23 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[10];
#line 3089 "ll_backend.trace_gen.c"
                    {
#line 3091 "ll_backend.trace_gen.c"
                      ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_23_23, ((MR_Box) (ll_backend__trace_gen__V_6_6)), ((MR_Box) (ll_backend__trace_gen__V_8_8)));
                    }
#line 273 "trace_gen.m"
                  }
#line 273 "trace_gen.m"
              }
#line 273 "trace_gen.m"
          }
#line 273 "trace_gen.m"
          break;
#line 273 "trace_gen.m"
        case (MR_Integer) 2:
#line 273 "trace_gen.m"
          {
#line 273 "trace_gen.m"
            MR_Word ll_backend__trace_gen__TypeInfo_20_20;
#line 273 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 273 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 273 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_11_11;
#line 273 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_12_12;

#line 273 "trace_gen.m"
            ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 273 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 273 "trace_gen.m"
              {
#line 273 "trace_gen.m"
                ll_backend__trace_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 273 "trace_gen.m"
                ll_backend__trace_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 3127 "ll_backend.trace_gen.c"
                {
#line 3129 "ll_backend.trace_gen.c"
                  ll_backend__trace_gen__succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(ll_backend__trace_gen__V_9_9, ll_backend__trace_gen__V_11_11);
                }
#line 273 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 273 "trace_gen.m"
                  {
#line 3136 "ll_backend.trace_gen.c"
                    ll_backend__trace_gen__TypeInfo_20_20 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[9];
#line 3138 "ll_backend.trace_gen.c"
                    {
#line 3140 "ll_backend.trace_gen.c"
                      ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_20_20, ((MR_Box) (ll_backend__trace_gen__V_10_10)), ((MR_Box) (ll_backend__trace_gen__V_12_12)));
                    }
#line 273 "trace_gen.m"
                  }
#line 273 "trace_gen.m"
              }
#line 273 "trace_gen.m"
          }
#line 273 "trace_gen.m"
          break;
#line 273 "trace_gen.m"
        case (MR_Integer) 3:
#line 273 "trace_gen.m"
#line 273 "trace_gen.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)))) {
#line 273 "trace_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 273 "trace_gen.m"
            case (MR_Integer) 0:
#line 273 "trace_gen.m"
              {
#line 273 "trace_gen.m"
                MR_Word ll_backend__trace_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 273 "trace_gen.m"
                MR_Word ll_backend__trace_gen__V_14_14;

#line 273 "trace_gen.m"
                ll_backend__trace_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 273 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 273 "trace_gen.m"
                  {
#line 273 "trace_gen.m"
                    ll_backend__trace_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 3175 "ll_backend.trace_gen.c"
                    {
#line 3177 "ll_backend.trace_gen.c"
                      ll_backend__trace_gen__succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(ll_backend__trace_gen__V_13_13, ll_backend__trace_gen__V_14_14);
                    }
#line 273 "trace_gen.m"
                  }
#line 273 "trace_gen.m"
              }
#line 273 "trace_gen.m"
              break;
#line 273 "trace_gen.m"
            case (MR_Integer) 1:
#line 273 "trace_gen.m"
              {
#line 273 "trace_gen.m"
                MR_Word ll_backend__trace_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 273 "trace_gen.m"
                MR_Word ll_backend__trace_gen__V_16_16;

#line 273 "trace_gen.m"
                ll_backend__trace_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 273 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 273 "trace_gen.m"
                  {
#line 273 "trace_gen.m"
                    ll_backend__trace_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 3203 "ll_backend.trace_gen.c"
                    {
#line 3205 "ll_backend.trace_gen.c"
                      ll_backend__trace_gen__succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(ll_backend__trace_gen__V_15_15, ll_backend__trace_gen__V_16_16);
                    }
#line 273 "trace_gen.m"
                  }
#line 273 "trace_gen.m"
              }
#line 273 "trace_gen.m"
              break;
#line 273 "trace_gen.m"
          }
#line 273 "trace_gen.m"
          break;
#line 273 "trace_gen.m"
      }
#line 273 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 273 "trace_gen.m"
  }
#line 273 "trace_gen.m"
}

#line 1362 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen____Compare____trace_info_0_0(
#line 1362 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
#line 1362 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 1362 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3)
#line 1362 "trace_gen.m"
{
#line 1362 "trace_gen.m"
  {
#line 1362 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 1362 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastX_30 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;
#line 1362 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastY_31 = (MR_Integer) ll_backend__trace_gen__HeadVar__3_3;

#line 1362 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_30 == ll_backend__trace_gen__CastY_31);
#line 1362 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 3251 "ll_backend.trace_gen.c"
      *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 1362 "trace_gen.m"
    else
#line 1362 "trace_gen.m"
      {
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 3)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 4)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 5)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 6)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 7)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 8)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 2)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 3)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 4)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 5)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 6)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 7)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 8)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_22_22;

#line 1362 "trace_gen.m"
        {
#line 1362 "trace_gen.m"
          libs__trace_params____Compare____trace_level_0_0(&ll_backend__trace_gen__V_22_22, ll_backend__trace_gen__V_4_4, ll_backend__trace_gen__V_13_13);
        }
#line 3301 "ll_backend.trace_gen.c"
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_22_22 == (MR_Integer) 0);
#line 1362 "trace_gen.m"
        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1362 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 1362 "trace_gen.m"
          *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_22_22;
#line 1362 "trace_gen.m"
        else
#line 1362 "trace_gen.m"
          {
#line 1362 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_23_23;

#line 1362 "trace_gen.m"
            {
#line 1362 "trace_gen.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[6], &ll_backend__trace_gen__V_23_23, ((MR_Box) (ll_backend__trace_gen__V_5_5)), ((MR_Box) (ll_backend__trace_gen__V_14_14)));
            }
#line 3321 "ll_backend.trace_gen.c"
            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_23_23 == (MR_Integer) 0);
#line 1362 "trace_gen.m"
            ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1362 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 1362 "trace_gen.m"
              *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_23_23;
#line 1362 "trace_gen.m"
            else
#line 1362 "trace_gen.m"
              {
#line 1362 "trace_gen.m"
                MR_Word ll_backend__trace_gen__V_24_24;

#line 1362 "trace_gen.m"
                {
#line 1362 "trace_gen.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[1], &ll_backend__trace_gen__V_24_24, ((MR_Box) (ll_backend__trace_gen__V_6_6)), ((MR_Box) (ll_backend__trace_gen__V_15_15)));
                }
#line 3341 "ll_backend.trace_gen.c"
                ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_24_24 == (MR_Integer) 0);
#line 1362 "trace_gen.m"
                ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1362 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 1362 "trace_gen.m"
                  *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_24_24;
#line 1362 "trace_gen.m"
                else
#line 1362 "trace_gen.m"
                  {
#line 1362 "trace_gen.m"
                    MR_Word ll_backend__trace_gen__V_25_25;

#line 1362 "trace_gen.m"
                    {
#line 1362 "trace_gen.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[1], &ll_backend__trace_gen__V_25_25, ((MR_Box) (ll_backend__trace_gen__V_7_7)), ((MR_Box) (ll_backend__trace_gen__V_16_16)));
                    }
#line 3361 "ll_backend.trace_gen.c"
                    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_25_25 == (MR_Integer) 0);
#line 1362 "trace_gen.m"
                    ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1362 "trace_gen.m"
                    if (ll_backend__trace_gen__succeeded)
#line 1362 "trace_gen.m"
                      *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_25_25;
#line 1362 "trace_gen.m"
                    else
#line 1362 "trace_gen.m"
                      {
#line 1362 "trace_gen.m"
                        MR_Word ll_backend__trace_gen__V_26_26;

#line 1362 "trace_gen.m"
                        {
#line 1362 "trace_gen.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[7], &ll_backend__trace_gen__V_26_26, ((MR_Box) (ll_backend__trace_gen__V_8_8)), ((MR_Box) (ll_backend__trace_gen__V_17_17)));
                        }
#line 3381 "ll_backend.trace_gen.c"
                        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_26_26 == (MR_Integer) 0);
#line 1362 "trace_gen.m"
                        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1362 "trace_gen.m"
                        if (ll_backend__trace_gen__succeeded)
#line 1362 "trace_gen.m"
                          *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_26_26;
#line 1362 "trace_gen.m"
                        else
#line 1362 "trace_gen.m"
                          {
#line 1362 "trace_gen.m"
                            MR_Word ll_backend__trace_gen__V_27_27;

#line 1362 "trace_gen.m"
                            {
#line 1362 "trace_gen.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[1], &ll_backend__trace_gen__V_27_27, ((MR_Box) (ll_backend__trace_gen__V_9_9)), ((MR_Box) (ll_backend__trace_gen__V_18_18)));
                            }
#line 3401 "ll_backend.trace_gen.c"
                            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_27_27 == (MR_Integer) 0);
#line 1362 "trace_gen.m"
                            ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1362 "trace_gen.m"
                            if (ll_backend__trace_gen__succeeded)
#line 1362 "trace_gen.m"
                              *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_27_27;
#line 1362 "trace_gen.m"
                            else
#line 1362 "trace_gen.m"
                              {
#line 1362 "trace_gen.m"
                                MR_Word ll_backend__trace_gen__V_28_28;

#line 1362 "trace_gen.m"
                                {
#line 1362 "trace_gen.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[1], &ll_backend__trace_gen__V_28_28, ((MR_Box) (ll_backend__trace_gen__V_10_10)), ((MR_Box) (ll_backend__trace_gen__V_19_19)));
                                }
#line 3421 "ll_backend.trace_gen.c"
                                ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_28_28 == (MR_Integer) 0);
#line 1362 "trace_gen.m"
                                ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1362 "trace_gen.m"
                                if (ll_backend__trace_gen__succeeded)
#line 1362 "trace_gen.m"
                                  *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_28_28;
#line 1362 "trace_gen.m"
                                else
#line 1362 "trace_gen.m"
                                  {
#line 1362 "trace_gen.m"
                                    MR_Word ll_backend__trace_gen__V_29_29;

#line 1362 "trace_gen.m"
                                    {
#line 1362 "trace_gen.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[8], &ll_backend__trace_gen__V_29_29, ((MR_Box) (ll_backend__trace_gen__V_11_11)), ((MR_Box) (ll_backend__trace_gen__V_20_20)));
                                    }
#line 3441 "ll_backend.trace_gen.c"
                                    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_29_29 == (MR_Integer) 0);
#line 1362 "trace_gen.m"
                                    ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1362 "trace_gen.m"
                                    if (ll_backend__trace_gen__succeeded)
#line 1362 "trace_gen.m"
                                      *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_29_29;
#line 1362 "trace_gen.m"
                                    else
#line 1362 "trace_gen.m"
                                      {
#line 1362 "trace_gen.m"
                                        {
#line 1362 "trace_gen.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[0], ll_backend__trace_gen__HeadVar__1_1, ((MR_Box) (ll_backend__trace_gen__V_12_12)), ((MR_Box) (ll_backend__trace_gen__V_21_21)));
                                        }
#line 1362 "trace_gen.m"
                                      }
#line 1362 "trace_gen.m"
                                  }
#line 1362 "trace_gen.m"
                              }
#line 1362 "trace_gen.m"
                          }
#line 1362 "trace_gen.m"
                      }
#line 1362 "trace_gen.m"
                  }
#line 1362 "trace_gen.m"
              }
#line 1362 "trace_gen.m"
          }
#line 1362 "trace_gen.m"
      }
#line 1362 "trace_gen.m"
  }
#line 1362 "trace_gen.m"
}

#line 1362 "trace_gen.m"
MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_info_0_0(
#line 1362 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 1362 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2)
#line 1362 "trace_gen.m"
{
#line 1362 "trace_gen.m"
  {
#line 1362 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 1362 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastX_21 = (MR_Integer) ll_backend__trace_gen__HeadVar__1_1;
#line 1362 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastY_22 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;

#line 1362 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_21 == ll_backend__trace_gen__CastY_22);
#line 1362 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 1362 "trace_gen.m"
      ll_backend__trace_gen__succeeded = MR_TRUE;
#line 1362 "trace_gen.m"
    else
#line 1362 "trace_gen.m"
      {
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_24_24;
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_25_25;
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_26_26;
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_27_27;
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_28_28;
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_29_29;
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_30_30;
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_31_31;
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 3)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 4)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 5)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 6)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 7)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 8)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 3)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 4)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 5)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 6)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 7)));
#line 1362 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 8)));

#line 3562 "ll_backend.trace_gen.c"
        {
#line 3564 "ll_backend.trace_gen.c"
          ll_backend__trace_gen__succeeded = libs__trace_params____Unify____trace_level_0_0(ll_backend__trace_gen__V_3_3, ll_backend__trace_gen__V_12_12);
        }
#line 1362 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 1362 "trace_gen.m"
          {
#line 3571 "ll_backend.trace_gen.c"
            ll_backend__trace_gen__TypeInfo_24_24 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[6];
#line 3573 "ll_backend.trace_gen.c"
            {
#line 3575 "ll_backend.trace_gen.c"
              ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_24_24, ((MR_Box) (ll_backend__trace_gen__V_4_4)), ((MR_Box) (ll_backend__trace_gen__V_13_13)));
            }
#line 1362 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 1362 "trace_gen.m"
              {
#line 3582 "ll_backend.trace_gen.c"
                ll_backend__trace_gen__TypeInfo_25_25 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[1];
#line 3584 "ll_backend.trace_gen.c"
                {
#line 3586 "ll_backend.trace_gen.c"
                  ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_25_25, ((MR_Box) (ll_backend__trace_gen__V_5_5)), ((MR_Box) (ll_backend__trace_gen__V_14_14)));
                }
#line 1362 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 1362 "trace_gen.m"
                  {
#line 3593 "ll_backend.trace_gen.c"
                    ll_backend__trace_gen__TypeInfo_26_26 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[1];
#line 3595 "ll_backend.trace_gen.c"
                    {
#line 3597 "ll_backend.trace_gen.c"
                      ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_26_26, ((MR_Box) (ll_backend__trace_gen__V_6_6)), ((MR_Box) (ll_backend__trace_gen__V_15_15)));
                    }
#line 1362 "trace_gen.m"
                    if (ll_backend__trace_gen__succeeded)
#line 1362 "trace_gen.m"
                      {
#line 3604 "ll_backend.trace_gen.c"
                        ll_backend__trace_gen__TypeInfo_27_27 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[7];
#line 3606 "ll_backend.trace_gen.c"
                        {
#line 3608 "ll_backend.trace_gen.c"
                          ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_27_27, ((MR_Box) (ll_backend__trace_gen__V_7_7)), ((MR_Box) (ll_backend__trace_gen__V_16_16)));
                        }
#line 1362 "trace_gen.m"
                        if (ll_backend__trace_gen__succeeded)
#line 1362 "trace_gen.m"
                          {
#line 3615 "ll_backend.trace_gen.c"
                            ll_backend__trace_gen__TypeInfo_28_28 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[1];
#line 3617 "ll_backend.trace_gen.c"
                            {
#line 3619 "ll_backend.trace_gen.c"
                              ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_28_28, ((MR_Box) (ll_backend__trace_gen__V_8_8)), ((MR_Box) (ll_backend__trace_gen__V_17_17)));
                            }
#line 1362 "trace_gen.m"
                            if (ll_backend__trace_gen__succeeded)
#line 1362 "trace_gen.m"
                              {
#line 3626 "ll_backend.trace_gen.c"
                                ll_backend__trace_gen__TypeInfo_29_29 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[1];
#line 3628 "ll_backend.trace_gen.c"
                                {
#line 3630 "ll_backend.trace_gen.c"
                                  ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_29_29, ((MR_Box) (ll_backend__trace_gen__V_9_9)), ((MR_Box) (ll_backend__trace_gen__V_18_18)));
                                }
#line 1362 "trace_gen.m"
                                if (ll_backend__trace_gen__succeeded)
#line 1362 "trace_gen.m"
                                  {
#line 3637 "ll_backend.trace_gen.c"
                                    ll_backend__trace_gen__TypeInfo_30_30 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[8];
#line 3639 "ll_backend.trace_gen.c"
                                    {
#line 3641 "ll_backend.trace_gen.c"
                                      ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_30_30, ((MR_Box) (ll_backend__trace_gen__V_10_10)), ((MR_Box) (ll_backend__trace_gen__V_19_19)));
                                    }
#line 1362 "trace_gen.m"
                                    if (ll_backend__trace_gen__succeeded)
#line 1362 "trace_gen.m"
                                      {
#line 3648 "ll_backend.trace_gen.c"
                                        ll_backend__trace_gen__TypeInfo_31_31 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[0];
#line 3650 "ll_backend.trace_gen.c"
                                        {
#line 3652 "ll_backend.trace_gen.c"
                                          ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_31_31, ((MR_Box) (ll_backend__trace_gen__V_11_11)), ((MR_Box) (ll_backend__trace_gen__V_20_20)));
                                        }
#line 1362 "trace_gen.m"
                                      }
#line 1362 "trace_gen.m"
                                  }
#line 1362 "trace_gen.m"
                              }
#line 1362 "trace_gen.m"
                          }
#line 1362 "trace_gen.m"
                      }
#line 1362 "trace_gen.m"
                  }
#line 1362 "trace_gen.m"
              }
#line 1362 "trace_gen.m"
          }
#line 1362 "trace_gen.m"
      }
#line 1362 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 1362 "trace_gen.m"
  }
#line 1362 "trace_gen.m"
}

#line 91 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen____Compare____negation_end_port_0_0(
#line 91 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
#line 91 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 91 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3)
#line 91 "trace_gen.m"
{
#line 91 "trace_gen.m"
  {
#line 91 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 91 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__Cast_HeadVar1_4 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;
#line 91 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__Cast_HeadVar2_5 = (MR_Integer) ll_backend__trace_gen__HeadVar__3_3;

#line 91 "trace_gen.m"
    {
#line 91 "trace_gen.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__trace_gen__HeadVar__1_1, ll_backend__trace_gen__Cast_HeadVar1_4, ll_backend__trace_gen__Cast_HeadVar2_5);
    }
#line 91 "trace_gen.m"
  }
#line 91 "trace_gen.m"
}

#line 91 "trace_gen.m"
MR_bool MR_CALL 
ll_backend__trace_gen____Unify____negation_end_port_0_0(
#line 91 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_1,
#line 91 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2)
#line 91 "trace_gen.m"
{
#line 3719 "ll_backend.trace_gen.c"
  {
#line 3721 "ll_backend.trace_gen.c"
    MR_bool ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__HeadVar__2_1 == ll_backend__trace_gen__HeadVar__2_2);

#line 3724 "ll_backend.trace_gen.c"
    return ll_backend__trace_gen__succeeded;
#line 3726 "ll_backend.trace_gen.c"
  }
#line 91 "trace_gen.m"
}

#line 81 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen____Compare____external_trace_port_0_0(
#line 81 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
#line 81 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 81 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3)
#line 81 "trace_gen.m"
{
#line 81 "trace_gen.m"
  {
#line 81 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 81 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__Cast_HeadVar1_4 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;
#line 81 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__Cast_HeadVar2_5 = (MR_Integer) ll_backend__trace_gen__HeadVar__3_3;

#line 81 "trace_gen.m"
    {
#line 81 "trace_gen.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__trace_gen__HeadVar__1_1, ll_backend__trace_gen__Cast_HeadVar1_4, ll_backend__trace_gen__Cast_HeadVar2_5);
    }
#line 81 "trace_gen.m"
  }
#line 81 "trace_gen.m"
}

#line 81 "trace_gen.m"
MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_trace_port_0_0(
#line 81 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_1,
#line 81 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2)
#line 81 "trace_gen.m"
{
#line 3770 "ll_backend.trace_gen.c"
  {
#line 3772 "ll_backend.trace_gen.c"
    MR_bool ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__HeadVar__2_1 == ll_backend__trace_gen__HeadVar__2_2);

#line 3775 "ll_backend.trace_gen.c"
    return ll_backend__trace_gen__succeeded;
#line 3777 "ll_backend.trace_gen.c"
  }
#line 81 "trace_gen.m"
}

#line 207 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen____Compare____external_event_info_0_0(
#line 207 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
#line 207 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 207 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3)
#line 207 "trace_gen.m"
{
#line 207 "trace_gen.m"
  {
#line 207 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 207 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastX_12 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;
#line 207 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastY_13 = (MR_Integer) ll_backend__trace_gen__HeadVar__3_3;

#line 207 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_12 == ll_backend__trace_gen__CastY_13);
#line 207 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 3806 "ll_backend.trace_gen.c"
      *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 207 "trace_gen.m"
    else
#line 207 "trace_gen.m"
      {
#line 207 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 207 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 207 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 207 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 207 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 207 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 2)));
#line 207 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_10_10;

#line 207 "trace_gen.m"
        {
#line 207 "trace_gen.m"
          ll_backend__llds____Compare____label_0_0(&ll_backend__trace_gen__V_10_10, ll_backend__trace_gen__V_4_4, ll_backend__trace_gen__V_7_7);
        }
#line 3832 "ll_backend.trace_gen.c"
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_10_10 == (MR_Integer) 0);
#line 207 "trace_gen.m"
        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 207 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 207 "trace_gen.m"
          *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_10_10;
#line 207 "trace_gen.m"
        else
#line 207 "trace_gen.m"
          {
#line 207 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_11_11;

#line 207 "trace_gen.m"
            {
#line 207 "trace_gen.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_2[0], &ll_backend__trace_gen__V_11_11, ((MR_Box) (ll_backend__trace_gen__V_5_5)), ((MR_Box) (ll_backend__trace_gen__V_8_8)));
            }
#line 3852 "ll_backend.trace_gen.c"
            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_11_11 == (MR_Integer) 0);
#line 207 "trace_gen.m"
            ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 207 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 207 "trace_gen.m"
              *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_11_11;
#line 207 "trace_gen.m"
            else
#line 207 "trace_gen.m"
              {
#line 207 "trace_gen.m"
                {
#line 207 "trace_gen.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[5], ll_backend__trace_gen__HeadVar__1_1, ((MR_Box) (ll_backend__trace_gen__V_6_6)), ((MR_Box) (ll_backend__trace_gen__V_9_9)));
                }
#line 207 "trace_gen.m"
              }
#line 207 "trace_gen.m"
          }
#line 207 "trace_gen.m"
      }
#line 207 "trace_gen.m"
  }
#line 207 "trace_gen.m"
}

#line 207 "trace_gen.m"
MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_event_info_0_0(
#line 207 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 207 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2)
#line 207 "trace_gen.m"
{
#line 207 "trace_gen.m"
  {
#line 207 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 207 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastX_9 = (MR_Integer) ll_backend__trace_gen__HeadVar__1_1;
#line 207 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastY_10 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;

#line 207 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_9 == ll_backend__trace_gen__CastY_10);
#line 207 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 207 "trace_gen.m"
      ll_backend__trace_gen__succeeded = MR_TRUE;
#line 207 "trace_gen.m"
    else
#line 207 "trace_gen.m"
      {
#line 207 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_12_12;
#line 207 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_13_13;
#line 207 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 207 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 207 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 207 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 207 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 207 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 2)));

#line 3925 "ll_backend.trace_gen.c"
        {
#line 3927 "ll_backend.trace_gen.c"
          ll_backend__trace_gen__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__trace_gen__V_3_3, ll_backend__trace_gen__V_6_6);
        }
#line 207 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 207 "trace_gen.m"
          {
#line 3934 "ll_backend.trace_gen.c"
            ll_backend__trace_gen__TypeInfo_12_12 = (MR_Word) &ll_backend__trace_gen_scalar_common_2[0];
#line 3936 "ll_backend.trace_gen.c"
            {
#line 3938 "ll_backend.trace_gen.c"
              ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_12_12, ((MR_Box) (ll_backend__trace_gen__V_4_4)), ((MR_Box) (ll_backend__trace_gen__V_7_7)));
            }
#line 207 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 207 "trace_gen.m"
              {
#line 3945 "ll_backend.trace_gen.c"
                ll_backend__trace_gen__TypeInfo_13_13 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[5];
#line 3947 "ll_backend.trace_gen.c"
                {
#line 3949 "ll_backend.trace_gen.c"
                  ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_13_13, ((MR_Box) (ll_backend__trace_gen__V_5_5)), ((MR_Box) (ll_backend__trace_gen__V_8_8)));
                }
#line 207 "trace_gen.m"
              }
#line 207 "trace_gen.m"
          }
#line 207 "trace_gen.m"
      }
#line 207 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 207 "trace_gen.m"
  }
#line 207 "trace_gen.m"
}

#line 1311 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__redo_layout_slot_2_p_0(
#line 1311 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CodeModel_3,
#line 1311 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__RedoLayoutSlot_4)
#line 1311 "trace_gen.m"
{
#line 1348 "trace_gen.m"
  {
#line 1348 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1348 "trace_gen.m"
#line 1348 "trace_gen.m"
    switch (ll_backend__trace_gen__CodeModel_3) {
#line 1348 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1348 "trace_gen.m"
      case (MR_Integer) 0:
#line 1348 "trace_gen.m"
      case (MR_Integer) 1:
#line 1353 "trace_gen.m"
        {
#line 1354 "trace_gen.m"
          {
#line 1354 "trace_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.redo_layout_slot\'/2", (MR_String) "attempt to access redo layout slot for det or semi procedure");
#line 1354 "trace_gen.m"
            return;
          }
#line 1353 "trace_gen.m"
        }
#line 1348 "trace_gen.m"
        break;
#line 1348 "trace_gen.m"
      case (MR_Integer) 2:
#line 1348 "trace_gen.m"
        {
#line 1349 "trace_gen.m"
          *ll_backend__trace_gen__RedoLayoutSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[22]);
#line 1348 "trace_gen.m"
        }
#line 1348 "trace_gen.m"
        break;
#line 1348 "trace_gen.m"
    }
#line 1348 "trace_gen.m"
  }
#line 1311 "trace_gen.m"
}

#line 1310 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__call_depth_slot_2_p_0(
#line 1310 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CodeModel_3,
#line 1310 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__CallDepthSlot_4)
#line 1310 "trace_gen.m"
{
#line 1337 "trace_gen.m"
  {
#line 1337 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1337 "trace_gen.m"
#line 1337 "trace_gen.m"
    switch (ll_backend__trace_gen__CodeModel_3) {
#line 1337 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1337 "trace_gen.m"
      case (MR_Integer) 0:
#line 1337 "trace_gen.m"
      case (MR_Integer) 1:
#line 1342 "trace_gen.m"
        {
#line 1343 "trace_gen.m"
          *ll_backend__trace_gen__CallDepthSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[14]);
#line 1342 "trace_gen.m"
        }
#line 1337 "trace_gen.m"
        break;
#line 1337 "trace_gen.m"
      case (MR_Integer) 2:
#line 1337 "trace_gen.m"
        {
#line 1338 "trace_gen.m"
          *ll_backend__trace_gen__CallDepthSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[15]);
#line 1337 "trace_gen.m"
        }
#line 1337 "trace_gen.m"
        break;
#line 1337 "trace_gen.m"
    }
#line 1337 "trace_gen.m"
  }
#line 1310 "trace_gen.m"
}

#line 1309 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__call_num_slot_2_p_0(
#line 1309 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CodeModel_3,
#line 1309 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__CallNumSlot_4)
#line 1309 "trace_gen.m"
{
#line 1326 "trace_gen.m"
  {
#line 1326 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1326 "trace_gen.m"
#line 1326 "trace_gen.m"
    switch (ll_backend__trace_gen__CodeModel_3) {
#line 1326 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1326 "trace_gen.m"
      case (MR_Integer) 0:
#line 1326 "trace_gen.m"
      case (MR_Integer) 1:
#line 1331 "trace_gen.m"
        {
#line 1332 "trace_gen.m"
          *ll_backend__trace_gen__CallNumSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[20]);
#line 1331 "trace_gen.m"
        }
#line 1326 "trace_gen.m"
        break;
#line 1326 "trace_gen.m"
      case (MR_Integer) 2:
#line 1326 "trace_gen.m"
        {
#line 1327 "trace_gen.m"
          *ll_backend__trace_gen__CallNumSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[21]);
#line 1326 "trace_gen.m"
        }
#line 1326 "trace_gen.m"
        break;
#line 1326 "trace_gen.m"
    }
#line 1326 "trace_gen.m"
  }
#line 1309 "trace_gen.m"
}

#line 1308 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__event_num_slot_2_p_0(
#line 1308 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CodeModel_3,
#line 1308 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__EventNumSlot_4)
#line 1308 "trace_gen.m"
{
#line 1315 "trace_gen.m"
  {
#line 1315 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1315 "trace_gen.m"
#line 1315 "trace_gen.m"
    switch (ll_backend__trace_gen__CodeModel_3) {
#line 1315 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1315 "trace_gen.m"
      case (MR_Integer) 0:
#line 1315 "trace_gen.m"
      case (MR_Integer) 1:
#line 1320 "trace_gen.m"
        {
#line 1321 "trace_gen.m"
          *ll_backend__trace_gen__EventNumSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[18]);
#line 1320 "trace_gen.m"
        }
#line 1315 "trace_gen.m"
        break;
#line 1315 "trace_gen.m"
      case (MR_Integer) 2:
#line 1315 "trace_gen.m"
        {
#line 1316 "trace_gen.m"
          *ll_backend__trace_gen__EventNumSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[19]);
#line 1315 "trace_gen.m"
        }
#line 1315 "trace_gen.m"
        break;
#line 1315 "trace_gen.m"
    }
#line 1315 "trace_gen.m"
  }
#line 1308 "trace_gen.m"
}

#line 1281 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__stackref_to_string_2_p_0(
#line 1281 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Lval_3,
#line 1281 "trace_gen.m"
  MR_String * ll_backend__trace_gen__LvalStr_4)
#line 1281 "trace_gen.m"
{
#line 1284 "trace_gen.m"
  {
#line 1284 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__trace_gen__Lval_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1284 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__Slot_5;

#line 1284 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 1284 "trace_gen.m"
      {
#line 1284 "trace_gen.m"
        ll_backend__trace_gen__Slot_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 1)));
#line 1285 "trace_gen.m"
        {
#line 1285 "trace_gen.m"
          MR_String ll_backend__trace_gen__SlotString_6;
#line 1285 "trace_gen.m"
          MR_String ll_backend__trace_gen__V_10_10;

#line 1285 "trace_gen.m"
          {
#line 1285 "trace_gen.m"
            mercury__string__int_to_string_2_p_0(ll_backend__trace_gen__Slot_5, &ll_backend__trace_gen__SlotString_6);
          }
#line 1286 "trace_gen.m"
          {
#line 1286 "trace_gen.m"
            ll_backend__trace_gen__V_10_10 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__SlotString_6, (MR_String) ")");
          }
#line 1286 "trace_gen.m"
          {
#line 1286 "trace_gen.m"
            *ll_backend__trace_gen__LvalStr_4 = mercury__string__f_43_43_2_f_0((MR_String) "MR_sv(", ll_backend__trace_gen__V_10_10);
          }
#line 1285 "trace_gen.m"
        }
#line 1284 "trace_gen.m"
      }
#line 1284 "trace_gen.m"
    else
#line 1287 "trace_gen.m"
      {
#line 1287 "trace_gen.m"
        MR_Integer ll_backend__trace_gen__Slot_22;

#line 1287 "trace_gen.m"
        ll_backend__trace_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__trace_gen__Lval_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1287 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 1287 "trace_gen.m"
          {
#line 1287 "trace_gen.m"
            ll_backend__trace_gen__Slot_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 1)));
#line 1288 "trace_gen.m"
            {
#line 1288 "trace_gen.m"
              MR_String ll_backend__trace_gen__V_13_13;
#line 1288 "trace_gen.m"
              MR_String ll_backend__trace_gen__SlotString_21;

#line 1288 "trace_gen.m"
              {
#line 1288 "trace_gen.m"
                mercury__string__int_to_string_2_p_0(ll_backend__trace_gen__Slot_22, &ll_backend__trace_gen__SlotString_21);
              }
#line 1289 "trace_gen.m"
              {
#line 1289 "trace_gen.m"
                ll_backend__trace_gen__V_13_13 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__SlotString_21, (MR_String) ")");
              }
#line 1289 "trace_gen.m"
              {
#line 1289 "trace_gen.m"
                *ll_backend__trace_gen__LvalStr_4 = mercury__string__f_43_43_2_f_0((MR_String) "MR_fv(", ll_backend__trace_gen__V_13_13);
              }
#line 1288 "trace_gen.m"
            }
#line 1287 "trace_gen.m"
          }
#line 1287 "trace_gen.m"
        else
#line 1290 "trace_gen.m"
          {
#line 1290 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_7_7;
#line 1290 "trace_gen.m"
            MR_Integer ll_backend__trace_gen__V_8_8;

#line 1290 "trace_gen.m"
            ll_backend__trace_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__trace_gen__Lval_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1290 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 1290 "trace_gen.m"
              {
#line 1290 "trace_gen.m"
                ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 1)));
#line 1290 "trace_gen.m"
                ll_backend__trace_gen__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 2)));
#line 1292 "trace_gen.m"
                {
#line 1292 "trace_gen.m"
                  mercury__require__sorry_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.stackref_to_string\'/2", (MR_String) "double-width stack slot");
#line 1292 "trace_gen.m"
                  return;
                }
#line 1290 "trace_gen.m"
              }
#line 1290 "trace_gen.m"
            else
#line 1294 "trace_gen.m"
              {
#line 1294 "trace_gen.m"
                {
#line 1294 "trace_gen.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.stackref_to_string\'/2", (MR_String) "non-stack lval");
#line 1294 "trace_gen.m"
                  return;
                }
#line 1294 "trace_gen.m"
              }
#line 1290 "trace_gen.m"
          }
#line 1287 "trace_gen.m"
      }
#line 1284 "trace_gen.m"
  }
#line 1281 "trace_gen.m"
}

#line 1259 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__build_fail_vars_6_p_0(
#line 1259 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 1259 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 1259 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3,
#line 1259 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ModuleInfo_4,
#line 1259 "trace_gen.m"
  MR_Word ll_backend__trace_gen__VarTypes_5,
#line 1259 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__6_6)
#line 1259 "trace_gen.m"
{
#line 1263 "trace_gen.m"
  {
#line 1263 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1263 "trace_gen.m"
    if ((ll_backend__trace_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1263 "trace_gen.m"
      {
#line 1263 "trace_gen.m"
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1263 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 1263 "trace_gen.m"
          {
#line 1263 "trace_gen.m"
            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1263 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 1263 "trace_gen.m"
              {
#line 1263 "trace_gen.m"
                *ll_backend__trace_gen__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1263 "trace_gen.m"
                ll_backend__trace_gen__succeeded = MR_TRUE;
#line 1263 "trace_gen.m"
              }
#line 1263 "trace_gen.m"
          }
#line 1263 "trace_gen.m"
      }
#line 1263 "trace_gen.m"
    else
#line 1265 "trace_gen.m"
      {
#line 1265 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1265 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1265 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Inst_11;
#line 1265 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Insts_12;
#line 1265 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Info_13;
#line 1265 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Infos_14;
#line 1265 "trace_gen.m"
        MR_Word ll_backend__trace_gen__FailVars0_18;
#line 1265 "trace_gen.m"
        MR_Word ll_backend__trace_gen__ArgMode_20;
#line 1267 "trace_gen.m"
        MR_Word ll_backend__trace_gen___Loc_19;
#line 1269 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Type_21;
#line 1269 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_22_22;

#line 1264 "trace_gen.m"
        ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1264 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 1264 "trace_gen.m"
          {
#line 1264 "trace_gen.m"
            ll_backend__trace_gen__Inst_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 1264 "trace_gen.m"
            ll_backend__trace_gen__Insts_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 1264 "trace_gen.m"
            ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1264 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 1264 "trace_gen.m"
              {
#line 1264 "trace_gen.m"
                ll_backend__trace_gen__Info_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 1264 "trace_gen.m"
                ll_backend__trace_gen__Infos_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 1266 "trace_gen.m"
                {
#line 1266 "trace_gen.m"
                  ll_backend__trace_gen__succeeded = ll_backend__trace_gen__build_fail_vars_6_p_0(ll_backend__trace_gen__Vars_10, ll_backend__trace_gen__Insts_12, ll_backend__trace_gen__Infos_14, ll_backend__trace_gen__ModuleInfo_4, ll_backend__trace_gen__VarTypes_5, &ll_backend__trace_gen__FailVars0_18);
                }
#line 1265 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 1265 "trace_gen.m"
                  {
#line 1267 "trace_gen.m"
                    ll_backend__trace_gen___Loc_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Info_13, (MR_Integer) 0)));
#line 1267 "trace_gen.m"
                    ll_backend__trace_gen__ArgMode_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Info_13, (MR_Integer) 1)));
#line 1269 "trace_gen.m"
                    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__ArgMode_20 == (MR_Integer) 0);
#line 1269 "trace_gen.m"
                    if (ll_backend__trace_gen__succeeded)
#line 1269 "trace_gen.m"
                      {
#line 1270 "trace_gen.m"
                        {
#line 1270 "trace_gen.m"
                          ll_backend__trace_gen__succeeded = check_hlds__inst_test__inst_is_clobbered_2_p_0(ll_backend__trace_gen__ModuleInfo_4, ll_backend__trace_gen__Inst_11);
                        }
#line 1270 "trace_gen.m"
                        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1269 "trace_gen.m"
                        if (ll_backend__trace_gen__succeeded)
#line 1269 "trace_gen.m"
                          {
#line 1271 "trace_gen.m"
                            {
#line 1271 "trace_gen.m"
                              hlds__vartypes__lookup_var_type_3_p_0(ll_backend__trace_gen__VarTypes_5, ll_backend__trace_gen__Var_9, &ll_backend__trace_gen__Type_21);
                            }
#line 1272 "trace_gen.m"
                            {
#line 1272 "trace_gen.m"
                              ll_backend__trace_gen__V_22_22 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__trace_gen__ModuleInfo_4, ll_backend__trace_gen__Type_21);
                            }
#line 1272 "trace_gen.m"
                            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_22_22 == (MR_Integer) 1);
#line 1269 "trace_gen.m"
                          }
#line 1269 "trace_gen.m"
                      }
#line 1268 "trace_gen.m"
                    if (ll_backend__trace_gen__succeeded)
#line 1274 "trace_gen.m"
                      {
#line 1274 "trace_gen.m"
                        MR_Word base;
#line 1274 "trace_gen.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1274 "trace_gen.m"
                        *ll_backend__trace_gen__HeadVar__6_6 = base;
#line 1274 "trace_gen.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__trace_gen__Var_9));
#line 1274 "trace_gen.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__trace_gen__FailVars0_18));
#line 1274 "trace_gen.m"
                      }
#line 1268 "trace_gen.m"
                    else
#line 1276 "trace_gen.m"
                      *ll_backend__trace_gen__HeadVar__6_6 = ll_backend__trace_gen__FailVars0_18;
#line 1268 "trace_gen.m"
                    ll_backend__trace_gen__succeeded = MR_TRUE;
#line 1265 "trace_gen.m"
                  }
#line 1264 "trace_gen.m"
              }
#line 1264 "trace_gen.m"
          }
#line 1265 "trace_gen.m"
      }
#line 1263 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 1263 "trace_gen.m"
  }
#line 1259 "trace_gen.m"
}

#line 1175 "trace_gen.m"
static MR_Word MR_CALL 
ll_backend__trace_gen__find_lval_in_layout_locn_1_f_0(
#line 1175 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1)
#line 1175 "trace_gen.m"
{
#line 1177 "trace_gen.m"
  {
#line 1177 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 1177 "trace_gen.m"
    MR_Word ll_backend__trace_gen__Lval_2;

#line 1177 "trace_gen.m"
    if (((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1177 "trace_gen.m"
      ll_backend__trace_gen__Lval_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1177 "trace_gen.m"
    else
#line 1178 "trace_gen.m"
      {
#line 1178 "trace_gen.m"
        MR_Integer ll_backend__trace_gen__V_5_5;

#line 1178 "trace_gen.m"
        ll_backend__trace_gen__Lval_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1178 "trace_gen.m"
        ll_backend__trace_gen__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1178 "trace_gen.m"
      }
#line 1177 "trace_gen.m"
    return ll_backend__trace_gen__Lval_2;
#line 1177 "trace_gen.m"
  }
#line 1175 "trace_gen.m"
}

#line 1170 "trace_gen.m"
static MR_Word MR_CALL 
ll_backend__trace_gen__find_lval_in_var_info_1_f_0(
#line 1170 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1)
#line 1170 "trace_gen.m"
{
#line 1172 "trace_gen.m"
  {
#line 1172 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 1172 "trace_gen.m"
    MR_Word ll_backend__trace_gen__HeadVar__2_2;
#line 1172 "trace_gen.m"
    MR_Word ll_backend__trace_gen__LayoutLocn_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1172 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1172 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 2)));

#line 1177 "trace_gen.m"
    if (((MR_tag((MR_Word) ll_backend__trace_gen__LayoutLocn_3)) == (MR_mktag((MR_Integer) 0))))
#line 1177 "trace_gen.m"
      ll_backend__trace_gen__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__LayoutLocn_3, (MR_Integer) 0)));
#line 1177 "trace_gen.m"
    else
#line 1178 "trace_gen.m"
      {
#line 1178 "trace_gen.m"
        MR_Integer ll_backend__trace_gen__V_8_8;

#line 1178 "trace_gen.m"
        ll_backend__trace_gen__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__LayoutLocn_3, (MR_Integer) 0)));
#line 1178 "trace_gen.m"
        ll_backend__trace_gen__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__LayoutLocn_3, (MR_Integer) 1)));
#line 1178 "trace_gen.m"
      }
#line 1172 "trace_gen.m"
    return ll_backend__trace_gen__HeadVar__2_2;
#line 1172 "trace_gen.m"
  }
#line 1170 "trace_gen.m"
}

#line 1154 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__find_output_vars_3_p_0(
#line 1154 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 1154 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2,
#line 1154 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_OutputVars_3)
#line 1154 "trace_gen.m"
{
#line 1157 "trace_gen.m"
  while (MR_TRUE)
#line 1157 "trace_gen.m"
    {
#line 1157 "trace_gen.m"
      /* tailcall optimized into a loop */
#line 1157 "trace_gen.m"
      {
#line 1157 "trace_gen.m"
        MR_bool ll_backend__trace_gen__succeeded;

#line 1157 "trace_gen.m"
        if ((ll_backend__trace_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1157 "trace_gen.m"
          *ll_backend__trace_gen__STATE_VARIABLE_OutputVars_3 = ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2;
#line 1157 "trace_gen.m"
        else
#line 1158 "trace_gen.m"
          {
#line 1158 "trace_gen.m"
            MR_Word ll_backend__trace_gen__Arg_7;
#line 1158 "trace_gen.m"
            MR_Word ll_backend__trace_gen__Info_8;
#line 1158 "trace_gen.m"
            MR_Word ll_backend__trace_gen__ArgsInfos_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1158 "trace_gen.m"
            MR_Word ll_backend__trace_gen__Mode_12;
#line 1158 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1158 "trace_gen.m"
            MR_Word ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16;
#line 1159 "trace_gen.m"
            MR_Word ll_backend__trace_gen___ArgLoc_11;

#line 1158 "trace_gen.m"
            ll_backend__trace_gen__Arg_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_15_15, (MR_Integer) 0)));
#line 1158 "trace_gen.m"
            ll_backend__trace_gen__Info_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_15_15, (MR_Integer) 1)));
#line 1159 "trace_gen.m"
            ll_backend__trace_gen___ArgLoc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Info_8, (MR_Integer) 0)));
#line 1159 "trace_gen.m"
            ll_backend__trace_gen__Mode_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Info_8, (MR_Integer) 1)));
#line 1163 "trace_gen.m"
#line 1163 "trace_gen.m"
            switch (ll_backend__trace_gen__Mode_12) {
#line 1163 "trace_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1163 "trace_gen.m"
              case (MR_Integer) 0:
#line 1164 "trace_gen.m"
                ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16 = ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2;
#line 1163 "trace_gen.m"
                break;
#line 1163 "trace_gen.m"
              case (MR_Integer) 1:
#line 1162 "trace_gen.m"
                {
#line 1162 "trace_gen.m"
                  ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1162 "trace_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16, 0) = ((MR_Box) (ll_backend__trace_gen__Arg_7));
#line 1162 "trace_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16, 1) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2));
#line 1162 "trace_gen.m"
                }
#line 1163 "trace_gen.m"
                break;
#line 1163 "trace_gen.m"
              case (MR_Integer) 2:
#line 1166 "trace_gen.m"
                ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16 = ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2;
#line 1163 "trace_gen.m"
                break;
#line 1163 "trace_gen.m"
            }
#line 1168 "trace_gen.m"
            /* direct tailcall eliminated */
#line 1168 "trace_gen.m"
            {
#line 1168 "trace_gen.m"
              MR_Word ll_backend__trace_gen__HeadVar__1__tmp_copy_1 = ll_backend__trace_gen__ArgsInfos_9;
#line 1168 "trace_gen.m"
              MR_Word ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0__tmp_copy_2 = ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16;

#line 1168 "trace_gen.m"
              ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2 = ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0__tmp_copy_2;
#line 1168 "trace_gen.m"
              ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__HeadVar__1__tmp_copy_1;
#line 1168 "trace_gen.m"
            }
#line 1168 "trace_gen.m"
            continue;
#line 1158 "trace_gen.m"
          }
#line 1157 "trace_gen.m"
      }
#line 1157 "trace_gen.m"
      break;
#line 1157 "trace_gen.m"
    }
#line 1154 "trace_gen.m"
}

#line 1097 "trace_gen.m"
static MR_Box MR_CALL 
ll_backend__trace_gen__generate_event_code_13_p_0_2(
#line 1097 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg,
#line 1097 "trace_gen.m"
  MR_Box ll_backend__trace_gen__wrapper_arg_1)
#line 1097 "trace_gen.m"
{
#line 1097 "trace_gen.m"
  {
#line 1097 "trace_gen.m"
    MR_Box ll_backend__trace_gen__wrapper_arg_2;
#line 1097 "trace_gen.m"
    MR_Box ll_backend__trace_gen__closure = ll_backend__trace_gen__closure_arg;
#line 1097 "trace_gen.m"
    MR_Word ll_backend__trace_gen__conv1_Lval_2;

#line 1097 "trace_gen.m"
    {
#line 1097 "trace_gen.m"
      ll_backend__trace_gen__conv1_Lval_2 = ll_backend__trace_gen__find_lval_in_layout_locn_1_f_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1));
    }
#line 1097 "trace_gen.m"
    ll_backend__trace_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__trace_gen__conv1_Lval_2));
#line 1097 "trace_gen.m"
    return ll_backend__trace_gen__wrapper_arg_2;
#line 1097 "trace_gen.m"
  }
#line 1097 "trace_gen.m"
}

#line 1093 "trace_gen.m"
static MR_Box MR_CALL 
ll_backend__trace_gen__generate_event_code_13_p_0_1(
#line 1093 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg,
#line 1093 "trace_gen.m"
  MR_Box ll_backend__trace_gen__wrapper_arg_1)
#line 1093 "trace_gen.m"
{
#line 1093 "trace_gen.m"
  {
#line 1093 "trace_gen.m"
    MR_Box ll_backend__trace_gen__wrapper_arg_2;
#line 1093 "trace_gen.m"
    MR_Box ll_backend__trace_gen__closure = ll_backend__trace_gen__closure_arg;
#line 1093 "trace_gen.m"
    MR_Word ll_backend__trace_gen__conv0_HeadVar__2_2;

#line 1093 "trace_gen.m"
    {
#line 1093 "trace_gen.m"
      ll_backend__trace_gen__conv0_HeadVar__2_2 = ll_backend__trace_gen__find_lval_in_var_info_1_f_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1));
    }
#line 1093 "trace_gen.m"
    ll_backend__trace_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__trace_gen__conv0_HeadVar__2_2));
#line 1093 "trace_gen.m"
    return ll_backend__trace_gen__wrapper_arg_2;
#line 1093 "trace_gen.m"
  }
#line 1093 "trace_gen.m"
}

#line 1024 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__generate_event_code_13_p_0(
#line 1024 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Port_14,
#line 1024 "trace_gen.m"
  MR_Word ll_backend__trace_gen__PortInfo_15,
#line 1024 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeTraceInfo_16,
#line 1024 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Context_17,
#line 1024 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HideEvent_18,
#line 1024 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeUserInfo_19,
#line 1024 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Label_20,
#line 1024 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__TvarDataMap_21,
#line 1024 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_22,
#line 1024 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_67,
#line 1024 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_68,
#line 1024 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_69,
#line 1024 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_70)
#line 1024 "trace_gen.m"
{
#line 1031 "trace_gen.m"
  {
#line 1031 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TypeInfo_140_140;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TypeCtorInfo_141_141;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TypeCtorInfo_142_142;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TypeCtorInfo_146_146;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TypeCtorInfo_149_149;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__LiveVars0_25;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__LiveVars_26;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__Path_27;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TailRecResetCode_28;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__VarSet_36;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__VarTypes_37;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TvarSet_39;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__VarInfoList_40;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ProduceCode_41;
#line 1031 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__MaxRegR_42;
#line 1031 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__MaxRegF_43;
#line 1031 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__MaxTraceRegR0_44;
#line 1031 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__MaxTraceRegF0_45;
#line 1031 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__MaxTraceRegR_46;
#line 1031 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__MaxTraceRegF_47;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__VarLocs_48;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ProcInfo_49;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TvarList_50;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__VarLvals_51;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TvarLocnSets_52;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TvarLocnSet_53;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TvarLocns_54;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TvarLvals_55;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__LiveLvals_56;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__LiveLvalSet_57;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__VarInfoSet_58;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__LayoutLabelInfo_59;
#line 1031 "trace_gen.m"
    MR_String ll_backend__trace_gen__TraceStmt0_60;
#line 1031 "trace_gen.m"
    MR_String ll_backend__trace_gen__TraceStmt_62;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceComponents_65;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceCode_66;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_71_71;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_76_76;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_77_77;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_80_80;
#line 1031 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_84_84;
#line 1031 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_85_85;
#line 1031 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_86_86;
#line 1031 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_88_88;
#line 1031 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_90_90;
#line 1031 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_91_91;
#line 1031 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_92_92;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_94_94;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_96_96;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_101_101;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_104_104;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_106_106;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_107_107;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_108_108;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_110_110;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_111_111;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_112_112;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_117_117;
#line 1031 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_124_124;
#line 1071 "trace_gen.m"
    MR_Word ll_backend__trace_gen__InstMap_38;
#line 1117 "trace_gen.m"
    MR_Word ll_backend__trace_gen__RedoLabel_64;
#line 1118 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceInfo_63;
#line 1118 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_97_97;
#line 1120 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_125_125;
#line 1120 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_126_126;
#line 1120 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_127_127;
#line 1120 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_128_128;
#line 1120 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_129_129;
#line 1120 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_130_130;
#line 1120 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_131_131;
#line 1120 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_132_132;

#line 1032 "trace_gen.m"
    {
#line 1032 "trace_gen.m"
      ll_backend__code_info__get_next_label_3_p_0(ll_backend__trace_gen__Label_20, ll_backend__trace_gen__STATE_VARIABLE_CI_0_67, &ll_backend__trace_gen__STATE_VARIABLE_CI_71_71);
    }
#line 1033 "trace_gen.m"
    {
#line 1033 "trace_gen.m"
      ll_backend__code_loc_dep__get_known_variables_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CLD_0_69, &ll_backend__trace_gen__LiveVars0_25);
    }
#line 1039 "trace_gen.m"
#line 1039 "trace_gen.m"
    switch (MR_tag((MR_Word) ll_backend__trace_gen__PortInfo_15)) {
#line 1039 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1039 "trace_gen.m"
      case (MR_Integer) 0:
#line 1035 "trace_gen.m"
        {
#line 1036 "trace_gen.m"
          ll_backend__trace_gen__LiveVars_26 = ll_backend__trace_gen__LiveVars0_25;
#line 1037 "trace_gen.m"
          ll_backend__trace_gen__Path_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1038 "trace_gen.m"
          {
#line 1038 "trace_gen.m"
            ll_backend__trace_gen__TailRecResetCode_28 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
#line 1035 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_CI_76_76 = ll_backend__trace_gen__STATE_VARIABLE_CI_71_71;
#line 1035 "trace_gen.m"
        }
#line 1039 "trace_gen.m"
        break;
#line 1039 "trace_gen.m"
      case (MR_Integer) 1:
#line 1040 "trace_gen.m"
        {
#line 1040 "trace_gen.m"
          MR_Word ll_backend__trace_gen__ArgsInfos_29;
#line 1040 "trace_gen.m"
          MR_Word ll_backend__trace_gen__OutputVars_30;

#line 1040 "trace_gen.m"
          ll_backend__trace_gen__Path_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__PortInfo_15, (MR_Integer) 0)));
#line 1040 "trace_gen.m"
          ll_backend__trace_gen__ArgsInfos_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__PortInfo_15, (MR_Integer) 1)));
#line 1043 "trace_gen.m"
          {
#line 1043 "trace_gen.m"
            ll_backend__trace_gen__find_output_vars_3_p_0(ll_backend__trace_gen__ArgsInfos_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__trace_gen__OutputVars_30);
          }
#line 1044 "trace_gen.m"
          {
#line 1044 "trace_gen.m"
            mercury__list__delete_elems_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[2], ll_backend__trace_gen__LiveVars0_25, ll_backend__trace_gen__OutputVars_30, &ll_backend__trace_gen__LiveVars_26);
          }
#line 1049 "trace_gen.m"
          if ((ll_backend__trace_gen__MaybeTraceInfo_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1050 "trace_gen.m"
            {
#line 1051 "trace_gen.m"
              {
#line 1051 "trace_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.generate_event_code\'/13", (MR_String) "tailrec call without TraceInfo");
#line 1051 "trace_gen.m"
                return;
              }
#line 1050 "trace_gen.m"
            }
#line 1049 "trace_gen.m"
          else
#line 1046 "trace_gen.m"
            {
#line 1046 "trace_gen.m"
              MR_Word ll_backend__trace_gen__TailRecTraceInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTraceInfo_16, (MR_Integer) 0)));

#line 1047 "trace_gen.m"
              {
#line 1047 "trace_gen.m"
                ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0(ll_backend__trace_gen__TailRecTraceInfo_31, &ll_backend__trace_gen__TailRecResetCode_28, ll_backend__trace_gen__STATE_VARIABLE_CI_71_71, &ll_backend__trace_gen__STATE_VARIABLE_CI_76_76);
              }
#line 1046 "trace_gen.m"
            }
#line 1040 "trace_gen.m"
        }
#line 1039 "trace_gen.m"
        break;
#line 1039 "trace_gen.m"
      case (MR_Integer) 2:
#line 1054 "trace_gen.m"
        {
#line 1054 "trace_gen.m"
          MR_Word ll_backend__trace_gen__TypeCtorInfo_135_135;
#line 1054 "trace_gen.m"
          MR_Word ll_backend__trace_gen__PreDeaths_32;
#line 1054 "trace_gen.m"
          MR_Word ll_backend__trace_gen__ResumeVars_33;
#line 1054 "trace_gen.m"
          MR_Word ll_backend__trace_gen__RealPreDeaths_34;
#line 1054 "trace_gen.m"
          MR_Word ll_backend__trace_gen__RealPreDeathList_35;

#line 1054 "trace_gen.m"
          ll_backend__trace_gen__Path_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__PortInfo_15, (MR_Integer) 0)));
#line 1054 "trace_gen.m"
          ll_backend__trace_gen__PreDeaths_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__PortInfo_15, (MR_Integer) 1)));
#line 1055 "trace_gen.m"
          {
#line 1055 "trace_gen.m"
            ll_backend__trace_gen__ResumeVars_33 = ll_backend__code_loc_dep__current_resume_point_vars_1_f_0(ll_backend__trace_gen__STATE_VARIABLE_CLD_0_69);
          }
#line 5029 "ll_backend.trace_gen.c"
          ll_backend__trace_gen__TypeCtorInfo_135_135 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1056 "trace_gen.m"
          {
#line 1056 "trace_gen.m"
            parse_tree__set_of_var__difference_3_p_0(ll_backend__trace_gen__TypeCtorInfo_135_135, ll_backend__trace_gen__PreDeaths_32, ll_backend__trace_gen__ResumeVars_33, &ll_backend__trace_gen__RealPreDeaths_34);
          }
#line 1057 "trace_gen.m"
          {
#line 1057 "trace_gen.m"
            ll_backend__trace_gen__RealPreDeathList_35 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__trace_gen__TypeCtorInfo_135_135, ll_backend__trace_gen__RealPreDeaths_34);
          }
#line 1058 "trace_gen.m"
          {
#line 1058 "trace_gen.m"
            mercury__list__delete_elems_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[2], ll_backend__trace_gen__LiveVars0_25, ll_backend__trace_gen__RealPreDeathList_35, &ll_backend__trace_gen__LiveVars_26);
          }
#line 1059 "trace_gen.m"
          {
#line 1059 "trace_gen.m"
            ll_backend__trace_gen__TailRecResetCode_28 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
#line 1054 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_CI_76_76 = ll_backend__trace_gen__STATE_VARIABLE_CI_71_71;
#line 1054 "trace_gen.m"
        }
#line 1039 "trace_gen.m"
        break;
#line 1039 "trace_gen.m"
      case (MR_Integer) 3:
#line 1039 "trace_gen.m"
#line 1039 "trace_gen.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__PortInfo_15, (MR_Integer) 0)))) {
#line 1039 "trace_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1039 "trace_gen.m"
          case (MR_Integer) 0:
#line 1061 "trace_gen.m"
            {
#line 1061 "trace_gen.m"
              ll_backend__trace_gen__Path_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__PortInfo_15, (MR_Integer) 1)));
#line 1062 "trace_gen.m"
              ll_backend__trace_gen__LiveVars_26 = ll_backend__trace_gen__LiveVars0_25;
#line 1063 "trace_gen.m"
              {
#line 1063 "trace_gen.m"
                ll_backend__trace_gen__TailRecResetCode_28 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 1061 "trace_gen.m"
              ll_backend__trace_gen__STATE_VARIABLE_CI_76_76 = ll_backend__trace_gen__STATE_VARIABLE_CI_71_71;
#line 1061 "trace_gen.m"
            }
#line 1039 "trace_gen.m"
            break;
#line 1039 "trace_gen.m"
          case (MR_Integer) 1:
#line 1065 "trace_gen.m"
            {
#line 1065 "trace_gen.m"
              ll_backend__trace_gen__Path_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__PortInfo_15, (MR_Integer) 1)));
#line 1066 "trace_gen.m"
              ll_backend__trace_gen__LiveVars_26 = ll_backend__trace_gen__LiveVars0_25;
#line 1067 "trace_gen.m"
              {
#line 1067 "trace_gen.m"
                ll_backend__trace_gen__TailRecResetCode_28 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 1065 "trace_gen.m"
              ll_backend__trace_gen__STATE_VARIABLE_CI_76_76 = ll_backend__trace_gen__STATE_VARIABLE_CI_71_71;
#line 1065 "trace_gen.m"
            }
#line 1039 "trace_gen.m"
            break;
#line 1039 "trace_gen.m"
        }
#line 1039 "trace_gen.m"
        break;
#line 1039 "trace_gen.m"
    }
#line 1069 "trace_gen.m"
    {
#line 1069 "trace_gen.m"
      ll_backend__code_info__get_varset_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_76_76, &ll_backend__trace_gen__VarSet_36);
    }
#line 1070 "trace_gen.m"
    {
#line 1070 "trace_gen.m"
      ll_backend__code_info__get_vartypes_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_76_76, &ll_backend__trace_gen__VarTypes_37);
    }
#line 1071 "trace_gen.m"
    {
#line 1071 "trace_gen.m"
      ll_backend__code_loc_dep__get_instmap_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CLD_0_69, &ll_backend__trace_gen__InstMap_38);
    }
#line 5123 "ll_backend.trace_gen.c"
    ll_backend__trace_gen__TypeInfo_140_140 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[3];
#line 1073 "trace_gen.m"
    {
#line 1073 "trace_gen.m"
      ll_backend__trace_gen__V_77_77 = mercury__set__init_0_f_0(ll_backend__trace_gen__TypeInfo_140_140);
    }
#line 1072 "trace_gen.m"
    {
#line 1072 "trace_gen.m"
      ll_backend__trace_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_13_p_0(ll_backend__trace_gen__LiveVars_26, ll_backend__trace_gen__VarSet_36, ll_backend__trace_gen__VarTypes_37, ll_backend__trace_gen__V_77_77, &ll_backend__trace_gen__TvarSet_39, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__trace_gen__VarInfoList_40, &ll_backend__trace_gen__ProduceCode_41, ll_backend__trace_gen__STATE_VARIABLE_CI_76_76, ll_backend__trace_gen__STATE_VARIABLE_CLD_0_69, ll_backend__trace_gen__STATE_VARIABLE_CLD_70);
    }
#line 1074 "trace_gen.m"
    {
#line 1074 "trace_gen.m"
      ll_backend__code_loc_dep__max_reg_in_use_3_p_0(*ll_backend__trace_gen__STATE_VARIABLE_CLD_70, &ll_backend__trace_gen__MaxRegR_42, &ll_backend__trace_gen__MaxRegF_43);
    }
#line 1075 "trace_gen.m"
    {
#line 1075 "trace_gen.m"
      ll_backend__code_info__get_max_regs_in_use_at_trace_3_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_76_76, &ll_backend__trace_gen__MaxTraceRegR0_44, &ll_backend__trace_gen__MaxTraceRegF0_45);
    }
#line 1076 "trace_gen.m"
    {
#line 1076 "trace_gen.m"
      mercury__int__max_3_p_0(ll_backend__trace_gen__MaxRegR_42, ll_backend__trace_gen__MaxTraceRegR0_44, &ll_backend__trace_gen__MaxTraceRegR_46);
    }
#line 1077 "trace_gen.m"
    {
#line 1077 "trace_gen.m"
      mercury__int__max_3_p_0(ll_backend__trace_gen__MaxRegF_43, ll_backend__trace_gen__MaxTraceRegF0_45, &ll_backend__trace_gen__MaxTraceRegF_47);
    }
#line 1079 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__MaxTraceRegR0_44 == ll_backend__trace_gen__MaxTraceRegR_46);
#line 1079 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 1080 "trace_gen.m"
      ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__MaxTraceRegF0_45 == ll_backend__trace_gen__MaxTraceRegF_47);
#line 1078 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 1078 "trace_gen.m"
      ll_backend__trace_gen__STATE_VARIABLE_CI_80_80 = ll_backend__trace_gen__STATE_VARIABLE_CI_76_76;
#line 1078 "trace_gen.m"
    else
#line 1084 "trace_gen.m"
      {
#line 1084 "trace_gen.m"
        ll_backend__code_info__set_max_regs_in_use_at_trace_4_p_0(ll_backend__trace_gen__MaxTraceRegR_46, ll_backend__trace_gen__MaxTraceRegF_47, ll_backend__trace_gen__STATE_VARIABLE_CI_76_76, &ll_backend__trace_gen__STATE_VARIABLE_CI_80_80);
      }
#line 1086 "trace_gen.m"
    {
#line 1086 "trace_gen.m"
      ll_backend__code_loc_dep__variable_locations_2_p_0(*ll_backend__trace_gen__STATE_VARIABLE_CLD_70, &ll_backend__trace_gen__VarLocs_48);
    }
#line 1087 "trace_gen.m"
    {
#line 1087 "trace_gen.m"
      ll_backend__code_info__get_proc_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_80_80, &ll_backend__trace_gen__ProcInfo_49);
    }
#line 1088 "trace_gen.m"
    {
#line 1088 "trace_gen.m"
      mercury__set__to_sorted_list_2_p_0(ll_backend__trace_gen__TypeInfo_140_140, ll_backend__trace_gen__TvarSet_39, &ll_backend__trace_gen__TvarList_50);
    }
#line 1089 "trace_gen.m"
    {
#line 1089 "trace_gen.m"
      ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0(ll_backend__trace_gen__TvarList_50, ll_backend__trace_gen__VarLocs_48, ll_backend__trace_gen__ProcInfo_49, ll_backend__trace_gen__TvarDataMap_21);
    }
#line 5192 "ll_backend.trace_gen.c"
    ll_backend__trace_gen__TypeCtorInfo_141_141 = (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0;
#line 5194 "ll_backend.trace_gen.c"
    ll_backend__trace_gen__TypeCtorInfo_142_142 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 1093 "trace_gen.m"
    {
#line 1093 "trace_gen.m"
      ll_backend__trace_gen__VarLvals_51 = mercury__list__map_2_f_0(ll_backend__trace_gen__TypeCtorInfo_141_141, ll_backend__trace_gen__TypeCtorInfo_142_142, (MR_Word) &ll_backend__trace_gen_scalar_common_2[6], ll_backend__trace_gen__VarInfoList_40);
    }
#line 1094 "trace_gen.m"
    {
#line 1094 "trace_gen.m"
      mercury__map__values_2_p_0(ll_backend__trace_gen__TypeInfo_140_140, (MR_Word) &ll_backend__trace_gen_scalar_common_1[4], *ll_backend__trace_gen__TvarDataMap_21, &ll_backend__trace_gen__TvarLocnSets_52);
    }
#line 5206 "ll_backend.trace_gen.c"
    ll_backend__trace_gen__TypeCtorInfo_146_146 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0;
#line 1095 "trace_gen.m"
    {
#line 1095 "trace_gen.m"
      ll_backend__trace_gen__TvarLocnSet_53 = mercury__set__union_list_1_f_0(ll_backend__trace_gen__TypeCtorInfo_146_146, ll_backend__trace_gen__TvarLocnSets_52);
    }
#line 1096 "trace_gen.m"
    {
#line 1096 "trace_gen.m"
      mercury__set__to_sorted_list_2_p_0(ll_backend__trace_gen__TypeCtorInfo_146_146, ll_backend__trace_gen__TvarLocnSet_53, &ll_backend__trace_gen__TvarLocns_54);
    }
#line 1097 "trace_gen.m"
    {
#line 1097 "trace_gen.m"
      ll_backend__trace_gen__TvarLvals_55 = mercury__list__map_2_f_0(ll_backend__trace_gen__TypeCtorInfo_146_146, ll_backend__trace_gen__TypeCtorInfo_142_142, (MR_Word) &ll_backend__trace_gen_scalar_common_2[7], ll_backend__trace_gen__TvarLocns_54);
    }
#line 1098 "trace_gen.m"
    {
#line 1098 "trace_gen.m"
      mercury__list__append_3_p_1(ll_backend__trace_gen__TypeCtorInfo_142_142, ll_backend__trace_gen__VarLvals_51, ll_backend__trace_gen__TvarLvals_55, &ll_backend__trace_gen__LiveLvals_56);
    }
#line 1099 "trace_gen.m"
    {
#line 1099 "trace_gen.m"
      ll_backend__trace_gen__LiveLvalSet_57 = mercury__set__list_to_set_1_f_0(ll_backend__trace_gen__TypeCtorInfo_142_142, ll_backend__trace_gen__LiveLvals_56);
    }
#line 1101 "trace_gen.m"
    {
#line 1101 "trace_gen.m"
      mercury__set__list_to_set_2_p_0(ll_backend__trace_gen__TypeCtorInfo_141_141, ll_backend__trace_gen__VarInfoList_40, &ll_backend__trace_gen__VarInfoSet_58);
    }
#line 1102 "trace_gen.m"
    {
#line 1102 "trace_gen.m"
      ll_backend__trace_gen__LayoutLabelInfo_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1102 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__LayoutLabelInfo_59, 0) = ((MR_Box) (ll_backend__trace_gen__VarInfoSet_58));
#line 1102 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__LayoutLabelInfo_59, 1) = ((MR_Box) (*ll_backend__trace_gen__TvarDataMap_21));
#line 1102 "trace_gen.m"
    }
#line 1106 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeUserInfo_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1105 "trace_gen.m"
      ll_backend__trace_gen__TraceStmt0_60 = (MR_String) "\t\tMR_EVENT_SYS\n";
#line 1106 "trace_gen.m"
    else
#line 1108 "trace_gen.m"
      ll_backend__trace_gen__TraceStmt0_60 = (MR_String) "\t\tMR_EVENT_USER\n";
#line 1110 "trace_gen.m"
    {
#line 1110 "trace_gen.m"
      ll_backend__trace_gen__V_85_85 = ll_backend__layout_out__trace_port_to_string_1_f_0(ll_backend__trace_gen__Port_14);
    }
#line 1111 "trace_gen.m"
    {
#line 1111 "trace_gen.m"
      ll_backend__trace_gen__V_91_91 = mdbcomp__goal_path__goal_path_to_string_1_f_0(ll_backend__trace_gen__Path_27);
    }
#line 1111 "trace_gen.m"
    {
#line 1111 "trace_gen.m"
      ll_backend__trace_gen__V_92_92 = mercury__string__f_43_43_2_f_0((MR_String) "> */\n", ll_backend__trace_gen__TraceStmt0_60);
    }
#line 1111 "trace_gen.m"
    {
#line 1111 "trace_gen.m"
      ll_backend__trace_gen__V_90_90 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__V_91_91, ll_backend__trace_gen__V_92_92);
    }
#line 1111 "trace_gen.m"
    {
#line 1111 "trace_gen.m"
      ll_backend__trace_gen__V_88_88 = mercury__string__f_43_43_2_f_0((MR_String) "path <", ll_backend__trace_gen__V_90_90);
    }
#line 1110 "trace_gen.m"
    {
#line 1110 "trace_gen.m"
      ll_backend__trace_gen__V_86_86 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__trace_gen__V_88_88);
    }
#line 1110 "trace_gen.m"
    {
#line 1110 "trace_gen.m"
      ll_backend__trace_gen__V_84_84 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__V_85_85, ll_backend__trace_gen__V_86_86);
    }
#line 1110 "trace_gen.m"
    {
#line 1110 "trace_gen.m"
      ll_backend__trace_gen__TraceStmt_62 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t/* port ", ll_backend__trace_gen__V_84_84);
    }
#line 1114 "trace_gen.m"
    {
#line 1114 "trace_gen.m"
      ll_backend__code_info__add_trace_layout_for_label_9_p_0(*ll_backend__trace_gen__Label_20, ll_backend__trace_gen__Context_17, ll_backend__trace_gen__Port_14, ll_backend__trace_gen__HideEvent_18, ll_backend__trace_gen__Path_27, ll_backend__trace_gen__MaybeUserInfo_19, ll_backend__trace_gen__LayoutLabelInfo_59, ll_backend__trace_gen__STATE_VARIABLE_CI_80_80, &ll_backend__trace_gen__STATE_VARIABLE_CI_94_94);
    }
#line 1116 "trace_gen.m"
    {
#line 1116 "trace_gen.m"
      ll_backend__code_info__set_proc_trace_events_3_p_0((MR_Integer) 1, ll_backend__trace_gen__STATE_VARIABLE_CI_94_94, &ll_backend__trace_gen__STATE_VARIABLE_CI_96_96);
    }
#line 1118 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__Port_14 == (MR_Integer) 3);
#line 1118 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 1118 "trace_gen.m"
      {
#line 1119 "trace_gen.m"
        ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__MaybeTraceInfo_16)) == (MR_mktag((MR_Integer) 1)));
#line 1119 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 1119 "trace_gen.m"
          {
#line 1119 "trace_gen.m"
            ll_backend__trace_gen__TraceInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTraceInfo_16, (MR_Integer) 0)));
#line 1120 "trace_gen.m"
            ll_backend__trace_gen__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 0)));
#line 1120 "trace_gen.m"
            ll_backend__trace_gen__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 1)));
#line 1120 "trace_gen.m"
            ll_backend__trace_gen__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 2)));
#line 1120 "trace_gen.m"
            ll_backend__trace_gen__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 3)));
#line 1120 "trace_gen.m"
            ll_backend__trace_gen__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 4)));
#line 1120 "trace_gen.m"
            ll_backend__trace_gen__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 5)));
#line 1120 "trace_gen.m"
            ll_backend__trace_gen__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 6)));
#line 1120 "trace_gen.m"
            ll_backend__trace_gen__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 7)));
#line 1120 "trace_gen.m"
            ll_backend__trace_gen__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 8)));
#line 1120 "trace_gen.m"
            ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__V_97_97)) == (MR_mktag((MR_Integer) 1)));
#line 1120 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 1120 "trace_gen.m"
              ll_backend__trace_gen__RedoLabel_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_97_97, (MR_Integer) 0)));
#line 1119 "trace_gen.m"
          }
#line 1118 "trace_gen.m"
      }
#line 1117 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 1131 "trace_gen.m"
      {
#line 1131 "trace_gen.m"
        {
#line 1131 "trace_gen.m"
          ll_backend__code_info__add_trace_layout_for_label_9_p_0(ll_backend__trace_gen__RedoLabel_64, ll_backend__trace_gen__Context_17, (MR_Integer) 2, ll_backend__trace_gen__HideEvent_18, ll_backend__trace_gen__Path_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__trace_gen__LayoutLabelInfo_59, ll_backend__trace_gen__STATE_VARIABLE_CI_96_96, ll_backend__trace_gen__STATE_VARIABLE_CI_68);
        }
#line 1131 "trace_gen.m"
      }
#line 1117 "trace_gen.m"
    else
#line 1117 "trace_gen.m"
      *ll_backend__trace_gen__STATE_VARIABLE_CI_68 = ll_backend__trace_gen__STATE_VARIABLE_CI_96_96;
#line 1137 "trace_gen.m"
    {
#line 1137 "trace_gen.m"
      ll_backend__trace_gen__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1137 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_104_104, 0) = ((MR_Box) (ll_backend__trace_gen__LiveLvalSet_57));
#line 1137 "trace_gen.m"
    }
#line 1136 "trace_gen.m"
    {
#line 1136 "trace_gen.m"
      ll_backend__trace_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1136 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_101_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1136 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_101_101, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1136 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_101_101, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1136 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_101_101, 3) = ((MR_Box) (ll_backend__trace_gen__V_104_104));
#line 1136 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_101_101, 4) = ((MR_Box) (ll_backend__trace_gen__TraceStmt_62));
#line 1136 "trace_gen.m"
    }
#line 1138 "trace_gen.m"
    {
#line 1138 "trace_gen.m"
      ll_backend__trace_gen__TraceComponents_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1138 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents_65, 0) = ((MR_Box) (ll_backend__trace_gen__V_101_101));
#line 1138 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1138 "trace_gen.m"
    }
#line 5397 "ll_backend.trace_gen.c"
    ll_backend__trace_gen__TypeCtorInfo_149_149 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 1141 "trace_gen.m"
    {
#line 1141 "trace_gen.m"
      ll_backend__trace_gen__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1141 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1141 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_108_108, 1) = ((MR_Box) (*ll_backend__trace_gen__Label_20));
#line 1141 "trace_gen.m"
    }
#line 1141 "trace_gen.m"
    {
#line 1141 "trace_gen.m"
      ll_backend__trace_gen__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1141 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_107_107, 0) = ((MR_Box) (ll_backend__trace_gen__V_108_108));
#line 1141 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_107_107, 1) = ((MR_Box) ((MR_String) "A label to hang trace liveness on"));
#line 1141 "trace_gen.m"
    }
#line 1149 "trace_gen.m"
    {
#line 1149 "trace_gen.m"
      ll_backend__trace_gen__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_117_117, 0) = ((MR_Box) (*ll_backend__trace_gen__Label_20));
#line 1149 "trace_gen.m"
    }
#line 1148 "trace_gen.m"
    {
#line 1148 "trace_gen.m"
      ll_backend__trace_gen__V_112_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 1148 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1148 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 2) = ((MR_Box) (ll_backend__trace_gen__TraceComponents_65));
#line 1148 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1148 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1148 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1148 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 6) = ((MR_Box) (ll_backend__trace_gen__V_117_117));
#line 1148 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1148 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 8) = ((MR_Box) (ll_backend__trace_gen__V_117_117));
#line 1148 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 9) = ((MR_Box) ((MR_Integer) 1));
#line 1148 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 10) = ((MR_Box) ((MR_Integer) 1));
#line 1148 "trace_gen.m"
    }
#line 1148 "trace_gen.m"
    {
#line 1148 "trace_gen.m"
      ll_backend__trace_gen__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1148 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_111_111, 0) = ((MR_Box) (ll_backend__trace_gen__V_112_112));
#line 1148 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_111_111, 1) = ((MR_Box) ((MR_String) ""));
#line 1148 "trace_gen.m"
    }
#line 1151 "trace_gen.m"
    {
#line 1151 "trace_gen.m"
      ll_backend__trace_gen__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_110_110, 0) = ((MR_Box) (ll_backend__trace_gen__V_111_111));
#line 1151 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1151 "trace_gen.m"
    }
#line 1142 "trace_gen.m"
    {
#line 1142 "trace_gen.m"
      ll_backend__trace_gen__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1142 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_106_106, 0) = ((MR_Box) (ll_backend__trace_gen__V_107_107));
#line 1142 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_106_106, 1) = ((MR_Box) (ll_backend__trace_gen__V_110_110));
#line 1142 "trace_gen.m"
    }
#line 1140 "trace_gen.m"
    {
#line 1140 "trace_gen.m"
      ll_backend__trace_gen__TraceCode_66 = mercury__cord__from_list_1_f_0(ll_backend__trace_gen__TypeCtorInfo_149_149, ll_backend__trace_gen__V_106_106);
    }
#line 1152 "trace_gen.m"
    {
#line 1152 "trace_gen.m"
      ll_backend__trace_gen__V_124_124 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_149_149, ll_backend__trace_gen__TailRecResetCode_28, ll_backend__trace_gen__TraceCode_66);
    }
#line 1152 "trace_gen.m"
    {
#line 1152 "trace_gen.m"
      *ll_backend__trace_gen__Code_22 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_149_149, ll_backend__trace_gen__ProduceCode_41, ll_backend__trace_gen__V_124_124);
    }
#line 1031 "trace_gen.m"
  }
#line 1024 "trace_gen.m"
}

#line 953 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_2(
#line 953 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg)
#line 953 "trace_gen.m"
{
#line 953 "trace_gen.m"
  {
#line 953 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 953 "trace_gen.m"
    MR_Box ll_backend__trace_gen__closure = ll_backend__trace_gen__closure_arg;

#line 953 "trace_gen.m"
    {
#line 953 "trace_gen.m"
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__953__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__closure, (MR_Integer) 4))));
    }
#line 953 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 953 "trace_gen.m"
  }
#line 953 "trace_gen.m"
}

#line 947 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_1(
#line 947 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg)
#line 947 "trace_gen.m"
{
#line 947 "trace_gen.m"
  {
#line 947 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 947 "trace_gen.m"
    MR_Box ll_backend__trace_gen__closure = ll_backend__trace_gen__closure_arg;

#line 947 "trace_gen.m"
    {
#line 947 "trace_gen.m"
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__947__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__closure, (MR_Integer) 4))));
    }
#line 947 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 947 "trace_gen.m"
  }
#line 947 "trace_gen.m"
}

#line 927 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0(
#line 927 "trace_gen.m"
  MR_Word ll_backend__trace_gen__TraceInfo_5,
#line 927 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_6,
#line 927 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_42,
#line 927 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_43)
#line 927 "trace_gen.m"
{
#line 930 "trace_gen.m"
  {
#line 930 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 930 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TypeCtorInfo_179_179;
#line 930 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CodeModel_8;
#line 930 "trace_gen.m"
    MR_Word ll_backend__trace_gen__EventNumLval_9;
#line 930 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CallNumLval_10;
#line 930 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CallDepthLval_11;
#line 930 "trace_gen.m"
    MR_String ll_backend__trace_gen__EventNumStr_12;
#line 930 "trace_gen.m"
    MR_String ll_backend__trace_gen__CallNumStr_13;
#line 930 "trace_gen.m"
    MR_String ll_backend__trace_gen__CallDepthStr_14;
#line 930 "trace_gen.m"
    MR_String ll_backend__trace_gen__StdSlotCodeStr_15;
#line 930 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeRedoLabelLval_16;
#line 930 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeFromFullLval_17;
#line 930 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeIoSeqSlot_18;
#line 930 "trace_gen.m"
    MR_String ll_backend__trace_gen__IoSeqCodeStr_21;
#line 930 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTrailLvals_22;
#line 930 "trace_gen.m"
    MR_String ll_backend__trace_gen__TrailCodeStr_27;
#line 930 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeMaxfrLval_28;
#line 930 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaxfrCode_30;
#line 930 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TailRecInfo_31;
#line 930 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TailRecLvalCode_34;
#line 930 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeCallTableLval_35;
#line 930 "trace_gen.m"
    MR_String ll_backend__trace_gen__CallTableCodeStr_38;
#line 930 "trace_gen.m"
    MR_String ll_backend__trace_gen__ForeignLangCodeStr_39;
#line 930 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ForeignLangComponents_40;
#line 930 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ForeignLangCode_41;
#line 930 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_45_45;
#line 930 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_46_46;
#line 930 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_48_48;
#line 930 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_49_49;
#line 930 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_51_51;
#line 930 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_53_53;
#line 930 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_58_58;
#line 930 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_96_96;
#line 930 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_97_97;
#line 930 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_98_98;
#line 930 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_101_101;
#line 930 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_102_102;
#line 930 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_104_104;
#line 930 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_105_105;
#line 930 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_116_116;
#line 946 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_117_117;
#line 946 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_118_118;
#line 946 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_119_119;
#line 946 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_120_120;
#line 946 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_121_121;
#line 946 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_122_122;
#line 946 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_123_123;
#line 946 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_124_124;
#line 952 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_125_125;
#line 952 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_126_126;
#line 952 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_127_127;
#line 952 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_128_128;
#line 952 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_129_129;
#line 952 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_130_130;
#line 952 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_131_131;
#line 952 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_132_132;
#line 956 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_133_133;
#line 956 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_134_134;
#line 956 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_135_135;
#line 956 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_140_140;

#line 934 "trace_gen.m"
    {
#line 934 "trace_gen.m"
      ll_backend__trace_gen__CodeModel_8 = ll_backend__code_info__get_proc_model_1_f_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_42);
    }
#line 935 "trace_gen.m"
    {
#line 935 "trace_gen.m"
      ll_backend__trace_gen__event_num_slot_2_p_0(ll_backend__trace_gen__CodeModel_8, &ll_backend__trace_gen__EventNumLval_9);
    }
#line 936 "trace_gen.m"
    {
#line 936 "trace_gen.m"
      ll_backend__trace_gen__call_num_slot_2_p_0(ll_backend__trace_gen__CodeModel_8, &ll_backend__trace_gen__CallNumLval_10);
    }
#line 937 "trace_gen.m"
    {
#line 937 "trace_gen.m"
      ll_backend__trace_gen__call_depth_slot_2_p_0(ll_backend__trace_gen__CodeModel_8, &ll_backend__trace_gen__CallDepthLval_11);
    }
#line 938 "trace_gen.m"
    {
#line 938 "trace_gen.m"
      ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__EventNumLval_9, &ll_backend__trace_gen__EventNumStr_12);
    }
#line 939 "trace_gen.m"
    {
#line 939 "trace_gen.m"
      ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallNumLval_10, &ll_backend__trace_gen__CallNumStr_13);
    }
#line 940 "trace_gen.m"
    {
#line 940 "trace_gen.m"
      ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallDepthLval_11, &ll_backend__trace_gen__CallDepthStr_14);
    }
#line 942 "trace_gen.m"
    {
#line 942 "trace_gen.m"
      ll_backend__trace_gen__V_51_51 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallDepthStr_14, (MR_String) ");\n");
    }
#line 942 "trace_gen.m"
    {
#line 942 "trace_gen.m"
      ll_backend__trace_gen__V_49_49 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__trace_gen__V_51_51);
    }
#line 942 "trace_gen.m"
    {
#line 942 "trace_gen.m"
      ll_backend__trace_gen__V_48_48 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallNumStr_13, ll_backend__trace_gen__V_49_49);
    }
#line 942 "trace_gen.m"
    {
#line 942 "trace_gen.m"
      ll_backend__trace_gen__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__trace_gen__V_48_48);
    }
#line 942 "trace_gen.m"
    {
#line 942 "trace_gen.m"
      ll_backend__trace_gen__V_45_45 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__EventNumStr_12, ll_backend__trace_gen__V_46_46);
    }
#line 941 "trace_gen.m"
    {
#line 941 "trace_gen.m"
      ll_backend__trace_gen__StdSlotCodeStr_15 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_trace_tailrec_std_slots(", ll_backend__trace_gen__V_45_45);
    }
#line 946 "trace_gen.m"
    ll_backend__trace_gen__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 0)));
#line 946 "trace_gen.m"
    ll_backend__trace_gen__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 1)));
#line 946 "trace_gen.m"
    ll_backend__trace_gen__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 2)));
#line 946 "trace_gen.m"
    ll_backend__trace_gen__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 3)));
#line 946 "trace_gen.m"
    ll_backend__trace_gen__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 4)));
#line 946 "trace_gen.m"
    ll_backend__trace_gen__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 5)));
#line 946 "trace_gen.m"
    ll_backend__trace_gen__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 6)));
#line 946 "trace_gen.m"
    ll_backend__trace_gen__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 7)));
#line 946 "trace_gen.m"
    ll_backend__trace_gen__MaybeRedoLabelLval_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 8)));
#line 947 "trace_gen.m"
    {
#line 947 "trace_gen.m"
      ll_backend__trace_gen__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 947 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_53_53, 0) = ((MR_Box) (&ll_backend__trace_gen_scalar_common_5[1]));
#line 947 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_53_53, 1) = ((MR_Box) (ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_1));
#line 947 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 947 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_53_53, 3) = ((MR_Box) (ll_backend__trace_gen__MaybeRedoLabelLval_16));
#line 947 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_53_53, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 947 "trace_gen.m"
    }
#line 947 "trace_gen.m"
    {
#line 947 "trace_gen.m"
      mercury__require__expect_4_p_0(ll_backend__trace_gen__V_53_53, (MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.generate_tailrec_reset_slots_code\'/4", (MR_String) "redo label in procedure with TAIL event");
    }
#line 952 "trace_gen.m"
    ll_backend__trace_gen__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 0)));
#line 952 "trace_gen.m"
    ll_backend__trace_gen__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 1)));
#line 952 "trace_gen.m"
    ll_backend__trace_gen__MaybeFromFullLval_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 2)));
#line 952 "trace_gen.m"
    ll_backend__trace_gen__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 3)));
#line 952 "trace_gen.m"
    ll_backend__trace_gen__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 4)));
#line 952 "trace_gen.m"
    ll_backend__trace_gen__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 5)));
#line 952 "trace_gen.m"
    ll_backend__trace_gen__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 6)));
#line 952 "trace_gen.m"
    ll_backend__trace_gen__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 7)));
#line 952 "trace_gen.m"
    ll_backend__trace_gen__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 8)));
#line 953 "trace_gen.m"
    {
#line 953 "trace_gen.m"
      ll_backend__trace_gen__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 953 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_58_58, 0) = ((MR_Box) (&ll_backend__trace_gen_scalar_common_5[2]));
#line 953 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_58_58, 1) = ((MR_Box) (ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_2));
#line 953 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 953 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_58_58, 3) = ((MR_Box) (ll_backend__trace_gen__MaybeFromFullLval_17));
#line 953 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_58_58, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 953 "trace_gen.m"
    }
#line 953 "trace_gen.m"
    {
#line 953 "trace_gen.m"
      mercury__require__expect_4_p_0(ll_backend__trace_gen__V_58_58, (MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.generate_tailrec_reset_slots_code\'/4", (MR_String) "from_full slot in procedure with TAIL event");
    }
#line 956 "trace_gen.m"
    ll_backend__trace_gen__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 0)));
#line 956 "trace_gen.m"
    ll_backend__trace_gen__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 1)));
#line 956 "trace_gen.m"
    ll_backend__trace_gen__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 2)));
#line 956 "trace_gen.m"
    ll_backend__trace_gen__MaybeIoSeqSlot_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 3)));
#line 956 "trace_gen.m"
    ll_backend__trace_gen__MaybeTrailLvals_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 4)));
#line 956 "trace_gen.m"
    ll_backend__trace_gen__MaybeMaxfrLval_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 5)));
#line 956 "trace_gen.m"
    ll_backend__trace_gen__MaybeCallTableLval_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 6)));
#line 956 "trace_gen.m"
    ll_backend__trace_gen__TailRecInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 7)));
#line 956 "trace_gen.m"
    ll_backend__trace_gen__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 8)));
#line 961 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeIoSeqSlot_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 963 "trace_gen.m"
      ll_backend__trace_gen__IoSeqCodeStr_21 = (MR_String) "";
#line 961 "trace_gen.m"
    else
#line 958 "trace_gen.m"
      {
#line 958 "trace_gen.m"
        MR_Word ll_backend__trace_gen__IoSeqLval_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeIoSeqSlot_18, (MR_Integer) 0)));
#line 958 "trace_gen.m"
        MR_String ll_backend__trace_gen__IoSeqStr_20;
#line 958 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_64_64;

#line 959 "trace_gen.m"
        {
#line 959 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__IoSeqLval_19, &ll_backend__trace_gen__IoSeqStr_20);
        }
#line 960 "trace_gen.m"
        {
#line 960 "trace_gen.m"
          ll_backend__trace_gen__V_64_64 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__IoSeqStr_20, (MR_String) " = MR_io_tabling_counter;\n");
        }
#line 960 "trace_gen.m"
        {
#line 960 "trace_gen.m"
          ll_backend__trace_gen__IoSeqCodeStr_21 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__trace_gen__V_64_64);
        }
#line 958 "trace_gen.m"
      }
#line 974 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeTrailLvals_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 976 "trace_gen.m"
      ll_backend__trace_gen__TrailCodeStr_27 = (MR_String) "";
#line 974 "trace_gen.m"
    else
#line 968 "trace_gen.m"
      {
#line 968 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TrailLval_23;
#line 968 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TicketLval_24;
#line 968 "trace_gen.m"
        MR_String ll_backend__trace_gen__TrailLvalStr_25;
#line 968 "trace_gen.m"
        MR_String ll_backend__trace_gen__TicketLvalStr_26;
#line 968 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTrailLvals_22, (MR_Integer) 0)));
#line 968 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_68_68;
#line 968 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_69_69;
#line 968 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_71_71;
#line 968 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_73_73;

#line 968 "trace_gen.m"
        ll_backend__trace_gen__TrailLval_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_66_66, (MR_Integer) 0)));
#line 968 "trace_gen.m"
        ll_backend__trace_gen__TicketLval_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_66_66, (MR_Integer) 1)));
#line 969 "trace_gen.m"
        {
#line 969 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__TrailLval_23, &ll_backend__trace_gen__TrailLvalStr_25);
        }
#line 970 "trace_gen.m"
        {
#line 970 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__TicketLval_24, &ll_backend__trace_gen__TicketLvalStr_26);
        }
#line 973 "trace_gen.m"
        {
#line 973 "trace_gen.m"
          ll_backend__trace_gen__V_73_73 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TrailLvalStr_25, (MR_String) ");\n");
        }
#line 973 "trace_gen.m"
        {
#line 973 "trace_gen.m"
          ll_backend__trace_gen__V_71_71 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_store_ticket(", ll_backend__trace_gen__V_73_73);
        }
#line 972 "trace_gen.m"
        {
#line 972 "trace_gen.m"
          ll_backend__trace_gen__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) ");\n", ll_backend__trace_gen__V_71_71);
        }
#line 972 "trace_gen.m"
        {
#line 972 "trace_gen.m"
          ll_backend__trace_gen__V_68_68 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TicketLvalStr_26, ll_backend__trace_gen__V_69_69);
        }
#line 972 "trace_gen.m"
        {
#line 972 "trace_gen.m"
          ll_backend__trace_gen__TrailCodeStr_27 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_mark_ticket_stack(", ll_backend__trace_gen__V_68_68);
        }
#line 968 "trace_gen.m"
      }
#line 985 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeMaxfrLval_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 986 "trace_gen.m"
      {
#line 987 "trace_gen.m"
        {
#line 987 "trace_gen.m"
          ll_backend__trace_gen__MaxfrCode_30 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 986 "trace_gen.m"
      }
#line 985 "trace_gen.m"
    else
#line 981 "trace_gen.m"
      {
#line 981 "trace_gen.m"
        MR_Word ll_backend__trace_gen__MaxfrLval_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeMaxfrLval_28, (MR_Integer) 0)));
#line 981 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_75_75;
#line 981 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_76_76;

#line 983 "trace_gen.m"
        {
#line 983 "trace_gen.m"
          ll_backend__trace_gen__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 983 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 983 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_76_76, 1) = ((MR_Box) (ll_backend__trace_gen__MaxfrLval_29));
#line 983 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_76_76, 2) = ((MR_Box) (&ll_backend__trace_gen_scalar_common_3[3]));
#line 983 "trace_gen.m"
        }
#line 983 "trace_gen.m"
        {
#line 983 "trace_gen.m"
          ll_backend__trace_gen__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 983 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_75_75, 0) = ((MR_Box) (ll_backend__trace_gen__V_76_76));
#line 983 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_75_75, 1) = ((MR_Box) ((MR_String) "save initial maxfr"));
#line 983 "trace_gen.m"
        }
#line 982 "trace_gen.m"
        {
#line 982 "trace_gen.m"
          ll_backend__trace_gen__MaxfrCode_30 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__trace_gen__V_75_75)));
        }
#line 981 "trace_gen.m"
      }
#line 998 "trace_gen.m"
    if ((ll_backend__trace_gen__TailRecInfo_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 999 "trace_gen.m"
      {
#line 1000 "trace_gen.m"
        {
#line 1000 "trace_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.generate_tailrec_reset_slots_code\'/4", (MR_String) "no tail rec lval");
#line 1000 "trace_gen.m"
          return;
        }
#line 999 "trace_gen.m"
      }
#line 998 "trace_gen.m"
    else
#line 992 "trace_gen.m"
      {
#line 992 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TailRecLval_32;
#line 992 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TailRecInfo_31, (MR_Integer) 0)));
#line 992 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_84_84;
#line 992 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_85_85;
#line 992 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_86_86;
#line 992 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_88_88;
#line 992 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_33_33;

#line 992 "trace_gen.m"
        ll_backend__trace_gen__TailRecLval_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_83_83, (MR_Integer) 0)));
#line 992 "trace_gen.m"
        ll_backend__trace_gen__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_83_83, (MR_Integer) 1)));
#line 995 "trace_gen.m"
        {
#line 995 "trace_gen.m"
          ll_backend__trace_gen__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 995 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_88_88, 0) = ((MR_Box) (ll_backend__trace_gen__TailRecLval_32));
#line 995 "trace_gen.m"
        }
#line 995 "trace_gen.m"
        {
#line 995 "trace_gen.m"
          ll_backend__trace_gen__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 995 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 995 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 995 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_86_86, 2) = ((MR_Box) (ll_backend__trace_gen__V_88_88));
#line 995 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_86_86, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[17])));
#line 995 "trace_gen.m"
        }
#line 994 "trace_gen.m"
        {
#line 994 "trace_gen.m"
          ll_backend__trace_gen__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 994 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 994 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_85_85, 1) = ((MR_Box) (ll_backend__trace_gen__TailRecLval_32));
#line 994 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_85_85, 2) = ((MR_Box) (ll_backend__trace_gen__V_86_86));
#line 994 "trace_gen.m"
        }
#line 994 "trace_gen.m"
        {
#line 994 "trace_gen.m"
          ll_backend__trace_gen__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 994 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_84_84, 0) = ((MR_Box) (ll_backend__trace_gen__V_85_85));
#line 994 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_84_84, 1) = ((MR_Box) ((MR_String) "increment tail recursion counter"));
#line 994 "trace_gen.m"
        }
#line 993 "trace_gen.m"
        {
#line 993 "trace_gen.m"
          ll_backend__trace_gen__TailRecLvalCode_34 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__trace_gen__V_84_84)));
        }
#line 992 "trace_gen.m"
      }
#line 1008 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeCallTableLval_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1010 "trace_gen.m"
      ll_backend__trace_gen__CallTableCodeStr_38 = (MR_String) "";
#line 1008 "trace_gen.m"
    else
#line 1005 "trace_gen.m"
      {
#line 1005 "trace_gen.m"
        MR_Word ll_backend__trace_gen__CallTableLval_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeCallTableLval_35, (MR_Integer) 0)));
#line 1005 "trace_gen.m"
        MR_String ll_backend__trace_gen__CallTableLvalStr_37;
#line 1005 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_94_94;

#line 1006 "trace_gen.m"
        {
#line 1006 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallTableLval_36, &ll_backend__trace_gen__CallTableLvalStr_37);
        }
#line 1007 "trace_gen.m"
        {
#line 1007 "trace_gen.m"
          ll_backend__trace_gen__V_94_94 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallTableLvalStr_37, (MR_String) " = 0;\n");
        }
#line 1007 "trace_gen.m"
        {
#line 1007 "trace_gen.m"
          ll_backend__trace_gen__CallTableCodeStr_38 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__trace_gen__V_94_94);
        }
#line 1005 "trace_gen.m"
      }
#line 1012 "trace_gen.m"
    {
#line 1012 "trace_gen.m"
      ll_backend__trace_gen__V_97_97 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TrailCodeStr_27, ll_backend__trace_gen__CallTableCodeStr_38);
    }
#line 1012 "trace_gen.m"
    {
#line 1012 "trace_gen.m"
      ll_backend__trace_gen__V_96_96 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__IoSeqCodeStr_21, ll_backend__trace_gen__V_97_97);
    }
#line 1012 "trace_gen.m"
    {
#line 1012 "trace_gen.m"
      ll_backend__trace_gen__ForeignLangCodeStr_39 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__StdSlotCodeStr_15, ll_backend__trace_gen__V_96_96);
    }
#line 1015 "trace_gen.m"
    {
#line 1015 "trace_gen.m"
      ll_backend__trace_gen__V_102_102 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
    }
#line 1015 "trace_gen.m"
    {
#line 1015 "trace_gen.m"
      ll_backend__trace_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_101_101, 0) = ((MR_Box) (ll_backend__trace_gen__V_102_102));
#line 1015 "trace_gen.m"
    }
#line 1014 "trace_gen.m"
    {
#line 1014 "trace_gen.m"
      ll_backend__trace_gen__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1014 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1014 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1014 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 3) = ((MR_Box) (ll_backend__trace_gen__V_101_101));
#line 1014 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 4) = ((MR_Box) (ll_backend__trace_gen__ForeignLangCodeStr_39));
#line 1014 "trace_gen.m"
    }
#line 1016 "trace_gen.m"
    {
#line 1016 "trace_gen.m"
      ll_backend__trace_gen__ForeignLangComponents_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__ForeignLangComponents_40, 0) = ((MR_Box) (ll_backend__trace_gen__V_98_98));
#line 1016 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__ForeignLangComponents_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1016 "trace_gen.m"
    }
#line 6178 "ll_backend.trace_gen.c"
    ll_backend__trace_gen__TypeCtorInfo_179_179 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 1018 "trace_gen.m"
    {
#line 1018 "trace_gen.m"
      ll_backend__trace_gen__V_105_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 1018 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 1018 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1018 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 2) = ((MR_Box) (ll_backend__trace_gen__ForeignLangComponents_40));
#line 1018 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 3) = ((MR_Box) ((MR_Integer) 1));
#line 1018 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1018 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1018 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1018 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1018 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1018 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 9) = ((MR_Box) ((MR_Integer) 1));
#line 1018 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 10) = ((MR_Box) ((MR_Integer) 0));
#line 1018 "trace_gen.m"
    }
#line 1018 "trace_gen.m"
    {
#line 1018 "trace_gen.m"
      ll_backend__trace_gen__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1018 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_104_104, 0) = ((MR_Box) (ll_backend__trace_gen__V_105_105));
#line 1018 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_104_104, 1) = ((MR_Box) ((MR_String) ""));
#line 1018 "trace_gen.m"
    }
#line 1017 "trace_gen.m"
    {
#line 1017 "trace_gen.m"
      ll_backend__trace_gen__ForeignLangCode_41 = mercury__cord__singleton_1_f_0(ll_backend__trace_gen__TypeCtorInfo_179_179, ((MR_Box) (ll_backend__trace_gen__V_104_104)));
    }
#line 1022 "trace_gen.m"
    {
#line 1022 "trace_gen.m"
      ll_backend__trace_gen__V_116_116 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_179_179, ll_backend__trace_gen__MaxfrCode_30, ll_backend__trace_gen__TailRecLvalCode_34);
    }
#line 1022 "trace_gen.m"
    {
#line 1022 "trace_gen.m"
      *ll_backend__trace_gen__Code_6 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_179_179, ll_backend__trace_gen__ForeignLangCode_41, ll_backend__trace_gen__V_116_116);
    }
#line 930 "trace_gen.m"
    *ll_backend__trace_gen__STATE_VARIABLE_CI_43 = ll_backend__trace_gen__STATE_VARIABLE_CI_0_42;
#line 930 "trace_gen.m"
  }
#line 927 "trace_gen.m"
}

#line 1189 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__maybe_setup_redo_event_2_p_0_1(
#line 1189 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg)
#line 1189 "trace_gen.m"
{
#line 1189 "trace_gen.m"
  {
#line 1189 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 1189 "trace_gen.m"
    MR_Box ll_backend__trace_gen__closure = ll_backend__trace_gen__closure_arg;

#line 1189 "trace_gen.m"
    {
#line 1189 "trace_gen.m"
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen__IntroducedFrom__pred__maybe_setup_redo_event__1189__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__closure, (MR_Integer) 4))));
    }
#line 1189 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 1189 "trace_gen.m"
  }
#line 1189 "trace_gen.m"
}

#line 236 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__maybe_setup_redo_event_2_p_0(
#line 236 "trace_gen.m"
  MR_Word ll_backend__trace_gen__TraceInfo_3,
#line 236 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_4)
#line 236 "trace_gen.m"
{
#line 1180 "trace_gen.m"
  {
#line 1180 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 1180 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceRedoLabel_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 8)));
#line 1180 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 2)));
#line 1181 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 0)));
#line 1181 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 1)));
#line 1181 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 3)));
#line 1181 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 4)));
#line 1181 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 5)));
#line 1181 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 6)));
#line 1181 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 7)));

#line 1204 "trace_gen.m"
    if ((ll_backend__trace_gen__TraceRedoLabel_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1205 "trace_gen.m"
      {
#line 1206 "trace_gen.m"
        {
#line 1206 "trace_gen.m"
          *ll_backend__trace_gen__Code_4 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 1205 "trace_gen.m"
      }
#line 1204 "trace_gen.m"
    else
#line 1196 "trace_gen.m"
    if ((ll_backend__trace_gen__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1197 "trace_gen.m"
      {
#line 1198 "trace_gen.m"
        {
#line 1198 "trace_gen.m"
          *ll_backend__trace_gen__Code_4 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (&ll_backend__trace_gen_scalar_common_1[12])));
        }
#line 1197 "trace_gen.m"
      }
#line 1196 "trace_gen.m"
    else
#line 1186 "trace_gen.m"
      {
#line 1186 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Lval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_31_31, (MR_Integer) 0)));
#line 1186 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_16_16;

#line 1189 "trace_gen.m"
        {
#line 1189 "trace_gen.m"
          ll_backend__trace_gen__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1189 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_16_16, 0) = ((MR_Box) (&ll_backend__trace_gen_scalar_common_5[0]));
#line 1189 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_16_16, 1) = ((MR_Box) (ll_backend__trace_gen__maybe_setup_redo_event_2_p_0_1));
#line 1189 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1189 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_16_16, 3) = ((MR_Box) (ll_backend__trace_gen__Lval_8));
#line 1189 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_16_16, 4) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[16])));
#line 1189 "trace_gen.m"
        }
#line 1189 "trace_gen.m"
        {
#line 1189 "trace_gen.m"
          mercury__require__expect_4_p_0(ll_backend__trace_gen__V_16_16, (MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.maybe_setup_redo_event\'/2", (MR_String) "from-full flag not stored in expected slot");
        }
#line 1191 "trace_gen.m"
        {
#line 1191 "trace_gen.m"
          *ll_backend__trace_gen__Code_4 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (&ll_backend__trace_gen_scalar_common_1[13])));
        }
#line 1186 "trace_gen.m"
      }
#line 1180 "trace_gen.m"
  }
#line 236 "trace_gen.m"
}

#line 227 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__generate_external_event_code_8_p_0(
#line 227 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ExternalPort_9,
#line 227 "trace_gen.m"
  MR_Word ll_backend__trace_gen__TraceInfo_10,
#line 227 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Context_11,
#line 227 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__MaybeExternalInfo_12,
#line 227 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_23,
#line 227 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_24,
#line 227 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_25,
#line 227 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_26)
#line 227 "trace_gen.m"
{
#line 892 "trace_gen.m"
  {
#line 892 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 892 "trace_gen.m"
    MR_Word ll_backend__trace_gen__Port_15 = ((&ll_backend__trace_gen_vector_common_4[0 + ll_backend__trace_gen__ExternalPort_9]))->ll_backend__trace_gen__vector_common_type_4_0__vct_4_f_0;
#line 892 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ModuleInfo_16;
#line 892 "trace_gen.m"
    MR_Word ll_backend__trace_gen__PredInfo_17;
#line 892 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ProcInfo_18;
#line 892 "trace_gen.m"
    MR_Word ll_backend__trace_gen__NeedPort_19;
#line 892 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_27_27;
#line 892 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_36_36;
#line 897 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_37_37;
#line 897 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_38_38;
#line 897 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_39_39;
#line 897 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_40_40;
#line 897 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_41_41;
#line 897 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_42_42;
#line 897 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_43_43;

#line 894 "trace_gen.m"
    {
#line 894 "trace_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_23, &ll_backend__trace_gen__ModuleInfo_16);
    }
#line 895 "trace_gen.m"
    {
#line 895 "trace_gen.m"
      ll_backend__code_info__get_pred_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_23, &ll_backend__trace_gen__PredInfo_17);
    }
#line 896 "trace_gen.m"
    {
#line 896 "trace_gen.m"
      ll_backend__code_info__get_proc_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_23, &ll_backend__trace_gen__ProcInfo_18);
    }
#line 897 "trace_gen.m"
    ll_backend__trace_gen__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 0)));
#line 897 "trace_gen.m"
    ll_backend__trace_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 1)));
#line 897 "trace_gen.m"
    ll_backend__trace_gen__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 2)));
#line 897 "trace_gen.m"
    ll_backend__trace_gen__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 3)));
#line 897 "trace_gen.m"
    ll_backend__trace_gen__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 4)));
#line 897 "trace_gen.m"
    ll_backend__trace_gen__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 5)));
#line 897 "trace_gen.m"
    ll_backend__trace_gen__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 6)));
#line 897 "trace_gen.m"
    ll_backend__trace_gen__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 7)));
#line 897 "trace_gen.m"
    ll_backend__trace_gen__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 8)));
#line 897 "trace_gen.m"
    {
#line 897 "trace_gen.m"
      ll_backend__trace_gen__NeedPort_19 = libs__trace_params__eff_trace_needs_port_6_f_0(ll_backend__trace_gen__ModuleInfo_16, ll_backend__trace_gen__PredInfo_17, ll_backend__trace_gen__ProcInfo_18, ll_backend__trace_gen__V_27_27, ll_backend__trace_gen__V_36_36, ll_backend__trace_gen__Port_15);
    }
#line 904 "trace_gen.m"
#line 904 "trace_gen.m"
    switch (ll_backend__trace_gen__NeedPort_19) {
#line 904 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 904 "trace_gen.m"
      case (MR_Integer) 0:
#line 905 "trace_gen.m"
        {
#line 906 "trace_gen.m"
          *ll_backend__trace_gen__MaybeExternalInfo_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 905 "trace_gen.m"
          *ll_backend__trace_gen__STATE_VARIABLE_CI_24 = ll_backend__trace_gen__STATE_VARIABLE_CI_0_23;
#line 905 "trace_gen.m"
          *ll_backend__trace_gen__STATE_VARIABLE_CLD_26 = ll_backend__trace_gen__STATE_VARIABLE_CLD_0_25;
#line 905 "trace_gen.m"
        }
#line 904 "trace_gen.m"
        break;
#line 904 "trace_gen.m"
      case (MR_Integer) 1:
#line 900 "trace_gen.m"
        {
#line 900 "trace_gen.m"
          MR_Word ll_backend__trace_gen__Label_20;
#line 900 "trace_gen.m"
          MR_Word ll_backend__trace_gen__TvarDataMap_21;
#line 900 "trace_gen.m"
          MR_Word ll_backend__trace_gen__Code_22;
#line 900 "trace_gen.m"
          MR_Word ll_backend__trace_gen__V_30_30;
#line 900 "trace_gen.m"
          MR_Word ll_backend__trace_gen__V_35_35;

#line 901 "trace_gen.m"
          {
#line 901 "trace_gen.m"
            ll_backend__trace_gen__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 901 "trace_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_30_30, 0) = ((MR_Box) (ll_backend__trace_gen__TraceInfo_10));
#line 901 "trace_gen.m"
          }
#line 901 "trace_gen.m"
          {
#line 901 "trace_gen.m"
            ll_backend__trace_gen__generate_event_code_13_p_0(ll_backend__trace_gen__Port_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__trace_gen__V_30_30, ll_backend__trace_gen__Context_11, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__trace_gen__Label_20, &ll_backend__trace_gen__TvarDataMap_21, &ll_backend__trace_gen__Code_22, ll_backend__trace_gen__STATE_VARIABLE_CI_0_23, ll_backend__trace_gen__STATE_VARIABLE_CI_24, ll_backend__trace_gen__STATE_VARIABLE_CLD_0_25, ll_backend__trace_gen__STATE_VARIABLE_CLD_26);
          }
#line 903 "trace_gen.m"
          {
#line 903 "trace_gen.m"
            ll_backend__trace_gen__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 903 "trace_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_35_35, 0) = ((MR_Box) (ll_backend__trace_gen__Label_20));
#line 903 "trace_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_35_35, 1) = ((MR_Box) (ll_backend__trace_gen__TvarDataMap_21));
#line 903 "trace_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_35_35, 2) = ((MR_Box) (ll_backend__trace_gen__Code_22));
#line 903 "trace_gen.m"
          }
#line 903 "trace_gen.m"
          {
#line 903 "trace_gen.m"
            MR_Word base;
#line 903 "trace_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 903 "trace_gen.m"
            *ll_backend__trace_gen__MaybeExternalInfo_12 = base;
#line 903 "trace_gen.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__trace_gen__V_35_35));
#line 903 "trace_gen.m"
          }
#line 900 "trace_gen.m"
        }
#line 904 "trace_gen.m"
        break;
#line 904 "trace_gen.m"
    }
#line 892 "trace_gen.m"
  }
#line 227 "trace_gen.m"
}

#line 202 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__generate_tailrec_event_code_10_p_0(
#line 202 "trace_gen.m"
  MR_Word ll_backend__trace_gen__TraceInfo_11,
#line 202 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ArgsInfos_12,
#line 202 "trace_gen.m"
  MR_Word ll_backend__trace_gen__GoalId_13,
#line 202 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Context_14,
#line 202 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_15,
#line 202 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__TailRecLabel_16,
#line 202 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_29,
#line 202 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_30,
#line 202 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_31,
#line 202 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_32)
#line 202 "trace_gen.m"
{
#line 910 "trace_gen.m"
  {
#line 910 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 910 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ContainingGoalMap_20;
#line 910 "trace_gen.m"
    MR_Word ll_backend__trace_gen__GoalPath_21;
#line 910 "trace_gen.m"
    MR_Word ll_backend__trace_gen__PortInfo_22;
#line 910 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTailRecInfo_27;
#line 910 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_33_33;
#line 917 "trace_gen.m"
    MR_Word ll_backend__trace_gen___Label_25;
#line 917 "trace_gen.m"
    MR_Word ll_backend__trace_gen___TvarDataMap_26;
#line 919 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_40_40;
#line 919 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_41_41;
#line 919 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_42_42;
#line 919 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_43_43;
#line 919 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_44_44;
#line 919 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_45_45;
#line 919 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_46_46;
#line 919 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_47_47;

#line 912 "trace_gen.m"
    {
#line 912 "trace_gen.m"
      ll_backend__code_info__get_containing_goal_map_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_29, &ll_backend__trace_gen__ContainingGoalMap_20);
    }
#line 913 "trace_gen.m"
    {
#line 913 "trace_gen.m"
      ll_backend__trace_gen__GoalPath_21 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__trace_gen__ContainingGoalMap_20, ll_backend__trace_gen__GoalId_13);
    }
#line 914 "trace_gen.m"
    {
#line 914 "trace_gen.m"
      ll_backend__trace_gen__PortInfo_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 914 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__PortInfo_22, 0) = ((MR_Box) (ll_backend__trace_gen__GoalPath_21));
#line 914 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__PortInfo_22, 1) = ((MR_Box) (ll_backend__trace_gen__ArgsInfos_12));
#line 914 "trace_gen.m"
    }
#line 917 "trace_gen.m"
    {
#line 917 "trace_gen.m"
      ll_backend__trace_gen__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 917 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_33_33, 0) = ((MR_Box) (ll_backend__trace_gen__TraceInfo_11));
#line 917 "trace_gen.m"
    }
#line 917 "trace_gen.m"
    {
#line 917 "trace_gen.m"
      ll_backend__trace_gen__generate_event_code_13_p_0((MR_Integer) 4, ll_backend__trace_gen__PortInfo_22, ll_backend__trace_gen__V_33_33, ll_backend__trace_gen__Context_14, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__trace_gen___Label_25, &ll_backend__trace_gen___TvarDataMap_26, ll_backend__trace_gen__Code_15, ll_backend__trace_gen__STATE_VARIABLE_CI_0_29, ll_backend__trace_gen__STATE_VARIABLE_CI_30, ll_backend__trace_gen__STATE_VARIABLE_CLD_0_31, ll_backend__trace_gen__STATE_VARIABLE_CLD_32);
    }
#line 919 "trace_gen.m"
    ll_backend__trace_gen__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 0)));
#line 919 "trace_gen.m"
    ll_backend__trace_gen__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 1)));
#line 919 "trace_gen.m"
    ll_backend__trace_gen__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 2)));
#line 919 "trace_gen.m"
    ll_backend__trace_gen__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 3)));
#line 919 "trace_gen.m"
    ll_backend__trace_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 4)));
#line 919 "trace_gen.m"
    ll_backend__trace_gen__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 5)));
#line 919 "trace_gen.m"
    ll_backend__trace_gen__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 6)));
#line 919 "trace_gen.m"
    ll_backend__trace_gen__MaybeTailRecInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 7)));
#line 919 "trace_gen.m"
    ll_backend__trace_gen__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 8)));
#line 922 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeTailRecInfo_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 923 "trace_gen.m"
      {
#line 924 "trace_gen.m"
        {
#line 924 "trace_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.generate_tailrec_event_code\'/10", (MR_String) "no tail rec label");
#line 924 "trace_gen.m"
          return;
        }
#line 923 "trace_gen.m"
      }
#line 922 "trace_gen.m"
    else
#line 921 "trace_gen.m"
      {
#line 921 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTailRecInfo_27, (MR_Integer) 0)));
#line 921 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_39_39, (MR_Integer) 0)));

#line 921 "trace_gen.m"
        *ll_backend__trace_gen__TailRecLabel_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_39_39, (MR_Integer) 1)));
#line 921 "trace_gen.m"
      }
#line 910 "trace_gen.m"
  }
#line 202 "trace_gen.m"
}

#line 198 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__generate_user_event_code_7_p_0(
#line 198 "trace_gen.m"
  MR_Word ll_backend__trace_gen__UserInfo_8,
#line 198 "trace_gen.m"
  MR_Word ll_backend__trace_gen__GoalInfo_9,
#line 198 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_10,
#line 198 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_23,
#line 198 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_24,
#line 198 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_25,
#line 198 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_26)
#line 198 "trace_gen.m"
{
#line 879 "trace_gen.m"
  {
#line 879 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 879 "trace_gen.m"
    MR_Word ll_backend__trace_gen__GoalId_13;
#line 879 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ContainingGoalMap_14;
#line 879 "trace_gen.m"
    MR_Word ll_backend__trace_gen__GoalPath_15;
#line 879 "trace_gen.m"
    MR_Word ll_backend__trace_gen__Context_16;
#line 879 "trace_gen.m"
    MR_Word ll_backend__trace_gen__PortInfo_18;
#line 879 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_27_27;
#line 888 "trace_gen.m"
    MR_Word ll_backend__trace_gen___Label_21;
#line 888 "trace_gen.m"
    MR_Word ll_backend__trace_gen___TvarDataMap_22;

#line 880 "trace_gen.m"
    {
#line 880 "trace_gen.m"
      ll_backend__trace_gen__GoalId_13 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__trace_gen__GoalInfo_9);
    }
#line 881 "trace_gen.m"
    {
#line 881 "trace_gen.m"
      ll_backend__code_info__get_containing_goal_map_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_23, &ll_backend__trace_gen__ContainingGoalMap_14);
    }
#line 882 "trace_gen.m"
    {
#line 882 "trace_gen.m"
      ll_backend__trace_gen__GoalPath_15 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__trace_gen__ContainingGoalMap_14, ll_backend__trace_gen__GoalId_13);
    }
#line 883 "trace_gen.m"
    {
#line 883 "trace_gen.m"
      ll_backend__trace_gen__Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__trace_gen__GoalInfo_9);
    }
#line 885 "trace_gen.m"
    {
#line 885 "trace_gen.m"
      ll_backend__trace_gen__PortInfo_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 885 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__PortInfo_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 885 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__PortInfo_18, 1) = ((MR_Box) (ll_backend__trace_gen__GoalPath_15));
#line 885 "trace_gen.m"
    }
#line 889 "trace_gen.m"
    {
#line 889 "trace_gen.m"
      ll_backend__trace_gen__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 889 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_27_27, 0) = ((MR_Box) (ll_backend__trace_gen__UserInfo_8));
#line 889 "trace_gen.m"
    }
#line 888 "trace_gen.m"
    {
#line 888 "trace_gen.m"
      ll_backend__trace_gen__generate_event_code_13_p_0((MR_Integer) 15, ll_backend__trace_gen__PortInfo_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__trace_gen__Context_16, (MR_Integer) 0, ll_backend__trace_gen__V_27_27, &ll_backend__trace_gen___Label_21, &ll_backend__trace_gen___TvarDataMap_22, ll_backend__trace_gen__Code_10, ll_backend__trace_gen__STATE_VARIABLE_CI_0_23, ll_backend__trace_gen__STATE_VARIABLE_CI_24, ll_backend__trace_gen__STATE_VARIABLE_CLD_0_25, ll_backend__trace_gen__STATE_VARIABLE_CLD_26);
    }
#line 879 "trace_gen.m"
  }
#line 198 "trace_gen.m"
}

#line 192 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__maybe_generate_negated_event_code_8_p_0(
#line 192 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Goal_9,
#line 192 "trace_gen.m"
  MR_Word ll_backend__trace_gen__OutsideGoalInfo_10,
#line 192 "trace_gen.m"
  MR_Word ll_backend__trace_gen__NegPort_11,
#line 192 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_12,
#line 192 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_30,
#line 192 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_31,
#line 192 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_32,
#line 192 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_33)
#line 192 "trace_gen.m"
{
#line 843 "trace_gen.m"
  {
#line 843 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 843 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTraceInfo_15;
#line 845 "trace_gen.m"
    MR_Word ll_backend__trace_gen__Port_17;
#line 846 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceInfo_16;
#line 846 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ModuleInfo_18;
#line 846 "trace_gen.m"
    MR_Word ll_backend__trace_gen__PredInfo_19;
#line 846 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ProcInfo_20;
#line 846 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_34_34;
#line 846 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_35_35;
#line 846 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_43_43;
#line 857 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_44_44;
#line 857 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_45_45;
#line 857 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_46_46;
#line 857 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_47_47;
#line 857 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_48_48;
#line 857 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_49_49;
#line 857 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_50_50;

#line 844 "trace_gen.m"
    {
#line 844 "trace_gen.m"
      ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_30, &ll_backend__trace_gen__MaybeTraceInfo_15);
    }
#line 846 "trace_gen.m"
    ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__MaybeTraceInfo_15)) == (MR_mktag((MR_Integer) 1)));
#line 846 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 846 "trace_gen.m"
      {
#line 846 "trace_gen.m"
        ll_backend__trace_gen__TraceInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTraceInfo_15, (MR_Integer) 0)));
#line 850 "trace_gen.m"
#line 850 "trace_gen.m"
        switch (ll_backend__trace_gen__NegPort_11) {
#line 850 "trace_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 850 "trace_gen.m"
          case (MR_Integer) 1:
#line 849 "trace_gen.m"
            ll_backend__trace_gen__Port_17 = (MR_Integer) 11;
#line 850 "trace_gen.m"
            break;
#line 850 "trace_gen.m"
          case (MR_Integer) 0:
#line 852 "trace_gen.m"
            ll_backend__trace_gen__Port_17 = (MR_Integer) 10;
#line 850 "trace_gen.m"
            break;
#line 850 "trace_gen.m"
        }
#line 854 "trace_gen.m"
        {
#line 854 "trace_gen.m"
          ll_backend__code_info__get_module_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_30, &ll_backend__trace_gen__ModuleInfo_18);
        }
#line 855 "trace_gen.m"
        {
#line 855 "trace_gen.m"
          ll_backend__code_info__get_pred_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_30, &ll_backend__trace_gen__PredInfo_19);
        }
#line 856 "trace_gen.m"
        {
#line 856 "trace_gen.m"
          ll_backend__code_info__get_proc_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_30, &ll_backend__trace_gen__ProcInfo_20);
        }
#line 857 "trace_gen.m"
        ll_backend__trace_gen__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 0)));
#line 857 "trace_gen.m"
        ll_backend__trace_gen__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 1)));
#line 857 "trace_gen.m"
        ll_backend__trace_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 2)));
#line 857 "trace_gen.m"
        ll_backend__trace_gen__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 3)));
#line 857 "trace_gen.m"
        ll_backend__trace_gen__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 4)));
#line 857 "trace_gen.m"
        ll_backend__trace_gen__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 5)));
#line 857 "trace_gen.m"
        ll_backend__trace_gen__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 6)));
#line 857 "trace_gen.m"
        ll_backend__trace_gen__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 7)));
#line 857 "trace_gen.m"
        ll_backend__trace_gen__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 8)));
#line 857 "trace_gen.m"
        {
#line 857 "trace_gen.m"
          ll_backend__trace_gen__V_34_34 = libs__trace_params__eff_trace_needs_port_6_f_0(ll_backend__trace_gen__ModuleInfo_18, ll_backend__trace_gen__PredInfo_19, ll_backend__trace_gen__ProcInfo_20, ll_backend__trace_gen__V_35_35, ll_backend__trace_gen__V_43_43, ll_backend__trace_gen__Port_17);
        }
#line 859 "trace_gen.m"
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_34_34 == (MR_Integer) 1);
#line 846 "trace_gen.m"
      }
#line 845 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 861 "trace_gen.m"
      {
#line 861 "trace_gen.m"
        MR_Word ll_backend__trace_gen__GoalInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Goal_9, (MR_Integer) 1)));
#line 861 "trace_gen.m"
        MR_Word ll_backend__trace_gen__GoalId_23;
#line 861 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Context_24;
#line 861 "trace_gen.m"
        MR_Word ll_backend__trace_gen__HideEvent_25;
#line 861 "trace_gen.m"
        MR_Word ll_backend__trace_gen__ContainingGoalMap_26;
#line 861 "trace_gen.m"
        MR_Word ll_backend__trace_gen__GoalPath_27;
#line 861 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_38_38;
#line 861 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Goal_9, (MR_Integer) 0)));
#line 873 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_28_28;
#line 873 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_29_29;

#line 862 "trace_gen.m"
        {
#line 862 "trace_gen.m"
          ll_backend__trace_gen__GoalId_23 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__trace_gen__GoalInfo_22);
        }
#line 863 "trace_gen.m"
        {
#line 863 "trace_gen.m"
          ll_backend__trace_gen__Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__trace_gen__GoalInfo_22);
        }
#line 865 "trace_gen.m"
        {
#line 865 "trace_gen.m"
          ll_backend__trace_gen__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(ll_backend__trace_gen__OutsideGoalInfo_10, (MR_Integer) 8);
        }
#line 864 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 867 "trace_gen.m"
          ll_backend__trace_gen__HideEvent_25 = (MR_Integer) 1;
#line 864 "trace_gen.m"
        else
#line 869 "trace_gen.m"
          ll_backend__trace_gen__HideEvent_25 = (MR_Integer) 0;
#line 871 "trace_gen.m"
        {
#line 871 "trace_gen.m"
          ll_backend__code_info__get_containing_goal_map_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_30, &ll_backend__trace_gen__ContainingGoalMap_26);
        }
#line 872 "trace_gen.m"
        {
#line 872 "trace_gen.m"
          ll_backend__trace_gen__GoalPath_27 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__trace_gen__ContainingGoalMap_26, ll_backend__trace_gen__GoalId_23);
        }
#line 873 "trace_gen.m"
        {
#line 873 "trace_gen.m"
          ll_backend__trace_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 873 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 873 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_38_38, 1) = ((MR_Box) (ll_backend__trace_gen__GoalPath_27));
#line 873 "trace_gen.m"
        }
#line 873 "trace_gen.m"
        {
#line 873 "trace_gen.m"
          ll_backend__trace_gen__generate_event_code_13_p_0(ll_backend__trace_gen__Port_17, ll_backend__trace_gen__V_38_38, ll_backend__trace_gen__MaybeTraceInfo_15, ll_backend__trace_gen__Context_24, ll_backend__trace_gen__HideEvent_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__trace_gen__V_28_28, &ll_backend__trace_gen__V_29_29, ll_backend__trace_gen__Code_12, ll_backend__trace_gen__STATE_VARIABLE_CI_0_30, ll_backend__trace_gen__STATE_VARIABLE_CI_31, ll_backend__trace_gen__STATE_VARIABLE_CLD_0_32, ll_backend__trace_gen__STATE_VARIABLE_CLD_33);
        }
#line 861 "trace_gen.m"
      }
#line 845 "trace_gen.m"
    else
#line 876 "trace_gen.m"
      {
#line 876 "trace_gen.m"
        {
#line 876 "trace_gen.m"
          *ll_backend__trace_gen__Code_12 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 876 "trace_gen.m"
        *ll_backend__trace_gen__STATE_VARIABLE_CLD_33 = ll_backend__trace_gen__STATE_VARIABLE_CLD_0_32;
#line 876 "trace_gen.m"
        *ll_backend__trace_gen__STATE_VARIABLE_CI_31 = ll_backend__trace_gen__STATE_VARIABLE_CI_0_30;
#line 876 "trace_gen.m"
      }
#line 843 "trace_gen.m"
  }
#line 192 "trace_gen.m"
}

#line 185 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(
#line 185 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Goal_8,
#line 185 "trace_gen.m"
  MR_Word ll_backend__trace_gen__OutsideGoalInfo_9,
#line 185 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_10,
#line 185 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_36,
#line 185 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_37,
#line 185 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_38,
#line 185 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_39)
#line 185 "trace_gen.m"
{
#line 775 "trace_gen.m"
  {
#line 775 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 775 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTraceInfo_13;

#line 776 "trace_gen.m"
    {
#line 776 "trace_gen.m"
      ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_36, &ll_backend__trace_gen__MaybeTraceInfo_13);
    }
#line 837 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeTraceInfo_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 838 "trace_gen.m"
      {
#line 839 "trace_gen.m"
        {
#line 839 "trace_gen.m"
          *ll_backend__trace_gen__Code_10 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 838 "trace_gen.m"
        *ll_backend__trace_gen__STATE_VARIABLE_CI_37 = ll_backend__trace_gen__STATE_VARIABLE_CI_0_36;
#line 838 "trace_gen.m"
        *ll_backend__trace_gen__STATE_VARIABLE_CLD_39 = ll_backend__trace_gen__STATE_VARIABLE_CLD_0_38;
#line 838 "trace_gen.m"
      }
#line 837 "trace_gen.m"
    else
#line 778 "trace_gen.m"
      {
#line 778 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TraceInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTraceInfo_13, (MR_Integer) 0)));
#line 778 "trace_gen.m"
        MR_Word ll_backend__trace_gen__GoalInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Goal_8, (MR_Integer) 1)));
#line 778 "trace_gen.m"
        MR_Word ll_backend__trace_gen__GoalId_17;
#line 778 "trace_gen.m"
        MR_Word ll_backend__trace_gen__ContainingGoalMap_18;
#line 778 "trace_gen.m"
        MR_Word ll_backend__trace_gen__ContainingGoal_19;
#line 778 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Port_26;
#line 779 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Goal_8, (MR_Integer) 0)));
#line 782 "trace_gen.m"
        MR_Box ll_backend__trace_gen__conv0_ContainingGoal_19;
#line 783 "trace_gen.m"
        MR_Word ll_backend__trace_gen__PortPrime_24;
#line 784 "trace_gen.m"
        MR_Word ll_backend__trace_gen__LastStep_21;
#line 784 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_20_20;
#line 814 "trace_gen.m"
        MR_Word ll_backend__trace_gen__ModuleInfo_27;
#line 814 "trace_gen.m"
        MR_Word ll_backend__trace_gen__PredInfo_28;
#line 814 "trace_gen.m"
        MR_Word ll_backend__trace_gen__ProcInfo_29;
#line 814 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_43_43;
#line 814 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_44_44;
#line 814 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_52_52;
#line 817 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_53_53;
#line 817 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_54_54;
#line 817 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_55_55;
#line 817 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_56_56;
#line 817 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_57_57;
#line 817 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_58_58;
#line 817 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_59_59;

#line 780 "trace_gen.m"
        {
#line 780 "trace_gen.m"
          ll_backend__trace_gen__GoalId_17 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__trace_gen__GoalInfo_16);
        }
#line 781 "trace_gen.m"
        {
#line 781 "trace_gen.m"
          ll_backend__code_info__get_containing_goal_map_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_36, &ll_backend__trace_gen__ContainingGoalMap_18);
        }
#line 782 "trace_gen.m"
        {
#line 782 "trace_gen.m"
          mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0, ll_backend__trace_gen__ContainingGoalMap_18, ((MR_Box) (ll_backend__trace_gen__GoalId_17)), &ll_backend__trace_gen__conv0_ContainingGoal_19);
        }
#line 782 "trace_gen.m"
        ll_backend__trace_gen__ContainingGoal_19 = ((MR_Word) ll_backend__trace_gen__conv0_ContainingGoal_19);
#line 784 "trace_gen.m"
        ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__ContainingGoal_19)) == (MR_mktag((MR_Integer) 1)));
#line 784 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 784 "trace_gen.m"
          {
#line 784 "trace_gen.m"
            ll_backend__trace_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__ContainingGoal_19, (MR_Integer) 0)));
#line 784 "trace_gen.m"
            ll_backend__trace_gen__LastStep_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__ContainingGoal_19, (MR_Integer) 1)));
#line 788 "trace_gen.m"
#line 788 "trace_gen.m"
            switch (MR_tag((MR_Word) ll_backend__trace_gen__LastStep_21)) {
#line 788 "trace_gen.m"
              default:
#line 788 "trace_gen.m"
                ll_backend__trace_gen__succeeded = MR_FALSE;
#line 788 "trace_gen.m"
                break;
#line 788 "trace_gen.m"
              case (MR_Integer) 0:
#line 788 "trace_gen.m"
#line 788 "trace_gen.m"
                switch (MR_unmkbody(ll_backend__trace_gen__LastStep_21)) {
#line 788 "trace_gen.m"
                  default:
#line 788 "trace_gen.m"
                    ll_backend__trace_gen__succeeded = MR_FALSE;
#line 788 "trace_gen.m"
                    break;
#line 788 "trace_gen.m"
                  case (MR_Integer) 0:
#line 797 "trace_gen.m"
                    {
#line 797 "trace_gen.m"
                      ll_backend__trace_gen__PortPrime_24 = (MR_Integer) 6;
#line 797 "trace_gen.m"
                      ll_backend__trace_gen__succeeded = MR_TRUE;
#line 797 "trace_gen.m"
                    }
#line 788 "trace_gen.m"
                    break;
#line 788 "trace_gen.m"
                  case (MR_Integer) 1:
#line 800 "trace_gen.m"
                    {
#line 800 "trace_gen.m"
                      ll_backend__trace_gen__PortPrime_24 = (MR_Integer) 7;
#line 800 "trace_gen.m"
                      ll_backend__trace_gen__succeeded = MR_TRUE;
#line 800 "trace_gen.m"
                    }
#line 788 "trace_gen.m"
                    break;
#line 788 "trace_gen.m"
                  case (MR_Integer) 2:
#line 803 "trace_gen.m"
                    {
#line 803 "trace_gen.m"
                      ll_backend__trace_gen__PortPrime_24 = (MR_Integer) 8;
#line 803 "trace_gen.m"
                      ll_backend__trace_gen__succeeded = MR_TRUE;
#line 803 "trace_gen.m"
                    }
#line 788 "trace_gen.m"
                    break;
#line 788 "trace_gen.m"
                  case (MR_Integer) 3:
#line 806 "trace_gen.m"
                    {
#line 806 "trace_gen.m"
                      ll_backend__trace_gen__PortPrime_24 = (MR_Integer) 9;
#line 806 "trace_gen.m"
                      ll_backend__trace_gen__succeeded = MR_TRUE;
#line 806 "trace_gen.m"
                    }
#line 788 "trace_gen.m"
                    break;
#line 788 "trace_gen.m"
                }
#line 788 "trace_gen.m"
                break;
#line 788 "trace_gen.m"
              case (MR_Integer) 2:
#line 789 "trace_gen.m"
                {
#line 789 "trace_gen.m"
                  MR_Integer ll_backend__trace_gen__DisjunctNum_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__LastStep_21, (MR_Integer) 0)));

#line 790 "trace_gen.m"
                  ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__DisjunctNum_25 == (MR_Integer) 1);
#line 790 "trace_gen.m"
                  if (ll_backend__trace_gen__succeeded)
#line 791 "trace_gen.m"
                    ll_backend__trace_gen__PortPrime_24 = (MR_Integer) 12;
#line 790 "trace_gen.m"
                  else
#line 793 "trace_gen.m"
                    ll_backend__trace_gen__PortPrime_24 = (MR_Integer) 13;
#line 789 "trace_gen.m"
                  ll_backend__trace_gen__succeeded = MR_TRUE;
#line 789 "trace_gen.m"
                }
#line 788 "trace_gen.m"
                break;
#line 788 "trace_gen.m"
              case (MR_Integer) 3:
#line 788 "trace_gen.m"
#line 788 "trace_gen.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__LastStep_21, (MR_Integer) 0)))) {
#line 788 "trace_gen.m"
                  default:
#line 788 "trace_gen.m"
                    ll_backend__trace_gen__succeeded = MR_FALSE;
#line 788 "trace_gen.m"
                    break;
#line 788 "trace_gen.m"
                  case (MR_Integer) 0:
#line 787 "trace_gen.m"
                    {
#line 787 "trace_gen.m"
                      ll_backend__trace_gen__PortPrime_24 = (MR_Integer) 14;
#line 787 "trace_gen.m"
                      ll_backend__trace_gen__succeeded = MR_TRUE;
#line 787 "trace_gen.m"
                    }
#line 788 "trace_gen.m"
                    break;
#line 788 "trace_gen.m"
                }
#line 788 "trace_gen.m"
                break;
#line 788 "trace_gen.m"
            }
#line 784 "trace_gen.m"
          }
#line 783 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 809 "trace_gen.m"
          ll_backend__trace_gen__Port_26 = ll_backend__trace_gen__PortPrime_24;
#line 783 "trace_gen.m"
        else
#line 811 "trace_gen.m"
          {
#line 811 "trace_gen.m"
            {
#line 811 "trace_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.maybe_generate_internal_event_code\'/7", (MR_String) "bad path");
#line 811 "trace_gen.m"
              return;
            }
#line 811 "trace_gen.m"
          }
#line 814 "trace_gen.m"
        {
#line 814 "trace_gen.m"
          ll_backend__code_info__get_module_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_36, &ll_backend__trace_gen__ModuleInfo_27);
        }
#line 815 "trace_gen.m"
        {
#line 815 "trace_gen.m"
          ll_backend__code_info__get_pred_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_36, &ll_backend__trace_gen__PredInfo_28);
        }
#line 816 "trace_gen.m"
        {
#line 816 "trace_gen.m"
          ll_backend__code_info__get_proc_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_36, &ll_backend__trace_gen__ProcInfo_29);
        }
#line 817 "trace_gen.m"
        ll_backend__trace_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 0)));
#line 817 "trace_gen.m"
        ll_backend__trace_gen__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 1)));
#line 817 "trace_gen.m"
        ll_backend__trace_gen__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 2)));
#line 817 "trace_gen.m"
        ll_backend__trace_gen__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 3)));
#line 817 "trace_gen.m"
        ll_backend__trace_gen__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 4)));
#line 817 "trace_gen.m"
        ll_backend__trace_gen__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 5)));
#line 817 "trace_gen.m"
        ll_backend__trace_gen__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 6)));
#line 817 "trace_gen.m"
        ll_backend__trace_gen__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 7)));
#line 817 "trace_gen.m"
        ll_backend__trace_gen__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 8)));
#line 817 "trace_gen.m"
        {
#line 817 "trace_gen.m"
          ll_backend__trace_gen__V_43_43 = libs__trace_params__eff_trace_needs_port_6_f_0(ll_backend__trace_gen__ModuleInfo_27, ll_backend__trace_gen__PredInfo_28, ll_backend__trace_gen__ProcInfo_29, ll_backend__trace_gen__V_44_44, ll_backend__trace_gen__V_52_52, ll_backend__trace_gen__Port_26);
        }
#line 819 "trace_gen.m"
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_43_43 == (MR_Integer) 1);
#line 813 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 821 "trace_gen.m"
          {
#line 821 "trace_gen.m"
            MR_Word ll_backend__trace_gen__PreDeaths_30;
#line 821 "trace_gen.m"
            MR_Word ll_backend__trace_gen__Context_31;
#line 821 "trace_gen.m"
            MR_Word ll_backend__trace_gen__HideEvent_32;
#line 821 "trace_gen.m"
            MR_Word ll_backend__trace_gen__GoalPath_33;
#line 821 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_47_47;
#line 832 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_34_34;
#line 832 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_35_35;

#line 821 "trace_gen.m"
            {
#line 821 "trace_gen.m"
              hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ll_backend__trace_gen__GoalInfo_16, &ll_backend__trace_gen__PreDeaths_30);
            }
#line 822 "trace_gen.m"
            {
#line 822 "trace_gen.m"
              ll_backend__trace_gen__Context_31 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__trace_gen__GoalInfo_16);
            }
#line 824 "trace_gen.m"
            {
#line 824 "trace_gen.m"
              ll_backend__trace_gen__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(ll_backend__trace_gen__OutsideGoalInfo_9, (MR_Integer) 8);
            }
#line 823 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 827 "trace_gen.m"
              ll_backend__trace_gen__HideEvent_32 = (MR_Integer) 1;
#line 823 "trace_gen.m"
            else
#line 829 "trace_gen.m"
              ll_backend__trace_gen__HideEvent_32 = (MR_Integer) 0;
#line 831 "trace_gen.m"
            {
#line 831 "trace_gen.m"
              ll_backend__trace_gen__GoalPath_33 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__trace_gen__ContainingGoalMap_18, ll_backend__trace_gen__GoalId_17);
            }
#line 832 "trace_gen.m"
            {
#line 832 "trace_gen.m"
              ll_backend__trace_gen__V_47_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 832 "trace_gen.m"
              MR_hl_field(MR_mktag(2), ll_backend__trace_gen__V_47_47, 0) = ((MR_Box) (ll_backend__trace_gen__GoalPath_33));
#line 832 "trace_gen.m"
              MR_hl_field(MR_mktag(2), ll_backend__trace_gen__V_47_47, 1) = ((MR_Box) (ll_backend__trace_gen__PreDeaths_30));
#line 832 "trace_gen.m"
            }
#line 832 "trace_gen.m"
            {
#line 832 "trace_gen.m"
              ll_backend__trace_gen__generate_event_code_13_p_0(ll_backend__trace_gen__Port_26, ll_backend__trace_gen__V_47_47, ll_backend__trace_gen__MaybeTraceInfo_13, ll_backend__trace_gen__Context_31, ll_backend__trace_gen__HideEvent_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__trace_gen__V_34_34, &ll_backend__trace_gen__V_35_35, ll_backend__trace_gen__Code_10, ll_backend__trace_gen__STATE_VARIABLE_CI_0_36, ll_backend__trace_gen__STATE_VARIABLE_CI_37, ll_backend__trace_gen__STATE_VARIABLE_CLD_0_38, ll_backend__trace_gen__STATE_VARIABLE_CLD_39);
            }
#line 821 "trace_gen.m"
          }
#line 813 "trace_gen.m"
        else
#line 835 "trace_gen.m"
          {
#line 835 "trace_gen.m"
            {
#line 835 "trace_gen.m"
              *ll_backend__trace_gen__Code_10 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
#line 835 "trace_gen.m"
            *ll_backend__trace_gen__STATE_VARIABLE_CLD_39 = ll_backend__trace_gen__STATE_VARIABLE_CLD_0_38;
#line 835 "trace_gen.m"
            *ll_backend__trace_gen__STATE_VARIABLE_CI_37 = ll_backend__trace_gen__STATE_VARIABLE_CI_0_36;
#line 835 "trace_gen.m"
          }
#line 778 "trace_gen.m"
      }
#line 775 "trace_gen.m"
  }
#line 185 "trace_gen.m"
}

#line 179 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__trace_prepare_for_call_2_p_0(
#line 179 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CI_3,
#line 179 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__TraceCode_4)
#line 179 "trace_gen.m"
{
#line 750 "trace_gen.m"
  {
#line 750 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 750 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTraceInfo_5;
#line 750 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CodeModel_6;

#line 751 "trace_gen.m"
    {
#line 751 "trace_gen.m"
      ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__trace_gen__CI_3, &ll_backend__trace_gen__MaybeTraceInfo_5);
    }
#line 752 "trace_gen.m"
    {
#line 752 "trace_gen.m"
      ll_backend__trace_gen__CodeModel_6 = ll_backend__code_info__get_proc_model_1_f_0(ll_backend__trace_gen__CI_3);
    }
#line 770 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeTraceInfo_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 771 "trace_gen.m"
      {
#line 772 "trace_gen.m"
        {
#line 772 "trace_gen.m"
          *ll_backend__trace_gen__TraceCode_4 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 771 "trace_gen.m"
      }
#line 770 "trace_gen.m"
    else
#line 754 "trace_gen.m"
      {
#line 754 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TraceInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTraceInfo_5, (MR_Integer) 0)));
#line 754 "trace_gen.m"
        MR_Word ll_backend__trace_gen__MaybeFromFullSlot_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 2)));
#line 754 "trace_gen.m"
        MR_Word ll_backend__trace_gen__CallDepthLval_9;
#line 754 "trace_gen.m"
        MR_String ll_backend__trace_gen__CallDepthStr_10;
#line 754 "trace_gen.m"
        MR_String ll_backend__trace_gen__MacroStr_12;
#line 754 "trace_gen.m"
        MR_String ll_backend__trace_gen__ResetStmt_13;
#line 754 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_14_14;
#line 754 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_16_16;
#line 754 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_18_18;
#line 754 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_19_19;
#line 754 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_21_21;
#line 754 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_22_22;
#line 755 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 0)));
#line 755 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 1)));
#line 755 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 3)));
#line 755 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 4)));
#line 755 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 5)));
#line 755 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 6)));
#line 755 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 7)));
#line 755 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 8)));

#line 1337 "trace_gen.m"
#line 1337 "trace_gen.m"
        switch (ll_backend__trace_gen__CodeModel_6) {
#line 1337 "trace_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1337 "trace_gen.m"
          case (MR_Integer) 0:
#line 1337 "trace_gen.m"
          case (MR_Integer) 1:
#line 1342 "trace_gen.m"
            {
#line 1343 "trace_gen.m"
              ll_backend__trace_gen__CallDepthLval_9 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[14]);
#line 1342 "trace_gen.m"
            }
#line 1337 "trace_gen.m"
            break;
#line 1337 "trace_gen.m"
          case (MR_Integer) 2:
#line 1337 "trace_gen.m"
            {
#line 1338 "trace_gen.m"
              ll_backend__trace_gen__CallDepthLval_9 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[15]);
#line 1337 "trace_gen.m"
            }
#line 1337 "trace_gen.m"
            break;
#line 1337 "trace_gen.m"
        }
#line 757 "trace_gen.m"
        {
#line 757 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallDepthLval_9, &ll_backend__trace_gen__CallDepthStr_10);
        }
#line 761 "trace_gen.m"
        if ((ll_backend__trace_gen__MaybeFromFullSlot_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 763 "trace_gen.m"
          ll_backend__trace_gen__MacroStr_12 = (MR_String) "MR_trace_reset_depth_from_full";
#line 761 "trace_gen.m"
        else
#line 760 "trace_gen.m"
          ll_backend__trace_gen__MacroStr_12 = (MR_String) "MR_trace_reset_depth_from_shallow";
#line 765 "trace_gen.m"
        {
#line 765 "trace_gen.m"
          ll_backend__trace_gen__V_16_16 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallDepthStr_10, (MR_String) ");\n");
        }
#line 765 "trace_gen.m"
        {
#line 765 "trace_gen.m"
          ll_backend__trace_gen__V_14_14 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__trace_gen__V_16_16);
        }
#line 765 "trace_gen.m"
        {
#line 765 "trace_gen.m"
          ll_backend__trace_gen__ResetStmt_13 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__MacroStr_12, ll_backend__trace_gen__V_14_14);
        }
#line 768 "trace_gen.m"
        {
#line 768 "trace_gen.m"
          ll_backend__trace_gen__V_22_22 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        }
#line 768 "trace_gen.m"
        {
#line 768 "trace_gen.m"
          ll_backend__trace_gen__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 768 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_21_21, 0) = ((MR_Box) (ll_backend__trace_gen__V_22_22));
#line 768 "trace_gen.m"
        }
#line 767 "trace_gen.m"
        {
#line 767 "trace_gen.m"
          ll_backend__trace_gen__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 767 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 767 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_19_19, 1) = ((MR_Box) ((MR_Integer) 1));
#line 767 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_19_19, 2) = ((MR_Box) (ll_backend__trace_gen__V_21_21));
#line 767 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_19_19, 3) = ((MR_Box) (ll_backend__trace_gen__ResetStmt_13));
#line 767 "trace_gen.m"
        }
#line 767 "trace_gen.m"
        {
#line 767 "trace_gen.m"
          ll_backend__trace_gen__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 767 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_18_18, 0) = ((MR_Box) (ll_backend__trace_gen__V_19_19));
#line 767 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_18_18, 1) = ((MR_Box) ((MR_String) ""));
#line 767 "trace_gen.m"
        }
#line 766 "trace_gen.m"
        {
#line 766 "trace_gen.m"
          *ll_backend__trace_gen__TraceCode_4 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__trace_gen__V_18_18)));
        }
#line 754 "trace_gen.m"
      }
#line 750 "trace_gen.m"
  }
#line 179 "trace_gen.m"
}

#line 174 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__generate_slot_fill_code_3_p_0(
#line 174 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CI_4,
#line 174 "trace_gen.m"
  MR_Word ll_backend__trace_gen__TraceInfo_5,
#line 174 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__TraceCode_6)
#line 174 "trace_gen.m"
{
#line 615 "trace_gen.m"
  {
#line 615 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 615 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TypeCtorInfo_233_233;
#line 615 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TypeCtorInfo_234_234;
#line 615 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CodeModel_7;
#line 615 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeFromFullSlot_8;
#line 615 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeIoSeqSlot_9;
#line 615 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTrailLvals_10;
#line 615 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeMaxfrLval_11;
#line 615 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeCallTableLval_12;
#line 615 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTailRecInfo_13;
#line 615 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeRedoLabel_14;
#line 615 "trace_gen.m"
    MR_Word ll_backend__trace_gen__EventNumLval_15;
#line 615 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CallNumLval_16;
#line 615 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CallDepthLval_17;
#line 615 "trace_gen.m"
    MR_String ll_backend__trace_gen__EventNumStr_18;
#line 615 "trace_gen.m"
    MR_String ll_backend__trace_gen__CallNumStr_19;
#line 615 "trace_gen.m"
    MR_String ll_backend__trace_gen__CallDepthStr_20;
#line 615 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeLayoutLabel_25;
#line 615 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeHashDefLabel_26;
#line 615 "trace_gen.m"
    MR_String ll_backend__trace_gen__TraceStmt1_35;
#line 615 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceComponents1_36;
#line 615 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceCode1_37;
#line 615 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceCode2_39;
#line 615 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceCode3_45;
#line 615 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceCode4_50;
#line 615 "trace_gen.m"
    MR_String ll_backend__trace_gen__STATE_VARIABLE_CodeStr_51_51;
#line 615 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_53_53;
#line 615 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_54_54;
#line 615 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_56_56;
#line 615 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_57_57;
#line 615 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_59_59;
#line 615 "trace_gen.m"
    MR_String ll_backend__trace_gen__STATE_VARIABLE_CodeStr_61_61;
#line 615 "trace_gen.m"
    MR_String ll_backend__trace_gen__STATE_VARIABLE_CodeStr_66_66;
#line 615 "trace_gen.m"
    MR_String ll_backend__trace_gen__STATE_VARIABLE_CodeStr_72_72;
#line 615 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_98_98;
#line 615 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_101_101;
#line 615 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_102_102;
#line 615 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_104_104;
#line 615 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_105_105;
#line 615 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_175_175;
#line 615 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_176_176;
#line 617 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_177_177;
#line 617 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_178_178;

#line 616 "trace_gen.m"
    {
#line 616 "trace_gen.m"
      ll_backend__trace_gen__CodeModel_7 = ll_backend__code_info__get_proc_model_1_f_0(ll_backend__trace_gen__CI_4);
    }
#line 617 "trace_gen.m"
    ll_backend__trace_gen__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 0)));
#line 617 "trace_gen.m"
    ll_backend__trace_gen__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 1)));
#line 617 "trace_gen.m"
    ll_backend__trace_gen__MaybeFromFullSlot_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 2)));
#line 617 "trace_gen.m"
    ll_backend__trace_gen__MaybeIoSeqSlot_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 3)));
#line 617 "trace_gen.m"
    ll_backend__trace_gen__MaybeTrailLvals_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 4)));
#line 617 "trace_gen.m"
    ll_backend__trace_gen__MaybeMaxfrLval_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 5)));
#line 617 "trace_gen.m"
    ll_backend__trace_gen__MaybeCallTableLval_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 6)));
#line 617 "trace_gen.m"
    ll_backend__trace_gen__MaybeTailRecInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 7)));
#line 617 "trace_gen.m"
    ll_backend__trace_gen__MaybeRedoLabel_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 8)));
#line 624 "trace_gen.m"
    {
#line 624 "trace_gen.m"
      ll_backend__trace_gen__event_num_slot_2_p_0(ll_backend__trace_gen__CodeModel_7, &ll_backend__trace_gen__EventNumLval_15);
    }
#line 625 "trace_gen.m"
    {
#line 625 "trace_gen.m"
      ll_backend__trace_gen__call_num_slot_2_p_0(ll_backend__trace_gen__CodeModel_7, &ll_backend__trace_gen__CallNumLval_16);
    }
#line 626 "trace_gen.m"
    {
#line 626 "trace_gen.m"
      ll_backend__trace_gen__call_depth_slot_2_p_0(ll_backend__trace_gen__CodeModel_7, &ll_backend__trace_gen__CallDepthLval_17);
    }
#line 627 "trace_gen.m"
    {
#line 627 "trace_gen.m"
      ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__EventNumLval_15, &ll_backend__trace_gen__EventNumStr_18);
    }
#line 628 "trace_gen.m"
    {
#line 628 "trace_gen.m"
      ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallNumLval_16, &ll_backend__trace_gen__CallNumStr_19);
    }
#line 629 "trace_gen.m"
    {
#line 629 "trace_gen.m"
      ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallDepthLval_17, &ll_backend__trace_gen__CallDepthStr_20);
    }
#line 633 "trace_gen.m"
    {
#line 633 "trace_gen.m"
      ll_backend__trace_gen__V_59_59 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallDepthStr_20, (MR_String) ");\n");
    }
#line 633 "trace_gen.m"
    {
#line 633 "trace_gen.m"
      ll_backend__trace_gen__V_57_57 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__trace_gen__V_59_59);
    }
#line 633 "trace_gen.m"
    {
#line 633 "trace_gen.m"
      ll_backend__trace_gen__V_56_56 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallNumStr_19, ll_backend__trace_gen__V_57_57);
    }
#line 632 "trace_gen.m"
    {
#line 632 "trace_gen.m"
      ll_backend__trace_gen__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__trace_gen__V_56_56);
    }
#line 632 "trace_gen.m"
    {
#line 632 "trace_gen.m"
      ll_backend__trace_gen__V_53_53 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__EventNumStr_18, ll_backend__trace_gen__V_54_54);
    }
#line 632 "trace_gen.m"
    {
#line 632 "trace_gen.m"
      ll_backend__trace_gen__STATE_VARIABLE_CodeStr_51_51 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_trace_fill_std_slots(", ll_backend__trace_gen__V_53_53);
    }
#line 643 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeRedoLabel_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 644 "trace_gen.m"
      {
#line 645 "trace_gen.m"
        ll_backend__trace_gen__MaybeLayoutLabel_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 646 "trace_gen.m"
        ll_backend__trace_gen__MaybeHashDefLabel_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 644 "trace_gen.m"
        ll_backend__trace_gen__STATE_VARIABLE_CodeStr_61_61 = ll_backend__trace_gen__STATE_VARIABLE_CodeStr_51_51;
#line 644 "trace_gen.m"
      }
#line 643 "trace_gen.m"
    else
#line 636 "trace_gen.m"
      {
#line 636 "trace_gen.m"
        MR_Word ll_backend__trace_gen__RedoLayoutLval_23;
#line 636 "trace_gen.m"
        MR_String ll_backend__trace_gen__RedoLayoutStr_24;
#line 636 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_62_62;
#line 636 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_64_64;

#line 637 "trace_gen.m"
        {
#line 637 "trace_gen.m"
          ll_backend__trace_gen__redo_layout_slot_2_p_0(ll_backend__trace_gen__CodeModel_7, &ll_backend__trace_gen__RedoLayoutLval_23);
        }
#line 638 "trace_gen.m"
        {
#line 638 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__RedoLayoutLval_23, &ll_backend__trace_gen__RedoLayoutStr_24);
        }
#line 639 "trace_gen.m"
        {
#line 639 "trace_gen.m"
          ll_backend__trace_gen__V_64_64 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__RedoLayoutStr_24, (MR_String) " = (MR_Word) (const MR_Word *) MR_HASH_DEF_LABEL_LAYOUT;\n");
        }
#line 639 "trace_gen.m"
        {
#line 639 "trace_gen.m"
          ll_backend__trace_gen__V_62_62 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__trace_gen__V_64_64);
        }
#line 639 "trace_gen.m"
        {
#line 639 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_CodeStr_61_61 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__STATE_VARIABLE_CodeStr_51_51, ll_backend__trace_gen__V_62_62);
        }
#line 641 "trace_gen.m"
        ll_backend__trace_gen__MaybeLayoutLabel_25 = ll_backend__trace_gen__MaybeRedoLabel_14;
#line 642 "trace_gen.m"
        ll_backend__trace_gen__MaybeHashDefLabel_26 = ll_backend__trace_gen__MaybeRedoLabel_14;
#line 636 "trace_gen.m"
      }
#line 655 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeIoSeqSlot_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 656 "trace_gen.m"
      ll_backend__trace_gen__STATE_VARIABLE_CodeStr_66_66 = ll_backend__trace_gen__STATE_VARIABLE_CodeStr_61_61;
#line 655 "trace_gen.m"
    else
#line 651 "trace_gen.m"
      {
#line 651 "trace_gen.m"
        MR_Word ll_backend__trace_gen__IoSeqLval_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeIoSeqSlot_9, (MR_Integer) 0)));
#line 651 "trace_gen.m"
        MR_String ll_backend__trace_gen__IoSeqStr_28;
#line 651 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_67_67;
#line 651 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_69_69;

#line 652 "trace_gen.m"
        {
#line 652 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__IoSeqLval_27, &ll_backend__trace_gen__IoSeqStr_28);
        }
#line 654 "trace_gen.m"
        {
#line 654 "trace_gen.m"
          ll_backend__trace_gen__V_69_69 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__IoSeqStr_28, (MR_String) " = MR_io_tabling_counter;\n");
        }
#line 654 "trace_gen.m"
        {
#line 654 "trace_gen.m"
          ll_backend__trace_gen__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__trace_gen__V_69_69);
        }
#line 653 "trace_gen.m"
        {
#line 653 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_CodeStr_66_66 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__STATE_VARIABLE_CodeStr_61_61, ll_backend__trace_gen__V_67_67);
        }
#line 651 "trace_gen.m"
      }
#line 670 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeTrailLvals_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 671 "trace_gen.m"
      ll_backend__trace_gen__STATE_VARIABLE_CodeStr_72_72 = ll_backend__trace_gen__STATE_VARIABLE_CodeStr_66_66;
#line 670 "trace_gen.m"
    else
#line 664 "trace_gen.m"
      {
#line 664 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TrailLval_29;
#line 664 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TicketLval_30;
#line 664 "trace_gen.m"
        MR_String ll_backend__trace_gen__TrailLvalStr_31;
#line 664 "trace_gen.m"
        MR_String ll_backend__trace_gen__TicketLvalStr_32;
#line 664 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTrailLvals_10, (MR_Integer) 0)));
#line 664 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_73_73;
#line 664 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_75_75;
#line 664 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_76_76;
#line 664 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_78_78;
#line 664 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_80_80;

#line 664 "trace_gen.m"
        ll_backend__trace_gen__TrailLval_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_71_71, (MR_Integer) 0)));
#line 664 "trace_gen.m"
        ll_backend__trace_gen__TicketLval_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_71_71, (MR_Integer) 1)));
#line 665 "trace_gen.m"
        {
#line 665 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__TrailLval_29, &ll_backend__trace_gen__TrailLvalStr_31);
        }
#line 666 "trace_gen.m"
        {
#line 666 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__TicketLval_30, &ll_backend__trace_gen__TicketLvalStr_32);
        }
#line 669 "trace_gen.m"
        {
#line 669 "trace_gen.m"
          ll_backend__trace_gen__V_80_80 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TrailLvalStr_31, (MR_String) ");\n");
        }
#line 669 "trace_gen.m"
        {
#line 669 "trace_gen.m"
          ll_backend__trace_gen__V_78_78 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_store_ticket(", ll_backend__trace_gen__V_80_80);
        }
#line 668 "trace_gen.m"
        {
#line 668 "trace_gen.m"
          ll_backend__trace_gen__V_76_76 = mercury__string__f_43_43_2_f_0((MR_String) ");\n", ll_backend__trace_gen__V_78_78);
        }
#line 668 "trace_gen.m"
        {
#line 668 "trace_gen.m"
          ll_backend__trace_gen__V_75_75 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TicketLvalStr_32, ll_backend__trace_gen__V_76_76);
        }
#line 668 "trace_gen.m"
        {
#line 668 "trace_gen.m"
          ll_backend__trace_gen__V_73_73 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_mark_ticket_stack(", ll_backend__trace_gen__V_75_75);
        }
#line 667 "trace_gen.m"
        {
#line 667 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_CodeStr_72_72 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__STATE_VARIABLE_CodeStr_66_66, ll_backend__trace_gen__V_73_73);
        }
#line 664 "trace_gen.m"
      }
#line 684 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeFromFullSlot_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 685 "trace_gen.m"
      ll_backend__trace_gen__TraceStmt1_35 = ll_backend__trace_gen__STATE_VARIABLE_CodeStr_72_72;
#line 684 "trace_gen.m"
    else
#line 675 "trace_gen.m"
      {
#line 675 "trace_gen.m"
        MR_Word ll_backend__trace_gen__CallFromFullSlot_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeFromFullSlot_8, (MR_Integer) 0)));
#line 675 "trace_gen.m"
        MR_String ll_backend__trace_gen__CallFromFullSlotStr_34;
#line 675 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_84_84;
#line 675 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_85_85;
#line 675 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_87_87;
#line 675 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_89_89;
#line 675 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_90_90;
#line 675 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_92_92;
#line 675 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_94_94;

#line 676 "trace_gen.m"
        {
#line 676 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallFromFullSlot_33, &ll_backend__trace_gen__CallFromFullSlotStr_34);
        }
#line 682 "trace_gen.m"
        {
#line 682 "trace_gen.m"
          ll_backend__trace_gen__V_94_94 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallDepthStr_20, (MR_String) " = MR_trace_call_depth;\n\t\t}\n");
        }
#line 682 "trace_gen.m"
        {
#line 682 "trace_gen.m"
          ll_backend__trace_gen__V_92_92 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\t", ll_backend__trace_gen__V_94_94);
        }
#line 681 "trace_gen.m"
        {
#line 681 "trace_gen.m"
          ll_backend__trace_gen__V_90_90 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t} else {\n", ll_backend__trace_gen__V_92_92);
        }
#line 680 "trace_gen.m"
        {
#line 680 "trace_gen.m"
          ll_backend__trace_gen__V_89_89 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__STATE_VARIABLE_CodeStr_72_72, ll_backend__trace_gen__V_90_90);
        }
#line 679 "trace_gen.m"
        {
#line 679 "trace_gen.m"
          ll_backend__trace_gen__V_87_87 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tif (MR_trace_from_full) {\n", ll_backend__trace_gen__V_89_89);
        }
#line 678 "trace_gen.m"
        {
#line 678 "trace_gen.m"
          ll_backend__trace_gen__V_85_85 = mercury__string__f_43_43_2_f_0((MR_String) " = MR_trace_from_full;\n", ll_backend__trace_gen__V_87_87);
        }
#line 678 "trace_gen.m"
        {
#line 678 "trace_gen.m"
          ll_backend__trace_gen__V_84_84 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallFromFullSlotStr_34, ll_backend__trace_gen__V_85_85);
        }
#line 678 "trace_gen.m"
        {
#line 678 "trace_gen.m"
          ll_backend__trace_gen__TraceStmt1_35 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__trace_gen__V_84_84);
        }
#line 675 "trace_gen.m"
      }
#line 8007 "ll_backend.trace_gen.c"
    ll_backend__trace_gen__TypeCtorInfo_233_233 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 690 "trace_gen.m"
    {
#line 690 "trace_gen.m"
      ll_backend__trace_gen__V_102_102 = mercury__set__init_0_f_0(ll_backend__trace_gen__TypeCtorInfo_233_233);
    }
#line 690 "trace_gen.m"
    {
#line 690 "trace_gen.m"
      ll_backend__trace_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 690 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_101_101, 0) = ((MR_Box) (ll_backend__trace_gen__V_102_102));
#line 690 "trace_gen.m"
    }
#line 689 "trace_gen.m"
    {
#line 689 "trace_gen.m"
      ll_backend__trace_gen__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 689 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 689 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 1) = ((MR_Box) ((MR_Integer) 1));
#line 689 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 2) = ((MR_Box) ((MR_Integer) 1));
#line 689 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 3) = ((MR_Box) (ll_backend__trace_gen__V_101_101));
#line 689 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 4) = ((MR_Box) (ll_backend__trace_gen__TraceStmt1_35));
#line 689 "trace_gen.m"
    }
#line 690 "trace_gen.m"
    {
#line 690 "trace_gen.m"
      ll_backend__trace_gen__TraceComponents1_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 690 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents1_36, 0) = ((MR_Box) (ll_backend__trace_gen__V_98_98));
#line 690 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents1_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 690 "trace_gen.m"
    }
#line 8048 "ll_backend.trace_gen.c"
    ll_backend__trace_gen__TypeCtorInfo_234_234 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 692 "trace_gen.m"
    {
#line 692 "trace_gen.m"
      ll_backend__trace_gen__V_105_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 692 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 692 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 692 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 2) = ((MR_Box) (ll_backend__trace_gen__TraceComponents1_36));
#line 692 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 3) = ((MR_Box) ((MR_Integer) 1));
#line 692 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 692 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 692 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 6) = ((MR_Box) (ll_backend__trace_gen__MaybeLayoutLabel_25));
#line 692 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 692 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 8) = ((MR_Box) (ll_backend__trace_gen__MaybeHashDefLabel_26));
#line 692 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 9) = ((MR_Box) ((MR_Integer) 1));
#line 692 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 10) = ((MR_Box) ((MR_Integer) 1));
#line 692 "trace_gen.m"
    }
#line 692 "trace_gen.m"
    {
#line 692 "trace_gen.m"
      ll_backend__trace_gen__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 692 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_104_104, 0) = ((MR_Box) (ll_backend__trace_gen__V_105_105));
#line 692 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_104_104, 1) = ((MR_Box) ((MR_String) ""));
#line 692 "trace_gen.m"
    }
#line 691 "trace_gen.m"
    {
#line 691 "trace_gen.m"
      ll_backend__trace_gen__TraceCode1_37 = mercury__cord__singleton_1_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ((MR_Box) (ll_backend__trace_gen__V_104_104)));
    }
#line 702 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeMaxfrLval_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 704 "trace_gen.m"
      {
#line 704 "trace_gen.m"
        ll_backend__trace_gen__TraceCode2_39 = mercury__cord__empty_0_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234);
      }
#line 702 "trace_gen.m"
    else
#line 698 "trace_gen.m"
      {
#line 698 "trace_gen.m"
        MR_Word ll_backend__trace_gen__MaxfrLval_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeMaxfrLval_11, (MR_Integer) 0)));
#line 698 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_114_114;
#line 698 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_115_115;

#line 700 "trace_gen.m"
        {
#line 700 "trace_gen.m"
          ll_backend__trace_gen__V_115_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 700 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_115_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 700 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_115_115, 1) = ((MR_Box) (ll_backend__trace_gen__MaxfrLval_38));
#line 700 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_115_115, 2) = ((MR_Box) (&ll_backend__trace_gen_scalar_common_3[3]));
#line 700 "trace_gen.m"
        }
#line 700 "trace_gen.m"
        {
#line 700 "trace_gen.m"
          ll_backend__trace_gen__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 700 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_114_114, 0) = ((MR_Box) (ll_backend__trace_gen__V_115_115));
#line 700 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_114_114, 1) = ((MR_Box) ((MR_String) "save initial maxfr"));
#line 700 "trace_gen.m"
        }
#line 699 "trace_gen.m"
        {
#line 699 "trace_gen.m"
          ll_backend__trace_gen__TraceCode2_39 = mercury__cord__singleton_1_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ((MR_Box) (ll_backend__trace_gen__V_114_114)));
        }
#line 698 "trace_gen.m"
      }
#line 727 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeTailRecInfo_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 729 "trace_gen.m"
      {
#line 729 "trace_gen.m"
        ll_backend__trace_gen__TraceCode3_45 = mercury__cord__empty_0_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234);
      }
#line 727 "trace_gen.m"
    else
#line 708 "trace_gen.m"
      {
#line 708 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TailRecLval_40;
#line 708 "trace_gen.m"
        MR_String ll_backend__trace_gen__TailRecLvalStr_42;
#line 708 "trace_gen.m"
        MR_String ll_backend__trace_gen__TraceStmt3_43;
#line 708 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TraceComponents3_44;
#line 708 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTailRecInfo_13, (MR_Integer) 0)));
#line 708 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_121_121;
#line 708 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_123_123;
#line 708 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_124_124;
#line 708 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_126_126;
#line 708 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_128_128;
#line 708 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_130_130;
#line 708 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_132_132;
#line 708 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_136_136;
#line 708 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_139_139;
#line 708 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_140_140;
#line 708 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_142_142;
#line 708 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_143_143;
#line 708 "trace_gen.m"
        MR_Word ll_backend__trace_gen___TailRecLabel_41;

#line 708 "trace_gen.m"
        ll_backend__trace_gen__TailRecLval_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_119_119, (MR_Integer) 0)));
#line 708 "trace_gen.m"
        ll_backend__trace_gen___TailRecLabel_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_119_119, (MR_Integer) 1)));
#line 709 "trace_gen.m"
        {
#line 709 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__TailRecLval_40, &ll_backend__trace_gen__TailRecLvalStr_42);
        }
#line 716 "trace_gen.m"
        {
#line 716 "trace_gen.m"
          ll_backend__trace_gen__V_132_132 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TailRecLvalStr_42, (MR_String) " = 0;\n\t\t}");
        }
#line 716 "trace_gen.m"
        {
#line 716 "trace_gen.m"
          ll_backend__trace_gen__V_130_130 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\t", ll_backend__trace_gen__V_132_132);
        }
#line 715 "trace_gen.m"
        {
#line 715 "trace_gen.m"
          ll_backend__trace_gen__V_128_128 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t} else {", ll_backend__trace_gen__V_130_130);
        }
#line 714 "trace_gen.m"
        {
#line 714 "trace_gen.m"
          ll_backend__trace_gen__V_126_126 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\tMR_trace_tailrec_have_reused_frames = MR_FALSE;\n", ll_backend__trace_gen__V_128_128);
        }
#line 713 "trace_gen.m"
        {
#line 713 "trace_gen.m"
          ll_backend__trace_gen__V_124_124 = mercury__string__f_43_43_2_f_0((MR_String) " = MR_trace_tailrec_num_reused_frames;\n", ll_backend__trace_gen__V_126_126);
        }
#line 712 "trace_gen.m"
        {
#line 712 "trace_gen.m"
          ll_backend__trace_gen__V_123_123 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TailRecLvalStr_42, ll_backend__trace_gen__V_124_124);
        }
#line 712 "trace_gen.m"
        {
#line 712 "trace_gen.m"
          ll_backend__trace_gen__V_121_121 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\t", ll_backend__trace_gen__V_123_123);
        }
#line 711 "trace_gen.m"
        {
#line 711 "trace_gen.m"
          ll_backend__trace_gen__TraceStmt3_43 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tif (MR_trace_tailrec_have_reused_frames) {\n", ll_backend__trace_gen__V_121_121);
        }
#line 719 "trace_gen.m"
        {
#line 719 "trace_gen.m"
          ll_backend__trace_gen__V_140_140 = mercury__set__init_0_f_0(ll_backend__trace_gen__TypeCtorInfo_233_233);
        }
#line 719 "trace_gen.m"
        {
#line 719 "trace_gen.m"
          ll_backend__trace_gen__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 719 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_139_139, 0) = ((MR_Box) (ll_backend__trace_gen__V_140_140));
#line 719 "trace_gen.m"
        }
#line 718 "trace_gen.m"
        {
#line 718 "trace_gen.m"
          ll_backend__trace_gen__V_136_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 718 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_136_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 718 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_136_136, 1) = ((MR_Box) ((MR_Integer) 1));
#line 718 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_136_136, 2) = ((MR_Box) ((MR_Integer) 1));
#line 718 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_136_136, 3) = ((MR_Box) (ll_backend__trace_gen__V_139_139));
#line 718 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_136_136, 4) = ((MR_Box) (ll_backend__trace_gen__TraceStmt3_43));
#line 718 "trace_gen.m"
        }
#line 720 "trace_gen.m"
        {
#line 720 "trace_gen.m"
          ll_backend__trace_gen__TraceComponents3_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 720 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents3_44, 0) = ((MR_Box) (ll_backend__trace_gen__V_136_136));
#line 720 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents3_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 720 "trace_gen.m"
        }
#line 722 "trace_gen.m"
        {
#line 722 "trace_gen.m"
          ll_backend__trace_gen__V_143_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 722 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 722 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 722 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 2) = ((MR_Box) (ll_backend__trace_gen__TraceComponents3_44));
#line 722 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 3) = ((MR_Box) ((MR_Integer) 1));
#line 722 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 722 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 722 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 722 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 722 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 722 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 9) = ((MR_Box) ((MR_Integer) 1));
#line 722 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 10) = ((MR_Box) ((MR_Integer) 1));
#line 722 "trace_gen.m"
        }
#line 722 "trace_gen.m"
        {
#line 722 "trace_gen.m"
          ll_backend__trace_gen__V_142_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 722 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_142_142, 0) = ((MR_Box) (ll_backend__trace_gen__V_143_143));
#line 722 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_142_142, 1) = ((MR_Box) ((MR_String) "initialize tail recursion count"));
#line 722 "trace_gen.m"
        }
#line 721 "trace_gen.m"
        {
#line 721 "trace_gen.m"
          ll_backend__trace_gen__TraceCode3_45 = mercury__cord__singleton_1_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ((MR_Box) (ll_backend__trace_gen__V_142_142)));
        }
#line 708 "trace_gen.m"
      }
#line 744 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeCallTableLval_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 746 "trace_gen.m"
      {
#line 746 "trace_gen.m"
        ll_backend__trace_gen__TraceCode4_50 = mercury__cord__empty_0_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234);
      }
#line 744 "trace_gen.m"
    else
#line 733 "trace_gen.m"
      {
#line 733 "trace_gen.m"
        MR_Word ll_backend__trace_gen__CallTableLval_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeCallTableLval_12, (MR_Integer) 0)));
#line 733 "trace_gen.m"
        MR_String ll_backend__trace_gen__CallTableLvalStr_47;
#line 733 "trace_gen.m"
        MR_String ll_backend__trace_gen__TraceStmt4_48;
#line 733 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TraceComponents4_49;
#line 733 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_155_155;
#line 733 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_157_157;
#line 733 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_160_160;
#line 733 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_161_161;
#line 733 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_163_163;
#line 733 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_164_164;

#line 734 "trace_gen.m"
        {
#line 734 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallTableLval_46, &ll_backend__trace_gen__CallTableLvalStr_47);
        }
#line 735 "trace_gen.m"
        {
#line 735 "trace_gen.m"
          ll_backend__trace_gen__V_155_155 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallTableLvalStr_47, (MR_String) " = 0;\n");
        }
#line 735 "trace_gen.m"
        {
#line 735 "trace_gen.m"
          ll_backend__trace_gen__TraceStmt4_48 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__trace_gen__V_155_155);
        }
#line 737 "trace_gen.m"
        {
#line 737 "trace_gen.m"
          ll_backend__trace_gen__V_161_161 = mercury__set__init_0_f_0(ll_backend__trace_gen__TypeCtorInfo_233_233);
        }
#line 737 "trace_gen.m"
        {
#line 737 "trace_gen.m"
          ll_backend__trace_gen__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 737 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_160_160, 0) = ((MR_Box) (ll_backend__trace_gen__V_161_161));
#line 737 "trace_gen.m"
        }
#line 736 "trace_gen.m"
        {
#line 736 "trace_gen.m"
          ll_backend__trace_gen__V_157_157 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 736 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_157_157, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 736 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_157_157, 1) = ((MR_Box) ((MR_Integer) 1));
#line 736 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_157_157, 2) = ((MR_Box) ((MR_Integer) 1));
#line 736 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_157_157, 3) = ((MR_Box) (ll_backend__trace_gen__V_160_160));
#line 736 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_157_157, 4) = ((MR_Box) (ll_backend__trace_gen__TraceStmt4_48));
#line 736 "trace_gen.m"
        }
#line 738 "trace_gen.m"
        {
#line 738 "trace_gen.m"
          ll_backend__trace_gen__TraceComponents4_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 738 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents4_49, 0) = ((MR_Box) (ll_backend__trace_gen__V_157_157));
#line 738 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents4_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 738 "trace_gen.m"
        }
#line 740 "trace_gen.m"
        {
#line 740 "trace_gen.m"
          ll_backend__trace_gen__V_164_164 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 740 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 740 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 740 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 2) = ((MR_Box) (ll_backend__trace_gen__TraceComponents4_49));
#line 740 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 3) = ((MR_Box) ((MR_Integer) 1));
#line 740 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 740 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 740 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 740 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 740 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 740 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 9) = ((MR_Box) ((MR_Integer) 1));
#line 740 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 10) = ((MR_Box) ((MR_Integer) 1));
#line 740 "trace_gen.m"
        }
#line 740 "trace_gen.m"
        {
#line 740 "trace_gen.m"
          ll_backend__trace_gen__V_163_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 740 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_163_163, 0) = ((MR_Box) (ll_backend__trace_gen__V_164_164));
#line 740 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_163_163, 1) = ((MR_Box) ((MR_String) ""));
#line 740 "trace_gen.m"
        }
#line 739 "trace_gen.m"
        {
#line 739 "trace_gen.m"
          ll_backend__trace_gen__TraceCode4_50 = mercury__cord__singleton_1_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ((MR_Box) (ll_backend__trace_gen__V_163_163)));
        }
#line 733 "trace_gen.m"
      }
#line 748 "trace_gen.m"
    {
#line 748 "trace_gen.m"
      ll_backend__trace_gen__V_176_176 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ll_backend__trace_gen__TraceCode3_45, ll_backend__trace_gen__TraceCode4_50);
    }
#line 748 "trace_gen.m"
    {
#line 748 "trace_gen.m"
      ll_backend__trace_gen__V_175_175 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ll_backend__trace_gen__TraceCode2_39, ll_backend__trace_gen__V_176_176);
    }
#line 748 "trace_gen.m"
    {
#line 748 "trace_gen.m"
      *ll_backend__trace_gen__TraceCode_6 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ll_backend__trace_gen__TraceCode1_37, ll_backend__trace_gen__V_175_175);
    }
#line 615 "trace_gen.m"
  }
#line 174 "trace_gen.m"
}

#line 168 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__trace_setup_9_p_0(
#line 168 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ModuleInfo_10,
#line 168 "trace_gen.m"
  MR_Word ll_backend__trace_gen__PredInfo_11,
#line 168 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ProcInfo_12,
#line 168 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Globals_13,
#line 168 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeTailRecLabel_14,
#line 168 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__TraceSlotInfo_15,
#line 168 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__TraceInfo_16,
#line 168 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_59,
#line 168 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_60)
#line 168 "trace_gen.m"
{
#line 499 "trace_gen.m"
  {
#line 499 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 499 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CodeModel_18;
#line 499 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceLevel_19;
#line 499 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceSuppress_20;
#line 499 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceTableIo_21;
#line 499 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceRedo_22;
#line 499 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeRedoLayoutLabel_25;
#line 499 "trace_gen.m"
    MR_Word ll_backend__trace_gen__HasFromFullSlot_26;
#line 499 "trace_gen.m"
    MR_Word ll_backend__trace_gen__StackId_27;
#line 499 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeFromFullSlot_29;
#line 499 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeFromFullSlotLval_31;
#line 499 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeIoSeqSlot_33;
#line 499 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeIoSeqLval_35;
#line 499 "trace_gen.m"
    MR_Word ll_backend__trace_gen__UseTrail_36;
#line 499 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTrailSlot_39;
#line 499 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTrailLvals_42;
#line 499 "trace_gen.m"
    MR_Word ll_backend__trace_gen__NeedsMaxfrSlot_43;
#line 499 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeMaxfrSlot_45;
#line 499 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeMaxfrLval_47;
#line 499 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTailRecSlot_50;
#line 499 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTailRecInfo_52;
#line 499 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeCallTableTip_53;
#line 499 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeCallTableSlot_56;
#line 499 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeCallTableLval_58;
#line 499 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__STATE_VARIABLE_NextSlot_64_64;
#line 499 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__STATE_VARIABLE_NextSlot_66_66;
#line 499 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__STATE_VARIABLE_NextSlot_68_68;
#line 499 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__STATE_VARIABLE_NextSlot_73_73;
#line 499 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__STATE_VARIABLE_NextSlot_75_75;
#line 499 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__STATE_VARIABLE_NextSlot_78_78;

#line 500 "trace_gen.m"
    {
#line 500 "trace_gen.m"
      ll_backend__trace_gen__CodeModel_18 = ll_backend__code_info__get_proc_model_1_f_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_59);
    }
#line 501 "trace_gen.m"
    {
#line 501 "trace_gen.m"
      libs__globals__get_trace_level_2_p_0(ll_backend__trace_gen__Globals_13, &ll_backend__trace_gen__TraceLevel_19);
    }
#line 502 "trace_gen.m"
    {
#line 502 "trace_gen.m"
      libs__globals__get_trace_suppress_2_p_0(ll_backend__trace_gen__Globals_13, &ll_backend__trace_gen__TraceSuppress_20);
    }
#line 503 "trace_gen.m"
    {
#line 503 "trace_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__trace_gen__Globals_13, (MR_Integer) 123, &ll_backend__trace_gen__TraceTableIo_21);
    }
#line 504 "trace_gen.m"
    {
#line 504 "trace_gen.m"
      ll_backend__trace_gen__TraceRedo_22 = libs__trace_params__eff_trace_needs_port_6_f_0(ll_backend__trace_gen__ModuleInfo_10, ll_backend__trace_gen__PredInfo_11, ll_backend__trace_gen__ProcInfo_12, ll_backend__trace_gen__TraceLevel_19, ll_backend__trace_gen__TraceSuppress_20, (MR_Integer) 2);
    }
#line 509 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__TraceRedo_22 == (MR_Integer) 1);
#line 509 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 510 "trace_gen.m"
      ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CodeModel_18 == (MR_Integer) 2);
#line 508 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 512 "trace_gen.m"
      {
#line 512 "trace_gen.m"
        MR_Word ll_backend__trace_gen__RedoLayoutLabel_24;

#line 512 "trace_gen.m"
        {
#line 512 "trace_gen.m"
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__trace_gen__RedoLayoutLabel_24, ll_backend__trace_gen__STATE_VARIABLE_CI_0_59, ll_backend__trace_gen__STATE_VARIABLE_CI_60);
        }
#line 513 "trace_gen.m"
        {
#line 513 "trace_gen.m"
          ll_backend__trace_gen__MaybeRedoLayoutLabel_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 513 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeRedoLayoutLabel_25, 0) = ((MR_Box) (ll_backend__trace_gen__RedoLayoutLabel_24));
#line 513 "trace_gen.m"
        }
#line 516 "trace_gen.m"
        ll_backend__trace_gen__STATE_VARIABLE_NextSlot_64_64 = (MR_Integer) 5;
#line 512 "trace_gen.m"
      }
#line 508 "trace_gen.m"
    else
#line 518 "trace_gen.m"
      {
#line 518 "trace_gen.m"
        ll_backend__trace_gen__MaybeRedoLayoutLabel_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 520 "trace_gen.m"
        ll_backend__trace_gen__STATE_VARIABLE_NextSlot_64_64 = (MR_Integer) 4;
#line 518 "trace_gen.m"
        *ll_backend__trace_gen__STATE_VARIABLE_CI_60 = ll_backend__trace_gen__STATE_VARIABLE_CI_0_59;
#line 518 "trace_gen.m"
      }
#line 523 "trace_gen.m"
    {
#line 523 "trace_gen.m"
      ll_backend__trace_gen__HasFromFullSlot_26 = libs__trace_params__eff_trace_level_needs_from_full_slot_4_f_0(ll_backend__trace_gen__ModuleInfo_10, ll_backend__trace_gen__PredInfo_11, ll_backend__trace_gen__ProcInfo_12, ll_backend__trace_gen__TraceLevel_19);
    }
#line 525 "trace_gen.m"
    {
#line 525 "trace_gen.m"
      ll_backend__trace_gen__StackId_27 = ll_backend__llds__code_model_to_main_stack_1_f_0(ll_backend__trace_gen__CodeModel_18);
    }
#line 533 "trace_gen.m"
#line 533 "trace_gen.m"
    switch (ll_backend__trace_gen__HasFromFullSlot_26) {
#line 533 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 533 "trace_gen.m"
      case (MR_Integer) 0:
#line 534 "trace_gen.m"
        {
#line 535 "trace_gen.m"
          ll_backend__trace_gen__MaybeFromFullSlot_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 536 "trace_gen.m"
          ll_backend__trace_gen__MaybeFromFullSlotLval_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 534 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_NextSlot_66_66 = ll_backend__trace_gen__STATE_VARIABLE_NextSlot_64_64;
#line 534 "trace_gen.m"
        }
#line 533 "trace_gen.m"
        break;
#line 533 "trace_gen.m"
      case (MR_Integer) 1:
#line 527 "trace_gen.m"
        {
#line 527 "trace_gen.m"
          MR_Word ll_backend__trace_gen__FromFullSlotLval_30;

#line 529 "trace_gen.m"
          {
#line 529 "trace_gen.m"
            ll_backend__trace_gen__MaybeFromFullSlot_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 529 "trace_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeFromFullSlot_29, 0) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_64_64));
#line 529 "trace_gen.m"
          }
#line 530 "trace_gen.m"
          {
#line 530 "trace_gen.m"
            ll_backend__trace_gen__FromFullSlotLval_30 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__STATE_VARIABLE_NextSlot_64_64);
          }
#line 531 "trace_gen.m"
          {
#line 531 "trace_gen.m"
            ll_backend__trace_gen__MaybeFromFullSlotLval_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 531 "trace_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeFromFullSlotLval_31, 0) = ((MR_Box) (ll_backend__trace_gen__FromFullSlotLval_30));
#line 531 "trace_gen.m"
          }
#line 532 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_NextSlot_66_66 = (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_64_64 + (MR_Integer) 1);
#line 527 "trace_gen.m"
        }
#line 533 "trace_gen.m"
        break;
#line 533 "trace_gen.m"
    }
#line 546 "trace_gen.m"
#line 546 "trace_gen.m"
    switch (ll_backend__trace_gen__TraceTableIo_21) {
#line 546 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 546 "trace_gen.m"
      case (MR_Integer) 0:
#line 547 "trace_gen.m"
        {
#line 548 "trace_gen.m"
          ll_backend__trace_gen__MaybeIoSeqSlot_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 549 "trace_gen.m"
          ll_backend__trace_gen__MaybeIoSeqLval_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 547 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_NextSlot_68_68 = ll_backend__trace_gen__STATE_VARIABLE_NextSlot_66_66;
#line 547 "trace_gen.m"
        }
#line 546 "trace_gen.m"
        break;
#line 546 "trace_gen.m"
      case (MR_Integer) 1:
#line 540 "trace_gen.m"
        {
#line 540 "trace_gen.m"
          MR_Word ll_backend__trace_gen__IoSeqLval_34;

#line 542 "trace_gen.m"
          {
#line 542 "trace_gen.m"
            ll_backend__trace_gen__MaybeIoSeqSlot_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 542 "trace_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeIoSeqSlot_33, 0) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_66_66));
#line 542 "trace_gen.m"
          }
#line 543 "trace_gen.m"
          {
#line 543 "trace_gen.m"
            ll_backend__trace_gen__IoSeqLval_34 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__STATE_VARIABLE_NextSlot_66_66);
          }
#line 544 "trace_gen.m"
          {
#line 544 "trace_gen.m"
            ll_backend__trace_gen__MaybeIoSeqLval_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 544 "trace_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeIoSeqLval_35, 0) = ((MR_Box) (ll_backend__trace_gen__IoSeqLval_34));
#line 544 "trace_gen.m"
          }
#line 545 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_NextSlot_68_68 = (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_66_66 + (MR_Integer) 1);
#line 540 "trace_gen.m"
        }
#line 546 "trace_gen.m"
        break;
#line 546 "trace_gen.m"
    }
#line 552 "trace_gen.m"
    {
#line 552 "trace_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__trace_gen__Globals_13, (MR_Integer) 216, &ll_backend__trace_gen__UseTrail_36);
    }
#line 562 "trace_gen.m"
#line 562 "trace_gen.m"
    switch (ll_backend__trace_gen__UseTrail_36) {
#line 562 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 562 "trace_gen.m"
      case (MR_Integer) 0:
#line 563 "trace_gen.m"
        {
#line 564 "trace_gen.m"
          ll_backend__trace_gen__MaybeTrailSlot_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 565 "trace_gen.m"
          ll_backend__trace_gen__MaybeTrailLvals_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 563 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_NextSlot_73_73 = ll_backend__trace_gen__STATE_VARIABLE_NextSlot_68_68;
#line 563 "trace_gen.m"
        }
#line 562 "trace_gen.m"
        break;
#line 562 "trace_gen.m"
      case (MR_Integer) 1:
#line 554 "trace_gen.m"
        {
#line 554 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__TicketSlot_38 = (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_68_68 + (MR_Integer) 1);
#line 554 "trace_gen.m"
          MR_Word ll_backend__trace_gen__TrailLval_40;
#line 554 "trace_gen.m"
          MR_Word ll_backend__trace_gen__TicketLval_41;
#line 554 "trace_gen.m"
          MR_Word ll_backend__trace_gen__V_72_72;

#line 557 "trace_gen.m"
          {
#line 557 "trace_gen.m"
            ll_backend__trace_gen__MaybeTrailSlot_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 557 "trace_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTrailSlot_39, 0) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_68_68));
#line 557 "trace_gen.m"
          }
#line 558 "trace_gen.m"
          {
#line 558 "trace_gen.m"
            ll_backend__trace_gen__TrailLval_40 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__STATE_VARIABLE_NextSlot_68_68);
          }
#line 559 "trace_gen.m"
          {
#line 559 "trace_gen.m"
            ll_backend__trace_gen__TicketLval_41 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__TicketSlot_38);
          }
#line 560 "trace_gen.m"
          {
#line 560 "trace_gen.m"
            ll_backend__trace_gen__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 560 "trace_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_72_72, 0) = ((MR_Box) (ll_backend__trace_gen__TrailLval_40));
#line 560 "trace_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_72_72, 1) = ((MR_Box) (ll_backend__trace_gen__TicketLval_41));
#line 560 "trace_gen.m"
          }
#line 560 "trace_gen.m"
          {
#line 560 "trace_gen.m"
            ll_backend__trace_gen__MaybeTrailLvals_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 560 "trace_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTrailLvals_42, 0) = ((MR_Box) (ll_backend__trace_gen__V_72_72));
#line 560 "trace_gen.m"
          }
#line 561 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_NextSlot_73_73 = (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_68_68 + (MR_Integer) 2);
#line 554 "trace_gen.m"
        }
#line 562 "trace_gen.m"
        break;
#line 562 "trace_gen.m"
    }
#line 568 "trace_gen.m"
    {
#line 568 "trace_gen.m"
      hlds__hlds_pred__proc_info_get_needs_maxfr_slot_2_p_0(ll_backend__trace_gen__ProcInfo_12, &ll_backend__trace_gen__NeedsMaxfrSlot_43);
    }
#line 576 "trace_gen.m"
#line 576 "trace_gen.m"
    switch (ll_backend__trace_gen__NeedsMaxfrSlot_43) {
#line 576 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 576 "trace_gen.m"
      case (MR_Integer) 1:
#line 577 "trace_gen.m"
        {
#line 578 "trace_gen.m"
          ll_backend__trace_gen__MaybeMaxfrSlot_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 579 "trace_gen.m"
          ll_backend__trace_gen__MaybeMaxfrLval_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 577 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_NextSlot_75_75 = ll_backend__trace_gen__STATE_VARIABLE_NextSlot_73_73;
#line 577 "trace_gen.m"
        }
#line 576 "trace_gen.m"
        break;
#line 576 "trace_gen.m"
      case (MR_Integer) 0:
#line 570 "trace_gen.m"
        {
#line 570 "trace_gen.m"
          MR_Word ll_backend__trace_gen__MaxfrLval_46;

#line 572 "trace_gen.m"
          {
#line 572 "trace_gen.m"
            ll_backend__trace_gen__MaybeMaxfrSlot_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 572 "trace_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeMaxfrSlot_45, 0) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_73_73));
#line 572 "trace_gen.m"
          }
#line 573 "trace_gen.m"
          {
#line 573 "trace_gen.m"
            ll_backend__trace_gen__MaxfrLval_46 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__STATE_VARIABLE_NextSlot_73_73);
          }
#line 574 "trace_gen.m"
          {
#line 574 "trace_gen.m"
            ll_backend__trace_gen__MaybeMaxfrLval_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 574 "trace_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeMaxfrLval_47, 0) = ((MR_Box) (ll_backend__trace_gen__MaxfrLval_46));
#line 574 "trace_gen.m"
          }
#line 575 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_NextSlot_75_75 = (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_73_73 + (MR_Integer) 1);
#line 570 "trace_gen.m"
        }
#line 576 "trace_gen.m"
        break;
#line 576 "trace_gen.m"
    }
#line 589 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeTailRecLabel_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 590 "trace_gen.m"
      {
#line 591 "trace_gen.m"
        ll_backend__trace_gen__MaybeTailRecSlot_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 592 "trace_gen.m"
        ll_backend__trace_gen__MaybeTailRecInfo_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 590 "trace_gen.m"
        ll_backend__trace_gen__STATE_VARIABLE_NextSlot_78_78 = ll_backend__trace_gen__STATE_VARIABLE_NextSlot_75_75;
#line 590 "trace_gen.m"
      }
#line 589 "trace_gen.m"
    else
#line 583 "trace_gen.m"
      {
#line 583 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TailRecLabel_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTailRecLabel_14, (MR_Integer) 0)));
#line 583 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TailRecLval_51;
#line 583 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_77_77;

#line 585 "trace_gen.m"
        {
#line 585 "trace_gen.m"
          ll_backend__trace_gen__MaybeTailRecSlot_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 585 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTailRecSlot_50, 0) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_75_75));
#line 585 "trace_gen.m"
        }
#line 586 "trace_gen.m"
        {
#line 586 "trace_gen.m"
          ll_backend__trace_gen__TailRecLval_51 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__STATE_VARIABLE_NextSlot_75_75);
        }
#line 587 "trace_gen.m"
        {
#line 587 "trace_gen.m"
          ll_backend__trace_gen__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 587 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_77_77, 0) = ((MR_Box) (ll_backend__trace_gen__TailRecLval_51));
#line 587 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_77_77, 1) = ((MR_Box) (ll_backend__trace_gen__TailRecLabel_48));
#line 587 "trace_gen.m"
        }
#line 587 "trace_gen.m"
        {
#line 587 "trace_gen.m"
          ll_backend__trace_gen__MaybeTailRecInfo_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 587 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTailRecInfo_52, 0) = ((MR_Box) (ll_backend__trace_gen__V_77_77));
#line 587 "trace_gen.m"
        }
#line 588 "trace_gen.m"
        ll_backend__trace_gen__STATE_VARIABLE_NextSlot_78_78 = (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_75_75 + (MR_Integer) 1);
#line 583 "trace_gen.m"
      }
#line 595 "trace_gen.m"
    {
#line 595 "trace_gen.m"
      hlds__hlds_pred__proc_info_get_call_table_tip_2_p_0(ll_backend__trace_gen__ProcInfo_12, &ll_backend__trace_gen__MaybeCallTableTip_53);
    }
#line 602 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeCallTableTip_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 603 "trace_gen.m"
      {
#line 604 "trace_gen.m"
        ll_backend__trace_gen__MaybeCallTableSlot_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 605 "trace_gen.m"
        ll_backend__trace_gen__MaybeCallTableLval_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 603 "trace_gen.m"
      }
#line 602 "trace_gen.m"
    else
#line 597 "trace_gen.m"
      {
#line 597 "trace_gen.m"
        MR_Word ll_backend__trace_gen__CallTableLval_57;

#line 599 "trace_gen.m"
        {
#line 599 "trace_gen.m"
          ll_backend__trace_gen__MaybeCallTableSlot_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 599 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeCallTableSlot_56, 0) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_78_78));
#line 599 "trace_gen.m"
        }
#line 600 "trace_gen.m"
        {
#line 600 "trace_gen.m"
          ll_backend__trace_gen__CallTableLval_57 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__STATE_VARIABLE_NextSlot_78_78);
        }
#line 601 "trace_gen.m"
        {
#line 601 "trace_gen.m"
          ll_backend__trace_gen__MaybeCallTableLval_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 601 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeCallTableLval_58, 0) = ((MR_Box) (ll_backend__trace_gen__CallTableLval_57));
#line 601 "trace_gen.m"
        }
#line 597 "trace_gen.m"
      }
#line 608 "trace_gen.m"
    {
#line 608 "trace_gen.m"
      MR_Word base;
#line 608 "trace_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 608 "trace_gen.m"
      *ll_backend__trace_gen__TraceSlotInfo_15 = base;
#line 608 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__trace_gen__MaybeFromFullSlot_29));
#line 608 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__trace_gen__MaybeIoSeqSlot_33));
#line 608 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__trace_gen__MaybeTrailSlot_39));
#line 608 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__trace_gen__MaybeMaxfrSlot_45));
#line 608 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__trace_gen__MaybeCallTableSlot_56));
#line 608 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__trace_gen__MaybeTailRecSlot_50));
#line 608 "trace_gen.m"
    }
#line 610 "trace_gen.m"
    {
#line 610 "trace_gen.m"
      MR_Word base;
#line 610 "trace_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 610 "trace_gen.m"
      *ll_backend__trace_gen__TraceInfo_16 = base;
#line 610 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__trace_gen__TraceLevel_19));
#line 610 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__trace_gen__TraceSuppress_20));
#line 610 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__trace_gen__MaybeFromFullSlotLval_31));
#line 610 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__trace_gen__MaybeIoSeqLval_35));
#line 610 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__trace_gen__MaybeTrailLvals_42));
#line 610 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__trace_gen__MaybeMaxfrLval_47));
#line 610 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__trace_gen__MaybeCallTableLval_58));
#line 610 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__trace_gen__MaybeTailRecInfo_52));
#line 610 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__trace_gen__MaybeRedoLayoutLabel_25));
#line 610 "trace_gen.m"
    }
#line 499 "trace_gen.m"
  }
#line 168 "trace_gen.m"
}

#line 160 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__trace_reserved_slots_6_p_0(
#line 160 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ModuleInfo_7,
#line 160 "trace_gen.m"
  MR_Word ll_backend__trace_gen__PredInfo_8,
#line 160 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ProcInfo_9,
#line 160 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Globals_10,
#line 160 "trace_gen.m"
  MR_Integer * ll_backend__trace_gen__ReservedSlots_11,
#line 160 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__MaybeTableVarInfo_12)
#line 160 "trace_gen.m"
{
#line 415 "trace_gen.m"
  {
#line 415 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 415 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceLevel_13;
#line 415 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceSuppress_14;
#line 415 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceTableIo_15;
#line 415 "trace_gen.m"
    MR_Word ll_backend__trace_gen__FixedSlots_16;

#line 416 "trace_gen.m"
    {
#line 416 "trace_gen.m"
      libs__globals__get_trace_level_2_p_0(ll_backend__trace_gen__Globals_10, &ll_backend__trace_gen__TraceLevel_13);
    }
#line 417 "trace_gen.m"
    {
#line 417 "trace_gen.m"
      libs__globals__get_trace_suppress_2_p_0(ll_backend__trace_gen__Globals_10, &ll_backend__trace_gen__TraceSuppress_14);
    }
#line 418 "trace_gen.m"
    {
#line 418 "trace_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__trace_gen__Globals_10, (MR_Integer) 123, &ll_backend__trace_gen__TraceTableIo_15);
    }
#line 419 "trace_gen.m"
    {
#line 419 "trace_gen.m"
      ll_backend__trace_gen__FixedSlots_16 = libs__trace_params__eff_trace_level_needs_fixed_slots_4_f_0(ll_backend__trace_gen__ModuleInfo_7, ll_backend__trace_gen__PredInfo_8, ll_backend__trace_gen__ProcInfo_9, ll_backend__trace_gen__TraceLevel_13);
    }
#line 425 "trace_gen.m"
#line 425 "trace_gen.m"
    switch (ll_backend__trace_gen__FixedSlots_16) {
#line 425 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 425 "trace_gen.m"
      case (MR_Integer) 0:
#line 422 "trace_gen.m"
        {
#line 423 "trace_gen.m"
          *ll_backend__trace_gen__ReservedSlots_11 = (MR_Integer) 0;
#line 424 "trace_gen.m"
          *ll_backend__trace_gen__MaybeTableVarInfo_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 422 "trace_gen.m"
        }
#line 425 "trace_gen.m"
        break;
#line 425 "trace_gen.m"
      case (MR_Integer) 1:
#line 426 "trace_gen.m"
        {
#line 426 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__RedoLayout_18;
#line 426 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__FromFull_19;
#line 426 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__IoSeq_20;
#line 426 "trace_gen.m"
          MR_Word ll_backend__trace_gen__UseTrail_21;
#line 426 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__Trail_22;
#line 426 "trace_gen.m"
          MR_Word ll_backend__trace_gen__NeedsMaxfrSlot_23;
#line 426 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__Maxfr_24;
#line 426 "trace_gen.m"
          MR_Word ll_backend__trace_gen__TailCallEvents_25;
#line 426 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__TailRec_26;
#line 426 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__ReservedSlots0_27;
#line 426 "trace_gen.m"
          MR_Word ll_backend__trace_gen__MaybeCallTableVar_28;
#line 426 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__V_36_36;
#line 426 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__V_37_37;
#line 426 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__V_38_38;
#line 426 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__V_39_39;
#line 426 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__V_40_40;
#line 431 "trace_gen.m"
          MR_Word ll_backend__trace_gen__V_31_31;
#line 431 "trace_gen.m"
          MR_Word ll_backend__trace_gen__V_32_32;
#line 431 "trace_gen.m"
          MR_Word ll_backend__trace_gen__V_33_33;
#line 442 "trace_gen.m"
          MR_Word ll_backend__trace_gen__V_34_34;

#line 431 "trace_gen.m"
          {
#line 431 "trace_gen.m"
            ll_backend__trace_gen__V_31_31 = hlds__code_model__proc_info_interface_code_model_1_f_0(ll_backend__trace_gen__ProcInfo_9);
          }
#line 431 "trace_gen.m"
          ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_31_31 == (MR_Integer) 2);
#line 431 "trace_gen.m"
          if (ll_backend__trace_gen__succeeded)
#line 431 "trace_gen.m"
            {
#line 433 "trace_gen.m"
              ll_backend__trace_gen__V_33_33 = (MR_Integer) 2;
#line 432 "trace_gen.m"
              {
#line 432 "trace_gen.m"
                ll_backend__trace_gen__V_32_32 = libs__trace_params__eff_trace_needs_port_6_f_0(ll_backend__trace_gen__ModuleInfo_7, ll_backend__trace_gen__PredInfo_8, ll_backend__trace_gen__ProcInfo_9, ll_backend__trace_gen__TraceLevel_13, ll_backend__trace_gen__TraceSuppress_14, ll_backend__trace_gen__V_33_33);
              }
#line 433 "trace_gen.m"
              ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_32_32 == (MR_Integer) 1);
#line 431 "trace_gen.m"
            }
#line 430 "trace_gen.m"
          if (ll_backend__trace_gen__succeeded)
#line 435 "trace_gen.m"
            ll_backend__trace_gen__RedoLayout_18 = (MR_Integer) 1;
#line 430 "trace_gen.m"
          else
#line 437 "trace_gen.m"
            ll_backend__trace_gen__RedoLayout_18 = (MR_Integer) 0;
#line 441 "trace_gen.m"
          {
#line 441 "trace_gen.m"
            ll_backend__trace_gen__V_34_34 = libs__trace_params__eff_trace_level_needs_from_full_slot_4_f_0(ll_backend__trace_gen__ModuleInfo_7, ll_backend__trace_gen__PredInfo_8, ll_backend__trace_gen__ProcInfo_9, ll_backend__trace_gen__TraceLevel_13);
          }
#line 442 "trace_gen.m"
          ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_34_34 == (MR_Integer) 1);
#line 440 "trace_gen.m"
          if (ll_backend__trace_gen__succeeded)
#line 444 "trace_gen.m"
            ll_backend__trace_gen__FromFull_19 = (MR_Integer) 1;
#line 440 "trace_gen.m"
          else
#line 446 "trace_gen.m"
            ll_backend__trace_gen__FromFull_19 = (MR_Integer) 0;
#line 452 "trace_gen.m"
#line 452 "trace_gen.m"
          switch (ll_backend__trace_gen__TraceTableIo_15) {
#line 452 "trace_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 452 "trace_gen.m"
            case (MR_Integer) 0:
#line 454 "trace_gen.m"
              ll_backend__trace_gen__IoSeq_20 = (MR_Integer) 0;
#line 452 "trace_gen.m"
              break;
#line 452 "trace_gen.m"
            case (MR_Integer) 1:
#line 451 "trace_gen.m"
              ll_backend__trace_gen__IoSeq_20 = (MR_Integer) 1;
#line 452 "trace_gen.m"
              break;
#line 452 "trace_gen.m"
          }
#line 457 "trace_gen.m"
          {
#line 457 "trace_gen.m"
            libs__globals__lookup_bool_option_3_p_0(ll_backend__trace_gen__Globals_10, (MR_Integer) 216, &ll_backend__trace_gen__UseTrail_21);
          }
#line 461 "trace_gen.m"
#line 461 "trace_gen.m"
          switch (ll_backend__trace_gen__UseTrail_21) {
#line 461 "trace_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 461 "trace_gen.m"
            case (MR_Integer) 0:
#line 463 "trace_gen.m"
              ll_backend__trace_gen__Trail_22 = (MR_Integer) 0;
#line 461 "trace_gen.m"
              break;
#line 461 "trace_gen.m"
            case (MR_Integer) 1:
#line 460 "trace_gen.m"
              ll_backend__trace_gen__Trail_22 = (MR_Integer) 2;
#line 461 "trace_gen.m"
              break;
#line 461 "trace_gen.m"
          }
#line 466 "trace_gen.m"
          {
#line 466 "trace_gen.m"
            hlds__hlds_pred__proc_info_get_needs_maxfr_slot_2_p_0(ll_backend__trace_gen__ProcInfo_9, &ll_backend__trace_gen__NeedsMaxfrSlot_23);
          }
#line 470 "trace_gen.m"
#line 470 "trace_gen.m"
          switch (ll_backend__trace_gen__NeedsMaxfrSlot_23) {
#line 470 "trace_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 470 "trace_gen.m"
            case (MR_Integer) 1:
#line 472 "trace_gen.m"
              ll_backend__trace_gen__Maxfr_24 = (MR_Integer) 0;
#line 470 "trace_gen.m"
              break;
#line 470 "trace_gen.m"
            case (MR_Integer) 0:
#line 469 "trace_gen.m"
              ll_backend__trace_gen__Maxfr_24 = (MR_Integer) 1;
#line 470 "trace_gen.m"
              break;
#line 470 "trace_gen.m"
          }
#line 475 "trace_gen.m"
          {
#line 475 "trace_gen.m"
            hlds__hlds_pred__proc_info_get_has_tail_call_event_2_p_0(ll_backend__trace_gen__ProcInfo_9, &ll_backend__trace_gen__TailCallEvents_25);
          }
#line 479 "trace_gen.m"
#line 479 "trace_gen.m"
          switch (ll_backend__trace_gen__TailCallEvents_25) {
#line 479 "trace_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 479 "trace_gen.m"
            case (MR_Integer) 1:
#line 481 "trace_gen.m"
              ll_backend__trace_gen__TailRec_26 = (MR_Integer) 0;
#line 479 "trace_gen.m"
              break;
#line 479 "trace_gen.m"
            case (MR_Integer) 0:
#line 478 "trace_gen.m"
              ll_backend__trace_gen__TailRec_26 = (MR_Integer) 1;
#line 479 "trace_gen.m"
              break;
#line 479 "trace_gen.m"
          }
#line 483 "trace_gen.m"
          ll_backend__trace_gen__V_40_40 = ((MR_Integer) 3 + ll_backend__trace_gen__RedoLayout_18);
#line 483 "trace_gen.m"
          ll_backend__trace_gen__V_39_39 = (ll_backend__trace_gen__V_40_40 + ll_backend__trace_gen__FromFull_19);
#line 483 "trace_gen.m"
          ll_backend__trace_gen__V_38_38 = (ll_backend__trace_gen__V_39_39 + ll_backend__trace_gen__IoSeq_20);
#line 483 "trace_gen.m"
          ll_backend__trace_gen__V_37_37 = (ll_backend__trace_gen__V_38_38 + ll_backend__trace_gen__Trail_22);
#line 483 "trace_gen.m"
          ll_backend__trace_gen__V_36_36 = (ll_backend__trace_gen__V_37_37 + ll_backend__trace_gen__Maxfr_24);
#line 484 "trace_gen.m"
          ll_backend__trace_gen__ReservedSlots0_27 = (ll_backend__trace_gen__V_36_36 + ll_backend__trace_gen__TailRec_26);
#line 486 "trace_gen.m"
          {
#line 486 "trace_gen.m"
            hlds__hlds_pred__proc_info_get_call_table_tip_2_p_0(ll_backend__trace_gen__ProcInfo_9, &ll_backend__trace_gen__MaybeCallTableVar_28);
          }
#line 491 "trace_gen.m"
          if ((ll_backend__trace_gen__MaybeCallTableVar_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 492 "trace_gen.m"
            {
#line 493 "trace_gen.m"
              *ll_backend__trace_gen__ReservedSlots_11 = ll_backend__trace_gen__ReservedSlots0_27;
#line 494 "trace_gen.m"
              *ll_backend__trace_gen__MaybeTableVarInfo_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 492 "trace_gen.m"
            }
#line 491 "trace_gen.m"
          else
#line 488 "trace_gen.m"
            {
#line 488 "trace_gen.m"
              MR_Word ll_backend__trace_gen__CallTableVar_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeCallTableVar_28, (MR_Integer) 0)));
#line 488 "trace_gen.m"
              MR_Word ll_backend__trace_gen__V_42_42;

#line 489 "trace_gen.m"
              *ll_backend__trace_gen__ReservedSlots_11 = (ll_backend__trace_gen__ReservedSlots0_27 + (MR_Integer) 1);
#line 490 "trace_gen.m"
              {
#line 490 "trace_gen.m"
                ll_backend__trace_gen__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 490 "trace_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_42_42, 0) = ((MR_Box) (ll_backend__trace_gen__CallTableVar_29));
#line 490 "trace_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_42_42, 1) = ((MR_Box) (*ll_backend__trace_gen__ReservedSlots_11));
#line 490 "trace_gen.m"
              }
#line 490 "trace_gen.m"
              {
#line 490 "trace_gen.m"
                MR_Word base;
#line 490 "trace_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 490 "trace_gen.m"
                *ll_backend__trace_gen__MaybeTableVarInfo_12 = base;
#line 490 "trace_gen.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__trace_gen__V_42_42));
#line 490 "trace_gen.m"
              }
#line 488 "trace_gen.m"
            }
#line 426 "trace_gen.m"
        }
#line 425 "trace_gen.m"
        break;
#line 425 "trace_gen.m"
    }
#line 415 "trace_gen.m"
  }
#line 160 "trace_gen.m"
}

#line 150 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__do_we_need_maxfr_slot_5_p_0(
#line 150 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Globals_6,
#line 150 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ModuleInfo_7,
#line 150 "trace_gen.m"
  MR_Word ll_backend__trace_gen__PredInfo0_8,
#line 150 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_0_14,
#line 150 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_15)
#line 150 "trace_gen.m"
{
#line 314 "trace_gen.m"
  {
#line 314 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 314 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceLevel_10;
#line 314 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CodeModel_11;
#line 314 "trace_gen.m"
    MR_Word ll_backend__trace_gen__NeedsMaxfrSlot_13;
#line 319 "trace_gen.m"
    MR_Word ll_backend__trace_gen__Goal_12;
#line 319 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_16_16;
#line 319 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_17_17;
#line 319 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_19_19;

#line 315 "trace_gen.m"
    {
#line 315 "trace_gen.m"
      libs__globals__get_trace_level_2_p_0(ll_backend__trace_gen__Globals_6, &ll_backend__trace_gen__TraceLevel_10);
    }
#line 316 "trace_gen.m"
    {
#line 316 "trace_gen.m"
      ll_backend__trace_gen__CodeModel_11 = hlds__code_model__proc_info_interface_code_model_1_f_0(ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_0_14);
    }
#line 318 "trace_gen.m"
    {
#line 318 "trace_gen.m"
      ll_backend__trace_gen__V_16_16 = libs__trace_params__eff_trace_level_is_none_4_f_0(ll_backend__trace_gen__ModuleInfo_7, ll_backend__trace_gen__PredInfo0_8, ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_0_14, ll_backend__trace_gen__TraceLevel_10);
    }
#line 319 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_16_16 == (MR_Integer) 0);
#line 319 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 319 "trace_gen.m"
      {
#line 320 "trace_gen.m"
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CodeModel_11 == (MR_Integer) 2);
#line 320 "trace_gen.m"
        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 319 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 319 "trace_gen.m"
          {
#line 321 "trace_gen.m"
            {
#line 321 "trace_gen.m"
              hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_0_14, &ll_backend__trace_gen__Goal_12);
            }
#line 322 "trace_gen.m"
            ll_backend__trace_gen__V_17_17 = (MR_Integer) 1;
#line 322 "trace_gen.m"
            {
#line 322 "trace_gen.m"
              ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(ll_backend__trace_gen__Goal_12, &ll_backend__trace_gen__V_19_19);
            }
#line 322 "trace_gen.m"
            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_17_17 == ll_backend__trace_gen__V_19_19);
#line 319 "trace_gen.m"
          }
#line 319 "trace_gen.m"
      }
#line 317 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 324 "trace_gen.m"
      ll_backend__trace_gen__NeedsMaxfrSlot_13 = (MR_Integer) 0;
#line 317 "trace_gen.m"
    else
#line 326 "trace_gen.m"
      ll_backend__trace_gen__NeedsMaxfrSlot_13 = (MR_Integer) 1;
#line 328 "trace_gen.m"
    {
#line 328 "trace_gen.m"
      hlds__hlds_pred__proc_info_set_needs_maxfr_slot_3_p_0(ll_backend__trace_gen__NeedsMaxfrSlot_13, ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_0_14, ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_15);
    }
#line 314 "trace_gen.m"
  }
#line 150 "trace_gen.m"
}

#line 144 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__trace_fail_vars_3_p_0(
#line 144 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ModuleInfo_4,
#line 144 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ProcInfo_5,
#line 144 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__FailVars_6)
#line 144 "trace_gen.m"
{
#line 299 "trace_gen.m"
  {
#line 299 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 299 "trace_gen.m"
    MR_Word ll_backend__trace_gen__HeadVars_7;
#line 299 "trace_gen.m"
    MR_Word ll_backend__trace_gen__Modes_8;
#line 299 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ArgInfos_9;
#line 299 "trace_gen.m"
    MR_Word ll_backend__trace_gen__VarTypes_10;
#line 299 "trace_gen.m"
    MR_Word ll_backend__trace_gen__Insts_11;
#line 305 "trace_gen.m"
    MR_Word ll_backend__trace_gen__FailVarsList_12;

#line 300 "trace_gen.m"
    {
#line 300 "trace_gen.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__trace_gen__ProcInfo_5, &ll_backend__trace_gen__HeadVars_7);
    }
#line 301 "trace_gen.m"
    {
#line 301 "trace_gen.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ll_backend__trace_gen__ProcInfo_5, &ll_backend__trace_gen__Modes_8);
    }
#line 302 "trace_gen.m"
    {
#line 302 "trace_gen.m"
      hlds__hlds_pred__proc_info_arg_info_2_p_0(ll_backend__trace_gen__ProcInfo_5, &ll_backend__trace_gen__ArgInfos_9);
    }
#line 303 "trace_gen.m"
    {
#line 303 "trace_gen.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__trace_gen__ProcInfo_5, &ll_backend__trace_gen__VarTypes_10);
    }
#line 304 "trace_gen.m"
    {
#line 304 "trace_gen.m"
      check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ll_backend__trace_gen__ModuleInfo_4, ll_backend__trace_gen__Modes_8, &ll_backend__trace_gen__Insts_11);
    }
#line 306 "trace_gen.m"
    {
#line 306 "trace_gen.m"
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen__build_fail_vars_6_p_0(ll_backend__trace_gen__HeadVars_7, ll_backend__trace_gen__Insts_11, ll_backend__trace_gen__ArgInfos_9, ll_backend__trace_gen__ModuleInfo_4, ll_backend__trace_gen__VarTypes_10, &ll_backend__trace_gen__FailVarsList_12);
    }
#line 305 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 309 "trace_gen.m"
      {
#line 309 "trace_gen.m"
        {
#line 309 "trace_gen.m"
          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__trace_gen__FailVarsList_12, ll_backend__trace_gen__FailVars_6);
        }
#line 309 "trace_gen.m"
      }
#line 305 "trace_gen.m"
    else
#line 311 "trace_gen.m"
      {
#line 311 "trace_gen.m"
        {
#line 311 "trace_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.trace_fail_vars\'/3", (MR_String) "length mismatch");
#line 311 "trace_gen.m"
          return;
        }
#line 311 "trace_gen.m"
      }
#line 299 "trace_gen.m"
  }
#line 144 "trace_gen.m"
}

#line 97 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__get_trace_maybe_tail_rec_info_2_p_0(
#line 97 "trace_gen.m"
  MR_Word ll_backend__trace_gen__TraceInfo_3,
#line 97 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__2_2)
#line 97 "trace_gen.m"
{
#line 1403 "trace_gen.m"
  {
#line 1403 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 1403 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 0)));
#line 1403 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 1)));
#line 1403 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 2)));
#line 1403 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 3)));
#line 1403 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 4)));
#line 1403 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 5)));
#line 1403 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 6)));
#line 1403 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_11_11;

#line 1403 "trace_gen.m"
    *ll_backend__trace_gen__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 7)));
#line 1403 "trace_gen.m"
    ll_backend__trace_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 8)));
#line 1403 "trace_gen.m"
  }
#line 97 "trace_gen.m"
}

void mercury__ll_backend__trace_gen__init(void)
{
}

void mercury__ll_backend__trace_gen__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_external_event_info_0);
	MR_register_type_ctor_info(&ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_external_trace_port_0);
	MR_register_type_ctor_info(&ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_negation_end_port_0);
	MR_register_type_ctor_info(&ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_trace_info_0);
	MR_register_type_ctor_info(&ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_trace_port_info_0);
	MR_register_type_ctor_info(&ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_trace_slot_info_0);
}

void mercury__ll_backend__trace_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.trace_gen. */
