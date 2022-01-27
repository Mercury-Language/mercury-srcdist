/*
** Automatically generated from `trace_gen.m'
** by the Mercury compiler,
** version rotd-2015-01-28
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_info.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 154 "ll_backend.trace_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0;

#line 157 "ll_backend.trace_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_lval_0;

#line 160 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 163 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0;

#line 166 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0;

#line 169 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0;

#line 172 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_external_event_info_0_0[3];

#line 175 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_external_event_info_0_0;

#line 178 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_external_event_info_0_0[1];

#line 181 "ll_backend.trace_gen.c"
static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_external_event_info_0[1];

#line 184 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_external_event_info_0[1];

#line 187 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_external_event_info_0[1];

#line 190 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_0;

#line 193 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_1;

#line 196 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_2;

#line 199 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_3;

#line 202 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_value_ordered_external_trace_port_0[4];

#line 205 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_name_ordered_external_trace_port_0[4];

#line 208 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_external_trace_port_0[4];

#line 211 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_0;

#line 214 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_1;

#line 217 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_value_ordered_negation_end_port_0[2];

#line 220 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_name_ordered_negation_end_port_0[2];

#line 223 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_negation_end_port_0[2];

#line 226 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0;

#line 229 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0;

#line 232 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0;

#line 235 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0;

#line 238 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0;

#line 241 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0;

#line 244 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0;

#line 247 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_info_0_0[9];

#line 250 "ll_backend.trace_gen.c"
static const MR_ConstString ll_backend__trace_gen__ll_backend__trace_gen__field_names_trace_info_0_0[9];

#line 253 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_info_0_0;

#line 256 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_info_0_0[1];

#line 259 "ll_backend.trace_gen.c"
static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_info_0[1];

#line 262 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_info_0[1];

#line 265 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_info_0[1];

#line 268 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_0;

#line 271 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 274 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0;

#line 277 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0;

#line 280 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_1[2];

#line 283 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_1;

#line 286 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 289 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_2[2];

#line 292 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_2;

#line 295 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_3[1];

#line 298 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_3;

#line 301 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_4[1];

#line 304 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_4;

#line 307 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_0[1];

#line 310 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_1[1];

#line 313 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_2[1];

#line 316 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_3[2];

#line 319 "ll_backend.trace_gen.c"
static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_port_info_0[4];

#line 322 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_port_info_0[5];

#line 325 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_port_info_0[5];

#line 328 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 331 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_slot_info_0_0[6];

#line 334 "ll_backend.trace_gen.c"
static const MR_ConstString ll_backend__trace_gen__ll_backend__trace_gen__field_names_trace_slot_info_0_0[6];

#line 337 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_slot_info_0_0;

#line 340 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_slot_info_0_0[1];

#line 343 "ll_backend.trace_gen.c"
static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_slot_info_0[1];

#line 346 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_slot_info_0[1];

#line 349 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_slot_info_0[1];

#line 352 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_event_info_0_0_10001(
#line 355 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 357 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2);

#line 360 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____external_event_info_0_0_10001(
#line 363 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 365 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 367 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3);

#line 370 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_trace_port_0_0_10001(
#line 373 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 375 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2);

#line 378 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____external_trace_port_0_0_10001(
#line 381 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 383 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 385 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3);

#line 388 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____negation_end_port_0_0_10001(
#line 391 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 393 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2);

#line 396 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____negation_end_port_0_0_10001(
#line 399 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 401 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 403 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3);

#line 406 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_info_0_0_10001(
#line 409 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 411 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2);

#line 414 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____trace_info_0_0_10001(
#line 417 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 419 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 421 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3);

#line 424 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_port_info_0_0_10001(
#line 427 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 429 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2);

#line 432 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____trace_port_info_0_0_10001(
#line 435 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 437 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 439 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3);

#line 442 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_slot_info_0_0_10001(
#line 445 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 447 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2);

#line 450 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____trace_slot_info_0_0_10001(
#line 453 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 455 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 457 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3);

#line 1193 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_p_0(
#line 1193 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 1193 "trace_gen.m"
  MR_Word ll_backend__trace_gen__VarSet_2,
#line 1193 "trace_gen.m"
  MR_Word ll_backend__trace_gen__VarTypes_3,
#line 1193 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_TVars_0_6,
#line 1193 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_TVars_7,
#line 1193 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_VarInfos_0_8,
#line 1193 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_VarInfos_9,
#line 1193 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__10_10,
#line 1193 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_11,
#line 1193 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_12);

#line 937 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__937__1_2_p_0(
#line 937 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeFromFullLval_17,
#line 937 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_62);

#line 931 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__931__1_2_p_0(
#line 931 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeRedoLabelLval_16,
#line 931 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_57);

#line 1173 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__maybe_setup_redo_event__1173__1_2_p_0(
#line 1173 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Lval_8,
#line 1173 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_20);

#line 263 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen____Compare____trace_port_info_0_0(
#line 263 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
#line 263 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 263 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3);

#line 263 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_port_info_0_0(
#line 263 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 263 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2);

#line 1300 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__redo_layout_slot_2_p_0(
#line 1300 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CodeModel_3,
#line 1300 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__RedoLayoutSlot_4);

#line 1299 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__call_depth_slot_2_p_0(
#line 1299 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CodeModel_3,
#line 1299 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__CallDepthSlot_4);

#line 1298 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__call_num_slot_2_p_0(
#line 1298 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CodeModel_3,
#line 1298 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__CallNumSlot_4);

#line 1297 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__event_num_slot_2_p_0(
#line 1297 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CodeModel_3,
#line 1297 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__EventNumSlot_4);

#line 1270 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__stackref_to_string_2_p_0(
#line 1270 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Lval_3,
#line 1270 "trace_gen.m"
  MR_String * ll_backend__trace_gen__LvalStr_4);

#line 1242 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__build_fail_vars_6_p_0(
#line 1242 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 1242 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 1242 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3,
#line 1242 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ModuleInfo_4,
#line 1242 "trace_gen.m"
  MR_Word ll_backend__trace_gen__VarTypes_5,
#line 1242 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__6_6);

#line 1159 "trace_gen.m"
static MR_Word MR_CALL 
ll_backend__trace_gen__find_lval_in_layout_locn_1_f_0(
#line 1159 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1);

#line 1154 "trace_gen.m"
static MR_Word MR_CALL 
ll_backend__trace_gen__find_lval_in_var_info_1_f_0(
#line 1154 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1);

#line 1138 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__find_output_vars_3_p_0(
#line 1138 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 1138 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2,
#line 1138 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_OutputVars_3);

#line 1081 "trace_gen.m"
static MR_Box MR_CALL 
ll_backend__trace_gen__generate_event_code_11_p_0_2(
#line 1081 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg,
#line 1081 "trace_gen.m"
  MR_Box ll_backend__trace_gen__wrapper_arg_1);

#line 1077 "trace_gen.m"
static MR_Box MR_CALL 
ll_backend__trace_gen__generate_event_code_11_p_0_1(
#line 1077 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg,
#line 1077 "trace_gen.m"
  MR_Box ll_backend__trace_gen__wrapper_arg_1);

#line 1008 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__generate_event_code_11_p_0(
#line 1008 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Port_12,
#line 1008 "trace_gen.m"
  MR_Word ll_backend__trace_gen__PortInfo_13,
#line 1008 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeTraceInfo_14,
#line 1008 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Context_15,
#line 1008 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HideEvent_16,
#line 1008 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeUserInfo_17,
#line 1008 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Label_18,
#line 1008 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__TvarDataMap_19,
#line 1008 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_20,
#line 1008 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_64,
#line 1008 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_65);

#line 937 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_2(
#line 937 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg);

#line 931 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_1(
#line 931 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg);

#line 911 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0(
#line 911 "trace_gen.m"
  MR_Word ll_backend__trace_gen__TraceInfo_5,
#line 911 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_6,
#line 911 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_42,
#line 911 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_43);

#line 1173 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__maybe_setup_redo_event_2_p_0_1(
#line 1173 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg);


static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_1[22][2];

static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_2[8][3];

static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_3[5][1];

static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_4[5][5];




static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_1[22][2] = {
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
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_2[1]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_2[2]))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_2[3]))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_2[4]))),
    ((MR_Box) ((MR_String) "set up deep redo event"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_2[5]))),
    ((MR_Box) ((MR_String) "set up shallow redo event"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__trace_gen_scalar_common_3[4])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 21 */
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
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_4[3])),
    ((MR_Box) (ll_backend__trace_gen__generate_event_code_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_4[4])),
    ((MR_Box) (ll_backend__trace_gen__generate_event_code_11_p_0_2)),
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

static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_4[5][5] = {
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



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 935 "ll_backend.trace_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 943 "ll_backend.trace_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 951 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 959 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0
  }
};

#line 967 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &ll_backend__trace_gen__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0
  }
};

#line 976 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 984 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_external_event_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0
};

#line 991 "ll_backend.trace_gen.c"
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

#line 1006 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_external_event_info_0_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_external_event_info_0_0
};

#line 1011 "ll_backend.trace_gen.c"
static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_external_event_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_external_event_info_0_0
  }
};

#line 1020 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_external_event_info_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_external_event_info_0_0
};

#line 1025 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_external_event_info_0[1] = {
  (MR_Integer) 0
};

#line 1030 "ll_backend.trace_gen.c"
const MR_TypeCtorInfo_Struct ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_external_event_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__trace_gen____Unify____external_event_info_0_0_10001)),
  ((MR_Box) (ll_backend__trace_gen____Compare____external_event_info_0_0_10001)),
  (MR_String) "ll_backend.trace_gen",
  (MR_String) "external_event_info",
  {
    ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_external_event_info_0
  },
  {
    ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_external_event_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_external_event_info_0
};

#line 1051 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_0 = {
  (MR_String) "external_port_call",
  (MR_Integer) 0
};

#line 1057 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_1 = {
  (MR_String) "external_port_exit",
  (MR_Integer) 1
};

#line 1063 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_2 = {
  (MR_String) "external_port_fail",
  (MR_Integer) 2
};

#line 1069 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_3 = {
  (MR_String) "external_port_tailrec_call",
  (MR_Integer) 3
};

#line 1075 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_value_ordered_external_trace_port_0[4] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_0,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_1,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_2,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_3
};

#line 1083 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_name_ordered_external_trace_port_0[4] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_0,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_1,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_2,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_3
};

#line 1091 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_external_trace_port_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 1099 "ll_backend.trace_gen.c"
const MR_TypeCtorInfo_Struct ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_external_trace_port_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__trace_gen____Unify____external_trace_port_0_0_10001)),
  ((MR_Box) (ll_backend__trace_gen____Compare____external_trace_port_0_0_10001)),
  (MR_String) "ll_backend.trace_gen",
  (MR_String) "external_trace_port",
  {
    ll_backend__trace_gen__ll_backend__trace_gen__enum_name_ordered_external_trace_port_0
  },
  {
    ll_backend__trace_gen__ll_backend__trace_gen__enum_value_ordered_external_trace_port_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_external_trace_port_0
};

#line 1120 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_0 = {
  (MR_String) "neg_success",
  (MR_Integer) 0
};

#line 1126 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_1 = {
  (MR_String) "neg_failure",
  (MR_Integer) 1
};

#line 1132 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_value_ordered_negation_end_port_0[2] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_0,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_1
};

#line 1138 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_name_ordered_negation_end_port_0[2] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_1,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_0
};

#line 1144 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_negation_end_port_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1150 "ll_backend.trace_gen.c"
const MR_TypeCtorInfo_Struct ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_negation_end_port_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__trace_gen____Unify____negation_end_port_0_0_10001)),
  ((MR_Box) (ll_backend__trace_gen____Compare____negation_end_port_0_0_10001)),
  (MR_String) "ll_backend.trace_gen",
  (MR_String) "negation_end_port",
  {
    ll_backend__trace_gen__ll_backend__trace_gen__enum_name_ordered_negation_end_port_0
  },
  {
    ll_backend__trace_gen__ll_backend__trace_gen__enum_value_ordered_negation_end_port_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_negation_end_port_0
};

#line 1171 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0
  }
};

#line 1179 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 1187 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 1196 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 1204 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1213 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1221 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1229 "ll_backend.trace_gen.c"
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

#line 1242 "ll_backend.trace_gen.c"
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

#line 1255 "ll_backend.trace_gen.c"
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

#line 1270 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_info_0_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_info_0_0
};

#line 1275 "ll_backend.trace_gen.c"
static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_info_0_0
  }
};

#line 1284 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_info_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_info_0_0
};

#line 1289 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_info_0[1] = {
  (MR_Integer) 0
};

#line 1294 "ll_backend.trace_gen.c"
const MR_TypeCtorInfo_Struct ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_trace_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__trace_gen____Unify____trace_info_0_0_10001)),
  ((MR_Box) (ll_backend__trace_gen____Compare____trace_info_0_0_10001)),
  (MR_String) "ll_backend.trace_gen",
  (MR_String) "trace_info",
  {
    ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_info_0
  },
  {
    ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_info_0
};

#line 1315 "ll_backend.trace_gen.c"
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

#line 1330 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1338 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0
  }
};

#line 1347 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0
  }
};

#line 1355 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0
};

#line 1361 "ll_backend.trace_gen.c"
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

#line 1376 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1384 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_2[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1390 "ll_backend.trace_gen.c"
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

#line 1405 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_3[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
};

#line 1410 "ll_backend.trace_gen.c"
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

#line 1425 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_4[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
};

#line 1430 "ll_backend.trace_gen.c"
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

#line 1445 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_0
};

#line 1450 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_1[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_1
};

#line 1455 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_2[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_2
};

#line 1460 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_3[2] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_3,
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_4
};

#line 1466 "ll_backend.trace_gen.c"
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

#line 1490 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_port_info_0[5] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_0,
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_2,
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_3,
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_1,
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_4
};

#line 1499 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_port_info_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 4
};

#line 1508 "ll_backend.trace_gen.c"
const MR_TypeCtorInfo_Struct ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_trace_port_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__trace_gen____Unify____trace_port_info_0_0_10001)),
  ((MR_Box) (ll_backend__trace_gen____Compare____trace_port_info_0_0_10001)),
  (MR_String) "ll_backend.trace_gen",
  (MR_String) "trace_port_info",
  {
    ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_port_info_0
  },
  {
    ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_port_info_0
  },
  (MR_Integer) 5,
  (MR_Integer) 4,
  ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_port_info_0
};

#line 1529 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1537 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_slot_info_0_0[6] = {
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

#line 1547 "ll_backend.trace_gen.c"
static const MR_ConstString ll_backend__trace_gen__ll_backend__trace_gen__field_names_trace_slot_info_0_0[6] = {
  (MR_String) "slot_from_full",
  (MR_String) "slot_io",
  (MR_String) "slot_trail",
  (MR_String) "slot_maxfr",
  (MR_String) "slot_call_table",
  (MR_String) "slot_tail_rec"
};

#line 1557 "ll_backend.trace_gen.c"
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

#line 1572 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_slot_info_0_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_slot_info_0_0
};

#line 1577 "ll_backend.trace_gen.c"
static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_slot_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_slot_info_0_0
  }
};

#line 1586 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_slot_info_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_slot_info_0_0
};

#line 1591 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_slot_info_0[1] = {
  (MR_Integer) 0
};

#line 1596 "ll_backend.trace_gen.c"
const MR_TypeCtorInfo_Struct ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_trace_slot_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__trace_gen____Unify____trace_slot_info_0_0_10001)),
  ((MR_Box) (ll_backend__trace_gen____Compare____trace_slot_info_0_0_10001)),
  (MR_String) "ll_backend.trace_gen",
  (MR_String) "trace_slot_info",
  {
    ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_slot_info_0
  },
  {
    ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_slot_info_0
  },
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

#line 1193 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_p_0(
#line 1193 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 1193 "trace_gen.m"
  MR_Word ll_backend__trace_gen__VarSet_2,
#line 1193 "trace_gen.m"
  MR_Word ll_backend__trace_gen__VarTypes_3,
#line 1193 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_TVars_0_6,
#line 1193 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_TVars_7,
#line 1193 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_VarInfos_0_8,
#line 1193 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_VarInfos_9,
#line 1193 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__10_10,
#line 1193 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_11,
#line 1193 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_12)
#line 1193 "trace_gen.m"
{
#line 1198 "trace_gen.m"
  {
#line 1198 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1198 "trace_gen.m"
    if ((ll_backend__trace_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1198 "trace_gen.m"
      {
#line 1198 "trace_gen.m"
        {
#line 1198 "trace_gen.m"
          *ll_backend__trace_gen__HeadVar__10_10 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 1198 "trace_gen.m"
        *ll_backend__trace_gen__STATE_VARIABLE_CI_12 = ll_backend__trace_gen__STATE_VARIABLE_CI_0_11;
#line 1198 "trace_gen.m"
        *ll_backend__trace_gen__STATE_VARIABLE_VarInfos_9 = ll_backend__trace_gen__STATE_VARIABLE_VarInfos_0_8;
#line 1198 "trace_gen.m"
        *ll_backend__trace_gen__STATE_VARIABLE_TVars_7 = ll_backend__trace_gen__STATE_VARIABLE_TVars_0_6;
#line 1198 "trace_gen.m"
      }
#line 1198 "trace_gen.m"
    else
#line 1200 "trace_gen.m"
      {
#line 1200 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeCtorInfo_54_54 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 1200 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1200 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Vars_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1200 "trace_gen.m"
        MR_Word ll_backend__trace_gen__VarCode_34;
#line 1200 "trace_gen.m"
        MR_Word ll_backend__trace_gen__VarsCode_35;
#line 1200 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Type_37;
#line 1200 "trace_gen.m"
        MR_Word ll_backend__trace_gen__ModuleInfo_38;
#line 1200 "trace_gen.m"
        MR_Word ll_backend__trace_gen__IsDummy_39;
#line 1200 "trace_gen.m"
        MR_Word ll_backend__trace_gen__STATE_VARIABLE_TVars_47_47;
#line 1200 "trace_gen.m"
        MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_48_48;
#line 1200 "trace_gen.m"
        MR_Word ll_backend__trace_gen__STATE_VARIABLE_VarInfos_49_49;

#line 1201 "trace_gen.m"
        {
#line 1201 "trace_gen.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(ll_backend__trace_gen__VarTypes_3, ll_backend__trace_gen__Var_26, &ll_backend__trace_gen__Type_37);
        }
#line 1202 "trace_gen.m"
        {
#line 1202 "trace_gen.m"
          ll_backend__code_info__get_module_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_11, &ll_backend__trace_gen__ModuleInfo_38);
        }
#line 1203 "trace_gen.m"
        {
#line 1203 "trace_gen.m"
          ll_backend__trace_gen__IsDummy_39 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__trace_gen__ModuleInfo_38, ll_backend__trace_gen__Type_37);
        }
#line 1207 "trace_gen.m"
        if ((ll_backend__trace_gen__IsDummy_39 == (MR_Integer) 0))
#line 1205 "trace_gen.m"
          {
#line 1206 "trace_gen.m"
            {
#line 1206 "trace_gen.m"
              ll_backend__trace_gen__VarCode_34 = mercury__cord__empty_0_f_0(ll_backend__trace_gen__TypeCtorInfo_54_54);
            }
#line 1205 "trace_gen.m"
            ll_backend__trace_gen__STATE_VARIABLE_TVars_47_47 = ll_backend__trace_gen__STATE_VARIABLE_TVars_0_6;
#line 1205 "trace_gen.m"
            ll_backend__trace_gen__STATE_VARIABLE_VarInfos_49_49 = ll_backend__trace_gen__STATE_VARIABLE_VarInfos_0_8;
#line 1205 "trace_gen.m"
            ll_backend__trace_gen__STATE_VARIABLE_CI_48_48 = ll_backend__trace_gen__STATE_VARIABLE_CI_0_11;
#line 1205 "trace_gen.m"
          }
#line 1207 "trace_gen.m"
        else
#line 1208 "trace_gen.m"
          {
#line 1208 "trace_gen.m"
            MR_Word ll_backend__trace_gen__VarInfo_40;
#line 1208 "trace_gen.m"
            MR_Word ll_backend__trace_gen__Lval_66;
#line 1208 "trace_gen.m"
            MR_Word ll_backend__trace_gen__Type_67;
#line 1208 "trace_gen.m"
            MR_String ll_backend__trace_gen__Name_69;
#line 1208 "trace_gen.m"
            MR_Word ll_backend__trace_gen__LiveType_71;
#line 1208 "trace_gen.m"
            MR_Word ll_backend__trace_gen__TypeVars_72;
#line 1208 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_74_74;
#line 1224 "trace_gen.m"
            MR_String ll_backend__trace_gen__SearchName_68;

#line 1220 "trace_gen.m"
            {
#line 1220 "trace_gen.m"
              ll_backend__code_info__produce_variable_in_reg_or_stack_5_p_0(ll_backend__trace_gen__Var_26, &ll_backend__trace_gen__VarCode_34, &ll_backend__trace_gen__Lval_66, ll_backend__trace_gen__STATE_VARIABLE_CI_0_11, &ll_backend__trace_gen__STATE_VARIABLE_CI_48_48);
            }
#line 1221 "trace_gen.m"
            {
#line 1221 "trace_gen.m"
              ll_backend__trace_gen__Type_67 = ll_backend__code_info__variable_type_2_f_0(ll_backend__trace_gen__STATE_VARIABLE_CI_48_48, ll_backend__trace_gen__Var_26);
            }
#line 1222 "trace_gen.m"
            {
#line 1222 "trace_gen.m"
              ll_backend__trace_gen__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__trace_gen__VarSet_2, ll_backend__trace_gen__Var_26, &ll_backend__trace_gen__SearchName_68);
            }
#line 1224 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 1223 "trace_gen.m"
              ll_backend__trace_gen__Name_69 = ll_backend__trace_gen__SearchName_68;
#line 1224 "trace_gen.m"
            else
#line 1225 "trace_gen.m"
              ll_backend__trace_gen__Name_69 = (MR_String) "";
#line 1234 "trace_gen.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1235 "trace_gen.m"
            {
#line 1235 "trace_gen.m"
              ll_backend__trace_gen__LiveType_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1235 "trace_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__trace_gen__LiveType_71, 0) = ((MR_Box) (ll_backend__trace_gen__Var_26));
#line 1235 "trace_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__trace_gen__LiveType_71, 1) = ((MR_Box) (ll_backend__trace_gen__Name_69));
#line 1235 "trace_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__trace_gen__LiveType_71, 2) = ((MR_Box) (ll_backend__trace_gen__Type_67));
#line 1235 "trace_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__trace_gen__LiveType_71, 3) = NULL;
#line 1235 "trace_gen.m"
            }
#line 1236 "trace_gen.m"
            {
#line 1236 "trace_gen.m"
              ll_backend__trace_gen__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1236 "trace_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_74_74, 0) = ((MR_Box) (ll_backend__trace_gen__Lval_66));
#line 1236 "trace_gen.m"
            }
#line 1236 "trace_gen.m"
            {
#line 1236 "trace_gen.m"
              ll_backend__trace_gen__VarInfo_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1236 "trace_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__trace_gen__VarInfo_40, 0) = ((MR_Box) (ll_backend__trace_gen__V_74_74));
#line 1236 "trace_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__trace_gen__VarInfo_40, 1) = ((MR_Box) (ll_backend__trace_gen__LiveType_71));
#line 1236 "trace_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__trace_gen__VarInfo_40, 2) = ((MR_Box) ((MR_String) "trace"));
#line 1236 "trace_gen.m"
            }
#line 1237 "trace_gen.m"
            {
#line 1237 "trace_gen.m"
              parse_tree__prog_type__type_vars_2_p_0(ll_backend__trace_gen__Type_67, &ll_backend__trace_gen__TypeVars_72);
            }
#line 1238 "trace_gen.m"
            {
#line 1238 "trace_gen.m"
              mercury__set__insert_list_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[3], ll_backend__trace_gen__TypeVars_72, ll_backend__trace_gen__STATE_VARIABLE_TVars_0_6, &ll_backend__trace_gen__STATE_VARIABLE_TVars_47_47);
            }
#line 1210 "trace_gen.m"
            {
#line 1210 "trace_gen.m"
              ll_backend__trace_gen__STATE_VARIABLE_VarInfos_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1210 "trace_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__trace_gen__STATE_VARIABLE_VarInfos_49_49, 0) = ((MR_Box) (ll_backend__trace_gen__VarInfo_40));
#line 1210 "trace_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__trace_gen__STATE_VARIABLE_VarInfos_49_49, 1) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_VarInfos_0_8));
#line 1210 "trace_gen.m"
            }
#line 1208 "trace_gen.m"
          }
#line 1212 "trace_gen.m"
        {
#line 1212 "trace_gen.m"
          ll_backend__trace_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_p_0(ll_backend__trace_gen__Vars_27, ll_backend__trace_gen__VarSet_2, ll_backend__trace_gen__VarTypes_3, ll_backend__trace_gen__STATE_VARIABLE_TVars_47_47, ll_backend__trace_gen__STATE_VARIABLE_TVars_7, ll_backend__trace_gen__STATE_VARIABLE_VarInfos_49_49, ll_backend__trace_gen__STATE_VARIABLE_VarInfos_9, &ll_backend__trace_gen__VarsCode_35, ll_backend__trace_gen__STATE_VARIABLE_CI_48_48, ll_backend__trace_gen__STATE_VARIABLE_CI_12);
        }
#line 1200 "trace_gen.m"
        {
#line 1200 "trace_gen.m"
          *ll_backend__trace_gen__HeadVar__10_10 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_54_54, ll_backend__trace_gen__VarCode_34, ll_backend__trace_gen__VarsCode_35);
        }
#line 1200 "trace_gen.m"
      }
#line 1198 "trace_gen.m"
  }
#line 1193 "trace_gen.m"
}

#line 937 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__937__1_2_p_0(
#line 937 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeFromFullLval_17,
#line 937 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_62)
#line 937 "trace_gen.m"
{
#line 937 "trace_gen.m"
  {
#line 937 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 937 "trace_gen.m"
    {
#line 937 "trace_gen.m"
      return ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[1], ((MR_Box) (ll_backend__trace_gen__MaybeFromFullLval_17)), ((MR_Box) (ll_backend__trace_gen__HeadVar__2_62)));
    }
#line 937 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 937 "trace_gen.m"
  }
#line 937 "trace_gen.m"
}

#line 931 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__931__1_2_p_0(
#line 931 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeRedoLabelLval_16,
#line 931 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_57)
#line 931 "trace_gen.m"
{
#line 931 "trace_gen.m"
  {
#line 931 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 931 "trace_gen.m"
    {
#line 931 "trace_gen.m"
      return ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[0], ((MR_Box) (ll_backend__trace_gen__MaybeRedoLabelLval_16)), ((MR_Box) (ll_backend__trace_gen__HeadVar__2_57)));
    }
#line 931 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 931 "trace_gen.m"
  }
#line 931 "trace_gen.m"
}

#line 1173 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__maybe_setup_redo_event__1173__1_2_p_0(
#line 1173 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Lval_8,
#line 1173 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_20)
#line 1173 "trace_gen.m"
{
#line 1173 "trace_gen.m"
  {
#line 1173 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1173 "trace_gen.m"
    {
#line 1173 "trace_gen.m"
      return ll_backend__trace_gen__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__trace_gen__Lval_8, ll_backend__trace_gen__HeadVar__2_20);
    }
#line 1173 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 1173 "trace_gen.m"
  }
#line 1173 "trace_gen.m"
}

#line 95 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen____Compare____trace_slot_info_0_0(
#line 95 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
#line 95 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 95 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3)
#line 95 "trace_gen.m"
{
#line 95 "trace_gen.m"
  {
#line 95 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 95 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastX_21 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;
#line 95 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastY_22 = (MR_Integer) ll_backend__trace_gen__HeadVar__3_3;

#line 95 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_21 == ll_backend__trace_gen__CastY_22);
#line 95 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 2268 "ll_backend.trace_gen.c"
      *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 95 "trace_gen.m"
    else
#line 95 "trace_gen.m"
      {
#line 95 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 95 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 95 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 95 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 3)));
#line 95 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 4)));
#line 95 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 5)));
#line 95 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 95 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 95 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 2)));
#line 95 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 3)));
#line 95 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 4)));
#line 95 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 5)));
#line 95 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_16_16;

#line 95 "trace_gen.m"
        {
#line 95 "trace_gen.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[10], &ll_backend__trace_gen__V_16_16, ((MR_Box) (ll_backend__trace_gen__V_4_4)), ((MR_Box) (ll_backend__trace_gen__V_10_10)));
        }
#line 2306 "ll_backend.trace_gen.c"
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_16_16 == (MR_Integer) 0);
#line 95 "trace_gen.m"
        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 95 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 95 "trace_gen.m"
          *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_16_16;
#line 95 "trace_gen.m"
        else
#line 95 "trace_gen.m"
          {
#line 95 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_17_17;

#line 95 "trace_gen.m"
            {
#line 95 "trace_gen.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[10], &ll_backend__trace_gen__V_17_17, ((MR_Box) (ll_backend__trace_gen__V_5_5)), ((MR_Box) (ll_backend__trace_gen__V_11_11)));
            }
#line 2326 "ll_backend.trace_gen.c"
            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_17_17 == (MR_Integer) 0);
#line 95 "trace_gen.m"
            ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 95 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 95 "trace_gen.m"
              *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_17_17;
#line 95 "trace_gen.m"
            else
#line 95 "trace_gen.m"
              {
#line 95 "trace_gen.m"
                MR_Word ll_backend__trace_gen__V_18_18;

#line 95 "trace_gen.m"
                {
#line 95 "trace_gen.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[10], &ll_backend__trace_gen__V_18_18, ((MR_Box) (ll_backend__trace_gen__V_6_6)), ((MR_Box) (ll_backend__trace_gen__V_12_12)));
                }
#line 2346 "ll_backend.trace_gen.c"
                ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_18_18 == (MR_Integer) 0);
#line 95 "trace_gen.m"
                ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 95 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 95 "trace_gen.m"
                  *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_18_18;
#line 95 "trace_gen.m"
                else
#line 95 "trace_gen.m"
                  {
#line 95 "trace_gen.m"
                    MR_Word ll_backend__trace_gen__V_19_19;

#line 95 "trace_gen.m"
                    {
#line 95 "trace_gen.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[10], &ll_backend__trace_gen__V_19_19, ((MR_Box) (ll_backend__trace_gen__V_7_7)), ((MR_Box) (ll_backend__trace_gen__V_13_13)));
                    }
#line 2366 "ll_backend.trace_gen.c"
                    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_19_19 == (MR_Integer) 0);
#line 95 "trace_gen.m"
                    ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 95 "trace_gen.m"
                    if (ll_backend__trace_gen__succeeded)
#line 95 "trace_gen.m"
                      *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_19_19;
#line 95 "trace_gen.m"
                    else
#line 95 "trace_gen.m"
                      {
#line 95 "trace_gen.m"
                        MR_Word ll_backend__trace_gen__V_20_20;

#line 95 "trace_gen.m"
                        {
#line 95 "trace_gen.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[10], &ll_backend__trace_gen__V_20_20, ((MR_Box) (ll_backend__trace_gen__V_8_8)), ((MR_Box) (ll_backend__trace_gen__V_14_14)));
                        }
#line 2386 "ll_backend.trace_gen.c"
                        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_20_20 == (MR_Integer) 0);
#line 95 "trace_gen.m"
                        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 95 "trace_gen.m"
                        if (ll_backend__trace_gen__succeeded)
#line 95 "trace_gen.m"
                          *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_20_20;
#line 95 "trace_gen.m"
                        else
#line 95 "trace_gen.m"
                          {
#line 95 "trace_gen.m"
                            {
#line 95 "trace_gen.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[10], ll_backend__trace_gen__HeadVar__1_1, ((MR_Box) (ll_backend__trace_gen__V_9_9)), ((MR_Box) (ll_backend__trace_gen__V_15_15)));
#line 95 "trace_gen.m"
                              return;
                            }
#line 95 "trace_gen.m"
                          }
#line 95 "trace_gen.m"
                      }
#line 95 "trace_gen.m"
                  }
#line 95 "trace_gen.m"
              }
#line 95 "trace_gen.m"
          }
#line 95 "trace_gen.m"
      }
#line 95 "trace_gen.m"
  }
#line 95 "trace_gen.m"
}

#line 95 "trace_gen.m"
MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_slot_info_0_0(
#line 95 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 95 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2)
#line 95 "trace_gen.m"
{
#line 95 "trace_gen.m"
  {
#line 95 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 95 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastX_15 = (MR_Integer) ll_backend__trace_gen__HeadVar__1_1;
#line 95 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastY_16 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;

#line 95 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_15 == ll_backend__trace_gen__CastY_16);
#line 95 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 95 "trace_gen.m"
      ll_backend__trace_gen__succeeded = MR_TRUE;
#line 95 "trace_gen.m"
    else
#line 95 "trace_gen.m"
      {
#line 95 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_18_18;
#line 95 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_19_19;
#line 95 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_20_20;
#line 95 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_21_21;
#line 95 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_22_22;
#line 95 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 95 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 95 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 95 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 3)));
#line 95 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 4)));
#line 95 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 5)));
#line 95 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 95 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 95 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 95 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 3)));
#line 95 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 4)));
#line 95 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 5)));

#line 2485 "ll_backend.trace_gen.c"
        {
#line 2487 "ll_backend.trace_gen.c"
          ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[10], ((MR_Box) (ll_backend__trace_gen__V_3_3)), ((MR_Box) (ll_backend__trace_gen__V_9_9)));
        }
#line 95 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 95 "trace_gen.m"
          {
#line 2494 "ll_backend.trace_gen.c"
            ll_backend__trace_gen__TypeInfo_18_18 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[10];
#line 2496 "ll_backend.trace_gen.c"
            {
#line 2498 "ll_backend.trace_gen.c"
              ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_18_18, ((MR_Box) (ll_backend__trace_gen__V_4_4)), ((MR_Box) (ll_backend__trace_gen__V_10_10)));
            }
#line 95 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 95 "trace_gen.m"
              {
#line 2505 "ll_backend.trace_gen.c"
                ll_backend__trace_gen__TypeInfo_19_19 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[10];
#line 2507 "ll_backend.trace_gen.c"
                {
#line 2509 "ll_backend.trace_gen.c"
                  ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_19_19, ((MR_Box) (ll_backend__trace_gen__V_5_5)), ((MR_Box) (ll_backend__trace_gen__V_11_11)));
                }
#line 95 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 95 "trace_gen.m"
                  {
#line 2516 "ll_backend.trace_gen.c"
                    ll_backend__trace_gen__TypeInfo_20_20 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[10];
#line 2518 "ll_backend.trace_gen.c"
                    {
#line 2520 "ll_backend.trace_gen.c"
                      ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_20_20, ((MR_Box) (ll_backend__trace_gen__V_6_6)), ((MR_Box) (ll_backend__trace_gen__V_12_12)));
                    }
#line 95 "trace_gen.m"
                    if (ll_backend__trace_gen__succeeded)
#line 95 "trace_gen.m"
                      {
#line 2527 "ll_backend.trace_gen.c"
                        ll_backend__trace_gen__TypeInfo_21_21 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[10];
#line 2529 "ll_backend.trace_gen.c"
                        {
#line 2531 "ll_backend.trace_gen.c"
                          ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_21_21, ((MR_Box) (ll_backend__trace_gen__V_7_7)), ((MR_Box) (ll_backend__trace_gen__V_13_13)));
                        }
#line 95 "trace_gen.m"
                        if (ll_backend__trace_gen__succeeded)
#line 95 "trace_gen.m"
                          {
#line 2538 "ll_backend.trace_gen.c"
                            ll_backend__trace_gen__TypeInfo_22_22 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[10];
#line 2540 "ll_backend.trace_gen.c"
                            {
#line 2542 "ll_backend.trace_gen.c"
                              return ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_22_22, ((MR_Box) (ll_backend__trace_gen__V_8_8)), ((MR_Box) (ll_backend__trace_gen__V_14_14)));
                            }
#line 95 "trace_gen.m"
                          }
#line 95 "trace_gen.m"
                      }
#line 95 "trace_gen.m"
                  }
#line 95 "trace_gen.m"
              }
#line 95 "trace_gen.m"
          }
#line 95 "trace_gen.m"
      }
#line 95 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 95 "trace_gen.m"
  }
#line 95 "trace_gen.m"
}

#line 263 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen____Compare____trace_port_info_0_0(
#line 263 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
#line 263 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 263 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3)
#line 263 "trace_gen.m"
{
#line 263 "trace_gen.m"
  {
#line 263 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 263 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastX_66 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;
#line 263 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastY_67 = (MR_Integer) ll_backend__trace_gen__HeadVar__3_3;

#line 263 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_66 == ll_backend__trace_gen__CastY_67);
#line 263 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 2588 "ll_backend.trace_gen.c"
      *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 263 "trace_gen.m"
    else
#line 263 "trace_gen.m"
      if ((ll_backend__trace_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 263 "trace_gen.m"
        if ((ll_backend__trace_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 263 "trace_gen.m"
          *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 263 "trace_gen.m"
        else
#line 263 "trace_gen.m"
          if (((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2602 "ll_backend.trace_gen.c"
            *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "trace_gen.m"
          else
#line 263 "trace_gen.m"
            if (((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2608 "ll_backend.trace_gen.c"
              *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "trace_gen.m"
            else
#line 263 "trace_gen.m"
              if (((((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2614 "ll_backend.trace_gen.c"
                *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "trace_gen.m"
              else
#line 2618 "ll_backend.trace_gen.c"
                *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "trace_gen.m"
      else
#line 263 "trace_gen.m"
        if (((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 263 "trace_gen.m"
          {
#line 263 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 263 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));

#line 263 "trace_gen.m"
            if ((ll_backend__trace_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2633 "ll_backend.trace_gen.c"
              *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "trace_gen.m"
            else
#line 263 "trace_gen.m"
              if (((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 263 "trace_gen.m"
                {
#line 263 "trace_gen.m"
                  MR_Word ll_backend__trace_gen__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 263 "trace_gen.m"
                  MR_Word ll_backend__trace_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 263 "trace_gen.m"
                  MR_Word ll_backend__trace_gen__V_37_37;

#line 263 "trace_gen.m"
                  {
#line 263 "trace_gen.m"
                    mdbcomp__goal_path____Compare____forward_goal_path_0_0(&ll_backend__trace_gen__V_37_37, ll_backend__trace_gen__V_75_75, ll_backend__trace_gen__V_35_35);
                  }
#line 2653 "ll_backend.trace_gen.c"
                  ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_37_37 == (MR_Integer) 0);
#line 263 "trace_gen.m"
                  ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 263 "trace_gen.m"
                  if (ll_backend__trace_gen__succeeded)
#line 263 "trace_gen.m"
                    *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_37_37;
#line 263 "trace_gen.m"
                  else
#line 263 "trace_gen.m"
                    {
#line 263 "trace_gen.m"
                      {
#line 263 "trace_gen.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[8], ll_backend__trace_gen__HeadVar__1_1, ((MR_Box) (ll_backend__trace_gen__V_74_74)), ((MR_Box) (ll_backend__trace_gen__V_36_36)));
#line 263 "trace_gen.m"
                        return;
                      }
#line 263 "trace_gen.m"
                    }
#line 263 "trace_gen.m"
                }
#line 263 "trace_gen.m"
              else
#line 263 "trace_gen.m"
                if (((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2680 "ll_backend.trace_gen.c"
                  *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "trace_gen.m"
                else
#line 263 "trace_gen.m"
                  if (((((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2686 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "trace_gen.m"
                  else
#line 2690 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "trace_gen.m"
          }
#line 263 "trace_gen.m"
        else
#line 263 "trace_gen.m"
          if (((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 263 "trace_gen.m"
            {
#line 263 "trace_gen.m"
              MR_Word ll_backend__trace_gen__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 263 "trace_gen.m"
              MR_Word ll_backend__trace_gen__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));

#line 263 "trace_gen.m"
              if ((ll_backend__trace_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2707 "ll_backend.trace_gen.c"
                *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "trace_gen.m"
              else
#line 263 "trace_gen.m"
                if (((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2713 "ll_backend.trace_gen.c"
                  *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "trace_gen.m"
                else
#line 263 "trace_gen.m"
                  if (((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 263 "trace_gen.m"
                    {
#line 263 "trace_gen.m"
                      MR_Word ll_backend__trace_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 263 "trace_gen.m"
                      MR_Word ll_backend__trace_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 263 "trace_gen.m"
                      MR_Word ll_backend__trace_gen__V_16_16;

#line 263 "trace_gen.m"
                      {
#line 263 "trace_gen.m"
                        mdbcomp__goal_path____Compare____forward_goal_path_0_0(&ll_backend__trace_gen__V_16_16, ll_backend__trace_gen__V_78_78, ll_backend__trace_gen__V_14_14);
                      }
#line 2733 "ll_backend.trace_gen.c"
                      ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_16_16 == (MR_Integer) 0);
#line 263 "trace_gen.m"
                      ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 263 "trace_gen.m"
                      if (ll_backend__trace_gen__succeeded)
#line 263 "trace_gen.m"
                        *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_16_16;
#line 263 "trace_gen.m"
                      else
#line 263 "trace_gen.m"
                        {
#line 263 "trace_gen.m"
                          {
#line 263 "trace_gen.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[9], ll_backend__trace_gen__HeadVar__1_1, ((MR_Box) (ll_backend__trace_gen__V_77_77)), ((MR_Box) (ll_backend__trace_gen__V_15_15)));
#line 263 "trace_gen.m"
                            return;
                          }
#line 263 "trace_gen.m"
                        }
#line 263 "trace_gen.m"
                    }
#line 263 "trace_gen.m"
                  else
#line 263 "trace_gen.m"
                    if (((((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2760 "ll_backend.trace_gen.c"
                      *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "trace_gen.m"
                    else
#line 2764 "ll_backend.trace_gen.c"
                      *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "trace_gen.m"
            }
#line 263 "trace_gen.m"
          else
#line 263 "trace_gen.m"
            if (((((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 263 "trace_gen.m"
              {
#line 263 "trace_gen.m"
                MR_Word ll_backend__trace_gen__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));

#line 263 "trace_gen.m"
                if ((ll_backend__trace_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2779 "ll_backend.trace_gen.c"
                  *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "trace_gen.m"
                else
#line 263 "trace_gen.m"
                  if (((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2785 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "trace_gen.m"
                  else
#line 263 "trace_gen.m"
                    if (((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2791 "ll_backend.trace_gen.c"
                      *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "trace_gen.m"
                    else
#line 263 "trace_gen.m"
                      if (((((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 263 "trace_gen.m"
                        {
#line 263 "trace_gen.m"
                          MR_Word ll_backend__trace_gen__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));

#line 263 "trace_gen.m"
                          {
#line 263 "trace_gen.m"
                            mdbcomp__goal_path____Compare____forward_goal_path_0_0(ll_backend__trace_gen__HeadVar__1_1, ll_backend__trace_gen__V_76_76, ll_backend__trace_gen__V_52_52);
#line 263 "trace_gen.m"
                            return;
                          }
#line 263 "trace_gen.m"
                        }
#line 263 "trace_gen.m"
                      else
#line 2813 "ll_backend.trace_gen.c"
                        *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "trace_gen.m"
              }
#line 263 "trace_gen.m"
            else
#line 263 "trace_gen.m"
              {
#line 263 "trace_gen.m"
                MR_Word ll_backend__trace_gen__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));

#line 263 "trace_gen.m"
                if ((ll_backend__trace_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2826 "ll_backend.trace_gen.c"
                  *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "trace_gen.m"
                else
#line 263 "trace_gen.m"
                  if (((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2832 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "trace_gen.m"
                  else
#line 263 "trace_gen.m"
                    if (((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2838 "ll_backend.trace_gen.c"
                      *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "trace_gen.m"
                    else
#line 263 "trace_gen.m"
                      if (((((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2844 "ll_backend.trace_gen.c"
                        *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "trace_gen.m"
                      else
#line 263 "trace_gen.m"
                        {
#line 263 "trace_gen.m"
                          MR_Word ll_backend__trace_gen__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));

#line 263 "trace_gen.m"
                          {
#line 263 "trace_gen.m"
                            mdbcomp__goal_path____Compare____forward_goal_path_0_0(ll_backend__trace_gen__HeadVar__1_1, ll_backend__trace_gen__V_79_79, ll_backend__trace_gen__V_65_65);
#line 263 "trace_gen.m"
                            return;
                          }
#line 263 "trace_gen.m"
                        }
#line 263 "trace_gen.m"
              }
#line 263 "trace_gen.m"
  }
#line 263 "trace_gen.m"
}

#line 263 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_port_info_0_0(
#line 263 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 263 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2)
#line 263 "trace_gen.m"
{
#line 263 "trace_gen.m"
  {
#line 263 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 263 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastX_17 = (MR_Integer) ll_backend__trace_gen__HeadVar__1_1;
#line 263 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastY_18 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;

#line 263 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_17 == ll_backend__trace_gen__CastY_18);
#line 263 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 263 "trace_gen.m"
      ll_backend__trace_gen__succeeded = MR_TRUE;
#line 263 "trace_gen.m"
    else
#line 263 "trace_gen.m"
      if ((ll_backend__trace_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 263 "trace_gen.m"
        {
#line 263 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__CastX_3 = (MR_Integer) ll_backend__trace_gen__HeadVar__1_1;
#line 263 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__CastY_4 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;

#line 263 "trace_gen.m"
          ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastY_4 == ll_backend__trace_gen__CastX_3);
#line 263 "trace_gen.m"
        }
#line 263 "trace_gen.m"
      else
#line 263 "trace_gen.m"
        if (((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 263 "trace_gen.m"
          {
#line 263 "trace_gen.m"
            MR_Word ll_backend__trace_gen__TypeInfo_20_20;
#line 263 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 263 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 263 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_11_11;
#line 263 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_12_12;

#line 263 "trace_gen.m"
            ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 263 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 263 "trace_gen.m"
              {
#line 263 "trace_gen.m"
                ll_backend__trace_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 263 "trace_gen.m"
                ll_backend__trace_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 2935 "ll_backend.trace_gen.c"
                {
#line 2937 "ll_backend.trace_gen.c"
                  ll_backend__trace_gen__succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(ll_backend__trace_gen__V_9_9, ll_backend__trace_gen__V_11_11);
                }
#line 263 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 263 "trace_gen.m"
                  {
#line 2944 "ll_backend.trace_gen.c"
                    ll_backend__trace_gen__TypeInfo_20_20 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[8];
#line 2946 "ll_backend.trace_gen.c"
                    {
#line 2948 "ll_backend.trace_gen.c"
                      return ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_20_20, ((MR_Box) (ll_backend__trace_gen__V_10_10)), ((MR_Box) (ll_backend__trace_gen__V_12_12)));
                    }
#line 263 "trace_gen.m"
                  }
#line 263 "trace_gen.m"
              }
#line 263 "trace_gen.m"
          }
#line 263 "trace_gen.m"
        else
#line 263 "trace_gen.m"
          if (((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 263 "trace_gen.m"
            {
#line 263 "trace_gen.m"
              MR_Word ll_backend__trace_gen__TypeInfo_23_23;
#line 263 "trace_gen.m"
              MR_Word ll_backend__trace_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 263 "trace_gen.m"
              MR_Word ll_backend__trace_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 263 "trace_gen.m"
              MR_Word ll_backend__trace_gen__V_7_7;
#line 263 "trace_gen.m"
              MR_Word ll_backend__trace_gen__V_8_8;

#line 263 "trace_gen.m"
              ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 263 "trace_gen.m"
              if (ll_backend__trace_gen__succeeded)
#line 263 "trace_gen.m"
                {
#line 263 "trace_gen.m"
                  ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 263 "trace_gen.m"
                  ll_backend__trace_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 2984 "ll_backend.trace_gen.c"
                  {
#line 2986 "ll_backend.trace_gen.c"
                    ll_backend__trace_gen__succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(ll_backend__trace_gen__V_5_5, ll_backend__trace_gen__V_7_7);
                  }
#line 263 "trace_gen.m"
                  if (ll_backend__trace_gen__succeeded)
#line 263 "trace_gen.m"
                    {
#line 2993 "ll_backend.trace_gen.c"
                      ll_backend__trace_gen__TypeInfo_23_23 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[9];
#line 2995 "ll_backend.trace_gen.c"
                      {
#line 2997 "ll_backend.trace_gen.c"
                        return ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_23_23, ((MR_Box) (ll_backend__trace_gen__V_6_6)), ((MR_Box) (ll_backend__trace_gen__V_8_8)));
                      }
#line 263 "trace_gen.m"
                    }
#line 263 "trace_gen.m"
                }
#line 263 "trace_gen.m"
            }
#line 263 "trace_gen.m"
          else
#line 263 "trace_gen.m"
            if (((((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 263 "trace_gen.m"
              {
#line 263 "trace_gen.m"
                MR_Word ll_backend__trace_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 263 "trace_gen.m"
                MR_Word ll_backend__trace_gen__V_14_14;

#line 263 "trace_gen.m"
                ll_backend__trace_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 263 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 263 "trace_gen.m"
                  {
#line 263 "trace_gen.m"
                    ll_backend__trace_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 3025 "ll_backend.trace_gen.c"
                    {
#line 3027 "ll_backend.trace_gen.c"
                      return ll_backend__trace_gen__succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(ll_backend__trace_gen__V_13_13, ll_backend__trace_gen__V_14_14);
                    }
#line 263 "trace_gen.m"
                  }
#line 263 "trace_gen.m"
              }
#line 263 "trace_gen.m"
            else
#line 263 "trace_gen.m"
              {
#line 263 "trace_gen.m"
                MR_Word ll_backend__trace_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 263 "trace_gen.m"
                MR_Word ll_backend__trace_gen__V_16_16;

#line 263 "trace_gen.m"
                ll_backend__trace_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 263 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 263 "trace_gen.m"
                  {
#line 263 "trace_gen.m"
                    ll_backend__trace_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 3051 "ll_backend.trace_gen.c"
                    {
#line 3053 "ll_backend.trace_gen.c"
                      return ll_backend__trace_gen__succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(ll_backend__trace_gen__V_15_15, ll_backend__trace_gen__V_16_16);
                    }
#line 263 "trace_gen.m"
                  }
#line 263 "trace_gen.m"
              }
#line 263 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 263 "trace_gen.m"
  }
#line 263 "trace_gen.m"
}

#line 1351 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen____Compare____trace_info_0_0(
#line 1351 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
#line 1351 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 1351 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3)
#line 1351 "trace_gen.m"
{
#line 1351 "trace_gen.m"
  {
#line 1351 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 1351 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastX_30 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;
#line 1351 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastY_31 = (MR_Integer) ll_backend__trace_gen__HeadVar__3_3;

#line 1351 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_30 == ll_backend__trace_gen__CastY_31);
#line 1351 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 3091 "ll_backend.trace_gen.c"
      *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 1351 "trace_gen.m"
    else
#line 1351 "trace_gen.m"
      {
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 3)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 4)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 5)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 6)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 7)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 8)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 2)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 3)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 4)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 5)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 6)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 7)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 8)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_22_22;

#line 1351 "trace_gen.m"
        {
#line 1351 "trace_gen.m"
          libs__trace_params____Compare____trace_level_0_0(&ll_backend__trace_gen__V_22_22, ll_backend__trace_gen__V_4_4, ll_backend__trace_gen__V_13_13);
        }
#line 3141 "ll_backend.trace_gen.c"
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_22_22 == (MR_Integer) 0);
#line 1351 "trace_gen.m"
        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1351 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 1351 "trace_gen.m"
          *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_22_22;
#line 1351 "trace_gen.m"
        else
#line 1351 "trace_gen.m"
          {
#line 1351 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_23_23;

#line 1351 "trace_gen.m"
            {
#line 1351 "trace_gen.m"
              mercury__builtin__compare_3_p_0((MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_items_0, &ll_backend__trace_gen__V_23_23, ((MR_Box) (ll_backend__trace_gen__V_5_5)), ((MR_Box) (ll_backend__trace_gen__V_14_14)));
            }
#line 3161 "ll_backend.trace_gen.c"
            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_23_23 == (MR_Integer) 0);
#line 1351 "trace_gen.m"
            ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1351 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 1351 "trace_gen.m"
              *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_23_23;
#line 1351 "trace_gen.m"
            else
#line 1351 "trace_gen.m"
              {
#line 1351 "trace_gen.m"
                MR_Word ll_backend__trace_gen__V_24_24;

#line 1351 "trace_gen.m"
                {
#line 1351 "trace_gen.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[1], &ll_backend__trace_gen__V_24_24, ((MR_Box) (ll_backend__trace_gen__V_6_6)), ((MR_Box) (ll_backend__trace_gen__V_15_15)));
                }
#line 3181 "ll_backend.trace_gen.c"
                ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_24_24 == (MR_Integer) 0);
#line 1351 "trace_gen.m"
                ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1351 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 1351 "trace_gen.m"
                  *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_24_24;
#line 1351 "trace_gen.m"
                else
#line 1351 "trace_gen.m"
                  {
#line 1351 "trace_gen.m"
                    MR_Word ll_backend__trace_gen__V_25_25;

#line 1351 "trace_gen.m"
                    {
#line 1351 "trace_gen.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[1], &ll_backend__trace_gen__V_25_25, ((MR_Box) (ll_backend__trace_gen__V_7_7)), ((MR_Box) (ll_backend__trace_gen__V_16_16)));
                    }
#line 3201 "ll_backend.trace_gen.c"
                    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_25_25 == (MR_Integer) 0);
#line 1351 "trace_gen.m"
                    ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1351 "trace_gen.m"
                    if (ll_backend__trace_gen__succeeded)
#line 1351 "trace_gen.m"
                      *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_25_25;
#line 1351 "trace_gen.m"
                    else
#line 1351 "trace_gen.m"
                      {
#line 1351 "trace_gen.m"
                        MR_Word ll_backend__trace_gen__V_26_26;

#line 1351 "trace_gen.m"
                        {
#line 1351 "trace_gen.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[6], &ll_backend__trace_gen__V_26_26, ((MR_Box) (ll_backend__trace_gen__V_8_8)), ((MR_Box) (ll_backend__trace_gen__V_17_17)));
                        }
#line 3221 "ll_backend.trace_gen.c"
                        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_26_26 == (MR_Integer) 0);
#line 1351 "trace_gen.m"
                        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1351 "trace_gen.m"
                        if (ll_backend__trace_gen__succeeded)
#line 1351 "trace_gen.m"
                          *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_26_26;
#line 1351 "trace_gen.m"
                        else
#line 1351 "trace_gen.m"
                          {
#line 1351 "trace_gen.m"
                            MR_Word ll_backend__trace_gen__V_27_27;

#line 1351 "trace_gen.m"
                            {
#line 1351 "trace_gen.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[1], &ll_backend__trace_gen__V_27_27, ((MR_Box) (ll_backend__trace_gen__V_9_9)), ((MR_Box) (ll_backend__trace_gen__V_18_18)));
                            }
#line 3241 "ll_backend.trace_gen.c"
                            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_27_27 == (MR_Integer) 0);
#line 1351 "trace_gen.m"
                            ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1351 "trace_gen.m"
                            if (ll_backend__trace_gen__succeeded)
#line 1351 "trace_gen.m"
                              *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_27_27;
#line 1351 "trace_gen.m"
                            else
#line 1351 "trace_gen.m"
                              {
#line 1351 "trace_gen.m"
                                MR_Word ll_backend__trace_gen__V_28_28;

#line 1351 "trace_gen.m"
                                {
#line 1351 "trace_gen.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[1], &ll_backend__trace_gen__V_28_28, ((MR_Box) (ll_backend__trace_gen__V_10_10)), ((MR_Box) (ll_backend__trace_gen__V_19_19)));
                                }
#line 3261 "ll_backend.trace_gen.c"
                                ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_28_28 == (MR_Integer) 0);
#line 1351 "trace_gen.m"
                                ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1351 "trace_gen.m"
                                if (ll_backend__trace_gen__succeeded)
#line 1351 "trace_gen.m"
                                  *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_28_28;
#line 1351 "trace_gen.m"
                                else
#line 1351 "trace_gen.m"
                                  {
#line 1351 "trace_gen.m"
                                    MR_Word ll_backend__trace_gen__V_29_29;

#line 1351 "trace_gen.m"
                                    {
#line 1351 "trace_gen.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[7], &ll_backend__trace_gen__V_29_29, ((MR_Box) (ll_backend__trace_gen__V_11_11)), ((MR_Box) (ll_backend__trace_gen__V_20_20)));
                                    }
#line 3281 "ll_backend.trace_gen.c"
                                    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_29_29 == (MR_Integer) 0);
#line 1351 "trace_gen.m"
                                    ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1351 "trace_gen.m"
                                    if (ll_backend__trace_gen__succeeded)
#line 1351 "trace_gen.m"
                                      *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_29_29;
#line 1351 "trace_gen.m"
                                    else
#line 1351 "trace_gen.m"
                                      {
#line 1351 "trace_gen.m"
                                        {
#line 1351 "trace_gen.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[0], ll_backend__trace_gen__HeadVar__1_1, ((MR_Box) (ll_backend__trace_gen__V_12_12)), ((MR_Box) (ll_backend__trace_gen__V_21_21)));
#line 1351 "trace_gen.m"
                                          return;
                                        }
#line 1351 "trace_gen.m"
                                      }
#line 1351 "trace_gen.m"
                                  }
#line 1351 "trace_gen.m"
                              }
#line 1351 "trace_gen.m"
                          }
#line 1351 "trace_gen.m"
                      }
#line 1351 "trace_gen.m"
                  }
#line 1351 "trace_gen.m"
              }
#line 1351 "trace_gen.m"
          }
#line 1351 "trace_gen.m"
      }
#line 1351 "trace_gen.m"
  }
#line 1351 "trace_gen.m"
}

#line 1351 "trace_gen.m"
MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_info_0_0(
#line 1351 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 1351 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2)
#line 1351 "trace_gen.m"
{
#line 1351 "trace_gen.m"
  {
#line 1351 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 1351 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastX_21 = (MR_Integer) ll_backend__trace_gen__HeadVar__1_1;
#line 1351 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastY_22 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;

#line 1351 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_21 == ll_backend__trace_gen__CastY_22);
#line 1351 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 1351 "trace_gen.m"
      ll_backend__trace_gen__succeeded = MR_TRUE;
#line 1351 "trace_gen.m"
    else
#line 1351 "trace_gen.m"
      {
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeCtorInfo_24_24;
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_25_25;
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_26_26;
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_27_27;
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_28_28;
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_29_29;
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_30_30;
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_31_31;
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 3)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 4)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 5)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 6)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 7)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 8)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 3)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 4)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 5)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 6)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 7)));
#line 1351 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 8)));

#line 3404 "ll_backend.trace_gen.c"
        {
#line 3406 "ll_backend.trace_gen.c"
          ll_backend__trace_gen__succeeded = libs__trace_params____Unify____trace_level_0_0(ll_backend__trace_gen__V_3_3, ll_backend__trace_gen__V_12_12);
        }
#line 1351 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 1351 "trace_gen.m"
          {
#line 3413 "ll_backend.trace_gen.c"
            ll_backend__trace_gen__TypeCtorInfo_24_24 = (MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_items_0;
#line 3415 "ll_backend.trace_gen.c"
            {
#line 3417 "ll_backend.trace_gen.c"
              ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeCtorInfo_24_24, ((MR_Box) (ll_backend__trace_gen__V_4_4)), ((MR_Box) (ll_backend__trace_gen__V_13_13)));
            }
#line 1351 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 1351 "trace_gen.m"
              {
#line 3424 "ll_backend.trace_gen.c"
                ll_backend__trace_gen__TypeInfo_25_25 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[1];
#line 3426 "ll_backend.trace_gen.c"
                {
#line 3428 "ll_backend.trace_gen.c"
                  ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_25_25, ((MR_Box) (ll_backend__trace_gen__V_5_5)), ((MR_Box) (ll_backend__trace_gen__V_14_14)));
                }
#line 1351 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 1351 "trace_gen.m"
                  {
#line 3435 "ll_backend.trace_gen.c"
                    ll_backend__trace_gen__TypeInfo_26_26 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[1];
#line 3437 "ll_backend.trace_gen.c"
                    {
#line 3439 "ll_backend.trace_gen.c"
                      ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_26_26, ((MR_Box) (ll_backend__trace_gen__V_6_6)), ((MR_Box) (ll_backend__trace_gen__V_15_15)));
                    }
#line 1351 "trace_gen.m"
                    if (ll_backend__trace_gen__succeeded)
#line 1351 "trace_gen.m"
                      {
#line 3446 "ll_backend.trace_gen.c"
                        ll_backend__trace_gen__TypeInfo_27_27 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[6];
#line 3448 "ll_backend.trace_gen.c"
                        {
#line 3450 "ll_backend.trace_gen.c"
                          ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_27_27, ((MR_Box) (ll_backend__trace_gen__V_7_7)), ((MR_Box) (ll_backend__trace_gen__V_16_16)));
                        }
#line 1351 "trace_gen.m"
                        if (ll_backend__trace_gen__succeeded)
#line 1351 "trace_gen.m"
                          {
#line 3457 "ll_backend.trace_gen.c"
                            ll_backend__trace_gen__TypeInfo_28_28 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[1];
#line 3459 "ll_backend.trace_gen.c"
                            {
#line 3461 "ll_backend.trace_gen.c"
                              ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_28_28, ((MR_Box) (ll_backend__trace_gen__V_8_8)), ((MR_Box) (ll_backend__trace_gen__V_17_17)));
                            }
#line 1351 "trace_gen.m"
                            if (ll_backend__trace_gen__succeeded)
#line 1351 "trace_gen.m"
                              {
#line 3468 "ll_backend.trace_gen.c"
                                ll_backend__trace_gen__TypeInfo_29_29 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[1];
#line 3470 "ll_backend.trace_gen.c"
                                {
#line 3472 "ll_backend.trace_gen.c"
                                  ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_29_29, ((MR_Box) (ll_backend__trace_gen__V_9_9)), ((MR_Box) (ll_backend__trace_gen__V_18_18)));
                                }
#line 1351 "trace_gen.m"
                                if (ll_backend__trace_gen__succeeded)
#line 1351 "trace_gen.m"
                                  {
#line 3479 "ll_backend.trace_gen.c"
                                    ll_backend__trace_gen__TypeInfo_30_30 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[7];
#line 3481 "ll_backend.trace_gen.c"
                                    {
#line 3483 "ll_backend.trace_gen.c"
                                      ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_30_30, ((MR_Box) (ll_backend__trace_gen__V_10_10)), ((MR_Box) (ll_backend__trace_gen__V_19_19)));
                                    }
#line 1351 "trace_gen.m"
                                    if (ll_backend__trace_gen__succeeded)
#line 1351 "trace_gen.m"
                                      {
#line 3490 "ll_backend.trace_gen.c"
                                        ll_backend__trace_gen__TypeInfo_31_31 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[0];
#line 3492 "ll_backend.trace_gen.c"
                                        {
#line 3494 "ll_backend.trace_gen.c"
                                          return ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_31_31, ((MR_Box) (ll_backend__trace_gen__V_11_11)), ((MR_Box) (ll_backend__trace_gen__V_20_20)));
                                        }
#line 1351 "trace_gen.m"
                                      }
#line 1351 "trace_gen.m"
                                  }
#line 1351 "trace_gen.m"
                              }
#line 1351 "trace_gen.m"
                          }
#line 1351 "trace_gen.m"
                      }
#line 1351 "trace_gen.m"
                  }
#line 1351 "trace_gen.m"
              }
#line 1351 "trace_gen.m"
          }
#line 1351 "trace_gen.m"
      }
#line 1351 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 1351 "trace_gen.m"
  }
#line 1351 "trace_gen.m"
}

#line 86 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen____Compare____negation_end_port_0_0(
#line 86 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
#line 86 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 86 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3)
#line 86 "trace_gen.m"
{
#line 86 "trace_gen.m"
  {
#line 86 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 86 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__Cast_HeadVar1_4 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;
#line 86 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__Cast_HeadVar2_5 = (MR_Integer) ll_backend__trace_gen__HeadVar__3_3;

#line 86 "trace_gen.m"
    {
#line 86 "trace_gen.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__trace_gen__HeadVar__1_1, ll_backend__trace_gen__Cast_HeadVar1_4, ll_backend__trace_gen__Cast_HeadVar2_5);
#line 86 "trace_gen.m"
      return;
    }
#line 86 "trace_gen.m"
  }
#line 86 "trace_gen.m"
}

#line 86 "trace_gen.m"
MR_bool MR_CALL 
ll_backend__trace_gen____Unify____negation_end_port_0_0(
#line 86 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_1,
#line 86 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2)
#line 86 "trace_gen.m"
{
#line 3563 "ll_backend.trace_gen.c"
  {
#line 3565 "ll_backend.trace_gen.c"
    MR_bool ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__HeadVar__2_1 == ll_backend__trace_gen__HeadVar__2_2);

#line 3568 "ll_backend.trace_gen.c"
    return ll_backend__trace_gen__succeeded;
#line 3570 "ll_backend.trace_gen.c"
  }
#line 86 "trace_gen.m"
}

#line 76 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen____Compare____external_trace_port_0_0(
#line 76 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
#line 76 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 76 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3)
#line 76 "trace_gen.m"
{
#line 76 "trace_gen.m"
  {
#line 76 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 76 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__Cast_HeadVar1_4 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;
#line 76 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__Cast_HeadVar2_5 = (MR_Integer) ll_backend__trace_gen__HeadVar__3_3;

#line 76 "trace_gen.m"
    {
#line 76 "trace_gen.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__trace_gen__HeadVar__1_1, ll_backend__trace_gen__Cast_HeadVar1_4, ll_backend__trace_gen__Cast_HeadVar2_5);
#line 76 "trace_gen.m"
      return;
    }
#line 76 "trace_gen.m"
  }
#line 76 "trace_gen.m"
}

#line 76 "trace_gen.m"
MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_trace_port_0_0(
#line 76 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_1,
#line 76 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2)
#line 76 "trace_gen.m"
{
#line 3616 "ll_backend.trace_gen.c"
  {
#line 3618 "ll_backend.trace_gen.c"
    MR_bool ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__HeadVar__2_1 == ll_backend__trace_gen__HeadVar__2_2);

#line 3621 "ll_backend.trace_gen.c"
    return ll_backend__trace_gen__succeeded;
#line 3623 "ll_backend.trace_gen.c"
  }
#line 76 "trace_gen.m"
}

#line 199 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen____Compare____external_event_info_0_0(
#line 199 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
#line 199 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 199 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3)
#line 199 "trace_gen.m"
{
#line 199 "trace_gen.m"
  {
#line 199 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 199 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastX_12 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;
#line 199 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastY_13 = (MR_Integer) ll_backend__trace_gen__HeadVar__3_3;

#line 199 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_12 == ll_backend__trace_gen__CastY_13);
#line 199 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 3652 "ll_backend.trace_gen.c"
      *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 199 "trace_gen.m"
    else
#line 199 "trace_gen.m"
      {
#line 199 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 199 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 199 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 199 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 199 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 199 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 2)));
#line 199 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_10_10;

#line 199 "trace_gen.m"
        {
#line 199 "trace_gen.m"
          ll_backend__llds____Compare____label_0_0(&ll_backend__trace_gen__V_10_10, ll_backend__trace_gen__V_4_4, ll_backend__trace_gen__V_7_7);
        }
#line 3678 "ll_backend.trace_gen.c"
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_10_10 == (MR_Integer) 0);
#line 199 "trace_gen.m"
        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 199 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 199 "trace_gen.m"
          *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_10_10;
#line 199 "trace_gen.m"
        else
#line 199 "trace_gen.m"
          {
#line 199 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_11_11;

#line 199 "trace_gen.m"
            {
#line 199 "trace_gen.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_2[0], &ll_backend__trace_gen__V_11_11, ((MR_Box) (ll_backend__trace_gen__V_5_5)), ((MR_Box) (ll_backend__trace_gen__V_8_8)));
            }
#line 3698 "ll_backend.trace_gen.c"
            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_11_11 == (MR_Integer) 0);
#line 199 "trace_gen.m"
            ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 199 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 199 "trace_gen.m"
              *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_11_11;
#line 199 "trace_gen.m"
            else
#line 199 "trace_gen.m"
              {
#line 199 "trace_gen.m"
                {
#line 199 "trace_gen.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[5], ll_backend__trace_gen__HeadVar__1_1, ((MR_Box) (ll_backend__trace_gen__V_6_6)), ((MR_Box) (ll_backend__trace_gen__V_9_9)));
#line 199 "trace_gen.m"
                  return;
                }
#line 199 "trace_gen.m"
              }
#line 199 "trace_gen.m"
          }
#line 199 "trace_gen.m"
      }
#line 199 "trace_gen.m"
  }
#line 199 "trace_gen.m"
}

#line 199 "trace_gen.m"
MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_event_info_0_0(
#line 199 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 199 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2)
#line 199 "trace_gen.m"
{
#line 199 "trace_gen.m"
  {
#line 199 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 199 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastX_9 = (MR_Integer) ll_backend__trace_gen__HeadVar__1_1;
#line 199 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastY_10 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;

#line 199 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_9 == ll_backend__trace_gen__CastY_10);
#line 199 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 199 "trace_gen.m"
      ll_backend__trace_gen__succeeded = MR_TRUE;
#line 199 "trace_gen.m"
    else
#line 199 "trace_gen.m"
      {
#line 199 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_12_12;
#line 199 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_13_13;
#line 199 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 199 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 199 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 199 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 199 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 199 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 2)));

#line 3773 "ll_backend.trace_gen.c"
        {
#line 3775 "ll_backend.trace_gen.c"
          ll_backend__trace_gen__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__trace_gen__V_3_3, ll_backend__trace_gen__V_6_6);
        }
#line 199 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 199 "trace_gen.m"
          {
#line 3782 "ll_backend.trace_gen.c"
            ll_backend__trace_gen__TypeInfo_12_12 = (MR_Word) &ll_backend__trace_gen_scalar_common_2[0];
#line 3784 "ll_backend.trace_gen.c"
            {
#line 3786 "ll_backend.trace_gen.c"
              ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_12_12, ((MR_Box) (ll_backend__trace_gen__V_4_4)), ((MR_Box) (ll_backend__trace_gen__V_7_7)));
            }
#line 199 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 199 "trace_gen.m"
              {
#line 3793 "ll_backend.trace_gen.c"
                ll_backend__trace_gen__TypeInfo_13_13 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[5];
#line 3795 "ll_backend.trace_gen.c"
                {
#line 3797 "ll_backend.trace_gen.c"
                  return ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_13_13, ((MR_Box) (ll_backend__trace_gen__V_5_5)), ((MR_Box) (ll_backend__trace_gen__V_8_8)));
                }
#line 199 "trace_gen.m"
              }
#line 199 "trace_gen.m"
          }
#line 199 "trace_gen.m"
      }
#line 199 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 199 "trace_gen.m"
  }
#line 199 "trace_gen.m"
}

#line 1300 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__redo_layout_slot_2_p_0(
#line 1300 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CodeModel_3,
#line 1300 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__RedoLayoutSlot_4)
#line 1300 "trace_gen.m"
{
#line 1337 "trace_gen.m"
  {
#line 1337 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1337 "trace_gen.m"
    if ((ll_backend__trace_gen__CodeModel_3 == (MR_Integer) 2))
#line 1337 "trace_gen.m"
      {
#line 1338 "trace_gen.m"
        *ll_backend__trace_gen__RedoLayoutSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[21]);
#line 1337 "trace_gen.m"
      }
#line 1337 "trace_gen.m"
    else
#line 1342 "trace_gen.m"
      {
#line 1343 "trace_gen.m"
        {
#line 1343 "trace_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.redo_layout_slot\'/2", (MR_String) "attempt to access redo layout slot for det or semi procedure");
#line 1343 "trace_gen.m"
          return;
        }
#line 1342 "trace_gen.m"
      }
#line 1337 "trace_gen.m"
  }
#line 1300 "trace_gen.m"
}

#line 1299 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__call_depth_slot_2_p_0(
#line 1299 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CodeModel_3,
#line 1299 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__CallDepthSlot_4)
#line 1299 "trace_gen.m"
{
#line 1326 "trace_gen.m"
  {
#line 1326 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1326 "trace_gen.m"
    if ((ll_backend__trace_gen__CodeModel_3 == (MR_Integer) 2))
#line 1326 "trace_gen.m"
      {
#line 1327 "trace_gen.m"
        *ll_backend__trace_gen__CallDepthSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[13]);
#line 1326 "trace_gen.m"
      }
#line 1326 "trace_gen.m"
    else
#line 1331 "trace_gen.m"
      {
#line 1332 "trace_gen.m"
        *ll_backend__trace_gen__CallDepthSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[14]);
#line 1331 "trace_gen.m"
      }
#line 1326 "trace_gen.m"
  }
#line 1299 "trace_gen.m"
}

#line 1298 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__call_num_slot_2_p_0(
#line 1298 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CodeModel_3,
#line 1298 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__CallNumSlot_4)
#line 1298 "trace_gen.m"
{
#line 1315 "trace_gen.m"
  {
#line 1315 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1315 "trace_gen.m"
    if ((ll_backend__trace_gen__CodeModel_3 == (MR_Integer) 2))
#line 1315 "trace_gen.m"
      {
#line 1316 "trace_gen.m"
        *ll_backend__trace_gen__CallNumSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[19]);
#line 1315 "trace_gen.m"
      }
#line 1315 "trace_gen.m"
    else
#line 1320 "trace_gen.m"
      {
#line 1321 "trace_gen.m"
        *ll_backend__trace_gen__CallNumSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[20]);
#line 1320 "trace_gen.m"
      }
#line 1315 "trace_gen.m"
  }
#line 1298 "trace_gen.m"
}

#line 1297 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__event_num_slot_2_p_0(
#line 1297 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CodeModel_3,
#line 1297 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__EventNumSlot_4)
#line 1297 "trace_gen.m"
{
#line 1304 "trace_gen.m"
  {
#line 1304 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1304 "trace_gen.m"
    if ((ll_backend__trace_gen__CodeModel_3 == (MR_Integer) 2))
#line 1304 "trace_gen.m"
      {
#line 1305 "trace_gen.m"
        *ll_backend__trace_gen__EventNumSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[17]);
#line 1304 "trace_gen.m"
      }
#line 1304 "trace_gen.m"
    else
#line 1309 "trace_gen.m"
      {
#line 1310 "trace_gen.m"
        *ll_backend__trace_gen__EventNumSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[18]);
#line 1309 "trace_gen.m"
      }
#line 1304 "trace_gen.m"
  }
#line 1297 "trace_gen.m"
}

#line 1270 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__stackref_to_string_2_p_0(
#line 1270 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Lval_3,
#line 1270 "trace_gen.m"
  MR_String * ll_backend__trace_gen__LvalStr_4)
#line 1270 "trace_gen.m"
{
#line 1276 "trace_gen.m"
  {
#line 1276 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__trace_gen__Lval_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1276 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__Slot_5;

#line 1273 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 1273 "trace_gen.m"
      {
#line 1273 "trace_gen.m"
        ll_backend__trace_gen__Slot_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 1)));
#line 1274 "trace_gen.m"
        {
#line 1274 "trace_gen.m"
          MR_String ll_backend__trace_gen__SlotString_6;
#line 1274 "trace_gen.m"
          MR_String ll_backend__trace_gen__V_10_10;

#line 1274 "trace_gen.m"
          {
#line 1274 "trace_gen.m"
            mercury__string__int_to_string_2_p_0(ll_backend__trace_gen__Slot_5, &ll_backend__trace_gen__SlotString_6);
          }
#line 1275 "trace_gen.m"
          {
#line 1275 "trace_gen.m"
            ll_backend__trace_gen__V_10_10 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__SlotString_6, (MR_String) ")");
          }
#line 1275 "trace_gen.m"
          {
#line 1275 "trace_gen.m"
            *ll_backend__trace_gen__LvalStr_4 = mercury__string__f_43_43_2_f_0((MR_String) "MR_sv(", ll_backend__trace_gen__V_10_10);
          }
#line 1274 "trace_gen.m"
        }
#line 1273 "trace_gen.m"
      }
#line 1273 "trace_gen.m"
    else
#line 1279 "trace_gen.m"
      {
#line 1279 "trace_gen.m"
        MR_Integer ll_backend__trace_gen__Slot_22;

#line 1276 "trace_gen.m"
        ll_backend__trace_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__trace_gen__Lval_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1276 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 1276 "trace_gen.m"
          {
#line 1276 "trace_gen.m"
            ll_backend__trace_gen__Slot_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 1)));
#line 1277 "trace_gen.m"
            {
#line 1277 "trace_gen.m"
              MR_String ll_backend__trace_gen__V_13_13;
#line 1277 "trace_gen.m"
              MR_String ll_backend__trace_gen__SlotString_21;

#line 1277 "trace_gen.m"
              {
#line 1277 "trace_gen.m"
                mercury__string__int_to_string_2_p_0(ll_backend__trace_gen__Slot_22, &ll_backend__trace_gen__SlotString_21);
              }
#line 1278 "trace_gen.m"
              {
#line 1278 "trace_gen.m"
                ll_backend__trace_gen__V_13_13 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__SlotString_21, (MR_String) ")");
              }
#line 1278 "trace_gen.m"
              {
#line 1278 "trace_gen.m"
                *ll_backend__trace_gen__LvalStr_4 = mercury__string__f_43_43_2_f_0((MR_String) "MR_fv(", ll_backend__trace_gen__V_13_13);
              }
#line 1277 "trace_gen.m"
            }
#line 1276 "trace_gen.m"
          }
#line 1276 "trace_gen.m"
        else
#line 1282 "trace_gen.m"
          {
#line 1279 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_7_7;
#line 1279 "trace_gen.m"
            MR_Integer ll_backend__trace_gen__V_8_8;

#line 1279 "trace_gen.m"
            ll_backend__trace_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__trace_gen__Lval_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1279 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 1279 "trace_gen.m"
              {
#line 1279 "trace_gen.m"
                ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 1)));
#line 1279 "trace_gen.m"
                ll_backend__trace_gen__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 2)));
#line 1281 "trace_gen.m"
                {
#line 1281 "trace_gen.m"
                  mercury__require__sorry_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.stackref_to_string\'/2", (MR_String) "double-width stack slot");
#line 1281 "trace_gen.m"
                  return;
                }
#line 1279 "trace_gen.m"
              }
#line 1279 "trace_gen.m"
            else
#line 1283 "trace_gen.m"
              {
#line 1283 "trace_gen.m"
                {
#line 1283 "trace_gen.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.stackref_to_string\'/2", (MR_String) "non-stack lval");
#line 1283 "trace_gen.m"
                  return;
                }
#line 1283 "trace_gen.m"
              }
#line 1282 "trace_gen.m"
          }
#line 1279 "trace_gen.m"
      }
#line 1276 "trace_gen.m"
  }
#line 1270 "trace_gen.m"
}

#line 1242 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__build_fail_vars_6_p_0(
#line 1242 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 1242 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 1242 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3,
#line 1242 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ModuleInfo_4,
#line 1242 "trace_gen.m"
  MR_Word ll_backend__trace_gen__VarTypes_5,
#line 1242 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__6_6)
#line 1242 "trace_gen.m"
{
#line 1246 "trace_gen.m"
  {
#line 1246 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1246 "trace_gen.m"
    if ((ll_backend__trace_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1246 "trace_gen.m"
      {
#line 1246 "trace_gen.m"
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1246 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 1246 "trace_gen.m"
          {
#line 1246 "trace_gen.m"
            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1246 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 1246 "trace_gen.m"
              {
#line 1246 "trace_gen.m"
                *ll_backend__trace_gen__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1246 "trace_gen.m"
                ll_backend__trace_gen__succeeded = MR_TRUE;
#line 1246 "trace_gen.m"
              }
#line 1246 "trace_gen.m"
          }
#line 1246 "trace_gen.m"
      }
#line 1246 "trace_gen.m"
    else
#line 1248 "trace_gen.m"
      {
#line 1248 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1248 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1248 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Inst_11;
#line 1248 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Insts_12;
#line 1248 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Info_13;
#line 1248 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Infos_14;
#line 1248 "trace_gen.m"
        MR_Word ll_backend__trace_gen__FailVars0_18;
#line 1248 "trace_gen.m"
        MR_Word ll_backend__trace_gen__ArgMode_20;
#line 1250 "trace_gen.m"
        MR_Word ll_backend__trace_gen___Loc_19;
#line 1252 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Type_21;
#line 1252 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_22_22;

#line 1247 "trace_gen.m"
        ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1247 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 1247 "trace_gen.m"
          {
#line 1247 "trace_gen.m"
            ll_backend__trace_gen__Inst_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 1247 "trace_gen.m"
            ll_backend__trace_gen__Insts_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 1247 "trace_gen.m"
            ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1247 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 1247 "trace_gen.m"
              {
#line 1247 "trace_gen.m"
                ll_backend__trace_gen__Info_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 1247 "trace_gen.m"
                ll_backend__trace_gen__Infos_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 1249 "trace_gen.m"
                {
#line 1249 "trace_gen.m"
                  ll_backend__trace_gen__succeeded = ll_backend__trace_gen__build_fail_vars_6_p_0(ll_backend__trace_gen__Vars_10, ll_backend__trace_gen__Insts_12, ll_backend__trace_gen__Infos_14, ll_backend__trace_gen__ModuleInfo_4, ll_backend__trace_gen__VarTypes_5, &ll_backend__trace_gen__FailVars0_18);
                }
#line 1248 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 1248 "trace_gen.m"
                  {
#line 1250 "trace_gen.m"
                    ll_backend__trace_gen___Loc_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Info_13, (MR_Integer) 0)));
#line 1250 "trace_gen.m"
                    ll_backend__trace_gen__ArgMode_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Info_13, (MR_Integer) 1)));
#line 1252 "trace_gen.m"
                    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__ArgMode_20 == (MR_Integer) 0);
#line 1252 "trace_gen.m"
                    if (ll_backend__trace_gen__succeeded)
#line 1252 "trace_gen.m"
                      {
#line 1253 "trace_gen.m"
                        {
#line 1253 "trace_gen.m"
                          ll_backend__trace_gen__succeeded = check_hlds__inst_match__inst_is_clobbered_2_p_0(ll_backend__trace_gen__ModuleInfo_4, ll_backend__trace_gen__Inst_11);
                        }
#line 1253 "trace_gen.m"
                        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1252 "trace_gen.m"
                        if (ll_backend__trace_gen__succeeded)
#line 1252 "trace_gen.m"
                          {
#line 1254 "trace_gen.m"
                            {
#line 1254 "trace_gen.m"
                              parse_tree__prog_data__lookup_var_type_3_p_0(ll_backend__trace_gen__VarTypes_5, ll_backend__trace_gen__Var_9, &ll_backend__trace_gen__Type_21);
                            }
#line 1255 "trace_gen.m"
                            {
#line 1255 "trace_gen.m"
                              ll_backend__trace_gen__V_22_22 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__trace_gen__ModuleInfo_4, ll_backend__trace_gen__Type_21);
                            }
#line 1255 "trace_gen.m"
                            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_22_22 == (MR_Integer) 1);
#line 1252 "trace_gen.m"
                          }
#line 1252 "trace_gen.m"
                      }
#line 1258 "trace_gen.m"
                    if (ll_backend__trace_gen__succeeded)
#line 1257 "trace_gen.m"
                      {
#line 1257 "trace_gen.m"
                        MR_Word base;
#line 1257 "trace_gen.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1257 "trace_gen.m"
                        *ll_backend__trace_gen__HeadVar__6_6 = base;
#line 1257 "trace_gen.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__trace_gen__Var_9));
#line 1257 "trace_gen.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__trace_gen__FailVars0_18));
#line 1257 "trace_gen.m"
                      }
#line 1258 "trace_gen.m"
                    else
#line 1259 "trace_gen.m"
                      *ll_backend__trace_gen__HeadVar__6_6 = ll_backend__trace_gen__FailVars0_18;
#line 1258 "trace_gen.m"
                    ll_backend__trace_gen__succeeded = MR_TRUE;
#line 1248 "trace_gen.m"
                  }
#line 1247 "trace_gen.m"
              }
#line 1247 "trace_gen.m"
          }
#line 1248 "trace_gen.m"
      }
#line 1246 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 1246 "trace_gen.m"
  }
#line 1242 "trace_gen.m"
}

#line 1159 "trace_gen.m"
static MR_Word MR_CALL 
ll_backend__trace_gen__find_lval_in_layout_locn_1_f_0(
#line 1159 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1)
#line 1159 "trace_gen.m"
{
#line 1161 "trace_gen.m"
  {
#line 1161 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 1161 "trace_gen.m"
    MR_Word ll_backend__trace_gen__Lval_2;

#line 1161 "trace_gen.m"
    if (((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1161 "trace_gen.m"
      ll_backend__trace_gen__Lval_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1161 "trace_gen.m"
    else
#line 1162 "trace_gen.m"
      {
#line 1162 "trace_gen.m"
        MR_Integer ll_backend__trace_gen__V_5_5;

#line 1162 "trace_gen.m"
        ll_backend__trace_gen__Lval_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1162 "trace_gen.m"
        ll_backend__trace_gen__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1162 "trace_gen.m"
      }
#line 1161 "trace_gen.m"
    return ll_backend__trace_gen__Lval_2;
#line 1161 "trace_gen.m"
  }
#line 1159 "trace_gen.m"
}

#line 1154 "trace_gen.m"
static MR_Word MR_CALL 
ll_backend__trace_gen__find_lval_in_var_info_1_f_0(
#line 1154 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1)
#line 1154 "trace_gen.m"
{
#line 1156 "trace_gen.m"
  {
#line 1156 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 1156 "trace_gen.m"
    MR_Word ll_backend__trace_gen__HeadVar__2_2;
#line 1156 "trace_gen.m"
    MR_Word ll_backend__trace_gen__LayoutLocn_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1156 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1156 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 2)));

#line 1161 "trace_gen.m"
    if (((MR_tag((MR_Word) ll_backend__trace_gen__LayoutLocn_3)) == (MR_mktag((MR_Integer) 0))))
#line 1161 "trace_gen.m"
      ll_backend__trace_gen__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__LayoutLocn_3, (MR_Integer) 0)));
#line 1161 "trace_gen.m"
    else
#line 1162 "trace_gen.m"
      {
#line 1162 "trace_gen.m"
        MR_Integer ll_backend__trace_gen__V_8_8;

#line 1162 "trace_gen.m"
        ll_backend__trace_gen__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__LayoutLocn_3, (MR_Integer) 0)));
#line 1162 "trace_gen.m"
        ll_backend__trace_gen__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__LayoutLocn_3, (MR_Integer) 1)));
#line 1162 "trace_gen.m"
      }
#line 1156 "trace_gen.m"
    return ll_backend__trace_gen__HeadVar__2_2;
#line 1156 "trace_gen.m"
  }
#line 1154 "trace_gen.m"
}

#line 1138 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__find_output_vars_3_p_0(
#line 1138 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 1138 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2,
#line 1138 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_OutputVars_3)
#line 1138 "trace_gen.m"
{
#line 1141 "trace_gen.m"
  while (MR_TRUE)
#line 1141 "trace_gen.m"
    {
#line 1141 "trace_gen.m"
      /* tailcall optimized into a loop */
#line 1141 "trace_gen.m"
      {
#line 1141 "trace_gen.m"
        MR_bool ll_backend__trace_gen__succeeded;

#line 1141 "trace_gen.m"
        if ((ll_backend__trace_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1141 "trace_gen.m"
          *ll_backend__trace_gen__STATE_VARIABLE_OutputVars_3 = ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2;
#line 1141 "trace_gen.m"
        else
#line 1142 "trace_gen.m"
          {
#line 1142 "trace_gen.m"
            MR_Word ll_backend__trace_gen__Arg_7;
#line 1142 "trace_gen.m"
            MR_Word ll_backend__trace_gen__Info_8;
#line 1142 "trace_gen.m"
            MR_Word ll_backend__trace_gen__ArgsInfos_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1142 "trace_gen.m"
            MR_Word ll_backend__trace_gen__Mode_12;
#line 1142 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1142 "trace_gen.m"
            MR_Word ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16;
#line 1143 "trace_gen.m"
            MR_Word ll_backend__trace_gen___ArgLoc_11;

#line 1142 "trace_gen.m"
            ll_backend__trace_gen__Arg_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_15_15, (MR_Integer) 0)));
#line 1142 "trace_gen.m"
            ll_backend__trace_gen__Info_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_15_15, (MR_Integer) 1)));
#line 1143 "trace_gen.m"
            ll_backend__trace_gen___ArgLoc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Info_8, (MR_Integer) 0)));
#line 1143 "trace_gen.m"
            ll_backend__trace_gen__Mode_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Info_8, (MR_Integer) 1)));
#line 1147 "trace_gen.m"
            if ((ll_backend__trace_gen__Mode_12 == (MR_Integer) 0))
#line 1148 "trace_gen.m"
              ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16 = ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2;
#line 1147 "trace_gen.m"
            else
#line 1147 "trace_gen.m"
              if ((ll_backend__trace_gen__Mode_12 == (MR_Integer) 1))
#line 1146 "trace_gen.m"
                {
#line 1146 "trace_gen.m"
                  ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "trace_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16, 0) = ((MR_Box) (ll_backend__trace_gen__Arg_7));
#line 1146 "trace_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16, 1) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2));
#line 1146 "trace_gen.m"
                }
#line 1147 "trace_gen.m"
              else
#line 1150 "trace_gen.m"
                ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16 = ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2;
#line 1152 "trace_gen.m"
            /* direct tailcall eliminated */
#line 1152 "trace_gen.m"
            {
#line 1152 "trace_gen.m"
              MR_Word ll_backend__trace_gen__HeadVar__1__tmp_copy_1 = ll_backend__trace_gen__ArgsInfos_9;
#line 1152 "trace_gen.m"
              MR_Word ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0__tmp_copy_2 = ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16;

#line 1152 "trace_gen.m"
              ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2 = ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0__tmp_copy_2;
#line 1152 "trace_gen.m"
              ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__HeadVar__1__tmp_copy_1;
#line 1152 "trace_gen.m"
            }
#line 1152 "trace_gen.m"
            continue;
#line 1142 "trace_gen.m"
          }
#line 1141 "trace_gen.m"
      }
#line 1141 "trace_gen.m"
      break;
#line 1141 "trace_gen.m"
    }
#line 1138 "trace_gen.m"
}

#line 1081 "trace_gen.m"
static MR_Box MR_CALL 
ll_backend__trace_gen__generate_event_code_11_p_0_2(
#line 1081 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg,
#line 1081 "trace_gen.m"
  MR_Box ll_backend__trace_gen__wrapper_arg_1)
#line 1081 "trace_gen.m"
{
#line 1081 "trace_gen.m"
  {
#line 1081 "trace_gen.m"
    MR_Box ll_backend__trace_gen__wrapper_arg_2;
#line 1081 "trace_gen.m"
    MR_Box ll_backend__trace_gen__closure = ll_backend__trace_gen__closure_arg;
#line 1081 "trace_gen.m"
    MR_Word ll_backend__trace_gen__conv1_Lval_2;

#line 1081 "trace_gen.m"
    {
#line 1081 "trace_gen.m"
      ll_backend__trace_gen__conv1_Lval_2 = ll_backend__trace_gen__find_lval_in_layout_locn_1_f_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1));
    }
#line 1081 "trace_gen.m"
    ll_backend__trace_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__trace_gen__conv1_Lval_2));
#line 1081 "trace_gen.m"
    return ll_backend__trace_gen__wrapper_arg_2;
#line 1081 "trace_gen.m"
  }
#line 1081 "trace_gen.m"
}

#line 1077 "trace_gen.m"
static MR_Box MR_CALL 
ll_backend__trace_gen__generate_event_code_11_p_0_1(
#line 1077 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg,
#line 1077 "trace_gen.m"
  MR_Box ll_backend__trace_gen__wrapper_arg_1)
#line 1077 "trace_gen.m"
{
#line 1077 "trace_gen.m"
  {
#line 1077 "trace_gen.m"
    MR_Box ll_backend__trace_gen__wrapper_arg_2;
#line 1077 "trace_gen.m"
    MR_Box ll_backend__trace_gen__closure = ll_backend__trace_gen__closure_arg;
#line 1077 "trace_gen.m"
    MR_Word ll_backend__trace_gen__conv0_HeadVar__2_2;

#line 1077 "trace_gen.m"
    {
#line 1077 "trace_gen.m"
      ll_backend__trace_gen__conv0_HeadVar__2_2 = ll_backend__trace_gen__find_lval_in_var_info_1_f_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1));
    }
#line 1077 "trace_gen.m"
    ll_backend__trace_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__trace_gen__conv0_HeadVar__2_2));
#line 1077 "trace_gen.m"
    return ll_backend__trace_gen__wrapper_arg_2;
#line 1077 "trace_gen.m"
  }
#line 1077 "trace_gen.m"
}

#line 1008 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__generate_event_code_11_p_0(
#line 1008 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Port_12,
#line 1008 "trace_gen.m"
  MR_Word ll_backend__trace_gen__PortInfo_13,
#line 1008 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeTraceInfo_14,
#line 1008 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Context_15,
#line 1008 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HideEvent_16,
#line 1008 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeUserInfo_17,
#line 1008 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Label_18,
#line 1008 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__TvarDataMap_19,
#line 1008 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_20,
#line 1008 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_64,
#line 1008 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_65)
#line 1008 "trace_gen.m"
{
#line 1015 "trace_gen.m"
  {
#line 1015 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TypeInfo_135_135;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TypeCtorInfo_136_136;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TypeCtorInfo_137_137;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TypeCtorInfo_141_141;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TypeCtorInfo_144_144;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__LiveVars0_22;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__LiveVars_23;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__Path_24;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TailRecResetCode_25;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__VarTypes_33;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__VarSet_34;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TvarSet_36;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__VarInfoList_37;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ProduceCode_38;
#line 1015 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__MaxRegR_39;
#line 1015 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__MaxRegF_40;
#line 1015 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__MaxTraceRegR0_41;
#line 1015 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__MaxTraceRegF0_42;
#line 1015 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__MaxTraceRegR_43;
#line 1015 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__MaxTraceRegF_44;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__VarLocs_45;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ProcInfo_46;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TvarList_47;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__VarLvals_48;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TvarLocnSets_49;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TvarLocnSet_50;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TvarLocns_51;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TvarLvals_52;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__LiveLvals_53;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__LiveLvalSet_54;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__VarInfoSet_55;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__LayoutLabelInfo_56;
#line 1015 "trace_gen.m"
    MR_String ll_backend__trace_gen__TraceStmt0_57;
#line 1015 "trace_gen.m"
    MR_String ll_backend__trace_gen__TraceStmt_59;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceComponents_62;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceCode_63;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_66_66;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_71_71;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_72_72;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_74_74;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_75_75;
#line 1015 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_79_79;
#line 1015 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_80_80;
#line 1015 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_81_81;
#line 1015 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_83_83;
#line 1015 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_85_85;
#line 1015 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_86_86;
#line 1015 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_87_87;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_89_89;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_91_91;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_96_96;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_99_99;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_101_101;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_102_102;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_103_103;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_105_105;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_106_106;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_107_107;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_112_112;
#line 1015 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_119_119;
#line 1055 "trace_gen.m"
    MR_Word ll_backend__trace_gen__InstMap_35;
#line 1117 "trace_gen.m"
    MR_Word ll_backend__trace_gen__RedoLabel_61;
#line 1102 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceInfo_60;
#line 1102 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_92_92;
#line 1104 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_120_120;
#line 1104 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_121_121;
#line 1104 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_122_122;
#line 1104 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_123_123;
#line 1104 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_124_124;
#line 1104 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_125_125;
#line 1104 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_126_126;
#line 1104 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_127_127;

#line 1016 "trace_gen.m"
    {
#line 1016 "trace_gen.m"
      ll_backend__code_info__get_next_label_3_p_0(ll_backend__trace_gen__Label_18, ll_backend__trace_gen__STATE_VARIABLE_CI_0_64, &ll_backend__trace_gen__STATE_VARIABLE_CI_66_66);
    }
#line 1017 "trace_gen.m"
    {
#line 1017 "trace_gen.m"
      ll_backend__code_info__get_known_variables_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_66_66, &ll_backend__trace_gen__LiveVars0_22);
    }
#line 1023 "trace_gen.m"
    if ((ll_backend__trace_gen__PortInfo_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1019 "trace_gen.m"
      {
#line 1020 "trace_gen.m"
        ll_backend__trace_gen__LiveVars_23 = ll_backend__trace_gen__LiveVars0_22;
#line 1021 "trace_gen.m"
        ll_backend__trace_gen__Path_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1022 "trace_gen.m"
        {
#line 1022 "trace_gen.m"
          ll_backend__trace_gen__TailRecResetCode_25 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 1019 "trace_gen.m"
        ll_backend__trace_gen__STATE_VARIABLE_CI_71_71 = ll_backend__trace_gen__STATE_VARIABLE_CI_66_66;
#line 1019 "trace_gen.m"
      }
#line 1023 "trace_gen.m"
    else
#line 1023 "trace_gen.m"
      if (((MR_tag((MR_Word) ll_backend__trace_gen__PortInfo_13)) == (MR_mktag((MR_Integer) 2))))
#line 1038 "trace_gen.m"
        {
#line 1038 "trace_gen.m"
          MR_Word ll_backend__trace_gen__TypeCtorInfo_130_130;
#line 1038 "trace_gen.m"
          MR_Word ll_backend__trace_gen__PreDeaths_29;
#line 1038 "trace_gen.m"
          MR_Word ll_backend__trace_gen__ResumeVars_30;
#line 1038 "trace_gen.m"
          MR_Word ll_backend__trace_gen__RealPreDeaths_31;
#line 1038 "trace_gen.m"
          MR_Word ll_backend__trace_gen__RealPreDeathList_32;

#line 1038 "trace_gen.m"
          ll_backend__trace_gen__Path_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__PortInfo_13, (MR_Integer) 0)));
#line 1038 "trace_gen.m"
          ll_backend__trace_gen__PreDeaths_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__PortInfo_13, (MR_Integer) 1)));
#line 1039 "trace_gen.m"
          {
#line 1039 "trace_gen.m"
            ll_backend__trace_gen__ResumeVars_30 = ll_backend__code_info__current_resume_point_vars_1_f_0(ll_backend__trace_gen__STATE_VARIABLE_CI_66_66);
          }
#line 4753 "ll_backend.trace_gen.c"
          ll_backend__trace_gen__TypeCtorInfo_130_130 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1040 "trace_gen.m"
          {
#line 1040 "trace_gen.m"
            parse_tree__set_of_var__difference_3_p_0(ll_backend__trace_gen__TypeCtorInfo_130_130, ll_backend__trace_gen__PreDeaths_29, ll_backend__trace_gen__ResumeVars_30, &ll_backend__trace_gen__RealPreDeaths_31);
          }
#line 1041 "trace_gen.m"
          {
#line 1041 "trace_gen.m"
            ll_backend__trace_gen__RealPreDeathList_32 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__trace_gen__TypeCtorInfo_130_130, ll_backend__trace_gen__RealPreDeaths_31);
          }
#line 1042 "trace_gen.m"
          {
#line 1042 "trace_gen.m"
            mercury__list__delete_elems_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[2], ll_backend__trace_gen__LiveVars0_22, ll_backend__trace_gen__RealPreDeathList_32, &ll_backend__trace_gen__LiveVars_23);
          }
#line 1043 "trace_gen.m"
          {
#line 1043 "trace_gen.m"
            ll_backend__trace_gen__TailRecResetCode_25 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
#line 1038 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_CI_71_71 = ll_backend__trace_gen__STATE_VARIABLE_CI_66_66;
#line 1038 "trace_gen.m"
        }
#line 1023 "trace_gen.m"
      else
#line 1023 "trace_gen.m"
        if (((MR_tag((MR_Word) ll_backend__trace_gen__PortInfo_13)) == (MR_mktag((MR_Integer) 1))))
#line 1024 "trace_gen.m"
          {
#line 1024 "trace_gen.m"
            MR_Word ll_backend__trace_gen__ArgsInfos_26;
#line 1024 "trace_gen.m"
            MR_Word ll_backend__trace_gen__OutputVars_27;

#line 1024 "trace_gen.m"
            ll_backend__trace_gen__Path_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__PortInfo_13, (MR_Integer) 0)));
#line 1024 "trace_gen.m"
            ll_backend__trace_gen__ArgsInfos_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__PortInfo_13, (MR_Integer) 1)));
#line 1027 "trace_gen.m"
            {
#line 1027 "trace_gen.m"
              ll_backend__trace_gen__find_output_vars_3_p_0(ll_backend__trace_gen__ArgsInfos_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__trace_gen__OutputVars_27);
            }
#line 1028 "trace_gen.m"
            {
#line 1028 "trace_gen.m"
              mercury__list__delete_elems_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[2], ll_backend__trace_gen__LiveVars0_22, ll_backend__trace_gen__OutputVars_27, &ll_backend__trace_gen__LiveVars_23);
            }
#line 1033 "trace_gen.m"
            if ((ll_backend__trace_gen__MaybeTraceInfo_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1034 "trace_gen.m"
              {
#line 1035 "trace_gen.m"
                {
#line 1035 "trace_gen.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.generate_event_code\'/11", (MR_String) "tailrec call without TraceInfo");
#line 1035 "trace_gen.m"
                  return;
                }
#line 1034 "trace_gen.m"
              }
#line 1033 "trace_gen.m"
            else
#line 1030 "trace_gen.m"
              {
#line 1030 "trace_gen.m"
                MR_Word ll_backend__trace_gen__TailRecTraceInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTraceInfo_14, (MR_Integer) 0)));

#line 1031 "trace_gen.m"
                {
#line 1031 "trace_gen.m"
                  ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0(ll_backend__trace_gen__TailRecTraceInfo_28, &ll_backend__trace_gen__TailRecResetCode_25, ll_backend__trace_gen__STATE_VARIABLE_CI_66_66, &ll_backend__trace_gen__STATE_VARIABLE_CI_71_71);
                }
#line 1030 "trace_gen.m"
              }
#line 1024 "trace_gen.m"
          }
#line 1023 "trace_gen.m"
        else
#line 1023 "trace_gen.m"
          if (((((MR_tag((MR_Word) ll_backend__trace_gen__PortInfo_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__PortInfo_13, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1045 "trace_gen.m"
            {
#line 1045 "trace_gen.m"
              ll_backend__trace_gen__Path_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__PortInfo_13, (MR_Integer) 1)));
#line 1046 "trace_gen.m"
              ll_backend__trace_gen__LiveVars_23 = ll_backend__trace_gen__LiveVars0_22;
#line 1047 "trace_gen.m"
              {
#line 1047 "trace_gen.m"
                ll_backend__trace_gen__TailRecResetCode_25 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 1045 "trace_gen.m"
              ll_backend__trace_gen__STATE_VARIABLE_CI_71_71 = ll_backend__trace_gen__STATE_VARIABLE_CI_66_66;
#line 1045 "trace_gen.m"
            }
#line 1023 "trace_gen.m"
          else
#line 1049 "trace_gen.m"
            {
#line 1049 "trace_gen.m"
              ll_backend__trace_gen__Path_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__PortInfo_13, (MR_Integer) 1)));
#line 1050 "trace_gen.m"
              ll_backend__trace_gen__LiveVars_23 = ll_backend__trace_gen__LiveVars0_22;
#line 1051 "trace_gen.m"
              {
#line 1051 "trace_gen.m"
                ll_backend__trace_gen__TailRecResetCode_25 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 1049 "trace_gen.m"
              ll_backend__trace_gen__STATE_VARIABLE_CI_71_71 = ll_backend__trace_gen__STATE_VARIABLE_CI_66_66;
#line 1049 "trace_gen.m"
            }
#line 1053 "trace_gen.m"
    {
#line 1053 "trace_gen.m"
      ll_backend__trace_gen__VarTypes_33 = ll_backend__code_info__get_var_types_1_f_0(ll_backend__trace_gen__STATE_VARIABLE_CI_71_71);
    }
#line 1054 "trace_gen.m"
    {
#line 1054 "trace_gen.m"
      ll_backend__code_info__get_varset_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_71_71, &ll_backend__trace_gen__VarSet_34);
    }
#line 1055 "trace_gen.m"
    {
#line 1055 "trace_gen.m"
      ll_backend__code_info__get_instmap_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_71_71, &ll_backend__trace_gen__InstMap_35);
    }
#line 4884 "ll_backend.trace_gen.c"
    ll_backend__trace_gen__TypeInfo_135_135 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[3];
#line 1057 "trace_gen.m"
    {
#line 1057 "trace_gen.m"
      ll_backend__trace_gen__V_72_72 = mercury__set__init_0_f_0(ll_backend__trace_gen__TypeInfo_135_135);
    }
#line 1056 "trace_gen.m"
    {
#line 1056 "trace_gen.m"
      ll_backend__trace_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_p_0(ll_backend__trace_gen__LiveVars_23, ll_backend__trace_gen__VarSet_34, ll_backend__trace_gen__VarTypes_33, ll_backend__trace_gen__V_72_72, &ll_backend__trace_gen__TvarSet_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__trace_gen__VarInfoList_37, &ll_backend__trace_gen__ProduceCode_38, ll_backend__trace_gen__STATE_VARIABLE_CI_71_71, &ll_backend__trace_gen__STATE_VARIABLE_CI_74_74);
    }
#line 1058 "trace_gen.m"
    {
#line 1058 "trace_gen.m"
      ll_backend__code_info__max_reg_in_use_3_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_74_74, &ll_backend__trace_gen__MaxRegR_39, &ll_backend__trace_gen__MaxRegF_40);
    }
#line 1059 "trace_gen.m"
    {
#line 1059 "trace_gen.m"
      ll_backend__code_info__get_max_reg_in_use_at_trace_3_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_74_74, &ll_backend__trace_gen__MaxTraceRegR0_41, &ll_backend__trace_gen__MaxTraceRegF0_42);
    }
#line 1060 "trace_gen.m"
    {
#line 1060 "trace_gen.m"
      mercury__int__max_3_p_0(ll_backend__trace_gen__MaxRegR_39, ll_backend__trace_gen__MaxTraceRegR0_41, &ll_backend__trace_gen__MaxTraceRegR_43);
    }
#line 1061 "trace_gen.m"
    {
#line 1061 "trace_gen.m"
      mercury__int__max_3_p_0(ll_backend__trace_gen__MaxRegF_40, ll_backend__trace_gen__MaxTraceRegF0_42, &ll_backend__trace_gen__MaxTraceRegF_44);
    }
#line 1063 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__MaxTraceRegR0_41 == ll_backend__trace_gen__MaxTraceRegR_43);
#line 1063 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 1064 "trace_gen.m"
      ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__MaxTraceRegF0_42 == ll_backend__trace_gen__MaxTraceRegF_44);
#line 1067 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 1067 "trace_gen.m"
      ll_backend__trace_gen__STATE_VARIABLE_CI_75_75 = ll_backend__trace_gen__STATE_VARIABLE_CI_74_74;
#line 1067 "trace_gen.m"
    else
#line 1068 "trace_gen.m"
      {
#line 1068 "trace_gen.m"
        ll_backend__code_info__set_max_reg_in_use_at_trace_4_p_0(ll_backend__trace_gen__MaxTraceRegR_43, ll_backend__trace_gen__MaxTraceRegF_44, ll_backend__trace_gen__STATE_VARIABLE_CI_74_74, &ll_backend__trace_gen__STATE_VARIABLE_CI_75_75);
      }
#line 1070 "trace_gen.m"
    {
#line 1070 "trace_gen.m"
      ll_backend__code_info__variable_locations_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_75_75, &ll_backend__trace_gen__VarLocs_45);
    }
#line 1071 "trace_gen.m"
    {
#line 1071 "trace_gen.m"
      ll_backend__code_info__get_proc_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_75_75, &ll_backend__trace_gen__ProcInfo_46);
    }
#line 1072 "trace_gen.m"
    {
#line 1072 "trace_gen.m"
      mercury__set__to_sorted_list_2_p_0(ll_backend__trace_gen__TypeInfo_135_135, ll_backend__trace_gen__TvarSet_36, &ll_backend__trace_gen__TvarList_47);
    }
#line 1073 "trace_gen.m"
    {
#line 1073 "trace_gen.m"
      ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0(ll_backend__trace_gen__TvarList_47, ll_backend__trace_gen__VarLocs_45, ll_backend__trace_gen__ProcInfo_46, ll_backend__trace_gen__TvarDataMap_19);
    }
#line 4953 "ll_backend.trace_gen.c"
    ll_backend__trace_gen__TypeCtorInfo_136_136 = (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0;
#line 4955 "ll_backend.trace_gen.c"
    ll_backend__trace_gen__TypeCtorInfo_137_137 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 1077 "trace_gen.m"
    {
#line 1077 "trace_gen.m"
      ll_backend__trace_gen__VarLvals_48 = mercury__list__map_2_f_0(ll_backend__trace_gen__TypeCtorInfo_136_136, ll_backend__trace_gen__TypeCtorInfo_137_137, (MR_Word) &ll_backend__trace_gen_scalar_common_2[6], ll_backend__trace_gen__VarInfoList_37);
    }
#line 1078 "trace_gen.m"
    {
#line 1078 "trace_gen.m"
      mercury__map__values_2_p_0(ll_backend__trace_gen__TypeInfo_135_135, (MR_Word) &ll_backend__trace_gen_scalar_common_1[4], *ll_backend__trace_gen__TvarDataMap_19, &ll_backend__trace_gen__TvarLocnSets_49);
    }
#line 4967 "ll_backend.trace_gen.c"
    ll_backend__trace_gen__TypeCtorInfo_141_141 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0;
#line 1079 "trace_gen.m"
    {
#line 1079 "trace_gen.m"
      ll_backend__trace_gen__TvarLocnSet_50 = mercury__set__union_list_1_f_0(ll_backend__trace_gen__TypeCtorInfo_141_141, ll_backend__trace_gen__TvarLocnSets_49);
    }
#line 1080 "trace_gen.m"
    {
#line 1080 "trace_gen.m"
      mercury__set__to_sorted_list_2_p_0(ll_backend__trace_gen__TypeCtorInfo_141_141, ll_backend__trace_gen__TvarLocnSet_50, &ll_backend__trace_gen__TvarLocns_51);
    }
#line 1081 "trace_gen.m"
    {
#line 1081 "trace_gen.m"
      ll_backend__trace_gen__TvarLvals_52 = mercury__list__map_2_f_0(ll_backend__trace_gen__TypeCtorInfo_141_141, ll_backend__trace_gen__TypeCtorInfo_137_137, (MR_Word) &ll_backend__trace_gen_scalar_common_2[7], ll_backend__trace_gen__TvarLocns_51);
    }
#line 1082 "trace_gen.m"
    {
#line 1082 "trace_gen.m"
      mercury__list__append_3_p_1(ll_backend__trace_gen__TypeCtorInfo_137_137, ll_backend__trace_gen__VarLvals_48, ll_backend__trace_gen__TvarLvals_52, &ll_backend__trace_gen__LiveLvals_53);
    }
#line 1083 "trace_gen.m"
    {
#line 1083 "trace_gen.m"
      ll_backend__trace_gen__LiveLvalSet_54 = mercury__set__list_to_set_1_f_0(ll_backend__trace_gen__TypeCtorInfo_137_137, ll_backend__trace_gen__LiveLvals_53);
    }
#line 1085 "trace_gen.m"
    {
#line 1085 "trace_gen.m"
      mercury__set__list_to_set_2_p_0(ll_backend__trace_gen__TypeCtorInfo_136_136, ll_backend__trace_gen__VarInfoList_37, &ll_backend__trace_gen__VarInfoSet_55);
    }
#line 1086 "trace_gen.m"
    {
#line 1086 "trace_gen.m"
      ll_backend__trace_gen__LayoutLabelInfo_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1086 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__LayoutLabelInfo_56, 0) = ((MR_Box) (ll_backend__trace_gen__VarInfoSet_55));
#line 1086 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__LayoutLabelInfo_56, 1) = ((MR_Box) (*ll_backend__trace_gen__TvarDataMap_19));
#line 1086 "trace_gen.m"
    }
#line 1090 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeUserInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1089 "trace_gen.m"
      ll_backend__trace_gen__TraceStmt0_57 = (MR_String) "\t\tMR_EVENT_SYS\n";
#line 1090 "trace_gen.m"
    else
#line 1092 "trace_gen.m"
      ll_backend__trace_gen__TraceStmt0_57 = (MR_String) "\t\tMR_EVENT_USER\n";
#line 1094 "trace_gen.m"
    {
#line 1094 "trace_gen.m"
      ll_backend__trace_gen__V_80_80 = ll_backend__layout_out__trace_port_to_string_1_f_0(ll_backend__trace_gen__Port_12);
    }
#line 1095 "trace_gen.m"
    {
#line 1095 "trace_gen.m"
      ll_backend__trace_gen__V_86_86 = mdbcomp__goal_path__goal_path_to_string_1_f_0(ll_backend__trace_gen__Path_24);
    }
#line 1095 "trace_gen.m"
    {
#line 1095 "trace_gen.m"
      ll_backend__trace_gen__V_87_87 = mercury__string__f_43_43_2_f_0((MR_String) "> */\n", ll_backend__trace_gen__TraceStmt0_57);
    }
#line 1095 "trace_gen.m"
    {
#line 1095 "trace_gen.m"
      ll_backend__trace_gen__V_85_85 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__V_86_86, ll_backend__trace_gen__V_87_87);
    }
#line 1095 "trace_gen.m"
    {
#line 1095 "trace_gen.m"
      ll_backend__trace_gen__V_83_83 = mercury__string__f_43_43_2_f_0((MR_String) "path <", ll_backend__trace_gen__V_85_85);
    }
#line 1094 "trace_gen.m"
    {
#line 1094 "trace_gen.m"
      ll_backend__trace_gen__V_81_81 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__trace_gen__V_83_83);
    }
#line 1094 "trace_gen.m"
    {
#line 1094 "trace_gen.m"
      ll_backend__trace_gen__V_79_79 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__V_80_80, ll_backend__trace_gen__V_81_81);
    }
#line 1094 "trace_gen.m"
    {
#line 1094 "trace_gen.m"
      ll_backend__trace_gen__TraceStmt_59 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t/* port ", ll_backend__trace_gen__V_79_79);
    }
#line 1098 "trace_gen.m"
    {
#line 1098 "trace_gen.m"
      ll_backend__code_info__add_trace_layout_for_label_9_p_0(*ll_backend__trace_gen__Label_18, ll_backend__trace_gen__Context_15, ll_backend__trace_gen__Port_12, ll_backend__trace_gen__HideEvent_16, ll_backend__trace_gen__Path_24, ll_backend__trace_gen__MaybeUserInfo_17, ll_backend__trace_gen__LayoutLabelInfo_56, ll_backend__trace_gen__STATE_VARIABLE_CI_75_75, &ll_backend__trace_gen__STATE_VARIABLE_CI_89_89);
    }
#line 1100 "trace_gen.m"
    {
#line 1100 "trace_gen.m"
      ll_backend__code_info__set_proc_trace_events_3_p_0((MR_Integer) 1, ll_backend__trace_gen__STATE_VARIABLE_CI_89_89, &ll_backend__trace_gen__STATE_VARIABLE_CI_91_91);
    }
#line 1102 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__Port_12 == (MR_Integer) 3);
#line 1102 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 1102 "trace_gen.m"
      {
#line 1103 "trace_gen.m"
        ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__MaybeTraceInfo_14)) == (MR_mktag((MR_Integer) 1)));
#line 1103 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 1103 "trace_gen.m"
          {
#line 1103 "trace_gen.m"
            ll_backend__trace_gen__TraceInfo_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTraceInfo_14, (MR_Integer) 0)));
#line 1104 "trace_gen.m"
            ll_backend__trace_gen__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_60, (MR_Integer) 0)));
#line 1104 "trace_gen.m"
            ll_backend__trace_gen__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_60, (MR_Integer) 1)));
#line 1104 "trace_gen.m"
            ll_backend__trace_gen__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_60, (MR_Integer) 2)));
#line 1104 "trace_gen.m"
            ll_backend__trace_gen__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_60, (MR_Integer) 3)));
#line 1104 "trace_gen.m"
            ll_backend__trace_gen__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_60, (MR_Integer) 4)));
#line 1104 "trace_gen.m"
            ll_backend__trace_gen__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_60, (MR_Integer) 5)));
#line 1104 "trace_gen.m"
            ll_backend__trace_gen__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_60, (MR_Integer) 6)));
#line 1104 "trace_gen.m"
            ll_backend__trace_gen__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_60, (MR_Integer) 7)));
#line 1104 "trace_gen.m"
            ll_backend__trace_gen__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_60, (MR_Integer) 8)));
#line 1104 "trace_gen.m"
            ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__V_92_92)) == (MR_mktag((MR_Integer) 1)));
#line 1104 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 1104 "trace_gen.m"
              ll_backend__trace_gen__RedoLabel_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_92_92, (MR_Integer) 0)));
#line 1103 "trace_gen.m"
          }
#line 1102 "trace_gen.m"
      }
#line 1117 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 1115 "trace_gen.m"
      {
#line 1115 "trace_gen.m"
        {
#line 1115 "trace_gen.m"
          ll_backend__code_info__add_trace_layout_for_label_9_p_0(ll_backend__trace_gen__RedoLabel_61, ll_backend__trace_gen__Context_15, (MR_Integer) 2, ll_backend__trace_gen__HideEvent_16, ll_backend__trace_gen__Path_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__trace_gen__LayoutLabelInfo_56, ll_backend__trace_gen__STATE_VARIABLE_CI_91_91, ll_backend__trace_gen__STATE_VARIABLE_CI_65);
        }
#line 1115 "trace_gen.m"
      }
#line 1117 "trace_gen.m"
    else
#line 1117 "trace_gen.m"
      *ll_backend__trace_gen__STATE_VARIABLE_CI_65 = ll_backend__trace_gen__STATE_VARIABLE_CI_91_91;
#line 1121 "trace_gen.m"
    {
#line 1121 "trace_gen.m"
      ll_backend__trace_gen__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1121 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_99_99, 0) = ((MR_Box) (ll_backend__trace_gen__LiveLvalSet_54));
#line 1121 "trace_gen.m"
    }
#line 1120 "trace_gen.m"
    {
#line 1120 "trace_gen.m"
      ll_backend__trace_gen__V_96_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1120 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_96_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1120 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_96_96, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1120 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_96_96, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1120 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_96_96, 3) = ((MR_Box) (ll_backend__trace_gen__V_99_99));
#line 1120 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_96_96, 4) = ((MR_Box) (ll_backend__trace_gen__TraceStmt_59));
#line 1120 "trace_gen.m"
    }
#line 1122 "trace_gen.m"
    {
#line 1122 "trace_gen.m"
      ll_backend__trace_gen__TraceComponents_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1122 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents_62, 0) = ((MR_Box) (ll_backend__trace_gen__V_96_96));
#line 1122 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1122 "trace_gen.m"
    }
#line 5158 "ll_backend.trace_gen.c"
    ll_backend__trace_gen__TypeCtorInfo_144_144 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 1125 "trace_gen.m"
    {
#line 1125 "trace_gen.m"
      ll_backend__trace_gen__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1125 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1125 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_103_103, 1) = ((MR_Box) (*ll_backend__trace_gen__Label_18));
#line 1125 "trace_gen.m"
    }
#line 1125 "trace_gen.m"
    {
#line 1125 "trace_gen.m"
      ll_backend__trace_gen__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1125 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_102_102, 0) = ((MR_Box) (ll_backend__trace_gen__V_103_103));
#line 1125 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_102_102, 1) = ((MR_Box) ((MR_String) "A label to hang trace liveness on"));
#line 1125 "trace_gen.m"
    }
#line 1133 "trace_gen.m"
    {
#line 1133 "trace_gen.m"
      ll_backend__trace_gen__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1133 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_112_112, 0) = ((MR_Box) (*ll_backend__trace_gen__Label_18));
#line 1133 "trace_gen.m"
    }
#line 1132 "trace_gen.m"
    {
#line 1132 "trace_gen.m"
      ll_backend__trace_gen__V_107_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 1132 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_107_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 1132 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1132 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_107_107, 2) = ((MR_Box) (ll_backend__trace_gen__TraceComponents_62));
#line 1132 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_107_107, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1132 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_107_107, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1132 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_107_107, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1132 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_107_107, 6) = ((MR_Box) (ll_backend__trace_gen__V_112_112));
#line 1132 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_107_107, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1132 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_107_107, 8) = ((MR_Box) (ll_backend__trace_gen__V_112_112));
#line 1132 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_107_107, 9) = ((MR_Box) ((MR_Integer) 1));
#line 1132 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_107_107, 10) = ((MR_Box) ((MR_Integer) 1));
#line 1132 "trace_gen.m"
    }
#line 1132 "trace_gen.m"
    {
#line 1132 "trace_gen.m"
      ll_backend__trace_gen__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1132 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_106_106, 0) = ((MR_Box) (ll_backend__trace_gen__V_107_107));
#line 1132 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_106_106, 1) = ((MR_Box) ((MR_String) ""));
#line 1132 "trace_gen.m"
    }
#line 1135 "trace_gen.m"
    {
#line 1135 "trace_gen.m"
      ll_backend__trace_gen__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1135 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_105_105, 0) = ((MR_Box) (ll_backend__trace_gen__V_106_106));
#line 1135 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1135 "trace_gen.m"
    }
#line 1126 "trace_gen.m"
    {
#line 1126 "trace_gen.m"
      ll_backend__trace_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1126 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_101_101, 0) = ((MR_Box) (ll_backend__trace_gen__V_102_102));
#line 1126 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_101_101, 1) = ((MR_Box) (ll_backend__trace_gen__V_105_105));
#line 1126 "trace_gen.m"
    }
#line 1124 "trace_gen.m"
    {
#line 1124 "trace_gen.m"
      ll_backend__trace_gen__TraceCode_63 = mercury__cord__from_list_1_f_0(ll_backend__trace_gen__TypeCtorInfo_144_144, ll_backend__trace_gen__V_101_101);
    }
#line 1136 "trace_gen.m"
    {
#line 1136 "trace_gen.m"
      ll_backend__trace_gen__V_119_119 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_144_144, ll_backend__trace_gen__TailRecResetCode_25, ll_backend__trace_gen__TraceCode_63);
    }
#line 1136 "trace_gen.m"
    {
#line 1136 "trace_gen.m"
      *ll_backend__trace_gen__Code_20 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_144_144, ll_backend__trace_gen__ProduceCode_38, ll_backend__trace_gen__V_119_119);
    }
#line 1015 "trace_gen.m"
  }
#line 1008 "trace_gen.m"
}

#line 937 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_2(
#line 937 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg)
#line 937 "trace_gen.m"
{
#line 937 "trace_gen.m"
  {
#line 937 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 937 "trace_gen.m"
    MR_Box ll_backend__trace_gen__closure = ll_backend__trace_gen__closure_arg;

#line 937 "trace_gen.m"
    {
#line 937 "trace_gen.m"
      return ll_backend__trace_gen__succeeded = ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__937__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__closure, (MR_Integer) 4))));
    }
#line 937 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 937 "trace_gen.m"
  }
#line 937 "trace_gen.m"
}

#line 931 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_1(
#line 931 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg)
#line 931 "trace_gen.m"
{
#line 931 "trace_gen.m"
  {
#line 931 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 931 "trace_gen.m"
    MR_Box ll_backend__trace_gen__closure = ll_backend__trace_gen__closure_arg;

#line 931 "trace_gen.m"
    {
#line 931 "trace_gen.m"
      return ll_backend__trace_gen__succeeded = ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__931__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__closure, (MR_Integer) 4))));
    }
#line 931 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 931 "trace_gen.m"
  }
#line 931 "trace_gen.m"
}

#line 911 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0(
#line 911 "trace_gen.m"
  MR_Word ll_backend__trace_gen__TraceInfo_5,
#line 911 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_6,
#line 911 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_42,
#line 911 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_43)
#line 911 "trace_gen.m"
{
#line 914 "trace_gen.m"
  {
#line 914 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 914 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TypeCtorInfo_179_179;
#line 914 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CodeModel_8;
#line 914 "trace_gen.m"
    MR_Word ll_backend__trace_gen__EventNumLval_9;
#line 914 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CallNumLval_10;
#line 914 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CallDepthLval_11;
#line 914 "trace_gen.m"
    MR_String ll_backend__trace_gen__EventNumStr_12;
#line 914 "trace_gen.m"
    MR_String ll_backend__trace_gen__CallNumStr_13;
#line 914 "trace_gen.m"
    MR_String ll_backend__trace_gen__CallDepthStr_14;
#line 914 "trace_gen.m"
    MR_String ll_backend__trace_gen__StdSlotCodeStr_15;
#line 914 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeRedoLabelLval_16;
#line 914 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeFromFullLval_17;
#line 914 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeIoSeqSlot_18;
#line 914 "trace_gen.m"
    MR_String ll_backend__trace_gen__IoSeqCodeStr_21;
#line 914 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTrailLvals_22;
#line 914 "trace_gen.m"
    MR_String ll_backend__trace_gen__TrailCodeStr_27;
#line 914 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeMaxfrLval_28;
#line 914 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaxfrCode_30;
#line 914 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TailRecInfo_31;
#line 914 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TailRecLvalCode_34;
#line 914 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeCallTableLval_35;
#line 914 "trace_gen.m"
    MR_String ll_backend__trace_gen__CallTableCodeStr_38;
#line 914 "trace_gen.m"
    MR_String ll_backend__trace_gen__ForeignLangCodeStr_39;
#line 914 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ForeignLangComponents_40;
#line 914 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ForeignLangCode_41;
#line 914 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_45_45;
#line 914 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_46_46;
#line 914 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_48_48;
#line 914 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_49_49;
#line 914 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_51_51;
#line 914 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_53_53;
#line 914 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_58_58;
#line 914 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_96_96;
#line 914 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_97_97;
#line 914 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_98_98;
#line 914 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_101_101;
#line 914 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_102_102;
#line 914 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_104_104;
#line 914 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_105_105;
#line 914 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_116_116;
#line 930 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_117_117;
#line 930 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_118_118;
#line 930 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_119_119;
#line 930 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_120_120;
#line 930 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_121_121;
#line 930 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_122_122;
#line 930 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_123_123;
#line 930 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_124_124;
#line 936 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_125_125;
#line 936 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_126_126;
#line 936 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_127_127;
#line 936 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_128_128;
#line 936 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_129_129;
#line 936 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_130_130;
#line 936 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_131_131;
#line 936 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_132_132;
#line 940 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_133_133;
#line 940 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_134_134;
#line 940 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_135_135;
#line 940 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_140_140;

#line 918 "trace_gen.m"
    {
#line 918 "trace_gen.m"
      ll_backend__trace_gen__CodeModel_8 = ll_backend__code_info__get_proc_model_1_f_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_42);
    }
#line 919 "trace_gen.m"
    {
#line 919 "trace_gen.m"
      ll_backend__trace_gen__event_num_slot_2_p_0(ll_backend__trace_gen__CodeModel_8, &ll_backend__trace_gen__EventNumLval_9);
    }
#line 920 "trace_gen.m"
    {
#line 920 "trace_gen.m"
      ll_backend__trace_gen__call_num_slot_2_p_0(ll_backend__trace_gen__CodeModel_8, &ll_backend__trace_gen__CallNumLval_10);
    }
#line 921 "trace_gen.m"
    {
#line 921 "trace_gen.m"
      ll_backend__trace_gen__call_depth_slot_2_p_0(ll_backend__trace_gen__CodeModel_8, &ll_backend__trace_gen__CallDepthLval_11);
    }
#line 922 "trace_gen.m"
    {
#line 922 "trace_gen.m"
      ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__EventNumLval_9, &ll_backend__trace_gen__EventNumStr_12);
    }
#line 923 "trace_gen.m"
    {
#line 923 "trace_gen.m"
      ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallNumLval_10, &ll_backend__trace_gen__CallNumStr_13);
    }
#line 924 "trace_gen.m"
    {
#line 924 "trace_gen.m"
      ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallDepthLval_11, &ll_backend__trace_gen__CallDepthStr_14);
    }
#line 926 "trace_gen.m"
    {
#line 926 "trace_gen.m"
      ll_backend__trace_gen__V_51_51 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallDepthStr_14, (MR_String) ");\n");
    }
#line 926 "trace_gen.m"
    {
#line 926 "trace_gen.m"
      ll_backend__trace_gen__V_49_49 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__trace_gen__V_51_51);
    }
#line 926 "trace_gen.m"
    {
#line 926 "trace_gen.m"
      ll_backend__trace_gen__V_48_48 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallNumStr_13, ll_backend__trace_gen__V_49_49);
    }
#line 926 "trace_gen.m"
    {
#line 926 "trace_gen.m"
      ll_backend__trace_gen__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__trace_gen__V_48_48);
    }
#line 926 "trace_gen.m"
    {
#line 926 "trace_gen.m"
      ll_backend__trace_gen__V_45_45 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__EventNumStr_12, ll_backend__trace_gen__V_46_46);
    }
#line 925 "trace_gen.m"
    {
#line 925 "trace_gen.m"
      ll_backend__trace_gen__StdSlotCodeStr_15 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_trace_tailrec_std_slots(", ll_backend__trace_gen__V_45_45);
    }
#line 930 "trace_gen.m"
    ll_backend__trace_gen__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 0)));
#line 930 "trace_gen.m"
    ll_backend__trace_gen__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 1)));
#line 930 "trace_gen.m"
    ll_backend__trace_gen__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 2)));
#line 930 "trace_gen.m"
    ll_backend__trace_gen__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 3)));
#line 930 "trace_gen.m"
    ll_backend__trace_gen__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 4)));
#line 930 "trace_gen.m"
    ll_backend__trace_gen__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 5)));
#line 930 "trace_gen.m"
    ll_backend__trace_gen__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 6)));
#line 930 "trace_gen.m"
    ll_backend__trace_gen__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 7)));
#line 930 "trace_gen.m"
    ll_backend__trace_gen__MaybeRedoLabelLval_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 8)));
#line 931 "trace_gen.m"
    {
#line 931 "trace_gen.m"
      ll_backend__trace_gen__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 931 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_53_53, 0) = ((MR_Box) (&ll_backend__trace_gen_scalar_common_4[1]));
#line 931 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_53_53, 1) = ((MR_Box) (ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_1));
#line 931 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 931 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_53_53, 3) = ((MR_Box) (ll_backend__trace_gen__MaybeRedoLabelLval_16));
#line 931 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_53_53, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 931 "trace_gen.m"
    }
#line 931 "trace_gen.m"
    {
#line 931 "trace_gen.m"
      mercury__require__expect_4_p_0(ll_backend__trace_gen__V_53_53, (MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.generate_tailrec_reset_slots_code\'/4", (MR_String) "redo label in procedure with TAIL event");
    }
#line 936 "trace_gen.m"
    ll_backend__trace_gen__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 0)));
#line 936 "trace_gen.m"
    ll_backend__trace_gen__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 1)));
#line 936 "trace_gen.m"
    ll_backend__trace_gen__MaybeFromFullLval_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 2)));
#line 936 "trace_gen.m"
    ll_backend__trace_gen__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 3)));
#line 936 "trace_gen.m"
    ll_backend__trace_gen__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 4)));
#line 936 "trace_gen.m"
    ll_backend__trace_gen__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 5)));
#line 936 "trace_gen.m"
    ll_backend__trace_gen__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 6)));
#line 936 "trace_gen.m"
    ll_backend__trace_gen__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 7)));
#line 936 "trace_gen.m"
    ll_backend__trace_gen__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 8)));
#line 937 "trace_gen.m"
    {
#line 937 "trace_gen.m"
      ll_backend__trace_gen__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 937 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_58_58, 0) = ((MR_Box) (&ll_backend__trace_gen_scalar_common_4[2]));
#line 937 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_58_58, 1) = ((MR_Box) (ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_2));
#line 937 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 937 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_58_58, 3) = ((MR_Box) (ll_backend__trace_gen__MaybeFromFullLval_17));
#line 937 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_58_58, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 937 "trace_gen.m"
    }
#line 937 "trace_gen.m"
    {
#line 937 "trace_gen.m"
      mercury__require__expect_4_p_0(ll_backend__trace_gen__V_58_58, (MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.generate_tailrec_reset_slots_code\'/4", (MR_String) "from_full slot in procedure with TAIL event");
    }
#line 940 "trace_gen.m"
    ll_backend__trace_gen__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 0)));
#line 940 "trace_gen.m"
    ll_backend__trace_gen__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 1)));
#line 940 "trace_gen.m"
    ll_backend__trace_gen__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 2)));
#line 940 "trace_gen.m"
    ll_backend__trace_gen__MaybeIoSeqSlot_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 3)));
#line 940 "trace_gen.m"
    ll_backend__trace_gen__MaybeTrailLvals_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 4)));
#line 940 "trace_gen.m"
    ll_backend__trace_gen__MaybeMaxfrLval_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 5)));
#line 940 "trace_gen.m"
    ll_backend__trace_gen__MaybeCallTableLval_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 6)));
#line 940 "trace_gen.m"
    ll_backend__trace_gen__TailRecInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 7)));
#line 940 "trace_gen.m"
    ll_backend__trace_gen__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 8)));
#line 945 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeIoSeqSlot_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 947 "trace_gen.m"
      ll_backend__trace_gen__IoSeqCodeStr_21 = (MR_String) "";
#line 945 "trace_gen.m"
    else
#line 942 "trace_gen.m"
      {
#line 942 "trace_gen.m"
        MR_Word ll_backend__trace_gen__IoSeqLval_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeIoSeqSlot_18, (MR_Integer) 0)));
#line 942 "trace_gen.m"
        MR_String ll_backend__trace_gen__IoSeqStr_20;
#line 942 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_64_64;

#line 943 "trace_gen.m"
        {
#line 943 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__IoSeqLval_19, &ll_backend__trace_gen__IoSeqStr_20);
        }
#line 944 "trace_gen.m"
        {
#line 944 "trace_gen.m"
          ll_backend__trace_gen__V_64_64 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__IoSeqStr_20, (MR_String) " = MR_io_tabling_counter;\n");
        }
#line 944 "trace_gen.m"
        {
#line 944 "trace_gen.m"
          ll_backend__trace_gen__IoSeqCodeStr_21 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__trace_gen__V_64_64);
        }
#line 942 "trace_gen.m"
      }
#line 958 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeTrailLvals_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 960 "trace_gen.m"
      ll_backend__trace_gen__TrailCodeStr_27 = (MR_String) "";
#line 958 "trace_gen.m"
    else
#line 952 "trace_gen.m"
      {
#line 952 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TrailLval_23;
#line 952 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TicketLval_24;
#line 952 "trace_gen.m"
        MR_String ll_backend__trace_gen__TrailLvalStr_25;
#line 952 "trace_gen.m"
        MR_String ll_backend__trace_gen__TicketLvalStr_26;
#line 952 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTrailLvals_22, (MR_Integer) 0)));
#line 952 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_68_68;
#line 952 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_69_69;
#line 952 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_71_71;
#line 952 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_73_73;

#line 952 "trace_gen.m"
        ll_backend__trace_gen__TrailLval_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_66_66, (MR_Integer) 0)));
#line 952 "trace_gen.m"
        ll_backend__trace_gen__TicketLval_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_66_66, (MR_Integer) 1)));
#line 953 "trace_gen.m"
        {
#line 953 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__TrailLval_23, &ll_backend__trace_gen__TrailLvalStr_25);
        }
#line 954 "trace_gen.m"
        {
#line 954 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__TicketLval_24, &ll_backend__trace_gen__TicketLvalStr_26);
        }
#line 957 "trace_gen.m"
        {
#line 957 "trace_gen.m"
          ll_backend__trace_gen__V_73_73 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TrailLvalStr_25, (MR_String) ");\n");
        }
#line 957 "trace_gen.m"
        {
#line 957 "trace_gen.m"
          ll_backend__trace_gen__V_71_71 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_store_ticket(", ll_backend__trace_gen__V_73_73);
        }
#line 956 "trace_gen.m"
        {
#line 956 "trace_gen.m"
          ll_backend__trace_gen__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) ");\n", ll_backend__trace_gen__V_71_71);
        }
#line 956 "trace_gen.m"
        {
#line 956 "trace_gen.m"
          ll_backend__trace_gen__V_68_68 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TicketLvalStr_26, ll_backend__trace_gen__V_69_69);
        }
#line 956 "trace_gen.m"
        {
#line 956 "trace_gen.m"
          ll_backend__trace_gen__TrailCodeStr_27 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_mark_ticket_stack(", ll_backend__trace_gen__V_68_68);
        }
#line 952 "trace_gen.m"
      }
#line 969 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeMaxfrLval_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 970 "trace_gen.m"
      {
#line 971 "trace_gen.m"
        {
#line 971 "trace_gen.m"
          ll_backend__trace_gen__MaxfrCode_30 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 970 "trace_gen.m"
      }
#line 969 "trace_gen.m"
    else
#line 965 "trace_gen.m"
      {
#line 965 "trace_gen.m"
        MR_Word ll_backend__trace_gen__MaxfrLval_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeMaxfrLval_28, (MR_Integer) 0)));
#line 965 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_75_75;
#line 965 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_76_76;

#line 967 "trace_gen.m"
        {
#line 967 "trace_gen.m"
          ll_backend__trace_gen__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 967 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 967 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_76_76, 1) = ((MR_Box) (ll_backend__trace_gen__MaxfrLval_29));
#line 967 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_76_76, 2) = ((MR_Box) (&ll_backend__trace_gen_scalar_common_3[3]));
#line 967 "trace_gen.m"
        }
#line 967 "trace_gen.m"
        {
#line 967 "trace_gen.m"
          ll_backend__trace_gen__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 967 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_75_75, 0) = ((MR_Box) (ll_backend__trace_gen__V_76_76));
#line 967 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_75_75, 1) = ((MR_Box) ((MR_String) "save initial maxfr"));
#line 967 "trace_gen.m"
        }
#line 966 "trace_gen.m"
        {
#line 966 "trace_gen.m"
          ll_backend__trace_gen__MaxfrCode_30 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__trace_gen__V_75_75)));
        }
#line 965 "trace_gen.m"
      }
#line 982 "trace_gen.m"
    if ((ll_backend__trace_gen__TailRecInfo_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 983 "trace_gen.m"
      {
#line 984 "trace_gen.m"
        {
#line 984 "trace_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.generate_tailrec_reset_slots_code\'/4", (MR_String) "no tail rec lval");
#line 984 "trace_gen.m"
          return;
        }
#line 983 "trace_gen.m"
      }
#line 982 "trace_gen.m"
    else
#line 976 "trace_gen.m"
      {
#line 976 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TailRecLval_32;
#line 976 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TailRecInfo_31, (MR_Integer) 0)));
#line 976 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_84_84;
#line 976 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_85_85;
#line 976 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_86_86;
#line 976 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_88_88;
#line 976 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_33_33;

#line 976 "trace_gen.m"
        ll_backend__trace_gen__TailRecLval_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_83_83, (MR_Integer) 0)));
#line 976 "trace_gen.m"
        ll_backend__trace_gen__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_83_83, (MR_Integer) 1)));
#line 979 "trace_gen.m"
        {
#line 979 "trace_gen.m"
          ll_backend__trace_gen__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 979 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_88_88, 0) = ((MR_Box) (ll_backend__trace_gen__TailRecLval_32));
#line 979 "trace_gen.m"
        }
#line 979 "trace_gen.m"
        {
#line 979 "trace_gen.m"
          ll_backend__trace_gen__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 979 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 979 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 979 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_86_86, 2) = ((MR_Box) (ll_backend__trace_gen__V_88_88));
#line 979 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_86_86, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[16])));
#line 979 "trace_gen.m"
        }
#line 978 "trace_gen.m"
        {
#line 978 "trace_gen.m"
          ll_backend__trace_gen__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 978 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 978 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_85_85, 1) = ((MR_Box) (ll_backend__trace_gen__TailRecLval_32));
#line 978 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_85_85, 2) = ((MR_Box) (ll_backend__trace_gen__V_86_86));
#line 978 "trace_gen.m"
        }
#line 978 "trace_gen.m"
        {
#line 978 "trace_gen.m"
          ll_backend__trace_gen__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 978 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_84_84, 0) = ((MR_Box) (ll_backend__trace_gen__V_85_85));
#line 978 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_84_84, 1) = ((MR_Box) ((MR_String) "increment tail recursion counter"));
#line 978 "trace_gen.m"
        }
#line 977 "trace_gen.m"
        {
#line 977 "trace_gen.m"
          ll_backend__trace_gen__TailRecLvalCode_34 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__trace_gen__V_84_84)));
        }
#line 976 "trace_gen.m"
      }
#line 992 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeCallTableLval_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 994 "trace_gen.m"
      ll_backend__trace_gen__CallTableCodeStr_38 = (MR_String) "";
#line 992 "trace_gen.m"
    else
#line 989 "trace_gen.m"
      {
#line 989 "trace_gen.m"
        MR_Word ll_backend__trace_gen__CallTableLval_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeCallTableLval_35, (MR_Integer) 0)));
#line 989 "trace_gen.m"
        MR_String ll_backend__trace_gen__CallTableLvalStr_37;
#line 989 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_94_94;

#line 990 "trace_gen.m"
        {
#line 990 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallTableLval_36, &ll_backend__trace_gen__CallTableLvalStr_37);
        }
#line 991 "trace_gen.m"
        {
#line 991 "trace_gen.m"
          ll_backend__trace_gen__V_94_94 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallTableLvalStr_37, (MR_String) " = 0;\n");
        }
#line 991 "trace_gen.m"
        {
#line 991 "trace_gen.m"
          ll_backend__trace_gen__CallTableCodeStr_38 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__trace_gen__V_94_94);
        }
#line 989 "trace_gen.m"
      }
#line 996 "trace_gen.m"
    {
#line 996 "trace_gen.m"
      ll_backend__trace_gen__V_97_97 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TrailCodeStr_27, ll_backend__trace_gen__CallTableCodeStr_38);
    }
#line 996 "trace_gen.m"
    {
#line 996 "trace_gen.m"
      ll_backend__trace_gen__V_96_96 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__IoSeqCodeStr_21, ll_backend__trace_gen__V_97_97);
    }
#line 996 "trace_gen.m"
    {
#line 996 "trace_gen.m"
      ll_backend__trace_gen__ForeignLangCodeStr_39 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__StdSlotCodeStr_15, ll_backend__trace_gen__V_96_96);
    }
#line 999 "trace_gen.m"
    {
#line 999 "trace_gen.m"
      ll_backend__trace_gen__V_102_102 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
    }
#line 999 "trace_gen.m"
    {
#line 999 "trace_gen.m"
      ll_backend__trace_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 999 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_101_101, 0) = ((MR_Box) (ll_backend__trace_gen__V_102_102));
#line 999 "trace_gen.m"
    }
#line 998 "trace_gen.m"
    {
#line 998 "trace_gen.m"
      ll_backend__trace_gen__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 998 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 998 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 1) = ((MR_Box) ((MR_Integer) 1));
#line 998 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 2) = ((MR_Box) ((MR_Integer) 1));
#line 998 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 3) = ((MR_Box) (ll_backend__trace_gen__V_101_101));
#line 998 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 4) = ((MR_Box) (ll_backend__trace_gen__ForeignLangCodeStr_39));
#line 998 "trace_gen.m"
    }
#line 1000 "trace_gen.m"
    {
#line 1000 "trace_gen.m"
      ll_backend__trace_gen__ForeignLangComponents_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1000 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__ForeignLangComponents_40, 0) = ((MR_Box) (ll_backend__trace_gen__V_98_98));
#line 1000 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__ForeignLangComponents_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1000 "trace_gen.m"
    }
#line 5939 "ll_backend.trace_gen.c"
    ll_backend__trace_gen__TypeCtorInfo_179_179 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 1002 "trace_gen.m"
    {
#line 1002 "trace_gen.m"
      ll_backend__trace_gen__V_105_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 1002 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 1002 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1002 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 2) = ((MR_Box) (ll_backend__trace_gen__ForeignLangComponents_40));
#line 1002 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 3) = ((MR_Box) ((MR_Integer) 1));
#line 1002 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1002 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1002 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1002 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1002 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1002 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 9) = ((MR_Box) ((MR_Integer) 1));
#line 1002 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 10) = ((MR_Box) ((MR_Integer) 0));
#line 1002 "trace_gen.m"
    }
#line 1002 "trace_gen.m"
    {
#line 1002 "trace_gen.m"
      ll_backend__trace_gen__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1002 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_104_104, 0) = ((MR_Box) (ll_backend__trace_gen__V_105_105));
#line 1002 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_104_104, 1) = ((MR_Box) ((MR_String) ""));
#line 1002 "trace_gen.m"
    }
#line 1001 "trace_gen.m"
    {
#line 1001 "trace_gen.m"
      ll_backend__trace_gen__ForeignLangCode_41 = mercury__cord__singleton_1_f_0(ll_backend__trace_gen__TypeCtorInfo_179_179, ((MR_Box) (ll_backend__trace_gen__V_104_104)));
    }
#line 1006 "trace_gen.m"
    {
#line 1006 "trace_gen.m"
      ll_backend__trace_gen__V_116_116 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_179_179, ll_backend__trace_gen__MaxfrCode_30, ll_backend__trace_gen__TailRecLvalCode_34);
    }
#line 1006 "trace_gen.m"
    {
#line 1006 "trace_gen.m"
      *ll_backend__trace_gen__Code_6 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_179_179, ll_backend__trace_gen__ForeignLangCode_41, ll_backend__trace_gen__V_116_116);
    }
#line 914 "trace_gen.m"
    *ll_backend__trace_gen__STATE_VARIABLE_CI_43 = ll_backend__trace_gen__STATE_VARIABLE_CI_0_42;
#line 914 "trace_gen.m"
  }
#line 911 "trace_gen.m"
}

#line 1173 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__maybe_setup_redo_event_2_p_0_1(
#line 1173 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg)
#line 1173 "trace_gen.m"
{
#line 1173 "trace_gen.m"
  {
#line 1173 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 1173 "trace_gen.m"
    MR_Box ll_backend__trace_gen__closure = ll_backend__trace_gen__closure_arg;

#line 1173 "trace_gen.m"
    {
#line 1173 "trace_gen.m"
      return ll_backend__trace_gen__succeeded = ll_backend__trace_gen__IntroducedFrom__pred__maybe_setup_redo_event__1173__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__closure, (MR_Integer) 4))));
    }
#line 1173 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 1173 "trace_gen.m"
  }
#line 1173 "trace_gen.m"
}

#line 228 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__maybe_setup_redo_event_2_p_0(
#line 228 "trace_gen.m"
  MR_Word ll_backend__trace_gen__TraceInfo_3,
#line 228 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_4)
#line 228 "trace_gen.m"
{
#line 1164 "trace_gen.m"
  {
#line 1164 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 1164 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceRedoLabel_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 8)));
#line 1164 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 2)));
#line 1165 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 0)));
#line 1165 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 1)));
#line 1165 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 3)));
#line 1165 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 4)));
#line 1165 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 5)));
#line 1165 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 6)));
#line 1165 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 7)));

#line 1188 "trace_gen.m"
    if ((ll_backend__trace_gen__TraceRedoLabel_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1189 "trace_gen.m"
      {
#line 1190 "trace_gen.m"
        {
#line 1190 "trace_gen.m"
          *ll_backend__trace_gen__Code_4 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 1189 "trace_gen.m"
      }
#line 1188 "trace_gen.m"
    else
#line 1180 "trace_gen.m"
      if ((ll_backend__trace_gen__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1181 "trace_gen.m"
        {
#line 1182 "trace_gen.m"
          {
#line 1182 "trace_gen.m"
            *ll_backend__trace_gen__Code_4 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (&ll_backend__trace_gen_scalar_common_1[11])));
          }
#line 1181 "trace_gen.m"
        }
#line 1180 "trace_gen.m"
      else
#line 1170 "trace_gen.m"
        {
#line 1170 "trace_gen.m"
          MR_Word ll_backend__trace_gen__Lval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_31_31, (MR_Integer) 0)));
#line 1170 "trace_gen.m"
          MR_Word ll_backend__trace_gen__V_16_16;

#line 1173 "trace_gen.m"
          {
#line 1173 "trace_gen.m"
            ll_backend__trace_gen__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1173 "trace_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_16_16, 0) = ((MR_Box) (&ll_backend__trace_gen_scalar_common_4[0]));
#line 1173 "trace_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_16_16, 1) = ((MR_Box) (ll_backend__trace_gen__maybe_setup_redo_event_2_p_0_1));
#line 1173 "trace_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1173 "trace_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_16_16, 3) = ((MR_Box) (ll_backend__trace_gen__Lval_8));
#line 1173 "trace_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_16_16, 4) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[15])));
#line 1173 "trace_gen.m"
          }
#line 1173 "trace_gen.m"
          {
#line 1173 "trace_gen.m"
            mercury__require__expect_4_p_0(ll_backend__trace_gen__V_16_16, (MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.maybe_setup_redo_event\'/2", (MR_String) "from-full flag not stored in expected slot");
          }
#line 1175 "trace_gen.m"
          {
#line 1175 "trace_gen.m"
            *ll_backend__trace_gen__Code_4 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (&ll_backend__trace_gen_scalar_common_1[12])));
          }
#line 1170 "trace_gen.m"
        }
#line 1164 "trace_gen.m"
  }
#line 228 "trace_gen.m"
}

#line 219 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__generate_external_event_code_6_p_0(
#line 219 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ExternalPort_7,
#line 219 "trace_gen.m"
  MR_Word ll_backend__trace_gen__TraceInfo_8,
#line 219 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Context_9,
#line 219 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__MaybeExternalInfo_10,
#line 219 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_20,
#line 219 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_21)
#line 219 "trace_gen.m"
{
#line 876 "trace_gen.m"
  {
#line 876 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 876 "trace_gen.m"
    MR_Word ll_backend__trace_gen__Port_12;
#line 876 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ModuleInfo_13;
#line 876 "trace_gen.m"
    MR_Word ll_backend__trace_gen__PredInfo_14;
#line 876 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ProcInfo_15;
#line 876 "trace_gen.m"
    MR_Word ll_backend__trace_gen__NeedPort_16;
#line 876 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_22_22;
#line 876 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_30_30;
#line 881 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_31_31;
#line 881 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_32_32;
#line 881 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_33_33;
#line 881 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_34_34;
#line 881 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_35_35;
#line 881 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_36_36;
#line 881 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_37_37;

#line 1290 "trace_gen.m"
    if ((ll_backend__trace_gen__ExternalPort_7 == (MR_Integer) 0))
#line 1290 "trace_gen.m"
      ll_backend__trace_gen__Port_12 = (MR_Integer) 0;
#line 1290 "trace_gen.m"
    else
#line 1290 "trace_gen.m"
      if ((ll_backend__trace_gen__ExternalPort_7 == (MR_Integer) 1))
#line 1291 "trace_gen.m"
        ll_backend__trace_gen__Port_12 = (MR_Integer) 1;
#line 1290 "trace_gen.m"
      else
#line 1290 "trace_gen.m"
        if ((ll_backend__trace_gen__ExternalPort_7 == (MR_Integer) 2))
#line 1292 "trace_gen.m"
          ll_backend__trace_gen__Port_12 = (MR_Integer) 3;
#line 1290 "trace_gen.m"
        else
#line 1293 "trace_gen.m"
          ll_backend__trace_gen__Port_12 = (MR_Integer) 4;
#line 878 "trace_gen.m"
    {
#line 878 "trace_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_20, &ll_backend__trace_gen__ModuleInfo_13);
    }
#line 879 "trace_gen.m"
    {
#line 879 "trace_gen.m"
      ll_backend__code_info__get_pred_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_20, &ll_backend__trace_gen__PredInfo_14);
    }
#line 880 "trace_gen.m"
    {
#line 880 "trace_gen.m"
      ll_backend__code_info__get_proc_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_20, &ll_backend__trace_gen__ProcInfo_15);
    }
#line 881 "trace_gen.m"
    ll_backend__trace_gen__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_8, (MR_Integer) 0)));
#line 881 "trace_gen.m"
    ll_backend__trace_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_8, (MR_Integer) 1)));
#line 881 "trace_gen.m"
    ll_backend__trace_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_8, (MR_Integer) 2)));
#line 881 "trace_gen.m"
    ll_backend__trace_gen__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_8, (MR_Integer) 3)));
#line 881 "trace_gen.m"
    ll_backend__trace_gen__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_8, (MR_Integer) 4)));
#line 881 "trace_gen.m"
    ll_backend__trace_gen__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_8, (MR_Integer) 5)));
#line 881 "trace_gen.m"
    ll_backend__trace_gen__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_8, (MR_Integer) 6)));
#line 881 "trace_gen.m"
    ll_backend__trace_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_8, (MR_Integer) 7)));
#line 881 "trace_gen.m"
    ll_backend__trace_gen__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_8, (MR_Integer) 8)));
#line 881 "trace_gen.m"
    {
#line 881 "trace_gen.m"
      ll_backend__trace_gen__NeedPort_16 = libs__trace_params__eff_trace_needs_port_6_f_0(ll_backend__trace_gen__ModuleInfo_13, ll_backend__trace_gen__PredInfo_14, ll_backend__trace_gen__ProcInfo_15, ll_backend__trace_gen__V_22_22, ll_backend__trace_gen__V_30_30, ll_backend__trace_gen__Port_12);
    }
#line 888 "trace_gen.m"
    if ((ll_backend__trace_gen__NeedPort_16 == (MR_Integer) 0))
#line 889 "trace_gen.m"
      {
#line 890 "trace_gen.m"
        *ll_backend__trace_gen__MaybeExternalInfo_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 889 "trace_gen.m"
        *ll_backend__trace_gen__STATE_VARIABLE_CI_21 = ll_backend__trace_gen__STATE_VARIABLE_CI_0_20;
#line 889 "trace_gen.m"
      }
#line 888 "trace_gen.m"
    else
#line 884 "trace_gen.m"
      {
#line 884 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Label_17;
#line 884 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TvarDataMap_18;
#line 884 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Code_19;
#line 884 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_25_25;
#line 884 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_29_29;

#line 885 "trace_gen.m"
        {
#line 885 "trace_gen.m"
          ll_backend__trace_gen__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 885 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_25_25, 0) = ((MR_Box) (ll_backend__trace_gen__TraceInfo_8));
#line 885 "trace_gen.m"
        }
#line 885 "trace_gen.m"
        {
#line 885 "trace_gen.m"
          ll_backend__trace_gen__generate_event_code_11_p_0(ll_backend__trace_gen__Port_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__trace_gen__V_25_25, ll_backend__trace_gen__Context_9, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__trace_gen__Label_17, &ll_backend__trace_gen__TvarDataMap_18, &ll_backend__trace_gen__Code_19, ll_backend__trace_gen__STATE_VARIABLE_CI_0_20, ll_backend__trace_gen__STATE_VARIABLE_CI_21);
        }
#line 887 "trace_gen.m"
        {
#line 887 "trace_gen.m"
          ll_backend__trace_gen__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 887 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_29_29, 0) = ((MR_Box) (ll_backend__trace_gen__Label_17));
#line 887 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_29_29, 1) = ((MR_Box) (ll_backend__trace_gen__TvarDataMap_18));
#line 887 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_29_29, 2) = ((MR_Box) (ll_backend__trace_gen__Code_19));
#line 887 "trace_gen.m"
        }
#line 887 "trace_gen.m"
        {
#line 887 "trace_gen.m"
          MR_Word base;
#line 887 "trace_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 887 "trace_gen.m"
          *ll_backend__trace_gen__MaybeExternalInfo_10 = base;
#line 887 "trace_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__trace_gen__V_29_29));
#line 887 "trace_gen.m"
        }
#line 884 "trace_gen.m"
      }
#line 876 "trace_gen.m"
  }
#line 219 "trace_gen.m"
}

#line 195 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__generate_tailrec_event_code_8_p_0(
#line 195 "trace_gen.m"
  MR_Word ll_backend__trace_gen__TraceInfo_9,
#line 195 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ArgsInfos_10,
#line 195 "trace_gen.m"
  MR_Word ll_backend__trace_gen__GoalId_11,
#line 195 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Context_12,
#line 195 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_13,
#line 195 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__TailRecLabel_14,
#line 195 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_26,
#line 195 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_27)
#line 195 "trace_gen.m"
{
#line 894 "trace_gen.m"
  {
#line 894 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 894 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ContainingGoalMap_17;
#line 894 "trace_gen.m"
    MR_Word ll_backend__trace_gen__GoalPath_18;
#line 894 "trace_gen.m"
    MR_Word ll_backend__trace_gen__PortInfo_19;
#line 894 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTailRecInfo_24;
#line 894 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_28_28;
#line 901 "trace_gen.m"
    MR_Word ll_backend__trace_gen___Label_22;
#line 901 "trace_gen.m"
    MR_Word ll_backend__trace_gen___TvarDataMap_23;
#line 903 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_34_34;
#line 903 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_35_35;
#line 903 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_36_36;
#line 903 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_37_37;
#line 903 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_38_38;
#line 903 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_39_39;
#line 903 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_40_40;
#line 903 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_41_41;

#line 896 "trace_gen.m"
    {
#line 896 "trace_gen.m"
      ll_backend__code_info__get_containing_goal_map_det_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_26, &ll_backend__trace_gen__ContainingGoalMap_17);
    }
#line 897 "trace_gen.m"
    {
#line 897 "trace_gen.m"
      ll_backend__trace_gen__GoalPath_18 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__trace_gen__ContainingGoalMap_17, ll_backend__trace_gen__GoalId_11);
    }
#line 898 "trace_gen.m"
    {
#line 898 "trace_gen.m"
      ll_backend__trace_gen__PortInfo_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 898 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__PortInfo_19, 0) = ((MR_Box) (ll_backend__trace_gen__GoalPath_18));
#line 898 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__PortInfo_19, 1) = ((MR_Box) (ll_backend__trace_gen__ArgsInfos_10));
#line 898 "trace_gen.m"
    }
#line 901 "trace_gen.m"
    {
#line 901 "trace_gen.m"
      ll_backend__trace_gen__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 901 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_28_28, 0) = ((MR_Box) (ll_backend__trace_gen__TraceInfo_9));
#line 901 "trace_gen.m"
    }
#line 901 "trace_gen.m"
    {
#line 901 "trace_gen.m"
      ll_backend__trace_gen__generate_event_code_11_p_0((MR_Integer) 4, ll_backend__trace_gen__PortInfo_19, ll_backend__trace_gen__V_28_28, ll_backend__trace_gen__Context_12, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__trace_gen___Label_22, &ll_backend__trace_gen___TvarDataMap_23, ll_backend__trace_gen__Code_13, ll_backend__trace_gen__STATE_VARIABLE_CI_0_26, ll_backend__trace_gen__STATE_VARIABLE_CI_27);
    }
#line 903 "trace_gen.m"
    ll_backend__trace_gen__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_9, (MR_Integer) 0)));
#line 903 "trace_gen.m"
    ll_backend__trace_gen__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_9, (MR_Integer) 1)));
#line 903 "trace_gen.m"
    ll_backend__trace_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_9, (MR_Integer) 2)));
#line 903 "trace_gen.m"
    ll_backend__trace_gen__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_9, (MR_Integer) 3)));
#line 903 "trace_gen.m"
    ll_backend__trace_gen__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_9, (MR_Integer) 4)));
#line 903 "trace_gen.m"
    ll_backend__trace_gen__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_9, (MR_Integer) 5)));
#line 903 "trace_gen.m"
    ll_backend__trace_gen__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_9, (MR_Integer) 6)));
#line 903 "trace_gen.m"
    ll_backend__trace_gen__MaybeTailRecInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_9, (MR_Integer) 7)));
#line 903 "trace_gen.m"
    ll_backend__trace_gen__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_9, (MR_Integer) 8)));
#line 906 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeTailRecInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 907 "trace_gen.m"
      {
#line 908 "trace_gen.m"
        {
#line 908 "trace_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.generate_tailrec_event_code\'/8", (MR_String) "no tail rec label");
#line 908 "trace_gen.m"
          return;
        }
#line 907 "trace_gen.m"
      }
#line 906 "trace_gen.m"
    else
#line 905 "trace_gen.m"
      {
#line 905 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTailRecInfo_24, (MR_Integer) 0)));
#line 905 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_33_33, (MR_Integer) 0)));

#line 905 "trace_gen.m"
        *ll_backend__trace_gen__TailRecLabel_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_33_33, (MR_Integer) 1)));
#line 905 "trace_gen.m"
      }
#line 894 "trace_gen.m"
  }
#line 195 "trace_gen.m"
}

#line 192 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__generate_user_event_code_5_p_0(
#line 192 "trace_gen.m"
  MR_Word ll_backend__trace_gen__UserInfo_6,
#line 192 "trace_gen.m"
  MR_Word ll_backend__trace_gen__GoalInfo_7,
#line 192 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_8,
#line 192 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_20,
#line 192 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_21)
#line 192 "trace_gen.m"
{
#line 863 "trace_gen.m"
  {
#line 863 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 863 "trace_gen.m"
    MR_Word ll_backend__trace_gen__GoalId_10;
#line 863 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ContainingGoalMap_11;
#line 863 "trace_gen.m"
    MR_Word ll_backend__trace_gen__GoalPath_12;
#line 863 "trace_gen.m"
    MR_Word ll_backend__trace_gen__Context_13;
#line 863 "trace_gen.m"
    MR_Word ll_backend__trace_gen__PortInfo_15;
#line 863 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_22_22;
#line 872 "trace_gen.m"
    MR_Word ll_backend__trace_gen___Label_18;
#line 872 "trace_gen.m"
    MR_Word ll_backend__trace_gen___TvarDataMap_19;

#line 864 "trace_gen.m"
    {
#line 864 "trace_gen.m"
      ll_backend__trace_gen__GoalId_10 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__trace_gen__GoalInfo_7);
    }
#line 865 "trace_gen.m"
    {
#line 865 "trace_gen.m"
      ll_backend__code_info__get_containing_goal_map_det_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_20, &ll_backend__trace_gen__ContainingGoalMap_11);
    }
#line 866 "trace_gen.m"
    {
#line 866 "trace_gen.m"
      ll_backend__trace_gen__GoalPath_12 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__trace_gen__ContainingGoalMap_11, ll_backend__trace_gen__GoalId_10);
    }
#line 867 "trace_gen.m"
    {
#line 867 "trace_gen.m"
      ll_backend__trace_gen__Context_13 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__trace_gen__GoalInfo_7);
    }
#line 869 "trace_gen.m"
    {
#line 869 "trace_gen.m"
      ll_backend__trace_gen__PortInfo_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 869 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__PortInfo_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 869 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__PortInfo_15, 1) = ((MR_Box) (ll_backend__trace_gen__GoalPath_12));
#line 869 "trace_gen.m"
    }
#line 873 "trace_gen.m"
    {
#line 873 "trace_gen.m"
      ll_backend__trace_gen__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 873 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_22_22, 0) = ((MR_Box) (ll_backend__trace_gen__UserInfo_6));
#line 873 "trace_gen.m"
    }
#line 872 "trace_gen.m"
    {
#line 872 "trace_gen.m"
      ll_backend__trace_gen__generate_event_code_11_p_0((MR_Integer) 15, ll_backend__trace_gen__PortInfo_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__trace_gen__Context_13, (MR_Integer) 0, ll_backend__trace_gen__V_22_22, &ll_backend__trace_gen___Label_18, &ll_backend__trace_gen___TvarDataMap_19, ll_backend__trace_gen__Code_8, ll_backend__trace_gen__STATE_VARIABLE_CI_0_20, ll_backend__trace_gen__STATE_VARIABLE_CI_21);
    }
#line 863 "trace_gen.m"
  }
#line 192 "trace_gen.m"
}

#line 186 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__maybe_generate_negated_event_code_6_p_0(
#line 186 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Goal_7,
#line 186 "trace_gen.m"
  MR_Word ll_backend__trace_gen__OutsideGoalInfo_8,
#line 186 "trace_gen.m"
  MR_Word ll_backend__trace_gen__NegPort_9,
#line 186 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_10,
#line 186 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_27,
#line 186 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_28)
#line 186 "trace_gen.m"
{
#line 829 "trace_gen.m"
  {
#line 829 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 829 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTraceInfo_12;
#line 859 "trace_gen.m"
    MR_Word ll_backend__trace_gen__Port_14;
#line 832 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceInfo_13;
#line 832 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ModuleInfo_15;
#line 832 "trace_gen.m"
    MR_Word ll_backend__trace_gen__PredInfo_16;
#line 832 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ProcInfo_17;
#line 832 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_29_29;
#line 832 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_30_30;
#line 832 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_37_37;
#line 843 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_38_38;
#line 843 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_39_39;
#line 843 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_40_40;
#line 843 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_41_41;
#line 843 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_42_42;
#line 843 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_43_43;
#line 843 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_44_44;

#line 830 "trace_gen.m"
    {
#line 830 "trace_gen.m"
      ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_27, &ll_backend__trace_gen__MaybeTraceInfo_12);
    }
#line 832 "trace_gen.m"
    ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__MaybeTraceInfo_12)) == (MR_mktag((MR_Integer) 1)));
#line 832 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 832 "trace_gen.m"
      {
#line 832 "trace_gen.m"
        ll_backend__trace_gen__TraceInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTraceInfo_12, (MR_Integer) 0)));
#line 836 "trace_gen.m"
        if ((ll_backend__trace_gen__NegPort_9 == (MR_Integer) 1))
#line 835 "trace_gen.m"
          ll_backend__trace_gen__Port_14 = (MR_Integer) 11;
#line 836 "trace_gen.m"
        else
#line 838 "trace_gen.m"
          ll_backend__trace_gen__Port_14 = (MR_Integer) 10;
#line 840 "trace_gen.m"
        {
#line 840 "trace_gen.m"
          ll_backend__code_info__get_module_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_27, &ll_backend__trace_gen__ModuleInfo_15);
        }
#line 841 "trace_gen.m"
        {
#line 841 "trace_gen.m"
          ll_backend__code_info__get_pred_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_27, &ll_backend__trace_gen__PredInfo_16);
        }
#line 842 "trace_gen.m"
        {
#line 842 "trace_gen.m"
          ll_backend__code_info__get_proc_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_27, &ll_backend__trace_gen__ProcInfo_17);
        }
#line 843 "trace_gen.m"
        ll_backend__trace_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_13, (MR_Integer) 0)));
#line 843 "trace_gen.m"
        ll_backend__trace_gen__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_13, (MR_Integer) 1)));
#line 843 "trace_gen.m"
        ll_backend__trace_gen__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_13, (MR_Integer) 2)));
#line 843 "trace_gen.m"
        ll_backend__trace_gen__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_13, (MR_Integer) 3)));
#line 843 "trace_gen.m"
        ll_backend__trace_gen__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_13, (MR_Integer) 4)));
#line 843 "trace_gen.m"
        ll_backend__trace_gen__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_13, (MR_Integer) 5)));
#line 843 "trace_gen.m"
        ll_backend__trace_gen__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_13, (MR_Integer) 6)));
#line 843 "trace_gen.m"
        ll_backend__trace_gen__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_13, (MR_Integer) 7)));
#line 843 "trace_gen.m"
        ll_backend__trace_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_13, (MR_Integer) 8)));
#line 843 "trace_gen.m"
        {
#line 843 "trace_gen.m"
          ll_backend__trace_gen__V_29_29 = libs__trace_params__eff_trace_needs_port_6_f_0(ll_backend__trace_gen__ModuleInfo_15, ll_backend__trace_gen__PredInfo_16, ll_backend__trace_gen__ProcInfo_17, ll_backend__trace_gen__V_30_30, ll_backend__trace_gen__V_37_37, ll_backend__trace_gen__Port_14);
        }
#line 845 "trace_gen.m"
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_29_29 == (MR_Integer) 1);
#line 832 "trace_gen.m"
      }
#line 859 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 847 "trace_gen.m"
      {
#line 847 "trace_gen.m"
        MR_Word ll_backend__trace_gen__GoalInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Goal_7, (MR_Integer) 1)));
#line 847 "trace_gen.m"
        MR_Word ll_backend__trace_gen__GoalId_20;
#line 847 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Context_21;
#line 847 "trace_gen.m"
        MR_Word ll_backend__trace_gen__HideEvent_22;
#line 847 "trace_gen.m"
        MR_Word ll_backend__trace_gen__ContainingGoalMap_23;
#line 847 "trace_gen.m"
        MR_Word ll_backend__trace_gen__GoalPath_24;
#line 847 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_33_33;
#line 847 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Goal_7, (MR_Integer) 0)));
#line 857 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_25_25;
#line 857 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_26_26;

#line 848 "trace_gen.m"
        {
#line 848 "trace_gen.m"
          ll_backend__trace_gen__GoalId_20 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__trace_gen__GoalInfo_19);
        }
#line 849 "trace_gen.m"
        {
#line 849 "trace_gen.m"
          ll_backend__trace_gen__Context_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__trace_gen__GoalInfo_19);
        }
#line 850 "trace_gen.m"
        {
#line 850 "trace_gen.m"
          ll_backend__trace_gen__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(ll_backend__trace_gen__OutsideGoalInfo_8, (MR_Integer) 8);
        }
#line 852 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 851 "trace_gen.m"
          ll_backend__trace_gen__HideEvent_22 = (MR_Integer) 1;
#line 852 "trace_gen.m"
        else
#line 853 "trace_gen.m"
          ll_backend__trace_gen__HideEvent_22 = (MR_Integer) 0;
#line 855 "trace_gen.m"
        {
#line 855 "trace_gen.m"
          ll_backend__code_info__get_containing_goal_map_det_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_27, &ll_backend__trace_gen__ContainingGoalMap_23);
        }
#line 856 "trace_gen.m"
        {
#line 856 "trace_gen.m"
          ll_backend__trace_gen__GoalPath_24 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__trace_gen__ContainingGoalMap_23, ll_backend__trace_gen__GoalId_20);
        }
#line 857 "trace_gen.m"
        {
#line 857 "trace_gen.m"
          ll_backend__trace_gen__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 857 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 857 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_33_33, 1) = ((MR_Box) (ll_backend__trace_gen__GoalPath_24));
#line 857 "trace_gen.m"
        }
#line 857 "trace_gen.m"
        {
#line 857 "trace_gen.m"
          ll_backend__trace_gen__generate_event_code_11_p_0(ll_backend__trace_gen__Port_14, ll_backend__trace_gen__V_33_33, ll_backend__trace_gen__MaybeTraceInfo_12, ll_backend__trace_gen__Context_21, ll_backend__trace_gen__HideEvent_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__trace_gen__V_25_25, &ll_backend__trace_gen__V_26_26, ll_backend__trace_gen__Code_10, ll_backend__trace_gen__STATE_VARIABLE_CI_0_27, ll_backend__trace_gen__STATE_VARIABLE_CI_28);
        }
#line 847 "trace_gen.m"
      }
#line 859 "trace_gen.m"
    else
#line 860 "trace_gen.m"
      {
#line 860 "trace_gen.m"
        {
#line 860 "trace_gen.m"
          *ll_backend__trace_gen__Code_10 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 860 "trace_gen.m"
        *ll_backend__trace_gen__STATE_VARIABLE_CI_28 = ll_backend__trace_gen__STATE_VARIABLE_CI_0_27;
#line 860 "trace_gen.m"
      }
#line 829 "trace_gen.m"
  }
#line 186 "trace_gen.m"
}

#line 180 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__maybe_generate_internal_event_code_5_p_0(
#line 180 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Goal_6,
#line 180 "trace_gen.m"
  MR_Word ll_backend__trace_gen__OutsideGoalInfo_7,
#line 180 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_8,
#line 180 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_33,
#line 180 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_34)
#line 180 "trace_gen.m"
{
#line 762 "trace_gen.m"
  {
#line 762 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 762 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTraceInfo_10;

#line 763 "trace_gen.m"
    {
#line 763 "trace_gen.m"
      ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_33, &ll_backend__trace_gen__MaybeTraceInfo_10);
    }
#line 824 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeTraceInfo_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 825 "trace_gen.m"
      {
#line 826 "trace_gen.m"
        {
#line 826 "trace_gen.m"
          *ll_backend__trace_gen__Code_8 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 825 "trace_gen.m"
        *ll_backend__trace_gen__STATE_VARIABLE_CI_34 = ll_backend__trace_gen__STATE_VARIABLE_CI_0_33;
#line 825 "trace_gen.m"
      }
#line 824 "trace_gen.m"
    else
#line 765 "trace_gen.m"
      {
#line 765 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TraceInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTraceInfo_10, (MR_Integer) 0)));
#line 765 "trace_gen.m"
        MR_Word ll_backend__trace_gen__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Goal_6, (MR_Integer) 1)));
#line 765 "trace_gen.m"
        MR_Word ll_backend__trace_gen__GoalId_14;
#line 765 "trace_gen.m"
        MR_Word ll_backend__trace_gen__ContainingGoalMap_15;
#line 765 "trace_gen.m"
        MR_Word ll_backend__trace_gen__ContainingGoal_16;
#line 765 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Port_23;
#line 766 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Goal_6, (MR_Integer) 0)));
#line 769 "trace_gen.m"
        MR_Box ll_backend__trace_gen__conv0_ContainingGoal_16;
#line 797 "trace_gen.m"
        MR_Word ll_backend__trace_gen__PortPrime_21;
#line 771 "trace_gen.m"
        MR_Word ll_backend__trace_gen__LastStep_18;
#line 771 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_17_17;
#line 801 "trace_gen.m"
        MR_Word ll_backend__trace_gen__ModuleInfo_24;
#line 801 "trace_gen.m"
        MR_Word ll_backend__trace_gen__PredInfo_25;
#line 801 "trace_gen.m"
        MR_Word ll_backend__trace_gen__ProcInfo_26;
#line 801 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_38_38;
#line 801 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_39_39;
#line 801 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_46_46;
#line 804 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_47_47;
#line 804 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_48_48;
#line 804 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_49_49;
#line 804 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_50_50;
#line 804 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_51_51;
#line 804 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_52_52;
#line 804 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_53_53;

#line 767 "trace_gen.m"
        {
#line 767 "trace_gen.m"
          ll_backend__trace_gen__GoalId_14 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__trace_gen__GoalInfo_13);
        }
#line 768 "trace_gen.m"
        {
#line 768 "trace_gen.m"
          ll_backend__code_info__get_containing_goal_map_det_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_33, &ll_backend__trace_gen__ContainingGoalMap_15);
        }
#line 769 "trace_gen.m"
        {
#line 769 "trace_gen.m"
          mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0, ll_backend__trace_gen__ContainingGoalMap_15, ((MR_Box) (ll_backend__trace_gen__GoalId_14)), &ll_backend__trace_gen__conv0_ContainingGoal_16);
        }
#line 769 "trace_gen.m"
        ll_backend__trace_gen__ContainingGoal_16 = ((MR_Word) ll_backend__trace_gen__conv0_ContainingGoal_16);
#line 771 "trace_gen.m"
        ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__ContainingGoal_16)) == (MR_mktag((MR_Integer) 1)));
#line 771 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 771 "trace_gen.m"
          {
#line 771 "trace_gen.m"
            ll_backend__trace_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__ContainingGoal_16, (MR_Integer) 0)));
#line 771 "trace_gen.m"
            ll_backend__trace_gen__LastStep_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__ContainingGoal_16, (MR_Integer) 1)));
#line 775 "trace_gen.m"
            if ((ll_backend__trace_gen__LastStep_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 784 "trace_gen.m"
              {
#line 784 "trace_gen.m"
                ll_backend__trace_gen__PortPrime_21 = (MR_Integer) 6;
#line 784 "trace_gen.m"
                ll_backend__trace_gen__succeeded = MR_TRUE;
#line 784 "trace_gen.m"
              }
#line 775 "trace_gen.m"
            else
#line 775 "trace_gen.m"
              if ((ll_backend__trace_gen__LastStep_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 790 "trace_gen.m"
                {
#line 790 "trace_gen.m"
                  ll_backend__trace_gen__PortPrime_21 = (MR_Integer) 8;
#line 790 "trace_gen.m"
                  ll_backend__trace_gen__succeeded = MR_TRUE;
#line 790 "trace_gen.m"
                }
#line 775 "trace_gen.m"
              else
#line 775 "trace_gen.m"
                if ((ll_backend__trace_gen__LastStep_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 787 "trace_gen.m"
                  {
#line 787 "trace_gen.m"
                    ll_backend__trace_gen__PortPrime_21 = (MR_Integer) 7;
#line 787 "trace_gen.m"
                    ll_backend__trace_gen__succeeded = MR_TRUE;
#line 787 "trace_gen.m"
                  }
#line 775 "trace_gen.m"
                else
#line 775 "trace_gen.m"
                  if ((ll_backend__trace_gen__LastStep_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 793 "trace_gen.m"
                    {
#line 793 "trace_gen.m"
                      ll_backend__trace_gen__PortPrime_21 = (MR_Integer) 9;
#line 793 "trace_gen.m"
                      ll_backend__trace_gen__succeeded = MR_TRUE;
#line 793 "trace_gen.m"
                    }
#line 775 "trace_gen.m"
                  else
#line 775 "trace_gen.m"
                    if (((MR_tag((MR_Word) ll_backend__trace_gen__LastStep_18)) == (MR_mktag((MR_Integer) 2))))
#line 776 "trace_gen.m"
                      {
#line 776 "trace_gen.m"
                        MR_Integer ll_backend__trace_gen__DisjunctNum_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__LastStep_18, (MR_Integer) 0)));

#line 777 "trace_gen.m"
                        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__DisjunctNum_22 == (MR_Integer) 1);
#line 779 "trace_gen.m"
                        if (ll_backend__trace_gen__succeeded)
#line 778 "trace_gen.m"
                          ll_backend__trace_gen__PortPrime_21 = (MR_Integer) 12;
#line 779 "trace_gen.m"
                        else
#line 780 "trace_gen.m"
                          ll_backend__trace_gen__PortPrime_21 = (MR_Integer) 13;
#line 776 "trace_gen.m"
                        ll_backend__trace_gen__succeeded = MR_TRUE;
#line 776 "trace_gen.m"
                      }
#line 775 "trace_gen.m"
                    else
#line 775 "trace_gen.m"
                      if (((((MR_tag((MR_Word) ll_backend__trace_gen__LastStep_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__LastStep_18, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 774 "trace_gen.m"
                        {
#line 774 "trace_gen.m"
                          ll_backend__trace_gen__PortPrime_21 = (MR_Integer) 14;
#line 774 "trace_gen.m"
                          ll_backend__trace_gen__succeeded = MR_TRUE;
#line 774 "trace_gen.m"
                        }
#line 775 "trace_gen.m"
                      else
#line 775 "trace_gen.m"
                        ll_backend__trace_gen__succeeded = MR_FALSE;
#line 771 "trace_gen.m"
          }
#line 797 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 796 "trace_gen.m"
          ll_backend__trace_gen__Port_23 = ll_backend__trace_gen__PortPrime_21;
#line 797 "trace_gen.m"
        else
#line 798 "trace_gen.m"
          {
#line 798 "trace_gen.m"
            {
#line 798 "trace_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.maybe_generate_internal_event_code\'/5", (MR_String) "bad path");
#line 798 "trace_gen.m"
              return;
            }
#line 798 "trace_gen.m"
          }
#line 801 "trace_gen.m"
        {
#line 801 "trace_gen.m"
          ll_backend__code_info__get_module_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_33, &ll_backend__trace_gen__ModuleInfo_24);
        }
#line 802 "trace_gen.m"
        {
#line 802 "trace_gen.m"
          ll_backend__code_info__get_pred_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_33, &ll_backend__trace_gen__PredInfo_25);
        }
#line 803 "trace_gen.m"
        {
#line 803 "trace_gen.m"
          ll_backend__code_info__get_proc_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_33, &ll_backend__trace_gen__ProcInfo_26);
        }
#line 804 "trace_gen.m"
        ll_backend__trace_gen__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 0)));
#line 804 "trace_gen.m"
        ll_backend__trace_gen__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 1)));
#line 804 "trace_gen.m"
        ll_backend__trace_gen__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 2)));
#line 804 "trace_gen.m"
        ll_backend__trace_gen__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 3)));
#line 804 "trace_gen.m"
        ll_backend__trace_gen__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 4)));
#line 804 "trace_gen.m"
        ll_backend__trace_gen__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 5)));
#line 804 "trace_gen.m"
        ll_backend__trace_gen__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 6)));
#line 804 "trace_gen.m"
        ll_backend__trace_gen__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 7)));
#line 804 "trace_gen.m"
        ll_backend__trace_gen__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 8)));
#line 804 "trace_gen.m"
        {
#line 804 "trace_gen.m"
          ll_backend__trace_gen__V_38_38 = libs__trace_params__eff_trace_needs_port_6_f_0(ll_backend__trace_gen__ModuleInfo_24, ll_backend__trace_gen__PredInfo_25, ll_backend__trace_gen__ProcInfo_26, ll_backend__trace_gen__V_39_39, ll_backend__trace_gen__V_46_46, ll_backend__trace_gen__Port_23);
        }
#line 806 "trace_gen.m"
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_38_38 == (MR_Integer) 1);
#line 821 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 808 "trace_gen.m"
          {
#line 808 "trace_gen.m"
            MR_Word ll_backend__trace_gen__PreDeaths_27;
#line 808 "trace_gen.m"
            MR_Word ll_backend__trace_gen__Context_28;
#line 808 "trace_gen.m"
            MR_Word ll_backend__trace_gen__HideEvent_29;
#line 808 "trace_gen.m"
            MR_Word ll_backend__trace_gen__GoalPath_30;
#line 808 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_42_42;
#line 819 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_31_31;
#line 819 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_32_32;

#line 808 "trace_gen.m"
            {
#line 808 "trace_gen.m"
              hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ll_backend__trace_gen__GoalInfo_13, &ll_backend__trace_gen__PreDeaths_27);
            }
#line 809 "trace_gen.m"
            {
#line 809 "trace_gen.m"
              ll_backend__trace_gen__Context_28 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__trace_gen__GoalInfo_13);
            }
#line 811 "trace_gen.m"
            {
#line 811 "trace_gen.m"
              ll_backend__trace_gen__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(ll_backend__trace_gen__OutsideGoalInfo_7, (MR_Integer) 8);
            }
#line 815 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 814 "trace_gen.m"
              ll_backend__trace_gen__HideEvent_29 = (MR_Integer) 1;
#line 815 "trace_gen.m"
            else
#line 816 "trace_gen.m"
              ll_backend__trace_gen__HideEvent_29 = (MR_Integer) 0;
#line 818 "trace_gen.m"
            {
#line 818 "trace_gen.m"
              ll_backend__trace_gen__GoalPath_30 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__trace_gen__ContainingGoalMap_15, ll_backend__trace_gen__GoalId_14);
            }
#line 819 "trace_gen.m"
            {
#line 819 "trace_gen.m"
              ll_backend__trace_gen__V_42_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "trace_gen.m"
              MR_hl_field(MR_mktag(2), ll_backend__trace_gen__V_42_42, 0) = ((MR_Box) (ll_backend__trace_gen__GoalPath_30));
#line 819 "trace_gen.m"
              MR_hl_field(MR_mktag(2), ll_backend__trace_gen__V_42_42, 1) = ((MR_Box) (ll_backend__trace_gen__PreDeaths_27));
#line 819 "trace_gen.m"
            }
#line 819 "trace_gen.m"
            {
#line 819 "trace_gen.m"
              ll_backend__trace_gen__generate_event_code_11_p_0(ll_backend__trace_gen__Port_23, ll_backend__trace_gen__V_42_42, ll_backend__trace_gen__MaybeTraceInfo_10, ll_backend__trace_gen__Context_28, ll_backend__trace_gen__HideEvent_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__trace_gen__V_31_31, &ll_backend__trace_gen__V_32_32, ll_backend__trace_gen__Code_8, ll_backend__trace_gen__STATE_VARIABLE_CI_0_33, ll_backend__trace_gen__STATE_VARIABLE_CI_34);
            }
#line 808 "trace_gen.m"
          }
#line 821 "trace_gen.m"
        else
#line 822 "trace_gen.m"
          {
#line 822 "trace_gen.m"
            {
#line 822 "trace_gen.m"
              *ll_backend__trace_gen__Code_8 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
#line 822 "trace_gen.m"
            *ll_backend__trace_gen__STATE_VARIABLE_CI_34 = ll_backend__trace_gen__STATE_VARIABLE_CI_0_33;
#line 822 "trace_gen.m"
          }
#line 765 "trace_gen.m"
      }
#line 762 "trace_gen.m"
  }
#line 180 "trace_gen.m"
}

#line 174 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__trace_prepare_for_call_2_p_0(
#line 174 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CI_3,
#line 174 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__TraceCode_4)
#line 174 "trace_gen.m"
{
#line 737 "trace_gen.m"
  {
#line 737 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 737 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTraceInfo_5;
#line 737 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CodeModel_6;

#line 738 "trace_gen.m"
    {
#line 738 "trace_gen.m"
      ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__trace_gen__CI_3, &ll_backend__trace_gen__MaybeTraceInfo_5);
    }
#line 739 "trace_gen.m"
    {
#line 739 "trace_gen.m"
      ll_backend__trace_gen__CodeModel_6 = ll_backend__code_info__get_proc_model_1_f_0(ll_backend__trace_gen__CI_3);
    }
#line 757 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeTraceInfo_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 758 "trace_gen.m"
      {
#line 759 "trace_gen.m"
        {
#line 759 "trace_gen.m"
          *ll_backend__trace_gen__TraceCode_4 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 758 "trace_gen.m"
      }
#line 757 "trace_gen.m"
    else
#line 741 "trace_gen.m"
      {
#line 741 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TraceInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTraceInfo_5, (MR_Integer) 0)));
#line 741 "trace_gen.m"
        MR_Word ll_backend__trace_gen__MaybeFromFullSlot_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 2)));
#line 741 "trace_gen.m"
        MR_Word ll_backend__trace_gen__CallDepthLval_9;
#line 741 "trace_gen.m"
        MR_String ll_backend__trace_gen__CallDepthStr_10;
#line 741 "trace_gen.m"
        MR_String ll_backend__trace_gen__MacroStr_12;
#line 741 "trace_gen.m"
        MR_String ll_backend__trace_gen__ResetStmt_13;
#line 741 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_14_14;
#line 741 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_16_16;
#line 741 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_18_18;
#line 741 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_19_19;
#line 741 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_21_21;
#line 741 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_22_22;
#line 742 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 0)));
#line 742 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 1)));
#line 742 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 3)));
#line 742 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 4)));
#line 742 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 5)));
#line 742 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 6)));
#line 742 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 7)));
#line 742 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 8)));

#line 1326 "trace_gen.m"
        if ((ll_backend__trace_gen__CodeModel_6 == (MR_Integer) 2))
#line 1326 "trace_gen.m"
          {
#line 1327 "trace_gen.m"
            ll_backend__trace_gen__CallDepthLval_9 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[13]);
#line 1326 "trace_gen.m"
          }
#line 1326 "trace_gen.m"
        else
#line 1331 "trace_gen.m"
          {
#line 1332 "trace_gen.m"
            ll_backend__trace_gen__CallDepthLval_9 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[14]);
#line 1331 "trace_gen.m"
          }
#line 744 "trace_gen.m"
        {
#line 744 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallDepthLval_9, &ll_backend__trace_gen__CallDepthStr_10);
        }
#line 748 "trace_gen.m"
        if ((ll_backend__trace_gen__MaybeFromFullSlot_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 750 "trace_gen.m"
          ll_backend__trace_gen__MacroStr_12 = (MR_String) "MR_trace_reset_depth_from_full";
#line 748 "trace_gen.m"
        else
#line 747 "trace_gen.m"
          ll_backend__trace_gen__MacroStr_12 = (MR_String) "MR_trace_reset_depth_from_shallow";
#line 752 "trace_gen.m"
        {
#line 752 "trace_gen.m"
          ll_backend__trace_gen__V_16_16 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallDepthStr_10, (MR_String) ");\n");
        }
#line 752 "trace_gen.m"
        {
#line 752 "trace_gen.m"
          ll_backend__trace_gen__V_14_14 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__trace_gen__V_16_16);
        }
#line 752 "trace_gen.m"
        {
#line 752 "trace_gen.m"
          ll_backend__trace_gen__ResetStmt_13 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__MacroStr_12, ll_backend__trace_gen__V_14_14);
        }
#line 755 "trace_gen.m"
        {
#line 755 "trace_gen.m"
          ll_backend__trace_gen__V_22_22 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        }
#line 755 "trace_gen.m"
        {
#line 755 "trace_gen.m"
          ll_backend__trace_gen__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 755 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_21_21, 0) = ((MR_Box) (ll_backend__trace_gen__V_22_22));
#line 755 "trace_gen.m"
        }
#line 754 "trace_gen.m"
        {
#line 754 "trace_gen.m"
          ll_backend__trace_gen__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 754 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 754 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_19_19, 1) = ((MR_Box) ((MR_Integer) 1));
#line 754 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_19_19, 2) = ((MR_Box) (ll_backend__trace_gen__V_21_21));
#line 754 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_19_19, 3) = ((MR_Box) (ll_backend__trace_gen__ResetStmt_13));
#line 754 "trace_gen.m"
        }
#line 754 "trace_gen.m"
        {
#line 754 "trace_gen.m"
          ll_backend__trace_gen__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 754 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_18_18, 0) = ((MR_Box) (ll_backend__trace_gen__V_19_19));
#line 754 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_18_18, 1) = ((MR_Box) ((MR_String) ""));
#line 754 "trace_gen.m"
        }
#line 753 "trace_gen.m"
        {
#line 753 "trace_gen.m"
          *ll_backend__trace_gen__TraceCode_4 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__trace_gen__V_18_18)));
        }
#line 741 "trace_gen.m"
      }
#line 737 "trace_gen.m"
  }
#line 174 "trace_gen.m"
}

#line 169 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__generate_slot_fill_code_3_p_0(
#line 169 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CI_4,
#line 169 "trace_gen.m"
  MR_Word ll_backend__trace_gen__TraceInfo_5,
#line 169 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__TraceCode_6)
#line 169 "trace_gen.m"
{
#line 602 "trace_gen.m"
  {
#line 602 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 602 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TypeCtorInfo_233_233;
#line 602 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TypeCtorInfo_234_234;
#line 602 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CodeModel_7;
#line 602 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeFromFullSlot_8;
#line 602 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeIoSeqSlot_9;
#line 602 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTrailLvals_10;
#line 602 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeMaxfrLval_11;
#line 602 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeCallTableLval_12;
#line 602 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTailRecInfo_13;
#line 602 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeRedoLabel_14;
#line 602 "trace_gen.m"
    MR_Word ll_backend__trace_gen__EventNumLval_15;
#line 602 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CallNumLval_16;
#line 602 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CallDepthLval_17;
#line 602 "trace_gen.m"
    MR_String ll_backend__trace_gen__EventNumStr_18;
#line 602 "trace_gen.m"
    MR_String ll_backend__trace_gen__CallNumStr_19;
#line 602 "trace_gen.m"
    MR_String ll_backend__trace_gen__CallDepthStr_20;
#line 602 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeLayoutLabel_25;
#line 602 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeHashDefLabel_26;
#line 602 "trace_gen.m"
    MR_String ll_backend__trace_gen__TraceStmt1_35;
#line 602 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceComponents1_36;
#line 602 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceCode1_37;
#line 602 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceCode2_39;
#line 602 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceCode3_45;
#line 602 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceCode4_50;
#line 602 "trace_gen.m"
    MR_String ll_backend__trace_gen__STATE_VARIABLE_CodeStr_51_51;
#line 602 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_53_53;
#line 602 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_54_54;
#line 602 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_56_56;
#line 602 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_57_57;
#line 602 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_59_59;
#line 602 "trace_gen.m"
    MR_String ll_backend__trace_gen__STATE_VARIABLE_CodeStr_61_61;
#line 602 "trace_gen.m"
    MR_String ll_backend__trace_gen__STATE_VARIABLE_CodeStr_66_66;
#line 602 "trace_gen.m"
    MR_String ll_backend__trace_gen__STATE_VARIABLE_CodeStr_72_72;
#line 602 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_98_98;
#line 602 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_101_101;
#line 602 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_102_102;
#line 602 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_104_104;
#line 602 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_105_105;
#line 602 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_175_175;
#line 602 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_176_176;
#line 604 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_177_177;
#line 604 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_178_178;

#line 603 "trace_gen.m"
    {
#line 603 "trace_gen.m"
      ll_backend__trace_gen__CodeModel_7 = ll_backend__code_info__get_proc_model_1_f_0(ll_backend__trace_gen__CI_4);
    }
#line 604 "trace_gen.m"
    ll_backend__trace_gen__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 0)));
#line 604 "trace_gen.m"
    ll_backend__trace_gen__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 1)));
#line 604 "trace_gen.m"
    ll_backend__trace_gen__MaybeFromFullSlot_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 2)));
#line 604 "trace_gen.m"
    ll_backend__trace_gen__MaybeIoSeqSlot_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 3)));
#line 604 "trace_gen.m"
    ll_backend__trace_gen__MaybeTrailLvals_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 4)));
#line 604 "trace_gen.m"
    ll_backend__trace_gen__MaybeMaxfrLval_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 5)));
#line 604 "trace_gen.m"
    ll_backend__trace_gen__MaybeCallTableLval_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 6)));
#line 604 "trace_gen.m"
    ll_backend__trace_gen__MaybeTailRecInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 7)));
#line 604 "trace_gen.m"
    ll_backend__trace_gen__MaybeRedoLabel_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 8)));
#line 611 "trace_gen.m"
    {
#line 611 "trace_gen.m"
      ll_backend__trace_gen__event_num_slot_2_p_0(ll_backend__trace_gen__CodeModel_7, &ll_backend__trace_gen__EventNumLval_15);
    }
#line 612 "trace_gen.m"
    {
#line 612 "trace_gen.m"
      ll_backend__trace_gen__call_num_slot_2_p_0(ll_backend__trace_gen__CodeModel_7, &ll_backend__trace_gen__CallNumLval_16);
    }
#line 613 "trace_gen.m"
    {
#line 613 "trace_gen.m"
      ll_backend__trace_gen__call_depth_slot_2_p_0(ll_backend__trace_gen__CodeModel_7, &ll_backend__trace_gen__CallDepthLval_17);
    }
#line 614 "trace_gen.m"
    {
#line 614 "trace_gen.m"
      ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__EventNumLval_15, &ll_backend__trace_gen__EventNumStr_18);
    }
#line 615 "trace_gen.m"
    {
#line 615 "trace_gen.m"
      ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallNumLval_16, &ll_backend__trace_gen__CallNumStr_19);
    }
#line 616 "trace_gen.m"
    {
#line 616 "trace_gen.m"
      ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallDepthLval_17, &ll_backend__trace_gen__CallDepthStr_20);
    }
#line 620 "trace_gen.m"
    {
#line 620 "trace_gen.m"
      ll_backend__trace_gen__V_59_59 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallDepthStr_20, (MR_String) ");\n");
    }
#line 620 "trace_gen.m"
    {
#line 620 "trace_gen.m"
      ll_backend__trace_gen__V_57_57 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__trace_gen__V_59_59);
    }
#line 620 "trace_gen.m"
    {
#line 620 "trace_gen.m"
      ll_backend__trace_gen__V_56_56 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallNumStr_19, ll_backend__trace_gen__V_57_57);
    }
#line 619 "trace_gen.m"
    {
#line 619 "trace_gen.m"
      ll_backend__trace_gen__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__trace_gen__V_56_56);
    }
#line 619 "trace_gen.m"
    {
#line 619 "trace_gen.m"
      ll_backend__trace_gen__V_53_53 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__EventNumStr_18, ll_backend__trace_gen__V_54_54);
    }
#line 619 "trace_gen.m"
    {
#line 619 "trace_gen.m"
      ll_backend__trace_gen__STATE_VARIABLE_CodeStr_51_51 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_trace_fill_std_slots(", ll_backend__trace_gen__V_53_53);
    }
#line 630 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeRedoLabel_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 631 "trace_gen.m"
      {
#line 632 "trace_gen.m"
        ll_backend__trace_gen__MaybeLayoutLabel_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 633 "trace_gen.m"
        ll_backend__trace_gen__MaybeHashDefLabel_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 631 "trace_gen.m"
        ll_backend__trace_gen__STATE_VARIABLE_CodeStr_61_61 = ll_backend__trace_gen__STATE_VARIABLE_CodeStr_51_51;
#line 631 "trace_gen.m"
      }
#line 630 "trace_gen.m"
    else
#line 623 "trace_gen.m"
      {
#line 623 "trace_gen.m"
        MR_Word ll_backend__trace_gen__RedoLayoutLval_23;
#line 623 "trace_gen.m"
        MR_String ll_backend__trace_gen__RedoLayoutStr_24;
#line 623 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_62_62;
#line 623 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_64_64;

#line 624 "trace_gen.m"
        {
#line 624 "trace_gen.m"
          ll_backend__trace_gen__redo_layout_slot_2_p_0(ll_backend__trace_gen__CodeModel_7, &ll_backend__trace_gen__RedoLayoutLval_23);
        }
#line 625 "trace_gen.m"
        {
#line 625 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__RedoLayoutLval_23, &ll_backend__trace_gen__RedoLayoutStr_24);
        }
#line 626 "trace_gen.m"
        {
#line 626 "trace_gen.m"
          ll_backend__trace_gen__V_64_64 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__RedoLayoutStr_24, (MR_String) " = (MR_Word) (const MR_Word *) MR_HASH_DEF_LABEL_LAYOUT;\n");
        }
#line 626 "trace_gen.m"
        {
#line 626 "trace_gen.m"
          ll_backend__trace_gen__V_62_62 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__trace_gen__V_64_64);
        }
#line 626 "trace_gen.m"
        {
#line 626 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_CodeStr_61_61 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__STATE_VARIABLE_CodeStr_51_51, ll_backend__trace_gen__V_62_62);
        }
#line 628 "trace_gen.m"
        ll_backend__trace_gen__MaybeLayoutLabel_25 = ll_backend__trace_gen__MaybeRedoLabel_14;
#line 629 "trace_gen.m"
        ll_backend__trace_gen__MaybeHashDefLabel_26 = ll_backend__trace_gen__MaybeRedoLabel_14;
#line 623 "trace_gen.m"
      }
#line 642 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeIoSeqSlot_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 643 "trace_gen.m"
      ll_backend__trace_gen__STATE_VARIABLE_CodeStr_66_66 = ll_backend__trace_gen__STATE_VARIABLE_CodeStr_61_61;
#line 642 "trace_gen.m"
    else
#line 638 "trace_gen.m"
      {
#line 638 "trace_gen.m"
        MR_Word ll_backend__trace_gen__IoSeqLval_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeIoSeqSlot_9, (MR_Integer) 0)));
#line 638 "trace_gen.m"
        MR_String ll_backend__trace_gen__IoSeqStr_28;
#line 638 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_67_67;
#line 638 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_69_69;

#line 639 "trace_gen.m"
        {
#line 639 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__IoSeqLval_27, &ll_backend__trace_gen__IoSeqStr_28);
        }
#line 641 "trace_gen.m"
        {
#line 641 "trace_gen.m"
          ll_backend__trace_gen__V_69_69 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__IoSeqStr_28, (MR_String) " = MR_io_tabling_counter;\n");
        }
#line 641 "trace_gen.m"
        {
#line 641 "trace_gen.m"
          ll_backend__trace_gen__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__trace_gen__V_69_69);
        }
#line 640 "trace_gen.m"
        {
#line 640 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_CodeStr_66_66 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__STATE_VARIABLE_CodeStr_61_61, ll_backend__trace_gen__V_67_67);
        }
#line 638 "trace_gen.m"
      }
#line 657 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeTrailLvals_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 658 "trace_gen.m"
      ll_backend__trace_gen__STATE_VARIABLE_CodeStr_72_72 = ll_backend__trace_gen__STATE_VARIABLE_CodeStr_66_66;
#line 657 "trace_gen.m"
    else
#line 651 "trace_gen.m"
      {
#line 651 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TrailLval_29;
#line 651 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TicketLval_30;
#line 651 "trace_gen.m"
        MR_String ll_backend__trace_gen__TrailLvalStr_31;
#line 651 "trace_gen.m"
        MR_String ll_backend__trace_gen__TicketLvalStr_32;
#line 651 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTrailLvals_10, (MR_Integer) 0)));
#line 651 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_73_73;
#line 651 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_75_75;
#line 651 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_76_76;
#line 651 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_78_78;
#line 651 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_80_80;

#line 651 "trace_gen.m"
        ll_backend__trace_gen__TrailLval_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_71_71, (MR_Integer) 0)));
#line 651 "trace_gen.m"
        ll_backend__trace_gen__TicketLval_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_71_71, (MR_Integer) 1)));
#line 652 "trace_gen.m"
        {
#line 652 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__TrailLval_29, &ll_backend__trace_gen__TrailLvalStr_31);
        }
#line 653 "trace_gen.m"
        {
#line 653 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__TicketLval_30, &ll_backend__trace_gen__TicketLvalStr_32);
        }
#line 656 "trace_gen.m"
        {
#line 656 "trace_gen.m"
          ll_backend__trace_gen__V_80_80 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TrailLvalStr_31, (MR_String) ");\n");
        }
#line 656 "trace_gen.m"
        {
#line 656 "trace_gen.m"
          ll_backend__trace_gen__V_78_78 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_store_ticket(", ll_backend__trace_gen__V_80_80);
        }
#line 655 "trace_gen.m"
        {
#line 655 "trace_gen.m"
          ll_backend__trace_gen__V_76_76 = mercury__string__f_43_43_2_f_0((MR_String) ");\n", ll_backend__trace_gen__V_78_78);
        }
#line 655 "trace_gen.m"
        {
#line 655 "trace_gen.m"
          ll_backend__trace_gen__V_75_75 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TicketLvalStr_32, ll_backend__trace_gen__V_76_76);
        }
#line 655 "trace_gen.m"
        {
#line 655 "trace_gen.m"
          ll_backend__trace_gen__V_73_73 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_mark_ticket_stack(", ll_backend__trace_gen__V_75_75);
        }
#line 654 "trace_gen.m"
        {
#line 654 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_CodeStr_72_72 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__STATE_VARIABLE_CodeStr_66_66, ll_backend__trace_gen__V_73_73);
        }
#line 651 "trace_gen.m"
      }
#line 671 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeFromFullSlot_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 672 "trace_gen.m"
      ll_backend__trace_gen__TraceStmt1_35 = ll_backend__trace_gen__STATE_VARIABLE_CodeStr_72_72;
#line 671 "trace_gen.m"
    else
#line 662 "trace_gen.m"
      {
#line 662 "trace_gen.m"
        MR_Word ll_backend__trace_gen__CallFromFullSlot_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeFromFullSlot_8, (MR_Integer) 0)));
#line 662 "trace_gen.m"
        MR_String ll_backend__trace_gen__CallFromFullSlotStr_34;
#line 662 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_84_84;
#line 662 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_85_85;
#line 662 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_87_87;
#line 662 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_89_89;
#line 662 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_90_90;
#line 662 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_92_92;
#line 662 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_94_94;

#line 663 "trace_gen.m"
        {
#line 663 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallFromFullSlot_33, &ll_backend__trace_gen__CallFromFullSlotStr_34);
        }
#line 669 "trace_gen.m"
        {
#line 669 "trace_gen.m"
          ll_backend__trace_gen__V_94_94 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallDepthStr_20, (MR_String) " = MR_trace_call_depth;\n\t\t}\n");
        }
#line 669 "trace_gen.m"
        {
#line 669 "trace_gen.m"
          ll_backend__trace_gen__V_92_92 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\t", ll_backend__trace_gen__V_94_94);
        }
#line 668 "trace_gen.m"
        {
#line 668 "trace_gen.m"
          ll_backend__trace_gen__V_90_90 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t} else {\n", ll_backend__trace_gen__V_92_92);
        }
#line 667 "trace_gen.m"
        {
#line 667 "trace_gen.m"
          ll_backend__trace_gen__V_89_89 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__STATE_VARIABLE_CodeStr_72_72, ll_backend__trace_gen__V_90_90);
        }
#line 666 "trace_gen.m"
        {
#line 666 "trace_gen.m"
          ll_backend__trace_gen__V_87_87 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tif (MR_trace_from_full) {\n", ll_backend__trace_gen__V_89_89);
        }
#line 665 "trace_gen.m"
        {
#line 665 "trace_gen.m"
          ll_backend__trace_gen__V_85_85 = mercury__string__f_43_43_2_f_0((MR_String) " = MR_trace_from_full;\n", ll_backend__trace_gen__V_87_87);
        }
#line 665 "trace_gen.m"
        {
#line 665 "trace_gen.m"
          ll_backend__trace_gen__V_84_84 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallFromFullSlotStr_34, ll_backend__trace_gen__V_85_85);
        }
#line 665 "trace_gen.m"
        {
#line 665 "trace_gen.m"
          ll_backend__trace_gen__TraceStmt1_35 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__trace_gen__V_84_84);
        }
#line 662 "trace_gen.m"
      }
#line 7686 "ll_backend.trace_gen.c"
    ll_backend__trace_gen__TypeCtorInfo_233_233 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 677 "trace_gen.m"
    {
#line 677 "trace_gen.m"
      ll_backend__trace_gen__V_102_102 = mercury__set__init_0_f_0(ll_backend__trace_gen__TypeCtorInfo_233_233);
    }
#line 677 "trace_gen.m"
    {
#line 677 "trace_gen.m"
      ll_backend__trace_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 677 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_101_101, 0) = ((MR_Box) (ll_backend__trace_gen__V_102_102));
#line 677 "trace_gen.m"
    }
#line 676 "trace_gen.m"
    {
#line 676 "trace_gen.m"
      ll_backend__trace_gen__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 676 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 676 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 1) = ((MR_Box) ((MR_Integer) 1));
#line 676 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 2) = ((MR_Box) ((MR_Integer) 1));
#line 676 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 3) = ((MR_Box) (ll_backend__trace_gen__V_101_101));
#line 676 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 4) = ((MR_Box) (ll_backend__trace_gen__TraceStmt1_35));
#line 676 "trace_gen.m"
    }
#line 677 "trace_gen.m"
    {
#line 677 "trace_gen.m"
      ll_backend__trace_gen__TraceComponents1_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 677 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents1_36, 0) = ((MR_Box) (ll_backend__trace_gen__V_98_98));
#line 677 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents1_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 677 "trace_gen.m"
    }
#line 7727 "ll_backend.trace_gen.c"
    ll_backend__trace_gen__TypeCtorInfo_234_234 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 679 "trace_gen.m"
    {
#line 679 "trace_gen.m"
      ll_backend__trace_gen__V_105_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 679 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 679 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 679 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 2) = ((MR_Box) (ll_backend__trace_gen__TraceComponents1_36));
#line 679 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 3) = ((MR_Box) ((MR_Integer) 1));
#line 679 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 679 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 679 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 6) = ((MR_Box) (ll_backend__trace_gen__MaybeLayoutLabel_25));
#line 679 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 679 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 8) = ((MR_Box) (ll_backend__trace_gen__MaybeHashDefLabel_26));
#line 679 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 9) = ((MR_Box) ((MR_Integer) 1));
#line 679 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 10) = ((MR_Box) ((MR_Integer) 1));
#line 679 "trace_gen.m"
    }
#line 679 "trace_gen.m"
    {
#line 679 "trace_gen.m"
      ll_backend__trace_gen__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 679 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_104_104, 0) = ((MR_Box) (ll_backend__trace_gen__V_105_105));
#line 679 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_104_104, 1) = ((MR_Box) ((MR_String) ""));
#line 679 "trace_gen.m"
    }
#line 678 "trace_gen.m"
    {
#line 678 "trace_gen.m"
      ll_backend__trace_gen__TraceCode1_37 = mercury__cord__singleton_1_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ((MR_Box) (ll_backend__trace_gen__V_104_104)));
    }
#line 689 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeMaxfrLval_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 691 "trace_gen.m"
      {
#line 691 "trace_gen.m"
        ll_backend__trace_gen__TraceCode2_39 = mercury__cord__empty_0_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234);
      }
#line 689 "trace_gen.m"
    else
#line 685 "trace_gen.m"
      {
#line 685 "trace_gen.m"
        MR_Word ll_backend__trace_gen__MaxfrLval_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeMaxfrLval_11, (MR_Integer) 0)));
#line 685 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_114_114;
#line 685 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_115_115;

#line 687 "trace_gen.m"
        {
#line 687 "trace_gen.m"
          ll_backend__trace_gen__V_115_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 687 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_115_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 687 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_115_115, 1) = ((MR_Box) (ll_backend__trace_gen__MaxfrLval_38));
#line 687 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_115_115, 2) = ((MR_Box) (&ll_backend__trace_gen_scalar_common_3[3]));
#line 687 "trace_gen.m"
        }
#line 687 "trace_gen.m"
        {
#line 687 "trace_gen.m"
          ll_backend__trace_gen__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 687 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_114_114, 0) = ((MR_Box) (ll_backend__trace_gen__V_115_115));
#line 687 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_114_114, 1) = ((MR_Box) ((MR_String) "save initial maxfr"));
#line 687 "trace_gen.m"
        }
#line 686 "trace_gen.m"
        {
#line 686 "trace_gen.m"
          ll_backend__trace_gen__TraceCode2_39 = mercury__cord__singleton_1_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ((MR_Box) (ll_backend__trace_gen__V_114_114)));
        }
#line 685 "trace_gen.m"
      }
#line 714 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeTailRecInfo_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 716 "trace_gen.m"
      {
#line 716 "trace_gen.m"
        ll_backend__trace_gen__TraceCode3_45 = mercury__cord__empty_0_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234);
      }
#line 714 "trace_gen.m"
    else
#line 695 "trace_gen.m"
      {
#line 695 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TailRecLval_40;
#line 695 "trace_gen.m"
        MR_String ll_backend__trace_gen__TailRecLvalStr_42;
#line 695 "trace_gen.m"
        MR_String ll_backend__trace_gen__TraceStmt3_43;
#line 695 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TraceComponents3_44;
#line 695 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTailRecInfo_13, (MR_Integer) 0)));
#line 695 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_121_121;
#line 695 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_123_123;
#line 695 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_124_124;
#line 695 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_126_126;
#line 695 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_128_128;
#line 695 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_130_130;
#line 695 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_132_132;
#line 695 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_136_136;
#line 695 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_139_139;
#line 695 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_140_140;
#line 695 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_142_142;
#line 695 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_143_143;
#line 695 "trace_gen.m"
        MR_Word ll_backend__trace_gen___TailRecLabel_41;

#line 695 "trace_gen.m"
        ll_backend__trace_gen__TailRecLval_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_119_119, (MR_Integer) 0)));
#line 695 "trace_gen.m"
        ll_backend__trace_gen___TailRecLabel_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_119_119, (MR_Integer) 1)));
#line 696 "trace_gen.m"
        {
#line 696 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__TailRecLval_40, &ll_backend__trace_gen__TailRecLvalStr_42);
        }
#line 703 "trace_gen.m"
        {
#line 703 "trace_gen.m"
          ll_backend__trace_gen__V_132_132 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TailRecLvalStr_42, (MR_String) " = 0;\n\t\t}");
        }
#line 703 "trace_gen.m"
        {
#line 703 "trace_gen.m"
          ll_backend__trace_gen__V_130_130 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\t", ll_backend__trace_gen__V_132_132);
        }
#line 702 "trace_gen.m"
        {
#line 702 "trace_gen.m"
          ll_backend__trace_gen__V_128_128 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t} else {", ll_backend__trace_gen__V_130_130);
        }
#line 701 "trace_gen.m"
        {
#line 701 "trace_gen.m"
          ll_backend__trace_gen__V_126_126 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\tMR_trace_tailrec_have_reused_frames = MR_FALSE;\n", ll_backend__trace_gen__V_128_128);
        }
#line 700 "trace_gen.m"
        {
#line 700 "trace_gen.m"
          ll_backend__trace_gen__V_124_124 = mercury__string__f_43_43_2_f_0((MR_String) " = MR_trace_tailrec_num_reused_frames;\n", ll_backend__trace_gen__V_126_126);
        }
#line 699 "trace_gen.m"
        {
#line 699 "trace_gen.m"
          ll_backend__trace_gen__V_123_123 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TailRecLvalStr_42, ll_backend__trace_gen__V_124_124);
        }
#line 699 "trace_gen.m"
        {
#line 699 "trace_gen.m"
          ll_backend__trace_gen__V_121_121 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\t", ll_backend__trace_gen__V_123_123);
        }
#line 698 "trace_gen.m"
        {
#line 698 "trace_gen.m"
          ll_backend__trace_gen__TraceStmt3_43 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tif (MR_trace_tailrec_have_reused_frames) {\n", ll_backend__trace_gen__V_121_121);
        }
#line 706 "trace_gen.m"
        {
#line 706 "trace_gen.m"
          ll_backend__trace_gen__V_140_140 = mercury__set__init_0_f_0(ll_backend__trace_gen__TypeCtorInfo_233_233);
        }
#line 706 "trace_gen.m"
        {
#line 706 "trace_gen.m"
          ll_backend__trace_gen__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 706 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_139_139, 0) = ((MR_Box) (ll_backend__trace_gen__V_140_140));
#line 706 "trace_gen.m"
        }
#line 705 "trace_gen.m"
        {
#line 705 "trace_gen.m"
          ll_backend__trace_gen__V_136_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 705 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_136_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 705 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_136_136, 1) = ((MR_Box) ((MR_Integer) 1));
#line 705 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_136_136, 2) = ((MR_Box) ((MR_Integer) 1));
#line 705 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_136_136, 3) = ((MR_Box) (ll_backend__trace_gen__V_139_139));
#line 705 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_136_136, 4) = ((MR_Box) (ll_backend__trace_gen__TraceStmt3_43));
#line 705 "trace_gen.m"
        }
#line 707 "trace_gen.m"
        {
#line 707 "trace_gen.m"
          ll_backend__trace_gen__TraceComponents3_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents3_44, 0) = ((MR_Box) (ll_backend__trace_gen__V_136_136));
#line 707 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents3_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 707 "trace_gen.m"
        }
#line 709 "trace_gen.m"
        {
#line 709 "trace_gen.m"
          ll_backend__trace_gen__V_143_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 709 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 709 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 709 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 2) = ((MR_Box) (ll_backend__trace_gen__TraceComponents3_44));
#line 709 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 3) = ((MR_Box) ((MR_Integer) 1));
#line 709 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 709 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 709 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 709 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 709 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 709 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 9) = ((MR_Box) ((MR_Integer) 1));
#line 709 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 10) = ((MR_Box) ((MR_Integer) 1));
#line 709 "trace_gen.m"
        }
#line 709 "trace_gen.m"
        {
#line 709 "trace_gen.m"
          ll_backend__trace_gen__V_142_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 709 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_142_142, 0) = ((MR_Box) (ll_backend__trace_gen__V_143_143));
#line 709 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_142_142, 1) = ((MR_Box) ((MR_String) "initialize tail recursion count"));
#line 709 "trace_gen.m"
        }
#line 708 "trace_gen.m"
        {
#line 708 "trace_gen.m"
          ll_backend__trace_gen__TraceCode3_45 = mercury__cord__singleton_1_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ((MR_Box) (ll_backend__trace_gen__V_142_142)));
        }
#line 695 "trace_gen.m"
      }
#line 731 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeCallTableLval_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 733 "trace_gen.m"
      {
#line 733 "trace_gen.m"
        ll_backend__trace_gen__TraceCode4_50 = mercury__cord__empty_0_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234);
      }
#line 731 "trace_gen.m"
    else
#line 720 "trace_gen.m"
      {
#line 720 "trace_gen.m"
        MR_Word ll_backend__trace_gen__CallTableLval_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeCallTableLval_12, (MR_Integer) 0)));
#line 720 "trace_gen.m"
        MR_String ll_backend__trace_gen__CallTableLvalStr_47;
#line 720 "trace_gen.m"
        MR_String ll_backend__trace_gen__TraceStmt4_48;
#line 720 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TraceComponents4_49;
#line 720 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_155_155;
#line 720 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_157_157;
#line 720 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_160_160;
#line 720 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_161_161;
#line 720 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_163_163;
#line 720 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_164_164;

#line 721 "trace_gen.m"
        {
#line 721 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallTableLval_46, &ll_backend__trace_gen__CallTableLvalStr_47);
        }
#line 722 "trace_gen.m"
        {
#line 722 "trace_gen.m"
          ll_backend__trace_gen__V_155_155 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallTableLvalStr_47, (MR_String) " = 0;\n");
        }
#line 722 "trace_gen.m"
        {
#line 722 "trace_gen.m"
          ll_backend__trace_gen__TraceStmt4_48 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__trace_gen__V_155_155);
        }
#line 724 "trace_gen.m"
        {
#line 724 "trace_gen.m"
          ll_backend__trace_gen__V_161_161 = mercury__set__init_0_f_0(ll_backend__trace_gen__TypeCtorInfo_233_233);
        }
#line 724 "trace_gen.m"
        {
#line 724 "trace_gen.m"
          ll_backend__trace_gen__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 724 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_160_160, 0) = ((MR_Box) (ll_backend__trace_gen__V_161_161));
#line 724 "trace_gen.m"
        }
#line 723 "trace_gen.m"
        {
#line 723 "trace_gen.m"
          ll_backend__trace_gen__V_157_157 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 723 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_157_157, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 723 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_157_157, 1) = ((MR_Box) ((MR_Integer) 1));
#line 723 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_157_157, 2) = ((MR_Box) ((MR_Integer) 1));
#line 723 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_157_157, 3) = ((MR_Box) (ll_backend__trace_gen__V_160_160));
#line 723 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_157_157, 4) = ((MR_Box) (ll_backend__trace_gen__TraceStmt4_48));
#line 723 "trace_gen.m"
        }
#line 725 "trace_gen.m"
        {
#line 725 "trace_gen.m"
          ll_backend__trace_gen__TraceComponents4_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents4_49, 0) = ((MR_Box) (ll_backend__trace_gen__V_157_157));
#line 725 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents4_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 725 "trace_gen.m"
        }
#line 727 "trace_gen.m"
        {
#line 727 "trace_gen.m"
          ll_backend__trace_gen__V_164_164 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 727 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 727 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 727 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 2) = ((MR_Box) (ll_backend__trace_gen__TraceComponents4_49));
#line 727 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 3) = ((MR_Box) ((MR_Integer) 1));
#line 727 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 727 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 727 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 727 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 727 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 727 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 9) = ((MR_Box) ((MR_Integer) 1));
#line 727 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 10) = ((MR_Box) ((MR_Integer) 1));
#line 727 "trace_gen.m"
        }
#line 727 "trace_gen.m"
        {
#line 727 "trace_gen.m"
          ll_backend__trace_gen__V_163_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 727 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_163_163, 0) = ((MR_Box) (ll_backend__trace_gen__V_164_164));
#line 727 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_163_163, 1) = ((MR_Box) ((MR_String) ""));
#line 727 "trace_gen.m"
        }
#line 726 "trace_gen.m"
        {
#line 726 "trace_gen.m"
          ll_backend__trace_gen__TraceCode4_50 = mercury__cord__singleton_1_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ((MR_Box) (ll_backend__trace_gen__V_163_163)));
        }
#line 720 "trace_gen.m"
      }
#line 735 "trace_gen.m"
    {
#line 735 "trace_gen.m"
      ll_backend__trace_gen__V_176_176 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ll_backend__trace_gen__TraceCode3_45, ll_backend__trace_gen__TraceCode4_50);
    }
#line 735 "trace_gen.m"
    {
#line 735 "trace_gen.m"
      ll_backend__trace_gen__V_175_175 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ll_backend__trace_gen__TraceCode2_39, ll_backend__trace_gen__V_176_176);
    }
#line 735 "trace_gen.m"
    {
#line 735 "trace_gen.m"
      *ll_backend__trace_gen__TraceCode_6 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ll_backend__trace_gen__TraceCode1_37, ll_backend__trace_gen__V_175_175);
    }
#line 602 "trace_gen.m"
  }
#line 169 "trace_gen.m"
}

#line 163 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__trace_setup_9_p_0(
#line 163 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ModuleInfo_10,
#line 163 "trace_gen.m"
  MR_Word ll_backend__trace_gen__PredInfo_11,
#line 163 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ProcInfo_12,
#line 163 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Globals_13,
#line 163 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeTailRecLabel_14,
#line 163 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__TraceSlotInfo_15,
#line 163 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__TraceInfo_16,
#line 163 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_58,
#line 163 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_59)
#line 163 "trace_gen.m"
{
#line 489 "trace_gen.m"
  {
#line 489 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 489 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CodeModel_18;
#line 489 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceLevel_19;
#line 489 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceSuppress_20;
#line 489 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceTableIo_21;
#line 489 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceRedo_22;
#line 489 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeRedoLayoutLabel_25;
#line 489 "trace_gen.m"
    MR_Word ll_backend__trace_gen__HasFromFullSlot_26;
#line 489 "trace_gen.m"
    MR_Word ll_backend__trace_gen__StackId_27;
#line 489 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeFromFullSlot_29;
#line 489 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeFromFullSlotLval_31;
#line 489 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeIoSeqSlot_33;
#line 489 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeIoSeqLval_35;
#line 489 "trace_gen.m"
    MR_Word ll_backend__trace_gen__UseTrail_36;
#line 489 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTrailSlot_39;
#line 489 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTrailLvals_42;
#line 489 "trace_gen.m"
    MR_Word ll_backend__trace_gen__NeedsMaxfrSlot_43;
#line 489 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeMaxfrSlot_45;
#line 489 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeMaxfrLval_47;
#line 489 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTailRecSlot_50;
#line 489 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTailRecInfo_52;
#line 489 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeCallTableSlot_55;
#line 489 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeCallTableLval_57;
#line 489 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__STATE_VARIABLE_NextSlot_63_63;
#line 489 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__STATE_VARIABLE_NextSlot_65_65;
#line 489 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__STATE_VARIABLE_NextSlot_67_67;
#line 489 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__STATE_VARIABLE_NextSlot_72_72;
#line 489 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__STATE_VARIABLE_NextSlot_74_74;
#line 489 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__STATE_VARIABLE_NextSlot_77_77;
#line 585 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_80_80;
#line 585 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_85_85;

#line 490 "trace_gen.m"
    {
#line 490 "trace_gen.m"
      ll_backend__trace_gen__CodeModel_18 = ll_backend__code_info__get_proc_model_1_f_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_58);
    }
#line 491 "trace_gen.m"
    {
#line 491 "trace_gen.m"
      libs__globals__get_trace_level_2_p_0(ll_backend__trace_gen__Globals_13, &ll_backend__trace_gen__TraceLevel_19);
    }
#line 492 "trace_gen.m"
    {
#line 492 "trace_gen.m"
      libs__globals__get_trace_suppress_2_p_0(ll_backend__trace_gen__Globals_13, &ll_backend__trace_gen__TraceSuppress_20);
    }
#line 493 "trace_gen.m"
    {
#line 493 "trace_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__trace_gen__Globals_13, (MR_Integer) 121, &ll_backend__trace_gen__TraceTableIo_21);
    }
#line 494 "trace_gen.m"
    {
#line 494 "trace_gen.m"
      ll_backend__trace_gen__TraceRedo_22 = libs__trace_params__eff_trace_needs_port_6_f_0(ll_backend__trace_gen__ModuleInfo_10, ll_backend__trace_gen__PredInfo_11, ll_backend__trace_gen__ProcInfo_12, ll_backend__trace_gen__TraceLevel_19, ll_backend__trace_gen__TraceSuppress_20, (MR_Integer) 2);
    }
#line 499 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__TraceRedo_22 == (MR_Integer) 1);
#line 499 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 500 "trace_gen.m"
      ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CodeModel_18 == (MR_Integer) 2);
#line 507 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 502 "trace_gen.m"
      {
#line 502 "trace_gen.m"
        MR_Word ll_backend__trace_gen__RedoLayoutLabel_24;

#line 502 "trace_gen.m"
        {
#line 502 "trace_gen.m"
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__trace_gen__RedoLayoutLabel_24, ll_backend__trace_gen__STATE_VARIABLE_CI_0_58, ll_backend__trace_gen__STATE_VARIABLE_CI_59);
        }
#line 503 "trace_gen.m"
        {
#line 503 "trace_gen.m"
          ll_backend__trace_gen__MaybeRedoLayoutLabel_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 503 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeRedoLayoutLabel_25, 0) = ((MR_Box) (ll_backend__trace_gen__RedoLayoutLabel_24));
#line 503 "trace_gen.m"
        }
#line 506 "trace_gen.m"
        ll_backend__trace_gen__STATE_VARIABLE_NextSlot_63_63 = (MR_Integer) 5;
#line 502 "trace_gen.m"
      }
#line 507 "trace_gen.m"
    else
#line 508 "trace_gen.m"
      {
#line 508 "trace_gen.m"
        ll_backend__trace_gen__MaybeRedoLayoutLabel_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 510 "trace_gen.m"
        ll_backend__trace_gen__STATE_VARIABLE_NextSlot_63_63 = (MR_Integer) 4;
#line 508 "trace_gen.m"
        *ll_backend__trace_gen__STATE_VARIABLE_CI_59 = ll_backend__trace_gen__STATE_VARIABLE_CI_0_58;
#line 508 "trace_gen.m"
      }
#line 513 "trace_gen.m"
    {
#line 513 "trace_gen.m"
      ll_backend__trace_gen__HasFromFullSlot_26 = libs__trace_params__eff_trace_level_needs_from_full_slot_4_f_0(ll_backend__trace_gen__ModuleInfo_10, ll_backend__trace_gen__PredInfo_11, ll_backend__trace_gen__ProcInfo_12, ll_backend__trace_gen__TraceLevel_19);
    }
#line 515 "trace_gen.m"
    {
#line 515 "trace_gen.m"
      ll_backend__trace_gen__StackId_27 = ll_backend__llds__code_model_to_main_stack_1_f_0(ll_backend__trace_gen__CodeModel_18);
    }
#line 523 "trace_gen.m"
    if ((ll_backend__trace_gen__HasFromFullSlot_26 == (MR_Integer) 0))
#line 524 "trace_gen.m"
      {
#line 525 "trace_gen.m"
        ll_backend__trace_gen__MaybeFromFullSlot_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 526 "trace_gen.m"
        ll_backend__trace_gen__MaybeFromFullSlotLval_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 524 "trace_gen.m"
        ll_backend__trace_gen__STATE_VARIABLE_NextSlot_65_65 = ll_backend__trace_gen__STATE_VARIABLE_NextSlot_63_63;
#line 524 "trace_gen.m"
      }
#line 523 "trace_gen.m"
    else
#line 517 "trace_gen.m"
      {
#line 517 "trace_gen.m"
        MR_Word ll_backend__trace_gen__FromFullSlotLval_30;

#line 519 "trace_gen.m"
        {
#line 519 "trace_gen.m"
          ll_backend__trace_gen__MaybeFromFullSlot_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 519 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeFromFullSlot_29, 0) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_63_63));
#line 519 "trace_gen.m"
        }
#line 520 "trace_gen.m"
        {
#line 520 "trace_gen.m"
          ll_backend__trace_gen__FromFullSlotLval_30 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__STATE_VARIABLE_NextSlot_63_63);
        }
#line 521 "trace_gen.m"
        {
#line 521 "trace_gen.m"
          ll_backend__trace_gen__MaybeFromFullSlotLval_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 521 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeFromFullSlotLval_31, 0) = ((MR_Box) (ll_backend__trace_gen__FromFullSlotLval_30));
#line 521 "trace_gen.m"
        }
#line 522 "trace_gen.m"
        ll_backend__trace_gen__STATE_VARIABLE_NextSlot_65_65 = (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_63_63 + (MR_Integer) 1);
#line 517 "trace_gen.m"
      }
#line 536 "trace_gen.m"
    if ((ll_backend__trace_gen__TraceTableIo_21 == (MR_Integer) 0))
#line 537 "trace_gen.m"
      {
#line 538 "trace_gen.m"
        ll_backend__trace_gen__MaybeIoSeqSlot_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 539 "trace_gen.m"
        ll_backend__trace_gen__MaybeIoSeqLval_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 537 "trace_gen.m"
        ll_backend__trace_gen__STATE_VARIABLE_NextSlot_67_67 = ll_backend__trace_gen__STATE_VARIABLE_NextSlot_65_65;
#line 537 "trace_gen.m"
      }
#line 536 "trace_gen.m"
    else
#line 530 "trace_gen.m"
      {
#line 530 "trace_gen.m"
        MR_Word ll_backend__trace_gen__IoSeqLval_34;

#line 532 "trace_gen.m"
        {
#line 532 "trace_gen.m"
          ll_backend__trace_gen__MaybeIoSeqSlot_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 532 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeIoSeqSlot_33, 0) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_65_65));
#line 532 "trace_gen.m"
        }
#line 533 "trace_gen.m"
        {
#line 533 "trace_gen.m"
          ll_backend__trace_gen__IoSeqLval_34 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__STATE_VARIABLE_NextSlot_65_65);
        }
#line 534 "trace_gen.m"
        {
#line 534 "trace_gen.m"
          ll_backend__trace_gen__MaybeIoSeqLval_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 534 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeIoSeqLval_35, 0) = ((MR_Box) (ll_backend__trace_gen__IoSeqLval_34));
#line 534 "trace_gen.m"
        }
#line 535 "trace_gen.m"
        ll_backend__trace_gen__STATE_VARIABLE_NextSlot_67_67 = (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_65_65 + (MR_Integer) 1);
#line 530 "trace_gen.m"
      }
#line 542 "trace_gen.m"
    {
#line 542 "trace_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__trace_gen__Globals_13, (MR_Integer) 216, &ll_backend__trace_gen__UseTrail_36);
    }
#line 552 "trace_gen.m"
    if ((ll_backend__trace_gen__UseTrail_36 == (MR_Integer) 0))
#line 553 "trace_gen.m"
      {
#line 554 "trace_gen.m"
        ll_backend__trace_gen__MaybeTrailSlot_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 555 "trace_gen.m"
        ll_backend__trace_gen__MaybeTrailLvals_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 553 "trace_gen.m"
        ll_backend__trace_gen__STATE_VARIABLE_NextSlot_72_72 = ll_backend__trace_gen__STATE_VARIABLE_NextSlot_67_67;
#line 553 "trace_gen.m"
      }
#line 552 "trace_gen.m"
    else
#line 544 "trace_gen.m"
      {
#line 544 "trace_gen.m"
        MR_Integer ll_backend__trace_gen__TicketSlot_38 = (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_67_67 + (MR_Integer) 1);
#line 544 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TrailLval_40;
#line 544 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TicketLval_41;
#line 544 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_71_71;

#line 547 "trace_gen.m"
        {
#line 547 "trace_gen.m"
          ll_backend__trace_gen__MaybeTrailSlot_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 547 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTrailSlot_39, 0) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_67_67));
#line 547 "trace_gen.m"
        }
#line 548 "trace_gen.m"
        {
#line 548 "trace_gen.m"
          ll_backend__trace_gen__TrailLval_40 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__STATE_VARIABLE_NextSlot_67_67);
        }
#line 549 "trace_gen.m"
        {
#line 549 "trace_gen.m"
          ll_backend__trace_gen__TicketLval_41 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__TicketSlot_38);
        }
#line 550 "trace_gen.m"
        {
#line 550 "trace_gen.m"
          ll_backend__trace_gen__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 550 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_71_71, 0) = ((MR_Box) (ll_backend__trace_gen__TrailLval_40));
#line 550 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_71_71, 1) = ((MR_Box) (ll_backend__trace_gen__TicketLval_41));
#line 550 "trace_gen.m"
        }
#line 550 "trace_gen.m"
        {
#line 550 "trace_gen.m"
          ll_backend__trace_gen__MaybeTrailLvals_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 550 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTrailLvals_42, 0) = ((MR_Box) (ll_backend__trace_gen__V_71_71));
#line 550 "trace_gen.m"
        }
#line 551 "trace_gen.m"
        ll_backend__trace_gen__STATE_VARIABLE_NextSlot_72_72 = (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_67_67 + (MR_Integer) 2);
#line 544 "trace_gen.m"
      }
#line 558 "trace_gen.m"
    {
#line 558 "trace_gen.m"
      hlds__hlds_pred__proc_info_get_needs_maxfr_slot_2_p_0(ll_backend__trace_gen__ProcInfo_12, &ll_backend__trace_gen__NeedsMaxfrSlot_43);
    }
#line 566 "trace_gen.m"
    if ((ll_backend__trace_gen__NeedsMaxfrSlot_43 == (MR_Integer) 1))
#line 567 "trace_gen.m"
      {
#line 568 "trace_gen.m"
        ll_backend__trace_gen__MaybeMaxfrSlot_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 569 "trace_gen.m"
        ll_backend__trace_gen__MaybeMaxfrLval_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 567 "trace_gen.m"
        ll_backend__trace_gen__STATE_VARIABLE_NextSlot_74_74 = ll_backend__trace_gen__STATE_VARIABLE_NextSlot_72_72;
#line 567 "trace_gen.m"
      }
#line 566 "trace_gen.m"
    else
#line 560 "trace_gen.m"
      {
#line 560 "trace_gen.m"
        MR_Word ll_backend__trace_gen__MaxfrLval_46;

#line 562 "trace_gen.m"
        {
#line 562 "trace_gen.m"
          ll_backend__trace_gen__MaybeMaxfrSlot_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 562 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeMaxfrSlot_45, 0) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_72_72));
#line 562 "trace_gen.m"
        }
#line 563 "trace_gen.m"
        {
#line 563 "trace_gen.m"
          ll_backend__trace_gen__MaxfrLval_46 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__STATE_VARIABLE_NextSlot_72_72);
        }
#line 564 "trace_gen.m"
        {
#line 564 "trace_gen.m"
          ll_backend__trace_gen__MaybeMaxfrLval_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 564 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeMaxfrLval_47, 0) = ((MR_Box) (ll_backend__trace_gen__MaxfrLval_46));
#line 564 "trace_gen.m"
        }
#line 565 "trace_gen.m"
        ll_backend__trace_gen__STATE_VARIABLE_NextSlot_74_74 = (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_72_72 + (MR_Integer) 1);
#line 560 "trace_gen.m"
      }
#line 579 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeTailRecLabel_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 580 "trace_gen.m"
      {
#line 581 "trace_gen.m"
        ll_backend__trace_gen__MaybeTailRecSlot_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 582 "trace_gen.m"
        ll_backend__trace_gen__MaybeTailRecInfo_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 580 "trace_gen.m"
        ll_backend__trace_gen__STATE_VARIABLE_NextSlot_77_77 = ll_backend__trace_gen__STATE_VARIABLE_NextSlot_74_74;
#line 580 "trace_gen.m"
      }
#line 579 "trace_gen.m"
    else
#line 573 "trace_gen.m"
      {
#line 573 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TailRecLabel_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTailRecLabel_14, (MR_Integer) 0)));
#line 573 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TailRecLval_51;
#line 573 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_76_76;

#line 575 "trace_gen.m"
        {
#line 575 "trace_gen.m"
          ll_backend__trace_gen__MaybeTailRecSlot_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 575 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTailRecSlot_50, 0) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_74_74));
#line 575 "trace_gen.m"
        }
#line 576 "trace_gen.m"
        {
#line 576 "trace_gen.m"
          ll_backend__trace_gen__TailRecLval_51 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__STATE_VARIABLE_NextSlot_74_74);
        }
#line 577 "trace_gen.m"
        {
#line 577 "trace_gen.m"
          ll_backend__trace_gen__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 577 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_76_76, 0) = ((MR_Box) (ll_backend__trace_gen__TailRecLval_51));
#line 577 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_76_76, 1) = ((MR_Box) (ll_backend__trace_gen__TailRecLabel_48));
#line 577 "trace_gen.m"
        }
#line 577 "trace_gen.m"
        {
#line 577 "trace_gen.m"
          ll_backend__trace_gen__MaybeTailRecInfo_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 577 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTailRecInfo_52, 0) = ((MR_Box) (ll_backend__trace_gen__V_76_76));
#line 577 "trace_gen.m"
        }
#line 578 "trace_gen.m"
        ll_backend__trace_gen__STATE_VARIABLE_NextSlot_77_77 = (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_74_74 + (MR_Integer) 1);
#line 573 "trace_gen.m"
      }
#line 585 "trace_gen.m"
    {
#line 585 "trace_gen.m"
      hlds__hlds_pred__proc_info_get_call_table_tip_2_p_0(ll_backend__trace_gen__ProcInfo_12, &ll_backend__trace_gen__V_80_80);
    }
#line 585 "trace_gen.m"
    ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__V_80_80)) == (MR_mktag((MR_Integer) 1)));
#line 585 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 585 "trace_gen.m"
      {
#line 585 "trace_gen.m"
        ll_backend__trace_gen__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_80_80, (MR_Integer) 0)));
#line 586 "trace_gen.m"
        {
#line 586 "trace_gen.m"
          MR_Word ll_backend__trace_gen__CallTableLval_56;

#line 587 "trace_gen.m"
          {
#line 587 "trace_gen.m"
            ll_backend__trace_gen__MaybeCallTableSlot_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 587 "trace_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeCallTableSlot_55, 0) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_77_77));
#line 587 "trace_gen.m"
          }
#line 588 "trace_gen.m"
          {
#line 588 "trace_gen.m"
            ll_backend__trace_gen__CallTableLval_56 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__STATE_VARIABLE_NextSlot_77_77);
          }
#line 589 "trace_gen.m"
          {
#line 589 "trace_gen.m"
            ll_backend__trace_gen__MaybeCallTableLval_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 589 "trace_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeCallTableLval_57, 0) = ((MR_Box) (ll_backend__trace_gen__CallTableLval_56));
#line 589 "trace_gen.m"
          }
#line 586 "trace_gen.m"
        }
#line 585 "trace_gen.m"
      }
#line 585 "trace_gen.m"
    else
#line 591 "trace_gen.m"
      {
#line 591 "trace_gen.m"
        ll_backend__trace_gen__MaybeCallTableSlot_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 592 "trace_gen.m"
        ll_backend__trace_gen__MaybeCallTableLval_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 591 "trace_gen.m"
      }
#line 595 "trace_gen.m"
    {
#line 595 "trace_gen.m"
      MR_Word base;
#line 595 "trace_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 595 "trace_gen.m"
      *ll_backend__trace_gen__TraceSlotInfo_15 = base;
#line 595 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__trace_gen__MaybeFromFullSlot_29));
#line 595 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__trace_gen__MaybeIoSeqSlot_33));
#line 595 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__trace_gen__MaybeTrailSlot_39));
#line 595 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__trace_gen__MaybeMaxfrSlot_45));
#line 595 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__trace_gen__MaybeCallTableSlot_55));
#line 595 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__trace_gen__MaybeTailRecSlot_50));
#line 595 "trace_gen.m"
    }
#line 597 "trace_gen.m"
    {
#line 597 "trace_gen.m"
      MR_Word base;
#line 597 "trace_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 597 "trace_gen.m"
      *ll_backend__trace_gen__TraceInfo_16 = base;
#line 597 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__trace_gen__TraceLevel_19));
#line 597 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__trace_gen__TraceSuppress_20));
#line 597 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__trace_gen__MaybeFromFullSlotLval_31));
#line 597 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__trace_gen__MaybeIoSeqLval_35));
#line 597 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__trace_gen__MaybeTrailLvals_42));
#line 597 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__trace_gen__MaybeMaxfrLval_47));
#line 597 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__trace_gen__MaybeCallTableLval_57));
#line 597 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__trace_gen__MaybeTailRecInfo_52));
#line 597 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__trace_gen__MaybeRedoLayoutLabel_25));
#line 597 "trace_gen.m"
    }
#line 489 "trace_gen.m"
  }
#line 163 "trace_gen.m"
}

#line 155 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__trace_reserved_slots_6_p_0(
#line 155 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ModuleInfo_7,
#line 155 "trace_gen.m"
  MR_Word ll_backend__trace_gen__PredInfo_8,
#line 155 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ProcInfo_9,
#line 155 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Globals_10,
#line 155 "trace_gen.m"
  MR_Integer * ll_backend__trace_gen__ReservedSlots_11,
#line 155 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__MaybeTableVarInfo_12)
#line 155 "trace_gen.m"
{
#line 405 "trace_gen.m"
  {
#line 405 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 405 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceLevel_13;
#line 405 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceSuppress_14;
#line 405 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceTableIo_15;
#line 405 "trace_gen.m"
    MR_Word ll_backend__trace_gen__FixedSlots_16;

#line 406 "trace_gen.m"
    {
#line 406 "trace_gen.m"
      libs__globals__get_trace_level_2_p_0(ll_backend__trace_gen__Globals_10, &ll_backend__trace_gen__TraceLevel_13);
    }
#line 407 "trace_gen.m"
    {
#line 407 "trace_gen.m"
      libs__globals__get_trace_suppress_2_p_0(ll_backend__trace_gen__Globals_10, &ll_backend__trace_gen__TraceSuppress_14);
    }
#line 408 "trace_gen.m"
    {
#line 408 "trace_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__trace_gen__Globals_10, (MR_Integer) 121, &ll_backend__trace_gen__TraceTableIo_15);
    }
#line 409 "trace_gen.m"
    {
#line 409 "trace_gen.m"
      ll_backend__trace_gen__FixedSlots_16 = libs__trace_params__eff_trace_level_needs_fixed_slots_4_f_0(ll_backend__trace_gen__ModuleInfo_7, ll_backend__trace_gen__PredInfo_8, ll_backend__trace_gen__ProcInfo_9, ll_backend__trace_gen__TraceLevel_13);
    }
#line 415 "trace_gen.m"
    if ((ll_backend__trace_gen__FixedSlots_16 == (MR_Integer) 0))
#line 412 "trace_gen.m"
      {
#line 413 "trace_gen.m"
        *ll_backend__trace_gen__ReservedSlots_11 = (MR_Integer) 0;
#line 414 "trace_gen.m"
        *ll_backend__trace_gen__MaybeTableVarInfo_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 412 "trace_gen.m"
      }
#line 415 "trace_gen.m"
    else
#line 416 "trace_gen.m"
      {
#line 416 "trace_gen.m"
        MR_Integer ll_backend__trace_gen__RedoLayout_18;
#line 416 "trace_gen.m"
        MR_Integer ll_backend__trace_gen__FromFull_19;
#line 416 "trace_gen.m"
        MR_Integer ll_backend__trace_gen__IoSeq_20;
#line 416 "trace_gen.m"
        MR_Word ll_backend__trace_gen__UseTrail_21;
#line 416 "trace_gen.m"
        MR_Integer ll_backend__trace_gen__Trail_22;
#line 416 "trace_gen.m"
        MR_Word ll_backend__trace_gen__NeedsMaxfrSlot_23;
#line 416 "trace_gen.m"
        MR_Integer ll_backend__trace_gen__Maxfr_24;
#line 416 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TailCallEvents_25;
#line 416 "trace_gen.m"
        MR_Integer ll_backend__trace_gen__TailRec_26;
#line 416 "trace_gen.m"
        MR_Integer ll_backend__trace_gen__ReservedSlots0_27;
#line 416 "trace_gen.m"
        MR_Word ll_backend__trace_gen__MaybeCallTableVar_28;
#line 416 "trace_gen.m"
        MR_Integer ll_backend__trace_gen__V_36_36;
#line 416 "trace_gen.m"
        MR_Integer ll_backend__trace_gen__V_37_37;
#line 416 "trace_gen.m"
        MR_Integer ll_backend__trace_gen__V_38_38;
#line 416 "trace_gen.m"
        MR_Integer ll_backend__trace_gen__V_39_39;
#line 416 "trace_gen.m"
        MR_Integer ll_backend__trace_gen__V_40_40;
#line 421 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_31_31;
#line 421 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_32_32;
#line 421 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_33_33;
#line 432 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_34_34;

#line 421 "trace_gen.m"
        {
#line 421 "trace_gen.m"
          ll_backend__trace_gen__V_31_31 = hlds__code_model__proc_info_interface_code_model_1_f_0(ll_backend__trace_gen__ProcInfo_9);
        }
#line 421 "trace_gen.m"
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_31_31 == (MR_Integer) 2);
#line 421 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 421 "trace_gen.m"
          {
#line 423 "trace_gen.m"
            ll_backend__trace_gen__V_33_33 = (MR_Integer) 2;
#line 422 "trace_gen.m"
            {
#line 422 "trace_gen.m"
              ll_backend__trace_gen__V_32_32 = libs__trace_params__eff_trace_needs_port_6_f_0(ll_backend__trace_gen__ModuleInfo_7, ll_backend__trace_gen__PredInfo_8, ll_backend__trace_gen__ProcInfo_9, ll_backend__trace_gen__TraceLevel_13, ll_backend__trace_gen__TraceSuppress_14, ll_backend__trace_gen__V_33_33);
            }
#line 423 "trace_gen.m"
            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_32_32 == (MR_Integer) 1);
#line 421 "trace_gen.m"
          }
#line 426 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 425 "trace_gen.m"
          ll_backend__trace_gen__RedoLayout_18 = (MR_Integer) 1;
#line 426 "trace_gen.m"
        else
#line 427 "trace_gen.m"
          ll_backend__trace_gen__RedoLayout_18 = (MR_Integer) 0;
#line 431 "trace_gen.m"
        {
#line 431 "trace_gen.m"
          ll_backend__trace_gen__V_34_34 = libs__trace_params__eff_trace_level_needs_from_full_slot_4_f_0(ll_backend__trace_gen__ModuleInfo_7, ll_backend__trace_gen__PredInfo_8, ll_backend__trace_gen__ProcInfo_9, ll_backend__trace_gen__TraceLevel_13);
        }
#line 432 "trace_gen.m"
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_34_34 == (MR_Integer) 1);
#line 435 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 434 "trace_gen.m"
          ll_backend__trace_gen__FromFull_19 = (MR_Integer) 1;
#line 435 "trace_gen.m"
        else
#line 436 "trace_gen.m"
          ll_backend__trace_gen__FromFull_19 = (MR_Integer) 0;
#line 442 "trace_gen.m"
        if ((ll_backend__trace_gen__TraceTableIo_15 == (MR_Integer) 0))
#line 444 "trace_gen.m"
          ll_backend__trace_gen__IoSeq_20 = (MR_Integer) 0;
#line 442 "trace_gen.m"
        else
#line 441 "trace_gen.m"
          ll_backend__trace_gen__IoSeq_20 = (MR_Integer) 1;
#line 447 "trace_gen.m"
        {
#line 447 "trace_gen.m"
          libs__globals__lookup_bool_option_3_p_0(ll_backend__trace_gen__Globals_10, (MR_Integer) 216, &ll_backend__trace_gen__UseTrail_21);
        }
#line 451 "trace_gen.m"
        if ((ll_backend__trace_gen__UseTrail_21 == (MR_Integer) 0))
#line 453 "trace_gen.m"
          ll_backend__trace_gen__Trail_22 = (MR_Integer) 0;
#line 451 "trace_gen.m"
        else
#line 450 "trace_gen.m"
          ll_backend__trace_gen__Trail_22 = (MR_Integer) 2;
#line 456 "trace_gen.m"
        {
#line 456 "trace_gen.m"
          hlds__hlds_pred__proc_info_get_needs_maxfr_slot_2_p_0(ll_backend__trace_gen__ProcInfo_9, &ll_backend__trace_gen__NeedsMaxfrSlot_23);
        }
#line 460 "trace_gen.m"
        if ((ll_backend__trace_gen__NeedsMaxfrSlot_23 == (MR_Integer) 1))
#line 462 "trace_gen.m"
          ll_backend__trace_gen__Maxfr_24 = (MR_Integer) 0;
#line 460 "trace_gen.m"
        else
#line 459 "trace_gen.m"
          ll_backend__trace_gen__Maxfr_24 = (MR_Integer) 1;
#line 465 "trace_gen.m"
        {
#line 465 "trace_gen.m"
          hlds__hlds_pred__proc_info_get_has_tail_call_event_2_p_0(ll_backend__trace_gen__ProcInfo_9, &ll_backend__trace_gen__TailCallEvents_25);
        }
#line 469 "trace_gen.m"
        if ((ll_backend__trace_gen__TailCallEvents_25 == (MR_Integer) 1))
#line 471 "trace_gen.m"
          ll_backend__trace_gen__TailRec_26 = (MR_Integer) 0;
#line 469 "trace_gen.m"
        else
#line 468 "trace_gen.m"
          ll_backend__trace_gen__TailRec_26 = (MR_Integer) 1;
#line 473 "trace_gen.m"
        ll_backend__trace_gen__V_40_40 = ((MR_Integer) 3 + ll_backend__trace_gen__RedoLayout_18);
#line 473 "trace_gen.m"
        ll_backend__trace_gen__V_39_39 = (ll_backend__trace_gen__V_40_40 + ll_backend__trace_gen__FromFull_19);
#line 473 "trace_gen.m"
        ll_backend__trace_gen__V_38_38 = (ll_backend__trace_gen__V_39_39 + ll_backend__trace_gen__IoSeq_20);
#line 473 "trace_gen.m"
        ll_backend__trace_gen__V_37_37 = (ll_backend__trace_gen__V_38_38 + ll_backend__trace_gen__Trail_22);
#line 473 "trace_gen.m"
        ll_backend__trace_gen__V_36_36 = (ll_backend__trace_gen__V_37_37 + ll_backend__trace_gen__Maxfr_24);
#line 474 "trace_gen.m"
        ll_backend__trace_gen__ReservedSlots0_27 = (ll_backend__trace_gen__V_36_36 + ll_backend__trace_gen__TailRec_26);
#line 476 "trace_gen.m"
        {
#line 476 "trace_gen.m"
          hlds__hlds_pred__proc_info_get_call_table_tip_2_p_0(ll_backend__trace_gen__ProcInfo_9, &ll_backend__trace_gen__MaybeCallTableVar_28);
        }
#line 481 "trace_gen.m"
        if ((ll_backend__trace_gen__MaybeCallTableVar_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 482 "trace_gen.m"
          {
#line 483 "trace_gen.m"
            *ll_backend__trace_gen__ReservedSlots_11 = ll_backend__trace_gen__ReservedSlots0_27;
#line 484 "trace_gen.m"
            *ll_backend__trace_gen__MaybeTableVarInfo_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 482 "trace_gen.m"
          }
#line 481 "trace_gen.m"
        else
#line 478 "trace_gen.m"
          {
#line 478 "trace_gen.m"
            MR_Word ll_backend__trace_gen__CallTableVar_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeCallTableVar_28, (MR_Integer) 0)));
#line 478 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_42_42;

#line 479 "trace_gen.m"
            *ll_backend__trace_gen__ReservedSlots_11 = (ll_backend__trace_gen__ReservedSlots0_27 + (MR_Integer) 1);
#line 480 "trace_gen.m"
            {
#line 480 "trace_gen.m"
              ll_backend__trace_gen__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 480 "trace_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_42_42, 0) = ((MR_Box) (ll_backend__trace_gen__CallTableVar_29));
#line 480 "trace_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_42_42, 1) = ((MR_Box) (*ll_backend__trace_gen__ReservedSlots_11));
#line 480 "trace_gen.m"
            }
#line 480 "trace_gen.m"
            {
#line 480 "trace_gen.m"
              MR_Word base;
#line 480 "trace_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 480 "trace_gen.m"
              *ll_backend__trace_gen__MaybeTableVarInfo_12 = base;
#line 480 "trace_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__trace_gen__V_42_42));
#line 480 "trace_gen.m"
            }
#line 478 "trace_gen.m"
          }
#line 416 "trace_gen.m"
      }
#line 405 "trace_gen.m"
  }
#line 155 "trace_gen.m"
}

#line 145 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__do_we_need_maxfr_slot_5_p_0(
#line 145 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Globals_6,
#line 145 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ModuleInfo_7,
#line 145 "trace_gen.m"
  MR_Word ll_backend__trace_gen__PredInfo0_8,
#line 145 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_0_14,
#line 145 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_15)
#line 145 "trace_gen.m"
{
#line 304 "trace_gen.m"
  {
#line 304 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 304 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceLevel_10;
#line 304 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CodeModel_11;
#line 304 "trace_gen.m"
    MR_Word ll_backend__trace_gen__NeedsMaxfrSlot_13;
#line 309 "trace_gen.m"
    MR_Word ll_backend__trace_gen__Goal_12;
#line 309 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_16_16;
#line 309 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_17_17;
#line 309 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_19_19;

#line 305 "trace_gen.m"
    {
#line 305 "trace_gen.m"
      libs__globals__get_trace_level_2_p_0(ll_backend__trace_gen__Globals_6, &ll_backend__trace_gen__TraceLevel_10);
    }
#line 306 "trace_gen.m"
    {
#line 306 "trace_gen.m"
      ll_backend__trace_gen__CodeModel_11 = hlds__code_model__proc_info_interface_code_model_1_f_0(ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_0_14);
    }
#line 308 "trace_gen.m"
    {
#line 308 "trace_gen.m"
      ll_backend__trace_gen__V_16_16 = libs__trace_params__eff_trace_level_is_none_4_f_0(ll_backend__trace_gen__ModuleInfo_7, ll_backend__trace_gen__PredInfo0_8, ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_0_14, ll_backend__trace_gen__TraceLevel_10);
    }
#line 309 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_16_16 == (MR_Integer) 0);
#line 309 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 309 "trace_gen.m"
      {
#line 310 "trace_gen.m"
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CodeModel_11 == (MR_Integer) 2);
#line 310 "trace_gen.m"
        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 309 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 309 "trace_gen.m"
          {
#line 311 "trace_gen.m"
            {
#line 311 "trace_gen.m"
              hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_0_14, &ll_backend__trace_gen__Goal_12);
            }
#line 312 "trace_gen.m"
            ll_backend__trace_gen__V_17_17 = (MR_Integer) 1;
#line 312 "trace_gen.m"
            {
#line 312 "trace_gen.m"
              ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(ll_backend__trace_gen__Goal_12, &ll_backend__trace_gen__V_19_19);
            }
#line 312 "trace_gen.m"
            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_17_17 == ll_backend__trace_gen__V_19_19);
#line 309 "trace_gen.m"
          }
#line 309 "trace_gen.m"
      }
#line 315 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 314 "trace_gen.m"
      ll_backend__trace_gen__NeedsMaxfrSlot_13 = (MR_Integer) 0;
#line 315 "trace_gen.m"
    else
#line 316 "trace_gen.m"
      ll_backend__trace_gen__NeedsMaxfrSlot_13 = (MR_Integer) 1;
#line 318 "trace_gen.m"
    {
#line 318 "trace_gen.m"
      hlds__hlds_pred__proc_info_set_needs_maxfr_slot_3_p_0(ll_backend__trace_gen__NeedsMaxfrSlot_13, ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_0_14, ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_15);
#line 318 "trace_gen.m"
      return;
    }
#line 304 "trace_gen.m"
  }
#line 145 "trace_gen.m"
}

#line 139 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__trace_fail_vars_3_p_0(
#line 139 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ModuleInfo_4,
#line 139 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ProcInfo_5,
#line 139 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__FailVars_6)
#line 139 "trace_gen.m"
{
#line 289 "trace_gen.m"
  {
#line 289 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 289 "trace_gen.m"
    MR_Word ll_backend__trace_gen__HeadVars_7;
#line 289 "trace_gen.m"
    MR_Word ll_backend__trace_gen__Modes_8;
#line 289 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ArgInfos_9;
#line 289 "trace_gen.m"
    MR_Word ll_backend__trace_gen__VarTypes_10;
#line 289 "trace_gen.m"
    MR_Word ll_backend__trace_gen__Insts_11;
#line 300 "trace_gen.m"
    MR_Word ll_backend__trace_gen__FailVarsList_12;

#line 290 "trace_gen.m"
    {
#line 290 "trace_gen.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__trace_gen__ProcInfo_5, &ll_backend__trace_gen__HeadVars_7);
    }
#line 291 "trace_gen.m"
    {
#line 291 "trace_gen.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ll_backend__trace_gen__ProcInfo_5, &ll_backend__trace_gen__Modes_8);
    }
#line 292 "trace_gen.m"
    {
#line 292 "trace_gen.m"
      hlds__hlds_pred__proc_info_arg_info_2_p_0(ll_backend__trace_gen__ProcInfo_5, &ll_backend__trace_gen__ArgInfos_9);
    }
#line 293 "trace_gen.m"
    {
#line 293 "trace_gen.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__trace_gen__ProcInfo_5, &ll_backend__trace_gen__VarTypes_10);
    }
#line 294 "trace_gen.m"
    {
#line 294 "trace_gen.m"
      check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ll_backend__trace_gen__ModuleInfo_4, ll_backend__trace_gen__Modes_8, &ll_backend__trace_gen__Insts_11);
    }
#line 296 "trace_gen.m"
    {
#line 296 "trace_gen.m"
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen__build_fail_vars_6_p_0(ll_backend__trace_gen__HeadVars_7, ll_backend__trace_gen__Insts_11, ll_backend__trace_gen__ArgInfos_9, ll_backend__trace_gen__ModuleInfo_4, ll_backend__trace_gen__VarTypes_10, &ll_backend__trace_gen__FailVarsList_12);
    }
#line 300 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 299 "trace_gen.m"
      {
#line 299 "trace_gen.m"
        {
#line 299 "trace_gen.m"
          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__trace_gen__FailVarsList_12, ll_backend__trace_gen__FailVars_6);
#line 299 "trace_gen.m"
          return;
        }
#line 299 "trace_gen.m"
      }
#line 300 "trace_gen.m"
    else
#line 301 "trace_gen.m"
      {
#line 301 "trace_gen.m"
        {
#line 301 "trace_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.trace_fail_vars\'/3", (MR_String) "length mismatch");
#line 301 "trace_gen.m"
          return;
        }
#line 301 "trace_gen.m"
      }
#line 289 "trace_gen.m"
  }
#line 139 "trace_gen.m"
}

#line 92 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__get_trace_maybe_tail_rec_info_2_p_0(
#line 92 "trace_gen.m"
  MR_Word ll_backend__trace_gen__TraceInfo_3,
#line 92 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__2_2)
#line 92 "trace_gen.m"
{
#line 1392 "trace_gen.m"
  {
#line 1392 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 1392 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 0)));
#line 1392 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 1)));
#line 1392 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 2)));
#line 1392 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 3)));
#line 1392 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 4)));
#line 1392 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 5)));
#line 1392 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 6)));
#line 1392 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_11_11;

#line 1392 "trace_gen.m"
    *ll_backend__trace_gen__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 7)));
#line 1392 "trace_gen.m"
    ll_backend__trace_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 8)));
#line 1392 "trace_gen.m"
  }
#line 92 "trace_gen.m"
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
