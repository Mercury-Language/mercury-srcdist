/*
** Automatically generated from `trace_gen.m'
** by the Mercury compiler,
** version rotd-2015-10-06
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
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_match.mih"
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




#line 159 "ll_backend.trace_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0;

#line 162 "ll_backend.trace_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_lval_0;

#line 165 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 168 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0;

#line 171 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0;

#line 174 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0;

#line 177 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_external_event_info_0_0[3];

#line 180 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_external_event_info_0_0;

#line 183 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_external_event_info_0_0[1];

#line 186 "ll_backend.trace_gen.c"
static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_external_event_info_0[1];

#line 189 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_external_event_info_0[1];

#line 192 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_external_event_info_0[1];

#line 195 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_0;

#line 198 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_1;

#line 201 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_2;

#line 204 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_3;

#line 207 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_value_ordered_external_trace_port_0[4];

#line 210 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_name_ordered_external_trace_port_0[4];

#line 213 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_external_trace_port_0[4];

#line 216 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_0;

#line 219 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_1;

#line 222 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_value_ordered_negation_end_port_0[2];

#line 225 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_name_ordered_negation_end_port_0[2];

#line 228 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_negation_end_port_0[2];

#line 231 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0;

#line 234 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0;

#line 237 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0;

#line 240 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0;

#line 243 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0;

#line 246 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0;

#line 249 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0;

#line 252 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_info_0_0[9];

#line 255 "ll_backend.trace_gen.c"
static const MR_ConstString ll_backend__trace_gen__ll_backend__trace_gen__field_names_trace_info_0_0[9];

#line 258 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_info_0_0;

#line 261 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_info_0_0[1];

#line 264 "ll_backend.trace_gen.c"
static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_info_0[1];

#line 267 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_info_0[1];

#line 270 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_info_0[1];

#line 273 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_0;

#line 276 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 279 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0;

#line 282 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0;

#line 285 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_1[2];

#line 288 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_1;

#line 291 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 294 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_2[2];

#line 297 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_2;

#line 300 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_3[1];

#line 303 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_3;

#line 306 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_4[1];

#line 309 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_4;

#line 312 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_0[1];

#line 315 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_1[1];

#line 318 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_2[1];

#line 321 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_3[2];

#line 324 "ll_backend.trace_gen.c"
static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_port_info_0[4];

#line 327 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_port_info_0[5];

#line 330 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_port_info_0[5];

#line 333 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 336 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_slot_info_0_0[6];

#line 339 "ll_backend.trace_gen.c"
static const MR_ConstString ll_backend__trace_gen__ll_backend__trace_gen__field_names_trace_slot_info_0_0[6];

#line 342 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_slot_info_0_0;

#line 345 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_slot_info_0_0[1];

#line 348 "ll_backend.trace_gen.c"
static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_slot_info_0[1];

#line 351 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_slot_info_0[1];

#line 354 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_slot_info_0[1];

#line 357 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_event_info_0_0_10001(
#line 360 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 362 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2);

#line 365 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____external_event_info_0_0_10001(
#line 368 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 370 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 372 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3);

#line 375 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_trace_port_0_0_10001(
#line 378 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 380 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2);

#line 383 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____external_trace_port_0_0_10001(
#line 386 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 388 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 390 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3);

#line 393 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____negation_end_port_0_0_10001(
#line 396 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 398 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2);

#line 401 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____negation_end_port_0_0_10001(
#line 404 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 406 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 408 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3);

#line 411 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_info_0_0_10001(
#line 414 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 416 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2);

#line 419 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____trace_info_0_0_10001(
#line 422 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 424 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 426 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3);

#line 429 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_port_info_0_0_10001(
#line 432 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 434 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2);

#line 437 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____trace_port_info_0_0_10001(
#line 440 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 442 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 444 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3);

#line 447 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_slot_info_0_0_10001(
#line 450 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 452 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2);

#line 455 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____trace_slot_info_0_0_10001(
#line 458 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 460 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 462 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3);

#line 1203 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_13_p_0(
#line 1203 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 1203 "trace_gen.m"
  MR_Word ll_backend__trace_gen__VarSet_2,
#line 1203 "trace_gen.m"
  MR_Word ll_backend__trace_gen__VarTypes_3,
#line 1203 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_TVars_0_6,
#line 1203 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_TVars_7,
#line 1203 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_VarInfos_0_8,
#line 1203 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_VarInfos_9,
#line 1203 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__10_10,
#line 1203 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__11_11,
#line 1203 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_12,
#line 1203 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_13);

#line 947 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__947__1_2_p_0(
#line 947 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeFromFullLval_17,
#line 947 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_62);

#line 941 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__941__1_2_p_0(
#line 941 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeRedoLabelLval_16,
#line 941 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_57);

#line 1183 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__maybe_setup_redo_event__1183__1_2_p_0(
#line 1183 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Lval_8,
#line 1183 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_20);

#line 267 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen____Compare____trace_port_info_0_0(
#line 267 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
#line 267 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 267 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3);

#line 267 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_port_info_0_0(
#line 267 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 267 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2);

#line 1305 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__redo_layout_slot_2_p_0(
#line 1305 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CodeModel_3,
#line 1305 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__RedoLayoutSlot_4);

#line 1304 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__call_depth_slot_2_p_0(
#line 1304 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CodeModel_3,
#line 1304 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__CallDepthSlot_4);

#line 1303 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__call_num_slot_2_p_0(
#line 1303 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CodeModel_3,
#line 1303 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__CallNumSlot_4);

#line 1302 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__event_num_slot_2_p_0(
#line 1302 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CodeModel_3,
#line 1302 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__EventNumSlot_4);

#line 1275 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__stackref_to_string_2_p_0(
#line 1275 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Lval_3,
#line 1275 "trace_gen.m"
  MR_String * ll_backend__trace_gen__LvalStr_4);

#line 1253 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__build_fail_vars_6_p_0(
#line 1253 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 1253 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 1253 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3,
#line 1253 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ModuleInfo_4,
#line 1253 "trace_gen.m"
  MR_Word ll_backend__trace_gen__VarTypes_5,
#line 1253 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__6_6);

#line 1169 "trace_gen.m"
static MR_Word MR_CALL 
ll_backend__trace_gen__find_lval_in_layout_locn_1_f_0(
#line 1169 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1);

#line 1164 "trace_gen.m"
static MR_Word MR_CALL 
ll_backend__trace_gen__find_lval_in_var_info_1_f_0(
#line 1164 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1);

#line 1148 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__find_output_vars_3_p_0(
#line 1148 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 1148 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2,
#line 1148 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_OutputVars_3);

#line 1091 "trace_gen.m"
static MR_Box MR_CALL 
ll_backend__trace_gen__generate_event_code_13_p_0_2(
#line 1091 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg,
#line 1091 "trace_gen.m"
  MR_Box ll_backend__trace_gen__wrapper_arg_1);

#line 1087 "trace_gen.m"
static MR_Box MR_CALL 
ll_backend__trace_gen__generate_event_code_13_p_0_1(
#line 1087 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg,
#line 1087 "trace_gen.m"
  MR_Box ll_backend__trace_gen__wrapper_arg_1);

#line 1018 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__generate_event_code_13_p_0(
#line 1018 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Port_14,
#line 1018 "trace_gen.m"
  MR_Word ll_backend__trace_gen__PortInfo_15,
#line 1018 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeTraceInfo_16,
#line 1018 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Context_17,
#line 1018 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HideEvent_18,
#line 1018 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeUserInfo_19,
#line 1018 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Label_20,
#line 1018 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__TvarDataMap_21,
#line 1018 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_22,
#line 1018 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_67,
#line 1018 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_68,
#line 1018 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_69,
#line 1018 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_70);

#line 947 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_2(
#line 947 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg);

#line 941 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_1(
#line 941 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg);

#line 921 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0(
#line 921 "trace_gen.m"
  MR_Word ll_backend__trace_gen__TraceInfo_5,
#line 921 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_6,
#line 921 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_42,
#line 921 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_43);

#line 1183 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__maybe_setup_redo_event_2_p_0_1(
#line 1183 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg);


static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_1[23][2];

static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_2[8][3];

static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_3[5][1];

static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_5[5][5];


#line 1295 "trace_gen.m"
/* sealed */ struct ll_backend__trace_gen__vector_common_type_4_0_s {
#line 1295 "trace_gen.m"
  const MR_Word ll_backend__trace_gen__vector_common_type_4_0__vct_4_f_0;
#line 1295 "trace_gen.m"
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



#line 959 "ll_backend.trace_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 967 "ll_backend.trace_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 975 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 983 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0
  }
};

#line 991 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &ll_backend__trace_gen__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0
  }
};

#line 1000 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 1008 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_external_event_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0
};

#line 1015 "ll_backend.trace_gen.c"
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

#line 1030 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_external_event_info_0_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_external_event_info_0_0
};

#line 1035 "ll_backend.trace_gen.c"
static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_external_event_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_external_event_info_0_0
  }
};

#line 1044 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_external_event_info_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_external_event_info_0_0
};

#line 1049 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_external_event_info_0[1] = {
  (MR_Integer) 0
};

#line 1054 "ll_backend.trace_gen.c"
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

#line 1071 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_0 = {
  (MR_String) "external_port_call",
  (MR_Integer) 0
};

#line 1077 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_1 = {
  (MR_String) "external_port_exit",
  (MR_Integer) 1
};

#line 1083 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_2 = {
  (MR_String) "external_port_fail",
  (MR_Integer) 2
};

#line 1089 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_3 = {
  (MR_String) "external_port_tailrec_call",
  (MR_Integer) 3
};

#line 1095 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_value_ordered_external_trace_port_0[4] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_0,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_1,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_2,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_3
};

#line 1103 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_name_ordered_external_trace_port_0[4] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_0,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_1,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_2,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_3
};

#line 1111 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_external_trace_port_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 1119 "ll_backend.trace_gen.c"
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

#line 1136 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_0 = {
  (MR_String) "neg_success",
  (MR_Integer) 0
};

#line 1142 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_1 = {
  (MR_String) "neg_failure",
  (MR_Integer) 1
};

#line 1148 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_value_ordered_negation_end_port_0[2] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_0,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_1
};

#line 1154 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_name_ordered_negation_end_port_0[2] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_1,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_0
};

#line 1160 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_negation_end_port_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1166 "ll_backend.trace_gen.c"
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

#line 1183 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0
  }
};

#line 1191 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 1199 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 1208 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 1216 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1225 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1233 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1241 "ll_backend.trace_gen.c"
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

#line 1254 "ll_backend.trace_gen.c"
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

#line 1267 "ll_backend.trace_gen.c"
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

#line 1282 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_info_0_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_info_0_0
};

#line 1287 "ll_backend.trace_gen.c"
static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_info_0_0
  }
};

#line 1296 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_info_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_info_0_0
};

#line 1301 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_info_0[1] = {
  (MR_Integer) 0
};

#line 1306 "ll_backend.trace_gen.c"
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

#line 1323 "ll_backend.trace_gen.c"
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

#line 1338 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1346 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0
  }
};

#line 1355 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0
  }
};

#line 1363 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0
};

#line 1369 "ll_backend.trace_gen.c"
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

#line 1384 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1392 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_2[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1398 "ll_backend.trace_gen.c"
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

#line 1413 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_3[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
};

#line 1418 "ll_backend.trace_gen.c"
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

#line 1433 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_4[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
};

#line 1438 "ll_backend.trace_gen.c"
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

#line 1453 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_0
};

#line 1458 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_1[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_1
};

#line 1463 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_2[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_2
};

#line 1468 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_3[2] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_3,
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_4
};

#line 1474 "ll_backend.trace_gen.c"
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

#line 1498 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_port_info_0[5] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_0,
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_2,
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_3,
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_1,
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_4
};

#line 1507 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_port_info_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 4
};

#line 1516 "ll_backend.trace_gen.c"
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

#line 1533 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1541 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_slot_info_0_0[6] = {
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

#line 1551 "ll_backend.trace_gen.c"
static const MR_ConstString ll_backend__trace_gen__ll_backend__trace_gen__field_names_trace_slot_info_0_0[6] = {
  (MR_String) "slot_from_full",
  (MR_String) "slot_io",
  (MR_String) "slot_trail",
  (MR_String) "slot_maxfr",
  (MR_String) "slot_call_table",
  (MR_String) "slot_tail_rec"
};

#line 1561 "ll_backend.trace_gen.c"
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

#line 1576 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_slot_info_0_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_slot_info_0_0
};

#line 1581 "ll_backend.trace_gen.c"
static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_slot_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_slot_info_0_0
  }
};

#line 1590 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_slot_info_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_slot_info_0_0
};

#line 1595 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_slot_info_0[1] = {
  (MR_Integer) 0
};

#line 1600 "ll_backend.trace_gen.c"
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

#line 1617 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_event_info_0_0_10001(
#line 1620 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 1622 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2)
#line 1624 "ll_backend.trace_gen.c"
{
#line 1626 "ll_backend.trace_gen.c"
  {
#line 1628 "ll_backend.trace_gen.c"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1631 "ll_backend.trace_gen.c"
    {
#line 1633 "ll_backend.trace_gen.c"
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen____Unify____external_event_info_0_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1), ((MR_Word) ll_backend__trace_gen__wrapper_arg_2));
    }
#line 1636 "ll_backend.trace_gen.c"
    return ll_backend__trace_gen__succeeded;
#line 1638 "ll_backend.trace_gen.c"
  }
#line 1640 "ll_backend.trace_gen.c"
}

#line 1643 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____external_event_info_0_0_10001(
#line 1646 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 1648 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 1650 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3)
#line 1652 "ll_backend.trace_gen.c"
{
#line 1654 "ll_backend.trace_gen.c"
  {
#line 1656 "ll_backend.trace_gen.c"
    MR_Word ll_backend__trace_gen__conv0_HeadVar__1_1;

#line 1659 "ll_backend.trace_gen.c"
    {
#line 1661 "ll_backend.trace_gen.c"
      ll_backend__trace_gen____Compare____external_event_info_0_0(&ll_backend__trace_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__trace_gen__wrapper_arg_2), ((MR_Word) ll_backend__trace_gen__wrapper_arg_3));
    }
#line 1664 "ll_backend.trace_gen.c"
    *ll_backend__trace_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__trace_gen__conv0_HeadVar__1_1));
#line 1666 "ll_backend.trace_gen.c"
  }
#line 1668 "ll_backend.trace_gen.c"
}

#line 1671 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_trace_port_0_0_10001(
#line 1674 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 1676 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2)
#line 1678 "ll_backend.trace_gen.c"
{
#line 1680 "ll_backend.trace_gen.c"
  {
#line 1682 "ll_backend.trace_gen.c"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1685 "ll_backend.trace_gen.c"
    {
#line 1687 "ll_backend.trace_gen.c"
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen____Unify____external_trace_port_0_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1), ((MR_Word) ll_backend__trace_gen__wrapper_arg_2));
    }
#line 1690 "ll_backend.trace_gen.c"
    return ll_backend__trace_gen__succeeded;
#line 1692 "ll_backend.trace_gen.c"
  }
#line 1694 "ll_backend.trace_gen.c"
}

#line 1697 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____external_trace_port_0_0_10001(
#line 1700 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 1702 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 1704 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3)
#line 1706 "ll_backend.trace_gen.c"
{
#line 1708 "ll_backend.trace_gen.c"
  {
#line 1710 "ll_backend.trace_gen.c"
    MR_Word ll_backend__trace_gen__conv0_HeadVar__1_1;

#line 1713 "ll_backend.trace_gen.c"
    {
#line 1715 "ll_backend.trace_gen.c"
      ll_backend__trace_gen____Compare____external_trace_port_0_0(&ll_backend__trace_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__trace_gen__wrapper_arg_2), ((MR_Word) ll_backend__trace_gen__wrapper_arg_3));
    }
#line 1718 "ll_backend.trace_gen.c"
    *ll_backend__trace_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__trace_gen__conv0_HeadVar__1_1));
#line 1720 "ll_backend.trace_gen.c"
  }
#line 1722 "ll_backend.trace_gen.c"
}

#line 1725 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____negation_end_port_0_0_10001(
#line 1728 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 1730 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2)
#line 1732 "ll_backend.trace_gen.c"
{
#line 1734 "ll_backend.trace_gen.c"
  {
#line 1736 "ll_backend.trace_gen.c"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1739 "ll_backend.trace_gen.c"
    {
#line 1741 "ll_backend.trace_gen.c"
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen____Unify____negation_end_port_0_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1), ((MR_Word) ll_backend__trace_gen__wrapper_arg_2));
    }
#line 1744 "ll_backend.trace_gen.c"
    return ll_backend__trace_gen__succeeded;
#line 1746 "ll_backend.trace_gen.c"
  }
#line 1748 "ll_backend.trace_gen.c"
}

#line 1751 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____negation_end_port_0_0_10001(
#line 1754 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 1756 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 1758 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3)
#line 1760 "ll_backend.trace_gen.c"
{
#line 1762 "ll_backend.trace_gen.c"
  {
#line 1764 "ll_backend.trace_gen.c"
    MR_Word ll_backend__trace_gen__conv0_HeadVar__1_1;

#line 1767 "ll_backend.trace_gen.c"
    {
#line 1769 "ll_backend.trace_gen.c"
      ll_backend__trace_gen____Compare____negation_end_port_0_0(&ll_backend__trace_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__trace_gen__wrapper_arg_2), ((MR_Word) ll_backend__trace_gen__wrapper_arg_3));
    }
#line 1772 "ll_backend.trace_gen.c"
    *ll_backend__trace_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__trace_gen__conv0_HeadVar__1_1));
#line 1774 "ll_backend.trace_gen.c"
  }
#line 1776 "ll_backend.trace_gen.c"
}

#line 1779 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_info_0_0_10001(
#line 1782 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 1784 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2)
#line 1786 "ll_backend.trace_gen.c"
{
#line 1788 "ll_backend.trace_gen.c"
  {
#line 1790 "ll_backend.trace_gen.c"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1793 "ll_backend.trace_gen.c"
    {
#line 1795 "ll_backend.trace_gen.c"
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen____Unify____trace_info_0_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1), ((MR_Word) ll_backend__trace_gen__wrapper_arg_2));
    }
#line 1798 "ll_backend.trace_gen.c"
    return ll_backend__trace_gen__succeeded;
#line 1800 "ll_backend.trace_gen.c"
  }
#line 1802 "ll_backend.trace_gen.c"
}

#line 1805 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____trace_info_0_0_10001(
#line 1808 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 1810 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 1812 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3)
#line 1814 "ll_backend.trace_gen.c"
{
#line 1816 "ll_backend.trace_gen.c"
  {
#line 1818 "ll_backend.trace_gen.c"
    MR_Word ll_backend__trace_gen__conv0_HeadVar__1_1;

#line 1821 "ll_backend.trace_gen.c"
    {
#line 1823 "ll_backend.trace_gen.c"
      ll_backend__trace_gen____Compare____trace_info_0_0(&ll_backend__trace_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__trace_gen__wrapper_arg_2), ((MR_Word) ll_backend__trace_gen__wrapper_arg_3));
    }
#line 1826 "ll_backend.trace_gen.c"
    *ll_backend__trace_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__trace_gen__conv0_HeadVar__1_1));
#line 1828 "ll_backend.trace_gen.c"
  }
#line 1830 "ll_backend.trace_gen.c"
}

#line 1833 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_port_info_0_0_10001(
#line 1836 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 1838 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2)
#line 1840 "ll_backend.trace_gen.c"
{
#line 1842 "ll_backend.trace_gen.c"
  {
#line 1844 "ll_backend.trace_gen.c"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1847 "ll_backend.trace_gen.c"
    {
#line 1849 "ll_backend.trace_gen.c"
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen____Unify____trace_port_info_0_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1), ((MR_Word) ll_backend__trace_gen__wrapper_arg_2));
    }
#line 1852 "ll_backend.trace_gen.c"
    return ll_backend__trace_gen__succeeded;
#line 1854 "ll_backend.trace_gen.c"
  }
#line 1856 "ll_backend.trace_gen.c"
}

#line 1859 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____trace_port_info_0_0_10001(
#line 1862 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 1864 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 1866 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3)
#line 1868 "ll_backend.trace_gen.c"
{
#line 1870 "ll_backend.trace_gen.c"
  {
#line 1872 "ll_backend.trace_gen.c"
    MR_Word ll_backend__trace_gen__conv0_HeadVar__1_1;

#line 1875 "ll_backend.trace_gen.c"
    {
#line 1877 "ll_backend.trace_gen.c"
      ll_backend__trace_gen____Compare____trace_port_info_0_0(&ll_backend__trace_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__trace_gen__wrapper_arg_2), ((MR_Word) ll_backend__trace_gen__wrapper_arg_3));
    }
#line 1880 "ll_backend.trace_gen.c"
    *ll_backend__trace_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__trace_gen__conv0_HeadVar__1_1));
#line 1882 "ll_backend.trace_gen.c"
  }
#line 1884 "ll_backend.trace_gen.c"
}

#line 1887 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_slot_info_0_0_10001(
#line 1890 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 1892 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2)
#line 1894 "ll_backend.trace_gen.c"
{
#line 1896 "ll_backend.trace_gen.c"
  {
#line 1898 "ll_backend.trace_gen.c"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1901 "ll_backend.trace_gen.c"
    {
#line 1903 "ll_backend.trace_gen.c"
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen____Unify____trace_slot_info_0_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1), ((MR_Word) ll_backend__trace_gen__wrapper_arg_2));
    }
#line 1906 "ll_backend.trace_gen.c"
    return ll_backend__trace_gen__succeeded;
#line 1908 "ll_backend.trace_gen.c"
  }
#line 1910 "ll_backend.trace_gen.c"
}

#line 1913 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____trace_slot_info_0_0_10001(
#line 1916 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 1918 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 1920 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3)
#line 1922 "ll_backend.trace_gen.c"
{
#line 1924 "ll_backend.trace_gen.c"
  {
#line 1926 "ll_backend.trace_gen.c"
    MR_Word ll_backend__trace_gen__conv0_HeadVar__1_1;

#line 1929 "ll_backend.trace_gen.c"
    {
#line 1931 "ll_backend.trace_gen.c"
      ll_backend__trace_gen____Compare____trace_slot_info_0_0(&ll_backend__trace_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__trace_gen__wrapper_arg_2), ((MR_Word) ll_backend__trace_gen__wrapper_arg_3));
    }
#line 1934 "ll_backend.trace_gen.c"
    *ll_backend__trace_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__trace_gen__conv0_HeadVar__1_1));
#line 1936 "ll_backend.trace_gen.c"
  }
#line 1938 "ll_backend.trace_gen.c"
}

#line 1203 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_13_p_0(
#line 1203 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 1203 "trace_gen.m"
  MR_Word ll_backend__trace_gen__VarSet_2,
#line 1203 "trace_gen.m"
  MR_Word ll_backend__trace_gen__VarTypes_3,
#line 1203 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_TVars_0_6,
#line 1203 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_TVars_7,
#line 1203 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_VarInfos_0_8,
#line 1203 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_VarInfos_9,
#line 1203 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__10_10,
#line 1203 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__11_11,
#line 1203 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_12,
#line 1203 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_13)
#line 1203 "trace_gen.m"
{
#line 1208 "trace_gen.m"
  {
#line 1208 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1208 "trace_gen.m"
    if ((ll_backend__trace_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1208 "trace_gen.m"
      {
#line 1208 "trace_gen.m"
        {
#line 1208 "trace_gen.m"
          *ll_backend__trace_gen__HeadVar__10_10 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 1208 "trace_gen.m"
        *ll_backend__trace_gen__STATE_VARIABLE_CLD_13 = ll_backend__trace_gen__STATE_VARIABLE_CLD_0_12;
#line 1208 "trace_gen.m"
        *ll_backend__trace_gen__STATE_VARIABLE_VarInfos_9 = ll_backend__trace_gen__STATE_VARIABLE_VarInfos_0_8;
#line 1208 "trace_gen.m"
        *ll_backend__trace_gen__STATE_VARIABLE_TVars_7 = ll_backend__trace_gen__STATE_VARIABLE_TVars_0_6;
#line 1208 "trace_gen.m"
      }
#line 1208 "trace_gen.m"
    else
#line 1210 "trace_gen.m"
      {
#line 1210 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeCtorInfo_57_57 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 1210 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1210 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Vars_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1210 "trace_gen.m"
        MR_Word ll_backend__trace_gen__VarCode_36;
#line 1210 "trace_gen.m"
        MR_Word ll_backend__trace_gen__VarsCode_37;
#line 1210 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Type_40;
#line 1210 "trace_gen.m"
        MR_Word ll_backend__trace_gen__ModuleInfo_41;
#line 1210 "trace_gen.m"
        MR_Word ll_backend__trace_gen__IsDummy_42;
#line 1210 "trace_gen.m"
        MR_Word ll_backend__trace_gen__STATE_VARIABLE_TVars_50_50;
#line 1210 "trace_gen.m"
        MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_51_51;
#line 1210 "trace_gen.m"
        MR_Word ll_backend__trace_gen__STATE_VARIABLE_VarInfos_52_52;

#line 1211 "trace_gen.m"
        {
#line 1211 "trace_gen.m"
          hlds__vartypes__lookup_var_type_3_p_0(ll_backend__trace_gen__VarTypes_3, ll_backend__trace_gen__Var_28, &ll_backend__trace_gen__Type_40);
        }
#line 1212 "trace_gen.m"
        {
#line 1212 "trace_gen.m"
          ll_backend__code_info__get_module_info_2_p_0(ll_backend__trace_gen__HeadVar__11_11, &ll_backend__trace_gen__ModuleInfo_41);
        }
#line 1213 "trace_gen.m"
        {
#line 1213 "trace_gen.m"
          ll_backend__trace_gen__IsDummy_42 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__trace_gen__ModuleInfo_41, ll_backend__trace_gen__Type_40);
        }
#line 1217 "trace_gen.m"
#line 1217 "trace_gen.m"
        switch (ll_backend__trace_gen__IsDummy_42) {
#line 1217 "trace_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1217 "trace_gen.m"
          case (MR_Integer) 0:
#line 1215 "trace_gen.m"
            {
#line 1216 "trace_gen.m"
              {
#line 1216 "trace_gen.m"
                ll_backend__trace_gen__VarCode_36 = mercury__cord__empty_0_f_0(ll_backend__trace_gen__TypeCtorInfo_57_57);
              }
#line 1215 "trace_gen.m"
              ll_backend__trace_gen__STATE_VARIABLE_TVars_50_50 = ll_backend__trace_gen__STATE_VARIABLE_TVars_0_6;
#line 1215 "trace_gen.m"
              ll_backend__trace_gen__STATE_VARIABLE_VarInfos_52_52 = ll_backend__trace_gen__STATE_VARIABLE_VarInfos_0_8;
#line 1215 "trace_gen.m"
              ll_backend__trace_gen__STATE_VARIABLE_CLD_51_51 = ll_backend__trace_gen__STATE_VARIABLE_CLD_0_12;
#line 1215 "trace_gen.m"
            }
#line 1217 "trace_gen.m"
            break;
#line 1217 "trace_gen.m"
          case (MR_Integer) 1:
#line 1218 "trace_gen.m"
            {
#line 1218 "trace_gen.m"
              MR_Word ll_backend__trace_gen__VarInfo_43;
#line 1218 "trace_gen.m"
              MR_Word ll_backend__trace_gen__Lval_70;
#line 1218 "trace_gen.m"
              MR_Word ll_backend__trace_gen__Type_71;
#line 1218 "trace_gen.m"
              MR_String ll_backend__trace_gen__Name_73;
#line 1218 "trace_gen.m"
              MR_Word ll_backend__trace_gen__LiveType_75;
#line 1218 "trace_gen.m"
              MR_Word ll_backend__trace_gen__TypeVars_76;
#line 1218 "trace_gen.m"
              MR_Word ll_backend__trace_gen__V_78_78;
#line 1235 "trace_gen.m"
              MR_String ll_backend__trace_gen__SearchName_72;

#line 1231 "trace_gen.m"
              {
#line 1231 "trace_gen.m"
                ll_backend__code_loc_dep__produce_variable_in_reg_or_stack_6_p_0(ll_backend__trace_gen__Var_28, &ll_backend__trace_gen__VarCode_36, &ll_backend__trace_gen__Lval_70, ll_backend__trace_gen__HeadVar__11_11, ll_backend__trace_gen__STATE_VARIABLE_CLD_0_12, &ll_backend__trace_gen__STATE_VARIABLE_CLD_51_51);
              }
#line 1232 "trace_gen.m"
              {
#line 1232 "trace_gen.m"
                ll_backend__trace_gen__Type_71 = ll_backend__code_info__variable_type_2_f_0(ll_backend__trace_gen__HeadVar__11_11, ll_backend__trace_gen__Var_28);
              }
#line 1233 "trace_gen.m"
              {
#line 1233 "trace_gen.m"
                ll_backend__trace_gen__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__trace_gen__VarSet_2, ll_backend__trace_gen__Var_28, &ll_backend__trace_gen__SearchName_72);
              }
#line 1235 "trace_gen.m"
              if (ll_backend__trace_gen__succeeded)
#line 1234 "trace_gen.m"
                ll_backend__trace_gen__Name_73 = ll_backend__trace_gen__SearchName_72;
#line 1235 "trace_gen.m"
              else
#line 1236 "trace_gen.m"
                ll_backend__trace_gen__Name_73 = (MR_String) "";
#line 1245 "trace_gen.m"
              mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1246 "trace_gen.m"
              {
#line 1246 "trace_gen.m"
                ll_backend__trace_gen__LiveType_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1246 "trace_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__trace_gen__LiveType_75, 0) = ((MR_Box) (ll_backend__trace_gen__Var_28));
#line 1246 "trace_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__trace_gen__LiveType_75, 1) = ((MR_Box) (ll_backend__trace_gen__Name_73));
#line 1246 "trace_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__trace_gen__LiveType_75, 2) = ((MR_Box) (ll_backend__trace_gen__Type_71));
#line 1246 "trace_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__trace_gen__LiveType_75, 3) = NULL;
#line 1246 "trace_gen.m"
              }
#line 1247 "trace_gen.m"
              {
#line 1247 "trace_gen.m"
                ll_backend__trace_gen__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1247 "trace_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_78_78, 0) = ((MR_Box) (ll_backend__trace_gen__Lval_70));
#line 1247 "trace_gen.m"
              }
#line 1247 "trace_gen.m"
              {
#line 1247 "trace_gen.m"
                ll_backend__trace_gen__VarInfo_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1247 "trace_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__trace_gen__VarInfo_43, 0) = ((MR_Box) (ll_backend__trace_gen__V_78_78));
#line 1247 "trace_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__trace_gen__VarInfo_43, 1) = ((MR_Box) (ll_backend__trace_gen__LiveType_75));
#line 1247 "trace_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__trace_gen__VarInfo_43, 2) = ((MR_Box) ((MR_String) "trace"));
#line 1247 "trace_gen.m"
              }
#line 1248 "trace_gen.m"
              {
#line 1248 "trace_gen.m"
                parse_tree__prog_type__type_vars_2_p_0(ll_backend__trace_gen__Type_71, &ll_backend__trace_gen__TypeVars_76);
              }
#line 1249 "trace_gen.m"
              {
#line 1249 "trace_gen.m"
                mercury__set__insert_list_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[3], ll_backend__trace_gen__TypeVars_76, ll_backend__trace_gen__STATE_VARIABLE_TVars_0_6, &ll_backend__trace_gen__STATE_VARIABLE_TVars_50_50);
              }
#line 1221 "trace_gen.m"
              {
#line 1221 "trace_gen.m"
                ll_backend__trace_gen__STATE_VARIABLE_VarInfos_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1221 "trace_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__trace_gen__STATE_VARIABLE_VarInfos_52_52, 0) = ((MR_Box) (ll_backend__trace_gen__VarInfo_43));
#line 1221 "trace_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__trace_gen__STATE_VARIABLE_VarInfos_52_52, 1) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_VarInfos_0_8));
#line 1221 "trace_gen.m"
              }
#line 1218 "trace_gen.m"
            }
#line 1217 "trace_gen.m"
            break;
#line 1217 "trace_gen.m"
        }
#line 1223 "trace_gen.m"
        {
#line 1223 "trace_gen.m"
          ll_backend__trace_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_13_p_0(ll_backend__trace_gen__Vars_29, ll_backend__trace_gen__VarSet_2, ll_backend__trace_gen__VarTypes_3, ll_backend__trace_gen__STATE_VARIABLE_TVars_50_50, ll_backend__trace_gen__STATE_VARIABLE_TVars_7, ll_backend__trace_gen__STATE_VARIABLE_VarInfos_52_52, ll_backend__trace_gen__STATE_VARIABLE_VarInfos_9, &ll_backend__trace_gen__VarsCode_37, ll_backend__trace_gen__HeadVar__11_11, ll_backend__trace_gen__STATE_VARIABLE_CLD_51_51, ll_backend__trace_gen__STATE_VARIABLE_CLD_13);
        }
#line 1210 "trace_gen.m"
        {
#line 1210 "trace_gen.m"
          *ll_backend__trace_gen__HeadVar__10_10 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_57_57, ll_backend__trace_gen__VarCode_36, ll_backend__trace_gen__VarsCode_37);
        }
#line 1210 "trace_gen.m"
      }
#line 1208 "trace_gen.m"
  }
#line 1203 "trace_gen.m"
}

#line 947 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__947__1_2_p_0(
#line 947 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeFromFullLval_17,
#line 947 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_62)
#line 947 "trace_gen.m"
{
#line 947 "trace_gen.m"
  {
#line 947 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 947 "trace_gen.m"
    {
#line 947 "trace_gen.m"
      return ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[1], ((MR_Box) (ll_backend__trace_gen__MaybeFromFullLval_17)), ((MR_Box) (ll_backend__trace_gen__HeadVar__2_62)));
    }
#line 947 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 947 "trace_gen.m"
  }
#line 947 "trace_gen.m"
}

#line 941 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__941__1_2_p_0(
#line 941 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeRedoLabelLval_16,
#line 941 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_57)
#line 941 "trace_gen.m"
{
#line 941 "trace_gen.m"
  {
#line 941 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 941 "trace_gen.m"
    {
#line 941 "trace_gen.m"
      return ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[0], ((MR_Box) (ll_backend__trace_gen__MaybeRedoLabelLval_16)), ((MR_Box) (ll_backend__trace_gen__HeadVar__2_57)));
    }
#line 941 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 941 "trace_gen.m"
  }
#line 941 "trace_gen.m"
}

#line 1183 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__maybe_setup_redo_event__1183__1_2_p_0(
#line 1183 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Lval_8,
#line 1183 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_20)
#line 1183 "trace_gen.m"
{
#line 1183 "trace_gen.m"
  {
#line 1183 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1183 "trace_gen.m"
    {
#line 1183 "trace_gen.m"
      return ll_backend__trace_gen__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__trace_gen__Lval_8, ll_backend__trace_gen__HeadVar__2_20);
    }
#line 1183 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 1183 "trace_gen.m"
  }
#line 1183 "trace_gen.m"
}

#line 96 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen____Compare____trace_slot_info_0_0(
#line 96 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
#line 96 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 96 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3)
#line 96 "trace_gen.m"
{
#line 96 "trace_gen.m"
  {
#line 96 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 96 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastX_21 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;
#line 96 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastY_22 = (MR_Integer) ll_backend__trace_gen__HeadVar__3_3;

#line 96 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_21 == ll_backend__trace_gen__CastY_22);
#line 96 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 2281 "ll_backend.trace_gen.c"
      *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 96 "trace_gen.m"
    else
#line 96 "trace_gen.m"
      {
#line 96 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 96 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 96 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 96 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 3)));
#line 96 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 4)));
#line 96 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 5)));
#line 96 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 96 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 96 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 2)));
#line 96 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 3)));
#line 96 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 4)));
#line 96 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 5)));
#line 96 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_16_16;

#line 96 "trace_gen.m"
        {
#line 96 "trace_gen.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[11], &ll_backend__trace_gen__V_16_16, ((MR_Box) (ll_backend__trace_gen__V_4_4)), ((MR_Box) (ll_backend__trace_gen__V_10_10)));
        }
#line 2319 "ll_backend.trace_gen.c"
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_16_16 == (MR_Integer) 0);
#line 96 "trace_gen.m"
        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 96 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 96 "trace_gen.m"
          *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_16_16;
#line 96 "trace_gen.m"
        else
#line 96 "trace_gen.m"
          {
#line 96 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_17_17;

#line 96 "trace_gen.m"
            {
#line 96 "trace_gen.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[11], &ll_backend__trace_gen__V_17_17, ((MR_Box) (ll_backend__trace_gen__V_5_5)), ((MR_Box) (ll_backend__trace_gen__V_11_11)));
            }
#line 2339 "ll_backend.trace_gen.c"
            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_17_17 == (MR_Integer) 0);
#line 96 "trace_gen.m"
            ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 96 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 96 "trace_gen.m"
              *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_17_17;
#line 96 "trace_gen.m"
            else
#line 96 "trace_gen.m"
              {
#line 96 "trace_gen.m"
                MR_Word ll_backend__trace_gen__V_18_18;

#line 96 "trace_gen.m"
                {
#line 96 "trace_gen.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[11], &ll_backend__trace_gen__V_18_18, ((MR_Box) (ll_backend__trace_gen__V_6_6)), ((MR_Box) (ll_backend__trace_gen__V_12_12)));
                }
#line 2359 "ll_backend.trace_gen.c"
                ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_18_18 == (MR_Integer) 0);
#line 96 "trace_gen.m"
                ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 96 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 96 "trace_gen.m"
                  *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_18_18;
#line 96 "trace_gen.m"
                else
#line 96 "trace_gen.m"
                  {
#line 96 "trace_gen.m"
                    MR_Word ll_backend__trace_gen__V_19_19;

#line 96 "trace_gen.m"
                    {
#line 96 "trace_gen.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[11], &ll_backend__trace_gen__V_19_19, ((MR_Box) (ll_backend__trace_gen__V_7_7)), ((MR_Box) (ll_backend__trace_gen__V_13_13)));
                    }
#line 2379 "ll_backend.trace_gen.c"
                    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_19_19 == (MR_Integer) 0);
#line 96 "trace_gen.m"
                    ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 96 "trace_gen.m"
                    if (ll_backend__trace_gen__succeeded)
#line 96 "trace_gen.m"
                      *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_19_19;
#line 96 "trace_gen.m"
                    else
#line 96 "trace_gen.m"
                      {
#line 96 "trace_gen.m"
                        MR_Word ll_backend__trace_gen__V_20_20;

#line 96 "trace_gen.m"
                        {
#line 96 "trace_gen.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[11], &ll_backend__trace_gen__V_20_20, ((MR_Box) (ll_backend__trace_gen__V_8_8)), ((MR_Box) (ll_backend__trace_gen__V_14_14)));
                        }
#line 2399 "ll_backend.trace_gen.c"
                        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_20_20 == (MR_Integer) 0);
#line 96 "trace_gen.m"
                        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 96 "trace_gen.m"
                        if (ll_backend__trace_gen__succeeded)
#line 96 "trace_gen.m"
                          *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_20_20;
#line 96 "trace_gen.m"
                        else
#line 96 "trace_gen.m"
                          {
#line 96 "trace_gen.m"
                            {
#line 96 "trace_gen.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[11], ll_backend__trace_gen__HeadVar__1_1, ((MR_Box) (ll_backend__trace_gen__V_9_9)), ((MR_Box) (ll_backend__trace_gen__V_15_15)));
#line 96 "trace_gen.m"
                              return;
                            }
#line 96 "trace_gen.m"
                          }
#line 96 "trace_gen.m"
                      }
#line 96 "trace_gen.m"
                  }
#line 96 "trace_gen.m"
              }
#line 96 "trace_gen.m"
          }
#line 96 "trace_gen.m"
      }
#line 96 "trace_gen.m"
  }
#line 96 "trace_gen.m"
}

#line 96 "trace_gen.m"
MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_slot_info_0_0(
#line 96 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 96 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2)
#line 96 "trace_gen.m"
{
#line 96 "trace_gen.m"
  {
#line 96 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 96 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastX_15 = (MR_Integer) ll_backend__trace_gen__HeadVar__1_1;
#line 96 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastY_16 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;

#line 96 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_15 == ll_backend__trace_gen__CastY_16);
#line 96 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 96 "trace_gen.m"
      ll_backend__trace_gen__succeeded = MR_TRUE;
#line 96 "trace_gen.m"
    else
#line 96 "trace_gen.m"
      {
#line 96 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_18_18;
#line 96 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_19_19;
#line 96 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_20_20;
#line 96 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_21_21;
#line 96 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_22_22;
#line 96 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 96 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 96 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 96 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 3)));
#line 96 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 4)));
#line 96 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 5)));
#line 96 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 96 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 96 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 96 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 3)));
#line 96 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 4)));
#line 96 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 5)));

#line 2498 "ll_backend.trace_gen.c"
        {
#line 2500 "ll_backend.trace_gen.c"
          ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[11], ((MR_Box) (ll_backend__trace_gen__V_3_3)), ((MR_Box) (ll_backend__trace_gen__V_9_9)));
        }
#line 96 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 96 "trace_gen.m"
          {
#line 2507 "ll_backend.trace_gen.c"
            ll_backend__trace_gen__TypeInfo_18_18 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[11];
#line 2509 "ll_backend.trace_gen.c"
            {
#line 2511 "ll_backend.trace_gen.c"
              ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_18_18, ((MR_Box) (ll_backend__trace_gen__V_4_4)), ((MR_Box) (ll_backend__trace_gen__V_10_10)));
            }
#line 96 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 96 "trace_gen.m"
              {
#line 2518 "ll_backend.trace_gen.c"
                ll_backend__trace_gen__TypeInfo_19_19 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[11];
#line 2520 "ll_backend.trace_gen.c"
                {
#line 2522 "ll_backend.trace_gen.c"
                  ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_19_19, ((MR_Box) (ll_backend__trace_gen__V_5_5)), ((MR_Box) (ll_backend__trace_gen__V_11_11)));
                }
#line 96 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 96 "trace_gen.m"
                  {
#line 2529 "ll_backend.trace_gen.c"
                    ll_backend__trace_gen__TypeInfo_20_20 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[11];
#line 2531 "ll_backend.trace_gen.c"
                    {
#line 2533 "ll_backend.trace_gen.c"
                      ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_20_20, ((MR_Box) (ll_backend__trace_gen__V_6_6)), ((MR_Box) (ll_backend__trace_gen__V_12_12)));
                    }
#line 96 "trace_gen.m"
                    if (ll_backend__trace_gen__succeeded)
#line 96 "trace_gen.m"
                      {
#line 2540 "ll_backend.trace_gen.c"
                        ll_backend__trace_gen__TypeInfo_21_21 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[11];
#line 2542 "ll_backend.trace_gen.c"
                        {
#line 2544 "ll_backend.trace_gen.c"
                          ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_21_21, ((MR_Box) (ll_backend__trace_gen__V_7_7)), ((MR_Box) (ll_backend__trace_gen__V_13_13)));
                        }
#line 96 "trace_gen.m"
                        if (ll_backend__trace_gen__succeeded)
#line 96 "trace_gen.m"
                          {
#line 2551 "ll_backend.trace_gen.c"
                            ll_backend__trace_gen__TypeInfo_22_22 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[11];
#line 2553 "ll_backend.trace_gen.c"
                            {
#line 2555 "ll_backend.trace_gen.c"
                              return ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_22_22, ((MR_Box) (ll_backend__trace_gen__V_8_8)), ((MR_Box) (ll_backend__trace_gen__V_14_14)));
                            }
#line 96 "trace_gen.m"
                          }
#line 96 "trace_gen.m"
                      }
#line 96 "trace_gen.m"
                  }
#line 96 "trace_gen.m"
              }
#line 96 "trace_gen.m"
          }
#line 96 "trace_gen.m"
      }
#line 96 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 96 "trace_gen.m"
  }
#line 96 "trace_gen.m"
}

#line 267 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen____Compare____trace_port_info_0_0(
#line 267 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
#line 267 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 267 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3)
#line 267 "trace_gen.m"
{
#line 267 "trace_gen.m"
  {
#line 267 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 267 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastX_66 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;
#line 267 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastY_67 = (MR_Integer) ll_backend__trace_gen__HeadVar__3_3;

#line 267 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_66 == ll_backend__trace_gen__CastY_67);
#line 267 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 2601 "ll_backend.trace_gen.c"
      *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 267 "trace_gen.m"
    else
#line 267 "trace_gen.m"
#line 267 "trace_gen.m"
      switch (MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__2_2)) {
#line 267 "trace_gen.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 267 "trace_gen.m"
        case (MR_Integer) 0:
#line 267 "trace_gen.m"
#line 267 "trace_gen.m"
          switch (MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) {
#line 267 "trace_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 267 "trace_gen.m"
            case (MR_Integer) 0:
#line 267 "trace_gen.m"
              *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 267 "trace_gen.m"
              break;
#line 267 "trace_gen.m"
            case (MR_Integer) 1:
#line 2625 "ll_backend.trace_gen.c"
              *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 267 "trace_gen.m"
              break;
#line 267 "trace_gen.m"
            case (MR_Integer) 2:
#line 2631 "ll_backend.trace_gen.c"
              *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 267 "trace_gen.m"
              break;
#line 267 "trace_gen.m"
            case (MR_Integer) 3:
#line 267 "trace_gen.m"
#line 267 "trace_gen.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)))) {
#line 267 "trace_gen.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 267 "trace_gen.m"
                case (MR_Integer) 0:
#line 2644 "ll_backend.trace_gen.c"
                  *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 267 "trace_gen.m"
                  break;
#line 267 "trace_gen.m"
                case (MR_Integer) 1:
#line 2650 "ll_backend.trace_gen.c"
                  *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 267 "trace_gen.m"
                  break;
#line 267 "trace_gen.m"
              }
#line 267 "trace_gen.m"
              break;
#line 267 "trace_gen.m"
          }
#line 267 "trace_gen.m"
          break;
#line 267 "trace_gen.m"
        case (MR_Integer) 1:
#line 267 "trace_gen.m"
          {
#line 267 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 267 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));

#line 267 "trace_gen.m"
#line 267 "trace_gen.m"
            switch (MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) {
#line 267 "trace_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 267 "trace_gen.m"
              case (MR_Integer) 0:
#line 2678 "ll_backend.trace_gen.c"
                *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 267 "trace_gen.m"
                break;
#line 267 "trace_gen.m"
              case (MR_Integer) 1:
#line 267 "trace_gen.m"
                {
#line 267 "trace_gen.m"
                  MR_Word ll_backend__trace_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 267 "trace_gen.m"
                  MR_Word ll_backend__trace_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 267 "trace_gen.m"
                  MR_Word ll_backend__trace_gen__V_16_16;

#line 267 "trace_gen.m"
                  {
#line 267 "trace_gen.m"
                    mdbcomp__goal_path____Compare____forward_goal_path_0_0(&ll_backend__trace_gen__V_16_16, ll_backend__trace_gen__V_78_78, ll_backend__trace_gen__V_14_14);
                  }
#line 2698 "ll_backend.trace_gen.c"
                  ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_16_16 == (MR_Integer) 0);
#line 267 "trace_gen.m"
                  ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 267 "trace_gen.m"
                  if (ll_backend__trace_gen__succeeded)
#line 267 "trace_gen.m"
                    *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_16_16;
#line 267 "trace_gen.m"
                  else
#line 267 "trace_gen.m"
                    {
#line 267 "trace_gen.m"
                      {
#line 267 "trace_gen.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[10], ll_backend__trace_gen__HeadVar__1_1, ((MR_Box) (ll_backend__trace_gen__V_77_77)), ((MR_Box) (ll_backend__trace_gen__V_15_15)));
#line 267 "trace_gen.m"
                        return;
                      }
#line 267 "trace_gen.m"
                    }
#line 267 "trace_gen.m"
                }
#line 267 "trace_gen.m"
                break;
#line 267 "trace_gen.m"
              case (MR_Integer) 2:
#line 2725 "ll_backend.trace_gen.c"
                *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 267 "trace_gen.m"
                break;
#line 267 "trace_gen.m"
              case (MR_Integer) 3:
#line 267 "trace_gen.m"
#line 267 "trace_gen.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)))) {
#line 267 "trace_gen.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 267 "trace_gen.m"
                  case (MR_Integer) 0:
#line 2738 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 267 "trace_gen.m"
                    break;
#line 267 "trace_gen.m"
                  case (MR_Integer) 1:
#line 2744 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 267 "trace_gen.m"
                    break;
#line 267 "trace_gen.m"
                }
#line 267 "trace_gen.m"
                break;
#line 267 "trace_gen.m"
            }
#line 267 "trace_gen.m"
          }
#line 267 "trace_gen.m"
          break;
#line 267 "trace_gen.m"
        case (MR_Integer) 2:
#line 267 "trace_gen.m"
          {
#line 267 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 267 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));

#line 267 "trace_gen.m"
#line 267 "trace_gen.m"
            switch (MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) {
#line 267 "trace_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 267 "trace_gen.m"
              case (MR_Integer) 0:
#line 2774 "ll_backend.trace_gen.c"
                *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 267 "trace_gen.m"
                break;
#line 267 "trace_gen.m"
              case (MR_Integer) 1:
#line 2780 "ll_backend.trace_gen.c"
                *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 267 "trace_gen.m"
                break;
#line 267 "trace_gen.m"
              case (MR_Integer) 2:
#line 267 "trace_gen.m"
                {
#line 267 "trace_gen.m"
                  MR_Word ll_backend__trace_gen__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 267 "trace_gen.m"
                  MR_Word ll_backend__trace_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 267 "trace_gen.m"
                  MR_Word ll_backend__trace_gen__V_37_37;

#line 267 "trace_gen.m"
                  {
#line 267 "trace_gen.m"
                    mdbcomp__goal_path____Compare____forward_goal_path_0_0(&ll_backend__trace_gen__V_37_37, ll_backend__trace_gen__V_75_75, ll_backend__trace_gen__V_35_35);
                  }
#line 2800 "ll_backend.trace_gen.c"
                  ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_37_37 == (MR_Integer) 0);
#line 267 "trace_gen.m"
                  ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 267 "trace_gen.m"
                  if (ll_backend__trace_gen__succeeded)
#line 267 "trace_gen.m"
                    *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_37_37;
#line 267 "trace_gen.m"
                  else
#line 267 "trace_gen.m"
                    {
#line 267 "trace_gen.m"
                      {
#line 267 "trace_gen.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[9], ll_backend__trace_gen__HeadVar__1_1, ((MR_Box) (ll_backend__trace_gen__V_74_74)), ((MR_Box) (ll_backend__trace_gen__V_36_36)));
#line 267 "trace_gen.m"
                        return;
                      }
#line 267 "trace_gen.m"
                    }
#line 267 "trace_gen.m"
                }
#line 267 "trace_gen.m"
                break;
#line 267 "trace_gen.m"
              case (MR_Integer) 3:
#line 267 "trace_gen.m"
#line 267 "trace_gen.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)))) {
#line 267 "trace_gen.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 267 "trace_gen.m"
                  case (MR_Integer) 0:
#line 2834 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 267 "trace_gen.m"
                    break;
#line 267 "trace_gen.m"
                  case (MR_Integer) 1:
#line 2840 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 267 "trace_gen.m"
                    break;
#line 267 "trace_gen.m"
                }
#line 267 "trace_gen.m"
                break;
#line 267 "trace_gen.m"
            }
#line 267 "trace_gen.m"
          }
#line 267 "trace_gen.m"
          break;
#line 267 "trace_gen.m"
        case (MR_Integer) 3:
#line 267 "trace_gen.m"
#line 267 "trace_gen.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)))) {
#line 267 "trace_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 267 "trace_gen.m"
            case (MR_Integer) 0:
#line 267 "trace_gen.m"
              {
#line 267 "trace_gen.m"
                MR_Word ll_backend__trace_gen__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));

#line 267 "trace_gen.m"
#line 267 "trace_gen.m"
                switch (MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) {
#line 267 "trace_gen.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 267 "trace_gen.m"
                  case (MR_Integer) 0:
#line 2875 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 267 "trace_gen.m"
                    break;
#line 267 "trace_gen.m"
                  case (MR_Integer) 1:
#line 2881 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 267 "trace_gen.m"
                    break;
#line 267 "trace_gen.m"
                  case (MR_Integer) 2:
#line 2887 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 267 "trace_gen.m"
                    break;
#line 267 "trace_gen.m"
                  case (MR_Integer) 3:
#line 267 "trace_gen.m"
#line 267 "trace_gen.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)))) {
#line 267 "trace_gen.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 267 "trace_gen.m"
                      case (MR_Integer) 0:
#line 267 "trace_gen.m"
                        {
#line 267 "trace_gen.m"
                          MR_Word ll_backend__trace_gen__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));

#line 267 "trace_gen.m"
                          {
#line 267 "trace_gen.m"
                            mdbcomp__goal_path____Compare____forward_goal_path_0_0(ll_backend__trace_gen__HeadVar__1_1, ll_backend__trace_gen__V_76_76, ll_backend__trace_gen__V_52_52);
#line 267 "trace_gen.m"
                            return;
                          }
#line 267 "trace_gen.m"
                        }
#line 267 "trace_gen.m"
                        break;
#line 267 "trace_gen.m"
                      case (MR_Integer) 1:
#line 2918 "ll_backend.trace_gen.c"
                        *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 267 "trace_gen.m"
                        break;
#line 267 "trace_gen.m"
                    }
#line 267 "trace_gen.m"
                    break;
#line 267 "trace_gen.m"
                }
#line 267 "trace_gen.m"
              }
#line 267 "trace_gen.m"
              break;
#line 267 "trace_gen.m"
            case (MR_Integer) 1:
#line 267 "trace_gen.m"
              {
#line 267 "trace_gen.m"
                MR_Word ll_backend__trace_gen__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));

#line 267 "trace_gen.m"
#line 267 "trace_gen.m"
                switch (MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) {
#line 267 "trace_gen.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 267 "trace_gen.m"
                  case (MR_Integer) 0:
#line 2946 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 267 "trace_gen.m"
                    break;
#line 267 "trace_gen.m"
                  case (MR_Integer) 1:
#line 2952 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 267 "trace_gen.m"
                    break;
#line 267 "trace_gen.m"
                  case (MR_Integer) 2:
#line 2958 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 267 "trace_gen.m"
                    break;
#line 267 "trace_gen.m"
                  case (MR_Integer) 3:
#line 267 "trace_gen.m"
#line 267 "trace_gen.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)))) {
#line 267 "trace_gen.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 267 "trace_gen.m"
                      case (MR_Integer) 0:
#line 2971 "ll_backend.trace_gen.c"
                        *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 267 "trace_gen.m"
                        break;
#line 267 "trace_gen.m"
                      case (MR_Integer) 1:
#line 267 "trace_gen.m"
                        {
#line 267 "trace_gen.m"
                          MR_Word ll_backend__trace_gen__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));

#line 267 "trace_gen.m"
                          {
#line 267 "trace_gen.m"
                            mdbcomp__goal_path____Compare____forward_goal_path_0_0(ll_backend__trace_gen__HeadVar__1_1, ll_backend__trace_gen__V_79_79, ll_backend__trace_gen__V_65_65);
#line 267 "trace_gen.m"
                            return;
                          }
#line 267 "trace_gen.m"
                        }
#line 267 "trace_gen.m"
                        break;
#line 267 "trace_gen.m"
                    }
#line 267 "trace_gen.m"
                    break;
#line 267 "trace_gen.m"
                }
#line 267 "trace_gen.m"
              }
#line 267 "trace_gen.m"
              break;
#line 267 "trace_gen.m"
          }
#line 267 "trace_gen.m"
          break;
#line 267 "trace_gen.m"
      }
#line 267 "trace_gen.m"
  }
#line 267 "trace_gen.m"
}

#line 267 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_port_info_0_0(
#line 267 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 267 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2)
#line 267 "trace_gen.m"
{
#line 267 "trace_gen.m"
  {
#line 267 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 267 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastX_17 = (MR_Integer) ll_backend__trace_gen__HeadVar__1_1;
#line 267 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastY_18 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;

#line 267 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_17 == ll_backend__trace_gen__CastY_18);
#line 267 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 267 "trace_gen.m"
      ll_backend__trace_gen__succeeded = MR_TRUE;
#line 267 "trace_gen.m"
    else
#line 267 "trace_gen.m"
#line 267 "trace_gen.m"
      switch (MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__1_1)) {
#line 267 "trace_gen.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 267 "trace_gen.m"
        case (MR_Integer) 0:
#line 267 "trace_gen.m"
          {
#line 267 "trace_gen.m"
            MR_Integer ll_backend__trace_gen__CastX_3 = (MR_Integer) ll_backend__trace_gen__HeadVar__1_1;
#line 267 "trace_gen.m"
            MR_Integer ll_backend__trace_gen__CastY_4 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;

#line 267 "trace_gen.m"
            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastY_4 == ll_backend__trace_gen__CastX_3);
#line 267 "trace_gen.m"
          }
#line 267 "trace_gen.m"
          break;
#line 267 "trace_gen.m"
        case (MR_Integer) 1:
#line 267 "trace_gen.m"
          {
#line 267 "trace_gen.m"
            MR_Word ll_backend__trace_gen__TypeInfo_23_23;
#line 267 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 267 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 267 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_7_7;
#line 267 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_8_8;

#line 267 "trace_gen.m"
            ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 267 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 267 "trace_gen.m"
              {
#line 267 "trace_gen.m"
                ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 267 "trace_gen.m"
                ll_backend__trace_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 3085 "ll_backend.trace_gen.c"
                {
#line 3087 "ll_backend.trace_gen.c"
                  ll_backend__trace_gen__succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(ll_backend__trace_gen__V_5_5, ll_backend__trace_gen__V_7_7);
                }
#line 267 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 267 "trace_gen.m"
                  {
#line 3094 "ll_backend.trace_gen.c"
                    ll_backend__trace_gen__TypeInfo_23_23 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[10];
#line 3096 "ll_backend.trace_gen.c"
                    {
#line 3098 "ll_backend.trace_gen.c"
                      return ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_23_23, ((MR_Box) (ll_backend__trace_gen__V_6_6)), ((MR_Box) (ll_backend__trace_gen__V_8_8)));
                    }
#line 267 "trace_gen.m"
                  }
#line 267 "trace_gen.m"
              }
#line 267 "trace_gen.m"
          }
#line 267 "trace_gen.m"
          break;
#line 267 "trace_gen.m"
        case (MR_Integer) 2:
#line 267 "trace_gen.m"
          {
#line 267 "trace_gen.m"
            MR_Word ll_backend__trace_gen__TypeInfo_20_20;
#line 267 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 267 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 267 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_11_11;
#line 267 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_12_12;

#line 267 "trace_gen.m"
            ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 267 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 267 "trace_gen.m"
              {
#line 267 "trace_gen.m"
                ll_backend__trace_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 267 "trace_gen.m"
                ll_backend__trace_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 3134 "ll_backend.trace_gen.c"
                {
#line 3136 "ll_backend.trace_gen.c"
                  ll_backend__trace_gen__succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(ll_backend__trace_gen__V_9_9, ll_backend__trace_gen__V_11_11);
                }
#line 267 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 267 "trace_gen.m"
                  {
#line 3143 "ll_backend.trace_gen.c"
                    ll_backend__trace_gen__TypeInfo_20_20 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[9];
#line 3145 "ll_backend.trace_gen.c"
                    {
#line 3147 "ll_backend.trace_gen.c"
                      return ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_20_20, ((MR_Box) (ll_backend__trace_gen__V_10_10)), ((MR_Box) (ll_backend__trace_gen__V_12_12)));
                    }
#line 267 "trace_gen.m"
                  }
#line 267 "trace_gen.m"
              }
#line 267 "trace_gen.m"
          }
#line 267 "trace_gen.m"
          break;
#line 267 "trace_gen.m"
        case (MR_Integer) 3:
#line 267 "trace_gen.m"
#line 267 "trace_gen.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)))) {
#line 267 "trace_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 267 "trace_gen.m"
            case (MR_Integer) 0:
#line 267 "trace_gen.m"
              {
#line 267 "trace_gen.m"
                MR_Word ll_backend__trace_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 267 "trace_gen.m"
                MR_Word ll_backend__trace_gen__V_14_14;

#line 267 "trace_gen.m"
                ll_backend__trace_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 267 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 267 "trace_gen.m"
                  {
#line 267 "trace_gen.m"
                    ll_backend__trace_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 3182 "ll_backend.trace_gen.c"
                    {
#line 3184 "ll_backend.trace_gen.c"
                      return ll_backend__trace_gen__succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(ll_backend__trace_gen__V_13_13, ll_backend__trace_gen__V_14_14);
                    }
#line 267 "trace_gen.m"
                  }
#line 267 "trace_gen.m"
              }
#line 267 "trace_gen.m"
              break;
#line 267 "trace_gen.m"
            case (MR_Integer) 1:
#line 267 "trace_gen.m"
              {
#line 267 "trace_gen.m"
                MR_Word ll_backend__trace_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 267 "trace_gen.m"
                MR_Word ll_backend__trace_gen__V_16_16;

#line 267 "trace_gen.m"
                ll_backend__trace_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 267 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 267 "trace_gen.m"
                  {
#line 267 "trace_gen.m"
                    ll_backend__trace_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 3210 "ll_backend.trace_gen.c"
                    {
#line 3212 "ll_backend.trace_gen.c"
                      return ll_backend__trace_gen__succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(ll_backend__trace_gen__V_15_15, ll_backend__trace_gen__V_16_16);
                    }
#line 267 "trace_gen.m"
                  }
#line 267 "trace_gen.m"
              }
#line 267 "trace_gen.m"
              break;
#line 267 "trace_gen.m"
          }
#line 267 "trace_gen.m"
          break;
#line 267 "trace_gen.m"
      }
#line 267 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 267 "trace_gen.m"
  }
#line 267 "trace_gen.m"
}

#line 1356 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen____Compare____trace_info_0_0(
#line 1356 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
#line 1356 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 1356 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3)
#line 1356 "trace_gen.m"
{
#line 1356 "trace_gen.m"
  {
#line 1356 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 1356 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastX_30 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;
#line 1356 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastY_31 = (MR_Integer) ll_backend__trace_gen__HeadVar__3_3;

#line 1356 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_30 == ll_backend__trace_gen__CastY_31);
#line 1356 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 3258 "ll_backend.trace_gen.c"
      *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 1356 "trace_gen.m"
    else
#line 1356 "trace_gen.m"
      {
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 3)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 4)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 5)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 6)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 7)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 8)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 2)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 3)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 4)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 5)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 6)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 7)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 8)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_22_22;

#line 1356 "trace_gen.m"
        {
#line 1356 "trace_gen.m"
          libs__trace_params____Compare____trace_level_0_0(&ll_backend__trace_gen__V_22_22, ll_backend__trace_gen__V_4_4, ll_backend__trace_gen__V_13_13);
        }
#line 3308 "ll_backend.trace_gen.c"
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_22_22 == (MR_Integer) 0);
#line 1356 "trace_gen.m"
        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1356 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 1356 "trace_gen.m"
          *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_22_22;
#line 1356 "trace_gen.m"
        else
#line 1356 "trace_gen.m"
          {
#line 1356 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_23_23;

#line 1356 "trace_gen.m"
            {
#line 1356 "trace_gen.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[6], &ll_backend__trace_gen__V_23_23, ((MR_Box) (ll_backend__trace_gen__V_5_5)), ((MR_Box) (ll_backend__trace_gen__V_14_14)));
            }
#line 3328 "ll_backend.trace_gen.c"
            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_23_23 == (MR_Integer) 0);
#line 1356 "trace_gen.m"
            ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1356 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 1356 "trace_gen.m"
              *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_23_23;
#line 1356 "trace_gen.m"
            else
#line 1356 "trace_gen.m"
              {
#line 1356 "trace_gen.m"
                MR_Word ll_backend__trace_gen__V_24_24;

#line 1356 "trace_gen.m"
                {
#line 1356 "trace_gen.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[1], &ll_backend__trace_gen__V_24_24, ((MR_Box) (ll_backend__trace_gen__V_6_6)), ((MR_Box) (ll_backend__trace_gen__V_15_15)));
                }
#line 3348 "ll_backend.trace_gen.c"
                ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_24_24 == (MR_Integer) 0);
#line 1356 "trace_gen.m"
                ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1356 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 1356 "trace_gen.m"
                  *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_24_24;
#line 1356 "trace_gen.m"
                else
#line 1356 "trace_gen.m"
                  {
#line 1356 "trace_gen.m"
                    MR_Word ll_backend__trace_gen__V_25_25;

#line 1356 "trace_gen.m"
                    {
#line 1356 "trace_gen.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[1], &ll_backend__trace_gen__V_25_25, ((MR_Box) (ll_backend__trace_gen__V_7_7)), ((MR_Box) (ll_backend__trace_gen__V_16_16)));
                    }
#line 3368 "ll_backend.trace_gen.c"
                    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_25_25 == (MR_Integer) 0);
#line 1356 "trace_gen.m"
                    ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1356 "trace_gen.m"
                    if (ll_backend__trace_gen__succeeded)
#line 1356 "trace_gen.m"
                      *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_25_25;
#line 1356 "trace_gen.m"
                    else
#line 1356 "trace_gen.m"
                      {
#line 1356 "trace_gen.m"
                        MR_Word ll_backend__trace_gen__V_26_26;

#line 1356 "trace_gen.m"
                        {
#line 1356 "trace_gen.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[7], &ll_backend__trace_gen__V_26_26, ((MR_Box) (ll_backend__trace_gen__V_8_8)), ((MR_Box) (ll_backend__trace_gen__V_17_17)));
                        }
#line 3388 "ll_backend.trace_gen.c"
                        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_26_26 == (MR_Integer) 0);
#line 1356 "trace_gen.m"
                        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1356 "trace_gen.m"
                        if (ll_backend__trace_gen__succeeded)
#line 1356 "trace_gen.m"
                          *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_26_26;
#line 1356 "trace_gen.m"
                        else
#line 1356 "trace_gen.m"
                          {
#line 1356 "trace_gen.m"
                            MR_Word ll_backend__trace_gen__V_27_27;

#line 1356 "trace_gen.m"
                            {
#line 1356 "trace_gen.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[1], &ll_backend__trace_gen__V_27_27, ((MR_Box) (ll_backend__trace_gen__V_9_9)), ((MR_Box) (ll_backend__trace_gen__V_18_18)));
                            }
#line 3408 "ll_backend.trace_gen.c"
                            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_27_27 == (MR_Integer) 0);
#line 1356 "trace_gen.m"
                            ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1356 "trace_gen.m"
                            if (ll_backend__trace_gen__succeeded)
#line 1356 "trace_gen.m"
                              *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_27_27;
#line 1356 "trace_gen.m"
                            else
#line 1356 "trace_gen.m"
                              {
#line 1356 "trace_gen.m"
                                MR_Word ll_backend__trace_gen__V_28_28;

#line 1356 "trace_gen.m"
                                {
#line 1356 "trace_gen.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[1], &ll_backend__trace_gen__V_28_28, ((MR_Box) (ll_backend__trace_gen__V_10_10)), ((MR_Box) (ll_backend__trace_gen__V_19_19)));
                                }
#line 3428 "ll_backend.trace_gen.c"
                                ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_28_28 == (MR_Integer) 0);
#line 1356 "trace_gen.m"
                                ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1356 "trace_gen.m"
                                if (ll_backend__trace_gen__succeeded)
#line 1356 "trace_gen.m"
                                  *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_28_28;
#line 1356 "trace_gen.m"
                                else
#line 1356 "trace_gen.m"
                                  {
#line 1356 "trace_gen.m"
                                    MR_Word ll_backend__trace_gen__V_29_29;

#line 1356 "trace_gen.m"
                                    {
#line 1356 "trace_gen.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[8], &ll_backend__trace_gen__V_29_29, ((MR_Box) (ll_backend__trace_gen__V_11_11)), ((MR_Box) (ll_backend__trace_gen__V_20_20)));
                                    }
#line 3448 "ll_backend.trace_gen.c"
                                    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_29_29 == (MR_Integer) 0);
#line 1356 "trace_gen.m"
                                    ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1356 "trace_gen.m"
                                    if (ll_backend__trace_gen__succeeded)
#line 1356 "trace_gen.m"
                                      *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_29_29;
#line 1356 "trace_gen.m"
                                    else
#line 1356 "trace_gen.m"
                                      {
#line 1356 "trace_gen.m"
                                        {
#line 1356 "trace_gen.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[0], ll_backend__trace_gen__HeadVar__1_1, ((MR_Box) (ll_backend__trace_gen__V_12_12)), ((MR_Box) (ll_backend__trace_gen__V_21_21)));
#line 1356 "trace_gen.m"
                                          return;
                                        }
#line 1356 "trace_gen.m"
                                      }
#line 1356 "trace_gen.m"
                                  }
#line 1356 "trace_gen.m"
                              }
#line 1356 "trace_gen.m"
                          }
#line 1356 "trace_gen.m"
                      }
#line 1356 "trace_gen.m"
                  }
#line 1356 "trace_gen.m"
              }
#line 1356 "trace_gen.m"
          }
#line 1356 "trace_gen.m"
      }
#line 1356 "trace_gen.m"
  }
#line 1356 "trace_gen.m"
}

#line 1356 "trace_gen.m"
MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_info_0_0(
#line 1356 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 1356 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2)
#line 1356 "trace_gen.m"
{
#line 1356 "trace_gen.m"
  {
#line 1356 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 1356 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastX_21 = (MR_Integer) ll_backend__trace_gen__HeadVar__1_1;
#line 1356 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastY_22 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;

#line 1356 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_21 == ll_backend__trace_gen__CastY_22);
#line 1356 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 1356 "trace_gen.m"
      ll_backend__trace_gen__succeeded = MR_TRUE;
#line 1356 "trace_gen.m"
    else
#line 1356 "trace_gen.m"
      {
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_24_24;
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_25_25;
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_26_26;
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_27_27;
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_28_28;
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_29_29;
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_30_30;
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_31_31;
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 3)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 4)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 5)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 6)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 7)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 8)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 3)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 4)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 5)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 6)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 7)));
#line 1356 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 8)));

#line 3571 "ll_backend.trace_gen.c"
        {
#line 3573 "ll_backend.trace_gen.c"
          ll_backend__trace_gen__succeeded = libs__trace_params____Unify____trace_level_0_0(ll_backend__trace_gen__V_3_3, ll_backend__trace_gen__V_12_12);
        }
#line 1356 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 1356 "trace_gen.m"
          {
#line 3580 "ll_backend.trace_gen.c"
            ll_backend__trace_gen__TypeInfo_24_24 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[6];
#line 3582 "ll_backend.trace_gen.c"
            {
#line 3584 "ll_backend.trace_gen.c"
              ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_24_24, ((MR_Box) (ll_backend__trace_gen__V_4_4)), ((MR_Box) (ll_backend__trace_gen__V_13_13)));
            }
#line 1356 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 1356 "trace_gen.m"
              {
#line 3591 "ll_backend.trace_gen.c"
                ll_backend__trace_gen__TypeInfo_25_25 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[1];
#line 3593 "ll_backend.trace_gen.c"
                {
#line 3595 "ll_backend.trace_gen.c"
                  ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_25_25, ((MR_Box) (ll_backend__trace_gen__V_5_5)), ((MR_Box) (ll_backend__trace_gen__V_14_14)));
                }
#line 1356 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 1356 "trace_gen.m"
                  {
#line 3602 "ll_backend.trace_gen.c"
                    ll_backend__trace_gen__TypeInfo_26_26 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[1];
#line 3604 "ll_backend.trace_gen.c"
                    {
#line 3606 "ll_backend.trace_gen.c"
                      ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_26_26, ((MR_Box) (ll_backend__trace_gen__V_6_6)), ((MR_Box) (ll_backend__trace_gen__V_15_15)));
                    }
#line 1356 "trace_gen.m"
                    if (ll_backend__trace_gen__succeeded)
#line 1356 "trace_gen.m"
                      {
#line 3613 "ll_backend.trace_gen.c"
                        ll_backend__trace_gen__TypeInfo_27_27 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[7];
#line 3615 "ll_backend.trace_gen.c"
                        {
#line 3617 "ll_backend.trace_gen.c"
                          ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_27_27, ((MR_Box) (ll_backend__trace_gen__V_7_7)), ((MR_Box) (ll_backend__trace_gen__V_16_16)));
                        }
#line 1356 "trace_gen.m"
                        if (ll_backend__trace_gen__succeeded)
#line 1356 "trace_gen.m"
                          {
#line 3624 "ll_backend.trace_gen.c"
                            ll_backend__trace_gen__TypeInfo_28_28 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[1];
#line 3626 "ll_backend.trace_gen.c"
                            {
#line 3628 "ll_backend.trace_gen.c"
                              ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_28_28, ((MR_Box) (ll_backend__trace_gen__V_8_8)), ((MR_Box) (ll_backend__trace_gen__V_17_17)));
                            }
#line 1356 "trace_gen.m"
                            if (ll_backend__trace_gen__succeeded)
#line 1356 "trace_gen.m"
                              {
#line 3635 "ll_backend.trace_gen.c"
                                ll_backend__trace_gen__TypeInfo_29_29 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[1];
#line 3637 "ll_backend.trace_gen.c"
                                {
#line 3639 "ll_backend.trace_gen.c"
                                  ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_29_29, ((MR_Box) (ll_backend__trace_gen__V_9_9)), ((MR_Box) (ll_backend__trace_gen__V_18_18)));
                                }
#line 1356 "trace_gen.m"
                                if (ll_backend__trace_gen__succeeded)
#line 1356 "trace_gen.m"
                                  {
#line 3646 "ll_backend.trace_gen.c"
                                    ll_backend__trace_gen__TypeInfo_30_30 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[8];
#line 3648 "ll_backend.trace_gen.c"
                                    {
#line 3650 "ll_backend.trace_gen.c"
                                      ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_30_30, ((MR_Box) (ll_backend__trace_gen__V_10_10)), ((MR_Box) (ll_backend__trace_gen__V_19_19)));
                                    }
#line 1356 "trace_gen.m"
                                    if (ll_backend__trace_gen__succeeded)
#line 1356 "trace_gen.m"
                                      {
#line 3657 "ll_backend.trace_gen.c"
                                        ll_backend__trace_gen__TypeInfo_31_31 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[0];
#line 3659 "ll_backend.trace_gen.c"
                                        {
#line 3661 "ll_backend.trace_gen.c"
                                          return ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_31_31, ((MR_Box) (ll_backend__trace_gen__V_11_11)), ((MR_Box) (ll_backend__trace_gen__V_20_20)));
                                        }
#line 1356 "trace_gen.m"
                                      }
#line 1356 "trace_gen.m"
                                  }
#line 1356 "trace_gen.m"
                              }
#line 1356 "trace_gen.m"
                          }
#line 1356 "trace_gen.m"
                      }
#line 1356 "trace_gen.m"
                  }
#line 1356 "trace_gen.m"
              }
#line 1356 "trace_gen.m"
          }
#line 1356 "trace_gen.m"
      }
#line 1356 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 1356 "trace_gen.m"
  }
#line 1356 "trace_gen.m"
}

#line 87 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen____Compare____negation_end_port_0_0(
#line 87 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
#line 87 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 87 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3)
#line 87 "trace_gen.m"
{
#line 87 "trace_gen.m"
  {
#line 87 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 87 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__Cast_HeadVar1_4 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;
#line 87 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__Cast_HeadVar2_5 = (MR_Integer) ll_backend__trace_gen__HeadVar__3_3;

#line 87 "trace_gen.m"
    {
#line 87 "trace_gen.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__trace_gen__HeadVar__1_1, ll_backend__trace_gen__Cast_HeadVar1_4, ll_backend__trace_gen__Cast_HeadVar2_5);
#line 87 "trace_gen.m"
      return;
    }
#line 87 "trace_gen.m"
  }
#line 87 "trace_gen.m"
}

#line 87 "trace_gen.m"
MR_bool MR_CALL 
ll_backend__trace_gen____Unify____negation_end_port_0_0(
#line 87 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_1,
#line 87 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2)
#line 87 "trace_gen.m"
{
#line 3730 "ll_backend.trace_gen.c"
  {
#line 3732 "ll_backend.trace_gen.c"
    MR_bool ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__HeadVar__2_1 == ll_backend__trace_gen__HeadVar__2_2);

#line 3735 "ll_backend.trace_gen.c"
    return ll_backend__trace_gen__succeeded;
#line 3737 "ll_backend.trace_gen.c"
  }
#line 87 "trace_gen.m"
}

#line 77 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen____Compare____external_trace_port_0_0(
#line 77 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
#line 77 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 77 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3)
#line 77 "trace_gen.m"
{
#line 77 "trace_gen.m"
  {
#line 77 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 77 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__Cast_HeadVar1_4 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;
#line 77 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__Cast_HeadVar2_5 = (MR_Integer) ll_backend__trace_gen__HeadVar__3_3;

#line 77 "trace_gen.m"
    {
#line 77 "trace_gen.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__trace_gen__HeadVar__1_1, ll_backend__trace_gen__Cast_HeadVar1_4, ll_backend__trace_gen__Cast_HeadVar2_5);
#line 77 "trace_gen.m"
      return;
    }
#line 77 "trace_gen.m"
  }
#line 77 "trace_gen.m"
}

#line 77 "trace_gen.m"
MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_trace_port_0_0(
#line 77 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_1,
#line 77 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2)
#line 77 "trace_gen.m"
{
#line 3783 "ll_backend.trace_gen.c"
  {
#line 3785 "ll_backend.trace_gen.c"
    MR_bool ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__HeadVar__2_1 == ll_backend__trace_gen__HeadVar__2_2);

#line 3788 "ll_backend.trace_gen.c"
    return ll_backend__trace_gen__succeeded;
#line 3790 "ll_backend.trace_gen.c"
  }
#line 77 "trace_gen.m"
}

#line 203 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen____Compare____external_event_info_0_0(
#line 203 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
#line 203 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 203 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3)
#line 203 "trace_gen.m"
{
#line 203 "trace_gen.m"
  {
#line 203 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 203 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastX_12 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;
#line 203 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastY_13 = (MR_Integer) ll_backend__trace_gen__HeadVar__3_3;

#line 203 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_12 == ll_backend__trace_gen__CastY_13);
#line 203 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 3819 "ll_backend.trace_gen.c"
      *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 203 "trace_gen.m"
    else
#line 203 "trace_gen.m"
      {
#line 203 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 203 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 203 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 203 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 203 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 203 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 2)));
#line 203 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_10_10;

#line 203 "trace_gen.m"
        {
#line 203 "trace_gen.m"
          ll_backend__llds____Compare____label_0_0(&ll_backend__trace_gen__V_10_10, ll_backend__trace_gen__V_4_4, ll_backend__trace_gen__V_7_7);
        }
#line 3845 "ll_backend.trace_gen.c"
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_10_10 == (MR_Integer) 0);
#line 203 "trace_gen.m"
        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 203 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 203 "trace_gen.m"
          *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_10_10;
#line 203 "trace_gen.m"
        else
#line 203 "trace_gen.m"
          {
#line 203 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_11_11;

#line 203 "trace_gen.m"
            {
#line 203 "trace_gen.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_2[0], &ll_backend__trace_gen__V_11_11, ((MR_Box) (ll_backend__trace_gen__V_5_5)), ((MR_Box) (ll_backend__trace_gen__V_8_8)));
            }
#line 3865 "ll_backend.trace_gen.c"
            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_11_11 == (MR_Integer) 0);
#line 203 "trace_gen.m"
            ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 203 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 203 "trace_gen.m"
              *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_11_11;
#line 203 "trace_gen.m"
            else
#line 203 "trace_gen.m"
              {
#line 203 "trace_gen.m"
                {
#line 203 "trace_gen.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[5], ll_backend__trace_gen__HeadVar__1_1, ((MR_Box) (ll_backend__trace_gen__V_6_6)), ((MR_Box) (ll_backend__trace_gen__V_9_9)));
#line 203 "trace_gen.m"
                  return;
                }
#line 203 "trace_gen.m"
              }
#line 203 "trace_gen.m"
          }
#line 203 "trace_gen.m"
      }
#line 203 "trace_gen.m"
  }
#line 203 "trace_gen.m"
}

#line 203 "trace_gen.m"
MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_event_info_0_0(
#line 203 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 203 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2)
#line 203 "trace_gen.m"
{
#line 203 "trace_gen.m"
  {
#line 203 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 203 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastX_9 = (MR_Integer) ll_backend__trace_gen__HeadVar__1_1;
#line 203 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastY_10 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;

#line 203 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_9 == ll_backend__trace_gen__CastY_10);
#line 203 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 203 "trace_gen.m"
      ll_backend__trace_gen__succeeded = MR_TRUE;
#line 203 "trace_gen.m"
    else
#line 203 "trace_gen.m"
      {
#line 203 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_12_12;
#line 203 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_13_13;
#line 203 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 203 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 203 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 203 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 203 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 203 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 2)));

#line 3940 "ll_backend.trace_gen.c"
        {
#line 3942 "ll_backend.trace_gen.c"
          ll_backend__trace_gen__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__trace_gen__V_3_3, ll_backend__trace_gen__V_6_6);
        }
#line 203 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 203 "trace_gen.m"
          {
#line 3949 "ll_backend.trace_gen.c"
            ll_backend__trace_gen__TypeInfo_12_12 = (MR_Word) &ll_backend__trace_gen_scalar_common_2[0];
#line 3951 "ll_backend.trace_gen.c"
            {
#line 3953 "ll_backend.trace_gen.c"
              ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_12_12, ((MR_Box) (ll_backend__trace_gen__V_4_4)), ((MR_Box) (ll_backend__trace_gen__V_7_7)));
            }
#line 203 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 203 "trace_gen.m"
              {
#line 3960 "ll_backend.trace_gen.c"
                ll_backend__trace_gen__TypeInfo_13_13 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[5];
#line 3962 "ll_backend.trace_gen.c"
                {
#line 3964 "ll_backend.trace_gen.c"
                  return ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_13_13, ((MR_Box) (ll_backend__trace_gen__V_5_5)), ((MR_Box) (ll_backend__trace_gen__V_8_8)));
                }
#line 203 "trace_gen.m"
              }
#line 203 "trace_gen.m"
          }
#line 203 "trace_gen.m"
      }
#line 203 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 203 "trace_gen.m"
  }
#line 203 "trace_gen.m"
}

#line 1305 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__redo_layout_slot_2_p_0(
#line 1305 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CodeModel_3,
#line 1305 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__RedoLayoutSlot_4)
#line 1305 "trace_gen.m"
{
#line 1342 "trace_gen.m"
  {
#line 1342 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1342 "trace_gen.m"
#line 1342 "trace_gen.m"
    switch (ll_backend__trace_gen__CodeModel_3) {
#line 1342 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1342 "trace_gen.m"
      case (MR_Integer) 0:
#line 1342 "trace_gen.m"
      case (MR_Integer) 1:
#line 1347 "trace_gen.m"
        {
#line 1348 "trace_gen.m"
          {
#line 1348 "trace_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.redo_layout_slot\'/2", (MR_String) "attempt to access redo layout slot for det or semi procedure");
#line 1348 "trace_gen.m"
            return;
          }
#line 1347 "trace_gen.m"
        }
#line 1342 "trace_gen.m"
        break;
#line 1342 "trace_gen.m"
      case (MR_Integer) 2:
#line 1342 "trace_gen.m"
        {
#line 1343 "trace_gen.m"
          *ll_backend__trace_gen__RedoLayoutSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[22]);
#line 1342 "trace_gen.m"
        }
#line 1342 "trace_gen.m"
        break;
#line 1342 "trace_gen.m"
    }
#line 1342 "trace_gen.m"
  }
#line 1305 "trace_gen.m"
}

#line 1304 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__call_depth_slot_2_p_0(
#line 1304 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CodeModel_3,
#line 1304 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__CallDepthSlot_4)
#line 1304 "trace_gen.m"
{
#line 1331 "trace_gen.m"
  {
#line 1331 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1331 "trace_gen.m"
#line 1331 "trace_gen.m"
    switch (ll_backend__trace_gen__CodeModel_3) {
#line 1331 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1331 "trace_gen.m"
      case (MR_Integer) 0:
#line 1331 "trace_gen.m"
      case (MR_Integer) 1:
#line 1336 "trace_gen.m"
        {
#line 1337 "trace_gen.m"
          *ll_backend__trace_gen__CallDepthSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[14]);
#line 1336 "trace_gen.m"
        }
#line 1331 "trace_gen.m"
        break;
#line 1331 "trace_gen.m"
      case (MR_Integer) 2:
#line 1331 "trace_gen.m"
        {
#line 1332 "trace_gen.m"
          *ll_backend__trace_gen__CallDepthSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[15]);
#line 1331 "trace_gen.m"
        }
#line 1331 "trace_gen.m"
        break;
#line 1331 "trace_gen.m"
    }
#line 1331 "trace_gen.m"
  }
#line 1304 "trace_gen.m"
}

#line 1303 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__call_num_slot_2_p_0(
#line 1303 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CodeModel_3,
#line 1303 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__CallNumSlot_4)
#line 1303 "trace_gen.m"
{
#line 1320 "trace_gen.m"
  {
#line 1320 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1320 "trace_gen.m"
#line 1320 "trace_gen.m"
    switch (ll_backend__trace_gen__CodeModel_3) {
#line 1320 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1320 "trace_gen.m"
      case (MR_Integer) 0:
#line 1320 "trace_gen.m"
      case (MR_Integer) 1:
#line 1325 "trace_gen.m"
        {
#line 1326 "trace_gen.m"
          *ll_backend__trace_gen__CallNumSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[20]);
#line 1325 "trace_gen.m"
        }
#line 1320 "trace_gen.m"
        break;
#line 1320 "trace_gen.m"
      case (MR_Integer) 2:
#line 1320 "trace_gen.m"
        {
#line 1321 "trace_gen.m"
          *ll_backend__trace_gen__CallNumSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[21]);
#line 1320 "trace_gen.m"
        }
#line 1320 "trace_gen.m"
        break;
#line 1320 "trace_gen.m"
    }
#line 1320 "trace_gen.m"
  }
#line 1303 "trace_gen.m"
}

#line 1302 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__event_num_slot_2_p_0(
#line 1302 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CodeModel_3,
#line 1302 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__EventNumSlot_4)
#line 1302 "trace_gen.m"
{
#line 1309 "trace_gen.m"
  {
#line 1309 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1309 "trace_gen.m"
#line 1309 "trace_gen.m"
    switch (ll_backend__trace_gen__CodeModel_3) {
#line 1309 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1309 "trace_gen.m"
      case (MR_Integer) 0:
#line 1309 "trace_gen.m"
      case (MR_Integer) 1:
#line 1314 "trace_gen.m"
        {
#line 1315 "trace_gen.m"
          *ll_backend__trace_gen__EventNumSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[18]);
#line 1314 "trace_gen.m"
        }
#line 1309 "trace_gen.m"
        break;
#line 1309 "trace_gen.m"
      case (MR_Integer) 2:
#line 1309 "trace_gen.m"
        {
#line 1310 "trace_gen.m"
          *ll_backend__trace_gen__EventNumSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[19]);
#line 1309 "trace_gen.m"
        }
#line 1309 "trace_gen.m"
        break;
#line 1309 "trace_gen.m"
    }
#line 1309 "trace_gen.m"
  }
#line 1302 "trace_gen.m"
}

#line 1275 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__stackref_to_string_2_p_0(
#line 1275 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Lval_3,
#line 1275 "trace_gen.m"
  MR_String * ll_backend__trace_gen__LvalStr_4)
#line 1275 "trace_gen.m"
{
#line 1281 "trace_gen.m"
  {
#line 1281 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__trace_gen__Lval_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1281 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__Slot_5;

#line 1278 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 1278 "trace_gen.m"
      {
#line 1278 "trace_gen.m"
        ll_backend__trace_gen__Slot_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 1)));
#line 1279 "trace_gen.m"
        {
#line 1279 "trace_gen.m"
          MR_String ll_backend__trace_gen__SlotString_6;
#line 1279 "trace_gen.m"
          MR_String ll_backend__trace_gen__V_10_10;

#line 1279 "trace_gen.m"
          {
#line 1279 "trace_gen.m"
            mercury__string__int_to_string_2_p_0(ll_backend__trace_gen__Slot_5, &ll_backend__trace_gen__SlotString_6);
          }
#line 1280 "trace_gen.m"
          {
#line 1280 "trace_gen.m"
            ll_backend__trace_gen__V_10_10 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__SlotString_6, (MR_String) ")");
          }
#line 1280 "trace_gen.m"
          {
#line 1280 "trace_gen.m"
            *ll_backend__trace_gen__LvalStr_4 = mercury__string__f_43_43_2_f_0((MR_String) "MR_sv(", ll_backend__trace_gen__V_10_10);
          }
#line 1279 "trace_gen.m"
        }
#line 1278 "trace_gen.m"
      }
#line 1278 "trace_gen.m"
    else
#line 1284 "trace_gen.m"
      {
#line 1284 "trace_gen.m"
        MR_Integer ll_backend__trace_gen__Slot_22;

#line 1281 "trace_gen.m"
        ll_backend__trace_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__trace_gen__Lval_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1281 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 1281 "trace_gen.m"
          {
#line 1281 "trace_gen.m"
            ll_backend__trace_gen__Slot_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 1)));
#line 1282 "trace_gen.m"
            {
#line 1282 "trace_gen.m"
              MR_String ll_backend__trace_gen__V_13_13;
#line 1282 "trace_gen.m"
              MR_String ll_backend__trace_gen__SlotString_21;

#line 1282 "trace_gen.m"
              {
#line 1282 "trace_gen.m"
                mercury__string__int_to_string_2_p_0(ll_backend__trace_gen__Slot_22, &ll_backend__trace_gen__SlotString_21);
              }
#line 1283 "trace_gen.m"
              {
#line 1283 "trace_gen.m"
                ll_backend__trace_gen__V_13_13 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__SlotString_21, (MR_String) ")");
              }
#line 1283 "trace_gen.m"
              {
#line 1283 "trace_gen.m"
                *ll_backend__trace_gen__LvalStr_4 = mercury__string__f_43_43_2_f_0((MR_String) "MR_fv(", ll_backend__trace_gen__V_13_13);
              }
#line 1282 "trace_gen.m"
            }
#line 1281 "trace_gen.m"
          }
#line 1281 "trace_gen.m"
        else
#line 1287 "trace_gen.m"
          {
#line 1284 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_7_7;
#line 1284 "trace_gen.m"
            MR_Integer ll_backend__trace_gen__V_8_8;

#line 1284 "trace_gen.m"
            ll_backend__trace_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__trace_gen__Lval_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1284 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 1284 "trace_gen.m"
              {
#line 1284 "trace_gen.m"
                ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 1)));
#line 1284 "trace_gen.m"
                ll_backend__trace_gen__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 2)));
#line 1286 "trace_gen.m"
                {
#line 1286 "trace_gen.m"
                  mercury__require__sorry_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.stackref_to_string\'/2", (MR_String) "double-width stack slot");
#line 1286 "trace_gen.m"
                  return;
                }
#line 1284 "trace_gen.m"
              }
#line 1284 "trace_gen.m"
            else
#line 1288 "trace_gen.m"
              {
#line 1288 "trace_gen.m"
                {
#line 1288 "trace_gen.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.stackref_to_string\'/2", (MR_String) "non-stack lval");
#line 1288 "trace_gen.m"
                  return;
                }
#line 1288 "trace_gen.m"
              }
#line 1287 "trace_gen.m"
          }
#line 1284 "trace_gen.m"
      }
#line 1281 "trace_gen.m"
  }
#line 1275 "trace_gen.m"
}

#line 1253 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__build_fail_vars_6_p_0(
#line 1253 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 1253 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 1253 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3,
#line 1253 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ModuleInfo_4,
#line 1253 "trace_gen.m"
  MR_Word ll_backend__trace_gen__VarTypes_5,
#line 1253 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__6_6)
#line 1253 "trace_gen.m"
{
#line 1257 "trace_gen.m"
  {
#line 1257 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1257 "trace_gen.m"
    if ((ll_backend__trace_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1257 "trace_gen.m"
      {
#line 1257 "trace_gen.m"
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1257 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 1257 "trace_gen.m"
          {
#line 1257 "trace_gen.m"
            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1257 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 1257 "trace_gen.m"
              {
#line 1257 "trace_gen.m"
                *ll_backend__trace_gen__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1257 "trace_gen.m"
                ll_backend__trace_gen__succeeded = MR_TRUE;
#line 1257 "trace_gen.m"
              }
#line 1257 "trace_gen.m"
          }
#line 1257 "trace_gen.m"
      }
#line 1257 "trace_gen.m"
    else
#line 1259 "trace_gen.m"
      {
#line 1259 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1259 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1259 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Inst_11;
#line 1259 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Insts_12;
#line 1259 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Info_13;
#line 1259 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Infos_14;
#line 1259 "trace_gen.m"
        MR_Word ll_backend__trace_gen__FailVars0_18;
#line 1259 "trace_gen.m"
        MR_Word ll_backend__trace_gen__ArgMode_20;
#line 1261 "trace_gen.m"
        MR_Word ll_backend__trace_gen___Loc_19;
#line 1263 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Type_21;
#line 1263 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_22_22;

#line 1258 "trace_gen.m"
        ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1258 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 1258 "trace_gen.m"
          {
#line 1258 "trace_gen.m"
            ll_backend__trace_gen__Inst_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 1258 "trace_gen.m"
            ll_backend__trace_gen__Insts_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 1258 "trace_gen.m"
            ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1258 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 1258 "trace_gen.m"
              {
#line 1258 "trace_gen.m"
                ll_backend__trace_gen__Info_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 1258 "trace_gen.m"
                ll_backend__trace_gen__Infos_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 1260 "trace_gen.m"
                {
#line 1260 "trace_gen.m"
                  ll_backend__trace_gen__succeeded = ll_backend__trace_gen__build_fail_vars_6_p_0(ll_backend__trace_gen__Vars_10, ll_backend__trace_gen__Insts_12, ll_backend__trace_gen__Infos_14, ll_backend__trace_gen__ModuleInfo_4, ll_backend__trace_gen__VarTypes_5, &ll_backend__trace_gen__FailVars0_18);
                }
#line 1259 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 1259 "trace_gen.m"
                  {
#line 1261 "trace_gen.m"
                    ll_backend__trace_gen___Loc_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Info_13, (MR_Integer) 0)));
#line 1261 "trace_gen.m"
                    ll_backend__trace_gen__ArgMode_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Info_13, (MR_Integer) 1)));
#line 1263 "trace_gen.m"
                    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__ArgMode_20 == (MR_Integer) 0);
#line 1263 "trace_gen.m"
                    if (ll_backend__trace_gen__succeeded)
#line 1263 "trace_gen.m"
                      {
#line 1264 "trace_gen.m"
                        {
#line 1264 "trace_gen.m"
                          ll_backend__trace_gen__succeeded = check_hlds__inst_match__inst_is_clobbered_2_p_0(ll_backend__trace_gen__ModuleInfo_4, ll_backend__trace_gen__Inst_11);
                        }
#line 1264 "trace_gen.m"
                        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1263 "trace_gen.m"
                        if (ll_backend__trace_gen__succeeded)
#line 1263 "trace_gen.m"
                          {
#line 1265 "trace_gen.m"
                            {
#line 1265 "trace_gen.m"
                              hlds__vartypes__lookup_var_type_3_p_0(ll_backend__trace_gen__VarTypes_5, ll_backend__trace_gen__Var_9, &ll_backend__trace_gen__Type_21);
                            }
#line 1266 "trace_gen.m"
                            {
#line 1266 "trace_gen.m"
                              ll_backend__trace_gen__V_22_22 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__trace_gen__ModuleInfo_4, ll_backend__trace_gen__Type_21);
                            }
#line 1266 "trace_gen.m"
                            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_22_22 == (MR_Integer) 1);
#line 1263 "trace_gen.m"
                          }
#line 1263 "trace_gen.m"
                      }
#line 1269 "trace_gen.m"
                    if (ll_backend__trace_gen__succeeded)
#line 1268 "trace_gen.m"
                      {
#line 1268 "trace_gen.m"
                        MR_Word base;
#line 1268 "trace_gen.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1268 "trace_gen.m"
                        *ll_backend__trace_gen__HeadVar__6_6 = base;
#line 1268 "trace_gen.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__trace_gen__Var_9));
#line 1268 "trace_gen.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__trace_gen__FailVars0_18));
#line 1268 "trace_gen.m"
                      }
#line 1269 "trace_gen.m"
                    else
#line 1270 "trace_gen.m"
                      *ll_backend__trace_gen__HeadVar__6_6 = ll_backend__trace_gen__FailVars0_18;
#line 1269 "trace_gen.m"
                    ll_backend__trace_gen__succeeded = MR_TRUE;
#line 1259 "trace_gen.m"
                  }
#line 1258 "trace_gen.m"
              }
#line 1258 "trace_gen.m"
          }
#line 1259 "trace_gen.m"
      }
#line 1257 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 1257 "trace_gen.m"
  }
#line 1253 "trace_gen.m"
}

#line 1169 "trace_gen.m"
static MR_Word MR_CALL 
ll_backend__trace_gen__find_lval_in_layout_locn_1_f_0(
#line 1169 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1)
#line 1169 "trace_gen.m"
{
#line 1171 "trace_gen.m"
  {
#line 1171 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 1171 "trace_gen.m"
    MR_Word ll_backend__trace_gen__Lval_2;

#line 1171 "trace_gen.m"
    if (((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1171 "trace_gen.m"
      ll_backend__trace_gen__Lval_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1171 "trace_gen.m"
    else
#line 1172 "trace_gen.m"
      {
#line 1172 "trace_gen.m"
        MR_Integer ll_backend__trace_gen__V_5_5;

#line 1172 "trace_gen.m"
        ll_backend__trace_gen__Lval_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1172 "trace_gen.m"
        ll_backend__trace_gen__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1172 "trace_gen.m"
      }
#line 1171 "trace_gen.m"
    return ll_backend__trace_gen__Lval_2;
#line 1171 "trace_gen.m"
  }
#line 1169 "trace_gen.m"
}

#line 1164 "trace_gen.m"
static MR_Word MR_CALL 
ll_backend__trace_gen__find_lval_in_var_info_1_f_0(
#line 1164 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1)
#line 1164 "trace_gen.m"
{
#line 1166 "trace_gen.m"
  {
#line 1166 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 1166 "trace_gen.m"
    MR_Word ll_backend__trace_gen__HeadVar__2_2;
#line 1166 "trace_gen.m"
    MR_Word ll_backend__trace_gen__LayoutLocn_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1166 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1166 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 2)));

#line 1171 "trace_gen.m"
    if (((MR_tag((MR_Word) ll_backend__trace_gen__LayoutLocn_3)) == (MR_mktag((MR_Integer) 0))))
#line 1171 "trace_gen.m"
      ll_backend__trace_gen__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__LayoutLocn_3, (MR_Integer) 0)));
#line 1171 "trace_gen.m"
    else
#line 1172 "trace_gen.m"
      {
#line 1172 "trace_gen.m"
        MR_Integer ll_backend__trace_gen__V_8_8;

#line 1172 "trace_gen.m"
        ll_backend__trace_gen__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__LayoutLocn_3, (MR_Integer) 0)));
#line 1172 "trace_gen.m"
        ll_backend__trace_gen__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__LayoutLocn_3, (MR_Integer) 1)));
#line 1172 "trace_gen.m"
      }
#line 1166 "trace_gen.m"
    return ll_backend__trace_gen__HeadVar__2_2;
#line 1166 "trace_gen.m"
  }
#line 1164 "trace_gen.m"
}

#line 1148 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__find_output_vars_3_p_0(
#line 1148 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 1148 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2,
#line 1148 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_OutputVars_3)
#line 1148 "trace_gen.m"
{
#line 1151 "trace_gen.m"
  while (MR_TRUE)
#line 1151 "trace_gen.m"
    {
#line 1151 "trace_gen.m"
      /* tailcall optimized into a loop */
#line 1151 "trace_gen.m"
      {
#line 1151 "trace_gen.m"
        MR_bool ll_backend__trace_gen__succeeded;

#line 1151 "trace_gen.m"
        if ((ll_backend__trace_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1151 "trace_gen.m"
          *ll_backend__trace_gen__STATE_VARIABLE_OutputVars_3 = ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2;
#line 1151 "trace_gen.m"
        else
#line 1152 "trace_gen.m"
          {
#line 1152 "trace_gen.m"
            MR_Word ll_backend__trace_gen__Arg_7;
#line 1152 "trace_gen.m"
            MR_Word ll_backend__trace_gen__Info_8;
#line 1152 "trace_gen.m"
            MR_Word ll_backend__trace_gen__ArgsInfos_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1152 "trace_gen.m"
            MR_Word ll_backend__trace_gen__Mode_12;
#line 1152 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1152 "trace_gen.m"
            MR_Word ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16;
#line 1153 "trace_gen.m"
            MR_Word ll_backend__trace_gen___ArgLoc_11;

#line 1152 "trace_gen.m"
            ll_backend__trace_gen__Arg_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_15_15, (MR_Integer) 0)));
#line 1152 "trace_gen.m"
            ll_backend__trace_gen__Info_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_15_15, (MR_Integer) 1)));
#line 1153 "trace_gen.m"
            ll_backend__trace_gen___ArgLoc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Info_8, (MR_Integer) 0)));
#line 1153 "trace_gen.m"
            ll_backend__trace_gen__Mode_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Info_8, (MR_Integer) 1)));
#line 1157 "trace_gen.m"
#line 1157 "trace_gen.m"
            switch (ll_backend__trace_gen__Mode_12) {
#line 1157 "trace_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1157 "trace_gen.m"
              case (MR_Integer) 0:
#line 1158 "trace_gen.m"
                ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16 = ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2;
#line 1157 "trace_gen.m"
                break;
#line 1157 "trace_gen.m"
              case (MR_Integer) 1:
#line 1156 "trace_gen.m"
                {
#line 1156 "trace_gen.m"
                  ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1156 "trace_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16, 0) = ((MR_Box) (ll_backend__trace_gen__Arg_7));
#line 1156 "trace_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16, 1) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2));
#line 1156 "trace_gen.m"
                }
#line 1157 "trace_gen.m"
                break;
#line 1157 "trace_gen.m"
              case (MR_Integer) 2:
#line 1160 "trace_gen.m"
                ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16 = ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2;
#line 1157 "trace_gen.m"
                break;
#line 1157 "trace_gen.m"
            }
#line 1162 "trace_gen.m"
            /* direct tailcall eliminated */
#line 1162 "trace_gen.m"
            {
#line 1162 "trace_gen.m"
              MR_Word ll_backend__trace_gen__HeadVar__1__tmp_copy_1 = ll_backend__trace_gen__ArgsInfos_9;
#line 1162 "trace_gen.m"
              MR_Word ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0__tmp_copy_2 = ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16;

#line 1162 "trace_gen.m"
              ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2 = ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0__tmp_copy_2;
#line 1162 "trace_gen.m"
              ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__HeadVar__1__tmp_copy_1;
#line 1162 "trace_gen.m"
            }
#line 1162 "trace_gen.m"
            continue;
#line 1152 "trace_gen.m"
          }
#line 1151 "trace_gen.m"
      }
#line 1151 "trace_gen.m"
      break;
#line 1151 "trace_gen.m"
    }
#line 1148 "trace_gen.m"
}

#line 1091 "trace_gen.m"
static MR_Box MR_CALL 
ll_backend__trace_gen__generate_event_code_13_p_0_2(
#line 1091 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg,
#line 1091 "trace_gen.m"
  MR_Box ll_backend__trace_gen__wrapper_arg_1)
#line 1091 "trace_gen.m"
{
#line 1091 "trace_gen.m"
  {
#line 1091 "trace_gen.m"
    MR_Box ll_backend__trace_gen__wrapper_arg_2;
#line 1091 "trace_gen.m"
    MR_Box ll_backend__trace_gen__closure = ll_backend__trace_gen__closure_arg;
#line 1091 "trace_gen.m"
    MR_Word ll_backend__trace_gen__conv1_Lval_2;

#line 1091 "trace_gen.m"
    {
#line 1091 "trace_gen.m"
      ll_backend__trace_gen__conv1_Lval_2 = ll_backend__trace_gen__find_lval_in_layout_locn_1_f_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1));
    }
#line 1091 "trace_gen.m"
    ll_backend__trace_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__trace_gen__conv1_Lval_2));
#line 1091 "trace_gen.m"
    return ll_backend__trace_gen__wrapper_arg_2;
#line 1091 "trace_gen.m"
  }
#line 1091 "trace_gen.m"
}

#line 1087 "trace_gen.m"
static MR_Box MR_CALL 
ll_backend__trace_gen__generate_event_code_13_p_0_1(
#line 1087 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg,
#line 1087 "trace_gen.m"
  MR_Box ll_backend__trace_gen__wrapper_arg_1)
#line 1087 "trace_gen.m"
{
#line 1087 "trace_gen.m"
  {
#line 1087 "trace_gen.m"
    MR_Box ll_backend__trace_gen__wrapper_arg_2;
#line 1087 "trace_gen.m"
    MR_Box ll_backend__trace_gen__closure = ll_backend__trace_gen__closure_arg;
#line 1087 "trace_gen.m"
    MR_Word ll_backend__trace_gen__conv0_HeadVar__2_2;

#line 1087 "trace_gen.m"
    {
#line 1087 "trace_gen.m"
      ll_backend__trace_gen__conv0_HeadVar__2_2 = ll_backend__trace_gen__find_lval_in_var_info_1_f_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1));
    }
#line 1087 "trace_gen.m"
    ll_backend__trace_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__trace_gen__conv0_HeadVar__2_2));
#line 1087 "trace_gen.m"
    return ll_backend__trace_gen__wrapper_arg_2;
#line 1087 "trace_gen.m"
  }
#line 1087 "trace_gen.m"
}

#line 1018 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__generate_event_code_13_p_0(
#line 1018 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Port_14,
#line 1018 "trace_gen.m"
  MR_Word ll_backend__trace_gen__PortInfo_15,
#line 1018 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeTraceInfo_16,
#line 1018 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Context_17,
#line 1018 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HideEvent_18,
#line 1018 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeUserInfo_19,
#line 1018 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Label_20,
#line 1018 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__TvarDataMap_21,
#line 1018 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_22,
#line 1018 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_67,
#line 1018 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_68,
#line 1018 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_69,
#line 1018 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_70)
#line 1018 "trace_gen.m"
{
#line 1025 "trace_gen.m"
  {
#line 1025 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TypeInfo_140_140;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TypeCtorInfo_141_141;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TypeCtorInfo_142_142;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TypeCtorInfo_146_146;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TypeCtorInfo_149_149;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__LiveVars0_25;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__LiveVars_26;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__Path_27;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TailRecResetCode_28;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__VarSet_36;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__VarTypes_37;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TvarSet_39;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__VarInfoList_40;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ProduceCode_41;
#line 1025 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__MaxRegR_42;
#line 1025 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__MaxRegF_43;
#line 1025 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__MaxTraceRegR0_44;
#line 1025 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__MaxTraceRegF0_45;
#line 1025 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__MaxTraceRegR_46;
#line 1025 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__MaxTraceRegF_47;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__VarLocs_48;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ProcInfo_49;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TvarList_50;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__VarLvals_51;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TvarLocnSets_52;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TvarLocnSet_53;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TvarLocns_54;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TvarLvals_55;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__LiveLvals_56;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__LiveLvalSet_57;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__VarInfoSet_58;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__LayoutLabelInfo_59;
#line 1025 "trace_gen.m"
    MR_String ll_backend__trace_gen__TraceStmt0_60;
#line 1025 "trace_gen.m"
    MR_String ll_backend__trace_gen__TraceStmt_62;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceComponents_65;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceCode_66;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_71_71;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_76_76;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_77_77;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_80_80;
#line 1025 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_84_84;
#line 1025 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_85_85;
#line 1025 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_86_86;
#line 1025 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_88_88;
#line 1025 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_90_90;
#line 1025 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_91_91;
#line 1025 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_92_92;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_94_94;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_96_96;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_101_101;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_104_104;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_106_106;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_107_107;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_108_108;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_110_110;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_111_111;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_112_112;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_117_117;
#line 1025 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_124_124;
#line 1065 "trace_gen.m"
    MR_Word ll_backend__trace_gen__InstMap_38;
#line 1127 "trace_gen.m"
    MR_Word ll_backend__trace_gen__RedoLabel_64;
#line 1112 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceInfo_63;
#line 1112 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_97_97;
#line 1114 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_125_125;
#line 1114 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_126_126;
#line 1114 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_127_127;
#line 1114 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_128_128;
#line 1114 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_129_129;
#line 1114 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_130_130;
#line 1114 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_131_131;
#line 1114 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_132_132;

#line 1026 "trace_gen.m"
    {
#line 1026 "trace_gen.m"
      ll_backend__code_info__get_next_label_3_p_0(ll_backend__trace_gen__Label_20, ll_backend__trace_gen__STATE_VARIABLE_CI_0_67, &ll_backend__trace_gen__STATE_VARIABLE_CI_71_71);
    }
#line 1027 "trace_gen.m"
    {
#line 1027 "trace_gen.m"
      ll_backend__code_loc_dep__get_known_variables_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CLD_0_69, &ll_backend__trace_gen__LiveVars0_25);
    }
#line 1033 "trace_gen.m"
#line 1033 "trace_gen.m"
    switch (MR_tag((MR_Word) ll_backend__trace_gen__PortInfo_15)) {
#line 1033 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1033 "trace_gen.m"
      case (MR_Integer) 0:
#line 1029 "trace_gen.m"
        {
#line 1030 "trace_gen.m"
          ll_backend__trace_gen__LiveVars_26 = ll_backend__trace_gen__LiveVars0_25;
#line 1031 "trace_gen.m"
          ll_backend__trace_gen__Path_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1032 "trace_gen.m"
          {
#line 1032 "trace_gen.m"
            ll_backend__trace_gen__TailRecResetCode_28 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
#line 1029 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_CI_76_76 = ll_backend__trace_gen__STATE_VARIABLE_CI_71_71;
#line 1029 "trace_gen.m"
        }
#line 1033 "trace_gen.m"
        break;
#line 1033 "trace_gen.m"
      case (MR_Integer) 1:
#line 1034 "trace_gen.m"
        {
#line 1034 "trace_gen.m"
          MR_Word ll_backend__trace_gen__ArgsInfos_29;
#line 1034 "trace_gen.m"
          MR_Word ll_backend__trace_gen__OutputVars_30;

#line 1034 "trace_gen.m"
          ll_backend__trace_gen__Path_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__PortInfo_15, (MR_Integer) 0)));
#line 1034 "trace_gen.m"
          ll_backend__trace_gen__ArgsInfos_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__PortInfo_15, (MR_Integer) 1)));
#line 1037 "trace_gen.m"
          {
#line 1037 "trace_gen.m"
            ll_backend__trace_gen__find_output_vars_3_p_0(ll_backend__trace_gen__ArgsInfos_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__trace_gen__OutputVars_30);
          }
#line 1038 "trace_gen.m"
          {
#line 1038 "trace_gen.m"
            mercury__list__delete_elems_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[2], ll_backend__trace_gen__LiveVars0_25, ll_backend__trace_gen__OutputVars_30, &ll_backend__trace_gen__LiveVars_26);
          }
#line 1043 "trace_gen.m"
          if ((ll_backend__trace_gen__MaybeTraceInfo_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1044 "trace_gen.m"
            {
#line 1045 "trace_gen.m"
              {
#line 1045 "trace_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.generate_event_code\'/13", (MR_String) "tailrec call without TraceInfo");
#line 1045 "trace_gen.m"
                return;
              }
#line 1044 "trace_gen.m"
            }
#line 1043 "trace_gen.m"
          else
#line 1040 "trace_gen.m"
            {
#line 1040 "trace_gen.m"
              MR_Word ll_backend__trace_gen__TailRecTraceInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTraceInfo_16, (MR_Integer) 0)));

#line 1041 "trace_gen.m"
              {
#line 1041 "trace_gen.m"
                ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0(ll_backend__trace_gen__TailRecTraceInfo_31, &ll_backend__trace_gen__TailRecResetCode_28, ll_backend__trace_gen__STATE_VARIABLE_CI_71_71, &ll_backend__trace_gen__STATE_VARIABLE_CI_76_76);
              }
#line 1040 "trace_gen.m"
            }
#line 1034 "trace_gen.m"
        }
#line 1033 "trace_gen.m"
        break;
#line 1033 "trace_gen.m"
      case (MR_Integer) 2:
#line 1048 "trace_gen.m"
        {
#line 1048 "trace_gen.m"
          MR_Word ll_backend__trace_gen__TypeCtorInfo_135_135;
#line 1048 "trace_gen.m"
          MR_Word ll_backend__trace_gen__PreDeaths_32;
#line 1048 "trace_gen.m"
          MR_Word ll_backend__trace_gen__ResumeVars_33;
#line 1048 "trace_gen.m"
          MR_Word ll_backend__trace_gen__RealPreDeaths_34;
#line 1048 "trace_gen.m"
          MR_Word ll_backend__trace_gen__RealPreDeathList_35;

#line 1048 "trace_gen.m"
          ll_backend__trace_gen__Path_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__PortInfo_15, (MR_Integer) 0)));
#line 1048 "trace_gen.m"
          ll_backend__trace_gen__PreDeaths_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__PortInfo_15, (MR_Integer) 1)));
#line 1049 "trace_gen.m"
          {
#line 1049 "trace_gen.m"
            ll_backend__trace_gen__ResumeVars_33 = ll_backend__code_loc_dep__current_resume_point_vars_1_f_0(ll_backend__trace_gen__STATE_VARIABLE_CLD_0_69);
          }
#line 5044 "ll_backend.trace_gen.c"
          ll_backend__trace_gen__TypeCtorInfo_135_135 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1050 "trace_gen.m"
          {
#line 1050 "trace_gen.m"
            parse_tree__set_of_var__difference_3_p_0(ll_backend__trace_gen__TypeCtorInfo_135_135, ll_backend__trace_gen__PreDeaths_32, ll_backend__trace_gen__ResumeVars_33, &ll_backend__trace_gen__RealPreDeaths_34);
          }
#line 1051 "trace_gen.m"
          {
#line 1051 "trace_gen.m"
            ll_backend__trace_gen__RealPreDeathList_35 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__trace_gen__TypeCtorInfo_135_135, ll_backend__trace_gen__RealPreDeaths_34);
          }
#line 1052 "trace_gen.m"
          {
#line 1052 "trace_gen.m"
            mercury__list__delete_elems_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[2], ll_backend__trace_gen__LiveVars0_25, ll_backend__trace_gen__RealPreDeathList_35, &ll_backend__trace_gen__LiveVars_26);
          }
#line 1053 "trace_gen.m"
          {
#line 1053 "trace_gen.m"
            ll_backend__trace_gen__TailRecResetCode_28 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
#line 1048 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_CI_76_76 = ll_backend__trace_gen__STATE_VARIABLE_CI_71_71;
#line 1048 "trace_gen.m"
        }
#line 1033 "trace_gen.m"
        break;
#line 1033 "trace_gen.m"
      case (MR_Integer) 3:
#line 1033 "trace_gen.m"
#line 1033 "trace_gen.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__PortInfo_15, (MR_Integer) 0)))) {
#line 1033 "trace_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1033 "trace_gen.m"
          case (MR_Integer) 0:
#line 1055 "trace_gen.m"
            {
#line 1055 "trace_gen.m"
              ll_backend__trace_gen__Path_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__PortInfo_15, (MR_Integer) 1)));
#line 1056 "trace_gen.m"
              ll_backend__trace_gen__LiveVars_26 = ll_backend__trace_gen__LiveVars0_25;
#line 1057 "trace_gen.m"
              {
#line 1057 "trace_gen.m"
                ll_backend__trace_gen__TailRecResetCode_28 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 1055 "trace_gen.m"
              ll_backend__trace_gen__STATE_VARIABLE_CI_76_76 = ll_backend__trace_gen__STATE_VARIABLE_CI_71_71;
#line 1055 "trace_gen.m"
            }
#line 1033 "trace_gen.m"
            break;
#line 1033 "trace_gen.m"
          case (MR_Integer) 1:
#line 1059 "trace_gen.m"
            {
#line 1059 "trace_gen.m"
              ll_backend__trace_gen__Path_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__PortInfo_15, (MR_Integer) 1)));
#line 1060 "trace_gen.m"
              ll_backend__trace_gen__LiveVars_26 = ll_backend__trace_gen__LiveVars0_25;
#line 1061 "trace_gen.m"
              {
#line 1061 "trace_gen.m"
                ll_backend__trace_gen__TailRecResetCode_28 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 1059 "trace_gen.m"
              ll_backend__trace_gen__STATE_VARIABLE_CI_76_76 = ll_backend__trace_gen__STATE_VARIABLE_CI_71_71;
#line 1059 "trace_gen.m"
            }
#line 1033 "trace_gen.m"
            break;
#line 1033 "trace_gen.m"
        }
#line 1033 "trace_gen.m"
        break;
#line 1033 "trace_gen.m"
    }
#line 1063 "trace_gen.m"
    {
#line 1063 "trace_gen.m"
      ll_backend__code_info__get_varset_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_76_76, &ll_backend__trace_gen__VarSet_36);
    }
#line 1064 "trace_gen.m"
    {
#line 1064 "trace_gen.m"
      ll_backend__code_info__get_vartypes_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_76_76, &ll_backend__trace_gen__VarTypes_37);
    }
#line 1065 "trace_gen.m"
    {
#line 1065 "trace_gen.m"
      ll_backend__code_loc_dep__get_instmap_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CLD_0_69, &ll_backend__trace_gen__InstMap_38);
    }
#line 5138 "ll_backend.trace_gen.c"
    ll_backend__trace_gen__TypeInfo_140_140 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[3];
#line 1067 "trace_gen.m"
    {
#line 1067 "trace_gen.m"
      ll_backend__trace_gen__V_77_77 = mercury__set__init_0_f_0(ll_backend__trace_gen__TypeInfo_140_140);
    }
#line 1066 "trace_gen.m"
    {
#line 1066 "trace_gen.m"
      ll_backend__trace_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_13_p_0(ll_backend__trace_gen__LiveVars_26, ll_backend__trace_gen__VarSet_36, ll_backend__trace_gen__VarTypes_37, ll_backend__trace_gen__V_77_77, &ll_backend__trace_gen__TvarSet_39, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__trace_gen__VarInfoList_40, &ll_backend__trace_gen__ProduceCode_41, ll_backend__trace_gen__STATE_VARIABLE_CI_76_76, ll_backend__trace_gen__STATE_VARIABLE_CLD_0_69, ll_backend__trace_gen__STATE_VARIABLE_CLD_70);
    }
#line 1068 "trace_gen.m"
    {
#line 1068 "trace_gen.m"
      ll_backend__code_loc_dep__max_reg_in_use_3_p_0(*ll_backend__trace_gen__STATE_VARIABLE_CLD_70, &ll_backend__trace_gen__MaxRegR_42, &ll_backend__trace_gen__MaxRegF_43);
    }
#line 1069 "trace_gen.m"
    {
#line 1069 "trace_gen.m"
      ll_backend__code_info__get_max_regs_in_use_at_trace_3_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_76_76, &ll_backend__trace_gen__MaxTraceRegR0_44, &ll_backend__trace_gen__MaxTraceRegF0_45);
    }
#line 1070 "trace_gen.m"
    {
#line 1070 "trace_gen.m"
      mercury__int__max_3_p_0(ll_backend__trace_gen__MaxRegR_42, ll_backend__trace_gen__MaxTraceRegR0_44, &ll_backend__trace_gen__MaxTraceRegR_46);
    }
#line 1071 "trace_gen.m"
    {
#line 1071 "trace_gen.m"
      mercury__int__max_3_p_0(ll_backend__trace_gen__MaxRegF_43, ll_backend__trace_gen__MaxTraceRegF0_45, &ll_backend__trace_gen__MaxTraceRegF_47);
    }
#line 1073 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__MaxTraceRegR0_44 == ll_backend__trace_gen__MaxTraceRegR_46);
#line 1073 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 1074 "trace_gen.m"
      ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__MaxTraceRegF0_45 == ll_backend__trace_gen__MaxTraceRegF_47);
#line 1077 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 1077 "trace_gen.m"
      ll_backend__trace_gen__STATE_VARIABLE_CI_80_80 = ll_backend__trace_gen__STATE_VARIABLE_CI_76_76;
#line 1077 "trace_gen.m"
    else
#line 1078 "trace_gen.m"
      {
#line 1078 "trace_gen.m"
        ll_backend__code_info__set_max_regs_in_use_at_trace_4_p_0(ll_backend__trace_gen__MaxTraceRegR_46, ll_backend__trace_gen__MaxTraceRegF_47, ll_backend__trace_gen__STATE_VARIABLE_CI_76_76, &ll_backend__trace_gen__STATE_VARIABLE_CI_80_80);
      }
#line 1080 "trace_gen.m"
    {
#line 1080 "trace_gen.m"
      ll_backend__code_loc_dep__variable_locations_2_p_0(*ll_backend__trace_gen__STATE_VARIABLE_CLD_70, &ll_backend__trace_gen__VarLocs_48);
    }
#line 1081 "trace_gen.m"
    {
#line 1081 "trace_gen.m"
      ll_backend__code_info__get_proc_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_80_80, &ll_backend__trace_gen__ProcInfo_49);
    }
#line 1082 "trace_gen.m"
    {
#line 1082 "trace_gen.m"
      mercury__set__to_sorted_list_2_p_0(ll_backend__trace_gen__TypeInfo_140_140, ll_backend__trace_gen__TvarSet_39, &ll_backend__trace_gen__TvarList_50);
    }
#line 1083 "trace_gen.m"
    {
#line 1083 "trace_gen.m"
      ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0(ll_backend__trace_gen__TvarList_50, ll_backend__trace_gen__VarLocs_48, ll_backend__trace_gen__ProcInfo_49, ll_backend__trace_gen__TvarDataMap_21);
    }
#line 5207 "ll_backend.trace_gen.c"
    ll_backend__trace_gen__TypeCtorInfo_141_141 = (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0;
#line 5209 "ll_backend.trace_gen.c"
    ll_backend__trace_gen__TypeCtorInfo_142_142 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 1087 "trace_gen.m"
    {
#line 1087 "trace_gen.m"
      ll_backend__trace_gen__VarLvals_51 = mercury__list__map_2_f_0(ll_backend__trace_gen__TypeCtorInfo_141_141, ll_backend__trace_gen__TypeCtorInfo_142_142, (MR_Word) &ll_backend__trace_gen_scalar_common_2[6], ll_backend__trace_gen__VarInfoList_40);
    }
#line 1088 "trace_gen.m"
    {
#line 1088 "trace_gen.m"
      mercury__map__values_2_p_0(ll_backend__trace_gen__TypeInfo_140_140, (MR_Word) &ll_backend__trace_gen_scalar_common_1[4], *ll_backend__trace_gen__TvarDataMap_21, &ll_backend__trace_gen__TvarLocnSets_52);
    }
#line 5221 "ll_backend.trace_gen.c"
    ll_backend__trace_gen__TypeCtorInfo_146_146 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0;
#line 1089 "trace_gen.m"
    {
#line 1089 "trace_gen.m"
      ll_backend__trace_gen__TvarLocnSet_53 = mercury__set__union_list_1_f_0(ll_backend__trace_gen__TypeCtorInfo_146_146, ll_backend__trace_gen__TvarLocnSets_52);
    }
#line 1090 "trace_gen.m"
    {
#line 1090 "trace_gen.m"
      mercury__set__to_sorted_list_2_p_0(ll_backend__trace_gen__TypeCtorInfo_146_146, ll_backend__trace_gen__TvarLocnSet_53, &ll_backend__trace_gen__TvarLocns_54);
    }
#line 1091 "trace_gen.m"
    {
#line 1091 "trace_gen.m"
      ll_backend__trace_gen__TvarLvals_55 = mercury__list__map_2_f_0(ll_backend__trace_gen__TypeCtorInfo_146_146, ll_backend__trace_gen__TypeCtorInfo_142_142, (MR_Word) &ll_backend__trace_gen_scalar_common_2[7], ll_backend__trace_gen__TvarLocns_54);
    }
#line 1092 "trace_gen.m"
    {
#line 1092 "trace_gen.m"
      mercury__list__append_3_p_1(ll_backend__trace_gen__TypeCtorInfo_142_142, ll_backend__trace_gen__VarLvals_51, ll_backend__trace_gen__TvarLvals_55, &ll_backend__trace_gen__LiveLvals_56);
    }
#line 1093 "trace_gen.m"
    {
#line 1093 "trace_gen.m"
      ll_backend__trace_gen__LiveLvalSet_57 = mercury__set__list_to_set_1_f_0(ll_backend__trace_gen__TypeCtorInfo_142_142, ll_backend__trace_gen__LiveLvals_56);
    }
#line 1095 "trace_gen.m"
    {
#line 1095 "trace_gen.m"
      mercury__set__list_to_set_2_p_0(ll_backend__trace_gen__TypeCtorInfo_141_141, ll_backend__trace_gen__VarInfoList_40, &ll_backend__trace_gen__VarInfoSet_58);
    }
#line 1096 "trace_gen.m"
    {
#line 1096 "trace_gen.m"
      ll_backend__trace_gen__LayoutLabelInfo_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1096 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__LayoutLabelInfo_59, 0) = ((MR_Box) (ll_backend__trace_gen__VarInfoSet_58));
#line 1096 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__LayoutLabelInfo_59, 1) = ((MR_Box) (*ll_backend__trace_gen__TvarDataMap_21));
#line 1096 "trace_gen.m"
    }
#line 1100 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeUserInfo_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1099 "trace_gen.m"
      ll_backend__trace_gen__TraceStmt0_60 = (MR_String) "\t\tMR_EVENT_SYS\n";
#line 1100 "trace_gen.m"
    else
#line 1102 "trace_gen.m"
      ll_backend__trace_gen__TraceStmt0_60 = (MR_String) "\t\tMR_EVENT_USER\n";
#line 1104 "trace_gen.m"
    {
#line 1104 "trace_gen.m"
      ll_backend__trace_gen__V_85_85 = ll_backend__layout_out__trace_port_to_string_1_f_0(ll_backend__trace_gen__Port_14);
    }
#line 1105 "trace_gen.m"
    {
#line 1105 "trace_gen.m"
      ll_backend__trace_gen__V_91_91 = mdbcomp__goal_path__goal_path_to_string_1_f_0(ll_backend__trace_gen__Path_27);
    }
#line 1105 "trace_gen.m"
    {
#line 1105 "trace_gen.m"
      ll_backend__trace_gen__V_92_92 = mercury__string__f_43_43_2_f_0((MR_String) "> */\n", ll_backend__trace_gen__TraceStmt0_60);
    }
#line 1105 "trace_gen.m"
    {
#line 1105 "trace_gen.m"
      ll_backend__trace_gen__V_90_90 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__V_91_91, ll_backend__trace_gen__V_92_92);
    }
#line 1105 "trace_gen.m"
    {
#line 1105 "trace_gen.m"
      ll_backend__trace_gen__V_88_88 = mercury__string__f_43_43_2_f_0((MR_String) "path <", ll_backend__trace_gen__V_90_90);
    }
#line 1104 "trace_gen.m"
    {
#line 1104 "trace_gen.m"
      ll_backend__trace_gen__V_86_86 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__trace_gen__V_88_88);
    }
#line 1104 "trace_gen.m"
    {
#line 1104 "trace_gen.m"
      ll_backend__trace_gen__V_84_84 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__V_85_85, ll_backend__trace_gen__V_86_86);
    }
#line 1104 "trace_gen.m"
    {
#line 1104 "trace_gen.m"
      ll_backend__trace_gen__TraceStmt_62 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t/* port ", ll_backend__trace_gen__V_84_84);
    }
#line 1108 "trace_gen.m"
    {
#line 1108 "trace_gen.m"
      ll_backend__code_info__add_trace_layout_for_label_9_p_0(*ll_backend__trace_gen__Label_20, ll_backend__trace_gen__Context_17, ll_backend__trace_gen__Port_14, ll_backend__trace_gen__HideEvent_18, ll_backend__trace_gen__Path_27, ll_backend__trace_gen__MaybeUserInfo_19, ll_backend__trace_gen__LayoutLabelInfo_59, ll_backend__trace_gen__STATE_VARIABLE_CI_80_80, &ll_backend__trace_gen__STATE_VARIABLE_CI_94_94);
    }
#line 1110 "trace_gen.m"
    {
#line 1110 "trace_gen.m"
      ll_backend__code_info__set_proc_trace_events_3_p_0((MR_Integer) 1, ll_backend__trace_gen__STATE_VARIABLE_CI_94_94, &ll_backend__trace_gen__STATE_VARIABLE_CI_96_96);
    }
#line 1112 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__Port_14 == (MR_Integer) 3);
#line 1112 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 1112 "trace_gen.m"
      {
#line 1113 "trace_gen.m"
        ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__MaybeTraceInfo_16)) == (MR_mktag((MR_Integer) 1)));
#line 1113 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 1113 "trace_gen.m"
          {
#line 1113 "trace_gen.m"
            ll_backend__trace_gen__TraceInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTraceInfo_16, (MR_Integer) 0)));
#line 1114 "trace_gen.m"
            ll_backend__trace_gen__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 0)));
#line 1114 "trace_gen.m"
            ll_backend__trace_gen__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 1)));
#line 1114 "trace_gen.m"
            ll_backend__trace_gen__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 2)));
#line 1114 "trace_gen.m"
            ll_backend__trace_gen__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 3)));
#line 1114 "trace_gen.m"
            ll_backend__trace_gen__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 4)));
#line 1114 "trace_gen.m"
            ll_backend__trace_gen__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 5)));
#line 1114 "trace_gen.m"
            ll_backend__trace_gen__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 6)));
#line 1114 "trace_gen.m"
            ll_backend__trace_gen__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 7)));
#line 1114 "trace_gen.m"
            ll_backend__trace_gen__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 8)));
#line 1114 "trace_gen.m"
            ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__V_97_97)) == (MR_mktag((MR_Integer) 1)));
#line 1114 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 1114 "trace_gen.m"
              ll_backend__trace_gen__RedoLabel_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_97_97, (MR_Integer) 0)));
#line 1113 "trace_gen.m"
          }
#line 1112 "trace_gen.m"
      }
#line 1127 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 1125 "trace_gen.m"
      {
#line 1125 "trace_gen.m"
        {
#line 1125 "trace_gen.m"
          ll_backend__code_info__add_trace_layout_for_label_9_p_0(ll_backend__trace_gen__RedoLabel_64, ll_backend__trace_gen__Context_17, (MR_Integer) 2, ll_backend__trace_gen__HideEvent_18, ll_backend__trace_gen__Path_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__trace_gen__LayoutLabelInfo_59, ll_backend__trace_gen__STATE_VARIABLE_CI_96_96, ll_backend__trace_gen__STATE_VARIABLE_CI_68);
        }
#line 1125 "trace_gen.m"
      }
#line 1127 "trace_gen.m"
    else
#line 1127 "trace_gen.m"
      *ll_backend__trace_gen__STATE_VARIABLE_CI_68 = ll_backend__trace_gen__STATE_VARIABLE_CI_96_96;
#line 1131 "trace_gen.m"
    {
#line 1131 "trace_gen.m"
      ll_backend__trace_gen__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1131 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_104_104, 0) = ((MR_Box) (ll_backend__trace_gen__LiveLvalSet_57));
#line 1131 "trace_gen.m"
    }
#line 1130 "trace_gen.m"
    {
#line 1130 "trace_gen.m"
      ll_backend__trace_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1130 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_101_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1130 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_101_101, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1130 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_101_101, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1130 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_101_101, 3) = ((MR_Box) (ll_backend__trace_gen__V_104_104));
#line 1130 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_101_101, 4) = ((MR_Box) (ll_backend__trace_gen__TraceStmt_62));
#line 1130 "trace_gen.m"
    }
#line 1132 "trace_gen.m"
    {
#line 1132 "trace_gen.m"
      ll_backend__trace_gen__TraceComponents_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1132 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents_65, 0) = ((MR_Box) (ll_backend__trace_gen__V_101_101));
#line 1132 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1132 "trace_gen.m"
    }
#line 5412 "ll_backend.trace_gen.c"
    ll_backend__trace_gen__TypeCtorInfo_149_149 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 1135 "trace_gen.m"
    {
#line 1135 "trace_gen.m"
      ll_backend__trace_gen__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1135 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1135 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_108_108, 1) = ((MR_Box) (*ll_backend__trace_gen__Label_20));
#line 1135 "trace_gen.m"
    }
#line 1135 "trace_gen.m"
    {
#line 1135 "trace_gen.m"
      ll_backend__trace_gen__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1135 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_107_107, 0) = ((MR_Box) (ll_backend__trace_gen__V_108_108));
#line 1135 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_107_107, 1) = ((MR_Box) ((MR_String) "A label to hang trace liveness on"));
#line 1135 "trace_gen.m"
    }
#line 1143 "trace_gen.m"
    {
#line 1143 "trace_gen.m"
      ll_backend__trace_gen__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1143 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_117_117, 0) = ((MR_Box) (*ll_backend__trace_gen__Label_20));
#line 1143 "trace_gen.m"
    }
#line 1142 "trace_gen.m"
    {
#line 1142 "trace_gen.m"
      ll_backend__trace_gen__V_112_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 1142 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 1142 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1142 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 2) = ((MR_Box) (ll_backend__trace_gen__TraceComponents_65));
#line 1142 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1142 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1142 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1142 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 6) = ((MR_Box) (ll_backend__trace_gen__V_117_117));
#line 1142 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1142 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 8) = ((MR_Box) (ll_backend__trace_gen__V_117_117));
#line 1142 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 9) = ((MR_Box) ((MR_Integer) 1));
#line 1142 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 10) = ((MR_Box) ((MR_Integer) 1));
#line 1142 "trace_gen.m"
    }
#line 1142 "trace_gen.m"
    {
#line 1142 "trace_gen.m"
      ll_backend__trace_gen__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1142 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_111_111, 0) = ((MR_Box) (ll_backend__trace_gen__V_112_112));
#line 1142 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_111_111, 1) = ((MR_Box) ((MR_String) ""));
#line 1142 "trace_gen.m"
    }
#line 1145 "trace_gen.m"
    {
#line 1145 "trace_gen.m"
      ll_backend__trace_gen__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1145 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_110_110, 0) = ((MR_Box) (ll_backend__trace_gen__V_111_111));
#line 1145 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1145 "trace_gen.m"
    }
#line 1136 "trace_gen.m"
    {
#line 1136 "trace_gen.m"
      ll_backend__trace_gen__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1136 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_106_106, 0) = ((MR_Box) (ll_backend__trace_gen__V_107_107));
#line 1136 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_106_106, 1) = ((MR_Box) (ll_backend__trace_gen__V_110_110));
#line 1136 "trace_gen.m"
    }
#line 1134 "trace_gen.m"
    {
#line 1134 "trace_gen.m"
      ll_backend__trace_gen__TraceCode_66 = mercury__cord__from_list_1_f_0(ll_backend__trace_gen__TypeCtorInfo_149_149, ll_backend__trace_gen__V_106_106);
    }
#line 1146 "trace_gen.m"
    {
#line 1146 "trace_gen.m"
      ll_backend__trace_gen__V_124_124 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_149_149, ll_backend__trace_gen__TailRecResetCode_28, ll_backend__trace_gen__TraceCode_66);
    }
#line 1146 "trace_gen.m"
    {
#line 1146 "trace_gen.m"
      *ll_backend__trace_gen__Code_22 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_149_149, ll_backend__trace_gen__ProduceCode_41, ll_backend__trace_gen__V_124_124);
    }
#line 1025 "trace_gen.m"
  }
#line 1018 "trace_gen.m"
}

#line 947 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_2(
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
      return ll_backend__trace_gen__succeeded = ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__947__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__closure, (MR_Integer) 4))));
    }
#line 947 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 947 "trace_gen.m"
  }
#line 947 "trace_gen.m"
}

#line 941 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_1(
#line 941 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg)
#line 941 "trace_gen.m"
{
#line 941 "trace_gen.m"
  {
#line 941 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 941 "trace_gen.m"
    MR_Box ll_backend__trace_gen__closure = ll_backend__trace_gen__closure_arg;

#line 941 "trace_gen.m"
    {
#line 941 "trace_gen.m"
      return ll_backend__trace_gen__succeeded = ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__941__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__closure, (MR_Integer) 4))));
    }
#line 941 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 941 "trace_gen.m"
  }
#line 941 "trace_gen.m"
}

#line 921 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0(
#line 921 "trace_gen.m"
  MR_Word ll_backend__trace_gen__TraceInfo_5,
#line 921 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_6,
#line 921 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_42,
#line 921 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_43)
#line 921 "trace_gen.m"
{
#line 924 "trace_gen.m"
  {
#line 924 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 924 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TypeCtorInfo_179_179;
#line 924 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CodeModel_8;
#line 924 "trace_gen.m"
    MR_Word ll_backend__trace_gen__EventNumLval_9;
#line 924 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CallNumLval_10;
#line 924 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CallDepthLval_11;
#line 924 "trace_gen.m"
    MR_String ll_backend__trace_gen__EventNumStr_12;
#line 924 "trace_gen.m"
    MR_String ll_backend__trace_gen__CallNumStr_13;
#line 924 "trace_gen.m"
    MR_String ll_backend__trace_gen__CallDepthStr_14;
#line 924 "trace_gen.m"
    MR_String ll_backend__trace_gen__StdSlotCodeStr_15;
#line 924 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeRedoLabelLval_16;
#line 924 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeFromFullLval_17;
#line 924 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeIoSeqSlot_18;
#line 924 "trace_gen.m"
    MR_String ll_backend__trace_gen__IoSeqCodeStr_21;
#line 924 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTrailLvals_22;
#line 924 "trace_gen.m"
    MR_String ll_backend__trace_gen__TrailCodeStr_27;
#line 924 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeMaxfrLval_28;
#line 924 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaxfrCode_30;
#line 924 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TailRecInfo_31;
#line 924 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TailRecLvalCode_34;
#line 924 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeCallTableLval_35;
#line 924 "trace_gen.m"
    MR_String ll_backend__trace_gen__CallTableCodeStr_38;
#line 924 "trace_gen.m"
    MR_String ll_backend__trace_gen__ForeignLangCodeStr_39;
#line 924 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ForeignLangComponents_40;
#line 924 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ForeignLangCode_41;
#line 924 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_45_45;
#line 924 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_46_46;
#line 924 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_48_48;
#line 924 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_49_49;
#line 924 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_51_51;
#line 924 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_53_53;
#line 924 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_58_58;
#line 924 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_96_96;
#line 924 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_97_97;
#line 924 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_98_98;
#line 924 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_101_101;
#line 924 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_102_102;
#line 924 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_104_104;
#line 924 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_105_105;
#line 924 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_116_116;
#line 940 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_117_117;
#line 940 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_118_118;
#line 940 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_119_119;
#line 940 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_120_120;
#line 940 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_121_121;
#line 940 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_122_122;
#line 940 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_123_123;
#line 940 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_124_124;
#line 946 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_125_125;
#line 946 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_126_126;
#line 946 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_127_127;
#line 946 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_128_128;
#line 946 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_129_129;
#line 946 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_130_130;
#line 946 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_131_131;
#line 946 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_132_132;
#line 950 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_133_133;
#line 950 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_134_134;
#line 950 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_135_135;
#line 950 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_140_140;

#line 928 "trace_gen.m"
    {
#line 928 "trace_gen.m"
      ll_backend__trace_gen__CodeModel_8 = ll_backend__code_info__get_proc_model_1_f_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_42);
    }
#line 929 "trace_gen.m"
    {
#line 929 "trace_gen.m"
      ll_backend__trace_gen__event_num_slot_2_p_0(ll_backend__trace_gen__CodeModel_8, &ll_backend__trace_gen__EventNumLval_9);
    }
#line 930 "trace_gen.m"
    {
#line 930 "trace_gen.m"
      ll_backend__trace_gen__call_num_slot_2_p_0(ll_backend__trace_gen__CodeModel_8, &ll_backend__trace_gen__CallNumLval_10);
    }
#line 931 "trace_gen.m"
    {
#line 931 "trace_gen.m"
      ll_backend__trace_gen__call_depth_slot_2_p_0(ll_backend__trace_gen__CodeModel_8, &ll_backend__trace_gen__CallDepthLval_11);
    }
#line 932 "trace_gen.m"
    {
#line 932 "trace_gen.m"
      ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__EventNumLval_9, &ll_backend__trace_gen__EventNumStr_12);
    }
#line 933 "trace_gen.m"
    {
#line 933 "trace_gen.m"
      ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallNumLval_10, &ll_backend__trace_gen__CallNumStr_13);
    }
#line 934 "trace_gen.m"
    {
#line 934 "trace_gen.m"
      ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallDepthLval_11, &ll_backend__trace_gen__CallDepthStr_14);
    }
#line 936 "trace_gen.m"
    {
#line 936 "trace_gen.m"
      ll_backend__trace_gen__V_51_51 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallDepthStr_14, (MR_String) ");\n");
    }
#line 936 "trace_gen.m"
    {
#line 936 "trace_gen.m"
      ll_backend__trace_gen__V_49_49 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__trace_gen__V_51_51);
    }
#line 936 "trace_gen.m"
    {
#line 936 "trace_gen.m"
      ll_backend__trace_gen__V_48_48 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallNumStr_13, ll_backend__trace_gen__V_49_49);
    }
#line 936 "trace_gen.m"
    {
#line 936 "trace_gen.m"
      ll_backend__trace_gen__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__trace_gen__V_48_48);
    }
#line 936 "trace_gen.m"
    {
#line 936 "trace_gen.m"
      ll_backend__trace_gen__V_45_45 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__EventNumStr_12, ll_backend__trace_gen__V_46_46);
    }
#line 935 "trace_gen.m"
    {
#line 935 "trace_gen.m"
      ll_backend__trace_gen__StdSlotCodeStr_15 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_trace_tailrec_std_slots(", ll_backend__trace_gen__V_45_45);
    }
#line 940 "trace_gen.m"
    ll_backend__trace_gen__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 0)));
#line 940 "trace_gen.m"
    ll_backend__trace_gen__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 1)));
#line 940 "trace_gen.m"
    ll_backend__trace_gen__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 2)));
#line 940 "trace_gen.m"
    ll_backend__trace_gen__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 3)));
#line 940 "trace_gen.m"
    ll_backend__trace_gen__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 4)));
#line 940 "trace_gen.m"
    ll_backend__trace_gen__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 5)));
#line 940 "trace_gen.m"
    ll_backend__trace_gen__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 6)));
#line 940 "trace_gen.m"
    ll_backend__trace_gen__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 7)));
#line 940 "trace_gen.m"
    ll_backend__trace_gen__MaybeRedoLabelLval_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 8)));
#line 941 "trace_gen.m"
    {
#line 941 "trace_gen.m"
      ll_backend__trace_gen__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 941 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_53_53, 0) = ((MR_Box) (&ll_backend__trace_gen_scalar_common_5[1]));
#line 941 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_53_53, 1) = ((MR_Box) (ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_1));
#line 941 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 941 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_53_53, 3) = ((MR_Box) (ll_backend__trace_gen__MaybeRedoLabelLval_16));
#line 941 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_53_53, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 941 "trace_gen.m"
    }
#line 941 "trace_gen.m"
    {
#line 941 "trace_gen.m"
      mercury__require__expect_4_p_0(ll_backend__trace_gen__V_53_53, (MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.generate_tailrec_reset_slots_code\'/4", (MR_String) "redo label in procedure with TAIL event");
    }
#line 946 "trace_gen.m"
    ll_backend__trace_gen__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 0)));
#line 946 "trace_gen.m"
    ll_backend__trace_gen__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 1)));
#line 946 "trace_gen.m"
    ll_backend__trace_gen__MaybeFromFullLval_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 2)));
#line 946 "trace_gen.m"
    ll_backend__trace_gen__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 3)));
#line 946 "trace_gen.m"
    ll_backend__trace_gen__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 4)));
#line 946 "trace_gen.m"
    ll_backend__trace_gen__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 5)));
#line 946 "trace_gen.m"
    ll_backend__trace_gen__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 6)));
#line 946 "trace_gen.m"
    ll_backend__trace_gen__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 7)));
#line 946 "trace_gen.m"
    ll_backend__trace_gen__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 8)));
#line 947 "trace_gen.m"
    {
#line 947 "trace_gen.m"
      ll_backend__trace_gen__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 947 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_58_58, 0) = ((MR_Box) (&ll_backend__trace_gen_scalar_common_5[2]));
#line 947 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_58_58, 1) = ((MR_Box) (ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_2));
#line 947 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 947 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_58_58, 3) = ((MR_Box) (ll_backend__trace_gen__MaybeFromFullLval_17));
#line 947 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_58_58, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 947 "trace_gen.m"
    }
#line 947 "trace_gen.m"
    {
#line 947 "trace_gen.m"
      mercury__require__expect_4_p_0(ll_backend__trace_gen__V_58_58, (MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.generate_tailrec_reset_slots_code\'/4", (MR_String) "from_full slot in procedure with TAIL event");
    }
#line 950 "trace_gen.m"
    ll_backend__trace_gen__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 0)));
#line 950 "trace_gen.m"
    ll_backend__trace_gen__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 1)));
#line 950 "trace_gen.m"
    ll_backend__trace_gen__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 2)));
#line 950 "trace_gen.m"
    ll_backend__trace_gen__MaybeIoSeqSlot_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 3)));
#line 950 "trace_gen.m"
    ll_backend__trace_gen__MaybeTrailLvals_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 4)));
#line 950 "trace_gen.m"
    ll_backend__trace_gen__MaybeMaxfrLval_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 5)));
#line 950 "trace_gen.m"
    ll_backend__trace_gen__MaybeCallTableLval_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 6)));
#line 950 "trace_gen.m"
    ll_backend__trace_gen__TailRecInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 7)));
#line 950 "trace_gen.m"
    ll_backend__trace_gen__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 8)));
#line 955 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeIoSeqSlot_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 957 "trace_gen.m"
      ll_backend__trace_gen__IoSeqCodeStr_21 = (MR_String) "";
#line 955 "trace_gen.m"
    else
#line 952 "trace_gen.m"
      {
#line 952 "trace_gen.m"
        MR_Word ll_backend__trace_gen__IoSeqLval_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeIoSeqSlot_18, (MR_Integer) 0)));
#line 952 "trace_gen.m"
        MR_String ll_backend__trace_gen__IoSeqStr_20;
#line 952 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_64_64;

#line 953 "trace_gen.m"
        {
#line 953 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__IoSeqLval_19, &ll_backend__trace_gen__IoSeqStr_20);
        }
#line 954 "trace_gen.m"
        {
#line 954 "trace_gen.m"
          ll_backend__trace_gen__V_64_64 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__IoSeqStr_20, (MR_String) " = MR_io_tabling_counter;\n");
        }
#line 954 "trace_gen.m"
        {
#line 954 "trace_gen.m"
          ll_backend__trace_gen__IoSeqCodeStr_21 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__trace_gen__V_64_64);
        }
#line 952 "trace_gen.m"
      }
#line 968 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeTrailLvals_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 970 "trace_gen.m"
      ll_backend__trace_gen__TrailCodeStr_27 = (MR_String) "";
#line 968 "trace_gen.m"
    else
#line 962 "trace_gen.m"
      {
#line 962 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TrailLval_23;
#line 962 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TicketLval_24;
#line 962 "trace_gen.m"
        MR_String ll_backend__trace_gen__TrailLvalStr_25;
#line 962 "trace_gen.m"
        MR_String ll_backend__trace_gen__TicketLvalStr_26;
#line 962 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTrailLvals_22, (MR_Integer) 0)));
#line 962 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_68_68;
#line 962 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_69_69;
#line 962 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_71_71;
#line 962 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_73_73;

#line 962 "trace_gen.m"
        ll_backend__trace_gen__TrailLval_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_66_66, (MR_Integer) 0)));
#line 962 "trace_gen.m"
        ll_backend__trace_gen__TicketLval_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_66_66, (MR_Integer) 1)));
#line 963 "trace_gen.m"
        {
#line 963 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__TrailLval_23, &ll_backend__trace_gen__TrailLvalStr_25);
        }
#line 964 "trace_gen.m"
        {
#line 964 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__TicketLval_24, &ll_backend__trace_gen__TicketLvalStr_26);
        }
#line 967 "trace_gen.m"
        {
#line 967 "trace_gen.m"
          ll_backend__trace_gen__V_73_73 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TrailLvalStr_25, (MR_String) ");\n");
        }
#line 967 "trace_gen.m"
        {
#line 967 "trace_gen.m"
          ll_backend__trace_gen__V_71_71 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_store_ticket(", ll_backend__trace_gen__V_73_73);
        }
#line 966 "trace_gen.m"
        {
#line 966 "trace_gen.m"
          ll_backend__trace_gen__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) ");\n", ll_backend__trace_gen__V_71_71);
        }
#line 966 "trace_gen.m"
        {
#line 966 "trace_gen.m"
          ll_backend__trace_gen__V_68_68 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TicketLvalStr_26, ll_backend__trace_gen__V_69_69);
        }
#line 966 "trace_gen.m"
        {
#line 966 "trace_gen.m"
          ll_backend__trace_gen__TrailCodeStr_27 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_mark_ticket_stack(", ll_backend__trace_gen__V_68_68);
        }
#line 962 "trace_gen.m"
      }
#line 979 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeMaxfrLval_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 980 "trace_gen.m"
      {
#line 981 "trace_gen.m"
        {
#line 981 "trace_gen.m"
          ll_backend__trace_gen__MaxfrCode_30 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 980 "trace_gen.m"
      }
#line 979 "trace_gen.m"
    else
#line 975 "trace_gen.m"
      {
#line 975 "trace_gen.m"
        MR_Word ll_backend__trace_gen__MaxfrLval_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeMaxfrLval_28, (MR_Integer) 0)));
#line 975 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_75_75;
#line 975 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_76_76;

#line 977 "trace_gen.m"
        {
#line 977 "trace_gen.m"
          ll_backend__trace_gen__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 977 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 977 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_76_76, 1) = ((MR_Box) (ll_backend__trace_gen__MaxfrLval_29));
#line 977 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_76_76, 2) = ((MR_Box) (&ll_backend__trace_gen_scalar_common_3[3]));
#line 977 "trace_gen.m"
        }
#line 977 "trace_gen.m"
        {
#line 977 "trace_gen.m"
          ll_backend__trace_gen__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 977 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_75_75, 0) = ((MR_Box) (ll_backend__trace_gen__V_76_76));
#line 977 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_75_75, 1) = ((MR_Box) ((MR_String) "save initial maxfr"));
#line 977 "trace_gen.m"
        }
#line 976 "trace_gen.m"
        {
#line 976 "trace_gen.m"
          ll_backend__trace_gen__MaxfrCode_30 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__trace_gen__V_75_75)));
        }
#line 975 "trace_gen.m"
      }
#line 992 "trace_gen.m"
    if ((ll_backend__trace_gen__TailRecInfo_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 993 "trace_gen.m"
      {
#line 994 "trace_gen.m"
        {
#line 994 "trace_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.generate_tailrec_reset_slots_code\'/4", (MR_String) "no tail rec lval");
#line 994 "trace_gen.m"
          return;
        }
#line 993 "trace_gen.m"
      }
#line 992 "trace_gen.m"
    else
#line 986 "trace_gen.m"
      {
#line 986 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TailRecLval_32;
#line 986 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TailRecInfo_31, (MR_Integer) 0)));
#line 986 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_84_84;
#line 986 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_85_85;
#line 986 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_86_86;
#line 986 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_88_88;
#line 986 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_33_33;

#line 986 "trace_gen.m"
        ll_backend__trace_gen__TailRecLval_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_83_83, (MR_Integer) 0)));
#line 986 "trace_gen.m"
        ll_backend__trace_gen__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_83_83, (MR_Integer) 1)));
#line 989 "trace_gen.m"
        {
#line 989 "trace_gen.m"
          ll_backend__trace_gen__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 989 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_88_88, 0) = ((MR_Box) (ll_backend__trace_gen__TailRecLval_32));
#line 989 "trace_gen.m"
        }
#line 989 "trace_gen.m"
        {
#line 989 "trace_gen.m"
          ll_backend__trace_gen__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 989 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 989 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 989 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_86_86, 2) = ((MR_Box) (ll_backend__trace_gen__V_88_88));
#line 989 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_86_86, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[17])));
#line 989 "trace_gen.m"
        }
#line 988 "trace_gen.m"
        {
#line 988 "trace_gen.m"
          ll_backend__trace_gen__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 988 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 988 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_85_85, 1) = ((MR_Box) (ll_backend__trace_gen__TailRecLval_32));
#line 988 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_85_85, 2) = ((MR_Box) (ll_backend__trace_gen__V_86_86));
#line 988 "trace_gen.m"
        }
#line 988 "trace_gen.m"
        {
#line 988 "trace_gen.m"
          ll_backend__trace_gen__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 988 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_84_84, 0) = ((MR_Box) (ll_backend__trace_gen__V_85_85));
#line 988 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_84_84, 1) = ((MR_Box) ((MR_String) "increment tail recursion counter"));
#line 988 "trace_gen.m"
        }
#line 987 "trace_gen.m"
        {
#line 987 "trace_gen.m"
          ll_backend__trace_gen__TailRecLvalCode_34 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__trace_gen__V_84_84)));
        }
#line 986 "trace_gen.m"
      }
#line 1002 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeCallTableLval_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1004 "trace_gen.m"
      ll_backend__trace_gen__CallTableCodeStr_38 = (MR_String) "";
#line 1002 "trace_gen.m"
    else
#line 999 "trace_gen.m"
      {
#line 999 "trace_gen.m"
        MR_Word ll_backend__trace_gen__CallTableLval_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeCallTableLval_35, (MR_Integer) 0)));
#line 999 "trace_gen.m"
        MR_String ll_backend__trace_gen__CallTableLvalStr_37;
#line 999 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_94_94;

#line 1000 "trace_gen.m"
        {
#line 1000 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallTableLval_36, &ll_backend__trace_gen__CallTableLvalStr_37);
        }
#line 1001 "trace_gen.m"
        {
#line 1001 "trace_gen.m"
          ll_backend__trace_gen__V_94_94 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallTableLvalStr_37, (MR_String) " = 0;\n");
        }
#line 1001 "trace_gen.m"
        {
#line 1001 "trace_gen.m"
          ll_backend__trace_gen__CallTableCodeStr_38 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__trace_gen__V_94_94);
        }
#line 999 "trace_gen.m"
      }
#line 1006 "trace_gen.m"
    {
#line 1006 "trace_gen.m"
      ll_backend__trace_gen__V_97_97 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TrailCodeStr_27, ll_backend__trace_gen__CallTableCodeStr_38);
    }
#line 1006 "trace_gen.m"
    {
#line 1006 "trace_gen.m"
      ll_backend__trace_gen__V_96_96 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__IoSeqCodeStr_21, ll_backend__trace_gen__V_97_97);
    }
#line 1006 "trace_gen.m"
    {
#line 1006 "trace_gen.m"
      ll_backend__trace_gen__ForeignLangCodeStr_39 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__StdSlotCodeStr_15, ll_backend__trace_gen__V_96_96);
    }
#line 1009 "trace_gen.m"
    {
#line 1009 "trace_gen.m"
      ll_backend__trace_gen__V_102_102 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
    }
#line 1009 "trace_gen.m"
    {
#line 1009 "trace_gen.m"
      ll_backend__trace_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1009 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_101_101, 0) = ((MR_Box) (ll_backend__trace_gen__V_102_102));
#line 1009 "trace_gen.m"
    }
#line 1008 "trace_gen.m"
    {
#line 1008 "trace_gen.m"
      ll_backend__trace_gen__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1008 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1008 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1008 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1008 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 3) = ((MR_Box) (ll_backend__trace_gen__V_101_101));
#line 1008 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 4) = ((MR_Box) (ll_backend__trace_gen__ForeignLangCodeStr_39));
#line 1008 "trace_gen.m"
    }
#line 1010 "trace_gen.m"
    {
#line 1010 "trace_gen.m"
      ll_backend__trace_gen__ForeignLangComponents_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1010 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__ForeignLangComponents_40, 0) = ((MR_Box) (ll_backend__trace_gen__V_98_98));
#line 1010 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__ForeignLangComponents_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1010 "trace_gen.m"
    }
#line 6193 "ll_backend.trace_gen.c"
    ll_backend__trace_gen__TypeCtorInfo_179_179 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 1012 "trace_gen.m"
    {
#line 1012 "trace_gen.m"
      ll_backend__trace_gen__V_105_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 1012 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 1012 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1012 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 2) = ((MR_Box) (ll_backend__trace_gen__ForeignLangComponents_40));
#line 1012 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 3) = ((MR_Box) ((MR_Integer) 1));
#line 1012 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1012 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1012 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1012 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1012 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1012 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 9) = ((MR_Box) ((MR_Integer) 1));
#line 1012 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 10) = ((MR_Box) ((MR_Integer) 0));
#line 1012 "trace_gen.m"
    }
#line 1012 "trace_gen.m"
    {
#line 1012 "trace_gen.m"
      ll_backend__trace_gen__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1012 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_104_104, 0) = ((MR_Box) (ll_backend__trace_gen__V_105_105));
#line 1012 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_104_104, 1) = ((MR_Box) ((MR_String) ""));
#line 1012 "trace_gen.m"
    }
#line 1011 "trace_gen.m"
    {
#line 1011 "trace_gen.m"
      ll_backend__trace_gen__ForeignLangCode_41 = mercury__cord__singleton_1_f_0(ll_backend__trace_gen__TypeCtorInfo_179_179, ((MR_Box) (ll_backend__trace_gen__V_104_104)));
    }
#line 1016 "trace_gen.m"
    {
#line 1016 "trace_gen.m"
      ll_backend__trace_gen__V_116_116 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_179_179, ll_backend__trace_gen__MaxfrCode_30, ll_backend__trace_gen__TailRecLvalCode_34);
    }
#line 1016 "trace_gen.m"
    {
#line 1016 "trace_gen.m"
      *ll_backend__trace_gen__Code_6 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_179_179, ll_backend__trace_gen__ForeignLangCode_41, ll_backend__trace_gen__V_116_116);
    }
#line 924 "trace_gen.m"
    *ll_backend__trace_gen__STATE_VARIABLE_CI_43 = ll_backend__trace_gen__STATE_VARIABLE_CI_0_42;
#line 924 "trace_gen.m"
  }
#line 921 "trace_gen.m"
}

#line 1183 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__maybe_setup_redo_event_2_p_0_1(
#line 1183 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg)
#line 1183 "trace_gen.m"
{
#line 1183 "trace_gen.m"
  {
#line 1183 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 1183 "trace_gen.m"
    MR_Box ll_backend__trace_gen__closure = ll_backend__trace_gen__closure_arg;

#line 1183 "trace_gen.m"
    {
#line 1183 "trace_gen.m"
      return ll_backend__trace_gen__succeeded = ll_backend__trace_gen__IntroducedFrom__pred__maybe_setup_redo_event__1183__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__closure, (MR_Integer) 4))));
    }
#line 1183 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 1183 "trace_gen.m"
  }
#line 1183 "trace_gen.m"
}

#line 232 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__maybe_setup_redo_event_2_p_0(
#line 232 "trace_gen.m"
  MR_Word ll_backend__trace_gen__TraceInfo_3,
#line 232 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_4)
#line 232 "trace_gen.m"
{
#line 1174 "trace_gen.m"
  {
#line 1174 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 1174 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceRedoLabel_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 8)));
#line 1174 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 2)));
#line 1175 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 0)));
#line 1175 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 1)));
#line 1175 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 3)));
#line 1175 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 4)));
#line 1175 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 5)));
#line 1175 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 6)));
#line 1175 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 7)));

#line 1198 "trace_gen.m"
    if ((ll_backend__trace_gen__TraceRedoLabel_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1199 "trace_gen.m"
      {
#line 1200 "trace_gen.m"
        {
#line 1200 "trace_gen.m"
          *ll_backend__trace_gen__Code_4 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 1199 "trace_gen.m"
      }
#line 1198 "trace_gen.m"
    else
#line 1190 "trace_gen.m"
    if ((ll_backend__trace_gen__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1191 "trace_gen.m"
      {
#line 1192 "trace_gen.m"
        {
#line 1192 "trace_gen.m"
          *ll_backend__trace_gen__Code_4 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (&ll_backend__trace_gen_scalar_common_1[12])));
        }
#line 1191 "trace_gen.m"
      }
#line 1190 "trace_gen.m"
    else
#line 1180 "trace_gen.m"
      {
#line 1180 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Lval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_31_31, (MR_Integer) 0)));
#line 1180 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_16_16;

#line 1183 "trace_gen.m"
        {
#line 1183 "trace_gen.m"
          ll_backend__trace_gen__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1183 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_16_16, 0) = ((MR_Box) (&ll_backend__trace_gen_scalar_common_5[0]));
#line 1183 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_16_16, 1) = ((MR_Box) (ll_backend__trace_gen__maybe_setup_redo_event_2_p_0_1));
#line 1183 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1183 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_16_16, 3) = ((MR_Box) (ll_backend__trace_gen__Lval_8));
#line 1183 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_16_16, 4) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[16])));
#line 1183 "trace_gen.m"
        }
#line 1183 "trace_gen.m"
        {
#line 1183 "trace_gen.m"
          mercury__require__expect_4_p_0(ll_backend__trace_gen__V_16_16, (MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.maybe_setup_redo_event\'/2", (MR_String) "from-full flag not stored in expected slot");
        }
#line 1185 "trace_gen.m"
        {
#line 1185 "trace_gen.m"
          *ll_backend__trace_gen__Code_4 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (&ll_backend__trace_gen_scalar_common_1[13])));
        }
#line 1180 "trace_gen.m"
      }
#line 1174 "trace_gen.m"
  }
#line 232 "trace_gen.m"
}

#line 223 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__generate_external_event_code_8_p_0(
#line 223 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ExternalPort_9,
#line 223 "trace_gen.m"
  MR_Word ll_backend__trace_gen__TraceInfo_10,
#line 223 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Context_11,
#line 223 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__MaybeExternalInfo_12,
#line 223 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_23,
#line 223 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_24,
#line 223 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_25,
#line 223 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_26)
#line 223 "trace_gen.m"
{
#line 886 "trace_gen.m"
  {
#line 886 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 886 "trace_gen.m"
    MR_Word ll_backend__trace_gen__Port_15 = ((&ll_backend__trace_gen_vector_common_4[0 + ll_backend__trace_gen__ExternalPort_9]))->ll_backend__trace_gen__vector_common_type_4_0__vct_4_f_0;
#line 886 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ModuleInfo_16;
#line 886 "trace_gen.m"
    MR_Word ll_backend__trace_gen__PredInfo_17;
#line 886 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ProcInfo_18;
#line 886 "trace_gen.m"
    MR_Word ll_backend__trace_gen__NeedPort_19;
#line 886 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_27_27;
#line 886 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_36_36;
#line 891 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_37_37;
#line 891 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_38_38;
#line 891 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_39_39;
#line 891 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_40_40;
#line 891 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_41_41;
#line 891 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_42_42;
#line 891 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_43_43;

#line 888 "trace_gen.m"
    {
#line 888 "trace_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_23, &ll_backend__trace_gen__ModuleInfo_16);
    }
#line 889 "trace_gen.m"
    {
#line 889 "trace_gen.m"
      ll_backend__code_info__get_pred_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_23, &ll_backend__trace_gen__PredInfo_17);
    }
#line 890 "trace_gen.m"
    {
#line 890 "trace_gen.m"
      ll_backend__code_info__get_proc_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_23, &ll_backend__trace_gen__ProcInfo_18);
    }
#line 891 "trace_gen.m"
    ll_backend__trace_gen__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 0)));
#line 891 "trace_gen.m"
    ll_backend__trace_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 1)));
#line 891 "trace_gen.m"
    ll_backend__trace_gen__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 2)));
#line 891 "trace_gen.m"
    ll_backend__trace_gen__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 3)));
#line 891 "trace_gen.m"
    ll_backend__trace_gen__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 4)));
#line 891 "trace_gen.m"
    ll_backend__trace_gen__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 5)));
#line 891 "trace_gen.m"
    ll_backend__trace_gen__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 6)));
#line 891 "trace_gen.m"
    ll_backend__trace_gen__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 7)));
#line 891 "trace_gen.m"
    ll_backend__trace_gen__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 8)));
#line 891 "trace_gen.m"
    {
#line 891 "trace_gen.m"
      ll_backend__trace_gen__NeedPort_19 = libs__trace_params__eff_trace_needs_port_6_f_0(ll_backend__trace_gen__ModuleInfo_16, ll_backend__trace_gen__PredInfo_17, ll_backend__trace_gen__ProcInfo_18, ll_backend__trace_gen__V_27_27, ll_backend__trace_gen__V_36_36, ll_backend__trace_gen__Port_15);
    }
#line 898 "trace_gen.m"
#line 898 "trace_gen.m"
    switch (ll_backend__trace_gen__NeedPort_19) {
#line 898 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 898 "trace_gen.m"
      case (MR_Integer) 0:
#line 899 "trace_gen.m"
        {
#line 900 "trace_gen.m"
          *ll_backend__trace_gen__MaybeExternalInfo_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 899 "trace_gen.m"
          *ll_backend__trace_gen__STATE_VARIABLE_CI_24 = ll_backend__trace_gen__STATE_VARIABLE_CI_0_23;
#line 899 "trace_gen.m"
          *ll_backend__trace_gen__STATE_VARIABLE_CLD_26 = ll_backend__trace_gen__STATE_VARIABLE_CLD_0_25;
#line 899 "trace_gen.m"
        }
#line 898 "trace_gen.m"
        break;
#line 898 "trace_gen.m"
      case (MR_Integer) 1:
#line 894 "trace_gen.m"
        {
#line 894 "trace_gen.m"
          MR_Word ll_backend__trace_gen__Label_20;
#line 894 "trace_gen.m"
          MR_Word ll_backend__trace_gen__TvarDataMap_21;
#line 894 "trace_gen.m"
          MR_Word ll_backend__trace_gen__Code_22;
#line 894 "trace_gen.m"
          MR_Word ll_backend__trace_gen__V_30_30;
#line 894 "trace_gen.m"
          MR_Word ll_backend__trace_gen__V_35_35;

#line 895 "trace_gen.m"
          {
#line 895 "trace_gen.m"
            ll_backend__trace_gen__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 895 "trace_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_30_30, 0) = ((MR_Box) (ll_backend__trace_gen__TraceInfo_10));
#line 895 "trace_gen.m"
          }
#line 895 "trace_gen.m"
          {
#line 895 "trace_gen.m"
            ll_backend__trace_gen__generate_event_code_13_p_0(ll_backend__trace_gen__Port_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__trace_gen__V_30_30, ll_backend__trace_gen__Context_11, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__trace_gen__Label_20, &ll_backend__trace_gen__TvarDataMap_21, &ll_backend__trace_gen__Code_22, ll_backend__trace_gen__STATE_VARIABLE_CI_0_23, ll_backend__trace_gen__STATE_VARIABLE_CI_24, ll_backend__trace_gen__STATE_VARIABLE_CLD_0_25, ll_backend__trace_gen__STATE_VARIABLE_CLD_26);
          }
#line 897 "trace_gen.m"
          {
#line 897 "trace_gen.m"
            ll_backend__trace_gen__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 897 "trace_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_35_35, 0) = ((MR_Box) (ll_backend__trace_gen__Label_20));
#line 897 "trace_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_35_35, 1) = ((MR_Box) (ll_backend__trace_gen__TvarDataMap_21));
#line 897 "trace_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_35_35, 2) = ((MR_Box) (ll_backend__trace_gen__Code_22));
#line 897 "trace_gen.m"
          }
#line 897 "trace_gen.m"
          {
#line 897 "trace_gen.m"
            MR_Word base;
#line 897 "trace_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 897 "trace_gen.m"
            *ll_backend__trace_gen__MaybeExternalInfo_12 = base;
#line 897 "trace_gen.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__trace_gen__V_35_35));
#line 897 "trace_gen.m"
          }
#line 894 "trace_gen.m"
        }
#line 898 "trace_gen.m"
        break;
#line 898 "trace_gen.m"
    }
#line 886 "trace_gen.m"
  }
#line 223 "trace_gen.m"
}

#line 198 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__generate_tailrec_event_code_10_p_0(
#line 198 "trace_gen.m"
  MR_Word ll_backend__trace_gen__TraceInfo_11,
#line 198 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ArgsInfos_12,
#line 198 "trace_gen.m"
  MR_Word ll_backend__trace_gen__GoalId_13,
#line 198 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Context_14,
#line 198 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_15,
#line 198 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__TailRecLabel_16,
#line 198 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_29,
#line 198 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_30,
#line 198 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_31,
#line 198 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_32)
#line 198 "trace_gen.m"
{
#line 904 "trace_gen.m"
  {
#line 904 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 904 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ContainingGoalMap_20;
#line 904 "trace_gen.m"
    MR_Word ll_backend__trace_gen__GoalPath_21;
#line 904 "trace_gen.m"
    MR_Word ll_backend__trace_gen__PortInfo_22;
#line 904 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTailRecInfo_27;
#line 904 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_33_33;
#line 911 "trace_gen.m"
    MR_Word ll_backend__trace_gen___Label_25;
#line 911 "trace_gen.m"
    MR_Word ll_backend__trace_gen___TvarDataMap_26;
#line 913 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_40_40;
#line 913 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_41_41;
#line 913 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_42_42;
#line 913 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_43_43;
#line 913 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_44_44;
#line 913 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_45_45;
#line 913 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_46_46;
#line 913 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_47_47;

#line 906 "trace_gen.m"
    {
#line 906 "trace_gen.m"
      ll_backend__code_info__get_containing_goal_map_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_29, &ll_backend__trace_gen__ContainingGoalMap_20);
    }
#line 907 "trace_gen.m"
    {
#line 907 "trace_gen.m"
      ll_backend__trace_gen__GoalPath_21 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__trace_gen__ContainingGoalMap_20, ll_backend__trace_gen__GoalId_13);
    }
#line 908 "trace_gen.m"
    {
#line 908 "trace_gen.m"
      ll_backend__trace_gen__PortInfo_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 908 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__PortInfo_22, 0) = ((MR_Box) (ll_backend__trace_gen__GoalPath_21));
#line 908 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__PortInfo_22, 1) = ((MR_Box) (ll_backend__trace_gen__ArgsInfos_12));
#line 908 "trace_gen.m"
    }
#line 911 "trace_gen.m"
    {
#line 911 "trace_gen.m"
      ll_backend__trace_gen__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 911 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_33_33, 0) = ((MR_Box) (ll_backend__trace_gen__TraceInfo_11));
#line 911 "trace_gen.m"
    }
#line 911 "trace_gen.m"
    {
#line 911 "trace_gen.m"
      ll_backend__trace_gen__generate_event_code_13_p_0((MR_Integer) 4, ll_backend__trace_gen__PortInfo_22, ll_backend__trace_gen__V_33_33, ll_backend__trace_gen__Context_14, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__trace_gen___Label_25, &ll_backend__trace_gen___TvarDataMap_26, ll_backend__trace_gen__Code_15, ll_backend__trace_gen__STATE_VARIABLE_CI_0_29, ll_backend__trace_gen__STATE_VARIABLE_CI_30, ll_backend__trace_gen__STATE_VARIABLE_CLD_0_31, ll_backend__trace_gen__STATE_VARIABLE_CLD_32);
    }
#line 913 "trace_gen.m"
    ll_backend__trace_gen__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 0)));
#line 913 "trace_gen.m"
    ll_backend__trace_gen__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 1)));
#line 913 "trace_gen.m"
    ll_backend__trace_gen__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 2)));
#line 913 "trace_gen.m"
    ll_backend__trace_gen__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 3)));
#line 913 "trace_gen.m"
    ll_backend__trace_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 4)));
#line 913 "trace_gen.m"
    ll_backend__trace_gen__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 5)));
#line 913 "trace_gen.m"
    ll_backend__trace_gen__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 6)));
#line 913 "trace_gen.m"
    ll_backend__trace_gen__MaybeTailRecInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 7)));
#line 913 "trace_gen.m"
    ll_backend__trace_gen__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 8)));
#line 916 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeTailRecInfo_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 917 "trace_gen.m"
      {
#line 918 "trace_gen.m"
        {
#line 918 "trace_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.generate_tailrec_event_code\'/10", (MR_String) "no tail rec label");
#line 918 "trace_gen.m"
          return;
        }
#line 917 "trace_gen.m"
      }
#line 916 "trace_gen.m"
    else
#line 915 "trace_gen.m"
      {
#line 915 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTailRecInfo_27, (MR_Integer) 0)));
#line 915 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_39_39, (MR_Integer) 0)));

#line 915 "trace_gen.m"
        *ll_backend__trace_gen__TailRecLabel_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_39_39, (MR_Integer) 1)));
#line 915 "trace_gen.m"
      }
#line 904 "trace_gen.m"
  }
#line 198 "trace_gen.m"
}

#line 194 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__generate_user_event_code_7_p_0(
#line 194 "trace_gen.m"
  MR_Word ll_backend__trace_gen__UserInfo_8,
#line 194 "trace_gen.m"
  MR_Word ll_backend__trace_gen__GoalInfo_9,
#line 194 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_10,
#line 194 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_23,
#line 194 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_24,
#line 194 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_25,
#line 194 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_26)
#line 194 "trace_gen.m"
{
#line 873 "trace_gen.m"
  {
#line 873 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 873 "trace_gen.m"
    MR_Word ll_backend__trace_gen__GoalId_13;
#line 873 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ContainingGoalMap_14;
#line 873 "trace_gen.m"
    MR_Word ll_backend__trace_gen__GoalPath_15;
#line 873 "trace_gen.m"
    MR_Word ll_backend__trace_gen__Context_16;
#line 873 "trace_gen.m"
    MR_Word ll_backend__trace_gen__PortInfo_18;
#line 873 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_27_27;
#line 882 "trace_gen.m"
    MR_Word ll_backend__trace_gen___Label_21;
#line 882 "trace_gen.m"
    MR_Word ll_backend__trace_gen___TvarDataMap_22;

#line 874 "trace_gen.m"
    {
#line 874 "trace_gen.m"
      ll_backend__trace_gen__GoalId_13 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__trace_gen__GoalInfo_9);
    }
#line 875 "trace_gen.m"
    {
#line 875 "trace_gen.m"
      ll_backend__code_info__get_containing_goal_map_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_23, &ll_backend__trace_gen__ContainingGoalMap_14);
    }
#line 876 "trace_gen.m"
    {
#line 876 "trace_gen.m"
      ll_backend__trace_gen__GoalPath_15 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__trace_gen__ContainingGoalMap_14, ll_backend__trace_gen__GoalId_13);
    }
#line 877 "trace_gen.m"
    {
#line 877 "trace_gen.m"
      ll_backend__trace_gen__Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__trace_gen__GoalInfo_9);
    }
#line 879 "trace_gen.m"
    {
#line 879 "trace_gen.m"
      ll_backend__trace_gen__PortInfo_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 879 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__PortInfo_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 879 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__PortInfo_18, 1) = ((MR_Box) (ll_backend__trace_gen__GoalPath_15));
#line 879 "trace_gen.m"
    }
#line 883 "trace_gen.m"
    {
#line 883 "trace_gen.m"
      ll_backend__trace_gen__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 883 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_27_27, 0) = ((MR_Box) (ll_backend__trace_gen__UserInfo_8));
#line 883 "trace_gen.m"
    }
#line 882 "trace_gen.m"
    {
#line 882 "trace_gen.m"
      ll_backend__trace_gen__generate_event_code_13_p_0((MR_Integer) 15, ll_backend__trace_gen__PortInfo_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__trace_gen__Context_16, (MR_Integer) 0, ll_backend__trace_gen__V_27_27, &ll_backend__trace_gen___Label_21, &ll_backend__trace_gen___TvarDataMap_22, ll_backend__trace_gen__Code_10, ll_backend__trace_gen__STATE_VARIABLE_CI_0_23, ll_backend__trace_gen__STATE_VARIABLE_CI_24, ll_backend__trace_gen__STATE_VARIABLE_CLD_0_25, ll_backend__trace_gen__STATE_VARIABLE_CLD_26);
    }
#line 873 "trace_gen.m"
  }
#line 194 "trace_gen.m"
}

#line 188 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__maybe_generate_negated_event_code_8_p_0(
#line 188 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Goal_9,
#line 188 "trace_gen.m"
  MR_Word ll_backend__trace_gen__OutsideGoalInfo_10,
#line 188 "trace_gen.m"
  MR_Word ll_backend__trace_gen__NegPort_11,
#line 188 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_12,
#line 188 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_30,
#line 188 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_31,
#line 188 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_32,
#line 188 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_33)
#line 188 "trace_gen.m"
{
#line 837 "trace_gen.m"
  {
#line 837 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 837 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTraceInfo_15;
#line 869 "trace_gen.m"
    MR_Word ll_backend__trace_gen__Port_17;
#line 840 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceInfo_16;
#line 840 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ModuleInfo_18;
#line 840 "trace_gen.m"
    MR_Word ll_backend__trace_gen__PredInfo_19;
#line 840 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ProcInfo_20;
#line 840 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_34_34;
#line 840 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_35_35;
#line 840 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_43_43;
#line 851 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_44_44;
#line 851 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_45_45;
#line 851 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_46_46;
#line 851 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_47_47;
#line 851 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_48_48;
#line 851 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_49_49;
#line 851 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_50_50;

#line 838 "trace_gen.m"
    {
#line 838 "trace_gen.m"
      ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_30, &ll_backend__trace_gen__MaybeTraceInfo_15);
    }
#line 840 "trace_gen.m"
    ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__MaybeTraceInfo_15)) == (MR_mktag((MR_Integer) 1)));
#line 840 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 840 "trace_gen.m"
      {
#line 840 "trace_gen.m"
        ll_backend__trace_gen__TraceInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTraceInfo_15, (MR_Integer) 0)));
#line 844 "trace_gen.m"
#line 844 "trace_gen.m"
        switch (ll_backend__trace_gen__NegPort_11) {
#line 844 "trace_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 844 "trace_gen.m"
          case (MR_Integer) 1:
#line 843 "trace_gen.m"
            ll_backend__trace_gen__Port_17 = (MR_Integer) 11;
#line 844 "trace_gen.m"
            break;
#line 844 "trace_gen.m"
          case (MR_Integer) 0:
#line 846 "trace_gen.m"
            ll_backend__trace_gen__Port_17 = (MR_Integer) 10;
#line 844 "trace_gen.m"
            break;
#line 844 "trace_gen.m"
        }
#line 848 "trace_gen.m"
        {
#line 848 "trace_gen.m"
          ll_backend__code_info__get_module_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_30, &ll_backend__trace_gen__ModuleInfo_18);
        }
#line 849 "trace_gen.m"
        {
#line 849 "trace_gen.m"
          ll_backend__code_info__get_pred_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_30, &ll_backend__trace_gen__PredInfo_19);
        }
#line 850 "trace_gen.m"
        {
#line 850 "trace_gen.m"
          ll_backend__code_info__get_proc_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_30, &ll_backend__trace_gen__ProcInfo_20);
        }
#line 851 "trace_gen.m"
        ll_backend__trace_gen__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 0)));
#line 851 "trace_gen.m"
        ll_backend__trace_gen__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 1)));
#line 851 "trace_gen.m"
        ll_backend__trace_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 2)));
#line 851 "trace_gen.m"
        ll_backend__trace_gen__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 3)));
#line 851 "trace_gen.m"
        ll_backend__trace_gen__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 4)));
#line 851 "trace_gen.m"
        ll_backend__trace_gen__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 5)));
#line 851 "trace_gen.m"
        ll_backend__trace_gen__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 6)));
#line 851 "trace_gen.m"
        ll_backend__trace_gen__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 7)));
#line 851 "trace_gen.m"
        ll_backend__trace_gen__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 8)));
#line 851 "trace_gen.m"
        {
#line 851 "trace_gen.m"
          ll_backend__trace_gen__V_34_34 = libs__trace_params__eff_trace_needs_port_6_f_0(ll_backend__trace_gen__ModuleInfo_18, ll_backend__trace_gen__PredInfo_19, ll_backend__trace_gen__ProcInfo_20, ll_backend__trace_gen__V_35_35, ll_backend__trace_gen__V_43_43, ll_backend__trace_gen__Port_17);
        }
#line 853 "trace_gen.m"
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_34_34 == (MR_Integer) 1);
#line 840 "trace_gen.m"
      }
#line 869 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 855 "trace_gen.m"
      {
#line 855 "trace_gen.m"
        MR_Word ll_backend__trace_gen__GoalInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Goal_9, (MR_Integer) 1)));
#line 855 "trace_gen.m"
        MR_Word ll_backend__trace_gen__GoalId_23;
#line 855 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Context_24;
#line 855 "trace_gen.m"
        MR_Word ll_backend__trace_gen__HideEvent_25;
#line 855 "trace_gen.m"
        MR_Word ll_backend__trace_gen__ContainingGoalMap_26;
#line 855 "trace_gen.m"
        MR_Word ll_backend__trace_gen__GoalPath_27;
#line 855 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_38_38;
#line 855 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Goal_9, (MR_Integer) 0)));
#line 867 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_28_28;
#line 867 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_29_29;

#line 856 "trace_gen.m"
        {
#line 856 "trace_gen.m"
          ll_backend__trace_gen__GoalId_23 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__trace_gen__GoalInfo_22);
        }
#line 857 "trace_gen.m"
        {
#line 857 "trace_gen.m"
          ll_backend__trace_gen__Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__trace_gen__GoalInfo_22);
        }
#line 859 "trace_gen.m"
        {
#line 859 "trace_gen.m"
          ll_backend__trace_gen__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(ll_backend__trace_gen__OutsideGoalInfo_10, (MR_Integer) 8);
        }
#line 862 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 861 "trace_gen.m"
          ll_backend__trace_gen__HideEvent_25 = (MR_Integer) 1;
#line 862 "trace_gen.m"
        else
#line 863 "trace_gen.m"
          ll_backend__trace_gen__HideEvent_25 = (MR_Integer) 0;
#line 865 "trace_gen.m"
        {
#line 865 "trace_gen.m"
          ll_backend__code_info__get_containing_goal_map_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_30, &ll_backend__trace_gen__ContainingGoalMap_26);
        }
#line 866 "trace_gen.m"
        {
#line 866 "trace_gen.m"
          ll_backend__trace_gen__GoalPath_27 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__trace_gen__ContainingGoalMap_26, ll_backend__trace_gen__GoalId_23);
        }
#line 867 "trace_gen.m"
        {
#line 867 "trace_gen.m"
          ll_backend__trace_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 867 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 867 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_38_38, 1) = ((MR_Box) (ll_backend__trace_gen__GoalPath_27));
#line 867 "trace_gen.m"
        }
#line 867 "trace_gen.m"
        {
#line 867 "trace_gen.m"
          ll_backend__trace_gen__generate_event_code_13_p_0(ll_backend__trace_gen__Port_17, ll_backend__trace_gen__V_38_38, ll_backend__trace_gen__MaybeTraceInfo_15, ll_backend__trace_gen__Context_24, ll_backend__trace_gen__HideEvent_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__trace_gen__V_28_28, &ll_backend__trace_gen__V_29_29, ll_backend__trace_gen__Code_12, ll_backend__trace_gen__STATE_VARIABLE_CI_0_30, ll_backend__trace_gen__STATE_VARIABLE_CI_31, ll_backend__trace_gen__STATE_VARIABLE_CLD_0_32, ll_backend__trace_gen__STATE_VARIABLE_CLD_33);
        }
#line 855 "trace_gen.m"
      }
#line 869 "trace_gen.m"
    else
#line 870 "trace_gen.m"
      {
#line 870 "trace_gen.m"
        {
#line 870 "trace_gen.m"
          *ll_backend__trace_gen__Code_12 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 870 "trace_gen.m"
        *ll_backend__trace_gen__STATE_VARIABLE_CLD_33 = ll_backend__trace_gen__STATE_VARIABLE_CLD_0_32;
#line 870 "trace_gen.m"
        *ll_backend__trace_gen__STATE_VARIABLE_CI_31 = ll_backend__trace_gen__STATE_VARIABLE_CI_0_30;
#line 870 "trace_gen.m"
      }
#line 837 "trace_gen.m"
  }
#line 188 "trace_gen.m"
}

#line 181 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(
#line 181 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Goal_8,
#line 181 "trace_gen.m"
  MR_Word ll_backend__trace_gen__OutsideGoalInfo_9,
#line 181 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_10,
#line 181 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_36,
#line 181 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_37,
#line 181 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_38,
#line 181 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_39)
#line 181 "trace_gen.m"
{
#line 769 "trace_gen.m"
  {
#line 769 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 769 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTraceInfo_13;

#line 770 "trace_gen.m"
    {
#line 770 "trace_gen.m"
      ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_36, &ll_backend__trace_gen__MaybeTraceInfo_13);
    }
#line 831 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeTraceInfo_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 832 "trace_gen.m"
      {
#line 833 "trace_gen.m"
        {
#line 833 "trace_gen.m"
          *ll_backend__trace_gen__Code_10 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 832 "trace_gen.m"
        *ll_backend__trace_gen__STATE_VARIABLE_CI_37 = ll_backend__trace_gen__STATE_VARIABLE_CI_0_36;
#line 832 "trace_gen.m"
        *ll_backend__trace_gen__STATE_VARIABLE_CLD_39 = ll_backend__trace_gen__STATE_VARIABLE_CLD_0_38;
#line 832 "trace_gen.m"
      }
#line 831 "trace_gen.m"
    else
#line 772 "trace_gen.m"
      {
#line 772 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TraceInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTraceInfo_13, (MR_Integer) 0)));
#line 772 "trace_gen.m"
        MR_Word ll_backend__trace_gen__GoalInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Goal_8, (MR_Integer) 1)));
#line 772 "trace_gen.m"
        MR_Word ll_backend__trace_gen__GoalId_17;
#line 772 "trace_gen.m"
        MR_Word ll_backend__trace_gen__ContainingGoalMap_18;
#line 772 "trace_gen.m"
        MR_Word ll_backend__trace_gen__ContainingGoal_19;
#line 772 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Port_26;
#line 773 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Goal_8, (MR_Integer) 0)));
#line 776 "trace_gen.m"
        MR_Box ll_backend__trace_gen__conv0_ContainingGoal_19;
#line 804 "trace_gen.m"
        MR_Word ll_backend__trace_gen__PortPrime_24;
#line 778 "trace_gen.m"
        MR_Word ll_backend__trace_gen__LastStep_21;
#line 778 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_20_20;
#line 808 "trace_gen.m"
        MR_Word ll_backend__trace_gen__ModuleInfo_27;
#line 808 "trace_gen.m"
        MR_Word ll_backend__trace_gen__PredInfo_28;
#line 808 "trace_gen.m"
        MR_Word ll_backend__trace_gen__ProcInfo_29;
#line 808 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_43_43;
#line 808 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_44_44;
#line 808 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_52_52;
#line 811 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_53_53;
#line 811 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_54_54;
#line 811 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_55_55;
#line 811 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_56_56;
#line 811 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_57_57;
#line 811 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_58_58;
#line 811 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_59_59;

#line 774 "trace_gen.m"
        {
#line 774 "trace_gen.m"
          ll_backend__trace_gen__GoalId_17 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__trace_gen__GoalInfo_16);
        }
#line 775 "trace_gen.m"
        {
#line 775 "trace_gen.m"
          ll_backend__code_info__get_containing_goal_map_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_36, &ll_backend__trace_gen__ContainingGoalMap_18);
        }
#line 776 "trace_gen.m"
        {
#line 776 "trace_gen.m"
          mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0, ll_backend__trace_gen__ContainingGoalMap_18, ((MR_Box) (ll_backend__trace_gen__GoalId_17)), &ll_backend__trace_gen__conv0_ContainingGoal_19);
        }
#line 776 "trace_gen.m"
        ll_backend__trace_gen__ContainingGoal_19 = ((MR_Word) ll_backend__trace_gen__conv0_ContainingGoal_19);
#line 778 "trace_gen.m"
        ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__ContainingGoal_19)) == (MR_mktag((MR_Integer) 1)));
#line 778 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 778 "trace_gen.m"
          {
#line 778 "trace_gen.m"
            ll_backend__trace_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__ContainingGoal_19, (MR_Integer) 0)));
#line 778 "trace_gen.m"
            ll_backend__trace_gen__LastStep_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__ContainingGoal_19, (MR_Integer) 1)));
#line 782 "trace_gen.m"
#line 782 "trace_gen.m"
            switch (MR_tag((MR_Word) ll_backend__trace_gen__LastStep_21)) {
#line 782 "trace_gen.m"
              default:
#line 782 "trace_gen.m"
                ll_backend__trace_gen__succeeded = MR_FALSE;
#line 782 "trace_gen.m"
                break;
#line 782 "trace_gen.m"
              case (MR_Integer) 0:
#line 782 "trace_gen.m"
#line 782 "trace_gen.m"
                switch (MR_unmkbody(ll_backend__trace_gen__LastStep_21)) {
#line 782 "trace_gen.m"
                  default:
#line 782 "trace_gen.m"
                    ll_backend__trace_gen__succeeded = MR_FALSE;
#line 782 "trace_gen.m"
                    break;
#line 782 "trace_gen.m"
                  case (MR_Integer) 0:
#line 791 "trace_gen.m"
                    {
#line 791 "trace_gen.m"
                      ll_backend__trace_gen__PortPrime_24 = (MR_Integer) 6;
#line 791 "trace_gen.m"
                      ll_backend__trace_gen__succeeded = MR_TRUE;
#line 791 "trace_gen.m"
                    }
#line 782 "trace_gen.m"
                    break;
#line 782 "trace_gen.m"
                  case (MR_Integer) 1:
#line 794 "trace_gen.m"
                    {
#line 794 "trace_gen.m"
                      ll_backend__trace_gen__PortPrime_24 = (MR_Integer) 7;
#line 794 "trace_gen.m"
                      ll_backend__trace_gen__succeeded = MR_TRUE;
#line 794 "trace_gen.m"
                    }
#line 782 "trace_gen.m"
                    break;
#line 782 "trace_gen.m"
                  case (MR_Integer) 2:
#line 797 "trace_gen.m"
                    {
#line 797 "trace_gen.m"
                      ll_backend__trace_gen__PortPrime_24 = (MR_Integer) 8;
#line 797 "trace_gen.m"
                      ll_backend__trace_gen__succeeded = MR_TRUE;
#line 797 "trace_gen.m"
                    }
#line 782 "trace_gen.m"
                    break;
#line 782 "trace_gen.m"
                  case (MR_Integer) 3:
#line 800 "trace_gen.m"
                    {
#line 800 "trace_gen.m"
                      ll_backend__trace_gen__PortPrime_24 = (MR_Integer) 9;
#line 800 "trace_gen.m"
                      ll_backend__trace_gen__succeeded = MR_TRUE;
#line 800 "trace_gen.m"
                    }
#line 782 "trace_gen.m"
                    break;
#line 782 "trace_gen.m"
                }
#line 782 "trace_gen.m"
                break;
#line 782 "trace_gen.m"
              case (MR_Integer) 2:
#line 783 "trace_gen.m"
                {
#line 783 "trace_gen.m"
                  MR_Integer ll_backend__trace_gen__DisjunctNum_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__LastStep_21, (MR_Integer) 0)));

#line 784 "trace_gen.m"
                  ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__DisjunctNum_25 == (MR_Integer) 1);
#line 786 "trace_gen.m"
                  if (ll_backend__trace_gen__succeeded)
#line 785 "trace_gen.m"
                    ll_backend__trace_gen__PortPrime_24 = (MR_Integer) 12;
#line 786 "trace_gen.m"
                  else
#line 787 "trace_gen.m"
                    ll_backend__trace_gen__PortPrime_24 = (MR_Integer) 13;
#line 783 "trace_gen.m"
                  ll_backend__trace_gen__succeeded = MR_TRUE;
#line 783 "trace_gen.m"
                }
#line 782 "trace_gen.m"
                break;
#line 782 "trace_gen.m"
              case (MR_Integer) 3:
#line 782 "trace_gen.m"
#line 782 "trace_gen.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__LastStep_21, (MR_Integer) 0)))) {
#line 782 "trace_gen.m"
                  default:
#line 782 "trace_gen.m"
                    ll_backend__trace_gen__succeeded = MR_FALSE;
#line 782 "trace_gen.m"
                    break;
#line 782 "trace_gen.m"
                  case (MR_Integer) 0:
#line 781 "trace_gen.m"
                    {
#line 781 "trace_gen.m"
                      ll_backend__trace_gen__PortPrime_24 = (MR_Integer) 14;
#line 781 "trace_gen.m"
                      ll_backend__trace_gen__succeeded = MR_TRUE;
#line 781 "trace_gen.m"
                    }
#line 782 "trace_gen.m"
                    break;
#line 782 "trace_gen.m"
                }
#line 782 "trace_gen.m"
                break;
#line 782 "trace_gen.m"
            }
#line 778 "trace_gen.m"
          }
#line 804 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 803 "trace_gen.m"
          ll_backend__trace_gen__Port_26 = ll_backend__trace_gen__PortPrime_24;
#line 804 "trace_gen.m"
        else
#line 805 "trace_gen.m"
          {
#line 805 "trace_gen.m"
            {
#line 805 "trace_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.maybe_generate_internal_event_code\'/7", (MR_String) "bad path");
#line 805 "trace_gen.m"
              return;
            }
#line 805 "trace_gen.m"
          }
#line 808 "trace_gen.m"
        {
#line 808 "trace_gen.m"
          ll_backend__code_info__get_module_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_36, &ll_backend__trace_gen__ModuleInfo_27);
        }
#line 809 "trace_gen.m"
        {
#line 809 "trace_gen.m"
          ll_backend__code_info__get_pred_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_36, &ll_backend__trace_gen__PredInfo_28);
        }
#line 810 "trace_gen.m"
        {
#line 810 "trace_gen.m"
          ll_backend__code_info__get_proc_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_36, &ll_backend__trace_gen__ProcInfo_29);
        }
#line 811 "trace_gen.m"
        ll_backend__trace_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 0)));
#line 811 "trace_gen.m"
        ll_backend__trace_gen__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 1)));
#line 811 "trace_gen.m"
        ll_backend__trace_gen__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 2)));
#line 811 "trace_gen.m"
        ll_backend__trace_gen__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 3)));
#line 811 "trace_gen.m"
        ll_backend__trace_gen__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 4)));
#line 811 "trace_gen.m"
        ll_backend__trace_gen__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 5)));
#line 811 "trace_gen.m"
        ll_backend__trace_gen__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 6)));
#line 811 "trace_gen.m"
        ll_backend__trace_gen__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 7)));
#line 811 "trace_gen.m"
        ll_backend__trace_gen__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 8)));
#line 811 "trace_gen.m"
        {
#line 811 "trace_gen.m"
          ll_backend__trace_gen__V_43_43 = libs__trace_params__eff_trace_needs_port_6_f_0(ll_backend__trace_gen__ModuleInfo_27, ll_backend__trace_gen__PredInfo_28, ll_backend__trace_gen__ProcInfo_29, ll_backend__trace_gen__V_44_44, ll_backend__trace_gen__V_52_52, ll_backend__trace_gen__Port_26);
        }
#line 813 "trace_gen.m"
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_43_43 == (MR_Integer) 1);
#line 828 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 815 "trace_gen.m"
          {
#line 815 "trace_gen.m"
            MR_Word ll_backend__trace_gen__PreDeaths_30;
#line 815 "trace_gen.m"
            MR_Word ll_backend__trace_gen__Context_31;
#line 815 "trace_gen.m"
            MR_Word ll_backend__trace_gen__HideEvent_32;
#line 815 "trace_gen.m"
            MR_Word ll_backend__trace_gen__GoalPath_33;
#line 815 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_47_47;
#line 826 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_34_34;
#line 826 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_35_35;

#line 815 "trace_gen.m"
            {
#line 815 "trace_gen.m"
              hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ll_backend__trace_gen__GoalInfo_16, &ll_backend__trace_gen__PreDeaths_30);
            }
#line 816 "trace_gen.m"
            {
#line 816 "trace_gen.m"
              ll_backend__trace_gen__Context_31 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__trace_gen__GoalInfo_16);
            }
#line 818 "trace_gen.m"
            {
#line 818 "trace_gen.m"
              ll_backend__trace_gen__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(ll_backend__trace_gen__OutsideGoalInfo_9, (MR_Integer) 8);
            }
#line 822 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 821 "trace_gen.m"
              ll_backend__trace_gen__HideEvent_32 = (MR_Integer) 1;
#line 822 "trace_gen.m"
            else
#line 823 "trace_gen.m"
              ll_backend__trace_gen__HideEvent_32 = (MR_Integer) 0;
#line 825 "trace_gen.m"
            {
#line 825 "trace_gen.m"
              ll_backend__trace_gen__GoalPath_33 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__trace_gen__ContainingGoalMap_18, ll_backend__trace_gen__GoalId_17);
            }
#line 826 "trace_gen.m"
            {
#line 826 "trace_gen.m"
              ll_backend__trace_gen__V_47_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 826 "trace_gen.m"
              MR_hl_field(MR_mktag(2), ll_backend__trace_gen__V_47_47, 0) = ((MR_Box) (ll_backend__trace_gen__GoalPath_33));
#line 826 "trace_gen.m"
              MR_hl_field(MR_mktag(2), ll_backend__trace_gen__V_47_47, 1) = ((MR_Box) (ll_backend__trace_gen__PreDeaths_30));
#line 826 "trace_gen.m"
            }
#line 826 "trace_gen.m"
            {
#line 826 "trace_gen.m"
              ll_backend__trace_gen__generate_event_code_13_p_0(ll_backend__trace_gen__Port_26, ll_backend__trace_gen__V_47_47, ll_backend__trace_gen__MaybeTraceInfo_13, ll_backend__trace_gen__Context_31, ll_backend__trace_gen__HideEvent_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__trace_gen__V_34_34, &ll_backend__trace_gen__V_35_35, ll_backend__trace_gen__Code_10, ll_backend__trace_gen__STATE_VARIABLE_CI_0_36, ll_backend__trace_gen__STATE_VARIABLE_CI_37, ll_backend__trace_gen__STATE_VARIABLE_CLD_0_38, ll_backend__trace_gen__STATE_VARIABLE_CLD_39);
            }
#line 815 "trace_gen.m"
          }
#line 828 "trace_gen.m"
        else
#line 829 "trace_gen.m"
          {
#line 829 "trace_gen.m"
            {
#line 829 "trace_gen.m"
              *ll_backend__trace_gen__Code_10 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
#line 829 "trace_gen.m"
            *ll_backend__trace_gen__STATE_VARIABLE_CLD_39 = ll_backend__trace_gen__STATE_VARIABLE_CLD_0_38;
#line 829 "trace_gen.m"
            *ll_backend__trace_gen__STATE_VARIABLE_CI_37 = ll_backend__trace_gen__STATE_VARIABLE_CI_0_36;
#line 829 "trace_gen.m"
          }
#line 772 "trace_gen.m"
      }
#line 769 "trace_gen.m"
  }
#line 181 "trace_gen.m"
}

#line 175 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__trace_prepare_for_call_2_p_0(
#line 175 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CI_3,
#line 175 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__TraceCode_4)
#line 175 "trace_gen.m"
{
#line 744 "trace_gen.m"
  {
#line 744 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 744 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTraceInfo_5;
#line 744 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CodeModel_6;

#line 745 "trace_gen.m"
    {
#line 745 "trace_gen.m"
      ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__trace_gen__CI_3, &ll_backend__trace_gen__MaybeTraceInfo_5);
    }
#line 746 "trace_gen.m"
    {
#line 746 "trace_gen.m"
      ll_backend__trace_gen__CodeModel_6 = ll_backend__code_info__get_proc_model_1_f_0(ll_backend__trace_gen__CI_3);
    }
#line 764 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeTraceInfo_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 765 "trace_gen.m"
      {
#line 766 "trace_gen.m"
        {
#line 766 "trace_gen.m"
          *ll_backend__trace_gen__TraceCode_4 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 765 "trace_gen.m"
      }
#line 764 "trace_gen.m"
    else
#line 748 "trace_gen.m"
      {
#line 748 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TraceInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTraceInfo_5, (MR_Integer) 0)));
#line 748 "trace_gen.m"
        MR_Word ll_backend__trace_gen__MaybeFromFullSlot_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 2)));
#line 748 "trace_gen.m"
        MR_Word ll_backend__trace_gen__CallDepthLval_9;
#line 748 "trace_gen.m"
        MR_String ll_backend__trace_gen__CallDepthStr_10;
#line 748 "trace_gen.m"
        MR_String ll_backend__trace_gen__MacroStr_12;
#line 748 "trace_gen.m"
        MR_String ll_backend__trace_gen__ResetStmt_13;
#line 748 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_14_14;
#line 748 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_16_16;
#line 748 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_18_18;
#line 748 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_19_19;
#line 748 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_21_21;
#line 748 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_22_22;
#line 749 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 0)));
#line 749 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 1)));
#line 749 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 3)));
#line 749 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 4)));
#line 749 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 5)));
#line 749 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 6)));
#line 749 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 7)));
#line 749 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 8)));

#line 1331 "trace_gen.m"
#line 1331 "trace_gen.m"
        switch (ll_backend__trace_gen__CodeModel_6) {
#line 1331 "trace_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1331 "trace_gen.m"
          case (MR_Integer) 0:
#line 1331 "trace_gen.m"
          case (MR_Integer) 1:
#line 1336 "trace_gen.m"
            {
#line 1337 "trace_gen.m"
              ll_backend__trace_gen__CallDepthLval_9 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[14]);
#line 1336 "trace_gen.m"
            }
#line 1331 "trace_gen.m"
            break;
#line 1331 "trace_gen.m"
          case (MR_Integer) 2:
#line 1331 "trace_gen.m"
            {
#line 1332 "trace_gen.m"
              ll_backend__trace_gen__CallDepthLval_9 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[15]);
#line 1331 "trace_gen.m"
            }
#line 1331 "trace_gen.m"
            break;
#line 1331 "trace_gen.m"
        }
#line 751 "trace_gen.m"
        {
#line 751 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallDepthLval_9, &ll_backend__trace_gen__CallDepthStr_10);
        }
#line 755 "trace_gen.m"
        if ((ll_backend__trace_gen__MaybeFromFullSlot_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 757 "trace_gen.m"
          ll_backend__trace_gen__MacroStr_12 = (MR_String) "MR_trace_reset_depth_from_full";
#line 755 "trace_gen.m"
        else
#line 754 "trace_gen.m"
          ll_backend__trace_gen__MacroStr_12 = (MR_String) "MR_trace_reset_depth_from_shallow";
#line 759 "trace_gen.m"
        {
#line 759 "trace_gen.m"
          ll_backend__trace_gen__V_16_16 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallDepthStr_10, (MR_String) ");\n");
        }
#line 759 "trace_gen.m"
        {
#line 759 "trace_gen.m"
          ll_backend__trace_gen__V_14_14 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__trace_gen__V_16_16);
        }
#line 759 "trace_gen.m"
        {
#line 759 "trace_gen.m"
          ll_backend__trace_gen__ResetStmt_13 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__MacroStr_12, ll_backend__trace_gen__V_14_14);
        }
#line 762 "trace_gen.m"
        {
#line 762 "trace_gen.m"
          ll_backend__trace_gen__V_22_22 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        }
#line 762 "trace_gen.m"
        {
#line 762 "trace_gen.m"
          ll_backend__trace_gen__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 762 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_21_21, 0) = ((MR_Box) (ll_backend__trace_gen__V_22_22));
#line 762 "trace_gen.m"
        }
#line 761 "trace_gen.m"
        {
#line 761 "trace_gen.m"
          ll_backend__trace_gen__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 761 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 761 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_19_19, 1) = ((MR_Box) ((MR_Integer) 1));
#line 761 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_19_19, 2) = ((MR_Box) (ll_backend__trace_gen__V_21_21));
#line 761 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_19_19, 3) = ((MR_Box) (ll_backend__trace_gen__ResetStmt_13));
#line 761 "trace_gen.m"
        }
#line 761 "trace_gen.m"
        {
#line 761 "trace_gen.m"
          ll_backend__trace_gen__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 761 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_18_18, 0) = ((MR_Box) (ll_backend__trace_gen__V_19_19));
#line 761 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_18_18, 1) = ((MR_Box) ((MR_String) ""));
#line 761 "trace_gen.m"
        }
#line 760 "trace_gen.m"
        {
#line 760 "trace_gen.m"
          *ll_backend__trace_gen__TraceCode_4 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__trace_gen__V_18_18)));
        }
#line 748 "trace_gen.m"
      }
#line 744 "trace_gen.m"
  }
#line 175 "trace_gen.m"
}

#line 170 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__generate_slot_fill_code_3_p_0(
#line 170 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CI_4,
#line 170 "trace_gen.m"
  MR_Word ll_backend__trace_gen__TraceInfo_5,
#line 170 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__TraceCode_6)
#line 170 "trace_gen.m"
{
#line 609 "trace_gen.m"
  {
#line 609 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 609 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TypeCtorInfo_233_233;
#line 609 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TypeCtorInfo_234_234;
#line 609 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CodeModel_7;
#line 609 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeFromFullSlot_8;
#line 609 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeIoSeqSlot_9;
#line 609 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTrailLvals_10;
#line 609 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeMaxfrLval_11;
#line 609 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeCallTableLval_12;
#line 609 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTailRecInfo_13;
#line 609 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeRedoLabel_14;
#line 609 "trace_gen.m"
    MR_Word ll_backend__trace_gen__EventNumLval_15;
#line 609 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CallNumLval_16;
#line 609 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CallDepthLval_17;
#line 609 "trace_gen.m"
    MR_String ll_backend__trace_gen__EventNumStr_18;
#line 609 "trace_gen.m"
    MR_String ll_backend__trace_gen__CallNumStr_19;
#line 609 "trace_gen.m"
    MR_String ll_backend__trace_gen__CallDepthStr_20;
#line 609 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeLayoutLabel_25;
#line 609 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeHashDefLabel_26;
#line 609 "trace_gen.m"
    MR_String ll_backend__trace_gen__TraceStmt1_35;
#line 609 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceComponents1_36;
#line 609 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceCode1_37;
#line 609 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceCode2_39;
#line 609 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceCode3_45;
#line 609 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceCode4_50;
#line 609 "trace_gen.m"
    MR_String ll_backend__trace_gen__STATE_VARIABLE_CodeStr_51_51;
#line 609 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_53_53;
#line 609 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_54_54;
#line 609 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_56_56;
#line 609 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_57_57;
#line 609 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_59_59;
#line 609 "trace_gen.m"
    MR_String ll_backend__trace_gen__STATE_VARIABLE_CodeStr_61_61;
#line 609 "trace_gen.m"
    MR_String ll_backend__trace_gen__STATE_VARIABLE_CodeStr_66_66;
#line 609 "trace_gen.m"
    MR_String ll_backend__trace_gen__STATE_VARIABLE_CodeStr_72_72;
#line 609 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_98_98;
#line 609 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_101_101;
#line 609 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_102_102;
#line 609 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_104_104;
#line 609 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_105_105;
#line 609 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_175_175;
#line 609 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_176_176;
#line 611 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_177_177;
#line 611 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_178_178;

#line 610 "trace_gen.m"
    {
#line 610 "trace_gen.m"
      ll_backend__trace_gen__CodeModel_7 = ll_backend__code_info__get_proc_model_1_f_0(ll_backend__trace_gen__CI_4);
    }
#line 611 "trace_gen.m"
    ll_backend__trace_gen__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 0)));
#line 611 "trace_gen.m"
    ll_backend__trace_gen__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 1)));
#line 611 "trace_gen.m"
    ll_backend__trace_gen__MaybeFromFullSlot_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 2)));
#line 611 "trace_gen.m"
    ll_backend__trace_gen__MaybeIoSeqSlot_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 3)));
#line 611 "trace_gen.m"
    ll_backend__trace_gen__MaybeTrailLvals_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 4)));
#line 611 "trace_gen.m"
    ll_backend__trace_gen__MaybeMaxfrLval_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 5)));
#line 611 "trace_gen.m"
    ll_backend__trace_gen__MaybeCallTableLval_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 6)));
#line 611 "trace_gen.m"
    ll_backend__trace_gen__MaybeTailRecInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 7)));
#line 611 "trace_gen.m"
    ll_backend__trace_gen__MaybeRedoLabel_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 8)));
#line 618 "trace_gen.m"
    {
#line 618 "trace_gen.m"
      ll_backend__trace_gen__event_num_slot_2_p_0(ll_backend__trace_gen__CodeModel_7, &ll_backend__trace_gen__EventNumLval_15);
    }
#line 619 "trace_gen.m"
    {
#line 619 "trace_gen.m"
      ll_backend__trace_gen__call_num_slot_2_p_0(ll_backend__trace_gen__CodeModel_7, &ll_backend__trace_gen__CallNumLval_16);
    }
#line 620 "trace_gen.m"
    {
#line 620 "trace_gen.m"
      ll_backend__trace_gen__call_depth_slot_2_p_0(ll_backend__trace_gen__CodeModel_7, &ll_backend__trace_gen__CallDepthLval_17);
    }
#line 621 "trace_gen.m"
    {
#line 621 "trace_gen.m"
      ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__EventNumLval_15, &ll_backend__trace_gen__EventNumStr_18);
    }
#line 622 "trace_gen.m"
    {
#line 622 "trace_gen.m"
      ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallNumLval_16, &ll_backend__trace_gen__CallNumStr_19);
    }
#line 623 "trace_gen.m"
    {
#line 623 "trace_gen.m"
      ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallDepthLval_17, &ll_backend__trace_gen__CallDepthStr_20);
    }
#line 627 "trace_gen.m"
    {
#line 627 "trace_gen.m"
      ll_backend__trace_gen__V_59_59 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallDepthStr_20, (MR_String) ");\n");
    }
#line 627 "trace_gen.m"
    {
#line 627 "trace_gen.m"
      ll_backend__trace_gen__V_57_57 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__trace_gen__V_59_59);
    }
#line 627 "trace_gen.m"
    {
#line 627 "trace_gen.m"
      ll_backend__trace_gen__V_56_56 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallNumStr_19, ll_backend__trace_gen__V_57_57);
    }
#line 626 "trace_gen.m"
    {
#line 626 "trace_gen.m"
      ll_backend__trace_gen__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__trace_gen__V_56_56);
    }
#line 626 "trace_gen.m"
    {
#line 626 "trace_gen.m"
      ll_backend__trace_gen__V_53_53 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__EventNumStr_18, ll_backend__trace_gen__V_54_54);
    }
#line 626 "trace_gen.m"
    {
#line 626 "trace_gen.m"
      ll_backend__trace_gen__STATE_VARIABLE_CodeStr_51_51 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_trace_fill_std_slots(", ll_backend__trace_gen__V_53_53);
    }
#line 637 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeRedoLabel_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 638 "trace_gen.m"
      {
#line 639 "trace_gen.m"
        ll_backend__trace_gen__MaybeLayoutLabel_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 640 "trace_gen.m"
        ll_backend__trace_gen__MaybeHashDefLabel_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 638 "trace_gen.m"
        ll_backend__trace_gen__STATE_VARIABLE_CodeStr_61_61 = ll_backend__trace_gen__STATE_VARIABLE_CodeStr_51_51;
#line 638 "trace_gen.m"
      }
#line 637 "trace_gen.m"
    else
#line 630 "trace_gen.m"
      {
#line 630 "trace_gen.m"
        MR_Word ll_backend__trace_gen__RedoLayoutLval_23;
#line 630 "trace_gen.m"
        MR_String ll_backend__trace_gen__RedoLayoutStr_24;
#line 630 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_62_62;
#line 630 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_64_64;

#line 631 "trace_gen.m"
        {
#line 631 "trace_gen.m"
          ll_backend__trace_gen__redo_layout_slot_2_p_0(ll_backend__trace_gen__CodeModel_7, &ll_backend__trace_gen__RedoLayoutLval_23);
        }
#line 632 "trace_gen.m"
        {
#line 632 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__RedoLayoutLval_23, &ll_backend__trace_gen__RedoLayoutStr_24);
        }
#line 633 "trace_gen.m"
        {
#line 633 "trace_gen.m"
          ll_backend__trace_gen__V_64_64 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__RedoLayoutStr_24, (MR_String) " = (MR_Word) (const MR_Word *) MR_HASH_DEF_LABEL_LAYOUT;\n");
        }
#line 633 "trace_gen.m"
        {
#line 633 "trace_gen.m"
          ll_backend__trace_gen__V_62_62 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__trace_gen__V_64_64);
        }
#line 633 "trace_gen.m"
        {
#line 633 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_CodeStr_61_61 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__STATE_VARIABLE_CodeStr_51_51, ll_backend__trace_gen__V_62_62);
        }
#line 635 "trace_gen.m"
        ll_backend__trace_gen__MaybeLayoutLabel_25 = ll_backend__trace_gen__MaybeRedoLabel_14;
#line 636 "trace_gen.m"
        ll_backend__trace_gen__MaybeHashDefLabel_26 = ll_backend__trace_gen__MaybeRedoLabel_14;
#line 630 "trace_gen.m"
      }
#line 649 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeIoSeqSlot_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 650 "trace_gen.m"
      ll_backend__trace_gen__STATE_VARIABLE_CodeStr_66_66 = ll_backend__trace_gen__STATE_VARIABLE_CodeStr_61_61;
#line 649 "trace_gen.m"
    else
#line 645 "trace_gen.m"
      {
#line 645 "trace_gen.m"
        MR_Word ll_backend__trace_gen__IoSeqLval_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeIoSeqSlot_9, (MR_Integer) 0)));
#line 645 "trace_gen.m"
        MR_String ll_backend__trace_gen__IoSeqStr_28;
#line 645 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_67_67;
#line 645 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_69_69;

#line 646 "trace_gen.m"
        {
#line 646 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__IoSeqLval_27, &ll_backend__trace_gen__IoSeqStr_28);
        }
#line 648 "trace_gen.m"
        {
#line 648 "trace_gen.m"
          ll_backend__trace_gen__V_69_69 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__IoSeqStr_28, (MR_String) " = MR_io_tabling_counter;\n");
        }
#line 648 "trace_gen.m"
        {
#line 648 "trace_gen.m"
          ll_backend__trace_gen__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__trace_gen__V_69_69);
        }
#line 647 "trace_gen.m"
        {
#line 647 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_CodeStr_66_66 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__STATE_VARIABLE_CodeStr_61_61, ll_backend__trace_gen__V_67_67);
        }
#line 645 "trace_gen.m"
      }
#line 664 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeTrailLvals_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 665 "trace_gen.m"
      ll_backend__trace_gen__STATE_VARIABLE_CodeStr_72_72 = ll_backend__trace_gen__STATE_VARIABLE_CodeStr_66_66;
#line 664 "trace_gen.m"
    else
#line 658 "trace_gen.m"
      {
#line 658 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TrailLval_29;
#line 658 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TicketLval_30;
#line 658 "trace_gen.m"
        MR_String ll_backend__trace_gen__TrailLvalStr_31;
#line 658 "trace_gen.m"
        MR_String ll_backend__trace_gen__TicketLvalStr_32;
#line 658 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTrailLvals_10, (MR_Integer) 0)));
#line 658 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_73_73;
#line 658 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_75_75;
#line 658 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_76_76;
#line 658 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_78_78;
#line 658 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_80_80;

#line 658 "trace_gen.m"
        ll_backend__trace_gen__TrailLval_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_71_71, (MR_Integer) 0)));
#line 658 "trace_gen.m"
        ll_backend__trace_gen__TicketLval_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_71_71, (MR_Integer) 1)));
#line 659 "trace_gen.m"
        {
#line 659 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__TrailLval_29, &ll_backend__trace_gen__TrailLvalStr_31);
        }
#line 660 "trace_gen.m"
        {
#line 660 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__TicketLval_30, &ll_backend__trace_gen__TicketLvalStr_32);
        }
#line 663 "trace_gen.m"
        {
#line 663 "trace_gen.m"
          ll_backend__trace_gen__V_80_80 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TrailLvalStr_31, (MR_String) ");\n");
        }
#line 663 "trace_gen.m"
        {
#line 663 "trace_gen.m"
          ll_backend__trace_gen__V_78_78 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_store_ticket(", ll_backend__trace_gen__V_80_80);
        }
#line 662 "trace_gen.m"
        {
#line 662 "trace_gen.m"
          ll_backend__trace_gen__V_76_76 = mercury__string__f_43_43_2_f_0((MR_String) ");\n", ll_backend__trace_gen__V_78_78);
        }
#line 662 "trace_gen.m"
        {
#line 662 "trace_gen.m"
          ll_backend__trace_gen__V_75_75 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TicketLvalStr_32, ll_backend__trace_gen__V_76_76);
        }
#line 662 "trace_gen.m"
        {
#line 662 "trace_gen.m"
          ll_backend__trace_gen__V_73_73 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_mark_ticket_stack(", ll_backend__trace_gen__V_75_75);
        }
#line 661 "trace_gen.m"
        {
#line 661 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_CodeStr_72_72 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__STATE_VARIABLE_CodeStr_66_66, ll_backend__trace_gen__V_73_73);
        }
#line 658 "trace_gen.m"
      }
#line 678 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeFromFullSlot_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 679 "trace_gen.m"
      ll_backend__trace_gen__TraceStmt1_35 = ll_backend__trace_gen__STATE_VARIABLE_CodeStr_72_72;
#line 678 "trace_gen.m"
    else
#line 669 "trace_gen.m"
      {
#line 669 "trace_gen.m"
        MR_Word ll_backend__trace_gen__CallFromFullSlot_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeFromFullSlot_8, (MR_Integer) 0)));
#line 669 "trace_gen.m"
        MR_String ll_backend__trace_gen__CallFromFullSlotStr_34;
#line 669 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_84_84;
#line 669 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_85_85;
#line 669 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_87_87;
#line 669 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_89_89;
#line 669 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_90_90;
#line 669 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_92_92;
#line 669 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_94_94;

#line 670 "trace_gen.m"
        {
#line 670 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallFromFullSlot_33, &ll_backend__trace_gen__CallFromFullSlotStr_34);
        }
#line 676 "trace_gen.m"
        {
#line 676 "trace_gen.m"
          ll_backend__trace_gen__V_94_94 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallDepthStr_20, (MR_String) " = MR_trace_call_depth;\n\t\t}\n");
        }
#line 676 "trace_gen.m"
        {
#line 676 "trace_gen.m"
          ll_backend__trace_gen__V_92_92 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\t", ll_backend__trace_gen__V_94_94);
        }
#line 675 "trace_gen.m"
        {
#line 675 "trace_gen.m"
          ll_backend__trace_gen__V_90_90 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t} else {\n", ll_backend__trace_gen__V_92_92);
        }
#line 674 "trace_gen.m"
        {
#line 674 "trace_gen.m"
          ll_backend__trace_gen__V_89_89 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__STATE_VARIABLE_CodeStr_72_72, ll_backend__trace_gen__V_90_90);
        }
#line 673 "trace_gen.m"
        {
#line 673 "trace_gen.m"
          ll_backend__trace_gen__V_87_87 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tif (MR_trace_from_full) {\n", ll_backend__trace_gen__V_89_89);
        }
#line 672 "trace_gen.m"
        {
#line 672 "trace_gen.m"
          ll_backend__trace_gen__V_85_85 = mercury__string__f_43_43_2_f_0((MR_String) " = MR_trace_from_full;\n", ll_backend__trace_gen__V_87_87);
        }
#line 672 "trace_gen.m"
        {
#line 672 "trace_gen.m"
          ll_backend__trace_gen__V_84_84 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallFromFullSlotStr_34, ll_backend__trace_gen__V_85_85);
        }
#line 672 "trace_gen.m"
        {
#line 672 "trace_gen.m"
          ll_backend__trace_gen__TraceStmt1_35 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__trace_gen__V_84_84);
        }
#line 669 "trace_gen.m"
      }
#line 8022 "ll_backend.trace_gen.c"
    ll_backend__trace_gen__TypeCtorInfo_233_233 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 684 "trace_gen.m"
    {
#line 684 "trace_gen.m"
      ll_backend__trace_gen__V_102_102 = mercury__set__init_0_f_0(ll_backend__trace_gen__TypeCtorInfo_233_233);
    }
#line 684 "trace_gen.m"
    {
#line 684 "trace_gen.m"
      ll_backend__trace_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 684 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_101_101, 0) = ((MR_Box) (ll_backend__trace_gen__V_102_102));
#line 684 "trace_gen.m"
    }
#line 683 "trace_gen.m"
    {
#line 683 "trace_gen.m"
      ll_backend__trace_gen__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 683 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 683 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 1) = ((MR_Box) ((MR_Integer) 1));
#line 683 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 2) = ((MR_Box) ((MR_Integer) 1));
#line 683 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 3) = ((MR_Box) (ll_backend__trace_gen__V_101_101));
#line 683 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 4) = ((MR_Box) (ll_backend__trace_gen__TraceStmt1_35));
#line 683 "trace_gen.m"
    }
#line 684 "trace_gen.m"
    {
#line 684 "trace_gen.m"
      ll_backend__trace_gen__TraceComponents1_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 684 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents1_36, 0) = ((MR_Box) (ll_backend__trace_gen__V_98_98));
#line 684 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents1_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 684 "trace_gen.m"
    }
#line 8063 "ll_backend.trace_gen.c"
    ll_backend__trace_gen__TypeCtorInfo_234_234 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 686 "trace_gen.m"
    {
#line 686 "trace_gen.m"
      ll_backend__trace_gen__V_105_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 686 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 686 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 686 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 2) = ((MR_Box) (ll_backend__trace_gen__TraceComponents1_36));
#line 686 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 3) = ((MR_Box) ((MR_Integer) 1));
#line 686 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 686 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 686 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 6) = ((MR_Box) (ll_backend__trace_gen__MaybeLayoutLabel_25));
#line 686 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 686 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 8) = ((MR_Box) (ll_backend__trace_gen__MaybeHashDefLabel_26));
#line 686 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 9) = ((MR_Box) ((MR_Integer) 1));
#line 686 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 10) = ((MR_Box) ((MR_Integer) 1));
#line 686 "trace_gen.m"
    }
#line 686 "trace_gen.m"
    {
#line 686 "trace_gen.m"
      ll_backend__trace_gen__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 686 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_104_104, 0) = ((MR_Box) (ll_backend__trace_gen__V_105_105));
#line 686 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_104_104, 1) = ((MR_Box) ((MR_String) ""));
#line 686 "trace_gen.m"
    }
#line 685 "trace_gen.m"
    {
#line 685 "trace_gen.m"
      ll_backend__trace_gen__TraceCode1_37 = mercury__cord__singleton_1_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ((MR_Box) (ll_backend__trace_gen__V_104_104)));
    }
#line 696 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeMaxfrLval_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 698 "trace_gen.m"
      {
#line 698 "trace_gen.m"
        ll_backend__trace_gen__TraceCode2_39 = mercury__cord__empty_0_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234);
      }
#line 696 "trace_gen.m"
    else
#line 692 "trace_gen.m"
      {
#line 692 "trace_gen.m"
        MR_Word ll_backend__trace_gen__MaxfrLval_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeMaxfrLval_11, (MR_Integer) 0)));
#line 692 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_114_114;
#line 692 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_115_115;

#line 694 "trace_gen.m"
        {
#line 694 "trace_gen.m"
          ll_backend__trace_gen__V_115_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 694 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_115_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 694 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_115_115, 1) = ((MR_Box) (ll_backend__trace_gen__MaxfrLval_38));
#line 694 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_115_115, 2) = ((MR_Box) (&ll_backend__trace_gen_scalar_common_3[3]));
#line 694 "trace_gen.m"
        }
#line 694 "trace_gen.m"
        {
#line 694 "trace_gen.m"
          ll_backend__trace_gen__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 694 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_114_114, 0) = ((MR_Box) (ll_backend__trace_gen__V_115_115));
#line 694 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_114_114, 1) = ((MR_Box) ((MR_String) "save initial maxfr"));
#line 694 "trace_gen.m"
        }
#line 693 "trace_gen.m"
        {
#line 693 "trace_gen.m"
          ll_backend__trace_gen__TraceCode2_39 = mercury__cord__singleton_1_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ((MR_Box) (ll_backend__trace_gen__V_114_114)));
        }
#line 692 "trace_gen.m"
      }
#line 721 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeTailRecInfo_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 723 "trace_gen.m"
      {
#line 723 "trace_gen.m"
        ll_backend__trace_gen__TraceCode3_45 = mercury__cord__empty_0_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234);
      }
#line 721 "trace_gen.m"
    else
#line 702 "trace_gen.m"
      {
#line 702 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TailRecLval_40;
#line 702 "trace_gen.m"
        MR_String ll_backend__trace_gen__TailRecLvalStr_42;
#line 702 "trace_gen.m"
        MR_String ll_backend__trace_gen__TraceStmt3_43;
#line 702 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TraceComponents3_44;
#line 702 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTailRecInfo_13, (MR_Integer) 0)));
#line 702 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_121_121;
#line 702 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_123_123;
#line 702 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_124_124;
#line 702 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_126_126;
#line 702 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_128_128;
#line 702 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_130_130;
#line 702 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_132_132;
#line 702 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_136_136;
#line 702 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_139_139;
#line 702 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_140_140;
#line 702 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_142_142;
#line 702 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_143_143;
#line 702 "trace_gen.m"
        MR_Word ll_backend__trace_gen___TailRecLabel_41;

#line 702 "trace_gen.m"
        ll_backend__trace_gen__TailRecLval_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_119_119, (MR_Integer) 0)));
#line 702 "trace_gen.m"
        ll_backend__trace_gen___TailRecLabel_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_119_119, (MR_Integer) 1)));
#line 703 "trace_gen.m"
        {
#line 703 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__TailRecLval_40, &ll_backend__trace_gen__TailRecLvalStr_42);
        }
#line 710 "trace_gen.m"
        {
#line 710 "trace_gen.m"
          ll_backend__trace_gen__V_132_132 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TailRecLvalStr_42, (MR_String) " = 0;\n\t\t}");
        }
#line 710 "trace_gen.m"
        {
#line 710 "trace_gen.m"
          ll_backend__trace_gen__V_130_130 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\t", ll_backend__trace_gen__V_132_132);
        }
#line 709 "trace_gen.m"
        {
#line 709 "trace_gen.m"
          ll_backend__trace_gen__V_128_128 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t} else {", ll_backend__trace_gen__V_130_130);
        }
#line 708 "trace_gen.m"
        {
#line 708 "trace_gen.m"
          ll_backend__trace_gen__V_126_126 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\tMR_trace_tailrec_have_reused_frames = MR_FALSE;\n", ll_backend__trace_gen__V_128_128);
        }
#line 707 "trace_gen.m"
        {
#line 707 "trace_gen.m"
          ll_backend__trace_gen__V_124_124 = mercury__string__f_43_43_2_f_0((MR_String) " = MR_trace_tailrec_num_reused_frames;\n", ll_backend__trace_gen__V_126_126);
        }
#line 706 "trace_gen.m"
        {
#line 706 "trace_gen.m"
          ll_backend__trace_gen__V_123_123 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TailRecLvalStr_42, ll_backend__trace_gen__V_124_124);
        }
#line 706 "trace_gen.m"
        {
#line 706 "trace_gen.m"
          ll_backend__trace_gen__V_121_121 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\t", ll_backend__trace_gen__V_123_123);
        }
#line 705 "trace_gen.m"
        {
#line 705 "trace_gen.m"
          ll_backend__trace_gen__TraceStmt3_43 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tif (MR_trace_tailrec_have_reused_frames) {\n", ll_backend__trace_gen__V_121_121);
        }
#line 713 "trace_gen.m"
        {
#line 713 "trace_gen.m"
          ll_backend__trace_gen__V_140_140 = mercury__set__init_0_f_0(ll_backend__trace_gen__TypeCtorInfo_233_233);
        }
#line 713 "trace_gen.m"
        {
#line 713 "trace_gen.m"
          ll_backend__trace_gen__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 713 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_139_139, 0) = ((MR_Box) (ll_backend__trace_gen__V_140_140));
#line 713 "trace_gen.m"
        }
#line 712 "trace_gen.m"
        {
#line 712 "trace_gen.m"
          ll_backend__trace_gen__V_136_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 712 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_136_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 712 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_136_136, 1) = ((MR_Box) ((MR_Integer) 1));
#line 712 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_136_136, 2) = ((MR_Box) ((MR_Integer) 1));
#line 712 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_136_136, 3) = ((MR_Box) (ll_backend__trace_gen__V_139_139));
#line 712 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_136_136, 4) = ((MR_Box) (ll_backend__trace_gen__TraceStmt3_43));
#line 712 "trace_gen.m"
        }
#line 714 "trace_gen.m"
        {
#line 714 "trace_gen.m"
          ll_backend__trace_gen__TraceComponents3_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 714 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents3_44, 0) = ((MR_Box) (ll_backend__trace_gen__V_136_136));
#line 714 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents3_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 714 "trace_gen.m"
        }
#line 716 "trace_gen.m"
        {
#line 716 "trace_gen.m"
          ll_backend__trace_gen__V_143_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 716 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 716 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 716 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 2) = ((MR_Box) (ll_backend__trace_gen__TraceComponents3_44));
#line 716 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 3) = ((MR_Box) ((MR_Integer) 1));
#line 716 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 716 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 716 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 716 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 716 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 716 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 9) = ((MR_Box) ((MR_Integer) 1));
#line 716 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 10) = ((MR_Box) ((MR_Integer) 1));
#line 716 "trace_gen.m"
        }
#line 716 "trace_gen.m"
        {
#line 716 "trace_gen.m"
          ll_backend__trace_gen__V_142_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 716 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_142_142, 0) = ((MR_Box) (ll_backend__trace_gen__V_143_143));
#line 716 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_142_142, 1) = ((MR_Box) ((MR_String) "initialize tail recursion count"));
#line 716 "trace_gen.m"
        }
#line 715 "trace_gen.m"
        {
#line 715 "trace_gen.m"
          ll_backend__trace_gen__TraceCode3_45 = mercury__cord__singleton_1_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ((MR_Box) (ll_backend__trace_gen__V_142_142)));
        }
#line 702 "trace_gen.m"
      }
#line 738 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeCallTableLval_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 740 "trace_gen.m"
      {
#line 740 "trace_gen.m"
        ll_backend__trace_gen__TraceCode4_50 = mercury__cord__empty_0_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234);
      }
#line 738 "trace_gen.m"
    else
#line 727 "trace_gen.m"
      {
#line 727 "trace_gen.m"
        MR_Word ll_backend__trace_gen__CallTableLval_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeCallTableLval_12, (MR_Integer) 0)));
#line 727 "trace_gen.m"
        MR_String ll_backend__trace_gen__CallTableLvalStr_47;
#line 727 "trace_gen.m"
        MR_String ll_backend__trace_gen__TraceStmt4_48;
#line 727 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TraceComponents4_49;
#line 727 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_155_155;
#line 727 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_157_157;
#line 727 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_160_160;
#line 727 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_161_161;
#line 727 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_163_163;
#line 727 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_164_164;

#line 728 "trace_gen.m"
        {
#line 728 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallTableLval_46, &ll_backend__trace_gen__CallTableLvalStr_47);
        }
#line 729 "trace_gen.m"
        {
#line 729 "trace_gen.m"
          ll_backend__trace_gen__V_155_155 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallTableLvalStr_47, (MR_String) " = 0;\n");
        }
#line 729 "trace_gen.m"
        {
#line 729 "trace_gen.m"
          ll_backend__trace_gen__TraceStmt4_48 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__trace_gen__V_155_155);
        }
#line 731 "trace_gen.m"
        {
#line 731 "trace_gen.m"
          ll_backend__trace_gen__V_161_161 = mercury__set__init_0_f_0(ll_backend__trace_gen__TypeCtorInfo_233_233);
        }
#line 731 "trace_gen.m"
        {
#line 731 "trace_gen.m"
          ll_backend__trace_gen__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 731 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_160_160, 0) = ((MR_Box) (ll_backend__trace_gen__V_161_161));
#line 731 "trace_gen.m"
        }
#line 730 "trace_gen.m"
        {
#line 730 "trace_gen.m"
          ll_backend__trace_gen__V_157_157 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 730 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_157_157, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 730 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_157_157, 1) = ((MR_Box) ((MR_Integer) 1));
#line 730 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_157_157, 2) = ((MR_Box) ((MR_Integer) 1));
#line 730 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_157_157, 3) = ((MR_Box) (ll_backend__trace_gen__V_160_160));
#line 730 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_157_157, 4) = ((MR_Box) (ll_backend__trace_gen__TraceStmt4_48));
#line 730 "trace_gen.m"
        }
#line 732 "trace_gen.m"
        {
#line 732 "trace_gen.m"
          ll_backend__trace_gen__TraceComponents4_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 732 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents4_49, 0) = ((MR_Box) (ll_backend__trace_gen__V_157_157));
#line 732 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents4_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 732 "trace_gen.m"
        }
#line 734 "trace_gen.m"
        {
#line 734 "trace_gen.m"
          ll_backend__trace_gen__V_164_164 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 734 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 734 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 734 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 2) = ((MR_Box) (ll_backend__trace_gen__TraceComponents4_49));
#line 734 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 3) = ((MR_Box) ((MR_Integer) 1));
#line 734 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 734 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 734 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 734 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 734 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 734 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 9) = ((MR_Box) ((MR_Integer) 1));
#line 734 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 10) = ((MR_Box) ((MR_Integer) 1));
#line 734 "trace_gen.m"
        }
#line 734 "trace_gen.m"
        {
#line 734 "trace_gen.m"
          ll_backend__trace_gen__V_163_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 734 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_163_163, 0) = ((MR_Box) (ll_backend__trace_gen__V_164_164));
#line 734 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_163_163, 1) = ((MR_Box) ((MR_String) ""));
#line 734 "trace_gen.m"
        }
#line 733 "trace_gen.m"
        {
#line 733 "trace_gen.m"
          ll_backend__trace_gen__TraceCode4_50 = mercury__cord__singleton_1_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ((MR_Box) (ll_backend__trace_gen__V_163_163)));
        }
#line 727 "trace_gen.m"
      }
#line 742 "trace_gen.m"
    {
#line 742 "trace_gen.m"
      ll_backend__trace_gen__V_176_176 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ll_backend__trace_gen__TraceCode3_45, ll_backend__trace_gen__TraceCode4_50);
    }
#line 742 "trace_gen.m"
    {
#line 742 "trace_gen.m"
      ll_backend__trace_gen__V_175_175 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ll_backend__trace_gen__TraceCode2_39, ll_backend__trace_gen__V_176_176);
    }
#line 742 "trace_gen.m"
    {
#line 742 "trace_gen.m"
      *ll_backend__trace_gen__TraceCode_6 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ll_backend__trace_gen__TraceCode1_37, ll_backend__trace_gen__V_175_175);
    }
#line 609 "trace_gen.m"
  }
#line 170 "trace_gen.m"
}

#line 164 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__trace_setup_9_p_0(
#line 164 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ModuleInfo_10,
#line 164 "trace_gen.m"
  MR_Word ll_backend__trace_gen__PredInfo_11,
#line 164 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ProcInfo_12,
#line 164 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Globals_13,
#line 164 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeTailRecLabel_14,
#line 164 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__TraceSlotInfo_15,
#line 164 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__TraceInfo_16,
#line 164 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_59,
#line 164 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_60)
#line 164 "trace_gen.m"
{
#line 493 "trace_gen.m"
  {
#line 493 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 493 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CodeModel_18;
#line 493 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceLevel_19;
#line 493 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceSuppress_20;
#line 493 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceTableIo_21;
#line 493 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceRedo_22;
#line 493 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeRedoLayoutLabel_25;
#line 493 "trace_gen.m"
    MR_Word ll_backend__trace_gen__HasFromFullSlot_26;
#line 493 "trace_gen.m"
    MR_Word ll_backend__trace_gen__StackId_27;
#line 493 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeFromFullSlot_29;
#line 493 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeFromFullSlotLval_31;
#line 493 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeIoSeqSlot_33;
#line 493 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeIoSeqLval_35;
#line 493 "trace_gen.m"
    MR_Word ll_backend__trace_gen__UseTrail_36;
#line 493 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTrailSlot_39;
#line 493 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTrailLvals_42;
#line 493 "trace_gen.m"
    MR_Word ll_backend__trace_gen__NeedsMaxfrSlot_43;
#line 493 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeMaxfrSlot_45;
#line 493 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeMaxfrLval_47;
#line 493 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTailRecSlot_50;
#line 493 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTailRecInfo_52;
#line 493 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeCallTableTip_53;
#line 493 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeCallTableSlot_56;
#line 493 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeCallTableLval_58;
#line 493 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__STATE_VARIABLE_NextSlot_64_64;
#line 493 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__STATE_VARIABLE_NextSlot_66_66;
#line 493 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__STATE_VARIABLE_NextSlot_68_68;
#line 493 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__STATE_VARIABLE_NextSlot_73_73;
#line 493 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__STATE_VARIABLE_NextSlot_75_75;
#line 493 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__STATE_VARIABLE_NextSlot_78_78;

#line 494 "trace_gen.m"
    {
#line 494 "trace_gen.m"
      ll_backend__trace_gen__CodeModel_18 = ll_backend__code_info__get_proc_model_1_f_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_59);
    }
#line 495 "trace_gen.m"
    {
#line 495 "trace_gen.m"
      libs__globals__get_trace_level_2_p_0(ll_backend__trace_gen__Globals_13, &ll_backend__trace_gen__TraceLevel_19);
    }
#line 496 "trace_gen.m"
    {
#line 496 "trace_gen.m"
      libs__globals__get_trace_suppress_2_p_0(ll_backend__trace_gen__Globals_13, &ll_backend__trace_gen__TraceSuppress_20);
    }
#line 497 "trace_gen.m"
    {
#line 497 "trace_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__trace_gen__Globals_13, (MR_Integer) 122, &ll_backend__trace_gen__TraceTableIo_21);
    }
#line 498 "trace_gen.m"
    {
#line 498 "trace_gen.m"
      ll_backend__trace_gen__TraceRedo_22 = libs__trace_params__eff_trace_needs_port_6_f_0(ll_backend__trace_gen__ModuleInfo_10, ll_backend__trace_gen__PredInfo_11, ll_backend__trace_gen__ProcInfo_12, ll_backend__trace_gen__TraceLevel_19, ll_backend__trace_gen__TraceSuppress_20, (MR_Integer) 2);
    }
#line 503 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__TraceRedo_22 == (MR_Integer) 1);
#line 503 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 504 "trace_gen.m"
      ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CodeModel_18 == (MR_Integer) 2);
#line 511 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 506 "trace_gen.m"
      {
#line 506 "trace_gen.m"
        MR_Word ll_backend__trace_gen__RedoLayoutLabel_24;

#line 506 "trace_gen.m"
        {
#line 506 "trace_gen.m"
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__trace_gen__RedoLayoutLabel_24, ll_backend__trace_gen__STATE_VARIABLE_CI_0_59, ll_backend__trace_gen__STATE_VARIABLE_CI_60);
        }
#line 507 "trace_gen.m"
        {
#line 507 "trace_gen.m"
          ll_backend__trace_gen__MaybeRedoLayoutLabel_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 507 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeRedoLayoutLabel_25, 0) = ((MR_Box) (ll_backend__trace_gen__RedoLayoutLabel_24));
#line 507 "trace_gen.m"
        }
#line 510 "trace_gen.m"
        ll_backend__trace_gen__STATE_VARIABLE_NextSlot_64_64 = (MR_Integer) 5;
#line 506 "trace_gen.m"
      }
#line 511 "trace_gen.m"
    else
#line 512 "trace_gen.m"
      {
#line 512 "trace_gen.m"
        ll_backend__trace_gen__MaybeRedoLayoutLabel_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 514 "trace_gen.m"
        ll_backend__trace_gen__STATE_VARIABLE_NextSlot_64_64 = (MR_Integer) 4;
#line 512 "trace_gen.m"
        *ll_backend__trace_gen__STATE_VARIABLE_CI_60 = ll_backend__trace_gen__STATE_VARIABLE_CI_0_59;
#line 512 "trace_gen.m"
      }
#line 517 "trace_gen.m"
    {
#line 517 "trace_gen.m"
      ll_backend__trace_gen__HasFromFullSlot_26 = libs__trace_params__eff_trace_level_needs_from_full_slot_4_f_0(ll_backend__trace_gen__ModuleInfo_10, ll_backend__trace_gen__PredInfo_11, ll_backend__trace_gen__ProcInfo_12, ll_backend__trace_gen__TraceLevel_19);
    }
#line 519 "trace_gen.m"
    {
#line 519 "trace_gen.m"
      ll_backend__trace_gen__StackId_27 = ll_backend__llds__code_model_to_main_stack_1_f_0(ll_backend__trace_gen__CodeModel_18);
    }
#line 527 "trace_gen.m"
#line 527 "trace_gen.m"
    switch (ll_backend__trace_gen__HasFromFullSlot_26) {
#line 527 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 527 "trace_gen.m"
      case (MR_Integer) 0:
#line 528 "trace_gen.m"
        {
#line 529 "trace_gen.m"
          ll_backend__trace_gen__MaybeFromFullSlot_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 530 "trace_gen.m"
          ll_backend__trace_gen__MaybeFromFullSlotLval_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 528 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_NextSlot_66_66 = ll_backend__trace_gen__STATE_VARIABLE_NextSlot_64_64;
#line 528 "trace_gen.m"
        }
#line 527 "trace_gen.m"
        break;
#line 527 "trace_gen.m"
      case (MR_Integer) 1:
#line 521 "trace_gen.m"
        {
#line 521 "trace_gen.m"
          MR_Word ll_backend__trace_gen__FromFullSlotLval_30;

#line 523 "trace_gen.m"
          {
#line 523 "trace_gen.m"
            ll_backend__trace_gen__MaybeFromFullSlot_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 523 "trace_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeFromFullSlot_29, 0) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_64_64));
#line 523 "trace_gen.m"
          }
#line 524 "trace_gen.m"
          {
#line 524 "trace_gen.m"
            ll_backend__trace_gen__FromFullSlotLval_30 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__STATE_VARIABLE_NextSlot_64_64);
          }
#line 525 "trace_gen.m"
          {
#line 525 "trace_gen.m"
            ll_backend__trace_gen__MaybeFromFullSlotLval_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 525 "trace_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeFromFullSlotLval_31, 0) = ((MR_Box) (ll_backend__trace_gen__FromFullSlotLval_30));
#line 525 "trace_gen.m"
          }
#line 526 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_NextSlot_66_66 = (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_64_64 + (MR_Integer) 1);
#line 521 "trace_gen.m"
        }
#line 527 "trace_gen.m"
        break;
#line 527 "trace_gen.m"
    }
#line 540 "trace_gen.m"
#line 540 "trace_gen.m"
    switch (ll_backend__trace_gen__TraceTableIo_21) {
#line 540 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 540 "trace_gen.m"
      case (MR_Integer) 0:
#line 541 "trace_gen.m"
        {
#line 542 "trace_gen.m"
          ll_backend__trace_gen__MaybeIoSeqSlot_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 543 "trace_gen.m"
          ll_backend__trace_gen__MaybeIoSeqLval_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 541 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_NextSlot_68_68 = ll_backend__trace_gen__STATE_VARIABLE_NextSlot_66_66;
#line 541 "trace_gen.m"
        }
#line 540 "trace_gen.m"
        break;
#line 540 "trace_gen.m"
      case (MR_Integer) 1:
#line 534 "trace_gen.m"
        {
#line 534 "trace_gen.m"
          MR_Word ll_backend__trace_gen__IoSeqLval_34;

#line 536 "trace_gen.m"
          {
#line 536 "trace_gen.m"
            ll_backend__trace_gen__MaybeIoSeqSlot_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 536 "trace_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeIoSeqSlot_33, 0) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_66_66));
#line 536 "trace_gen.m"
          }
#line 537 "trace_gen.m"
          {
#line 537 "trace_gen.m"
            ll_backend__trace_gen__IoSeqLval_34 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__STATE_VARIABLE_NextSlot_66_66);
          }
#line 538 "trace_gen.m"
          {
#line 538 "trace_gen.m"
            ll_backend__trace_gen__MaybeIoSeqLval_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 538 "trace_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeIoSeqLval_35, 0) = ((MR_Box) (ll_backend__trace_gen__IoSeqLval_34));
#line 538 "trace_gen.m"
          }
#line 539 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_NextSlot_68_68 = (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_66_66 + (MR_Integer) 1);
#line 534 "trace_gen.m"
        }
#line 540 "trace_gen.m"
        break;
#line 540 "trace_gen.m"
    }
#line 546 "trace_gen.m"
    {
#line 546 "trace_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__trace_gen__Globals_13, (MR_Integer) 215, &ll_backend__trace_gen__UseTrail_36);
    }
#line 556 "trace_gen.m"
#line 556 "trace_gen.m"
    switch (ll_backend__trace_gen__UseTrail_36) {
#line 556 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 556 "trace_gen.m"
      case (MR_Integer) 0:
#line 557 "trace_gen.m"
        {
#line 558 "trace_gen.m"
          ll_backend__trace_gen__MaybeTrailSlot_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 559 "trace_gen.m"
          ll_backend__trace_gen__MaybeTrailLvals_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 557 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_NextSlot_73_73 = ll_backend__trace_gen__STATE_VARIABLE_NextSlot_68_68;
#line 557 "trace_gen.m"
        }
#line 556 "trace_gen.m"
        break;
#line 556 "trace_gen.m"
      case (MR_Integer) 1:
#line 548 "trace_gen.m"
        {
#line 548 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__TicketSlot_38 = (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_68_68 + (MR_Integer) 1);
#line 548 "trace_gen.m"
          MR_Word ll_backend__trace_gen__TrailLval_40;
#line 548 "trace_gen.m"
          MR_Word ll_backend__trace_gen__TicketLval_41;
#line 548 "trace_gen.m"
          MR_Word ll_backend__trace_gen__V_72_72;

#line 551 "trace_gen.m"
          {
#line 551 "trace_gen.m"
            ll_backend__trace_gen__MaybeTrailSlot_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 551 "trace_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTrailSlot_39, 0) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_68_68));
#line 551 "trace_gen.m"
          }
#line 552 "trace_gen.m"
          {
#line 552 "trace_gen.m"
            ll_backend__trace_gen__TrailLval_40 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__STATE_VARIABLE_NextSlot_68_68);
          }
#line 553 "trace_gen.m"
          {
#line 553 "trace_gen.m"
            ll_backend__trace_gen__TicketLval_41 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__TicketSlot_38);
          }
#line 554 "trace_gen.m"
          {
#line 554 "trace_gen.m"
            ll_backend__trace_gen__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 554 "trace_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_72_72, 0) = ((MR_Box) (ll_backend__trace_gen__TrailLval_40));
#line 554 "trace_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_72_72, 1) = ((MR_Box) (ll_backend__trace_gen__TicketLval_41));
#line 554 "trace_gen.m"
          }
#line 554 "trace_gen.m"
          {
#line 554 "trace_gen.m"
            ll_backend__trace_gen__MaybeTrailLvals_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 554 "trace_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTrailLvals_42, 0) = ((MR_Box) (ll_backend__trace_gen__V_72_72));
#line 554 "trace_gen.m"
          }
#line 555 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_NextSlot_73_73 = (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_68_68 + (MR_Integer) 2);
#line 548 "trace_gen.m"
        }
#line 556 "trace_gen.m"
        break;
#line 556 "trace_gen.m"
    }
#line 562 "trace_gen.m"
    {
#line 562 "trace_gen.m"
      hlds__hlds_pred__proc_info_get_needs_maxfr_slot_2_p_0(ll_backend__trace_gen__ProcInfo_12, &ll_backend__trace_gen__NeedsMaxfrSlot_43);
    }
#line 570 "trace_gen.m"
#line 570 "trace_gen.m"
    switch (ll_backend__trace_gen__NeedsMaxfrSlot_43) {
#line 570 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 570 "trace_gen.m"
      case (MR_Integer) 1:
#line 571 "trace_gen.m"
        {
#line 572 "trace_gen.m"
          ll_backend__trace_gen__MaybeMaxfrSlot_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 573 "trace_gen.m"
          ll_backend__trace_gen__MaybeMaxfrLval_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 571 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_NextSlot_75_75 = ll_backend__trace_gen__STATE_VARIABLE_NextSlot_73_73;
#line 571 "trace_gen.m"
        }
#line 570 "trace_gen.m"
        break;
#line 570 "trace_gen.m"
      case (MR_Integer) 0:
#line 564 "trace_gen.m"
        {
#line 564 "trace_gen.m"
          MR_Word ll_backend__trace_gen__MaxfrLval_46;

#line 566 "trace_gen.m"
          {
#line 566 "trace_gen.m"
            ll_backend__trace_gen__MaybeMaxfrSlot_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 566 "trace_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeMaxfrSlot_45, 0) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_73_73));
#line 566 "trace_gen.m"
          }
#line 567 "trace_gen.m"
          {
#line 567 "trace_gen.m"
            ll_backend__trace_gen__MaxfrLval_46 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__STATE_VARIABLE_NextSlot_73_73);
          }
#line 568 "trace_gen.m"
          {
#line 568 "trace_gen.m"
            ll_backend__trace_gen__MaybeMaxfrLval_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 568 "trace_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeMaxfrLval_47, 0) = ((MR_Box) (ll_backend__trace_gen__MaxfrLval_46));
#line 568 "trace_gen.m"
          }
#line 569 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_NextSlot_75_75 = (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_73_73 + (MR_Integer) 1);
#line 564 "trace_gen.m"
        }
#line 570 "trace_gen.m"
        break;
#line 570 "trace_gen.m"
    }
#line 583 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeTailRecLabel_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 584 "trace_gen.m"
      {
#line 585 "trace_gen.m"
        ll_backend__trace_gen__MaybeTailRecSlot_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 586 "trace_gen.m"
        ll_backend__trace_gen__MaybeTailRecInfo_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 584 "trace_gen.m"
        ll_backend__trace_gen__STATE_VARIABLE_NextSlot_78_78 = ll_backend__trace_gen__STATE_VARIABLE_NextSlot_75_75;
#line 584 "trace_gen.m"
      }
#line 583 "trace_gen.m"
    else
#line 577 "trace_gen.m"
      {
#line 577 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TailRecLabel_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTailRecLabel_14, (MR_Integer) 0)));
#line 577 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TailRecLval_51;
#line 577 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_77_77;

#line 579 "trace_gen.m"
        {
#line 579 "trace_gen.m"
          ll_backend__trace_gen__MaybeTailRecSlot_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 579 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTailRecSlot_50, 0) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_75_75));
#line 579 "trace_gen.m"
        }
#line 580 "trace_gen.m"
        {
#line 580 "trace_gen.m"
          ll_backend__trace_gen__TailRecLval_51 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__STATE_VARIABLE_NextSlot_75_75);
        }
#line 581 "trace_gen.m"
        {
#line 581 "trace_gen.m"
          ll_backend__trace_gen__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 581 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_77_77, 0) = ((MR_Box) (ll_backend__trace_gen__TailRecLval_51));
#line 581 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_77_77, 1) = ((MR_Box) (ll_backend__trace_gen__TailRecLabel_48));
#line 581 "trace_gen.m"
        }
#line 581 "trace_gen.m"
        {
#line 581 "trace_gen.m"
          ll_backend__trace_gen__MaybeTailRecInfo_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 581 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTailRecInfo_52, 0) = ((MR_Box) (ll_backend__trace_gen__V_77_77));
#line 581 "trace_gen.m"
        }
#line 582 "trace_gen.m"
        ll_backend__trace_gen__STATE_VARIABLE_NextSlot_78_78 = (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_75_75 + (MR_Integer) 1);
#line 577 "trace_gen.m"
      }
#line 589 "trace_gen.m"
    {
#line 589 "trace_gen.m"
      hlds__hlds_pred__proc_info_get_call_table_tip_2_p_0(ll_backend__trace_gen__ProcInfo_12, &ll_backend__trace_gen__MaybeCallTableTip_53);
    }
#line 596 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeCallTableTip_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 597 "trace_gen.m"
      {
#line 598 "trace_gen.m"
        ll_backend__trace_gen__MaybeCallTableSlot_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 599 "trace_gen.m"
        ll_backend__trace_gen__MaybeCallTableLval_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 597 "trace_gen.m"
      }
#line 596 "trace_gen.m"
    else
#line 591 "trace_gen.m"
      {
#line 591 "trace_gen.m"
        MR_Word ll_backend__trace_gen__CallTableLval_57;

#line 593 "trace_gen.m"
        {
#line 593 "trace_gen.m"
          ll_backend__trace_gen__MaybeCallTableSlot_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 593 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeCallTableSlot_56, 0) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_78_78));
#line 593 "trace_gen.m"
        }
#line 594 "trace_gen.m"
        {
#line 594 "trace_gen.m"
          ll_backend__trace_gen__CallTableLval_57 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__STATE_VARIABLE_NextSlot_78_78);
        }
#line 595 "trace_gen.m"
        {
#line 595 "trace_gen.m"
          ll_backend__trace_gen__MaybeCallTableLval_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 595 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeCallTableLval_58, 0) = ((MR_Box) (ll_backend__trace_gen__CallTableLval_57));
#line 595 "trace_gen.m"
        }
#line 591 "trace_gen.m"
      }
#line 602 "trace_gen.m"
    {
#line 602 "trace_gen.m"
      MR_Word base;
#line 602 "trace_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 602 "trace_gen.m"
      *ll_backend__trace_gen__TraceSlotInfo_15 = base;
#line 602 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__trace_gen__MaybeFromFullSlot_29));
#line 602 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__trace_gen__MaybeIoSeqSlot_33));
#line 602 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__trace_gen__MaybeTrailSlot_39));
#line 602 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__trace_gen__MaybeMaxfrSlot_45));
#line 602 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__trace_gen__MaybeCallTableSlot_56));
#line 602 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__trace_gen__MaybeTailRecSlot_50));
#line 602 "trace_gen.m"
    }
#line 604 "trace_gen.m"
    {
#line 604 "trace_gen.m"
      MR_Word base;
#line 604 "trace_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 604 "trace_gen.m"
      *ll_backend__trace_gen__TraceInfo_16 = base;
#line 604 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__trace_gen__TraceLevel_19));
#line 604 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__trace_gen__TraceSuppress_20));
#line 604 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__trace_gen__MaybeFromFullSlotLval_31));
#line 604 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__trace_gen__MaybeIoSeqLval_35));
#line 604 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__trace_gen__MaybeTrailLvals_42));
#line 604 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__trace_gen__MaybeMaxfrLval_47));
#line 604 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__trace_gen__MaybeCallTableLval_58));
#line 604 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__trace_gen__MaybeTailRecInfo_52));
#line 604 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__trace_gen__MaybeRedoLayoutLabel_25));
#line 604 "trace_gen.m"
    }
#line 493 "trace_gen.m"
  }
#line 164 "trace_gen.m"
}

#line 156 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__trace_reserved_slots_6_p_0(
#line 156 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ModuleInfo_7,
#line 156 "trace_gen.m"
  MR_Word ll_backend__trace_gen__PredInfo_8,
#line 156 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ProcInfo_9,
#line 156 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Globals_10,
#line 156 "trace_gen.m"
  MR_Integer * ll_backend__trace_gen__ReservedSlots_11,
#line 156 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__MaybeTableVarInfo_12)
#line 156 "trace_gen.m"
{
#line 409 "trace_gen.m"
  {
#line 409 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 409 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceLevel_13;
#line 409 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceSuppress_14;
#line 409 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceTableIo_15;
#line 409 "trace_gen.m"
    MR_Word ll_backend__trace_gen__FixedSlots_16;

#line 410 "trace_gen.m"
    {
#line 410 "trace_gen.m"
      libs__globals__get_trace_level_2_p_0(ll_backend__trace_gen__Globals_10, &ll_backend__trace_gen__TraceLevel_13);
    }
#line 411 "trace_gen.m"
    {
#line 411 "trace_gen.m"
      libs__globals__get_trace_suppress_2_p_0(ll_backend__trace_gen__Globals_10, &ll_backend__trace_gen__TraceSuppress_14);
    }
#line 412 "trace_gen.m"
    {
#line 412 "trace_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__trace_gen__Globals_10, (MR_Integer) 122, &ll_backend__trace_gen__TraceTableIo_15);
    }
#line 413 "trace_gen.m"
    {
#line 413 "trace_gen.m"
      ll_backend__trace_gen__FixedSlots_16 = libs__trace_params__eff_trace_level_needs_fixed_slots_4_f_0(ll_backend__trace_gen__ModuleInfo_7, ll_backend__trace_gen__PredInfo_8, ll_backend__trace_gen__ProcInfo_9, ll_backend__trace_gen__TraceLevel_13);
    }
#line 419 "trace_gen.m"
#line 419 "trace_gen.m"
    switch (ll_backend__trace_gen__FixedSlots_16) {
#line 419 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 419 "trace_gen.m"
      case (MR_Integer) 0:
#line 416 "trace_gen.m"
        {
#line 417 "trace_gen.m"
          *ll_backend__trace_gen__ReservedSlots_11 = (MR_Integer) 0;
#line 418 "trace_gen.m"
          *ll_backend__trace_gen__MaybeTableVarInfo_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 416 "trace_gen.m"
        }
#line 419 "trace_gen.m"
        break;
#line 419 "trace_gen.m"
      case (MR_Integer) 1:
#line 420 "trace_gen.m"
        {
#line 420 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__RedoLayout_18;
#line 420 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__FromFull_19;
#line 420 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__IoSeq_20;
#line 420 "trace_gen.m"
          MR_Word ll_backend__trace_gen__UseTrail_21;
#line 420 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__Trail_22;
#line 420 "trace_gen.m"
          MR_Word ll_backend__trace_gen__NeedsMaxfrSlot_23;
#line 420 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__Maxfr_24;
#line 420 "trace_gen.m"
          MR_Word ll_backend__trace_gen__TailCallEvents_25;
#line 420 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__TailRec_26;
#line 420 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__ReservedSlots0_27;
#line 420 "trace_gen.m"
          MR_Word ll_backend__trace_gen__MaybeCallTableVar_28;
#line 420 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__V_36_36;
#line 420 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__V_37_37;
#line 420 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__V_38_38;
#line 420 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__V_39_39;
#line 420 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__V_40_40;
#line 425 "trace_gen.m"
          MR_Word ll_backend__trace_gen__V_31_31;
#line 425 "trace_gen.m"
          MR_Word ll_backend__trace_gen__V_32_32;
#line 425 "trace_gen.m"
          MR_Word ll_backend__trace_gen__V_33_33;
#line 436 "trace_gen.m"
          MR_Word ll_backend__trace_gen__V_34_34;

#line 425 "trace_gen.m"
          {
#line 425 "trace_gen.m"
            ll_backend__trace_gen__V_31_31 = hlds__code_model__proc_info_interface_code_model_1_f_0(ll_backend__trace_gen__ProcInfo_9);
          }
#line 425 "trace_gen.m"
          ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_31_31 == (MR_Integer) 2);
#line 425 "trace_gen.m"
          if (ll_backend__trace_gen__succeeded)
#line 425 "trace_gen.m"
            {
#line 427 "trace_gen.m"
              ll_backend__trace_gen__V_33_33 = (MR_Integer) 2;
#line 426 "trace_gen.m"
              {
#line 426 "trace_gen.m"
                ll_backend__trace_gen__V_32_32 = libs__trace_params__eff_trace_needs_port_6_f_0(ll_backend__trace_gen__ModuleInfo_7, ll_backend__trace_gen__PredInfo_8, ll_backend__trace_gen__ProcInfo_9, ll_backend__trace_gen__TraceLevel_13, ll_backend__trace_gen__TraceSuppress_14, ll_backend__trace_gen__V_33_33);
              }
#line 427 "trace_gen.m"
              ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_32_32 == (MR_Integer) 1);
#line 425 "trace_gen.m"
            }
#line 430 "trace_gen.m"
          if (ll_backend__trace_gen__succeeded)
#line 429 "trace_gen.m"
            ll_backend__trace_gen__RedoLayout_18 = (MR_Integer) 1;
#line 430 "trace_gen.m"
          else
#line 431 "trace_gen.m"
            ll_backend__trace_gen__RedoLayout_18 = (MR_Integer) 0;
#line 435 "trace_gen.m"
          {
#line 435 "trace_gen.m"
            ll_backend__trace_gen__V_34_34 = libs__trace_params__eff_trace_level_needs_from_full_slot_4_f_0(ll_backend__trace_gen__ModuleInfo_7, ll_backend__trace_gen__PredInfo_8, ll_backend__trace_gen__ProcInfo_9, ll_backend__trace_gen__TraceLevel_13);
          }
#line 436 "trace_gen.m"
          ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_34_34 == (MR_Integer) 1);
#line 439 "trace_gen.m"
          if (ll_backend__trace_gen__succeeded)
#line 438 "trace_gen.m"
            ll_backend__trace_gen__FromFull_19 = (MR_Integer) 1;
#line 439 "trace_gen.m"
          else
#line 440 "trace_gen.m"
            ll_backend__trace_gen__FromFull_19 = (MR_Integer) 0;
#line 446 "trace_gen.m"
#line 446 "trace_gen.m"
          switch (ll_backend__trace_gen__TraceTableIo_15) {
#line 446 "trace_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 446 "trace_gen.m"
            case (MR_Integer) 0:
#line 448 "trace_gen.m"
              ll_backend__trace_gen__IoSeq_20 = (MR_Integer) 0;
#line 446 "trace_gen.m"
              break;
#line 446 "trace_gen.m"
            case (MR_Integer) 1:
#line 445 "trace_gen.m"
              ll_backend__trace_gen__IoSeq_20 = (MR_Integer) 1;
#line 446 "trace_gen.m"
              break;
#line 446 "trace_gen.m"
          }
#line 451 "trace_gen.m"
          {
#line 451 "trace_gen.m"
            libs__globals__lookup_bool_option_3_p_0(ll_backend__trace_gen__Globals_10, (MR_Integer) 215, &ll_backend__trace_gen__UseTrail_21);
          }
#line 455 "trace_gen.m"
#line 455 "trace_gen.m"
          switch (ll_backend__trace_gen__UseTrail_21) {
#line 455 "trace_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 455 "trace_gen.m"
            case (MR_Integer) 0:
#line 457 "trace_gen.m"
              ll_backend__trace_gen__Trail_22 = (MR_Integer) 0;
#line 455 "trace_gen.m"
              break;
#line 455 "trace_gen.m"
            case (MR_Integer) 1:
#line 454 "trace_gen.m"
              ll_backend__trace_gen__Trail_22 = (MR_Integer) 2;
#line 455 "trace_gen.m"
              break;
#line 455 "trace_gen.m"
          }
#line 460 "trace_gen.m"
          {
#line 460 "trace_gen.m"
            hlds__hlds_pred__proc_info_get_needs_maxfr_slot_2_p_0(ll_backend__trace_gen__ProcInfo_9, &ll_backend__trace_gen__NeedsMaxfrSlot_23);
          }
#line 464 "trace_gen.m"
#line 464 "trace_gen.m"
          switch (ll_backend__trace_gen__NeedsMaxfrSlot_23) {
#line 464 "trace_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 464 "trace_gen.m"
            case (MR_Integer) 1:
#line 466 "trace_gen.m"
              ll_backend__trace_gen__Maxfr_24 = (MR_Integer) 0;
#line 464 "trace_gen.m"
              break;
#line 464 "trace_gen.m"
            case (MR_Integer) 0:
#line 463 "trace_gen.m"
              ll_backend__trace_gen__Maxfr_24 = (MR_Integer) 1;
#line 464 "trace_gen.m"
              break;
#line 464 "trace_gen.m"
          }
#line 469 "trace_gen.m"
          {
#line 469 "trace_gen.m"
            hlds__hlds_pred__proc_info_get_has_tail_call_event_2_p_0(ll_backend__trace_gen__ProcInfo_9, &ll_backend__trace_gen__TailCallEvents_25);
          }
#line 473 "trace_gen.m"
#line 473 "trace_gen.m"
          switch (ll_backend__trace_gen__TailCallEvents_25) {
#line 473 "trace_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 473 "trace_gen.m"
            case (MR_Integer) 1:
#line 475 "trace_gen.m"
              ll_backend__trace_gen__TailRec_26 = (MR_Integer) 0;
#line 473 "trace_gen.m"
              break;
#line 473 "trace_gen.m"
            case (MR_Integer) 0:
#line 472 "trace_gen.m"
              ll_backend__trace_gen__TailRec_26 = (MR_Integer) 1;
#line 473 "trace_gen.m"
              break;
#line 473 "trace_gen.m"
          }
#line 477 "trace_gen.m"
          ll_backend__trace_gen__V_40_40 = ((MR_Integer) 3 + ll_backend__trace_gen__RedoLayout_18);
#line 477 "trace_gen.m"
          ll_backend__trace_gen__V_39_39 = (ll_backend__trace_gen__V_40_40 + ll_backend__trace_gen__FromFull_19);
#line 477 "trace_gen.m"
          ll_backend__trace_gen__V_38_38 = (ll_backend__trace_gen__V_39_39 + ll_backend__trace_gen__IoSeq_20);
#line 477 "trace_gen.m"
          ll_backend__trace_gen__V_37_37 = (ll_backend__trace_gen__V_38_38 + ll_backend__trace_gen__Trail_22);
#line 477 "trace_gen.m"
          ll_backend__trace_gen__V_36_36 = (ll_backend__trace_gen__V_37_37 + ll_backend__trace_gen__Maxfr_24);
#line 478 "trace_gen.m"
          ll_backend__trace_gen__ReservedSlots0_27 = (ll_backend__trace_gen__V_36_36 + ll_backend__trace_gen__TailRec_26);
#line 480 "trace_gen.m"
          {
#line 480 "trace_gen.m"
            hlds__hlds_pred__proc_info_get_call_table_tip_2_p_0(ll_backend__trace_gen__ProcInfo_9, &ll_backend__trace_gen__MaybeCallTableVar_28);
          }
#line 485 "trace_gen.m"
          if ((ll_backend__trace_gen__MaybeCallTableVar_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "trace_gen.m"
            {
#line 487 "trace_gen.m"
              *ll_backend__trace_gen__ReservedSlots_11 = ll_backend__trace_gen__ReservedSlots0_27;
#line 488 "trace_gen.m"
              *ll_backend__trace_gen__MaybeTableVarInfo_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 486 "trace_gen.m"
            }
#line 485 "trace_gen.m"
          else
#line 482 "trace_gen.m"
            {
#line 482 "trace_gen.m"
              MR_Word ll_backend__trace_gen__CallTableVar_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeCallTableVar_28, (MR_Integer) 0)));
#line 482 "trace_gen.m"
              MR_Word ll_backend__trace_gen__V_42_42;

#line 483 "trace_gen.m"
              *ll_backend__trace_gen__ReservedSlots_11 = (ll_backend__trace_gen__ReservedSlots0_27 + (MR_Integer) 1);
#line 484 "trace_gen.m"
              {
#line 484 "trace_gen.m"
                ll_backend__trace_gen__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 484 "trace_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_42_42, 0) = ((MR_Box) (ll_backend__trace_gen__CallTableVar_29));
#line 484 "trace_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_42_42, 1) = ((MR_Box) (*ll_backend__trace_gen__ReservedSlots_11));
#line 484 "trace_gen.m"
              }
#line 484 "trace_gen.m"
              {
#line 484 "trace_gen.m"
                MR_Word base;
#line 484 "trace_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 484 "trace_gen.m"
                *ll_backend__trace_gen__MaybeTableVarInfo_12 = base;
#line 484 "trace_gen.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__trace_gen__V_42_42));
#line 484 "trace_gen.m"
              }
#line 482 "trace_gen.m"
            }
#line 420 "trace_gen.m"
        }
#line 419 "trace_gen.m"
        break;
#line 419 "trace_gen.m"
    }
#line 409 "trace_gen.m"
  }
#line 156 "trace_gen.m"
}

#line 146 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__do_we_need_maxfr_slot_5_p_0(
#line 146 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Globals_6,
#line 146 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ModuleInfo_7,
#line 146 "trace_gen.m"
  MR_Word ll_backend__trace_gen__PredInfo0_8,
#line 146 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_0_14,
#line 146 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_15)
#line 146 "trace_gen.m"
{
#line 308 "trace_gen.m"
  {
#line 308 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 308 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceLevel_10;
#line 308 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CodeModel_11;
#line 308 "trace_gen.m"
    MR_Word ll_backend__trace_gen__NeedsMaxfrSlot_13;
#line 313 "trace_gen.m"
    MR_Word ll_backend__trace_gen__Goal_12;
#line 313 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_16_16;
#line 313 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_17_17;
#line 313 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_19_19;

#line 309 "trace_gen.m"
    {
#line 309 "trace_gen.m"
      libs__globals__get_trace_level_2_p_0(ll_backend__trace_gen__Globals_6, &ll_backend__trace_gen__TraceLevel_10);
    }
#line 310 "trace_gen.m"
    {
#line 310 "trace_gen.m"
      ll_backend__trace_gen__CodeModel_11 = hlds__code_model__proc_info_interface_code_model_1_f_0(ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_0_14);
    }
#line 312 "trace_gen.m"
    {
#line 312 "trace_gen.m"
      ll_backend__trace_gen__V_16_16 = libs__trace_params__eff_trace_level_is_none_4_f_0(ll_backend__trace_gen__ModuleInfo_7, ll_backend__trace_gen__PredInfo0_8, ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_0_14, ll_backend__trace_gen__TraceLevel_10);
    }
#line 313 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_16_16 == (MR_Integer) 0);
#line 313 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 313 "trace_gen.m"
      {
#line 314 "trace_gen.m"
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CodeModel_11 == (MR_Integer) 2);
#line 314 "trace_gen.m"
        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 313 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 313 "trace_gen.m"
          {
#line 315 "trace_gen.m"
            {
#line 315 "trace_gen.m"
              hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_0_14, &ll_backend__trace_gen__Goal_12);
            }
#line 316 "trace_gen.m"
            ll_backend__trace_gen__V_17_17 = (MR_Integer) 1;
#line 316 "trace_gen.m"
            {
#line 316 "trace_gen.m"
              ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(ll_backend__trace_gen__Goal_12, &ll_backend__trace_gen__V_19_19);
            }
#line 316 "trace_gen.m"
            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_17_17 == ll_backend__trace_gen__V_19_19);
#line 313 "trace_gen.m"
          }
#line 313 "trace_gen.m"
      }
#line 319 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 318 "trace_gen.m"
      ll_backend__trace_gen__NeedsMaxfrSlot_13 = (MR_Integer) 0;
#line 319 "trace_gen.m"
    else
#line 320 "trace_gen.m"
      ll_backend__trace_gen__NeedsMaxfrSlot_13 = (MR_Integer) 1;
#line 322 "trace_gen.m"
    {
#line 322 "trace_gen.m"
      hlds__hlds_pred__proc_info_set_needs_maxfr_slot_3_p_0(ll_backend__trace_gen__NeedsMaxfrSlot_13, ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_0_14, ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_15);
#line 322 "trace_gen.m"
      return;
    }
#line 308 "trace_gen.m"
  }
#line 146 "trace_gen.m"
}

#line 140 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__trace_fail_vars_3_p_0(
#line 140 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ModuleInfo_4,
#line 140 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ProcInfo_5,
#line 140 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__FailVars_6)
#line 140 "trace_gen.m"
{
#line 293 "trace_gen.m"
  {
#line 293 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 293 "trace_gen.m"
    MR_Word ll_backend__trace_gen__HeadVars_7;
#line 293 "trace_gen.m"
    MR_Word ll_backend__trace_gen__Modes_8;
#line 293 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ArgInfos_9;
#line 293 "trace_gen.m"
    MR_Word ll_backend__trace_gen__VarTypes_10;
#line 293 "trace_gen.m"
    MR_Word ll_backend__trace_gen__Insts_11;
#line 304 "trace_gen.m"
    MR_Word ll_backend__trace_gen__FailVarsList_12;

#line 294 "trace_gen.m"
    {
#line 294 "trace_gen.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__trace_gen__ProcInfo_5, &ll_backend__trace_gen__HeadVars_7);
    }
#line 295 "trace_gen.m"
    {
#line 295 "trace_gen.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ll_backend__trace_gen__ProcInfo_5, &ll_backend__trace_gen__Modes_8);
    }
#line 296 "trace_gen.m"
    {
#line 296 "trace_gen.m"
      hlds__hlds_pred__proc_info_arg_info_2_p_0(ll_backend__trace_gen__ProcInfo_5, &ll_backend__trace_gen__ArgInfos_9);
    }
#line 297 "trace_gen.m"
    {
#line 297 "trace_gen.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__trace_gen__ProcInfo_5, &ll_backend__trace_gen__VarTypes_10);
    }
#line 298 "trace_gen.m"
    {
#line 298 "trace_gen.m"
      check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ll_backend__trace_gen__ModuleInfo_4, ll_backend__trace_gen__Modes_8, &ll_backend__trace_gen__Insts_11);
    }
#line 300 "trace_gen.m"
    {
#line 300 "trace_gen.m"
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen__build_fail_vars_6_p_0(ll_backend__trace_gen__HeadVars_7, ll_backend__trace_gen__Insts_11, ll_backend__trace_gen__ArgInfos_9, ll_backend__trace_gen__ModuleInfo_4, ll_backend__trace_gen__VarTypes_10, &ll_backend__trace_gen__FailVarsList_12);
    }
#line 304 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 303 "trace_gen.m"
      {
#line 303 "trace_gen.m"
        {
#line 303 "trace_gen.m"
          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__trace_gen__FailVarsList_12, ll_backend__trace_gen__FailVars_6);
#line 303 "trace_gen.m"
          return;
        }
#line 303 "trace_gen.m"
      }
#line 304 "trace_gen.m"
    else
#line 305 "trace_gen.m"
      {
#line 305 "trace_gen.m"
        {
#line 305 "trace_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.trace_fail_vars\'/3", (MR_String) "length mismatch");
#line 305 "trace_gen.m"
          return;
        }
#line 305 "trace_gen.m"
      }
#line 293 "trace_gen.m"
  }
#line 140 "trace_gen.m"
}

#line 93 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__get_trace_maybe_tail_rec_info_2_p_0(
#line 93 "trace_gen.m"
  MR_Word ll_backend__trace_gen__TraceInfo_3,
#line 93 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__2_2)
#line 93 "trace_gen.m"
{
#line 1397 "trace_gen.m"
  {
#line 1397 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 1397 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 0)));
#line 1397 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 1)));
#line 1397 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 2)));
#line 1397 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 3)));
#line 1397 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 4)));
#line 1397 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 5)));
#line 1397 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 6)));
#line 1397 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_11_11;

#line 1397 "trace_gen.m"
    *ll_backend__trace_gen__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 7)));
#line 1397 "trace_gen.m"
    ll_backend__trace_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 8)));
#line 1397 "trace_gen.m"
  }
#line 93 "trace_gen.m"
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
