/*
** Automatically generated from `trace_gen.m'
** by the Mercury compiler,
** version DEV
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




#line 160 "ll_backend.trace_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0;

#line 163 "ll_backend.trace_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_lval_0;

#line 166 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 169 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0;

#line 172 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0;

#line 175 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0;

#line 178 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_external_event_info_0_0[3];

#line 181 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_external_event_info_0_0;

#line 184 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_external_event_info_0_0[1];

#line 187 "ll_backend.trace_gen.c"
static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_external_event_info_0[1];

#line 190 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_external_event_info_0[1];

#line 193 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_external_event_info_0[1];

#line 196 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_0;

#line 199 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_1;

#line 202 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_2;

#line 205 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_3;

#line 208 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_value_ordered_external_trace_port_0[4];

#line 211 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_name_ordered_external_trace_port_0[4];

#line 214 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_external_trace_port_0[4];

#line 217 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_0;

#line 220 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_1;

#line 223 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_value_ordered_negation_end_port_0[2];

#line 226 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_name_ordered_negation_end_port_0[2];

#line 229 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_negation_end_port_0[2];

#line 232 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0;

#line 235 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0;

#line 238 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0;

#line 241 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0;

#line 244 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0;

#line 247 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0;

#line 250 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0;

#line 253 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_info_0_0[9];

#line 256 "ll_backend.trace_gen.c"
static const MR_ConstString ll_backend__trace_gen__ll_backend__trace_gen__field_names_trace_info_0_0[9];

#line 259 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_info_0_0;

#line 262 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_info_0_0[1];

#line 265 "ll_backend.trace_gen.c"
static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_info_0[1];

#line 268 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_info_0[1];

#line 271 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_info_0[1];

#line 274 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_0;

#line 277 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 280 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0;

#line 283 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0;

#line 286 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_1[2];

#line 289 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_1;

#line 292 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 295 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_2[2];

#line 298 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_2;

#line 301 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_3[1];

#line 304 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_3;

#line 307 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_4[1];

#line 310 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_4;

#line 313 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_0[1];

#line 316 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_1[1];

#line 319 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_2[1];

#line 322 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_3[2];

#line 325 "ll_backend.trace_gen.c"
static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_port_info_0[4];

#line 328 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_port_info_0[5];

#line 331 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_port_info_0[5];

#line 334 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 337 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_slot_info_0_0[6];

#line 340 "ll_backend.trace_gen.c"
static const MR_ConstString ll_backend__trace_gen__ll_backend__trace_gen__field_names_trace_slot_info_0_0[6];

#line 343 "ll_backend.trace_gen.c"
static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_slot_info_0_0;

#line 346 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_slot_info_0_0[1];

#line 349 "ll_backend.trace_gen.c"
static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_slot_info_0[1];

#line 352 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_slot_info_0[1];

#line 355 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_slot_info_0[1];

#line 358 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_event_info_0_0_10001(
#line 361 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 363 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2);

#line 366 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____external_event_info_0_0_10001(
#line 369 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 371 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 373 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3);

#line 376 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_trace_port_0_0_10001(
#line 379 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 381 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2);

#line 384 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____external_trace_port_0_0_10001(
#line 387 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 389 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 391 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3);

#line 394 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____negation_end_port_0_0_10001(
#line 397 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 399 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2);

#line 402 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____negation_end_port_0_0_10001(
#line 405 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 407 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 409 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3);

#line 412 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_info_0_0_10001(
#line 415 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 417 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2);

#line 420 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____trace_info_0_0_10001(
#line 423 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 425 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 427 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3);

#line 430 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_port_info_0_0_10001(
#line 433 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 435 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2);

#line 438 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____trace_port_info_0_0_10001(
#line 441 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 443 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 445 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3);

#line 448 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_slot_info_0_0_10001(
#line 451 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 453 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2);

#line 456 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____trace_slot_info_0_0_10001(
#line 459 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 461 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 463 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3);

#line 1204 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_13_p_0(
#line 1204 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 1204 "trace_gen.m"
  MR_Word ll_backend__trace_gen__VarSet_2,
#line 1204 "trace_gen.m"
  MR_Word ll_backend__trace_gen__VarTypes_3,
#line 1204 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_TVars_0_6,
#line 1204 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_TVars_7,
#line 1204 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_VarInfos_0_8,
#line 1204 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_VarInfos_9,
#line 1204 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__10_10,
#line 1204 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__11_11,
#line 1204 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_12,
#line 1204 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_13);

#line 948 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__948__1_2_p_0(
#line 948 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeFromFullLval_17,
#line 948 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_62);

#line 942 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__942__1_2_p_0(
#line 942 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeRedoLabelLval_16,
#line 942 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_57);

#line 1184 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__maybe_setup_redo_event__1184__1_2_p_0(
#line 1184 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Lval_8,
#line 1184 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_20);

#line 268 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen____Compare____trace_port_info_0_0(
#line 268 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
#line 268 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 268 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3);

#line 268 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_port_info_0_0(
#line 268 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 268 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2);

#line 1306 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__redo_layout_slot_2_p_0(
#line 1306 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CodeModel_3,
#line 1306 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__RedoLayoutSlot_4);

#line 1305 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__call_depth_slot_2_p_0(
#line 1305 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CodeModel_3,
#line 1305 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__CallDepthSlot_4);

#line 1304 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__call_num_slot_2_p_0(
#line 1304 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CodeModel_3,
#line 1304 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__CallNumSlot_4);

#line 1303 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__event_num_slot_2_p_0(
#line 1303 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CodeModel_3,
#line 1303 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__EventNumSlot_4);

#line 1276 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__stackref_to_string_2_p_0(
#line 1276 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Lval_3,
#line 1276 "trace_gen.m"
  MR_String * ll_backend__trace_gen__LvalStr_4);

#line 1254 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__build_fail_vars_6_p_0(
#line 1254 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 1254 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 1254 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3,
#line 1254 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ModuleInfo_4,
#line 1254 "trace_gen.m"
  MR_Word ll_backend__trace_gen__VarTypes_5,
#line 1254 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__6_6);

#line 1170 "trace_gen.m"
static MR_Word MR_CALL 
ll_backend__trace_gen__find_lval_in_layout_locn_1_f_0(
#line 1170 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1);

#line 1165 "trace_gen.m"
static MR_Word MR_CALL 
ll_backend__trace_gen__find_lval_in_var_info_1_f_0(
#line 1165 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1);

#line 1149 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__find_output_vars_3_p_0(
#line 1149 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 1149 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2,
#line 1149 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_OutputVars_3);

#line 1092 "trace_gen.m"
static MR_Box MR_CALL 
ll_backend__trace_gen__generate_event_code_13_p_0_2(
#line 1092 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg,
#line 1092 "trace_gen.m"
  MR_Box ll_backend__trace_gen__wrapper_arg_1);

#line 1088 "trace_gen.m"
static MR_Box MR_CALL 
ll_backend__trace_gen__generate_event_code_13_p_0_1(
#line 1088 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg,
#line 1088 "trace_gen.m"
  MR_Box ll_backend__trace_gen__wrapper_arg_1);

#line 1019 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__generate_event_code_13_p_0(
#line 1019 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Port_14,
#line 1019 "trace_gen.m"
  MR_Word ll_backend__trace_gen__PortInfo_15,
#line 1019 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeTraceInfo_16,
#line 1019 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Context_17,
#line 1019 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HideEvent_18,
#line 1019 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeUserInfo_19,
#line 1019 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Label_20,
#line 1019 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__TvarDataMap_21,
#line 1019 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_22,
#line 1019 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_67,
#line 1019 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_68,
#line 1019 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_69,
#line 1019 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_70);

#line 948 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_2(
#line 948 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg);

#line 942 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_1(
#line 942 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg);

#line 922 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0(
#line 922 "trace_gen.m"
  MR_Word ll_backend__trace_gen__TraceInfo_5,
#line 922 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_6,
#line 922 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_42,
#line 922 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_43);

#line 1184 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__maybe_setup_redo_event_2_p_0_1(
#line 1184 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg);


static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_1[23][2];

static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_2[8][3];

static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_3[5][1];

static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_5[5][5];


#line 1296 "trace_gen.m"
/* sealed */ struct ll_backend__trace_gen__vector_common_type_4_0_s {
#line 1296 "trace_gen.m"
  const MR_Word ll_backend__trace_gen__vector_common_type_4_0__vct_4_f_0;
#line 1296 "trace_gen.m"
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



#line 960 "ll_backend.trace_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 968 "ll_backend.trace_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 976 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 984 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0
  }
};

#line 992 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &ll_backend__trace_gen__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0
  }
};

#line 1001 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 1009 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_external_event_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0
};

#line 1016 "ll_backend.trace_gen.c"
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

#line 1031 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_external_event_info_0_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_external_event_info_0_0
};

#line 1036 "ll_backend.trace_gen.c"
static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_external_event_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_external_event_info_0_0
  }
};

#line 1045 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_external_event_info_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_external_event_info_0_0
};

#line 1050 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_external_event_info_0[1] = {
  (MR_Integer) 0
};

#line 1055 "ll_backend.trace_gen.c"
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

#line 1072 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_0 = {
  (MR_String) "external_port_call",
  (MR_Integer) 0
};

#line 1078 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_1 = {
  (MR_String) "external_port_exit",
  (MR_Integer) 1
};

#line 1084 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_2 = {
  (MR_String) "external_port_fail",
  (MR_Integer) 2
};

#line 1090 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_3 = {
  (MR_String) "external_port_tailrec_call",
  (MR_Integer) 3
};

#line 1096 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_value_ordered_external_trace_port_0[4] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_0,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_1,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_2,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_3
};

#line 1104 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_name_ordered_external_trace_port_0[4] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_0,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_1,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_2,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_3
};

#line 1112 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_external_trace_port_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 1120 "ll_backend.trace_gen.c"
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

#line 1137 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_0 = {
  (MR_String) "neg_success",
  (MR_Integer) 0
};

#line 1143 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_1 = {
  (MR_String) "neg_failure",
  (MR_Integer) 1
};

#line 1149 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_value_ordered_negation_end_port_0[2] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_0,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_1
};

#line 1155 "ll_backend.trace_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_name_ordered_negation_end_port_0[2] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_1,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_0
};

#line 1161 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_negation_end_port_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1167 "ll_backend.trace_gen.c"
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

#line 1184 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0
  }
};

#line 1192 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 1200 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 1209 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 1217 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1226 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1234 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1242 "ll_backend.trace_gen.c"
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

#line 1255 "ll_backend.trace_gen.c"
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

#line 1268 "ll_backend.trace_gen.c"
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

#line 1283 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_info_0_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_info_0_0
};

#line 1288 "ll_backend.trace_gen.c"
static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_info_0_0
  }
};

#line 1297 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_info_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_info_0_0
};

#line 1302 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_info_0[1] = {
  (MR_Integer) 0
};

#line 1307 "ll_backend.trace_gen.c"
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

#line 1324 "ll_backend.trace_gen.c"
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

#line 1339 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1347 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0
  }
};

#line 1356 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0
  }
};

#line 1364 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0
};

#line 1370 "ll_backend.trace_gen.c"
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

#line 1385 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1393 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_2[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1399 "ll_backend.trace_gen.c"
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

#line 1414 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_3[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
};

#line 1419 "ll_backend.trace_gen.c"
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

#line 1434 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_4[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
};

#line 1439 "ll_backend.trace_gen.c"
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

#line 1454 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_0
};

#line 1459 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_1[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_1
};

#line 1464 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_2[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_2
};

#line 1469 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_3[2] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_3,
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_4
};

#line 1475 "ll_backend.trace_gen.c"
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

#line 1499 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_port_info_0[5] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_0,
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_2,
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_3,
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_1,
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_4
};

#line 1508 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_port_info_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 4
};

#line 1517 "ll_backend.trace_gen.c"
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

#line 1534 "ll_backend.trace_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1542 "ll_backend.trace_gen.c"
static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_slot_info_0_0[6] = {
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

#line 1552 "ll_backend.trace_gen.c"
static const MR_ConstString ll_backend__trace_gen__ll_backend__trace_gen__field_names_trace_slot_info_0_0[6] = {
  (MR_String) "slot_from_full",
  (MR_String) "slot_io",
  (MR_String) "slot_trail",
  (MR_String) "slot_maxfr",
  (MR_String) "slot_call_table",
  (MR_String) "slot_tail_rec"
};

#line 1562 "ll_backend.trace_gen.c"
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

#line 1577 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_slot_info_0_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_slot_info_0_0
};

#line 1582 "ll_backend.trace_gen.c"
static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_slot_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_slot_info_0_0
  }
};

#line 1591 "ll_backend.trace_gen.c"
static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_slot_info_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_slot_info_0_0
};

#line 1596 "ll_backend.trace_gen.c"
static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_slot_info_0[1] = {
  (MR_Integer) 0
};

#line 1601 "ll_backend.trace_gen.c"
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

#line 1618 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_event_info_0_0_10001(
#line 1621 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 1623 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2)
#line 1625 "ll_backend.trace_gen.c"
{
#line 1627 "ll_backend.trace_gen.c"
  {
#line 1629 "ll_backend.trace_gen.c"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1632 "ll_backend.trace_gen.c"
    {
#line 1634 "ll_backend.trace_gen.c"
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen____Unify____external_event_info_0_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1), ((MR_Word) ll_backend__trace_gen__wrapper_arg_2));
    }
#line 1637 "ll_backend.trace_gen.c"
    return ll_backend__trace_gen__succeeded;
#line 1639 "ll_backend.trace_gen.c"
  }
#line 1641 "ll_backend.trace_gen.c"
}

#line 1644 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____external_event_info_0_0_10001(
#line 1647 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 1649 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 1651 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3)
#line 1653 "ll_backend.trace_gen.c"
{
#line 1655 "ll_backend.trace_gen.c"
  {
#line 1657 "ll_backend.trace_gen.c"
    MR_Word ll_backend__trace_gen__conv0_HeadVar__1_1;

#line 1660 "ll_backend.trace_gen.c"
    {
#line 1662 "ll_backend.trace_gen.c"
      ll_backend__trace_gen____Compare____external_event_info_0_0(&ll_backend__trace_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__trace_gen__wrapper_arg_2), ((MR_Word) ll_backend__trace_gen__wrapper_arg_3));
    }
#line 1665 "ll_backend.trace_gen.c"
    *ll_backend__trace_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__trace_gen__conv0_HeadVar__1_1));
#line 1667 "ll_backend.trace_gen.c"
  }
#line 1669 "ll_backend.trace_gen.c"
}

#line 1672 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_trace_port_0_0_10001(
#line 1675 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 1677 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2)
#line 1679 "ll_backend.trace_gen.c"
{
#line 1681 "ll_backend.trace_gen.c"
  {
#line 1683 "ll_backend.trace_gen.c"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1686 "ll_backend.trace_gen.c"
    {
#line 1688 "ll_backend.trace_gen.c"
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen____Unify____external_trace_port_0_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1), ((MR_Word) ll_backend__trace_gen__wrapper_arg_2));
    }
#line 1691 "ll_backend.trace_gen.c"
    return ll_backend__trace_gen__succeeded;
#line 1693 "ll_backend.trace_gen.c"
  }
#line 1695 "ll_backend.trace_gen.c"
}

#line 1698 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____external_trace_port_0_0_10001(
#line 1701 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 1703 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 1705 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3)
#line 1707 "ll_backend.trace_gen.c"
{
#line 1709 "ll_backend.trace_gen.c"
  {
#line 1711 "ll_backend.trace_gen.c"
    MR_Word ll_backend__trace_gen__conv0_HeadVar__1_1;

#line 1714 "ll_backend.trace_gen.c"
    {
#line 1716 "ll_backend.trace_gen.c"
      ll_backend__trace_gen____Compare____external_trace_port_0_0(&ll_backend__trace_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__trace_gen__wrapper_arg_2), ((MR_Word) ll_backend__trace_gen__wrapper_arg_3));
    }
#line 1719 "ll_backend.trace_gen.c"
    *ll_backend__trace_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__trace_gen__conv0_HeadVar__1_1));
#line 1721 "ll_backend.trace_gen.c"
  }
#line 1723 "ll_backend.trace_gen.c"
}

#line 1726 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____negation_end_port_0_0_10001(
#line 1729 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 1731 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2)
#line 1733 "ll_backend.trace_gen.c"
{
#line 1735 "ll_backend.trace_gen.c"
  {
#line 1737 "ll_backend.trace_gen.c"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1740 "ll_backend.trace_gen.c"
    {
#line 1742 "ll_backend.trace_gen.c"
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen____Unify____negation_end_port_0_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1), ((MR_Word) ll_backend__trace_gen__wrapper_arg_2));
    }
#line 1745 "ll_backend.trace_gen.c"
    return ll_backend__trace_gen__succeeded;
#line 1747 "ll_backend.trace_gen.c"
  }
#line 1749 "ll_backend.trace_gen.c"
}

#line 1752 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____negation_end_port_0_0_10001(
#line 1755 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 1757 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 1759 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3)
#line 1761 "ll_backend.trace_gen.c"
{
#line 1763 "ll_backend.trace_gen.c"
  {
#line 1765 "ll_backend.trace_gen.c"
    MR_Word ll_backend__trace_gen__conv0_HeadVar__1_1;

#line 1768 "ll_backend.trace_gen.c"
    {
#line 1770 "ll_backend.trace_gen.c"
      ll_backend__trace_gen____Compare____negation_end_port_0_0(&ll_backend__trace_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__trace_gen__wrapper_arg_2), ((MR_Word) ll_backend__trace_gen__wrapper_arg_3));
    }
#line 1773 "ll_backend.trace_gen.c"
    *ll_backend__trace_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__trace_gen__conv0_HeadVar__1_1));
#line 1775 "ll_backend.trace_gen.c"
  }
#line 1777 "ll_backend.trace_gen.c"
}

#line 1780 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_info_0_0_10001(
#line 1783 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 1785 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2)
#line 1787 "ll_backend.trace_gen.c"
{
#line 1789 "ll_backend.trace_gen.c"
  {
#line 1791 "ll_backend.trace_gen.c"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1794 "ll_backend.trace_gen.c"
    {
#line 1796 "ll_backend.trace_gen.c"
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen____Unify____trace_info_0_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1), ((MR_Word) ll_backend__trace_gen__wrapper_arg_2));
    }
#line 1799 "ll_backend.trace_gen.c"
    return ll_backend__trace_gen__succeeded;
#line 1801 "ll_backend.trace_gen.c"
  }
#line 1803 "ll_backend.trace_gen.c"
}

#line 1806 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____trace_info_0_0_10001(
#line 1809 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 1811 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 1813 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3)
#line 1815 "ll_backend.trace_gen.c"
{
#line 1817 "ll_backend.trace_gen.c"
  {
#line 1819 "ll_backend.trace_gen.c"
    MR_Word ll_backend__trace_gen__conv0_HeadVar__1_1;

#line 1822 "ll_backend.trace_gen.c"
    {
#line 1824 "ll_backend.trace_gen.c"
      ll_backend__trace_gen____Compare____trace_info_0_0(&ll_backend__trace_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__trace_gen__wrapper_arg_2), ((MR_Word) ll_backend__trace_gen__wrapper_arg_3));
    }
#line 1827 "ll_backend.trace_gen.c"
    *ll_backend__trace_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__trace_gen__conv0_HeadVar__1_1));
#line 1829 "ll_backend.trace_gen.c"
  }
#line 1831 "ll_backend.trace_gen.c"
}

#line 1834 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_port_info_0_0_10001(
#line 1837 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 1839 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2)
#line 1841 "ll_backend.trace_gen.c"
{
#line 1843 "ll_backend.trace_gen.c"
  {
#line 1845 "ll_backend.trace_gen.c"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1848 "ll_backend.trace_gen.c"
    {
#line 1850 "ll_backend.trace_gen.c"
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen____Unify____trace_port_info_0_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1), ((MR_Word) ll_backend__trace_gen__wrapper_arg_2));
    }
#line 1853 "ll_backend.trace_gen.c"
    return ll_backend__trace_gen__succeeded;
#line 1855 "ll_backend.trace_gen.c"
  }
#line 1857 "ll_backend.trace_gen.c"
}

#line 1860 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____trace_port_info_0_0_10001(
#line 1863 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 1865 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 1867 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3)
#line 1869 "ll_backend.trace_gen.c"
{
#line 1871 "ll_backend.trace_gen.c"
  {
#line 1873 "ll_backend.trace_gen.c"
    MR_Word ll_backend__trace_gen__conv0_HeadVar__1_1;

#line 1876 "ll_backend.trace_gen.c"
    {
#line 1878 "ll_backend.trace_gen.c"
      ll_backend__trace_gen____Compare____trace_port_info_0_0(&ll_backend__trace_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__trace_gen__wrapper_arg_2), ((MR_Word) ll_backend__trace_gen__wrapper_arg_3));
    }
#line 1881 "ll_backend.trace_gen.c"
    *ll_backend__trace_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__trace_gen__conv0_HeadVar__1_1));
#line 1883 "ll_backend.trace_gen.c"
  }
#line 1885 "ll_backend.trace_gen.c"
}

#line 1888 "ll_backend.trace_gen.c"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_slot_info_0_0_10001(
#line 1891 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
#line 1893 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2)
#line 1895 "ll_backend.trace_gen.c"
{
#line 1897 "ll_backend.trace_gen.c"
  {
#line 1899 "ll_backend.trace_gen.c"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1902 "ll_backend.trace_gen.c"
    {
#line 1904 "ll_backend.trace_gen.c"
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen____Unify____trace_slot_info_0_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1), ((MR_Word) ll_backend__trace_gen__wrapper_arg_2));
    }
#line 1907 "ll_backend.trace_gen.c"
    return ll_backend__trace_gen__succeeded;
#line 1909 "ll_backend.trace_gen.c"
  }
#line 1911 "ll_backend.trace_gen.c"
}

#line 1914 "ll_backend.trace_gen.c"
static void MR_CALL 
ll_backend__trace_gen____Compare____trace_slot_info_0_0_10001(
#line 1917 "ll_backend.trace_gen.c"
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
#line 1919 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
#line 1921 "ll_backend.trace_gen.c"
  MR_Box ll_backend__trace_gen__wrapper_arg_3)
#line 1923 "ll_backend.trace_gen.c"
{
#line 1925 "ll_backend.trace_gen.c"
  {
#line 1927 "ll_backend.trace_gen.c"
    MR_Word ll_backend__trace_gen__conv0_HeadVar__1_1;

#line 1930 "ll_backend.trace_gen.c"
    {
#line 1932 "ll_backend.trace_gen.c"
      ll_backend__trace_gen____Compare____trace_slot_info_0_0(&ll_backend__trace_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__trace_gen__wrapper_arg_2), ((MR_Word) ll_backend__trace_gen__wrapper_arg_3));
    }
#line 1935 "ll_backend.trace_gen.c"
    *ll_backend__trace_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__trace_gen__conv0_HeadVar__1_1));
#line 1937 "ll_backend.trace_gen.c"
  }
#line 1939 "ll_backend.trace_gen.c"
}

#line 1204 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_13_p_0(
#line 1204 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 1204 "trace_gen.m"
  MR_Word ll_backend__trace_gen__VarSet_2,
#line 1204 "trace_gen.m"
  MR_Word ll_backend__trace_gen__VarTypes_3,
#line 1204 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_TVars_0_6,
#line 1204 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_TVars_7,
#line 1204 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_VarInfos_0_8,
#line 1204 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_VarInfos_9,
#line 1204 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__10_10,
#line 1204 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__11_11,
#line 1204 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_12,
#line 1204 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_13)
#line 1204 "trace_gen.m"
{
#line 1209 "trace_gen.m"
  {
#line 1209 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1209 "trace_gen.m"
    if ((ll_backend__trace_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1209 "trace_gen.m"
      {
#line 1209 "trace_gen.m"
        {
#line 1209 "trace_gen.m"
          *ll_backend__trace_gen__HeadVar__10_10 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 1209 "trace_gen.m"
        *ll_backend__trace_gen__STATE_VARIABLE_CLD_13 = ll_backend__trace_gen__STATE_VARIABLE_CLD_0_12;
#line 1209 "trace_gen.m"
        *ll_backend__trace_gen__STATE_VARIABLE_VarInfos_9 = ll_backend__trace_gen__STATE_VARIABLE_VarInfos_0_8;
#line 1209 "trace_gen.m"
        *ll_backend__trace_gen__STATE_VARIABLE_TVars_7 = ll_backend__trace_gen__STATE_VARIABLE_TVars_0_6;
#line 1209 "trace_gen.m"
      }
#line 1209 "trace_gen.m"
    else
#line 1211 "trace_gen.m"
      {
#line 1211 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeCtorInfo_57_57 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 1211 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1211 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Vars_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1211 "trace_gen.m"
        MR_Word ll_backend__trace_gen__VarCode_36;
#line 1211 "trace_gen.m"
        MR_Word ll_backend__trace_gen__VarsCode_37;
#line 1211 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Type_40;
#line 1211 "trace_gen.m"
        MR_Word ll_backend__trace_gen__ModuleInfo_41;
#line 1211 "trace_gen.m"
        MR_Word ll_backend__trace_gen__IsDummy_42;
#line 1211 "trace_gen.m"
        MR_Word ll_backend__trace_gen__STATE_VARIABLE_TVars_50_50;
#line 1211 "trace_gen.m"
        MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_51_51;
#line 1211 "trace_gen.m"
        MR_Word ll_backend__trace_gen__STATE_VARIABLE_VarInfos_52_52;

#line 1212 "trace_gen.m"
        {
#line 1212 "trace_gen.m"
          hlds__vartypes__lookup_var_type_3_p_0(ll_backend__trace_gen__VarTypes_3, ll_backend__trace_gen__Var_28, &ll_backend__trace_gen__Type_40);
        }
#line 1213 "trace_gen.m"
        {
#line 1213 "trace_gen.m"
          ll_backend__code_info__get_module_info_2_p_0(ll_backend__trace_gen__HeadVar__11_11, &ll_backend__trace_gen__ModuleInfo_41);
        }
#line 1214 "trace_gen.m"
        {
#line 1214 "trace_gen.m"
          ll_backend__trace_gen__IsDummy_42 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__trace_gen__ModuleInfo_41, ll_backend__trace_gen__Type_40);
        }
#line 1218 "trace_gen.m"
#line 1218 "trace_gen.m"
        switch (ll_backend__trace_gen__IsDummy_42) {
#line 1218 "trace_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1218 "trace_gen.m"
          case (MR_Integer) 0:
#line 1216 "trace_gen.m"
            {
#line 1217 "trace_gen.m"
              {
#line 1217 "trace_gen.m"
                ll_backend__trace_gen__VarCode_36 = mercury__cord__empty_0_f_0(ll_backend__trace_gen__TypeCtorInfo_57_57);
              }
#line 1216 "trace_gen.m"
              ll_backend__trace_gen__STATE_VARIABLE_TVars_50_50 = ll_backend__trace_gen__STATE_VARIABLE_TVars_0_6;
#line 1216 "trace_gen.m"
              ll_backend__trace_gen__STATE_VARIABLE_VarInfos_52_52 = ll_backend__trace_gen__STATE_VARIABLE_VarInfos_0_8;
#line 1216 "trace_gen.m"
              ll_backend__trace_gen__STATE_VARIABLE_CLD_51_51 = ll_backend__trace_gen__STATE_VARIABLE_CLD_0_12;
#line 1216 "trace_gen.m"
            }
#line 1218 "trace_gen.m"
            break;
#line 1218 "trace_gen.m"
          case (MR_Integer) 1:
#line 1219 "trace_gen.m"
            {
#line 1219 "trace_gen.m"
              MR_Word ll_backend__trace_gen__VarInfo_43;
#line 1219 "trace_gen.m"
              MR_Word ll_backend__trace_gen__Lval_70;
#line 1219 "trace_gen.m"
              MR_Word ll_backend__trace_gen__Type_71;
#line 1219 "trace_gen.m"
              MR_String ll_backend__trace_gen__Name_73;
#line 1219 "trace_gen.m"
              MR_Word ll_backend__trace_gen__LiveType_75;
#line 1219 "trace_gen.m"
              MR_Word ll_backend__trace_gen__TypeVars_76;
#line 1219 "trace_gen.m"
              MR_Word ll_backend__trace_gen__V_78_78;
#line 1236 "trace_gen.m"
              MR_String ll_backend__trace_gen__SearchName_72;

#line 1232 "trace_gen.m"
              {
#line 1232 "trace_gen.m"
                ll_backend__code_loc_dep__produce_variable_in_reg_or_stack_6_p_0(ll_backend__trace_gen__Var_28, &ll_backend__trace_gen__VarCode_36, &ll_backend__trace_gen__Lval_70, ll_backend__trace_gen__HeadVar__11_11, ll_backend__trace_gen__STATE_VARIABLE_CLD_0_12, &ll_backend__trace_gen__STATE_VARIABLE_CLD_51_51);
              }
#line 1233 "trace_gen.m"
              {
#line 1233 "trace_gen.m"
                ll_backend__trace_gen__Type_71 = ll_backend__code_info__variable_type_2_f_0(ll_backend__trace_gen__HeadVar__11_11, ll_backend__trace_gen__Var_28);
              }
#line 1234 "trace_gen.m"
              {
#line 1234 "trace_gen.m"
                ll_backend__trace_gen__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__trace_gen__VarSet_2, ll_backend__trace_gen__Var_28, &ll_backend__trace_gen__SearchName_72);
              }
#line 1236 "trace_gen.m"
              if (ll_backend__trace_gen__succeeded)
#line 1235 "trace_gen.m"
                ll_backend__trace_gen__Name_73 = ll_backend__trace_gen__SearchName_72;
#line 1236 "trace_gen.m"
              else
#line 1237 "trace_gen.m"
                ll_backend__trace_gen__Name_73 = (MR_String) "";
#line 1246 "trace_gen.m"
              mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1247 "trace_gen.m"
              {
#line 1247 "trace_gen.m"
                ll_backend__trace_gen__LiveType_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1247 "trace_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__trace_gen__LiveType_75, 0) = ((MR_Box) (ll_backend__trace_gen__Var_28));
#line 1247 "trace_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__trace_gen__LiveType_75, 1) = ((MR_Box) (ll_backend__trace_gen__Name_73));
#line 1247 "trace_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__trace_gen__LiveType_75, 2) = ((MR_Box) (ll_backend__trace_gen__Type_71));
#line 1247 "trace_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__trace_gen__LiveType_75, 3) = NULL;
#line 1247 "trace_gen.m"
              }
#line 1248 "trace_gen.m"
              {
#line 1248 "trace_gen.m"
                ll_backend__trace_gen__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1248 "trace_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_78_78, 0) = ((MR_Box) (ll_backend__trace_gen__Lval_70));
#line 1248 "trace_gen.m"
              }
#line 1248 "trace_gen.m"
              {
#line 1248 "trace_gen.m"
                ll_backend__trace_gen__VarInfo_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1248 "trace_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__trace_gen__VarInfo_43, 0) = ((MR_Box) (ll_backend__trace_gen__V_78_78));
#line 1248 "trace_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__trace_gen__VarInfo_43, 1) = ((MR_Box) (ll_backend__trace_gen__LiveType_75));
#line 1248 "trace_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__trace_gen__VarInfo_43, 2) = ((MR_Box) ((MR_String) "trace"));
#line 1248 "trace_gen.m"
              }
#line 1249 "trace_gen.m"
              {
#line 1249 "trace_gen.m"
                parse_tree__prog_type__type_vars_2_p_0(ll_backend__trace_gen__Type_71, &ll_backend__trace_gen__TypeVars_76);
              }
#line 1250 "trace_gen.m"
              {
#line 1250 "trace_gen.m"
                mercury__set__insert_list_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[3], ll_backend__trace_gen__TypeVars_76, ll_backend__trace_gen__STATE_VARIABLE_TVars_0_6, &ll_backend__trace_gen__STATE_VARIABLE_TVars_50_50);
              }
#line 1222 "trace_gen.m"
              {
#line 1222 "trace_gen.m"
                ll_backend__trace_gen__STATE_VARIABLE_VarInfos_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "trace_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__trace_gen__STATE_VARIABLE_VarInfos_52_52, 0) = ((MR_Box) (ll_backend__trace_gen__VarInfo_43));
#line 1222 "trace_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__trace_gen__STATE_VARIABLE_VarInfos_52_52, 1) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_VarInfos_0_8));
#line 1222 "trace_gen.m"
              }
#line 1219 "trace_gen.m"
            }
#line 1218 "trace_gen.m"
            break;
#line 1218 "trace_gen.m"
        }
#line 1224 "trace_gen.m"
        {
#line 1224 "trace_gen.m"
          ll_backend__trace_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_13_p_0(ll_backend__trace_gen__Vars_29, ll_backend__trace_gen__VarSet_2, ll_backend__trace_gen__VarTypes_3, ll_backend__trace_gen__STATE_VARIABLE_TVars_50_50, ll_backend__trace_gen__STATE_VARIABLE_TVars_7, ll_backend__trace_gen__STATE_VARIABLE_VarInfos_52_52, ll_backend__trace_gen__STATE_VARIABLE_VarInfos_9, &ll_backend__trace_gen__VarsCode_37, ll_backend__trace_gen__HeadVar__11_11, ll_backend__trace_gen__STATE_VARIABLE_CLD_51_51, ll_backend__trace_gen__STATE_VARIABLE_CLD_13);
        }
#line 1211 "trace_gen.m"
        {
#line 1211 "trace_gen.m"
          *ll_backend__trace_gen__HeadVar__10_10 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_57_57, ll_backend__trace_gen__VarCode_36, ll_backend__trace_gen__VarsCode_37);
        }
#line 1211 "trace_gen.m"
      }
#line 1209 "trace_gen.m"
  }
#line 1204 "trace_gen.m"
}

#line 948 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__948__1_2_p_0(
#line 948 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeFromFullLval_17,
#line 948 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_62)
#line 948 "trace_gen.m"
{
#line 948 "trace_gen.m"
  {
#line 948 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 948 "trace_gen.m"
    {
#line 948 "trace_gen.m"
      ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[1], ((MR_Box) (ll_backend__trace_gen__MaybeFromFullLval_17)), ((MR_Box) (ll_backend__trace_gen__HeadVar__2_62)));
    }
#line 948 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 948 "trace_gen.m"
  }
#line 948 "trace_gen.m"
}

#line 942 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__942__1_2_p_0(
#line 942 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeRedoLabelLval_16,
#line 942 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_57)
#line 942 "trace_gen.m"
{
#line 942 "trace_gen.m"
  {
#line 942 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 942 "trace_gen.m"
    {
#line 942 "trace_gen.m"
      ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[0], ((MR_Box) (ll_backend__trace_gen__MaybeRedoLabelLval_16)), ((MR_Box) (ll_backend__trace_gen__HeadVar__2_57)));
    }
#line 942 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 942 "trace_gen.m"
  }
#line 942 "trace_gen.m"
}

#line 1184 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__maybe_setup_redo_event__1184__1_2_p_0(
#line 1184 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Lval_8,
#line 1184 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_20)
#line 1184 "trace_gen.m"
{
#line 1184 "trace_gen.m"
  {
#line 1184 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1184 "trace_gen.m"
    {
#line 1184 "trace_gen.m"
      ll_backend__trace_gen__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__trace_gen__Lval_8, ll_backend__trace_gen__HeadVar__2_20);
    }
#line 1184 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 1184 "trace_gen.m"
  }
#line 1184 "trace_gen.m"
}

#line 97 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen____Compare____trace_slot_info_0_0(
#line 97 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
#line 97 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 97 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3)
#line 97 "trace_gen.m"
{
#line 97 "trace_gen.m"
  {
#line 97 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 97 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastX_21 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;
#line 97 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastY_22 = (MR_Integer) ll_backend__trace_gen__HeadVar__3_3;

#line 97 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_21 == ll_backend__trace_gen__CastY_22);
#line 97 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 2282 "ll_backend.trace_gen.c"
      *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 97 "trace_gen.m"
    else
#line 97 "trace_gen.m"
      {
#line 97 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 97 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 97 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 97 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 3)));
#line 97 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 4)));
#line 97 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 5)));
#line 97 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 97 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 97 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 2)));
#line 97 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 3)));
#line 97 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 4)));
#line 97 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 5)));
#line 97 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_16_16;

#line 97 "trace_gen.m"
        {
#line 97 "trace_gen.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[11], &ll_backend__trace_gen__V_16_16, ((MR_Box) (ll_backend__trace_gen__V_4_4)), ((MR_Box) (ll_backend__trace_gen__V_10_10)));
        }
#line 2320 "ll_backend.trace_gen.c"
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_16_16 == (MR_Integer) 0);
#line 97 "trace_gen.m"
        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 97 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 97 "trace_gen.m"
          *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_16_16;
#line 97 "trace_gen.m"
        else
#line 97 "trace_gen.m"
          {
#line 97 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_17_17;

#line 97 "trace_gen.m"
            {
#line 97 "trace_gen.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[11], &ll_backend__trace_gen__V_17_17, ((MR_Box) (ll_backend__trace_gen__V_5_5)), ((MR_Box) (ll_backend__trace_gen__V_11_11)));
            }
#line 2340 "ll_backend.trace_gen.c"
            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_17_17 == (MR_Integer) 0);
#line 97 "trace_gen.m"
            ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 97 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 97 "trace_gen.m"
              *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_17_17;
#line 97 "trace_gen.m"
            else
#line 97 "trace_gen.m"
              {
#line 97 "trace_gen.m"
                MR_Word ll_backend__trace_gen__V_18_18;

#line 97 "trace_gen.m"
                {
#line 97 "trace_gen.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[11], &ll_backend__trace_gen__V_18_18, ((MR_Box) (ll_backend__trace_gen__V_6_6)), ((MR_Box) (ll_backend__trace_gen__V_12_12)));
                }
#line 2360 "ll_backend.trace_gen.c"
                ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_18_18 == (MR_Integer) 0);
#line 97 "trace_gen.m"
                ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 97 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 97 "trace_gen.m"
                  *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_18_18;
#line 97 "trace_gen.m"
                else
#line 97 "trace_gen.m"
                  {
#line 97 "trace_gen.m"
                    MR_Word ll_backend__trace_gen__V_19_19;

#line 97 "trace_gen.m"
                    {
#line 97 "trace_gen.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[11], &ll_backend__trace_gen__V_19_19, ((MR_Box) (ll_backend__trace_gen__V_7_7)), ((MR_Box) (ll_backend__trace_gen__V_13_13)));
                    }
#line 2380 "ll_backend.trace_gen.c"
                    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_19_19 == (MR_Integer) 0);
#line 97 "trace_gen.m"
                    ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 97 "trace_gen.m"
                    if (ll_backend__trace_gen__succeeded)
#line 97 "trace_gen.m"
                      *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_19_19;
#line 97 "trace_gen.m"
                    else
#line 97 "trace_gen.m"
                      {
#line 97 "trace_gen.m"
                        MR_Word ll_backend__trace_gen__V_20_20;

#line 97 "trace_gen.m"
                        {
#line 97 "trace_gen.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[11], &ll_backend__trace_gen__V_20_20, ((MR_Box) (ll_backend__trace_gen__V_8_8)), ((MR_Box) (ll_backend__trace_gen__V_14_14)));
                        }
#line 2400 "ll_backend.trace_gen.c"
                        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_20_20 == (MR_Integer) 0);
#line 97 "trace_gen.m"
                        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 97 "trace_gen.m"
                        if (ll_backend__trace_gen__succeeded)
#line 97 "trace_gen.m"
                          *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_20_20;
#line 97 "trace_gen.m"
                        else
#line 97 "trace_gen.m"
                          {
#line 97 "trace_gen.m"
                            {
#line 97 "trace_gen.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[11], ll_backend__trace_gen__HeadVar__1_1, ((MR_Box) (ll_backend__trace_gen__V_9_9)), ((MR_Box) (ll_backend__trace_gen__V_15_15)));
                            }
#line 97 "trace_gen.m"
                          }
#line 97 "trace_gen.m"
                      }
#line 97 "trace_gen.m"
                  }
#line 97 "trace_gen.m"
              }
#line 97 "trace_gen.m"
          }
#line 97 "trace_gen.m"
      }
#line 97 "trace_gen.m"
  }
#line 97 "trace_gen.m"
}

#line 97 "trace_gen.m"
MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_slot_info_0_0(
#line 97 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 97 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2)
#line 97 "trace_gen.m"
{
#line 97 "trace_gen.m"
  {
#line 97 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 97 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastX_15 = (MR_Integer) ll_backend__trace_gen__HeadVar__1_1;
#line 97 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastY_16 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;

#line 97 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_15 == ll_backend__trace_gen__CastY_16);
#line 97 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 97 "trace_gen.m"
      ll_backend__trace_gen__succeeded = MR_TRUE;
#line 97 "trace_gen.m"
    else
#line 97 "trace_gen.m"
      {
#line 97 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_18_18;
#line 97 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_19_19;
#line 97 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_20_20;
#line 97 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_21_21;
#line 97 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_22_22;
#line 97 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 97 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 97 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 97 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 3)));
#line 97 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 4)));
#line 97 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 5)));
#line 97 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 97 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 97 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 97 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 3)));
#line 97 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 4)));
#line 97 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 5)));

#line 2497 "ll_backend.trace_gen.c"
        {
#line 2499 "ll_backend.trace_gen.c"
          ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[11], ((MR_Box) (ll_backend__trace_gen__V_3_3)), ((MR_Box) (ll_backend__trace_gen__V_9_9)));
        }
#line 97 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 97 "trace_gen.m"
          {
#line 2506 "ll_backend.trace_gen.c"
            ll_backend__trace_gen__TypeInfo_18_18 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[11];
#line 2508 "ll_backend.trace_gen.c"
            {
#line 2510 "ll_backend.trace_gen.c"
              ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_18_18, ((MR_Box) (ll_backend__trace_gen__V_4_4)), ((MR_Box) (ll_backend__trace_gen__V_10_10)));
            }
#line 97 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 97 "trace_gen.m"
              {
#line 2517 "ll_backend.trace_gen.c"
                ll_backend__trace_gen__TypeInfo_19_19 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[11];
#line 2519 "ll_backend.trace_gen.c"
                {
#line 2521 "ll_backend.trace_gen.c"
                  ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_19_19, ((MR_Box) (ll_backend__trace_gen__V_5_5)), ((MR_Box) (ll_backend__trace_gen__V_11_11)));
                }
#line 97 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 97 "trace_gen.m"
                  {
#line 2528 "ll_backend.trace_gen.c"
                    ll_backend__trace_gen__TypeInfo_20_20 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[11];
#line 2530 "ll_backend.trace_gen.c"
                    {
#line 2532 "ll_backend.trace_gen.c"
                      ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_20_20, ((MR_Box) (ll_backend__trace_gen__V_6_6)), ((MR_Box) (ll_backend__trace_gen__V_12_12)));
                    }
#line 97 "trace_gen.m"
                    if (ll_backend__trace_gen__succeeded)
#line 97 "trace_gen.m"
                      {
#line 2539 "ll_backend.trace_gen.c"
                        ll_backend__trace_gen__TypeInfo_21_21 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[11];
#line 2541 "ll_backend.trace_gen.c"
                        {
#line 2543 "ll_backend.trace_gen.c"
                          ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_21_21, ((MR_Box) (ll_backend__trace_gen__V_7_7)), ((MR_Box) (ll_backend__trace_gen__V_13_13)));
                        }
#line 97 "trace_gen.m"
                        if (ll_backend__trace_gen__succeeded)
#line 97 "trace_gen.m"
                          {
#line 2550 "ll_backend.trace_gen.c"
                            ll_backend__trace_gen__TypeInfo_22_22 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[11];
#line 2552 "ll_backend.trace_gen.c"
                            {
#line 2554 "ll_backend.trace_gen.c"
                              ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_22_22, ((MR_Box) (ll_backend__trace_gen__V_8_8)), ((MR_Box) (ll_backend__trace_gen__V_14_14)));
                            }
#line 97 "trace_gen.m"
                          }
#line 97 "trace_gen.m"
                      }
#line 97 "trace_gen.m"
                  }
#line 97 "trace_gen.m"
              }
#line 97 "trace_gen.m"
          }
#line 97 "trace_gen.m"
      }
#line 97 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 97 "trace_gen.m"
  }
#line 97 "trace_gen.m"
}

#line 268 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen____Compare____trace_port_info_0_0(
#line 268 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
#line 268 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 268 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3)
#line 268 "trace_gen.m"
{
#line 268 "trace_gen.m"
  {
#line 268 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 268 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastX_66 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;
#line 268 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastY_67 = (MR_Integer) ll_backend__trace_gen__HeadVar__3_3;

#line 268 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_66 == ll_backend__trace_gen__CastY_67);
#line 268 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 2600 "ll_backend.trace_gen.c"
      *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 268 "trace_gen.m"
    else
#line 268 "trace_gen.m"
#line 268 "trace_gen.m"
      switch (MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__2_2)) {
#line 268 "trace_gen.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 268 "trace_gen.m"
        case (MR_Integer) 0:
#line 268 "trace_gen.m"
#line 268 "trace_gen.m"
          switch (MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) {
#line 268 "trace_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 268 "trace_gen.m"
            case (MR_Integer) 0:
#line 268 "trace_gen.m"
              *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 268 "trace_gen.m"
              break;
#line 268 "trace_gen.m"
            case (MR_Integer) 1:
#line 2624 "ll_backend.trace_gen.c"
              *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 268 "trace_gen.m"
              break;
#line 268 "trace_gen.m"
            case (MR_Integer) 2:
#line 2630 "ll_backend.trace_gen.c"
              *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 268 "trace_gen.m"
              break;
#line 268 "trace_gen.m"
            case (MR_Integer) 3:
#line 268 "trace_gen.m"
#line 268 "trace_gen.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)))) {
#line 268 "trace_gen.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 268 "trace_gen.m"
                case (MR_Integer) 0:
#line 2643 "ll_backend.trace_gen.c"
                  *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 268 "trace_gen.m"
                  break;
#line 268 "trace_gen.m"
                case (MR_Integer) 1:
#line 2649 "ll_backend.trace_gen.c"
                  *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 268 "trace_gen.m"
                  break;
#line 268 "trace_gen.m"
              }
#line 268 "trace_gen.m"
              break;
#line 268 "trace_gen.m"
          }
#line 268 "trace_gen.m"
          break;
#line 268 "trace_gen.m"
        case (MR_Integer) 1:
#line 268 "trace_gen.m"
          {
#line 268 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 268 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));

#line 268 "trace_gen.m"
#line 268 "trace_gen.m"
            switch (MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) {
#line 268 "trace_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 268 "trace_gen.m"
              case (MR_Integer) 0:
#line 2677 "ll_backend.trace_gen.c"
                *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 268 "trace_gen.m"
                break;
#line 268 "trace_gen.m"
              case (MR_Integer) 1:
#line 268 "trace_gen.m"
                {
#line 268 "trace_gen.m"
                  MR_Word ll_backend__trace_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 268 "trace_gen.m"
                  MR_Word ll_backend__trace_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 268 "trace_gen.m"
                  MR_Word ll_backend__trace_gen__V_16_16;

#line 268 "trace_gen.m"
                  {
#line 268 "trace_gen.m"
                    mdbcomp__goal_path____Compare____forward_goal_path_0_0(&ll_backend__trace_gen__V_16_16, ll_backend__trace_gen__V_78_78, ll_backend__trace_gen__V_14_14);
                  }
#line 2697 "ll_backend.trace_gen.c"
                  ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_16_16 == (MR_Integer) 0);
#line 268 "trace_gen.m"
                  ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 268 "trace_gen.m"
                  if (ll_backend__trace_gen__succeeded)
#line 268 "trace_gen.m"
                    *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_16_16;
#line 268 "trace_gen.m"
                  else
#line 268 "trace_gen.m"
                    {
#line 268 "trace_gen.m"
                      {
#line 268 "trace_gen.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[10], ll_backend__trace_gen__HeadVar__1_1, ((MR_Box) (ll_backend__trace_gen__V_77_77)), ((MR_Box) (ll_backend__trace_gen__V_15_15)));
                      }
#line 268 "trace_gen.m"
                    }
#line 268 "trace_gen.m"
                }
#line 268 "trace_gen.m"
                break;
#line 268 "trace_gen.m"
              case (MR_Integer) 2:
#line 2722 "ll_backend.trace_gen.c"
                *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 268 "trace_gen.m"
                break;
#line 268 "trace_gen.m"
              case (MR_Integer) 3:
#line 268 "trace_gen.m"
#line 268 "trace_gen.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)))) {
#line 268 "trace_gen.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 268 "trace_gen.m"
                  case (MR_Integer) 0:
#line 2735 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 268 "trace_gen.m"
                    break;
#line 268 "trace_gen.m"
                  case (MR_Integer) 1:
#line 2741 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 268 "trace_gen.m"
                    break;
#line 268 "trace_gen.m"
                }
#line 268 "trace_gen.m"
                break;
#line 268 "trace_gen.m"
            }
#line 268 "trace_gen.m"
          }
#line 268 "trace_gen.m"
          break;
#line 268 "trace_gen.m"
        case (MR_Integer) 2:
#line 268 "trace_gen.m"
          {
#line 268 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 268 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));

#line 268 "trace_gen.m"
#line 268 "trace_gen.m"
            switch (MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) {
#line 268 "trace_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 268 "trace_gen.m"
              case (MR_Integer) 0:
#line 2771 "ll_backend.trace_gen.c"
                *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 268 "trace_gen.m"
                break;
#line 268 "trace_gen.m"
              case (MR_Integer) 1:
#line 2777 "ll_backend.trace_gen.c"
                *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 268 "trace_gen.m"
                break;
#line 268 "trace_gen.m"
              case (MR_Integer) 2:
#line 268 "trace_gen.m"
                {
#line 268 "trace_gen.m"
                  MR_Word ll_backend__trace_gen__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 268 "trace_gen.m"
                  MR_Word ll_backend__trace_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 268 "trace_gen.m"
                  MR_Word ll_backend__trace_gen__V_37_37;

#line 268 "trace_gen.m"
                  {
#line 268 "trace_gen.m"
                    mdbcomp__goal_path____Compare____forward_goal_path_0_0(&ll_backend__trace_gen__V_37_37, ll_backend__trace_gen__V_75_75, ll_backend__trace_gen__V_35_35);
                  }
#line 2797 "ll_backend.trace_gen.c"
                  ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_37_37 == (MR_Integer) 0);
#line 268 "trace_gen.m"
                  ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 268 "trace_gen.m"
                  if (ll_backend__trace_gen__succeeded)
#line 268 "trace_gen.m"
                    *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_37_37;
#line 268 "trace_gen.m"
                  else
#line 268 "trace_gen.m"
                    {
#line 268 "trace_gen.m"
                      {
#line 268 "trace_gen.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[9], ll_backend__trace_gen__HeadVar__1_1, ((MR_Box) (ll_backend__trace_gen__V_74_74)), ((MR_Box) (ll_backend__trace_gen__V_36_36)));
                      }
#line 268 "trace_gen.m"
                    }
#line 268 "trace_gen.m"
                }
#line 268 "trace_gen.m"
                break;
#line 268 "trace_gen.m"
              case (MR_Integer) 3:
#line 268 "trace_gen.m"
#line 268 "trace_gen.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)))) {
#line 268 "trace_gen.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 268 "trace_gen.m"
                  case (MR_Integer) 0:
#line 2829 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 268 "trace_gen.m"
                    break;
#line 268 "trace_gen.m"
                  case (MR_Integer) 1:
#line 2835 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 268 "trace_gen.m"
                    break;
#line 268 "trace_gen.m"
                }
#line 268 "trace_gen.m"
                break;
#line 268 "trace_gen.m"
            }
#line 268 "trace_gen.m"
          }
#line 268 "trace_gen.m"
          break;
#line 268 "trace_gen.m"
        case (MR_Integer) 3:
#line 268 "trace_gen.m"
#line 268 "trace_gen.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)))) {
#line 268 "trace_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 268 "trace_gen.m"
            case (MR_Integer) 0:
#line 268 "trace_gen.m"
              {
#line 268 "trace_gen.m"
                MR_Word ll_backend__trace_gen__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));

#line 268 "trace_gen.m"
#line 268 "trace_gen.m"
                switch (MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) {
#line 268 "trace_gen.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 268 "trace_gen.m"
                  case (MR_Integer) 0:
#line 2870 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 268 "trace_gen.m"
                    break;
#line 268 "trace_gen.m"
                  case (MR_Integer) 1:
#line 2876 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 268 "trace_gen.m"
                    break;
#line 268 "trace_gen.m"
                  case (MR_Integer) 2:
#line 2882 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 268 "trace_gen.m"
                    break;
#line 268 "trace_gen.m"
                  case (MR_Integer) 3:
#line 268 "trace_gen.m"
#line 268 "trace_gen.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)))) {
#line 268 "trace_gen.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 268 "trace_gen.m"
                      case (MR_Integer) 0:
#line 268 "trace_gen.m"
                        {
#line 268 "trace_gen.m"
                          MR_Word ll_backend__trace_gen__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));

#line 268 "trace_gen.m"
                          {
#line 268 "trace_gen.m"
                            mdbcomp__goal_path____Compare____forward_goal_path_0_0(ll_backend__trace_gen__HeadVar__1_1, ll_backend__trace_gen__V_76_76, ll_backend__trace_gen__V_52_52);
                          }
#line 268 "trace_gen.m"
                        }
#line 268 "trace_gen.m"
                        break;
#line 268 "trace_gen.m"
                      case (MR_Integer) 1:
#line 2911 "ll_backend.trace_gen.c"
                        *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 268 "trace_gen.m"
                        break;
#line 268 "trace_gen.m"
                    }
#line 268 "trace_gen.m"
                    break;
#line 268 "trace_gen.m"
                }
#line 268 "trace_gen.m"
              }
#line 268 "trace_gen.m"
              break;
#line 268 "trace_gen.m"
            case (MR_Integer) 1:
#line 268 "trace_gen.m"
              {
#line 268 "trace_gen.m"
                MR_Word ll_backend__trace_gen__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));

#line 268 "trace_gen.m"
#line 268 "trace_gen.m"
                switch (MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) {
#line 268 "trace_gen.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 268 "trace_gen.m"
                  case (MR_Integer) 0:
#line 2939 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 268 "trace_gen.m"
                    break;
#line 268 "trace_gen.m"
                  case (MR_Integer) 1:
#line 2945 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 268 "trace_gen.m"
                    break;
#line 268 "trace_gen.m"
                  case (MR_Integer) 2:
#line 2951 "ll_backend.trace_gen.c"
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 268 "trace_gen.m"
                    break;
#line 268 "trace_gen.m"
                  case (MR_Integer) 3:
#line 268 "trace_gen.m"
#line 268 "trace_gen.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)))) {
#line 268 "trace_gen.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 268 "trace_gen.m"
                      case (MR_Integer) 0:
#line 2964 "ll_backend.trace_gen.c"
                        *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 268 "trace_gen.m"
                        break;
#line 268 "trace_gen.m"
                      case (MR_Integer) 1:
#line 268 "trace_gen.m"
                        {
#line 268 "trace_gen.m"
                          MR_Word ll_backend__trace_gen__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));

#line 268 "trace_gen.m"
                          {
#line 268 "trace_gen.m"
                            mdbcomp__goal_path____Compare____forward_goal_path_0_0(ll_backend__trace_gen__HeadVar__1_1, ll_backend__trace_gen__V_79_79, ll_backend__trace_gen__V_65_65);
                          }
#line 268 "trace_gen.m"
                        }
#line 268 "trace_gen.m"
                        break;
#line 268 "trace_gen.m"
                    }
#line 268 "trace_gen.m"
                    break;
#line 268 "trace_gen.m"
                }
#line 268 "trace_gen.m"
              }
#line 268 "trace_gen.m"
              break;
#line 268 "trace_gen.m"
          }
#line 268 "trace_gen.m"
          break;
#line 268 "trace_gen.m"
      }
#line 268 "trace_gen.m"
  }
#line 268 "trace_gen.m"
}

#line 268 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_port_info_0_0(
#line 268 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 268 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2)
#line 268 "trace_gen.m"
{
#line 268 "trace_gen.m"
  {
#line 268 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 268 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastX_17 = (MR_Integer) ll_backend__trace_gen__HeadVar__1_1;
#line 268 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastY_18 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;

#line 268 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_17 == ll_backend__trace_gen__CastY_18);
#line 268 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 268 "trace_gen.m"
      ll_backend__trace_gen__succeeded = MR_TRUE;
#line 268 "trace_gen.m"
    else
#line 268 "trace_gen.m"
#line 268 "trace_gen.m"
      switch (MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__1_1)) {
#line 268 "trace_gen.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 268 "trace_gen.m"
        case (MR_Integer) 0:
#line 268 "trace_gen.m"
          {
#line 268 "trace_gen.m"
            MR_Integer ll_backend__trace_gen__CastX_3 = (MR_Integer) ll_backend__trace_gen__HeadVar__1_1;
#line 268 "trace_gen.m"
            MR_Integer ll_backend__trace_gen__CastY_4 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;

#line 268 "trace_gen.m"
            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastY_4 == ll_backend__trace_gen__CastX_3);
#line 268 "trace_gen.m"
          }
#line 268 "trace_gen.m"
          break;
#line 268 "trace_gen.m"
        case (MR_Integer) 1:
#line 268 "trace_gen.m"
          {
#line 268 "trace_gen.m"
            MR_Word ll_backend__trace_gen__TypeInfo_23_23;
#line 268 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 268 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 268 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_7_7;
#line 268 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_8_8;

#line 268 "trace_gen.m"
            ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 268 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 268 "trace_gen.m"
              {
#line 268 "trace_gen.m"
                ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 268 "trace_gen.m"
                ll_backend__trace_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 3076 "ll_backend.trace_gen.c"
                {
#line 3078 "ll_backend.trace_gen.c"
                  ll_backend__trace_gen__succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(ll_backend__trace_gen__V_5_5, ll_backend__trace_gen__V_7_7);
                }
#line 268 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 268 "trace_gen.m"
                  {
#line 3085 "ll_backend.trace_gen.c"
                    ll_backend__trace_gen__TypeInfo_23_23 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[10];
#line 3087 "ll_backend.trace_gen.c"
                    {
#line 3089 "ll_backend.trace_gen.c"
                      ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_23_23, ((MR_Box) (ll_backend__trace_gen__V_6_6)), ((MR_Box) (ll_backend__trace_gen__V_8_8)));
                    }
#line 268 "trace_gen.m"
                  }
#line 268 "trace_gen.m"
              }
#line 268 "trace_gen.m"
          }
#line 268 "trace_gen.m"
          break;
#line 268 "trace_gen.m"
        case (MR_Integer) 2:
#line 268 "trace_gen.m"
          {
#line 268 "trace_gen.m"
            MR_Word ll_backend__trace_gen__TypeInfo_20_20;
#line 268 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 268 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 268 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_11_11;
#line 268 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_12_12;

#line 268 "trace_gen.m"
            ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 268 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 268 "trace_gen.m"
              {
#line 268 "trace_gen.m"
                ll_backend__trace_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 268 "trace_gen.m"
                ll_backend__trace_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 3125 "ll_backend.trace_gen.c"
                {
#line 3127 "ll_backend.trace_gen.c"
                  ll_backend__trace_gen__succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(ll_backend__trace_gen__V_9_9, ll_backend__trace_gen__V_11_11);
                }
#line 268 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 268 "trace_gen.m"
                  {
#line 3134 "ll_backend.trace_gen.c"
                    ll_backend__trace_gen__TypeInfo_20_20 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[9];
#line 3136 "ll_backend.trace_gen.c"
                    {
#line 3138 "ll_backend.trace_gen.c"
                      ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_20_20, ((MR_Box) (ll_backend__trace_gen__V_10_10)), ((MR_Box) (ll_backend__trace_gen__V_12_12)));
                    }
#line 268 "trace_gen.m"
                  }
#line 268 "trace_gen.m"
              }
#line 268 "trace_gen.m"
          }
#line 268 "trace_gen.m"
          break;
#line 268 "trace_gen.m"
        case (MR_Integer) 3:
#line 268 "trace_gen.m"
#line 268 "trace_gen.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)))) {
#line 268 "trace_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 268 "trace_gen.m"
            case (MR_Integer) 0:
#line 268 "trace_gen.m"
              {
#line 268 "trace_gen.m"
                MR_Word ll_backend__trace_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 268 "trace_gen.m"
                MR_Word ll_backend__trace_gen__V_14_14;

#line 268 "trace_gen.m"
                ll_backend__trace_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 268 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 268 "trace_gen.m"
                  {
#line 268 "trace_gen.m"
                    ll_backend__trace_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 3173 "ll_backend.trace_gen.c"
                    {
#line 3175 "ll_backend.trace_gen.c"
                      ll_backend__trace_gen__succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(ll_backend__trace_gen__V_13_13, ll_backend__trace_gen__V_14_14);
                    }
#line 268 "trace_gen.m"
                  }
#line 268 "trace_gen.m"
              }
#line 268 "trace_gen.m"
              break;
#line 268 "trace_gen.m"
            case (MR_Integer) 1:
#line 268 "trace_gen.m"
              {
#line 268 "trace_gen.m"
                MR_Word ll_backend__trace_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 268 "trace_gen.m"
                MR_Word ll_backend__trace_gen__V_16_16;

#line 268 "trace_gen.m"
                ll_backend__trace_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 268 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 268 "trace_gen.m"
                  {
#line 268 "trace_gen.m"
                    ll_backend__trace_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 3201 "ll_backend.trace_gen.c"
                    {
#line 3203 "ll_backend.trace_gen.c"
                      ll_backend__trace_gen__succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(ll_backend__trace_gen__V_15_15, ll_backend__trace_gen__V_16_16);
                    }
#line 268 "trace_gen.m"
                  }
#line 268 "trace_gen.m"
              }
#line 268 "trace_gen.m"
              break;
#line 268 "trace_gen.m"
          }
#line 268 "trace_gen.m"
          break;
#line 268 "trace_gen.m"
      }
#line 268 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 268 "trace_gen.m"
  }
#line 268 "trace_gen.m"
}

#line 1357 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen____Compare____trace_info_0_0(
#line 1357 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
#line 1357 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 1357 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3)
#line 1357 "trace_gen.m"
{
#line 1357 "trace_gen.m"
  {
#line 1357 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 1357 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastX_30 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;
#line 1357 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastY_31 = (MR_Integer) ll_backend__trace_gen__HeadVar__3_3;

#line 1357 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_30 == ll_backend__trace_gen__CastY_31);
#line 1357 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 3249 "ll_backend.trace_gen.c"
      *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 1357 "trace_gen.m"
    else
#line 1357 "trace_gen.m"
      {
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 3)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 4)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 5)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 6)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 7)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 8)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 2)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 3)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 4)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 5)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 6)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 7)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 8)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_22_22;

#line 1357 "trace_gen.m"
        {
#line 1357 "trace_gen.m"
          libs__trace_params____Compare____trace_level_0_0(&ll_backend__trace_gen__V_22_22, ll_backend__trace_gen__V_4_4, ll_backend__trace_gen__V_13_13);
        }
#line 3299 "ll_backend.trace_gen.c"
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_22_22 == (MR_Integer) 0);
#line 1357 "trace_gen.m"
        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1357 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 1357 "trace_gen.m"
          *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_22_22;
#line 1357 "trace_gen.m"
        else
#line 1357 "trace_gen.m"
          {
#line 1357 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_23_23;

#line 1357 "trace_gen.m"
            {
#line 1357 "trace_gen.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[6], &ll_backend__trace_gen__V_23_23, ((MR_Box) (ll_backend__trace_gen__V_5_5)), ((MR_Box) (ll_backend__trace_gen__V_14_14)));
            }
#line 3319 "ll_backend.trace_gen.c"
            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_23_23 == (MR_Integer) 0);
#line 1357 "trace_gen.m"
            ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1357 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 1357 "trace_gen.m"
              *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_23_23;
#line 1357 "trace_gen.m"
            else
#line 1357 "trace_gen.m"
              {
#line 1357 "trace_gen.m"
                MR_Word ll_backend__trace_gen__V_24_24;

#line 1357 "trace_gen.m"
                {
#line 1357 "trace_gen.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[1], &ll_backend__trace_gen__V_24_24, ((MR_Box) (ll_backend__trace_gen__V_6_6)), ((MR_Box) (ll_backend__trace_gen__V_15_15)));
                }
#line 3339 "ll_backend.trace_gen.c"
                ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_24_24 == (MR_Integer) 0);
#line 1357 "trace_gen.m"
                ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1357 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 1357 "trace_gen.m"
                  *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_24_24;
#line 1357 "trace_gen.m"
                else
#line 1357 "trace_gen.m"
                  {
#line 1357 "trace_gen.m"
                    MR_Word ll_backend__trace_gen__V_25_25;

#line 1357 "trace_gen.m"
                    {
#line 1357 "trace_gen.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[1], &ll_backend__trace_gen__V_25_25, ((MR_Box) (ll_backend__trace_gen__V_7_7)), ((MR_Box) (ll_backend__trace_gen__V_16_16)));
                    }
#line 3359 "ll_backend.trace_gen.c"
                    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_25_25 == (MR_Integer) 0);
#line 1357 "trace_gen.m"
                    ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1357 "trace_gen.m"
                    if (ll_backend__trace_gen__succeeded)
#line 1357 "trace_gen.m"
                      *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_25_25;
#line 1357 "trace_gen.m"
                    else
#line 1357 "trace_gen.m"
                      {
#line 1357 "trace_gen.m"
                        MR_Word ll_backend__trace_gen__V_26_26;

#line 1357 "trace_gen.m"
                        {
#line 1357 "trace_gen.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[7], &ll_backend__trace_gen__V_26_26, ((MR_Box) (ll_backend__trace_gen__V_8_8)), ((MR_Box) (ll_backend__trace_gen__V_17_17)));
                        }
#line 3379 "ll_backend.trace_gen.c"
                        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_26_26 == (MR_Integer) 0);
#line 1357 "trace_gen.m"
                        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1357 "trace_gen.m"
                        if (ll_backend__trace_gen__succeeded)
#line 1357 "trace_gen.m"
                          *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_26_26;
#line 1357 "trace_gen.m"
                        else
#line 1357 "trace_gen.m"
                          {
#line 1357 "trace_gen.m"
                            MR_Word ll_backend__trace_gen__V_27_27;

#line 1357 "trace_gen.m"
                            {
#line 1357 "trace_gen.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[1], &ll_backend__trace_gen__V_27_27, ((MR_Box) (ll_backend__trace_gen__V_9_9)), ((MR_Box) (ll_backend__trace_gen__V_18_18)));
                            }
#line 3399 "ll_backend.trace_gen.c"
                            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_27_27 == (MR_Integer) 0);
#line 1357 "trace_gen.m"
                            ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1357 "trace_gen.m"
                            if (ll_backend__trace_gen__succeeded)
#line 1357 "trace_gen.m"
                              *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_27_27;
#line 1357 "trace_gen.m"
                            else
#line 1357 "trace_gen.m"
                              {
#line 1357 "trace_gen.m"
                                MR_Word ll_backend__trace_gen__V_28_28;

#line 1357 "trace_gen.m"
                                {
#line 1357 "trace_gen.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[1], &ll_backend__trace_gen__V_28_28, ((MR_Box) (ll_backend__trace_gen__V_10_10)), ((MR_Box) (ll_backend__trace_gen__V_19_19)));
                                }
#line 3419 "ll_backend.trace_gen.c"
                                ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_28_28 == (MR_Integer) 0);
#line 1357 "trace_gen.m"
                                ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1357 "trace_gen.m"
                                if (ll_backend__trace_gen__succeeded)
#line 1357 "trace_gen.m"
                                  *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_28_28;
#line 1357 "trace_gen.m"
                                else
#line 1357 "trace_gen.m"
                                  {
#line 1357 "trace_gen.m"
                                    MR_Word ll_backend__trace_gen__V_29_29;

#line 1357 "trace_gen.m"
                                    {
#line 1357 "trace_gen.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[8], &ll_backend__trace_gen__V_29_29, ((MR_Box) (ll_backend__trace_gen__V_11_11)), ((MR_Box) (ll_backend__trace_gen__V_20_20)));
                                    }
#line 3439 "ll_backend.trace_gen.c"
                                    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_29_29 == (MR_Integer) 0);
#line 1357 "trace_gen.m"
                                    ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1357 "trace_gen.m"
                                    if (ll_backend__trace_gen__succeeded)
#line 1357 "trace_gen.m"
                                      *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_29_29;
#line 1357 "trace_gen.m"
                                    else
#line 1357 "trace_gen.m"
                                      {
#line 1357 "trace_gen.m"
                                        {
#line 1357 "trace_gen.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[0], ll_backend__trace_gen__HeadVar__1_1, ((MR_Box) (ll_backend__trace_gen__V_12_12)), ((MR_Box) (ll_backend__trace_gen__V_21_21)));
                                        }
#line 1357 "trace_gen.m"
                                      }
#line 1357 "trace_gen.m"
                                  }
#line 1357 "trace_gen.m"
                              }
#line 1357 "trace_gen.m"
                          }
#line 1357 "trace_gen.m"
                      }
#line 1357 "trace_gen.m"
                  }
#line 1357 "trace_gen.m"
              }
#line 1357 "trace_gen.m"
          }
#line 1357 "trace_gen.m"
      }
#line 1357 "trace_gen.m"
  }
#line 1357 "trace_gen.m"
}

#line 1357 "trace_gen.m"
MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_info_0_0(
#line 1357 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 1357 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2)
#line 1357 "trace_gen.m"
{
#line 1357 "trace_gen.m"
  {
#line 1357 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 1357 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastX_21 = (MR_Integer) ll_backend__trace_gen__HeadVar__1_1;
#line 1357 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastY_22 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;

#line 1357 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_21 == ll_backend__trace_gen__CastY_22);
#line 1357 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 1357 "trace_gen.m"
      ll_backend__trace_gen__succeeded = MR_TRUE;
#line 1357 "trace_gen.m"
    else
#line 1357 "trace_gen.m"
      {
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_24_24;
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_25_25;
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_26_26;
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_27_27;
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_28_28;
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_29_29;
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_30_30;
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_31_31;
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 3)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 4)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 5)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 6)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 7)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 8)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 3)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 4)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 5)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 6)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 7)));
#line 1357 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 8)));

#line 3560 "ll_backend.trace_gen.c"
        {
#line 3562 "ll_backend.trace_gen.c"
          ll_backend__trace_gen__succeeded = libs__trace_params____Unify____trace_level_0_0(ll_backend__trace_gen__V_3_3, ll_backend__trace_gen__V_12_12);
        }
#line 1357 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 1357 "trace_gen.m"
          {
#line 3569 "ll_backend.trace_gen.c"
            ll_backend__trace_gen__TypeInfo_24_24 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[6];
#line 3571 "ll_backend.trace_gen.c"
            {
#line 3573 "ll_backend.trace_gen.c"
              ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_24_24, ((MR_Box) (ll_backend__trace_gen__V_4_4)), ((MR_Box) (ll_backend__trace_gen__V_13_13)));
            }
#line 1357 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 1357 "trace_gen.m"
              {
#line 3580 "ll_backend.trace_gen.c"
                ll_backend__trace_gen__TypeInfo_25_25 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[1];
#line 3582 "ll_backend.trace_gen.c"
                {
#line 3584 "ll_backend.trace_gen.c"
                  ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_25_25, ((MR_Box) (ll_backend__trace_gen__V_5_5)), ((MR_Box) (ll_backend__trace_gen__V_14_14)));
                }
#line 1357 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 1357 "trace_gen.m"
                  {
#line 3591 "ll_backend.trace_gen.c"
                    ll_backend__trace_gen__TypeInfo_26_26 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[1];
#line 3593 "ll_backend.trace_gen.c"
                    {
#line 3595 "ll_backend.trace_gen.c"
                      ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_26_26, ((MR_Box) (ll_backend__trace_gen__V_6_6)), ((MR_Box) (ll_backend__trace_gen__V_15_15)));
                    }
#line 1357 "trace_gen.m"
                    if (ll_backend__trace_gen__succeeded)
#line 1357 "trace_gen.m"
                      {
#line 3602 "ll_backend.trace_gen.c"
                        ll_backend__trace_gen__TypeInfo_27_27 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[7];
#line 3604 "ll_backend.trace_gen.c"
                        {
#line 3606 "ll_backend.trace_gen.c"
                          ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_27_27, ((MR_Box) (ll_backend__trace_gen__V_7_7)), ((MR_Box) (ll_backend__trace_gen__V_16_16)));
                        }
#line 1357 "trace_gen.m"
                        if (ll_backend__trace_gen__succeeded)
#line 1357 "trace_gen.m"
                          {
#line 3613 "ll_backend.trace_gen.c"
                            ll_backend__trace_gen__TypeInfo_28_28 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[1];
#line 3615 "ll_backend.trace_gen.c"
                            {
#line 3617 "ll_backend.trace_gen.c"
                              ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_28_28, ((MR_Box) (ll_backend__trace_gen__V_8_8)), ((MR_Box) (ll_backend__trace_gen__V_17_17)));
                            }
#line 1357 "trace_gen.m"
                            if (ll_backend__trace_gen__succeeded)
#line 1357 "trace_gen.m"
                              {
#line 3624 "ll_backend.trace_gen.c"
                                ll_backend__trace_gen__TypeInfo_29_29 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[1];
#line 3626 "ll_backend.trace_gen.c"
                                {
#line 3628 "ll_backend.trace_gen.c"
                                  ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_29_29, ((MR_Box) (ll_backend__trace_gen__V_9_9)), ((MR_Box) (ll_backend__trace_gen__V_18_18)));
                                }
#line 1357 "trace_gen.m"
                                if (ll_backend__trace_gen__succeeded)
#line 1357 "trace_gen.m"
                                  {
#line 3635 "ll_backend.trace_gen.c"
                                    ll_backend__trace_gen__TypeInfo_30_30 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[8];
#line 3637 "ll_backend.trace_gen.c"
                                    {
#line 3639 "ll_backend.trace_gen.c"
                                      ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_30_30, ((MR_Box) (ll_backend__trace_gen__V_10_10)), ((MR_Box) (ll_backend__trace_gen__V_19_19)));
                                    }
#line 1357 "trace_gen.m"
                                    if (ll_backend__trace_gen__succeeded)
#line 1357 "trace_gen.m"
                                      {
#line 3646 "ll_backend.trace_gen.c"
                                        ll_backend__trace_gen__TypeInfo_31_31 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[0];
#line 3648 "ll_backend.trace_gen.c"
                                        {
#line 3650 "ll_backend.trace_gen.c"
                                          ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_31_31, ((MR_Box) (ll_backend__trace_gen__V_11_11)), ((MR_Box) (ll_backend__trace_gen__V_20_20)));
                                        }
#line 1357 "trace_gen.m"
                                      }
#line 1357 "trace_gen.m"
                                  }
#line 1357 "trace_gen.m"
                              }
#line 1357 "trace_gen.m"
                          }
#line 1357 "trace_gen.m"
                      }
#line 1357 "trace_gen.m"
                  }
#line 1357 "trace_gen.m"
              }
#line 1357 "trace_gen.m"
          }
#line 1357 "trace_gen.m"
      }
#line 1357 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 1357 "trace_gen.m"
  }
#line 1357 "trace_gen.m"
}

#line 88 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen____Compare____negation_end_port_0_0(
#line 88 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
#line 88 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 88 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3)
#line 88 "trace_gen.m"
{
#line 88 "trace_gen.m"
  {
#line 88 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 88 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__Cast_HeadVar1_4 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;
#line 88 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__Cast_HeadVar2_5 = (MR_Integer) ll_backend__trace_gen__HeadVar__3_3;

#line 88 "trace_gen.m"
    {
#line 88 "trace_gen.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__trace_gen__HeadVar__1_1, ll_backend__trace_gen__Cast_HeadVar1_4, ll_backend__trace_gen__Cast_HeadVar2_5);
    }
#line 88 "trace_gen.m"
  }
#line 88 "trace_gen.m"
}

#line 88 "trace_gen.m"
MR_bool MR_CALL 
ll_backend__trace_gen____Unify____negation_end_port_0_0(
#line 88 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_1,
#line 88 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2)
#line 88 "trace_gen.m"
{
#line 3717 "ll_backend.trace_gen.c"
  {
#line 3719 "ll_backend.trace_gen.c"
    MR_bool ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__HeadVar__2_1 == ll_backend__trace_gen__HeadVar__2_2);

#line 3722 "ll_backend.trace_gen.c"
    return ll_backend__trace_gen__succeeded;
#line 3724 "ll_backend.trace_gen.c"
  }
#line 88 "trace_gen.m"
}

#line 78 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen____Compare____external_trace_port_0_0(
#line 78 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
#line 78 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 78 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3)
#line 78 "trace_gen.m"
{
#line 78 "trace_gen.m"
  {
#line 78 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 78 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__Cast_HeadVar1_4 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;
#line 78 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__Cast_HeadVar2_5 = (MR_Integer) ll_backend__trace_gen__HeadVar__3_3;

#line 78 "trace_gen.m"
    {
#line 78 "trace_gen.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__trace_gen__HeadVar__1_1, ll_backend__trace_gen__Cast_HeadVar1_4, ll_backend__trace_gen__Cast_HeadVar2_5);
    }
#line 78 "trace_gen.m"
  }
#line 78 "trace_gen.m"
}

#line 78 "trace_gen.m"
MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_trace_port_0_0(
#line 78 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_1,
#line 78 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2)
#line 78 "trace_gen.m"
{
#line 3768 "ll_backend.trace_gen.c"
  {
#line 3770 "ll_backend.trace_gen.c"
    MR_bool ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__HeadVar__2_1 == ll_backend__trace_gen__HeadVar__2_2);

#line 3773 "ll_backend.trace_gen.c"
    return ll_backend__trace_gen__succeeded;
#line 3775 "ll_backend.trace_gen.c"
  }
#line 78 "trace_gen.m"
}

#line 204 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen____Compare____external_event_info_0_0(
#line 204 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
#line 204 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 204 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3)
#line 204 "trace_gen.m"
{
#line 204 "trace_gen.m"
  {
#line 204 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 204 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastX_12 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;
#line 204 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastY_13 = (MR_Integer) ll_backend__trace_gen__HeadVar__3_3;

#line 204 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_12 == ll_backend__trace_gen__CastY_13);
#line 204 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 3804 "ll_backend.trace_gen.c"
      *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 204 "trace_gen.m"
    else
#line 204 "trace_gen.m"
      {
#line 204 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 204 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 204 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 204 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 204 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 2)));
#line 204 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_10_10;

#line 204 "trace_gen.m"
        {
#line 204 "trace_gen.m"
          ll_backend__llds____Compare____label_0_0(&ll_backend__trace_gen__V_10_10, ll_backend__trace_gen__V_4_4, ll_backend__trace_gen__V_7_7);
        }
#line 3830 "ll_backend.trace_gen.c"
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_10_10 == (MR_Integer) 0);
#line 204 "trace_gen.m"
        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 204 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 204 "trace_gen.m"
          *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_10_10;
#line 204 "trace_gen.m"
        else
#line 204 "trace_gen.m"
          {
#line 204 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_11_11;

#line 204 "trace_gen.m"
            {
#line 204 "trace_gen.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_2[0], &ll_backend__trace_gen__V_11_11, ((MR_Box) (ll_backend__trace_gen__V_5_5)), ((MR_Box) (ll_backend__trace_gen__V_8_8)));
            }
#line 3850 "ll_backend.trace_gen.c"
            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_11_11 == (MR_Integer) 0);
#line 204 "trace_gen.m"
            ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 204 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 204 "trace_gen.m"
              *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__V_11_11;
#line 204 "trace_gen.m"
            else
#line 204 "trace_gen.m"
              {
#line 204 "trace_gen.m"
                {
#line 204 "trace_gen.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[5], ll_backend__trace_gen__HeadVar__1_1, ((MR_Box) (ll_backend__trace_gen__V_6_6)), ((MR_Box) (ll_backend__trace_gen__V_9_9)));
                }
#line 204 "trace_gen.m"
              }
#line 204 "trace_gen.m"
          }
#line 204 "trace_gen.m"
      }
#line 204 "trace_gen.m"
  }
#line 204 "trace_gen.m"
}

#line 204 "trace_gen.m"
MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_event_info_0_0(
#line 204 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 204 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2)
#line 204 "trace_gen.m"
{
#line 204 "trace_gen.m"
  {
#line 204 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 204 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastX_9 = (MR_Integer) ll_backend__trace_gen__HeadVar__1_1;
#line 204 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__CastY_10 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;

#line 204 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_9 == ll_backend__trace_gen__CastY_10);
#line 204 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 204 "trace_gen.m"
      ll_backend__trace_gen__succeeded = MR_TRUE;
#line 204 "trace_gen.m"
    else
#line 204 "trace_gen.m"
      {
#line 204 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_12_12;
#line 204 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TypeInfo_13_13;
#line 204 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 204 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 204 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 204 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 204 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 2)));

#line 3923 "ll_backend.trace_gen.c"
        {
#line 3925 "ll_backend.trace_gen.c"
          ll_backend__trace_gen__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__trace_gen__V_3_3, ll_backend__trace_gen__V_6_6);
        }
#line 204 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 204 "trace_gen.m"
          {
#line 3932 "ll_backend.trace_gen.c"
            ll_backend__trace_gen__TypeInfo_12_12 = (MR_Word) &ll_backend__trace_gen_scalar_common_2[0];
#line 3934 "ll_backend.trace_gen.c"
            {
#line 3936 "ll_backend.trace_gen.c"
              ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_12_12, ((MR_Box) (ll_backend__trace_gen__V_4_4)), ((MR_Box) (ll_backend__trace_gen__V_7_7)));
            }
#line 204 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 204 "trace_gen.m"
              {
#line 3943 "ll_backend.trace_gen.c"
                ll_backend__trace_gen__TypeInfo_13_13 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[5];
#line 3945 "ll_backend.trace_gen.c"
                {
#line 3947 "ll_backend.trace_gen.c"
                  ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_13_13, ((MR_Box) (ll_backend__trace_gen__V_5_5)), ((MR_Box) (ll_backend__trace_gen__V_8_8)));
                }
#line 204 "trace_gen.m"
              }
#line 204 "trace_gen.m"
          }
#line 204 "trace_gen.m"
      }
#line 204 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 204 "trace_gen.m"
  }
#line 204 "trace_gen.m"
}

#line 1306 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__redo_layout_slot_2_p_0(
#line 1306 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CodeModel_3,
#line 1306 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__RedoLayoutSlot_4)
#line 1306 "trace_gen.m"
{
#line 1343 "trace_gen.m"
  {
#line 1343 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1343 "trace_gen.m"
#line 1343 "trace_gen.m"
    switch (ll_backend__trace_gen__CodeModel_3) {
#line 1343 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1343 "trace_gen.m"
      case (MR_Integer) 0:
#line 1343 "trace_gen.m"
      case (MR_Integer) 1:
#line 1348 "trace_gen.m"
        {
#line 1349 "trace_gen.m"
          {
#line 1349 "trace_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.redo_layout_slot\'/2", (MR_String) "attempt to access redo layout slot for det or semi procedure");
#line 1349 "trace_gen.m"
            return;
          }
#line 1348 "trace_gen.m"
        }
#line 1343 "trace_gen.m"
        break;
#line 1343 "trace_gen.m"
      case (MR_Integer) 2:
#line 1343 "trace_gen.m"
        {
#line 1344 "trace_gen.m"
          *ll_backend__trace_gen__RedoLayoutSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[22]);
#line 1343 "trace_gen.m"
        }
#line 1343 "trace_gen.m"
        break;
#line 1343 "trace_gen.m"
    }
#line 1343 "trace_gen.m"
  }
#line 1306 "trace_gen.m"
}

#line 1305 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__call_depth_slot_2_p_0(
#line 1305 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CodeModel_3,
#line 1305 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__CallDepthSlot_4)
#line 1305 "trace_gen.m"
{
#line 1332 "trace_gen.m"
  {
#line 1332 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1332 "trace_gen.m"
#line 1332 "trace_gen.m"
    switch (ll_backend__trace_gen__CodeModel_3) {
#line 1332 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1332 "trace_gen.m"
      case (MR_Integer) 0:
#line 1332 "trace_gen.m"
      case (MR_Integer) 1:
#line 1337 "trace_gen.m"
        {
#line 1338 "trace_gen.m"
          *ll_backend__trace_gen__CallDepthSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[14]);
#line 1337 "trace_gen.m"
        }
#line 1332 "trace_gen.m"
        break;
#line 1332 "trace_gen.m"
      case (MR_Integer) 2:
#line 1332 "trace_gen.m"
        {
#line 1333 "trace_gen.m"
          *ll_backend__trace_gen__CallDepthSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[15]);
#line 1332 "trace_gen.m"
        }
#line 1332 "trace_gen.m"
        break;
#line 1332 "trace_gen.m"
    }
#line 1332 "trace_gen.m"
  }
#line 1305 "trace_gen.m"
}

#line 1304 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__call_num_slot_2_p_0(
#line 1304 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CodeModel_3,
#line 1304 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__CallNumSlot_4)
#line 1304 "trace_gen.m"
{
#line 1321 "trace_gen.m"
  {
#line 1321 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1321 "trace_gen.m"
#line 1321 "trace_gen.m"
    switch (ll_backend__trace_gen__CodeModel_3) {
#line 1321 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1321 "trace_gen.m"
      case (MR_Integer) 0:
#line 1321 "trace_gen.m"
      case (MR_Integer) 1:
#line 1326 "trace_gen.m"
        {
#line 1327 "trace_gen.m"
          *ll_backend__trace_gen__CallNumSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[20]);
#line 1326 "trace_gen.m"
        }
#line 1321 "trace_gen.m"
        break;
#line 1321 "trace_gen.m"
      case (MR_Integer) 2:
#line 1321 "trace_gen.m"
        {
#line 1322 "trace_gen.m"
          *ll_backend__trace_gen__CallNumSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[21]);
#line 1321 "trace_gen.m"
        }
#line 1321 "trace_gen.m"
        break;
#line 1321 "trace_gen.m"
    }
#line 1321 "trace_gen.m"
  }
#line 1304 "trace_gen.m"
}

#line 1303 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__event_num_slot_2_p_0(
#line 1303 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CodeModel_3,
#line 1303 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__EventNumSlot_4)
#line 1303 "trace_gen.m"
{
#line 1310 "trace_gen.m"
  {
#line 1310 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1310 "trace_gen.m"
#line 1310 "trace_gen.m"
    switch (ll_backend__trace_gen__CodeModel_3) {
#line 1310 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1310 "trace_gen.m"
      case (MR_Integer) 0:
#line 1310 "trace_gen.m"
      case (MR_Integer) 1:
#line 1315 "trace_gen.m"
        {
#line 1316 "trace_gen.m"
          *ll_backend__trace_gen__EventNumSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[18]);
#line 1315 "trace_gen.m"
        }
#line 1310 "trace_gen.m"
        break;
#line 1310 "trace_gen.m"
      case (MR_Integer) 2:
#line 1310 "trace_gen.m"
        {
#line 1311 "trace_gen.m"
          *ll_backend__trace_gen__EventNumSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[19]);
#line 1310 "trace_gen.m"
        }
#line 1310 "trace_gen.m"
        break;
#line 1310 "trace_gen.m"
    }
#line 1310 "trace_gen.m"
  }
#line 1303 "trace_gen.m"
}

#line 1276 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__stackref_to_string_2_p_0(
#line 1276 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Lval_3,
#line 1276 "trace_gen.m"
  MR_String * ll_backend__trace_gen__LvalStr_4)
#line 1276 "trace_gen.m"
{
#line 1282 "trace_gen.m"
  {
#line 1282 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__trace_gen__Lval_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1282 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__Slot_5;

#line 1279 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 1279 "trace_gen.m"
      {
#line 1279 "trace_gen.m"
        ll_backend__trace_gen__Slot_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 1)));
#line 1280 "trace_gen.m"
        {
#line 1280 "trace_gen.m"
          MR_String ll_backend__trace_gen__SlotString_6;
#line 1280 "trace_gen.m"
          MR_String ll_backend__trace_gen__V_10_10;

#line 1280 "trace_gen.m"
          {
#line 1280 "trace_gen.m"
            mercury__string__int_to_string_2_p_0(ll_backend__trace_gen__Slot_5, &ll_backend__trace_gen__SlotString_6);
          }
#line 1281 "trace_gen.m"
          {
#line 1281 "trace_gen.m"
            ll_backend__trace_gen__V_10_10 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__SlotString_6, (MR_String) ")");
          }
#line 1281 "trace_gen.m"
          {
#line 1281 "trace_gen.m"
            *ll_backend__trace_gen__LvalStr_4 = mercury__string__f_43_43_2_f_0((MR_String) "MR_sv(", ll_backend__trace_gen__V_10_10);
          }
#line 1280 "trace_gen.m"
        }
#line 1279 "trace_gen.m"
      }
#line 1279 "trace_gen.m"
    else
#line 1285 "trace_gen.m"
      {
#line 1285 "trace_gen.m"
        MR_Integer ll_backend__trace_gen__Slot_22;

#line 1282 "trace_gen.m"
        ll_backend__trace_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__trace_gen__Lval_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1282 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 1282 "trace_gen.m"
          {
#line 1282 "trace_gen.m"
            ll_backend__trace_gen__Slot_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 1)));
#line 1283 "trace_gen.m"
            {
#line 1283 "trace_gen.m"
              MR_String ll_backend__trace_gen__V_13_13;
#line 1283 "trace_gen.m"
              MR_String ll_backend__trace_gen__SlotString_21;

#line 1283 "trace_gen.m"
              {
#line 1283 "trace_gen.m"
                mercury__string__int_to_string_2_p_0(ll_backend__trace_gen__Slot_22, &ll_backend__trace_gen__SlotString_21);
              }
#line 1284 "trace_gen.m"
              {
#line 1284 "trace_gen.m"
                ll_backend__trace_gen__V_13_13 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__SlotString_21, (MR_String) ")");
              }
#line 1284 "trace_gen.m"
              {
#line 1284 "trace_gen.m"
                *ll_backend__trace_gen__LvalStr_4 = mercury__string__f_43_43_2_f_0((MR_String) "MR_fv(", ll_backend__trace_gen__V_13_13);
              }
#line 1283 "trace_gen.m"
            }
#line 1282 "trace_gen.m"
          }
#line 1282 "trace_gen.m"
        else
#line 1288 "trace_gen.m"
          {
#line 1285 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_7_7;
#line 1285 "trace_gen.m"
            MR_Integer ll_backend__trace_gen__V_8_8;

#line 1285 "trace_gen.m"
            ll_backend__trace_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__trace_gen__Lval_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1285 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 1285 "trace_gen.m"
              {
#line 1285 "trace_gen.m"
                ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 1)));
#line 1285 "trace_gen.m"
                ll_backend__trace_gen__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 2)));
#line 1287 "trace_gen.m"
                {
#line 1287 "trace_gen.m"
                  mercury__require__sorry_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.stackref_to_string\'/2", (MR_String) "double-width stack slot");
#line 1287 "trace_gen.m"
                  return;
                }
#line 1285 "trace_gen.m"
              }
#line 1285 "trace_gen.m"
            else
#line 1289 "trace_gen.m"
              {
#line 1289 "trace_gen.m"
                {
#line 1289 "trace_gen.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.stackref_to_string\'/2", (MR_String) "non-stack lval");
#line 1289 "trace_gen.m"
                  return;
                }
#line 1289 "trace_gen.m"
              }
#line 1288 "trace_gen.m"
          }
#line 1285 "trace_gen.m"
      }
#line 1282 "trace_gen.m"
  }
#line 1276 "trace_gen.m"
}

#line 1254 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__build_fail_vars_6_p_0(
#line 1254 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 1254 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
#line 1254 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__3_3,
#line 1254 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ModuleInfo_4,
#line 1254 "trace_gen.m"
  MR_Word ll_backend__trace_gen__VarTypes_5,
#line 1254 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__6_6)
#line 1254 "trace_gen.m"
{
#line 1258 "trace_gen.m"
  {
#line 1258 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;

#line 1258 "trace_gen.m"
    if ((ll_backend__trace_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1258 "trace_gen.m"
      {
#line 1258 "trace_gen.m"
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1258 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 1258 "trace_gen.m"
          {
#line 1258 "trace_gen.m"
            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1258 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 1258 "trace_gen.m"
              {
#line 1258 "trace_gen.m"
                *ll_backend__trace_gen__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1258 "trace_gen.m"
                ll_backend__trace_gen__succeeded = MR_TRUE;
#line 1258 "trace_gen.m"
              }
#line 1258 "trace_gen.m"
          }
#line 1258 "trace_gen.m"
      }
#line 1258 "trace_gen.m"
    else
#line 1260 "trace_gen.m"
      {
#line 1260 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1260 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1260 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Inst_11;
#line 1260 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Insts_12;
#line 1260 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Info_13;
#line 1260 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Infos_14;
#line 1260 "trace_gen.m"
        MR_Word ll_backend__trace_gen__FailVars0_18;
#line 1260 "trace_gen.m"
        MR_Word ll_backend__trace_gen__ArgMode_20;
#line 1262 "trace_gen.m"
        MR_Word ll_backend__trace_gen___Loc_19;
#line 1264 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Type_21;
#line 1264 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_22_22;

#line 1259 "trace_gen.m"
        ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1259 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 1259 "trace_gen.m"
          {
#line 1259 "trace_gen.m"
            ll_backend__trace_gen__Inst_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 1259 "trace_gen.m"
            ll_backend__trace_gen__Insts_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 1259 "trace_gen.m"
            ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1259 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 1259 "trace_gen.m"
              {
#line 1259 "trace_gen.m"
                ll_backend__trace_gen__Info_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 1259 "trace_gen.m"
                ll_backend__trace_gen__Infos_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 1261 "trace_gen.m"
                {
#line 1261 "trace_gen.m"
                  ll_backend__trace_gen__succeeded = ll_backend__trace_gen__build_fail_vars_6_p_0(ll_backend__trace_gen__Vars_10, ll_backend__trace_gen__Insts_12, ll_backend__trace_gen__Infos_14, ll_backend__trace_gen__ModuleInfo_4, ll_backend__trace_gen__VarTypes_5, &ll_backend__trace_gen__FailVars0_18);
                }
#line 1260 "trace_gen.m"
                if (ll_backend__trace_gen__succeeded)
#line 1260 "trace_gen.m"
                  {
#line 1262 "trace_gen.m"
                    ll_backend__trace_gen___Loc_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Info_13, (MR_Integer) 0)));
#line 1262 "trace_gen.m"
                    ll_backend__trace_gen__ArgMode_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Info_13, (MR_Integer) 1)));
#line 1264 "trace_gen.m"
                    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__ArgMode_20 == (MR_Integer) 0);
#line 1264 "trace_gen.m"
                    if (ll_backend__trace_gen__succeeded)
#line 1264 "trace_gen.m"
                      {
#line 1265 "trace_gen.m"
                        {
#line 1265 "trace_gen.m"
                          ll_backend__trace_gen__succeeded = check_hlds__inst_test__inst_is_clobbered_2_p_0(ll_backend__trace_gen__ModuleInfo_4, ll_backend__trace_gen__Inst_11);
                        }
#line 1265 "trace_gen.m"
                        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 1264 "trace_gen.m"
                        if (ll_backend__trace_gen__succeeded)
#line 1264 "trace_gen.m"
                          {
#line 1266 "trace_gen.m"
                            {
#line 1266 "trace_gen.m"
                              hlds__vartypes__lookup_var_type_3_p_0(ll_backend__trace_gen__VarTypes_5, ll_backend__trace_gen__Var_9, &ll_backend__trace_gen__Type_21);
                            }
#line 1267 "trace_gen.m"
                            {
#line 1267 "trace_gen.m"
                              ll_backend__trace_gen__V_22_22 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__trace_gen__ModuleInfo_4, ll_backend__trace_gen__Type_21);
                            }
#line 1267 "trace_gen.m"
                            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_22_22 == (MR_Integer) 1);
#line 1264 "trace_gen.m"
                          }
#line 1264 "trace_gen.m"
                      }
#line 1270 "trace_gen.m"
                    if (ll_backend__trace_gen__succeeded)
#line 1269 "trace_gen.m"
                      {
#line 1269 "trace_gen.m"
                        MR_Word base;
#line 1269 "trace_gen.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1269 "trace_gen.m"
                        *ll_backend__trace_gen__HeadVar__6_6 = base;
#line 1269 "trace_gen.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__trace_gen__Var_9));
#line 1269 "trace_gen.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__trace_gen__FailVars0_18));
#line 1269 "trace_gen.m"
                      }
#line 1270 "trace_gen.m"
                    else
#line 1271 "trace_gen.m"
                      *ll_backend__trace_gen__HeadVar__6_6 = ll_backend__trace_gen__FailVars0_18;
#line 1270 "trace_gen.m"
                    ll_backend__trace_gen__succeeded = MR_TRUE;
#line 1260 "trace_gen.m"
                  }
#line 1259 "trace_gen.m"
              }
#line 1259 "trace_gen.m"
          }
#line 1260 "trace_gen.m"
      }
#line 1258 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 1258 "trace_gen.m"
  }
#line 1254 "trace_gen.m"
}

#line 1170 "trace_gen.m"
static MR_Word MR_CALL 
ll_backend__trace_gen__find_lval_in_layout_locn_1_f_0(
#line 1170 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1)
#line 1170 "trace_gen.m"
{
#line 1172 "trace_gen.m"
  {
#line 1172 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 1172 "trace_gen.m"
    MR_Word ll_backend__trace_gen__Lval_2;

#line 1172 "trace_gen.m"
    if (((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1172 "trace_gen.m"
      ll_backend__trace_gen__Lval_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1172 "trace_gen.m"
    else
#line 1173 "trace_gen.m"
      {
#line 1173 "trace_gen.m"
        MR_Integer ll_backend__trace_gen__V_5_5;

#line 1173 "trace_gen.m"
        ll_backend__trace_gen__Lval_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1173 "trace_gen.m"
        ll_backend__trace_gen__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1173 "trace_gen.m"
      }
#line 1172 "trace_gen.m"
    return ll_backend__trace_gen__Lval_2;
#line 1172 "trace_gen.m"
  }
#line 1170 "trace_gen.m"
}

#line 1165 "trace_gen.m"
static MR_Word MR_CALL 
ll_backend__trace_gen__find_lval_in_var_info_1_f_0(
#line 1165 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1)
#line 1165 "trace_gen.m"
{
#line 1167 "trace_gen.m"
  {
#line 1167 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 1167 "trace_gen.m"
    MR_Word ll_backend__trace_gen__HeadVar__2_2;
#line 1167 "trace_gen.m"
    MR_Word ll_backend__trace_gen__LayoutLocn_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1167 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1167 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 2)));

#line 1172 "trace_gen.m"
    if (((MR_tag((MR_Word) ll_backend__trace_gen__LayoutLocn_3)) == (MR_mktag((MR_Integer) 0))))
#line 1172 "trace_gen.m"
      ll_backend__trace_gen__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__LayoutLocn_3, (MR_Integer) 0)));
#line 1172 "trace_gen.m"
    else
#line 1173 "trace_gen.m"
      {
#line 1173 "trace_gen.m"
        MR_Integer ll_backend__trace_gen__V_8_8;

#line 1173 "trace_gen.m"
        ll_backend__trace_gen__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__LayoutLocn_3, (MR_Integer) 0)));
#line 1173 "trace_gen.m"
        ll_backend__trace_gen__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__LayoutLocn_3, (MR_Integer) 1)));
#line 1173 "trace_gen.m"
      }
#line 1167 "trace_gen.m"
    return ll_backend__trace_gen__HeadVar__2_2;
#line 1167 "trace_gen.m"
  }
#line 1165 "trace_gen.m"
}

#line 1149 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__find_output_vars_3_p_0(
#line 1149 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
#line 1149 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2,
#line 1149 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_OutputVars_3)
#line 1149 "trace_gen.m"
{
#line 1152 "trace_gen.m"
  while (MR_TRUE)
#line 1152 "trace_gen.m"
    {
#line 1152 "trace_gen.m"
      /* tailcall optimized into a loop */
#line 1152 "trace_gen.m"
      {
#line 1152 "trace_gen.m"
        MR_bool ll_backend__trace_gen__succeeded;

#line 1152 "trace_gen.m"
        if ((ll_backend__trace_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1152 "trace_gen.m"
          *ll_backend__trace_gen__STATE_VARIABLE_OutputVars_3 = ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2;
#line 1152 "trace_gen.m"
        else
#line 1153 "trace_gen.m"
          {
#line 1153 "trace_gen.m"
            MR_Word ll_backend__trace_gen__Arg_7;
#line 1153 "trace_gen.m"
            MR_Word ll_backend__trace_gen__Info_8;
#line 1153 "trace_gen.m"
            MR_Word ll_backend__trace_gen__ArgsInfos_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1153 "trace_gen.m"
            MR_Word ll_backend__trace_gen__Mode_12;
#line 1153 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1153 "trace_gen.m"
            MR_Word ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16;
#line 1154 "trace_gen.m"
            MR_Word ll_backend__trace_gen___ArgLoc_11;

#line 1153 "trace_gen.m"
            ll_backend__trace_gen__Arg_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_15_15, (MR_Integer) 0)));
#line 1153 "trace_gen.m"
            ll_backend__trace_gen__Info_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_15_15, (MR_Integer) 1)));
#line 1154 "trace_gen.m"
            ll_backend__trace_gen___ArgLoc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Info_8, (MR_Integer) 0)));
#line 1154 "trace_gen.m"
            ll_backend__trace_gen__Mode_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Info_8, (MR_Integer) 1)));
#line 1158 "trace_gen.m"
#line 1158 "trace_gen.m"
            switch (ll_backend__trace_gen__Mode_12) {
#line 1158 "trace_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1158 "trace_gen.m"
              case (MR_Integer) 0:
#line 1159 "trace_gen.m"
                ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16 = ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2;
#line 1158 "trace_gen.m"
                break;
#line 1158 "trace_gen.m"
              case (MR_Integer) 1:
#line 1157 "trace_gen.m"
                {
#line 1157 "trace_gen.m"
                  ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1157 "trace_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16, 0) = ((MR_Box) (ll_backend__trace_gen__Arg_7));
#line 1157 "trace_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16, 1) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2));
#line 1157 "trace_gen.m"
                }
#line 1158 "trace_gen.m"
                break;
#line 1158 "trace_gen.m"
              case (MR_Integer) 2:
#line 1161 "trace_gen.m"
                ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16 = ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2;
#line 1158 "trace_gen.m"
                break;
#line 1158 "trace_gen.m"
            }
#line 1163 "trace_gen.m"
            /* direct tailcall eliminated */
#line 1163 "trace_gen.m"
            {
#line 1163 "trace_gen.m"
              MR_Word ll_backend__trace_gen__HeadVar__1__tmp_copy_1 = ll_backend__trace_gen__ArgsInfos_9;
#line 1163 "trace_gen.m"
              MR_Word ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0__tmp_copy_2 = ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16;

#line 1163 "trace_gen.m"
              ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2 = ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0__tmp_copy_2;
#line 1163 "trace_gen.m"
              ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__HeadVar__1__tmp_copy_1;
#line 1163 "trace_gen.m"
            }
#line 1163 "trace_gen.m"
            continue;
#line 1153 "trace_gen.m"
          }
#line 1152 "trace_gen.m"
      }
#line 1152 "trace_gen.m"
      break;
#line 1152 "trace_gen.m"
    }
#line 1149 "trace_gen.m"
}

#line 1092 "trace_gen.m"
static MR_Box MR_CALL 
ll_backend__trace_gen__generate_event_code_13_p_0_2(
#line 1092 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg,
#line 1092 "trace_gen.m"
  MR_Box ll_backend__trace_gen__wrapper_arg_1)
#line 1092 "trace_gen.m"
{
#line 1092 "trace_gen.m"
  {
#line 1092 "trace_gen.m"
    MR_Box ll_backend__trace_gen__wrapper_arg_2;
#line 1092 "trace_gen.m"
    MR_Box ll_backend__trace_gen__closure = ll_backend__trace_gen__closure_arg;
#line 1092 "trace_gen.m"
    MR_Word ll_backend__trace_gen__conv1_Lval_2;

#line 1092 "trace_gen.m"
    {
#line 1092 "trace_gen.m"
      ll_backend__trace_gen__conv1_Lval_2 = ll_backend__trace_gen__find_lval_in_layout_locn_1_f_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1));
    }
#line 1092 "trace_gen.m"
    ll_backend__trace_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__trace_gen__conv1_Lval_2));
#line 1092 "trace_gen.m"
    return ll_backend__trace_gen__wrapper_arg_2;
#line 1092 "trace_gen.m"
  }
#line 1092 "trace_gen.m"
}

#line 1088 "trace_gen.m"
static MR_Box MR_CALL 
ll_backend__trace_gen__generate_event_code_13_p_0_1(
#line 1088 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg,
#line 1088 "trace_gen.m"
  MR_Box ll_backend__trace_gen__wrapper_arg_1)
#line 1088 "trace_gen.m"
{
#line 1088 "trace_gen.m"
  {
#line 1088 "trace_gen.m"
    MR_Box ll_backend__trace_gen__wrapper_arg_2;
#line 1088 "trace_gen.m"
    MR_Box ll_backend__trace_gen__closure = ll_backend__trace_gen__closure_arg;
#line 1088 "trace_gen.m"
    MR_Word ll_backend__trace_gen__conv0_HeadVar__2_2;

#line 1088 "trace_gen.m"
    {
#line 1088 "trace_gen.m"
      ll_backend__trace_gen__conv0_HeadVar__2_2 = ll_backend__trace_gen__find_lval_in_var_info_1_f_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1));
    }
#line 1088 "trace_gen.m"
    ll_backend__trace_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__trace_gen__conv0_HeadVar__2_2));
#line 1088 "trace_gen.m"
    return ll_backend__trace_gen__wrapper_arg_2;
#line 1088 "trace_gen.m"
  }
#line 1088 "trace_gen.m"
}

#line 1019 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__generate_event_code_13_p_0(
#line 1019 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Port_14,
#line 1019 "trace_gen.m"
  MR_Word ll_backend__trace_gen__PortInfo_15,
#line 1019 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeTraceInfo_16,
#line 1019 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Context_17,
#line 1019 "trace_gen.m"
  MR_Word ll_backend__trace_gen__HideEvent_18,
#line 1019 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeUserInfo_19,
#line 1019 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Label_20,
#line 1019 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__TvarDataMap_21,
#line 1019 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_22,
#line 1019 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_67,
#line 1019 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_68,
#line 1019 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_69,
#line 1019 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_70)
#line 1019 "trace_gen.m"
{
#line 1026 "trace_gen.m"
  {
#line 1026 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TypeInfo_140_140;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TypeCtorInfo_141_141;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TypeCtorInfo_142_142;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TypeCtorInfo_146_146;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TypeCtorInfo_149_149;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__LiveVars0_25;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__LiveVars_26;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__Path_27;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TailRecResetCode_28;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__VarSet_36;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__VarTypes_37;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TvarSet_39;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__VarInfoList_40;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ProduceCode_41;
#line 1026 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__MaxRegR_42;
#line 1026 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__MaxRegF_43;
#line 1026 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__MaxTraceRegR0_44;
#line 1026 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__MaxTraceRegF0_45;
#line 1026 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__MaxTraceRegR_46;
#line 1026 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__MaxTraceRegF_47;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__VarLocs_48;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ProcInfo_49;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TvarList_50;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__VarLvals_51;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TvarLocnSets_52;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TvarLocnSet_53;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TvarLocns_54;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TvarLvals_55;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__LiveLvals_56;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__LiveLvalSet_57;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__VarInfoSet_58;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__LayoutLabelInfo_59;
#line 1026 "trace_gen.m"
    MR_String ll_backend__trace_gen__TraceStmt0_60;
#line 1026 "trace_gen.m"
    MR_String ll_backend__trace_gen__TraceStmt_62;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceComponents_65;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceCode_66;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_71_71;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_76_76;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_77_77;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_80_80;
#line 1026 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_84_84;
#line 1026 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_85_85;
#line 1026 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_86_86;
#line 1026 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_88_88;
#line 1026 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_90_90;
#line 1026 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_91_91;
#line 1026 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_92_92;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_94_94;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_96_96;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_101_101;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_104_104;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_106_106;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_107_107;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_108_108;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_110_110;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_111_111;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_112_112;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_117_117;
#line 1026 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_124_124;
#line 1066 "trace_gen.m"
    MR_Word ll_backend__trace_gen__InstMap_38;
#line 1128 "trace_gen.m"
    MR_Word ll_backend__trace_gen__RedoLabel_64;
#line 1113 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceInfo_63;
#line 1113 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_97_97;
#line 1115 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_125_125;
#line 1115 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_126_126;
#line 1115 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_127_127;
#line 1115 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_128_128;
#line 1115 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_129_129;
#line 1115 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_130_130;
#line 1115 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_131_131;
#line 1115 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_132_132;

#line 1027 "trace_gen.m"
    {
#line 1027 "trace_gen.m"
      ll_backend__code_info__get_next_label_3_p_0(ll_backend__trace_gen__Label_20, ll_backend__trace_gen__STATE_VARIABLE_CI_0_67, &ll_backend__trace_gen__STATE_VARIABLE_CI_71_71);
    }
#line 1028 "trace_gen.m"
    {
#line 1028 "trace_gen.m"
      ll_backend__code_loc_dep__get_known_variables_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CLD_0_69, &ll_backend__trace_gen__LiveVars0_25);
    }
#line 1034 "trace_gen.m"
#line 1034 "trace_gen.m"
    switch (MR_tag((MR_Word) ll_backend__trace_gen__PortInfo_15)) {
#line 1034 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1034 "trace_gen.m"
      case (MR_Integer) 0:
#line 1030 "trace_gen.m"
        {
#line 1031 "trace_gen.m"
          ll_backend__trace_gen__LiveVars_26 = ll_backend__trace_gen__LiveVars0_25;
#line 1032 "trace_gen.m"
          ll_backend__trace_gen__Path_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1033 "trace_gen.m"
          {
#line 1033 "trace_gen.m"
            ll_backend__trace_gen__TailRecResetCode_28 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
#line 1030 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_CI_76_76 = ll_backend__trace_gen__STATE_VARIABLE_CI_71_71;
#line 1030 "trace_gen.m"
        }
#line 1034 "trace_gen.m"
        break;
#line 1034 "trace_gen.m"
      case (MR_Integer) 1:
#line 1035 "trace_gen.m"
        {
#line 1035 "trace_gen.m"
          MR_Word ll_backend__trace_gen__ArgsInfos_29;
#line 1035 "trace_gen.m"
          MR_Word ll_backend__trace_gen__OutputVars_30;

#line 1035 "trace_gen.m"
          ll_backend__trace_gen__Path_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__PortInfo_15, (MR_Integer) 0)));
#line 1035 "trace_gen.m"
          ll_backend__trace_gen__ArgsInfos_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__PortInfo_15, (MR_Integer) 1)));
#line 1038 "trace_gen.m"
          {
#line 1038 "trace_gen.m"
            ll_backend__trace_gen__find_output_vars_3_p_0(ll_backend__trace_gen__ArgsInfos_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__trace_gen__OutputVars_30);
          }
#line 1039 "trace_gen.m"
          {
#line 1039 "trace_gen.m"
            mercury__list__delete_elems_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[2], ll_backend__trace_gen__LiveVars0_25, ll_backend__trace_gen__OutputVars_30, &ll_backend__trace_gen__LiveVars_26);
          }
#line 1044 "trace_gen.m"
          if ((ll_backend__trace_gen__MaybeTraceInfo_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1045 "trace_gen.m"
            {
#line 1046 "trace_gen.m"
              {
#line 1046 "trace_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.generate_event_code\'/13", (MR_String) "tailrec call without TraceInfo");
#line 1046 "trace_gen.m"
                return;
              }
#line 1045 "trace_gen.m"
            }
#line 1044 "trace_gen.m"
          else
#line 1041 "trace_gen.m"
            {
#line 1041 "trace_gen.m"
              MR_Word ll_backend__trace_gen__TailRecTraceInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTraceInfo_16, (MR_Integer) 0)));

#line 1042 "trace_gen.m"
              {
#line 1042 "trace_gen.m"
                ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0(ll_backend__trace_gen__TailRecTraceInfo_31, &ll_backend__trace_gen__TailRecResetCode_28, ll_backend__trace_gen__STATE_VARIABLE_CI_71_71, &ll_backend__trace_gen__STATE_VARIABLE_CI_76_76);
              }
#line 1041 "trace_gen.m"
            }
#line 1035 "trace_gen.m"
        }
#line 1034 "trace_gen.m"
        break;
#line 1034 "trace_gen.m"
      case (MR_Integer) 2:
#line 1049 "trace_gen.m"
        {
#line 1049 "trace_gen.m"
          MR_Word ll_backend__trace_gen__TypeCtorInfo_135_135;
#line 1049 "trace_gen.m"
          MR_Word ll_backend__trace_gen__PreDeaths_32;
#line 1049 "trace_gen.m"
          MR_Word ll_backend__trace_gen__ResumeVars_33;
#line 1049 "trace_gen.m"
          MR_Word ll_backend__trace_gen__RealPreDeaths_34;
#line 1049 "trace_gen.m"
          MR_Word ll_backend__trace_gen__RealPreDeathList_35;

#line 1049 "trace_gen.m"
          ll_backend__trace_gen__Path_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__PortInfo_15, (MR_Integer) 0)));
#line 1049 "trace_gen.m"
          ll_backend__trace_gen__PreDeaths_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__PortInfo_15, (MR_Integer) 1)));
#line 1050 "trace_gen.m"
          {
#line 1050 "trace_gen.m"
            ll_backend__trace_gen__ResumeVars_33 = ll_backend__code_loc_dep__current_resume_point_vars_1_f_0(ll_backend__trace_gen__STATE_VARIABLE_CLD_0_69);
          }
#line 5027 "ll_backend.trace_gen.c"
          ll_backend__trace_gen__TypeCtorInfo_135_135 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1051 "trace_gen.m"
          {
#line 1051 "trace_gen.m"
            parse_tree__set_of_var__difference_3_p_0(ll_backend__trace_gen__TypeCtorInfo_135_135, ll_backend__trace_gen__PreDeaths_32, ll_backend__trace_gen__ResumeVars_33, &ll_backend__trace_gen__RealPreDeaths_34);
          }
#line 1052 "trace_gen.m"
          {
#line 1052 "trace_gen.m"
            ll_backend__trace_gen__RealPreDeathList_35 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__trace_gen__TypeCtorInfo_135_135, ll_backend__trace_gen__RealPreDeaths_34);
          }
#line 1053 "trace_gen.m"
          {
#line 1053 "trace_gen.m"
            mercury__list__delete_elems_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[2], ll_backend__trace_gen__LiveVars0_25, ll_backend__trace_gen__RealPreDeathList_35, &ll_backend__trace_gen__LiveVars_26);
          }
#line 1054 "trace_gen.m"
          {
#line 1054 "trace_gen.m"
            ll_backend__trace_gen__TailRecResetCode_28 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
#line 1049 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_CI_76_76 = ll_backend__trace_gen__STATE_VARIABLE_CI_71_71;
#line 1049 "trace_gen.m"
        }
#line 1034 "trace_gen.m"
        break;
#line 1034 "trace_gen.m"
      case (MR_Integer) 3:
#line 1034 "trace_gen.m"
#line 1034 "trace_gen.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__PortInfo_15, (MR_Integer) 0)))) {
#line 1034 "trace_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1034 "trace_gen.m"
          case (MR_Integer) 0:
#line 1056 "trace_gen.m"
            {
#line 1056 "trace_gen.m"
              ll_backend__trace_gen__Path_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__PortInfo_15, (MR_Integer) 1)));
#line 1057 "trace_gen.m"
              ll_backend__trace_gen__LiveVars_26 = ll_backend__trace_gen__LiveVars0_25;
#line 1058 "trace_gen.m"
              {
#line 1058 "trace_gen.m"
                ll_backend__trace_gen__TailRecResetCode_28 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 1056 "trace_gen.m"
              ll_backend__trace_gen__STATE_VARIABLE_CI_76_76 = ll_backend__trace_gen__STATE_VARIABLE_CI_71_71;
#line 1056 "trace_gen.m"
            }
#line 1034 "trace_gen.m"
            break;
#line 1034 "trace_gen.m"
          case (MR_Integer) 1:
#line 1060 "trace_gen.m"
            {
#line 1060 "trace_gen.m"
              ll_backend__trace_gen__Path_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__PortInfo_15, (MR_Integer) 1)));
#line 1061 "trace_gen.m"
              ll_backend__trace_gen__LiveVars_26 = ll_backend__trace_gen__LiveVars0_25;
#line 1062 "trace_gen.m"
              {
#line 1062 "trace_gen.m"
                ll_backend__trace_gen__TailRecResetCode_28 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 1060 "trace_gen.m"
              ll_backend__trace_gen__STATE_VARIABLE_CI_76_76 = ll_backend__trace_gen__STATE_VARIABLE_CI_71_71;
#line 1060 "trace_gen.m"
            }
#line 1034 "trace_gen.m"
            break;
#line 1034 "trace_gen.m"
        }
#line 1034 "trace_gen.m"
        break;
#line 1034 "trace_gen.m"
    }
#line 1064 "trace_gen.m"
    {
#line 1064 "trace_gen.m"
      ll_backend__code_info__get_varset_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_76_76, &ll_backend__trace_gen__VarSet_36);
    }
#line 1065 "trace_gen.m"
    {
#line 1065 "trace_gen.m"
      ll_backend__code_info__get_vartypes_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_76_76, &ll_backend__trace_gen__VarTypes_37);
    }
#line 1066 "trace_gen.m"
    {
#line 1066 "trace_gen.m"
      ll_backend__code_loc_dep__get_instmap_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CLD_0_69, &ll_backend__trace_gen__InstMap_38);
    }
#line 5121 "ll_backend.trace_gen.c"
    ll_backend__trace_gen__TypeInfo_140_140 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[3];
#line 1068 "trace_gen.m"
    {
#line 1068 "trace_gen.m"
      ll_backend__trace_gen__V_77_77 = mercury__set__init_0_f_0(ll_backend__trace_gen__TypeInfo_140_140);
    }
#line 1067 "trace_gen.m"
    {
#line 1067 "trace_gen.m"
      ll_backend__trace_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_13_p_0(ll_backend__trace_gen__LiveVars_26, ll_backend__trace_gen__VarSet_36, ll_backend__trace_gen__VarTypes_37, ll_backend__trace_gen__V_77_77, &ll_backend__trace_gen__TvarSet_39, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__trace_gen__VarInfoList_40, &ll_backend__trace_gen__ProduceCode_41, ll_backend__trace_gen__STATE_VARIABLE_CI_76_76, ll_backend__trace_gen__STATE_VARIABLE_CLD_0_69, ll_backend__trace_gen__STATE_VARIABLE_CLD_70);
    }
#line 1069 "trace_gen.m"
    {
#line 1069 "trace_gen.m"
      ll_backend__code_loc_dep__max_reg_in_use_3_p_0(*ll_backend__trace_gen__STATE_VARIABLE_CLD_70, &ll_backend__trace_gen__MaxRegR_42, &ll_backend__trace_gen__MaxRegF_43);
    }
#line 1070 "trace_gen.m"
    {
#line 1070 "trace_gen.m"
      ll_backend__code_info__get_max_regs_in_use_at_trace_3_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_76_76, &ll_backend__trace_gen__MaxTraceRegR0_44, &ll_backend__trace_gen__MaxTraceRegF0_45);
    }
#line 1071 "trace_gen.m"
    {
#line 1071 "trace_gen.m"
      mercury__int__max_3_p_0(ll_backend__trace_gen__MaxRegR_42, ll_backend__trace_gen__MaxTraceRegR0_44, &ll_backend__trace_gen__MaxTraceRegR_46);
    }
#line 1072 "trace_gen.m"
    {
#line 1072 "trace_gen.m"
      mercury__int__max_3_p_0(ll_backend__trace_gen__MaxRegF_43, ll_backend__trace_gen__MaxTraceRegF0_45, &ll_backend__trace_gen__MaxTraceRegF_47);
    }
#line 1074 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__MaxTraceRegR0_44 == ll_backend__trace_gen__MaxTraceRegR_46);
#line 1074 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 1075 "trace_gen.m"
      ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__MaxTraceRegF0_45 == ll_backend__trace_gen__MaxTraceRegF_47);
#line 1078 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 1078 "trace_gen.m"
      ll_backend__trace_gen__STATE_VARIABLE_CI_80_80 = ll_backend__trace_gen__STATE_VARIABLE_CI_76_76;
#line 1078 "trace_gen.m"
    else
#line 1079 "trace_gen.m"
      {
#line 1079 "trace_gen.m"
        ll_backend__code_info__set_max_regs_in_use_at_trace_4_p_0(ll_backend__trace_gen__MaxTraceRegR_46, ll_backend__trace_gen__MaxTraceRegF_47, ll_backend__trace_gen__STATE_VARIABLE_CI_76_76, &ll_backend__trace_gen__STATE_VARIABLE_CI_80_80);
      }
#line 1081 "trace_gen.m"
    {
#line 1081 "trace_gen.m"
      ll_backend__code_loc_dep__variable_locations_2_p_0(*ll_backend__trace_gen__STATE_VARIABLE_CLD_70, &ll_backend__trace_gen__VarLocs_48);
    }
#line 1082 "trace_gen.m"
    {
#line 1082 "trace_gen.m"
      ll_backend__code_info__get_proc_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_80_80, &ll_backend__trace_gen__ProcInfo_49);
    }
#line 1083 "trace_gen.m"
    {
#line 1083 "trace_gen.m"
      mercury__set__to_sorted_list_2_p_0(ll_backend__trace_gen__TypeInfo_140_140, ll_backend__trace_gen__TvarSet_39, &ll_backend__trace_gen__TvarList_50);
    }
#line 1084 "trace_gen.m"
    {
#line 1084 "trace_gen.m"
      ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0(ll_backend__trace_gen__TvarList_50, ll_backend__trace_gen__VarLocs_48, ll_backend__trace_gen__ProcInfo_49, ll_backend__trace_gen__TvarDataMap_21);
    }
#line 5190 "ll_backend.trace_gen.c"
    ll_backend__trace_gen__TypeCtorInfo_141_141 = (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0;
#line 5192 "ll_backend.trace_gen.c"
    ll_backend__trace_gen__TypeCtorInfo_142_142 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 1088 "trace_gen.m"
    {
#line 1088 "trace_gen.m"
      ll_backend__trace_gen__VarLvals_51 = mercury__list__map_2_f_0(ll_backend__trace_gen__TypeCtorInfo_141_141, ll_backend__trace_gen__TypeCtorInfo_142_142, (MR_Word) &ll_backend__trace_gen_scalar_common_2[6], ll_backend__trace_gen__VarInfoList_40);
    }
#line 1089 "trace_gen.m"
    {
#line 1089 "trace_gen.m"
      mercury__map__values_2_p_0(ll_backend__trace_gen__TypeInfo_140_140, (MR_Word) &ll_backend__trace_gen_scalar_common_1[4], *ll_backend__trace_gen__TvarDataMap_21, &ll_backend__trace_gen__TvarLocnSets_52);
    }
#line 5204 "ll_backend.trace_gen.c"
    ll_backend__trace_gen__TypeCtorInfo_146_146 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0;
#line 1090 "trace_gen.m"
    {
#line 1090 "trace_gen.m"
      ll_backend__trace_gen__TvarLocnSet_53 = mercury__set__union_list_1_f_0(ll_backend__trace_gen__TypeCtorInfo_146_146, ll_backend__trace_gen__TvarLocnSets_52);
    }
#line 1091 "trace_gen.m"
    {
#line 1091 "trace_gen.m"
      mercury__set__to_sorted_list_2_p_0(ll_backend__trace_gen__TypeCtorInfo_146_146, ll_backend__trace_gen__TvarLocnSet_53, &ll_backend__trace_gen__TvarLocns_54);
    }
#line 1092 "trace_gen.m"
    {
#line 1092 "trace_gen.m"
      ll_backend__trace_gen__TvarLvals_55 = mercury__list__map_2_f_0(ll_backend__trace_gen__TypeCtorInfo_146_146, ll_backend__trace_gen__TypeCtorInfo_142_142, (MR_Word) &ll_backend__trace_gen_scalar_common_2[7], ll_backend__trace_gen__TvarLocns_54);
    }
#line 1093 "trace_gen.m"
    {
#line 1093 "trace_gen.m"
      mercury__list__append_3_p_1(ll_backend__trace_gen__TypeCtorInfo_142_142, ll_backend__trace_gen__VarLvals_51, ll_backend__trace_gen__TvarLvals_55, &ll_backend__trace_gen__LiveLvals_56);
    }
#line 1094 "trace_gen.m"
    {
#line 1094 "trace_gen.m"
      ll_backend__trace_gen__LiveLvalSet_57 = mercury__set__list_to_set_1_f_0(ll_backend__trace_gen__TypeCtorInfo_142_142, ll_backend__trace_gen__LiveLvals_56);
    }
#line 1096 "trace_gen.m"
    {
#line 1096 "trace_gen.m"
      mercury__set__list_to_set_2_p_0(ll_backend__trace_gen__TypeCtorInfo_141_141, ll_backend__trace_gen__VarInfoList_40, &ll_backend__trace_gen__VarInfoSet_58);
    }
#line 1097 "trace_gen.m"
    {
#line 1097 "trace_gen.m"
      ll_backend__trace_gen__LayoutLabelInfo_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1097 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__LayoutLabelInfo_59, 0) = ((MR_Box) (ll_backend__trace_gen__VarInfoSet_58));
#line 1097 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__LayoutLabelInfo_59, 1) = ((MR_Box) (*ll_backend__trace_gen__TvarDataMap_21));
#line 1097 "trace_gen.m"
    }
#line 1101 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeUserInfo_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1100 "trace_gen.m"
      ll_backend__trace_gen__TraceStmt0_60 = (MR_String) "\t\tMR_EVENT_SYS\n";
#line 1101 "trace_gen.m"
    else
#line 1103 "trace_gen.m"
      ll_backend__trace_gen__TraceStmt0_60 = (MR_String) "\t\tMR_EVENT_USER\n";
#line 1105 "trace_gen.m"
    {
#line 1105 "trace_gen.m"
      ll_backend__trace_gen__V_85_85 = ll_backend__layout_out__trace_port_to_string_1_f_0(ll_backend__trace_gen__Port_14);
    }
#line 1106 "trace_gen.m"
    {
#line 1106 "trace_gen.m"
      ll_backend__trace_gen__V_91_91 = mdbcomp__goal_path__goal_path_to_string_1_f_0(ll_backend__trace_gen__Path_27);
    }
#line 1106 "trace_gen.m"
    {
#line 1106 "trace_gen.m"
      ll_backend__trace_gen__V_92_92 = mercury__string__f_43_43_2_f_0((MR_String) "> */\n", ll_backend__trace_gen__TraceStmt0_60);
    }
#line 1106 "trace_gen.m"
    {
#line 1106 "trace_gen.m"
      ll_backend__trace_gen__V_90_90 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__V_91_91, ll_backend__trace_gen__V_92_92);
    }
#line 1106 "trace_gen.m"
    {
#line 1106 "trace_gen.m"
      ll_backend__trace_gen__V_88_88 = mercury__string__f_43_43_2_f_0((MR_String) "path <", ll_backend__trace_gen__V_90_90);
    }
#line 1105 "trace_gen.m"
    {
#line 1105 "trace_gen.m"
      ll_backend__trace_gen__V_86_86 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__trace_gen__V_88_88);
    }
#line 1105 "trace_gen.m"
    {
#line 1105 "trace_gen.m"
      ll_backend__trace_gen__V_84_84 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__V_85_85, ll_backend__trace_gen__V_86_86);
    }
#line 1105 "trace_gen.m"
    {
#line 1105 "trace_gen.m"
      ll_backend__trace_gen__TraceStmt_62 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t/* port ", ll_backend__trace_gen__V_84_84);
    }
#line 1109 "trace_gen.m"
    {
#line 1109 "trace_gen.m"
      ll_backend__code_info__add_trace_layout_for_label_9_p_0(*ll_backend__trace_gen__Label_20, ll_backend__trace_gen__Context_17, ll_backend__trace_gen__Port_14, ll_backend__trace_gen__HideEvent_18, ll_backend__trace_gen__Path_27, ll_backend__trace_gen__MaybeUserInfo_19, ll_backend__trace_gen__LayoutLabelInfo_59, ll_backend__trace_gen__STATE_VARIABLE_CI_80_80, &ll_backend__trace_gen__STATE_VARIABLE_CI_94_94);
    }
#line 1111 "trace_gen.m"
    {
#line 1111 "trace_gen.m"
      ll_backend__code_info__set_proc_trace_events_3_p_0((MR_Integer) 1, ll_backend__trace_gen__STATE_VARIABLE_CI_94_94, &ll_backend__trace_gen__STATE_VARIABLE_CI_96_96);
    }
#line 1113 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__Port_14 == (MR_Integer) 3);
#line 1113 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 1113 "trace_gen.m"
      {
#line 1114 "trace_gen.m"
        ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__MaybeTraceInfo_16)) == (MR_mktag((MR_Integer) 1)));
#line 1114 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 1114 "trace_gen.m"
          {
#line 1114 "trace_gen.m"
            ll_backend__trace_gen__TraceInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTraceInfo_16, (MR_Integer) 0)));
#line 1115 "trace_gen.m"
            ll_backend__trace_gen__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 0)));
#line 1115 "trace_gen.m"
            ll_backend__trace_gen__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 1)));
#line 1115 "trace_gen.m"
            ll_backend__trace_gen__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 2)));
#line 1115 "trace_gen.m"
            ll_backend__trace_gen__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 3)));
#line 1115 "trace_gen.m"
            ll_backend__trace_gen__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 4)));
#line 1115 "trace_gen.m"
            ll_backend__trace_gen__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 5)));
#line 1115 "trace_gen.m"
            ll_backend__trace_gen__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 6)));
#line 1115 "trace_gen.m"
            ll_backend__trace_gen__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 7)));
#line 1115 "trace_gen.m"
            ll_backend__trace_gen__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 8)));
#line 1115 "trace_gen.m"
            ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__V_97_97)) == (MR_mktag((MR_Integer) 1)));
#line 1115 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 1115 "trace_gen.m"
              ll_backend__trace_gen__RedoLabel_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_97_97, (MR_Integer) 0)));
#line 1114 "trace_gen.m"
          }
#line 1113 "trace_gen.m"
      }
#line 1128 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 1126 "trace_gen.m"
      {
#line 1126 "trace_gen.m"
        {
#line 1126 "trace_gen.m"
          ll_backend__code_info__add_trace_layout_for_label_9_p_0(ll_backend__trace_gen__RedoLabel_64, ll_backend__trace_gen__Context_17, (MR_Integer) 2, ll_backend__trace_gen__HideEvent_18, ll_backend__trace_gen__Path_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__trace_gen__LayoutLabelInfo_59, ll_backend__trace_gen__STATE_VARIABLE_CI_96_96, ll_backend__trace_gen__STATE_VARIABLE_CI_68);
        }
#line 1126 "trace_gen.m"
      }
#line 1128 "trace_gen.m"
    else
#line 1128 "trace_gen.m"
      *ll_backend__trace_gen__STATE_VARIABLE_CI_68 = ll_backend__trace_gen__STATE_VARIABLE_CI_96_96;
#line 1132 "trace_gen.m"
    {
#line 1132 "trace_gen.m"
      ll_backend__trace_gen__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1132 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_104_104, 0) = ((MR_Box) (ll_backend__trace_gen__LiveLvalSet_57));
#line 1132 "trace_gen.m"
    }
#line 1131 "trace_gen.m"
    {
#line 1131 "trace_gen.m"
      ll_backend__trace_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1131 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_101_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1131 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_101_101, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1131 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_101_101, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1131 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_101_101, 3) = ((MR_Box) (ll_backend__trace_gen__V_104_104));
#line 1131 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_101_101, 4) = ((MR_Box) (ll_backend__trace_gen__TraceStmt_62));
#line 1131 "trace_gen.m"
    }
#line 1133 "trace_gen.m"
    {
#line 1133 "trace_gen.m"
      ll_backend__trace_gen__TraceComponents_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1133 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents_65, 0) = ((MR_Box) (ll_backend__trace_gen__V_101_101));
#line 1133 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1133 "trace_gen.m"
    }
#line 5395 "ll_backend.trace_gen.c"
    ll_backend__trace_gen__TypeCtorInfo_149_149 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 1136 "trace_gen.m"
    {
#line 1136 "trace_gen.m"
      ll_backend__trace_gen__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1136 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1136 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_108_108, 1) = ((MR_Box) (*ll_backend__trace_gen__Label_20));
#line 1136 "trace_gen.m"
    }
#line 1136 "trace_gen.m"
    {
#line 1136 "trace_gen.m"
      ll_backend__trace_gen__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1136 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_107_107, 0) = ((MR_Box) (ll_backend__trace_gen__V_108_108));
#line 1136 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_107_107, 1) = ((MR_Box) ((MR_String) "A label to hang trace liveness on"));
#line 1136 "trace_gen.m"
    }
#line 1144 "trace_gen.m"
    {
#line 1144 "trace_gen.m"
      ll_backend__trace_gen__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1144 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_117_117, 0) = ((MR_Box) (*ll_backend__trace_gen__Label_20));
#line 1144 "trace_gen.m"
    }
#line 1143 "trace_gen.m"
    {
#line 1143 "trace_gen.m"
      ll_backend__trace_gen__V_112_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 1143 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 1143 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1143 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 2) = ((MR_Box) (ll_backend__trace_gen__TraceComponents_65));
#line 1143 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1143 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1143 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1143 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 6) = ((MR_Box) (ll_backend__trace_gen__V_117_117));
#line 1143 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1143 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 8) = ((MR_Box) (ll_backend__trace_gen__V_117_117));
#line 1143 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 9) = ((MR_Box) ((MR_Integer) 1));
#line 1143 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_112_112, 10) = ((MR_Box) ((MR_Integer) 1));
#line 1143 "trace_gen.m"
    }
#line 1143 "trace_gen.m"
    {
#line 1143 "trace_gen.m"
      ll_backend__trace_gen__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1143 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_111_111, 0) = ((MR_Box) (ll_backend__trace_gen__V_112_112));
#line 1143 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_111_111, 1) = ((MR_Box) ((MR_String) ""));
#line 1143 "trace_gen.m"
    }
#line 1146 "trace_gen.m"
    {
#line 1146 "trace_gen.m"
      ll_backend__trace_gen__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_110_110, 0) = ((MR_Box) (ll_backend__trace_gen__V_111_111));
#line 1146 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1146 "trace_gen.m"
    }
#line 1137 "trace_gen.m"
    {
#line 1137 "trace_gen.m"
      ll_backend__trace_gen__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1137 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_106_106, 0) = ((MR_Box) (ll_backend__trace_gen__V_107_107));
#line 1137 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_106_106, 1) = ((MR_Box) (ll_backend__trace_gen__V_110_110));
#line 1137 "trace_gen.m"
    }
#line 1135 "trace_gen.m"
    {
#line 1135 "trace_gen.m"
      ll_backend__trace_gen__TraceCode_66 = mercury__cord__from_list_1_f_0(ll_backend__trace_gen__TypeCtorInfo_149_149, ll_backend__trace_gen__V_106_106);
    }
#line 1147 "trace_gen.m"
    {
#line 1147 "trace_gen.m"
      ll_backend__trace_gen__V_124_124 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_149_149, ll_backend__trace_gen__TailRecResetCode_28, ll_backend__trace_gen__TraceCode_66);
    }
#line 1147 "trace_gen.m"
    {
#line 1147 "trace_gen.m"
      *ll_backend__trace_gen__Code_22 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_149_149, ll_backend__trace_gen__ProduceCode_41, ll_backend__trace_gen__V_124_124);
    }
#line 1026 "trace_gen.m"
  }
#line 1019 "trace_gen.m"
}

#line 948 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_2(
#line 948 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg)
#line 948 "trace_gen.m"
{
#line 948 "trace_gen.m"
  {
#line 948 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 948 "trace_gen.m"
    MR_Box ll_backend__trace_gen__closure = ll_backend__trace_gen__closure_arg;

#line 948 "trace_gen.m"
    {
#line 948 "trace_gen.m"
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__948__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__closure, (MR_Integer) 4))));
    }
#line 948 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 948 "trace_gen.m"
  }
#line 948 "trace_gen.m"
}

#line 942 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_1(
#line 942 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg)
#line 942 "trace_gen.m"
{
#line 942 "trace_gen.m"
  {
#line 942 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 942 "trace_gen.m"
    MR_Box ll_backend__trace_gen__closure = ll_backend__trace_gen__closure_arg;

#line 942 "trace_gen.m"
    {
#line 942 "trace_gen.m"
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__942__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__closure, (MR_Integer) 4))));
    }
#line 942 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 942 "trace_gen.m"
  }
#line 942 "trace_gen.m"
}

#line 922 "trace_gen.m"
static void MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0(
#line 922 "trace_gen.m"
  MR_Word ll_backend__trace_gen__TraceInfo_5,
#line 922 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_6,
#line 922 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_42,
#line 922 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_43)
#line 922 "trace_gen.m"
{
#line 925 "trace_gen.m"
  {
#line 925 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 925 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TypeCtorInfo_179_179;
#line 925 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CodeModel_8;
#line 925 "trace_gen.m"
    MR_Word ll_backend__trace_gen__EventNumLval_9;
#line 925 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CallNumLval_10;
#line 925 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CallDepthLval_11;
#line 925 "trace_gen.m"
    MR_String ll_backend__trace_gen__EventNumStr_12;
#line 925 "trace_gen.m"
    MR_String ll_backend__trace_gen__CallNumStr_13;
#line 925 "trace_gen.m"
    MR_String ll_backend__trace_gen__CallDepthStr_14;
#line 925 "trace_gen.m"
    MR_String ll_backend__trace_gen__StdSlotCodeStr_15;
#line 925 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeRedoLabelLval_16;
#line 925 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeFromFullLval_17;
#line 925 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeIoSeqSlot_18;
#line 925 "trace_gen.m"
    MR_String ll_backend__trace_gen__IoSeqCodeStr_21;
#line 925 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTrailLvals_22;
#line 925 "trace_gen.m"
    MR_String ll_backend__trace_gen__TrailCodeStr_27;
#line 925 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeMaxfrLval_28;
#line 925 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaxfrCode_30;
#line 925 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TailRecInfo_31;
#line 925 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TailRecLvalCode_34;
#line 925 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeCallTableLval_35;
#line 925 "trace_gen.m"
    MR_String ll_backend__trace_gen__CallTableCodeStr_38;
#line 925 "trace_gen.m"
    MR_String ll_backend__trace_gen__ForeignLangCodeStr_39;
#line 925 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ForeignLangComponents_40;
#line 925 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ForeignLangCode_41;
#line 925 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_45_45;
#line 925 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_46_46;
#line 925 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_48_48;
#line 925 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_49_49;
#line 925 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_51_51;
#line 925 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_53_53;
#line 925 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_58_58;
#line 925 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_96_96;
#line 925 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_97_97;
#line 925 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_98_98;
#line 925 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_101_101;
#line 925 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_102_102;
#line 925 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_104_104;
#line 925 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_105_105;
#line 925 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_116_116;
#line 941 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_117_117;
#line 941 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_118_118;
#line 941 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_119_119;
#line 941 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_120_120;
#line 941 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_121_121;
#line 941 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_122_122;
#line 941 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_123_123;
#line 941 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_124_124;
#line 947 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_125_125;
#line 947 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_126_126;
#line 947 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_127_127;
#line 947 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_128_128;
#line 947 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_129_129;
#line 947 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_130_130;
#line 947 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_131_131;
#line 947 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_132_132;
#line 951 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_133_133;
#line 951 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_134_134;
#line 951 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_135_135;
#line 951 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_140_140;

#line 929 "trace_gen.m"
    {
#line 929 "trace_gen.m"
      ll_backend__trace_gen__CodeModel_8 = ll_backend__code_info__get_proc_model_1_f_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_42);
    }
#line 930 "trace_gen.m"
    {
#line 930 "trace_gen.m"
      ll_backend__trace_gen__event_num_slot_2_p_0(ll_backend__trace_gen__CodeModel_8, &ll_backend__trace_gen__EventNumLval_9);
    }
#line 931 "trace_gen.m"
    {
#line 931 "trace_gen.m"
      ll_backend__trace_gen__call_num_slot_2_p_0(ll_backend__trace_gen__CodeModel_8, &ll_backend__trace_gen__CallNumLval_10);
    }
#line 932 "trace_gen.m"
    {
#line 932 "trace_gen.m"
      ll_backend__trace_gen__call_depth_slot_2_p_0(ll_backend__trace_gen__CodeModel_8, &ll_backend__trace_gen__CallDepthLval_11);
    }
#line 933 "trace_gen.m"
    {
#line 933 "trace_gen.m"
      ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__EventNumLval_9, &ll_backend__trace_gen__EventNumStr_12);
    }
#line 934 "trace_gen.m"
    {
#line 934 "trace_gen.m"
      ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallNumLval_10, &ll_backend__trace_gen__CallNumStr_13);
    }
#line 935 "trace_gen.m"
    {
#line 935 "trace_gen.m"
      ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallDepthLval_11, &ll_backend__trace_gen__CallDepthStr_14);
    }
#line 937 "trace_gen.m"
    {
#line 937 "trace_gen.m"
      ll_backend__trace_gen__V_51_51 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallDepthStr_14, (MR_String) ");\n");
    }
#line 937 "trace_gen.m"
    {
#line 937 "trace_gen.m"
      ll_backend__trace_gen__V_49_49 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__trace_gen__V_51_51);
    }
#line 937 "trace_gen.m"
    {
#line 937 "trace_gen.m"
      ll_backend__trace_gen__V_48_48 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallNumStr_13, ll_backend__trace_gen__V_49_49);
    }
#line 937 "trace_gen.m"
    {
#line 937 "trace_gen.m"
      ll_backend__trace_gen__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__trace_gen__V_48_48);
    }
#line 937 "trace_gen.m"
    {
#line 937 "trace_gen.m"
      ll_backend__trace_gen__V_45_45 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__EventNumStr_12, ll_backend__trace_gen__V_46_46);
    }
#line 936 "trace_gen.m"
    {
#line 936 "trace_gen.m"
      ll_backend__trace_gen__StdSlotCodeStr_15 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_trace_tailrec_std_slots(", ll_backend__trace_gen__V_45_45);
    }
#line 941 "trace_gen.m"
    ll_backend__trace_gen__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 0)));
#line 941 "trace_gen.m"
    ll_backend__trace_gen__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 1)));
#line 941 "trace_gen.m"
    ll_backend__trace_gen__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 2)));
#line 941 "trace_gen.m"
    ll_backend__trace_gen__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 3)));
#line 941 "trace_gen.m"
    ll_backend__trace_gen__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 4)));
#line 941 "trace_gen.m"
    ll_backend__trace_gen__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 5)));
#line 941 "trace_gen.m"
    ll_backend__trace_gen__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 6)));
#line 941 "trace_gen.m"
    ll_backend__trace_gen__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 7)));
#line 941 "trace_gen.m"
    ll_backend__trace_gen__MaybeRedoLabelLval_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 8)));
#line 942 "trace_gen.m"
    {
#line 942 "trace_gen.m"
      ll_backend__trace_gen__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 942 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_53_53, 0) = ((MR_Box) (&ll_backend__trace_gen_scalar_common_5[1]));
#line 942 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_53_53, 1) = ((MR_Box) (ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_1));
#line 942 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 942 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_53_53, 3) = ((MR_Box) (ll_backend__trace_gen__MaybeRedoLabelLval_16));
#line 942 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_53_53, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 942 "trace_gen.m"
    }
#line 942 "trace_gen.m"
    {
#line 942 "trace_gen.m"
      mercury__require__expect_4_p_0(ll_backend__trace_gen__V_53_53, (MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.generate_tailrec_reset_slots_code\'/4", (MR_String) "redo label in procedure with TAIL event");
    }
#line 947 "trace_gen.m"
    ll_backend__trace_gen__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 0)));
#line 947 "trace_gen.m"
    ll_backend__trace_gen__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 1)));
#line 947 "trace_gen.m"
    ll_backend__trace_gen__MaybeFromFullLval_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 2)));
#line 947 "trace_gen.m"
    ll_backend__trace_gen__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 3)));
#line 947 "trace_gen.m"
    ll_backend__trace_gen__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 4)));
#line 947 "trace_gen.m"
    ll_backend__trace_gen__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 5)));
#line 947 "trace_gen.m"
    ll_backend__trace_gen__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 6)));
#line 947 "trace_gen.m"
    ll_backend__trace_gen__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 7)));
#line 947 "trace_gen.m"
    ll_backend__trace_gen__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 8)));
#line 948 "trace_gen.m"
    {
#line 948 "trace_gen.m"
      ll_backend__trace_gen__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 948 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_58_58, 0) = ((MR_Box) (&ll_backend__trace_gen_scalar_common_5[2]));
#line 948 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_58_58, 1) = ((MR_Box) (ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_2));
#line 948 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 948 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_58_58, 3) = ((MR_Box) (ll_backend__trace_gen__MaybeFromFullLval_17));
#line 948 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_58_58, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 948 "trace_gen.m"
    }
#line 948 "trace_gen.m"
    {
#line 948 "trace_gen.m"
      mercury__require__expect_4_p_0(ll_backend__trace_gen__V_58_58, (MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.generate_tailrec_reset_slots_code\'/4", (MR_String) "from_full slot in procedure with TAIL event");
    }
#line 951 "trace_gen.m"
    ll_backend__trace_gen__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 0)));
#line 951 "trace_gen.m"
    ll_backend__trace_gen__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 1)));
#line 951 "trace_gen.m"
    ll_backend__trace_gen__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 2)));
#line 951 "trace_gen.m"
    ll_backend__trace_gen__MaybeIoSeqSlot_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 3)));
#line 951 "trace_gen.m"
    ll_backend__trace_gen__MaybeTrailLvals_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 4)));
#line 951 "trace_gen.m"
    ll_backend__trace_gen__MaybeMaxfrLval_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 5)));
#line 951 "trace_gen.m"
    ll_backend__trace_gen__MaybeCallTableLval_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 6)));
#line 951 "trace_gen.m"
    ll_backend__trace_gen__TailRecInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 7)));
#line 951 "trace_gen.m"
    ll_backend__trace_gen__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 8)));
#line 956 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeIoSeqSlot_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 958 "trace_gen.m"
      ll_backend__trace_gen__IoSeqCodeStr_21 = (MR_String) "";
#line 956 "trace_gen.m"
    else
#line 953 "trace_gen.m"
      {
#line 953 "trace_gen.m"
        MR_Word ll_backend__trace_gen__IoSeqLval_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeIoSeqSlot_18, (MR_Integer) 0)));
#line 953 "trace_gen.m"
        MR_String ll_backend__trace_gen__IoSeqStr_20;
#line 953 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_64_64;

#line 954 "trace_gen.m"
        {
#line 954 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__IoSeqLval_19, &ll_backend__trace_gen__IoSeqStr_20);
        }
#line 955 "trace_gen.m"
        {
#line 955 "trace_gen.m"
          ll_backend__trace_gen__V_64_64 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__IoSeqStr_20, (MR_String) " = MR_io_tabling_counter;\n");
        }
#line 955 "trace_gen.m"
        {
#line 955 "trace_gen.m"
          ll_backend__trace_gen__IoSeqCodeStr_21 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__trace_gen__V_64_64);
        }
#line 953 "trace_gen.m"
      }
#line 969 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeTrailLvals_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 971 "trace_gen.m"
      ll_backend__trace_gen__TrailCodeStr_27 = (MR_String) "";
#line 969 "trace_gen.m"
    else
#line 963 "trace_gen.m"
      {
#line 963 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TrailLval_23;
#line 963 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TicketLval_24;
#line 963 "trace_gen.m"
        MR_String ll_backend__trace_gen__TrailLvalStr_25;
#line 963 "trace_gen.m"
        MR_String ll_backend__trace_gen__TicketLvalStr_26;
#line 963 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTrailLvals_22, (MR_Integer) 0)));
#line 963 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_68_68;
#line 963 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_69_69;
#line 963 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_71_71;
#line 963 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_73_73;

#line 963 "trace_gen.m"
        ll_backend__trace_gen__TrailLval_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_66_66, (MR_Integer) 0)));
#line 963 "trace_gen.m"
        ll_backend__trace_gen__TicketLval_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_66_66, (MR_Integer) 1)));
#line 964 "trace_gen.m"
        {
#line 964 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__TrailLval_23, &ll_backend__trace_gen__TrailLvalStr_25);
        }
#line 965 "trace_gen.m"
        {
#line 965 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__TicketLval_24, &ll_backend__trace_gen__TicketLvalStr_26);
        }
#line 968 "trace_gen.m"
        {
#line 968 "trace_gen.m"
          ll_backend__trace_gen__V_73_73 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TrailLvalStr_25, (MR_String) ");\n");
        }
#line 968 "trace_gen.m"
        {
#line 968 "trace_gen.m"
          ll_backend__trace_gen__V_71_71 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_store_ticket(", ll_backend__trace_gen__V_73_73);
        }
#line 967 "trace_gen.m"
        {
#line 967 "trace_gen.m"
          ll_backend__trace_gen__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) ");\n", ll_backend__trace_gen__V_71_71);
        }
#line 967 "trace_gen.m"
        {
#line 967 "trace_gen.m"
          ll_backend__trace_gen__V_68_68 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TicketLvalStr_26, ll_backend__trace_gen__V_69_69);
        }
#line 967 "trace_gen.m"
        {
#line 967 "trace_gen.m"
          ll_backend__trace_gen__TrailCodeStr_27 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_mark_ticket_stack(", ll_backend__trace_gen__V_68_68);
        }
#line 963 "trace_gen.m"
      }
#line 980 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeMaxfrLval_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 981 "trace_gen.m"
      {
#line 982 "trace_gen.m"
        {
#line 982 "trace_gen.m"
          ll_backend__trace_gen__MaxfrCode_30 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 981 "trace_gen.m"
      }
#line 980 "trace_gen.m"
    else
#line 976 "trace_gen.m"
      {
#line 976 "trace_gen.m"
        MR_Word ll_backend__trace_gen__MaxfrLval_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeMaxfrLval_28, (MR_Integer) 0)));
#line 976 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_75_75;
#line 976 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_76_76;

#line 978 "trace_gen.m"
        {
#line 978 "trace_gen.m"
          ll_backend__trace_gen__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 978 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 978 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_76_76, 1) = ((MR_Box) (ll_backend__trace_gen__MaxfrLval_29));
#line 978 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_76_76, 2) = ((MR_Box) (&ll_backend__trace_gen_scalar_common_3[3]));
#line 978 "trace_gen.m"
        }
#line 978 "trace_gen.m"
        {
#line 978 "trace_gen.m"
          ll_backend__trace_gen__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 978 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_75_75, 0) = ((MR_Box) (ll_backend__trace_gen__V_76_76));
#line 978 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_75_75, 1) = ((MR_Box) ((MR_String) "save initial maxfr"));
#line 978 "trace_gen.m"
        }
#line 977 "trace_gen.m"
        {
#line 977 "trace_gen.m"
          ll_backend__trace_gen__MaxfrCode_30 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__trace_gen__V_75_75)));
        }
#line 976 "trace_gen.m"
      }
#line 993 "trace_gen.m"
    if ((ll_backend__trace_gen__TailRecInfo_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 994 "trace_gen.m"
      {
#line 995 "trace_gen.m"
        {
#line 995 "trace_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.generate_tailrec_reset_slots_code\'/4", (MR_String) "no tail rec lval");
#line 995 "trace_gen.m"
          return;
        }
#line 994 "trace_gen.m"
      }
#line 993 "trace_gen.m"
    else
#line 987 "trace_gen.m"
      {
#line 987 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TailRecLval_32;
#line 987 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TailRecInfo_31, (MR_Integer) 0)));
#line 987 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_84_84;
#line 987 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_85_85;
#line 987 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_86_86;
#line 987 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_88_88;
#line 987 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_33_33;

#line 987 "trace_gen.m"
        ll_backend__trace_gen__TailRecLval_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_83_83, (MR_Integer) 0)));
#line 987 "trace_gen.m"
        ll_backend__trace_gen__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_83_83, (MR_Integer) 1)));
#line 990 "trace_gen.m"
        {
#line 990 "trace_gen.m"
          ll_backend__trace_gen__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 990 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_88_88, 0) = ((MR_Box) (ll_backend__trace_gen__TailRecLval_32));
#line 990 "trace_gen.m"
        }
#line 990 "trace_gen.m"
        {
#line 990 "trace_gen.m"
          ll_backend__trace_gen__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 990 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 990 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 990 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_86_86, 2) = ((MR_Box) (ll_backend__trace_gen__V_88_88));
#line 990 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_86_86, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[17])));
#line 990 "trace_gen.m"
        }
#line 989 "trace_gen.m"
        {
#line 989 "trace_gen.m"
          ll_backend__trace_gen__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 989 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 989 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_85_85, 1) = ((MR_Box) (ll_backend__trace_gen__TailRecLval_32));
#line 989 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_85_85, 2) = ((MR_Box) (ll_backend__trace_gen__V_86_86));
#line 989 "trace_gen.m"
        }
#line 989 "trace_gen.m"
        {
#line 989 "trace_gen.m"
          ll_backend__trace_gen__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 989 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_84_84, 0) = ((MR_Box) (ll_backend__trace_gen__V_85_85));
#line 989 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_84_84, 1) = ((MR_Box) ((MR_String) "increment tail recursion counter"));
#line 989 "trace_gen.m"
        }
#line 988 "trace_gen.m"
        {
#line 988 "trace_gen.m"
          ll_backend__trace_gen__TailRecLvalCode_34 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__trace_gen__V_84_84)));
        }
#line 987 "trace_gen.m"
      }
#line 1003 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeCallTableLval_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1005 "trace_gen.m"
      ll_backend__trace_gen__CallTableCodeStr_38 = (MR_String) "";
#line 1003 "trace_gen.m"
    else
#line 1000 "trace_gen.m"
      {
#line 1000 "trace_gen.m"
        MR_Word ll_backend__trace_gen__CallTableLval_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeCallTableLval_35, (MR_Integer) 0)));
#line 1000 "trace_gen.m"
        MR_String ll_backend__trace_gen__CallTableLvalStr_37;
#line 1000 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_94_94;

#line 1001 "trace_gen.m"
        {
#line 1001 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallTableLval_36, &ll_backend__trace_gen__CallTableLvalStr_37);
        }
#line 1002 "trace_gen.m"
        {
#line 1002 "trace_gen.m"
          ll_backend__trace_gen__V_94_94 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallTableLvalStr_37, (MR_String) " = 0;\n");
        }
#line 1002 "trace_gen.m"
        {
#line 1002 "trace_gen.m"
          ll_backend__trace_gen__CallTableCodeStr_38 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__trace_gen__V_94_94);
        }
#line 1000 "trace_gen.m"
      }
#line 1007 "trace_gen.m"
    {
#line 1007 "trace_gen.m"
      ll_backend__trace_gen__V_97_97 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TrailCodeStr_27, ll_backend__trace_gen__CallTableCodeStr_38);
    }
#line 1007 "trace_gen.m"
    {
#line 1007 "trace_gen.m"
      ll_backend__trace_gen__V_96_96 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__IoSeqCodeStr_21, ll_backend__trace_gen__V_97_97);
    }
#line 1007 "trace_gen.m"
    {
#line 1007 "trace_gen.m"
      ll_backend__trace_gen__ForeignLangCodeStr_39 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__StdSlotCodeStr_15, ll_backend__trace_gen__V_96_96);
    }
#line 1010 "trace_gen.m"
    {
#line 1010 "trace_gen.m"
      ll_backend__trace_gen__V_102_102 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
    }
#line 1010 "trace_gen.m"
    {
#line 1010 "trace_gen.m"
      ll_backend__trace_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1010 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_101_101, 0) = ((MR_Box) (ll_backend__trace_gen__V_102_102));
#line 1010 "trace_gen.m"
    }
#line 1009 "trace_gen.m"
    {
#line 1009 "trace_gen.m"
      ll_backend__trace_gen__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1009 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1009 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1009 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1009 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 3) = ((MR_Box) (ll_backend__trace_gen__V_101_101));
#line 1009 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 4) = ((MR_Box) (ll_backend__trace_gen__ForeignLangCodeStr_39));
#line 1009 "trace_gen.m"
    }
#line 1011 "trace_gen.m"
    {
#line 1011 "trace_gen.m"
      ll_backend__trace_gen__ForeignLangComponents_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1011 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__ForeignLangComponents_40, 0) = ((MR_Box) (ll_backend__trace_gen__V_98_98));
#line 1011 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__ForeignLangComponents_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1011 "trace_gen.m"
    }
#line 6176 "ll_backend.trace_gen.c"
    ll_backend__trace_gen__TypeCtorInfo_179_179 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 1013 "trace_gen.m"
    {
#line 1013 "trace_gen.m"
      ll_backend__trace_gen__V_105_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 1013 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 1013 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1013 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 2) = ((MR_Box) (ll_backend__trace_gen__ForeignLangComponents_40));
#line 1013 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 3) = ((MR_Box) ((MR_Integer) 1));
#line 1013 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1013 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1013 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1013 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1013 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1013 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 9) = ((MR_Box) ((MR_Integer) 1));
#line 1013 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 10) = ((MR_Box) ((MR_Integer) 0));
#line 1013 "trace_gen.m"
    }
#line 1013 "trace_gen.m"
    {
#line 1013 "trace_gen.m"
      ll_backend__trace_gen__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1013 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_104_104, 0) = ((MR_Box) (ll_backend__trace_gen__V_105_105));
#line 1013 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_104_104, 1) = ((MR_Box) ((MR_String) ""));
#line 1013 "trace_gen.m"
    }
#line 1012 "trace_gen.m"
    {
#line 1012 "trace_gen.m"
      ll_backend__trace_gen__ForeignLangCode_41 = mercury__cord__singleton_1_f_0(ll_backend__trace_gen__TypeCtorInfo_179_179, ((MR_Box) (ll_backend__trace_gen__V_104_104)));
    }
#line 1017 "trace_gen.m"
    {
#line 1017 "trace_gen.m"
      ll_backend__trace_gen__V_116_116 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_179_179, ll_backend__trace_gen__MaxfrCode_30, ll_backend__trace_gen__TailRecLvalCode_34);
    }
#line 1017 "trace_gen.m"
    {
#line 1017 "trace_gen.m"
      *ll_backend__trace_gen__Code_6 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_179_179, ll_backend__trace_gen__ForeignLangCode_41, ll_backend__trace_gen__V_116_116);
    }
#line 925 "trace_gen.m"
    *ll_backend__trace_gen__STATE_VARIABLE_CI_43 = ll_backend__trace_gen__STATE_VARIABLE_CI_0_42;
#line 925 "trace_gen.m"
  }
#line 922 "trace_gen.m"
}

#line 1184 "trace_gen.m"
static MR_bool MR_CALL 
ll_backend__trace_gen__maybe_setup_redo_event_2_p_0_1(
#line 1184 "trace_gen.m"
  MR_Box ll_backend__trace_gen__closure_arg)
#line 1184 "trace_gen.m"
{
#line 1184 "trace_gen.m"
  {
#line 1184 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 1184 "trace_gen.m"
    MR_Box ll_backend__trace_gen__closure = ll_backend__trace_gen__closure_arg;

#line 1184 "trace_gen.m"
    {
#line 1184 "trace_gen.m"
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen__IntroducedFrom__pred__maybe_setup_redo_event__1184__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__closure, (MR_Integer) 4))));
    }
#line 1184 "trace_gen.m"
    return ll_backend__trace_gen__succeeded;
#line 1184 "trace_gen.m"
  }
#line 1184 "trace_gen.m"
}

#line 233 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__maybe_setup_redo_event_2_p_0(
#line 233 "trace_gen.m"
  MR_Word ll_backend__trace_gen__TraceInfo_3,
#line 233 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_4)
#line 233 "trace_gen.m"
{
#line 1175 "trace_gen.m"
  {
#line 1175 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 1175 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceRedoLabel_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 8)));
#line 1175 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 2)));
#line 1176 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 0)));
#line 1176 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 1)));
#line 1176 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 3)));
#line 1176 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 4)));
#line 1176 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 5)));
#line 1176 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 6)));
#line 1176 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 7)));

#line 1199 "trace_gen.m"
    if ((ll_backend__trace_gen__TraceRedoLabel_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1200 "trace_gen.m"
      {
#line 1201 "trace_gen.m"
        {
#line 1201 "trace_gen.m"
          *ll_backend__trace_gen__Code_4 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 1200 "trace_gen.m"
      }
#line 1199 "trace_gen.m"
    else
#line 1191 "trace_gen.m"
    if ((ll_backend__trace_gen__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1192 "trace_gen.m"
      {
#line 1193 "trace_gen.m"
        {
#line 1193 "trace_gen.m"
          *ll_backend__trace_gen__Code_4 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (&ll_backend__trace_gen_scalar_common_1[12])));
        }
#line 1192 "trace_gen.m"
      }
#line 1191 "trace_gen.m"
    else
#line 1181 "trace_gen.m"
      {
#line 1181 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Lval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_31_31, (MR_Integer) 0)));
#line 1181 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_16_16;

#line 1184 "trace_gen.m"
        {
#line 1184 "trace_gen.m"
          ll_backend__trace_gen__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1184 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_16_16, 0) = ((MR_Box) (&ll_backend__trace_gen_scalar_common_5[0]));
#line 1184 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_16_16, 1) = ((MR_Box) (ll_backend__trace_gen__maybe_setup_redo_event_2_p_0_1));
#line 1184 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1184 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_16_16, 3) = ((MR_Box) (ll_backend__trace_gen__Lval_8));
#line 1184 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_16_16, 4) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[16])));
#line 1184 "trace_gen.m"
        }
#line 1184 "trace_gen.m"
        {
#line 1184 "trace_gen.m"
          mercury__require__expect_4_p_0(ll_backend__trace_gen__V_16_16, (MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.maybe_setup_redo_event\'/2", (MR_String) "from-full flag not stored in expected slot");
        }
#line 1186 "trace_gen.m"
        {
#line 1186 "trace_gen.m"
          *ll_backend__trace_gen__Code_4 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (&ll_backend__trace_gen_scalar_common_1[13])));
        }
#line 1181 "trace_gen.m"
      }
#line 1175 "trace_gen.m"
  }
#line 233 "trace_gen.m"
}

#line 224 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__generate_external_event_code_8_p_0(
#line 224 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ExternalPort_9,
#line 224 "trace_gen.m"
  MR_Word ll_backend__trace_gen__TraceInfo_10,
#line 224 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Context_11,
#line 224 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__MaybeExternalInfo_12,
#line 224 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_23,
#line 224 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_24,
#line 224 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_25,
#line 224 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_26)
#line 224 "trace_gen.m"
{
#line 887 "trace_gen.m"
  {
#line 887 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 887 "trace_gen.m"
    MR_Word ll_backend__trace_gen__Port_15 = ((&ll_backend__trace_gen_vector_common_4[0 + ll_backend__trace_gen__ExternalPort_9]))->ll_backend__trace_gen__vector_common_type_4_0__vct_4_f_0;
#line 887 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ModuleInfo_16;
#line 887 "trace_gen.m"
    MR_Word ll_backend__trace_gen__PredInfo_17;
#line 887 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ProcInfo_18;
#line 887 "trace_gen.m"
    MR_Word ll_backend__trace_gen__NeedPort_19;
#line 887 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_27_27;
#line 887 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_36_36;
#line 892 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_37_37;
#line 892 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_38_38;
#line 892 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_39_39;
#line 892 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_40_40;
#line 892 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_41_41;
#line 892 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_42_42;
#line 892 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_43_43;

#line 889 "trace_gen.m"
    {
#line 889 "trace_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_23, &ll_backend__trace_gen__ModuleInfo_16);
    }
#line 890 "trace_gen.m"
    {
#line 890 "trace_gen.m"
      ll_backend__code_info__get_pred_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_23, &ll_backend__trace_gen__PredInfo_17);
    }
#line 891 "trace_gen.m"
    {
#line 891 "trace_gen.m"
      ll_backend__code_info__get_proc_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_23, &ll_backend__trace_gen__ProcInfo_18);
    }
#line 892 "trace_gen.m"
    ll_backend__trace_gen__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 0)));
#line 892 "trace_gen.m"
    ll_backend__trace_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 1)));
#line 892 "trace_gen.m"
    ll_backend__trace_gen__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 2)));
#line 892 "trace_gen.m"
    ll_backend__trace_gen__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 3)));
#line 892 "trace_gen.m"
    ll_backend__trace_gen__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 4)));
#line 892 "trace_gen.m"
    ll_backend__trace_gen__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 5)));
#line 892 "trace_gen.m"
    ll_backend__trace_gen__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 6)));
#line 892 "trace_gen.m"
    ll_backend__trace_gen__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 7)));
#line 892 "trace_gen.m"
    ll_backend__trace_gen__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 8)));
#line 892 "trace_gen.m"
    {
#line 892 "trace_gen.m"
      ll_backend__trace_gen__NeedPort_19 = libs__trace_params__eff_trace_needs_port_6_f_0(ll_backend__trace_gen__ModuleInfo_16, ll_backend__trace_gen__PredInfo_17, ll_backend__trace_gen__ProcInfo_18, ll_backend__trace_gen__V_27_27, ll_backend__trace_gen__V_36_36, ll_backend__trace_gen__Port_15);
    }
#line 899 "trace_gen.m"
#line 899 "trace_gen.m"
    switch (ll_backend__trace_gen__NeedPort_19) {
#line 899 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 899 "trace_gen.m"
      case (MR_Integer) 0:
#line 900 "trace_gen.m"
        {
#line 901 "trace_gen.m"
          *ll_backend__trace_gen__MaybeExternalInfo_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 900 "trace_gen.m"
          *ll_backend__trace_gen__STATE_VARIABLE_CI_24 = ll_backend__trace_gen__STATE_VARIABLE_CI_0_23;
#line 900 "trace_gen.m"
          *ll_backend__trace_gen__STATE_VARIABLE_CLD_26 = ll_backend__trace_gen__STATE_VARIABLE_CLD_0_25;
#line 900 "trace_gen.m"
        }
#line 899 "trace_gen.m"
        break;
#line 899 "trace_gen.m"
      case (MR_Integer) 1:
#line 895 "trace_gen.m"
        {
#line 895 "trace_gen.m"
          MR_Word ll_backend__trace_gen__Label_20;
#line 895 "trace_gen.m"
          MR_Word ll_backend__trace_gen__TvarDataMap_21;
#line 895 "trace_gen.m"
          MR_Word ll_backend__trace_gen__Code_22;
#line 895 "trace_gen.m"
          MR_Word ll_backend__trace_gen__V_30_30;
#line 895 "trace_gen.m"
          MR_Word ll_backend__trace_gen__V_35_35;

#line 896 "trace_gen.m"
          {
#line 896 "trace_gen.m"
            ll_backend__trace_gen__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 896 "trace_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_30_30, 0) = ((MR_Box) (ll_backend__trace_gen__TraceInfo_10));
#line 896 "trace_gen.m"
          }
#line 896 "trace_gen.m"
          {
#line 896 "trace_gen.m"
            ll_backend__trace_gen__generate_event_code_13_p_0(ll_backend__trace_gen__Port_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__trace_gen__V_30_30, ll_backend__trace_gen__Context_11, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__trace_gen__Label_20, &ll_backend__trace_gen__TvarDataMap_21, &ll_backend__trace_gen__Code_22, ll_backend__trace_gen__STATE_VARIABLE_CI_0_23, ll_backend__trace_gen__STATE_VARIABLE_CI_24, ll_backend__trace_gen__STATE_VARIABLE_CLD_0_25, ll_backend__trace_gen__STATE_VARIABLE_CLD_26);
          }
#line 898 "trace_gen.m"
          {
#line 898 "trace_gen.m"
            ll_backend__trace_gen__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 898 "trace_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_35_35, 0) = ((MR_Box) (ll_backend__trace_gen__Label_20));
#line 898 "trace_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_35_35, 1) = ((MR_Box) (ll_backend__trace_gen__TvarDataMap_21));
#line 898 "trace_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_35_35, 2) = ((MR_Box) (ll_backend__trace_gen__Code_22));
#line 898 "trace_gen.m"
          }
#line 898 "trace_gen.m"
          {
#line 898 "trace_gen.m"
            MR_Word base;
#line 898 "trace_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 898 "trace_gen.m"
            *ll_backend__trace_gen__MaybeExternalInfo_12 = base;
#line 898 "trace_gen.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__trace_gen__V_35_35));
#line 898 "trace_gen.m"
          }
#line 895 "trace_gen.m"
        }
#line 899 "trace_gen.m"
        break;
#line 899 "trace_gen.m"
    }
#line 887 "trace_gen.m"
  }
#line 224 "trace_gen.m"
}

#line 199 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__generate_tailrec_event_code_10_p_0(
#line 199 "trace_gen.m"
  MR_Word ll_backend__trace_gen__TraceInfo_11,
#line 199 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ArgsInfos_12,
#line 199 "trace_gen.m"
  MR_Word ll_backend__trace_gen__GoalId_13,
#line 199 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Context_14,
#line 199 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_15,
#line 199 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__TailRecLabel_16,
#line 199 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_29,
#line 199 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_30,
#line 199 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_31,
#line 199 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_32)
#line 199 "trace_gen.m"
{
#line 905 "trace_gen.m"
  {
#line 905 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 905 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ContainingGoalMap_20;
#line 905 "trace_gen.m"
    MR_Word ll_backend__trace_gen__GoalPath_21;
#line 905 "trace_gen.m"
    MR_Word ll_backend__trace_gen__PortInfo_22;
#line 905 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTailRecInfo_27;
#line 905 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_33_33;
#line 912 "trace_gen.m"
    MR_Word ll_backend__trace_gen___Label_25;
#line 912 "trace_gen.m"
    MR_Word ll_backend__trace_gen___TvarDataMap_26;
#line 914 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_40_40;
#line 914 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_41_41;
#line 914 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_42_42;
#line 914 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_43_43;
#line 914 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_44_44;
#line 914 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_45_45;
#line 914 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_46_46;
#line 914 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_47_47;

#line 907 "trace_gen.m"
    {
#line 907 "trace_gen.m"
      ll_backend__code_info__get_containing_goal_map_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_29, &ll_backend__trace_gen__ContainingGoalMap_20);
    }
#line 908 "trace_gen.m"
    {
#line 908 "trace_gen.m"
      ll_backend__trace_gen__GoalPath_21 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__trace_gen__ContainingGoalMap_20, ll_backend__trace_gen__GoalId_13);
    }
#line 909 "trace_gen.m"
    {
#line 909 "trace_gen.m"
      ll_backend__trace_gen__PortInfo_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 909 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__PortInfo_22, 0) = ((MR_Box) (ll_backend__trace_gen__GoalPath_21));
#line 909 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__PortInfo_22, 1) = ((MR_Box) (ll_backend__trace_gen__ArgsInfos_12));
#line 909 "trace_gen.m"
    }
#line 912 "trace_gen.m"
    {
#line 912 "trace_gen.m"
      ll_backend__trace_gen__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 912 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_33_33, 0) = ((MR_Box) (ll_backend__trace_gen__TraceInfo_11));
#line 912 "trace_gen.m"
    }
#line 912 "trace_gen.m"
    {
#line 912 "trace_gen.m"
      ll_backend__trace_gen__generate_event_code_13_p_0((MR_Integer) 4, ll_backend__trace_gen__PortInfo_22, ll_backend__trace_gen__V_33_33, ll_backend__trace_gen__Context_14, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__trace_gen___Label_25, &ll_backend__trace_gen___TvarDataMap_26, ll_backend__trace_gen__Code_15, ll_backend__trace_gen__STATE_VARIABLE_CI_0_29, ll_backend__trace_gen__STATE_VARIABLE_CI_30, ll_backend__trace_gen__STATE_VARIABLE_CLD_0_31, ll_backend__trace_gen__STATE_VARIABLE_CLD_32);
    }
#line 914 "trace_gen.m"
    ll_backend__trace_gen__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 0)));
#line 914 "trace_gen.m"
    ll_backend__trace_gen__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 1)));
#line 914 "trace_gen.m"
    ll_backend__trace_gen__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 2)));
#line 914 "trace_gen.m"
    ll_backend__trace_gen__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 3)));
#line 914 "trace_gen.m"
    ll_backend__trace_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 4)));
#line 914 "trace_gen.m"
    ll_backend__trace_gen__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 5)));
#line 914 "trace_gen.m"
    ll_backend__trace_gen__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 6)));
#line 914 "trace_gen.m"
    ll_backend__trace_gen__MaybeTailRecInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 7)));
#line 914 "trace_gen.m"
    ll_backend__trace_gen__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 8)));
#line 917 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeTailRecInfo_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 918 "trace_gen.m"
      {
#line 919 "trace_gen.m"
        {
#line 919 "trace_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.generate_tailrec_event_code\'/10", (MR_String) "no tail rec label");
#line 919 "trace_gen.m"
          return;
        }
#line 918 "trace_gen.m"
      }
#line 917 "trace_gen.m"
    else
#line 916 "trace_gen.m"
      {
#line 916 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTailRecInfo_27, (MR_Integer) 0)));
#line 916 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_39_39, (MR_Integer) 0)));

#line 916 "trace_gen.m"
        *ll_backend__trace_gen__TailRecLabel_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_39_39, (MR_Integer) 1)));
#line 916 "trace_gen.m"
      }
#line 905 "trace_gen.m"
  }
#line 199 "trace_gen.m"
}

#line 195 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__generate_user_event_code_7_p_0(
#line 195 "trace_gen.m"
  MR_Word ll_backend__trace_gen__UserInfo_8,
#line 195 "trace_gen.m"
  MR_Word ll_backend__trace_gen__GoalInfo_9,
#line 195 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_10,
#line 195 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_23,
#line 195 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_24,
#line 195 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_25,
#line 195 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_26)
#line 195 "trace_gen.m"
{
#line 874 "trace_gen.m"
  {
#line 874 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 874 "trace_gen.m"
    MR_Word ll_backend__trace_gen__GoalId_13;
#line 874 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ContainingGoalMap_14;
#line 874 "trace_gen.m"
    MR_Word ll_backend__trace_gen__GoalPath_15;
#line 874 "trace_gen.m"
    MR_Word ll_backend__trace_gen__Context_16;
#line 874 "trace_gen.m"
    MR_Word ll_backend__trace_gen__PortInfo_18;
#line 874 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_27_27;
#line 883 "trace_gen.m"
    MR_Word ll_backend__trace_gen___Label_21;
#line 883 "trace_gen.m"
    MR_Word ll_backend__trace_gen___TvarDataMap_22;

#line 875 "trace_gen.m"
    {
#line 875 "trace_gen.m"
      ll_backend__trace_gen__GoalId_13 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__trace_gen__GoalInfo_9);
    }
#line 876 "trace_gen.m"
    {
#line 876 "trace_gen.m"
      ll_backend__code_info__get_containing_goal_map_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_23, &ll_backend__trace_gen__ContainingGoalMap_14);
    }
#line 877 "trace_gen.m"
    {
#line 877 "trace_gen.m"
      ll_backend__trace_gen__GoalPath_15 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__trace_gen__ContainingGoalMap_14, ll_backend__trace_gen__GoalId_13);
    }
#line 878 "trace_gen.m"
    {
#line 878 "trace_gen.m"
      ll_backend__trace_gen__Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__trace_gen__GoalInfo_9);
    }
#line 880 "trace_gen.m"
    {
#line 880 "trace_gen.m"
      ll_backend__trace_gen__PortInfo_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 880 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__PortInfo_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 880 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__PortInfo_18, 1) = ((MR_Box) (ll_backend__trace_gen__GoalPath_15));
#line 880 "trace_gen.m"
    }
#line 884 "trace_gen.m"
    {
#line 884 "trace_gen.m"
      ll_backend__trace_gen__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 884 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_27_27, 0) = ((MR_Box) (ll_backend__trace_gen__UserInfo_8));
#line 884 "trace_gen.m"
    }
#line 883 "trace_gen.m"
    {
#line 883 "trace_gen.m"
      ll_backend__trace_gen__generate_event_code_13_p_0((MR_Integer) 15, ll_backend__trace_gen__PortInfo_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__trace_gen__Context_16, (MR_Integer) 0, ll_backend__trace_gen__V_27_27, &ll_backend__trace_gen___Label_21, &ll_backend__trace_gen___TvarDataMap_22, ll_backend__trace_gen__Code_10, ll_backend__trace_gen__STATE_VARIABLE_CI_0_23, ll_backend__trace_gen__STATE_VARIABLE_CI_24, ll_backend__trace_gen__STATE_VARIABLE_CLD_0_25, ll_backend__trace_gen__STATE_VARIABLE_CLD_26);
    }
#line 874 "trace_gen.m"
  }
#line 195 "trace_gen.m"
}

#line 189 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__maybe_generate_negated_event_code_8_p_0(
#line 189 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Goal_9,
#line 189 "trace_gen.m"
  MR_Word ll_backend__trace_gen__OutsideGoalInfo_10,
#line 189 "trace_gen.m"
  MR_Word ll_backend__trace_gen__NegPort_11,
#line 189 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_12,
#line 189 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_30,
#line 189 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_31,
#line 189 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_32,
#line 189 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_33)
#line 189 "trace_gen.m"
{
#line 838 "trace_gen.m"
  {
#line 838 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 838 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTraceInfo_15;
#line 870 "trace_gen.m"
    MR_Word ll_backend__trace_gen__Port_17;
#line 841 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceInfo_16;
#line 841 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ModuleInfo_18;
#line 841 "trace_gen.m"
    MR_Word ll_backend__trace_gen__PredInfo_19;
#line 841 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ProcInfo_20;
#line 841 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_34_34;
#line 841 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_35_35;
#line 841 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_43_43;
#line 852 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_44_44;
#line 852 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_45_45;
#line 852 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_46_46;
#line 852 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_47_47;
#line 852 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_48_48;
#line 852 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_49_49;
#line 852 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_50_50;

#line 839 "trace_gen.m"
    {
#line 839 "trace_gen.m"
      ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_30, &ll_backend__trace_gen__MaybeTraceInfo_15);
    }
#line 841 "trace_gen.m"
    ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__MaybeTraceInfo_15)) == (MR_mktag((MR_Integer) 1)));
#line 841 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 841 "trace_gen.m"
      {
#line 841 "trace_gen.m"
        ll_backend__trace_gen__TraceInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTraceInfo_15, (MR_Integer) 0)));
#line 845 "trace_gen.m"
#line 845 "trace_gen.m"
        switch (ll_backend__trace_gen__NegPort_11) {
#line 845 "trace_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 845 "trace_gen.m"
          case (MR_Integer) 1:
#line 844 "trace_gen.m"
            ll_backend__trace_gen__Port_17 = (MR_Integer) 11;
#line 845 "trace_gen.m"
            break;
#line 845 "trace_gen.m"
          case (MR_Integer) 0:
#line 847 "trace_gen.m"
            ll_backend__trace_gen__Port_17 = (MR_Integer) 10;
#line 845 "trace_gen.m"
            break;
#line 845 "trace_gen.m"
        }
#line 849 "trace_gen.m"
        {
#line 849 "trace_gen.m"
          ll_backend__code_info__get_module_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_30, &ll_backend__trace_gen__ModuleInfo_18);
        }
#line 850 "trace_gen.m"
        {
#line 850 "trace_gen.m"
          ll_backend__code_info__get_pred_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_30, &ll_backend__trace_gen__PredInfo_19);
        }
#line 851 "trace_gen.m"
        {
#line 851 "trace_gen.m"
          ll_backend__code_info__get_proc_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_30, &ll_backend__trace_gen__ProcInfo_20);
        }
#line 852 "trace_gen.m"
        ll_backend__trace_gen__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 0)));
#line 852 "trace_gen.m"
        ll_backend__trace_gen__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 1)));
#line 852 "trace_gen.m"
        ll_backend__trace_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 2)));
#line 852 "trace_gen.m"
        ll_backend__trace_gen__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 3)));
#line 852 "trace_gen.m"
        ll_backend__trace_gen__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 4)));
#line 852 "trace_gen.m"
        ll_backend__trace_gen__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 5)));
#line 852 "trace_gen.m"
        ll_backend__trace_gen__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 6)));
#line 852 "trace_gen.m"
        ll_backend__trace_gen__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 7)));
#line 852 "trace_gen.m"
        ll_backend__trace_gen__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 8)));
#line 852 "trace_gen.m"
        {
#line 852 "trace_gen.m"
          ll_backend__trace_gen__V_34_34 = libs__trace_params__eff_trace_needs_port_6_f_0(ll_backend__trace_gen__ModuleInfo_18, ll_backend__trace_gen__PredInfo_19, ll_backend__trace_gen__ProcInfo_20, ll_backend__trace_gen__V_35_35, ll_backend__trace_gen__V_43_43, ll_backend__trace_gen__Port_17);
        }
#line 854 "trace_gen.m"
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_34_34 == (MR_Integer) 1);
#line 841 "trace_gen.m"
      }
#line 870 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 856 "trace_gen.m"
      {
#line 856 "trace_gen.m"
        MR_Word ll_backend__trace_gen__GoalInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Goal_9, (MR_Integer) 1)));
#line 856 "trace_gen.m"
        MR_Word ll_backend__trace_gen__GoalId_23;
#line 856 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Context_24;
#line 856 "trace_gen.m"
        MR_Word ll_backend__trace_gen__HideEvent_25;
#line 856 "trace_gen.m"
        MR_Word ll_backend__trace_gen__ContainingGoalMap_26;
#line 856 "trace_gen.m"
        MR_Word ll_backend__trace_gen__GoalPath_27;
#line 856 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_38_38;
#line 856 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Goal_9, (MR_Integer) 0)));
#line 868 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_28_28;
#line 868 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_29_29;

#line 857 "trace_gen.m"
        {
#line 857 "trace_gen.m"
          ll_backend__trace_gen__GoalId_23 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__trace_gen__GoalInfo_22);
        }
#line 858 "trace_gen.m"
        {
#line 858 "trace_gen.m"
          ll_backend__trace_gen__Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__trace_gen__GoalInfo_22);
        }
#line 860 "trace_gen.m"
        {
#line 860 "trace_gen.m"
          ll_backend__trace_gen__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(ll_backend__trace_gen__OutsideGoalInfo_10, (MR_Integer) 8);
        }
#line 863 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 862 "trace_gen.m"
          ll_backend__trace_gen__HideEvent_25 = (MR_Integer) 1;
#line 863 "trace_gen.m"
        else
#line 864 "trace_gen.m"
          ll_backend__trace_gen__HideEvent_25 = (MR_Integer) 0;
#line 866 "trace_gen.m"
        {
#line 866 "trace_gen.m"
          ll_backend__code_info__get_containing_goal_map_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_30, &ll_backend__trace_gen__ContainingGoalMap_26);
        }
#line 867 "trace_gen.m"
        {
#line 867 "trace_gen.m"
          ll_backend__trace_gen__GoalPath_27 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__trace_gen__ContainingGoalMap_26, ll_backend__trace_gen__GoalId_23);
        }
#line 868 "trace_gen.m"
        {
#line 868 "trace_gen.m"
          ll_backend__trace_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 868 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 868 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_38_38, 1) = ((MR_Box) (ll_backend__trace_gen__GoalPath_27));
#line 868 "trace_gen.m"
        }
#line 868 "trace_gen.m"
        {
#line 868 "trace_gen.m"
          ll_backend__trace_gen__generate_event_code_13_p_0(ll_backend__trace_gen__Port_17, ll_backend__trace_gen__V_38_38, ll_backend__trace_gen__MaybeTraceInfo_15, ll_backend__trace_gen__Context_24, ll_backend__trace_gen__HideEvent_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__trace_gen__V_28_28, &ll_backend__trace_gen__V_29_29, ll_backend__trace_gen__Code_12, ll_backend__trace_gen__STATE_VARIABLE_CI_0_30, ll_backend__trace_gen__STATE_VARIABLE_CI_31, ll_backend__trace_gen__STATE_VARIABLE_CLD_0_32, ll_backend__trace_gen__STATE_VARIABLE_CLD_33);
        }
#line 856 "trace_gen.m"
      }
#line 870 "trace_gen.m"
    else
#line 871 "trace_gen.m"
      {
#line 871 "trace_gen.m"
        {
#line 871 "trace_gen.m"
          *ll_backend__trace_gen__Code_12 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 871 "trace_gen.m"
        *ll_backend__trace_gen__STATE_VARIABLE_CLD_33 = ll_backend__trace_gen__STATE_VARIABLE_CLD_0_32;
#line 871 "trace_gen.m"
        *ll_backend__trace_gen__STATE_VARIABLE_CI_31 = ll_backend__trace_gen__STATE_VARIABLE_CI_0_30;
#line 871 "trace_gen.m"
      }
#line 838 "trace_gen.m"
  }
#line 189 "trace_gen.m"
}

#line 182 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(
#line 182 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Goal_8,
#line 182 "trace_gen.m"
  MR_Word ll_backend__trace_gen__OutsideGoalInfo_9,
#line 182 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__Code_10,
#line 182 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_36,
#line 182 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_37,
#line 182 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_38,
#line 182 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_39)
#line 182 "trace_gen.m"
{
#line 770 "trace_gen.m"
  {
#line 770 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 770 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTraceInfo_13;

#line 771 "trace_gen.m"
    {
#line 771 "trace_gen.m"
      ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_36, &ll_backend__trace_gen__MaybeTraceInfo_13);
    }
#line 832 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeTraceInfo_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 833 "trace_gen.m"
      {
#line 834 "trace_gen.m"
        {
#line 834 "trace_gen.m"
          *ll_backend__trace_gen__Code_10 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 833 "trace_gen.m"
        *ll_backend__trace_gen__STATE_VARIABLE_CI_37 = ll_backend__trace_gen__STATE_VARIABLE_CI_0_36;
#line 833 "trace_gen.m"
        *ll_backend__trace_gen__STATE_VARIABLE_CLD_39 = ll_backend__trace_gen__STATE_VARIABLE_CLD_0_38;
#line 833 "trace_gen.m"
      }
#line 832 "trace_gen.m"
    else
#line 773 "trace_gen.m"
      {
#line 773 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TraceInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTraceInfo_13, (MR_Integer) 0)));
#line 773 "trace_gen.m"
        MR_Word ll_backend__trace_gen__GoalInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Goal_8, (MR_Integer) 1)));
#line 773 "trace_gen.m"
        MR_Word ll_backend__trace_gen__GoalId_17;
#line 773 "trace_gen.m"
        MR_Word ll_backend__trace_gen__ContainingGoalMap_18;
#line 773 "trace_gen.m"
        MR_Word ll_backend__trace_gen__ContainingGoal_19;
#line 773 "trace_gen.m"
        MR_Word ll_backend__trace_gen__Port_26;
#line 774 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Goal_8, (MR_Integer) 0)));
#line 777 "trace_gen.m"
        MR_Box ll_backend__trace_gen__conv0_ContainingGoal_19;
#line 805 "trace_gen.m"
        MR_Word ll_backend__trace_gen__PortPrime_24;
#line 779 "trace_gen.m"
        MR_Word ll_backend__trace_gen__LastStep_21;
#line 779 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_20_20;
#line 809 "trace_gen.m"
        MR_Word ll_backend__trace_gen__ModuleInfo_27;
#line 809 "trace_gen.m"
        MR_Word ll_backend__trace_gen__PredInfo_28;
#line 809 "trace_gen.m"
        MR_Word ll_backend__trace_gen__ProcInfo_29;
#line 809 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_43_43;
#line 809 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_44_44;
#line 809 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_52_52;
#line 812 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_53_53;
#line 812 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_54_54;
#line 812 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_55_55;
#line 812 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_56_56;
#line 812 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_57_57;
#line 812 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_58_58;
#line 812 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_59_59;

#line 775 "trace_gen.m"
        {
#line 775 "trace_gen.m"
          ll_backend__trace_gen__GoalId_17 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__trace_gen__GoalInfo_16);
        }
#line 776 "trace_gen.m"
        {
#line 776 "trace_gen.m"
          ll_backend__code_info__get_containing_goal_map_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_36, &ll_backend__trace_gen__ContainingGoalMap_18);
        }
#line 777 "trace_gen.m"
        {
#line 777 "trace_gen.m"
          mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0, ll_backend__trace_gen__ContainingGoalMap_18, ((MR_Box) (ll_backend__trace_gen__GoalId_17)), &ll_backend__trace_gen__conv0_ContainingGoal_19);
        }
#line 777 "trace_gen.m"
        ll_backend__trace_gen__ContainingGoal_19 = ((MR_Word) ll_backend__trace_gen__conv0_ContainingGoal_19);
#line 779 "trace_gen.m"
        ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__ContainingGoal_19)) == (MR_mktag((MR_Integer) 1)));
#line 779 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 779 "trace_gen.m"
          {
#line 779 "trace_gen.m"
            ll_backend__trace_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__ContainingGoal_19, (MR_Integer) 0)));
#line 779 "trace_gen.m"
            ll_backend__trace_gen__LastStep_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__ContainingGoal_19, (MR_Integer) 1)));
#line 783 "trace_gen.m"
#line 783 "trace_gen.m"
            switch (MR_tag((MR_Word) ll_backend__trace_gen__LastStep_21)) {
#line 783 "trace_gen.m"
              default:
#line 783 "trace_gen.m"
                ll_backend__trace_gen__succeeded = MR_FALSE;
#line 783 "trace_gen.m"
                break;
#line 783 "trace_gen.m"
              case (MR_Integer) 0:
#line 783 "trace_gen.m"
#line 783 "trace_gen.m"
                switch (MR_unmkbody(ll_backend__trace_gen__LastStep_21)) {
#line 783 "trace_gen.m"
                  default:
#line 783 "trace_gen.m"
                    ll_backend__trace_gen__succeeded = MR_FALSE;
#line 783 "trace_gen.m"
                    break;
#line 783 "trace_gen.m"
                  case (MR_Integer) 0:
#line 792 "trace_gen.m"
                    {
#line 792 "trace_gen.m"
                      ll_backend__trace_gen__PortPrime_24 = (MR_Integer) 6;
#line 792 "trace_gen.m"
                      ll_backend__trace_gen__succeeded = MR_TRUE;
#line 792 "trace_gen.m"
                    }
#line 783 "trace_gen.m"
                    break;
#line 783 "trace_gen.m"
                  case (MR_Integer) 1:
#line 795 "trace_gen.m"
                    {
#line 795 "trace_gen.m"
                      ll_backend__trace_gen__PortPrime_24 = (MR_Integer) 7;
#line 795 "trace_gen.m"
                      ll_backend__trace_gen__succeeded = MR_TRUE;
#line 795 "trace_gen.m"
                    }
#line 783 "trace_gen.m"
                    break;
#line 783 "trace_gen.m"
                  case (MR_Integer) 2:
#line 798 "trace_gen.m"
                    {
#line 798 "trace_gen.m"
                      ll_backend__trace_gen__PortPrime_24 = (MR_Integer) 8;
#line 798 "trace_gen.m"
                      ll_backend__trace_gen__succeeded = MR_TRUE;
#line 798 "trace_gen.m"
                    }
#line 783 "trace_gen.m"
                    break;
#line 783 "trace_gen.m"
                  case (MR_Integer) 3:
#line 801 "trace_gen.m"
                    {
#line 801 "trace_gen.m"
                      ll_backend__trace_gen__PortPrime_24 = (MR_Integer) 9;
#line 801 "trace_gen.m"
                      ll_backend__trace_gen__succeeded = MR_TRUE;
#line 801 "trace_gen.m"
                    }
#line 783 "trace_gen.m"
                    break;
#line 783 "trace_gen.m"
                }
#line 783 "trace_gen.m"
                break;
#line 783 "trace_gen.m"
              case (MR_Integer) 2:
#line 784 "trace_gen.m"
                {
#line 784 "trace_gen.m"
                  MR_Integer ll_backend__trace_gen__DisjunctNum_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__LastStep_21, (MR_Integer) 0)));

#line 785 "trace_gen.m"
                  ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__DisjunctNum_25 == (MR_Integer) 1);
#line 787 "trace_gen.m"
                  if (ll_backend__trace_gen__succeeded)
#line 786 "trace_gen.m"
                    ll_backend__trace_gen__PortPrime_24 = (MR_Integer) 12;
#line 787 "trace_gen.m"
                  else
#line 788 "trace_gen.m"
                    ll_backend__trace_gen__PortPrime_24 = (MR_Integer) 13;
#line 784 "trace_gen.m"
                  ll_backend__trace_gen__succeeded = MR_TRUE;
#line 784 "trace_gen.m"
                }
#line 783 "trace_gen.m"
                break;
#line 783 "trace_gen.m"
              case (MR_Integer) 3:
#line 783 "trace_gen.m"
#line 783 "trace_gen.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__LastStep_21, (MR_Integer) 0)))) {
#line 783 "trace_gen.m"
                  default:
#line 783 "trace_gen.m"
                    ll_backend__trace_gen__succeeded = MR_FALSE;
#line 783 "trace_gen.m"
                    break;
#line 783 "trace_gen.m"
                  case (MR_Integer) 0:
#line 782 "trace_gen.m"
                    {
#line 782 "trace_gen.m"
                      ll_backend__trace_gen__PortPrime_24 = (MR_Integer) 14;
#line 782 "trace_gen.m"
                      ll_backend__trace_gen__succeeded = MR_TRUE;
#line 782 "trace_gen.m"
                    }
#line 783 "trace_gen.m"
                    break;
#line 783 "trace_gen.m"
                }
#line 783 "trace_gen.m"
                break;
#line 783 "trace_gen.m"
            }
#line 779 "trace_gen.m"
          }
#line 805 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 804 "trace_gen.m"
          ll_backend__trace_gen__Port_26 = ll_backend__trace_gen__PortPrime_24;
#line 805 "trace_gen.m"
        else
#line 806 "trace_gen.m"
          {
#line 806 "trace_gen.m"
            {
#line 806 "trace_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.maybe_generate_internal_event_code\'/7", (MR_String) "bad path");
#line 806 "trace_gen.m"
              return;
            }
#line 806 "trace_gen.m"
          }
#line 809 "trace_gen.m"
        {
#line 809 "trace_gen.m"
          ll_backend__code_info__get_module_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_36, &ll_backend__trace_gen__ModuleInfo_27);
        }
#line 810 "trace_gen.m"
        {
#line 810 "trace_gen.m"
          ll_backend__code_info__get_pred_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_36, &ll_backend__trace_gen__PredInfo_28);
        }
#line 811 "trace_gen.m"
        {
#line 811 "trace_gen.m"
          ll_backend__code_info__get_proc_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_36, &ll_backend__trace_gen__ProcInfo_29);
        }
#line 812 "trace_gen.m"
        ll_backend__trace_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 0)));
#line 812 "trace_gen.m"
        ll_backend__trace_gen__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 1)));
#line 812 "trace_gen.m"
        ll_backend__trace_gen__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 2)));
#line 812 "trace_gen.m"
        ll_backend__trace_gen__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 3)));
#line 812 "trace_gen.m"
        ll_backend__trace_gen__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 4)));
#line 812 "trace_gen.m"
        ll_backend__trace_gen__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 5)));
#line 812 "trace_gen.m"
        ll_backend__trace_gen__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 6)));
#line 812 "trace_gen.m"
        ll_backend__trace_gen__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 7)));
#line 812 "trace_gen.m"
        ll_backend__trace_gen__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 8)));
#line 812 "trace_gen.m"
        {
#line 812 "trace_gen.m"
          ll_backend__trace_gen__V_43_43 = libs__trace_params__eff_trace_needs_port_6_f_0(ll_backend__trace_gen__ModuleInfo_27, ll_backend__trace_gen__PredInfo_28, ll_backend__trace_gen__ProcInfo_29, ll_backend__trace_gen__V_44_44, ll_backend__trace_gen__V_52_52, ll_backend__trace_gen__Port_26);
        }
#line 814 "trace_gen.m"
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_43_43 == (MR_Integer) 1);
#line 829 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 816 "trace_gen.m"
          {
#line 816 "trace_gen.m"
            MR_Word ll_backend__trace_gen__PreDeaths_30;
#line 816 "trace_gen.m"
            MR_Word ll_backend__trace_gen__Context_31;
#line 816 "trace_gen.m"
            MR_Word ll_backend__trace_gen__HideEvent_32;
#line 816 "trace_gen.m"
            MR_Word ll_backend__trace_gen__GoalPath_33;
#line 816 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_47_47;
#line 827 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_34_34;
#line 827 "trace_gen.m"
            MR_Word ll_backend__trace_gen__V_35_35;

#line 816 "trace_gen.m"
            {
#line 816 "trace_gen.m"
              hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ll_backend__trace_gen__GoalInfo_16, &ll_backend__trace_gen__PreDeaths_30);
            }
#line 817 "trace_gen.m"
            {
#line 817 "trace_gen.m"
              ll_backend__trace_gen__Context_31 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__trace_gen__GoalInfo_16);
            }
#line 819 "trace_gen.m"
            {
#line 819 "trace_gen.m"
              ll_backend__trace_gen__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(ll_backend__trace_gen__OutsideGoalInfo_9, (MR_Integer) 8);
            }
#line 823 "trace_gen.m"
            if (ll_backend__trace_gen__succeeded)
#line 822 "trace_gen.m"
              ll_backend__trace_gen__HideEvent_32 = (MR_Integer) 1;
#line 823 "trace_gen.m"
            else
#line 824 "trace_gen.m"
              ll_backend__trace_gen__HideEvent_32 = (MR_Integer) 0;
#line 826 "trace_gen.m"
            {
#line 826 "trace_gen.m"
              ll_backend__trace_gen__GoalPath_33 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__trace_gen__ContainingGoalMap_18, ll_backend__trace_gen__GoalId_17);
            }
#line 827 "trace_gen.m"
            {
#line 827 "trace_gen.m"
              ll_backend__trace_gen__V_47_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 827 "trace_gen.m"
              MR_hl_field(MR_mktag(2), ll_backend__trace_gen__V_47_47, 0) = ((MR_Box) (ll_backend__trace_gen__GoalPath_33));
#line 827 "trace_gen.m"
              MR_hl_field(MR_mktag(2), ll_backend__trace_gen__V_47_47, 1) = ((MR_Box) (ll_backend__trace_gen__PreDeaths_30));
#line 827 "trace_gen.m"
            }
#line 827 "trace_gen.m"
            {
#line 827 "trace_gen.m"
              ll_backend__trace_gen__generate_event_code_13_p_0(ll_backend__trace_gen__Port_26, ll_backend__trace_gen__V_47_47, ll_backend__trace_gen__MaybeTraceInfo_13, ll_backend__trace_gen__Context_31, ll_backend__trace_gen__HideEvent_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__trace_gen__V_34_34, &ll_backend__trace_gen__V_35_35, ll_backend__trace_gen__Code_10, ll_backend__trace_gen__STATE_VARIABLE_CI_0_36, ll_backend__trace_gen__STATE_VARIABLE_CI_37, ll_backend__trace_gen__STATE_VARIABLE_CLD_0_38, ll_backend__trace_gen__STATE_VARIABLE_CLD_39);
            }
#line 816 "trace_gen.m"
          }
#line 829 "trace_gen.m"
        else
#line 830 "trace_gen.m"
          {
#line 830 "trace_gen.m"
            {
#line 830 "trace_gen.m"
              *ll_backend__trace_gen__Code_10 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
#line 830 "trace_gen.m"
            *ll_backend__trace_gen__STATE_VARIABLE_CLD_39 = ll_backend__trace_gen__STATE_VARIABLE_CLD_0_38;
#line 830 "trace_gen.m"
            *ll_backend__trace_gen__STATE_VARIABLE_CI_37 = ll_backend__trace_gen__STATE_VARIABLE_CI_0_36;
#line 830 "trace_gen.m"
          }
#line 773 "trace_gen.m"
      }
#line 770 "trace_gen.m"
  }
#line 182 "trace_gen.m"
}

#line 176 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__trace_prepare_for_call_2_p_0(
#line 176 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CI_3,
#line 176 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__TraceCode_4)
#line 176 "trace_gen.m"
{
#line 745 "trace_gen.m"
  {
#line 745 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 745 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTraceInfo_5;
#line 745 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CodeModel_6;

#line 746 "trace_gen.m"
    {
#line 746 "trace_gen.m"
      ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__trace_gen__CI_3, &ll_backend__trace_gen__MaybeTraceInfo_5);
    }
#line 747 "trace_gen.m"
    {
#line 747 "trace_gen.m"
      ll_backend__trace_gen__CodeModel_6 = ll_backend__code_info__get_proc_model_1_f_0(ll_backend__trace_gen__CI_3);
    }
#line 765 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeTraceInfo_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 766 "trace_gen.m"
      {
#line 767 "trace_gen.m"
        {
#line 767 "trace_gen.m"
          *ll_backend__trace_gen__TraceCode_4 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 766 "trace_gen.m"
      }
#line 765 "trace_gen.m"
    else
#line 749 "trace_gen.m"
      {
#line 749 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TraceInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTraceInfo_5, (MR_Integer) 0)));
#line 749 "trace_gen.m"
        MR_Word ll_backend__trace_gen__MaybeFromFullSlot_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 2)));
#line 749 "trace_gen.m"
        MR_Word ll_backend__trace_gen__CallDepthLval_9;
#line 749 "trace_gen.m"
        MR_String ll_backend__trace_gen__CallDepthStr_10;
#line 749 "trace_gen.m"
        MR_String ll_backend__trace_gen__MacroStr_12;
#line 749 "trace_gen.m"
        MR_String ll_backend__trace_gen__ResetStmt_13;
#line 749 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_14_14;
#line 749 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_16_16;
#line 749 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_18_18;
#line 749 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_19_19;
#line 749 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_21_21;
#line 749 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_22_22;
#line 750 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 0)));
#line 750 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 1)));
#line 750 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 3)));
#line 750 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 4)));
#line 750 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 5)));
#line 750 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 6)));
#line 750 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 7)));
#line 750 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 8)));

#line 1332 "trace_gen.m"
#line 1332 "trace_gen.m"
        switch (ll_backend__trace_gen__CodeModel_6) {
#line 1332 "trace_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1332 "trace_gen.m"
          case (MR_Integer) 0:
#line 1332 "trace_gen.m"
          case (MR_Integer) 1:
#line 1337 "trace_gen.m"
            {
#line 1338 "trace_gen.m"
              ll_backend__trace_gen__CallDepthLval_9 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[14]);
#line 1337 "trace_gen.m"
            }
#line 1332 "trace_gen.m"
            break;
#line 1332 "trace_gen.m"
          case (MR_Integer) 2:
#line 1332 "trace_gen.m"
            {
#line 1333 "trace_gen.m"
              ll_backend__trace_gen__CallDepthLval_9 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[15]);
#line 1332 "trace_gen.m"
            }
#line 1332 "trace_gen.m"
            break;
#line 1332 "trace_gen.m"
        }
#line 752 "trace_gen.m"
        {
#line 752 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallDepthLval_9, &ll_backend__trace_gen__CallDepthStr_10);
        }
#line 756 "trace_gen.m"
        if ((ll_backend__trace_gen__MaybeFromFullSlot_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 758 "trace_gen.m"
          ll_backend__trace_gen__MacroStr_12 = (MR_String) "MR_trace_reset_depth_from_full";
#line 756 "trace_gen.m"
        else
#line 755 "trace_gen.m"
          ll_backend__trace_gen__MacroStr_12 = (MR_String) "MR_trace_reset_depth_from_shallow";
#line 760 "trace_gen.m"
        {
#line 760 "trace_gen.m"
          ll_backend__trace_gen__V_16_16 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallDepthStr_10, (MR_String) ");\n");
        }
#line 760 "trace_gen.m"
        {
#line 760 "trace_gen.m"
          ll_backend__trace_gen__V_14_14 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__trace_gen__V_16_16);
        }
#line 760 "trace_gen.m"
        {
#line 760 "trace_gen.m"
          ll_backend__trace_gen__ResetStmt_13 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__MacroStr_12, ll_backend__trace_gen__V_14_14);
        }
#line 763 "trace_gen.m"
        {
#line 763 "trace_gen.m"
          ll_backend__trace_gen__V_22_22 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        }
#line 763 "trace_gen.m"
        {
#line 763 "trace_gen.m"
          ll_backend__trace_gen__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 763 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_21_21, 0) = ((MR_Box) (ll_backend__trace_gen__V_22_22));
#line 763 "trace_gen.m"
        }
#line 762 "trace_gen.m"
        {
#line 762 "trace_gen.m"
          ll_backend__trace_gen__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 762 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 762 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_19_19, 1) = ((MR_Box) ((MR_Integer) 1));
#line 762 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_19_19, 2) = ((MR_Box) (ll_backend__trace_gen__V_21_21));
#line 762 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_19_19, 3) = ((MR_Box) (ll_backend__trace_gen__ResetStmt_13));
#line 762 "trace_gen.m"
        }
#line 762 "trace_gen.m"
        {
#line 762 "trace_gen.m"
          ll_backend__trace_gen__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 762 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_18_18, 0) = ((MR_Box) (ll_backend__trace_gen__V_19_19));
#line 762 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_18_18, 1) = ((MR_Box) ((MR_String) ""));
#line 762 "trace_gen.m"
        }
#line 761 "trace_gen.m"
        {
#line 761 "trace_gen.m"
          *ll_backend__trace_gen__TraceCode_4 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__trace_gen__V_18_18)));
        }
#line 749 "trace_gen.m"
      }
#line 745 "trace_gen.m"
  }
#line 176 "trace_gen.m"
}

#line 171 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__generate_slot_fill_code_3_p_0(
#line 171 "trace_gen.m"
  MR_Word ll_backend__trace_gen__CI_4,
#line 171 "trace_gen.m"
  MR_Word ll_backend__trace_gen__TraceInfo_5,
#line 171 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__TraceCode_6)
#line 171 "trace_gen.m"
{
#line 610 "trace_gen.m"
  {
#line 610 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 610 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TypeCtorInfo_233_233;
#line 610 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TypeCtorInfo_234_234;
#line 610 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CodeModel_7;
#line 610 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeFromFullSlot_8;
#line 610 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeIoSeqSlot_9;
#line 610 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTrailLvals_10;
#line 610 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeMaxfrLval_11;
#line 610 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeCallTableLval_12;
#line 610 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTailRecInfo_13;
#line 610 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeRedoLabel_14;
#line 610 "trace_gen.m"
    MR_Word ll_backend__trace_gen__EventNumLval_15;
#line 610 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CallNumLval_16;
#line 610 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CallDepthLval_17;
#line 610 "trace_gen.m"
    MR_String ll_backend__trace_gen__EventNumStr_18;
#line 610 "trace_gen.m"
    MR_String ll_backend__trace_gen__CallNumStr_19;
#line 610 "trace_gen.m"
    MR_String ll_backend__trace_gen__CallDepthStr_20;
#line 610 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeLayoutLabel_25;
#line 610 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeHashDefLabel_26;
#line 610 "trace_gen.m"
    MR_String ll_backend__trace_gen__TraceStmt1_35;
#line 610 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceComponents1_36;
#line 610 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceCode1_37;
#line 610 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceCode2_39;
#line 610 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceCode3_45;
#line 610 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceCode4_50;
#line 610 "trace_gen.m"
    MR_String ll_backend__trace_gen__STATE_VARIABLE_CodeStr_51_51;
#line 610 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_53_53;
#line 610 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_54_54;
#line 610 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_56_56;
#line 610 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_57_57;
#line 610 "trace_gen.m"
    MR_String ll_backend__trace_gen__V_59_59;
#line 610 "trace_gen.m"
    MR_String ll_backend__trace_gen__STATE_VARIABLE_CodeStr_61_61;
#line 610 "trace_gen.m"
    MR_String ll_backend__trace_gen__STATE_VARIABLE_CodeStr_66_66;
#line 610 "trace_gen.m"
    MR_String ll_backend__trace_gen__STATE_VARIABLE_CodeStr_72_72;
#line 610 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_98_98;
#line 610 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_101_101;
#line 610 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_102_102;
#line 610 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_104_104;
#line 610 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_105_105;
#line 610 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_175_175;
#line 610 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_176_176;
#line 612 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_177_177;
#line 612 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_178_178;

#line 611 "trace_gen.m"
    {
#line 611 "trace_gen.m"
      ll_backend__trace_gen__CodeModel_7 = ll_backend__code_info__get_proc_model_1_f_0(ll_backend__trace_gen__CI_4);
    }
#line 612 "trace_gen.m"
    ll_backend__trace_gen__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 0)));
#line 612 "trace_gen.m"
    ll_backend__trace_gen__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 1)));
#line 612 "trace_gen.m"
    ll_backend__trace_gen__MaybeFromFullSlot_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 2)));
#line 612 "trace_gen.m"
    ll_backend__trace_gen__MaybeIoSeqSlot_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 3)));
#line 612 "trace_gen.m"
    ll_backend__trace_gen__MaybeTrailLvals_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 4)));
#line 612 "trace_gen.m"
    ll_backend__trace_gen__MaybeMaxfrLval_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 5)));
#line 612 "trace_gen.m"
    ll_backend__trace_gen__MaybeCallTableLval_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 6)));
#line 612 "trace_gen.m"
    ll_backend__trace_gen__MaybeTailRecInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 7)));
#line 612 "trace_gen.m"
    ll_backend__trace_gen__MaybeRedoLabel_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 8)));
#line 619 "trace_gen.m"
    {
#line 619 "trace_gen.m"
      ll_backend__trace_gen__event_num_slot_2_p_0(ll_backend__trace_gen__CodeModel_7, &ll_backend__trace_gen__EventNumLval_15);
    }
#line 620 "trace_gen.m"
    {
#line 620 "trace_gen.m"
      ll_backend__trace_gen__call_num_slot_2_p_0(ll_backend__trace_gen__CodeModel_7, &ll_backend__trace_gen__CallNumLval_16);
    }
#line 621 "trace_gen.m"
    {
#line 621 "trace_gen.m"
      ll_backend__trace_gen__call_depth_slot_2_p_0(ll_backend__trace_gen__CodeModel_7, &ll_backend__trace_gen__CallDepthLval_17);
    }
#line 622 "trace_gen.m"
    {
#line 622 "trace_gen.m"
      ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__EventNumLval_15, &ll_backend__trace_gen__EventNumStr_18);
    }
#line 623 "trace_gen.m"
    {
#line 623 "trace_gen.m"
      ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallNumLval_16, &ll_backend__trace_gen__CallNumStr_19);
    }
#line 624 "trace_gen.m"
    {
#line 624 "trace_gen.m"
      ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallDepthLval_17, &ll_backend__trace_gen__CallDepthStr_20);
    }
#line 628 "trace_gen.m"
    {
#line 628 "trace_gen.m"
      ll_backend__trace_gen__V_59_59 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallDepthStr_20, (MR_String) ");\n");
    }
#line 628 "trace_gen.m"
    {
#line 628 "trace_gen.m"
      ll_backend__trace_gen__V_57_57 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__trace_gen__V_59_59);
    }
#line 628 "trace_gen.m"
    {
#line 628 "trace_gen.m"
      ll_backend__trace_gen__V_56_56 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallNumStr_19, ll_backend__trace_gen__V_57_57);
    }
#line 627 "trace_gen.m"
    {
#line 627 "trace_gen.m"
      ll_backend__trace_gen__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__trace_gen__V_56_56);
    }
#line 627 "trace_gen.m"
    {
#line 627 "trace_gen.m"
      ll_backend__trace_gen__V_53_53 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__EventNumStr_18, ll_backend__trace_gen__V_54_54);
    }
#line 627 "trace_gen.m"
    {
#line 627 "trace_gen.m"
      ll_backend__trace_gen__STATE_VARIABLE_CodeStr_51_51 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_trace_fill_std_slots(", ll_backend__trace_gen__V_53_53);
    }
#line 638 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeRedoLabel_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 639 "trace_gen.m"
      {
#line 640 "trace_gen.m"
        ll_backend__trace_gen__MaybeLayoutLabel_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 641 "trace_gen.m"
        ll_backend__trace_gen__MaybeHashDefLabel_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 639 "trace_gen.m"
        ll_backend__trace_gen__STATE_VARIABLE_CodeStr_61_61 = ll_backend__trace_gen__STATE_VARIABLE_CodeStr_51_51;
#line 639 "trace_gen.m"
      }
#line 638 "trace_gen.m"
    else
#line 631 "trace_gen.m"
      {
#line 631 "trace_gen.m"
        MR_Word ll_backend__trace_gen__RedoLayoutLval_23;
#line 631 "trace_gen.m"
        MR_String ll_backend__trace_gen__RedoLayoutStr_24;
#line 631 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_62_62;
#line 631 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_64_64;

#line 632 "trace_gen.m"
        {
#line 632 "trace_gen.m"
          ll_backend__trace_gen__redo_layout_slot_2_p_0(ll_backend__trace_gen__CodeModel_7, &ll_backend__trace_gen__RedoLayoutLval_23);
        }
#line 633 "trace_gen.m"
        {
#line 633 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__RedoLayoutLval_23, &ll_backend__trace_gen__RedoLayoutStr_24);
        }
#line 634 "trace_gen.m"
        {
#line 634 "trace_gen.m"
          ll_backend__trace_gen__V_64_64 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__RedoLayoutStr_24, (MR_String) " = (MR_Word) (const MR_Word *) MR_HASH_DEF_LABEL_LAYOUT;\n");
        }
#line 634 "trace_gen.m"
        {
#line 634 "trace_gen.m"
          ll_backend__trace_gen__V_62_62 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__trace_gen__V_64_64);
        }
#line 634 "trace_gen.m"
        {
#line 634 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_CodeStr_61_61 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__STATE_VARIABLE_CodeStr_51_51, ll_backend__trace_gen__V_62_62);
        }
#line 636 "trace_gen.m"
        ll_backend__trace_gen__MaybeLayoutLabel_25 = ll_backend__trace_gen__MaybeRedoLabel_14;
#line 637 "trace_gen.m"
        ll_backend__trace_gen__MaybeHashDefLabel_26 = ll_backend__trace_gen__MaybeRedoLabel_14;
#line 631 "trace_gen.m"
      }
#line 650 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeIoSeqSlot_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 651 "trace_gen.m"
      ll_backend__trace_gen__STATE_VARIABLE_CodeStr_66_66 = ll_backend__trace_gen__STATE_VARIABLE_CodeStr_61_61;
#line 650 "trace_gen.m"
    else
#line 646 "trace_gen.m"
      {
#line 646 "trace_gen.m"
        MR_Word ll_backend__trace_gen__IoSeqLval_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeIoSeqSlot_9, (MR_Integer) 0)));
#line 646 "trace_gen.m"
        MR_String ll_backend__trace_gen__IoSeqStr_28;
#line 646 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_67_67;
#line 646 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_69_69;

#line 647 "trace_gen.m"
        {
#line 647 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__IoSeqLval_27, &ll_backend__trace_gen__IoSeqStr_28);
        }
#line 649 "trace_gen.m"
        {
#line 649 "trace_gen.m"
          ll_backend__trace_gen__V_69_69 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__IoSeqStr_28, (MR_String) " = MR_io_tabling_counter;\n");
        }
#line 649 "trace_gen.m"
        {
#line 649 "trace_gen.m"
          ll_backend__trace_gen__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__trace_gen__V_69_69);
        }
#line 648 "trace_gen.m"
        {
#line 648 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_CodeStr_66_66 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__STATE_VARIABLE_CodeStr_61_61, ll_backend__trace_gen__V_67_67);
        }
#line 646 "trace_gen.m"
      }
#line 665 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeTrailLvals_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 666 "trace_gen.m"
      ll_backend__trace_gen__STATE_VARIABLE_CodeStr_72_72 = ll_backend__trace_gen__STATE_VARIABLE_CodeStr_66_66;
#line 665 "trace_gen.m"
    else
#line 659 "trace_gen.m"
      {
#line 659 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TrailLval_29;
#line 659 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TicketLval_30;
#line 659 "trace_gen.m"
        MR_String ll_backend__trace_gen__TrailLvalStr_31;
#line 659 "trace_gen.m"
        MR_String ll_backend__trace_gen__TicketLvalStr_32;
#line 659 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTrailLvals_10, (MR_Integer) 0)));
#line 659 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_73_73;
#line 659 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_75_75;
#line 659 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_76_76;
#line 659 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_78_78;
#line 659 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_80_80;

#line 659 "trace_gen.m"
        ll_backend__trace_gen__TrailLval_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_71_71, (MR_Integer) 0)));
#line 659 "trace_gen.m"
        ll_backend__trace_gen__TicketLval_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_71_71, (MR_Integer) 1)));
#line 660 "trace_gen.m"
        {
#line 660 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__TrailLval_29, &ll_backend__trace_gen__TrailLvalStr_31);
        }
#line 661 "trace_gen.m"
        {
#line 661 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__TicketLval_30, &ll_backend__trace_gen__TicketLvalStr_32);
        }
#line 664 "trace_gen.m"
        {
#line 664 "trace_gen.m"
          ll_backend__trace_gen__V_80_80 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TrailLvalStr_31, (MR_String) ");\n");
        }
#line 664 "trace_gen.m"
        {
#line 664 "trace_gen.m"
          ll_backend__trace_gen__V_78_78 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_store_ticket(", ll_backend__trace_gen__V_80_80);
        }
#line 663 "trace_gen.m"
        {
#line 663 "trace_gen.m"
          ll_backend__trace_gen__V_76_76 = mercury__string__f_43_43_2_f_0((MR_String) ");\n", ll_backend__trace_gen__V_78_78);
        }
#line 663 "trace_gen.m"
        {
#line 663 "trace_gen.m"
          ll_backend__trace_gen__V_75_75 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TicketLvalStr_32, ll_backend__trace_gen__V_76_76);
        }
#line 663 "trace_gen.m"
        {
#line 663 "trace_gen.m"
          ll_backend__trace_gen__V_73_73 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_mark_ticket_stack(", ll_backend__trace_gen__V_75_75);
        }
#line 662 "trace_gen.m"
        {
#line 662 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_CodeStr_72_72 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__STATE_VARIABLE_CodeStr_66_66, ll_backend__trace_gen__V_73_73);
        }
#line 659 "trace_gen.m"
      }
#line 679 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeFromFullSlot_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 680 "trace_gen.m"
      ll_backend__trace_gen__TraceStmt1_35 = ll_backend__trace_gen__STATE_VARIABLE_CodeStr_72_72;
#line 679 "trace_gen.m"
    else
#line 670 "trace_gen.m"
      {
#line 670 "trace_gen.m"
        MR_Word ll_backend__trace_gen__CallFromFullSlot_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeFromFullSlot_8, (MR_Integer) 0)));
#line 670 "trace_gen.m"
        MR_String ll_backend__trace_gen__CallFromFullSlotStr_34;
#line 670 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_84_84;
#line 670 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_85_85;
#line 670 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_87_87;
#line 670 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_89_89;
#line 670 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_90_90;
#line 670 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_92_92;
#line 670 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_94_94;

#line 671 "trace_gen.m"
        {
#line 671 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallFromFullSlot_33, &ll_backend__trace_gen__CallFromFullSlotStr_34);
        }
#line 677 "trace_gen.m"
        {
#line 677 "trace_gen.m"
          ll_backend__trace_gen__V_94_94 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallDepthStr_20, (MR_String) " = MR_trace_call_depth;\n\t\t}\n");
        }
#line 677 "trace_gen.m"
        {
#line 677 "trace_gen.m"
          ll_backend__trace_gen__V_92_92 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\t", ll_backend__trace_gen__V_94_94);
        }
#line 676 "trace_gen.m"
        {
#line 676 "trace_gen.m"
          ll_backend__trace_gen__V_90_90 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t} else {\n", ll_backend__trace_gen__V_92_92);
        }
#line 675 "trace_gen.m"
        {
#line 675 "trace_gen.m"
          ll_backend__trace_gen__V_89_89 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__STATE_VARIABLE_CodeStr_72_72, ll_backend__trace_gen__V_90_90);
        }
#line 674 "trace_gen.m"
        {
#line 674 "trace_gen.m"
          ll_backend__trace_gen__V_87_87 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tif (MR_trace_from_full) {\n", ll_backend__trace_gen__V_89_89);
        }
#line 673 "trace_gen.m"
        {
#line 673 "trace_gen.m"
          ll_backend__trace_gen__V_85_85 = mercury__string__f_43_43_2_f_0((MR_String) " = MR_trace_from_full;\n", ll_backend__trace_gen__V_87_87);
        }
#line 673 "trace_gen.m"
        {
#line 673 "trace_gen.m"
          ll_backend__trace_gen__V_84_84 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallFromFullSlotStr_34, ll_backend__trace_gen__V_85_85);
        }
#line 673 "trace_gen.m"
        {
#line 673 "trace_gen.m"
          ll_backend__trace_gen__TraceStmt1_35 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__trace_gen__V_84_84);
        }
#line 670 "trace_gen.m"
      }
#line 8005 "ll_backend.trace_gen.c"
    ll_backend__trace_gen__TypeCtorInfo_233_233 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 685 "trace_gen.m"
    {
#line 685 "trace_gen.m"
      ll_backend__trace_gen__V_102_102 = mercury__set__init_0_f_0(ll_backend__trace_gen__TypeCtorInfo_233_233);
    }
#line 685 "trace_gen.m"
    {
#line 685 "trace_gen.m"
      ll_backend__trace_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 685 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_101_101, 0) = ((MR_Box) (ll_backend__trace_gen__V_102_102));
#line 685 "trace_gen.m"
    }
#line 684 "trace_gen.m"
    {
#line 684 "trace_gen.m"
      ll_backend__trace_gen__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 684 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 684 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 1) = ((MR_Box) ((MR_Integer) 1));
#line 684 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 2) = ((MR_Box) ((MR_Integer) 1));
#line 684 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 3) = ((MR_Box) (ll_backend__trace_gen__V_101_101));
#line 684 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_98_98, 4) = ((MR_Box) (ll_backend__trace_gen__TraceStmt1_35));
#line 684 "trace_gen.m"
    }
#line 685 "trace_gen.m"
    {
#line 685 "trace_gen.m"
      ll_backend__trace_gen__TraceComponents1_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents1_36, 0) = ((MR_Box) (ll_backend__trace_gen__V_98_98));
#line 685 "trace_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents1_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 685 "trace_gen.m"
    }
#line 8046 "ll_backend.trace_gen.c"
    ll_backend__trace_gen__TypeCtorInfo_234_234 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 687 "trace_gen.m"
    {
#line 687 "trace_gen.m"
      ll_backend__trace_gen__V_105_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 687 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 687 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 687 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 2) = ((MR_Box) (ll_backend__trace_gen__TraceComponents1_36));
#line 687 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 3) = ((MR_Box) ((MR_Integer) 1));
#line 687 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 687 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 687 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 6) = ((MR_Box) (ll_backend__trace_gen__MaybeLayoutLabel_25));
#line 687 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 687 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 8) = ((MR_Box) (ll_backend__trace_gen__MaybeHashDefLabel_26));
#line 687 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 9) = ((MR_Box) ((MR_Integer) 1));
#line 687 "trace_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_105_105, 10) = ((MR_Box) ((MR_Integer) 1));
#line 687 "trace_gen.m"
    }
#line 687 "trace_gen.m"
    {
#line 687 "trace_gen.m"
      ll_backend__trace_gen__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 687 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_104_104, 0) = ((MR_Box) (ll_backend__trace_gen__V_105_105));
#line 687 "trace_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_104_104, 1) = ((MR_Box) ((MR_String) ""));
#line 687 "trace_gen.m"
    }
#line 686 "trace_gen.m"
    {
#line 686 "trace_gen.m"
      ll_backend__trace_gen__TraceCode1_37 = mercury__cord__singleton_1_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ((MR_Box) (ll_backend__trace_gen__V_104_104)));
    }
#line 697 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeMaxfrLval_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 699 "trace_gen.m"
      {
#line 699 "trace_gen.m"
        ll_backend__trace_gen__TraceCode2_39 = mercury__cord__empty_0_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234);
      }
#line 697 "trace_gen.m"
    else
#line 693 "trace_gen.m"
      {
#line 693 "trace_gen.m"
        MR_Word ll_backend__trace_gen__MaxfrLval_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeMaxfrLval_11, (MR_Integer) 0)));
#line 693 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_114_114;
#line 693 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_115_115;

#line 695 "trace_gen.m"
        {
#line 695 "trace_gen.m"
          ll_backend__trace_gen__V_115_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 695 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_115_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 695 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_115_115, 1) = ((MR_Box) (ll_backend__trace_gen__MaxfrLval_38));
#line 695 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_115_115, 2) = ((MR_Box) (&ll_backend__trace_gen_scalar_common_3[3]));
#line 695 "trace_gen.m"
        }
#line 695 "trace_gen.m"
        {
#line 695 "trace_gen.m"
          ll_backend__trace_gen__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 695 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_114_114, 0) = ((MR_Box) (ll_backend__trace_gen__V_115_115));
#line 695 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_114_114, 1) = ((MR_Box) ((MR_String) "save initial maxfr"));
#line 695 "trace_gen.m"
        }
#line 694 "trace_gen.m"
        {
#line 694 "trace_gen.m"
          ll_backend__trace_gen__TraceCode2_39 = mercury__cord__singleton_1_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ((MR_Box) (ll_backend__trace_gen__V_114_114)));
        }
#line 693 "trace_gen.m"
      }
#line 722 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeTailRecInfo_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 724 "trace_gen.m"
      {
#line 724 "trace_gen.m"
        ll_backend__trace_gen__TraceCode3_45 = mercury__cord__empty_0_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234);
      }
#line 722 "trace_gen.m"
    else
#line 703 "trace_gen.m"
      {
#line 703 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TailRecLval_40;
#line 703 "trace_gen.m"
        MR_String ll_backend__trace_gen__TailRecLvalStr_42;
#line 703 "trace_gen.m"
        MR_String ll_backend__trace_gen__TraceStmt3_43;
#line 703 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TraceComponents3_44;
#line 703 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTailRecInfo_13, (MR_Integer) 0)));
#line 703 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_121_121;
#line 703 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_123_123;
#line 703 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_124_124;
#line 703 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_126_126;
#line 703 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_128_128;
#line 703 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_130_130;
#line 703 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_132_132;
#line 703 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_136_136;
#line 703 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_139_139;
#line 703 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_140_140;
#line 703 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_142_142;
#line 703 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_143_143;
#line 703 "trace_gen.m"
        MR_Word ll_backend__trace_gen___TailRecLabel_41;

#line 703 "trace_gen.m"
        ll_backend__trace_gen__TailRecLval_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_119_119, (MR_Integer) 0)));
#line 703 "trace_gen.m"
        ll_backend__trace_gen___TailRecLabel_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_119_119, (MR_Integer) 1)));
#line 704 "trace_gen.m"
        {
#line 704 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__TailRecLval_40, &ll_backend__trace_gen__TailRecLvalStr_42);
        }
#line 711 "trace_gen.m"
        {
#line 711 "trace_gen.m"
          ll_backend__trace_gen__V_132_132 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TailRecLvalStr_42, (MR_String) " = 0;\n\t\t}");
        }
#line 711 "trace_gen.m"
        {
#line 711 "trace_gen.m"
          ll_backend__trace_gen__V_130_130 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\t", ll_backend__trace_gen__V_132_132);
        }
#line 710 "trace_gen.m"
        {
#line 710 "trace_gen.m"
          ll_backend__trace_gen__V_128_128 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t} else {", ll_backend__trace_gen__V_130_130);
        }
#line 709 "trace_gen.m"
        {
#line 709 "trace_gen.m"
          ll_backend__trace_gen__V_126_126 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\tMR_trace_tailrec_have_reused_frames = MR_FALSE;\n", ll_backend__trace_gen__V_128_128);
        }
#line 708 "trace_gen.m"
        {
#line 708 "trace_gen.m"
          ll_backend__trace_gen__V_124_124 = mercury__string__f_43_43_2_f_0((MR_String) " = MR_trace_tailrec_num_reused_frames;\n", ll_backend__trace_gen__V_126_126);
        }
#line 707 "trace_gen.m"
        {
#line 707 "trace_gen.m"
          ll_backend__trace_gen__V_123_123 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TailRecLvalStr_42, ll_backend__trace_gen__V_124_124);
        }
#line 707 "trace_gen.m"
        {
#line 707 "trace_gen.m"
          ll_backend__trace_gen__V_121_121 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\t", ll_backend__trace_gen__V_123_123);
        }
#line 706 "trace_gen.m"
        {
#line 706 "trace_gen.m"
          ll_backend__trace_gen__TraceStmt3_43 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tif (MR_trace_tailrec_have_reused_frames) {\n", ll_backend__trace_gen__V_121_121);
        }
#line 714 "trace_gen.m"
        {
#line 714 "trace_gen.m"
          ll_backend__trace_gen__V_140_140 = mercury__set__init_0_f_0(ll_backend__trace_gen__TypeCtorInfo_233_233);
        }
#line 714 "trace_gen.m"
        {
#line 714 "trace_gen.m"
          ll_backend__trace_gen__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 714 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_139_139, 0) = ((MR_Box) (ll_backend__trace_gen__V_140_140));
#line 714 "trace_gen.m"
        }
#line 713 "trace_gen.m"
        {
#line 713 "trace_gen.m"
          ll_backend__trace_gen__V_136_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 713 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_136_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 713 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_136_136, 1) = ((MR_Box) ((MR_Integer) 1));
#line 713 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_136_136, 2) = ((MR_Box) ((MR_Integer) 1));
#line 713 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_136_136, 3) = ((MR_Box) (ll_backend__trace_gen__V_139_139));
#line 713 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_136_136, 4) = ((MR_Box) (ll_backend__trace_gen__TraceStmt3_43));
#line 713 "trace_gen.m"
        }
#line 715 "trace_gen.m"
        {
#line 715 "trace_gen.m"
          ll_backend__trace_gen__TraceComponents3_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 715 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents3_44, 0) = ((MR_Box) (ll_backend__trace_gen__V_136_136));
#line 715 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents3_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 715 "trace_gen.m"
        }
#line 717 "trace_gen.m"
        {
#line 717 "trace_gen.m"
          ll_backend__trace_gen__V_143_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 717 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 717 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 717 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 2) = ((MR_Box) (ll_backend__trace_gen__TraceComponents3_44));
#line 717 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 3) = ((MR_Box) ((MR_Integer) 1));
#line 717 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 717 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 717 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 717 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 717 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 717 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 9) = ((MR_Box) ((MR_Integer) 1));
#line 717 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_143_143, 10) = ((MR_Box) ((MR_Integer) 1));
#line 717 "trace_gen.m"
        }
#line 717 "trace_gen.m"
        {
#line 717 "trace_gen.m"
          ll_backend__trace_gen__V_142_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 717 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_142_142, 0) = ((MR_Box) (ll_backend__trace_gen__V_143_143));
#line 717 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_142_142, 1) = ((MR_Box) ((MR_String) "initialize tail recursion count"));
#line 717 "trace_gen.m"
        }
#line 716 "trace_gen.m"
        {
#line 716 "trace_gen.m"
          ll_backend__trace_gen__TraceCode3_45 = mercury__cord__singleton_1_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ((MR_Box) (ll_backend__trace_gen__V_142_142)));
        }
#line 703 "trace_gen.m"
      }
#line 739 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeCallTableLval_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 741 "trace_gen.m"
      {
#line 741 "trace_gen.m"
        ll_backend__trace_gen__TraceCode4_50 = mercury__cord__empty_0_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234);
      }
#line 739 "trace_gen.m"
    else
#line 728 "trace_gen.m"
      {
#line 728 "trace_gen.m"
        MR_Word ll_backend__trace_gen__CallTableLval_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeCallTableLval_12, (MR_Integer) 0)));
#line 728 "trace_gen.m"
        MR_String ll_backend__trace_gen__CallTableLvalStr_47;
#line 728 "trace_gen.m"
        MR_String ll_backend__trace_gen__TraceStmt4_48;
#line 728 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TraceComponents4_49;
#line 728 "trace_gen.m"
        MR_String ll_backend__trace_gen__V_155_155;
#line 728 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_157_157;
#line 728 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_160_160;
#line 728 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_161_161;
#line 728 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_163_163;
#line 728 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_164_164;

#line 729 "trace_gen.m"
        {
#line 729 "trace_gen.m"
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallTableLval_46, &ll_backend__trace_gen__CallTableLvalStr_47);
        }
#line 730 "trace_gen.m"
        {
#line 730 "trace_gen.m"
          ll_backend__trace_gen__V_155_155 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallTableLvalStr_47, (MR_String) " = 0;\n");
        }
#line 730 "trace_gen.m"
        {
#line 730 "trace_gen.m"
          ll_backend__trace_gen__TraceStmt4_48 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__trace_gen__V_155_155);
        }
#line 732 "trace_gen.m"
        {
#line 732 "trace_gen.m"
          ll_backend__trace_gen__V_161_161 = mercury__set__init_0_f_0(ll_backend__trace_gen__TypeCtorInfo_233_233);
        }
#line 732 "trace_gen.m"
        {
#line 732 "trace_gen.m"
          ll_backend__trace_gen__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 732 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__V_160_160, 0) = ((MR_Box) (ll_backend__trace_gen__V_161_161));
#line 732 "trace_gen.m"
        }
#line 731 "trace_gen.m"
        {
#line 731 "trace_gen.m"
          ll_backend__trace_gen__V_157_157 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 731 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_157_157, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 731 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_157_157, 1) = ((MR_Box) ((MR_Integer) 1));
#line 731 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_157_157, 2) = ((MR_Box) ((MR_Integer) 1));
#line 731 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_157_157, 3) = ((MR_Box) (ll_backend__trace_gen__V_160_160));
#line 731 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_157_157, 4) = ((MR_Box) (ll_backend__trace_gen__TraceStmt4_48));
#line 731 "trace_gen.m"
        }
#line 733 "trace_gen.m"
        {
#line 733 "trace_gen.m"
          ll_backend__trace_gen__TraceComponents4_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 733 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents4_49, 0) = ((MR_Box) (ll_backend__trace_gen__V_157_157));
#line 733 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents4_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 733 "trace_gen.m"
        }
#line 735 "trace_gen.m"
        {
#line 735 "trace_gen.m"
          ll_backend__trace_gen__V_164_164 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 735 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 735 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 735 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 2) = ((MR_Box) (ll_backend__trace_gen__TraceComponents4_49));
#line 735 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 3) = ((MR_Box) ((MR_Integer) 1));
#line 735 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 735 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 735 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 735 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 735 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 735 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 9) = ((MR_Box) ((MR_Integer) 1));
#line 735 "trace_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__V_164_164, 10) = ((MR_Box) ((MR_Integer) 1));
#line 735 "trace_gen.m"
        }
#line 735 "trace_gen.m"
        {
#line 735 "trace_gen.m"
          ll_backend__trace_gen__V_163_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 735 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_163_163, 0) = ((MR_Box) (ll_backend__trace_gen__V_164_164));
#line 735 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_163_163, 1) = ((MR_Box) ((MR_String) ""));
#line 735 "trace_gen.m"
        }
#line 734 "trace_gen.m"
        {
#line 734 "trace_gen.m"
          ll_backend__trace_gen__TraceCode4_50 = mercury__cord__singleton_1_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ((MR_Box) (ll_backend__trace_gen__V_163_163)));
        }
#line 728 "trace_gen.m"
      }
#line 743 "trace_gen.m"
    {
#line 743 "trace_gen.m"
      ll_backend__trace_gen__V_176_176 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ll_backend__trace_gen__TraceCode3_45, ll_backend__trace_gen__TraceCode4_50);
    }
#line 743 "trace_gen.m"
    {
#line 743 "trace_gen.m"
      ll_backend__trace_gen__V_175_175 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ll_backend__trace_gen__TraceCode2_39, ll_backend__trace_gen__V_176_176);
    }
#line 743 "trace_gen.m"
    {
#line 743 "trace_gen.m"
      *ll_backend__trace_gen__TraceCode_6 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ll_backend__trace_gen__TraceCode1_37, ll_backend__trace_gen__V_175_175);
    }
#line 610 "trace_gen.m"
  }
#line 171 "trace_gen.m"
}

#line 165 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__trace_setup_9_p_0(
#line 165 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ModuleInfo_10,
#line 165 "trace_gen.m"
  MR_Word ll_backend__trace_gen__PredInfo_11,
#line 165 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ProcInfo_12,
#line 165 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Globals_13,
#line 165 "trace_gen.m"
  MR_Word ll_backend__trace_gen__MaybeTailRecLabel_14,
#line 165 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__TraceSlotInfo_15,
#line 165 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__TraceInfo_16,
#line 165 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_59,
#line 165 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_60)
#line 165 "trace_gen.m"
{
#line 494 "trace_gen.m"
  {
#line 494 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 494 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CodeModel_18;
#line 494 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceLevel_19;
#line 494 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceSuppress_20;
#line 494 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceTableIo_21;
#line 494 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceRedo_22;
#line 494 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeRedoLayoutLabel_25;
#line 494 "trace_gen.m"
    MR_Word ll_backend__trace_gen__HasFromFullSlot_26;
#line 494 "trace_gen.m"
    MR_Word ll_backend__trace_gen__StackId_27;
#line 494 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeFromFullSlot_29;
#line 494 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeFromFullSlotLval_31;
#line 494 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeIoSeqSlot_33;
#line 494 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeIoSeqLval_35;
#line 494 "trace_gen.m"
    MR_Word ll_backend__trace_gen__UseTrail_36;
#line 494 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTrailSlot_39;
#line 494 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTrailLvals_42;
#line 494 "trace_gen.m"
    MR_Word ll_backend__trace_gen__NeedsMaxfrSlot_43;
#line 494 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeMaxfrSlot_45;
#line 494 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeMaxfrLval_47;
#line 494 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTailRecSlot_50;
#line 494 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeTailRecInfo_52;
#line 494 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeCallTableTip_53;
#line 494 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeCallTableSlot_56;
#line 494 "trace_gen.m"
    MR_Word ll_backend__trace_gen__MaybeCallTableLval_58;
#line 494 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__STATE_VARIABLE_NextSlot_64_64;
#line 494 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__STATE_VARIABLE_NextSlot_66_66;
#line 494 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__STATE_VARIABLE_NextSlot_68_68;
#line 494 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__STATE_VARIABLE_NextSlot_73_73;
#line 494 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__STATE_VARIABLE_NextSlot_75_75;
#line 494 "trace_gen.m"
    MR_Integer ll_backend__trace_gen__STATE_VARIABLE_NextSlot_78_78;

#line 495 "trace_gen.m"
    {
#line 495 "trace_gen.m"
      ll_backend__trace_gen__CodeModel_18 = ll_backend__code_info__get_proc_model_1_f_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_59);
    }
#line 496 "trace_gen.m"
    {
#line 496 "trace_gen.m"
      libs__globals__get_trace_level_2_p_0(ll_backend__trace_gen__Globals_13, &ll_backend__trace_gen__TraceLevel_19);
    }
#line 497 "trace_gen.m"
    {
#line 497 "trace_gen.m"
      libs__globals__get_trace_suppress_2_p_0(ll_backend__trace_gen__Globals_13, &ll_backend__trace_gen__TraceSuppress_20);
    }
#line 498 "trace_gen.m"
    {
#line 498 "trace_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__trace_gen__Globals_13, (MR_Integer) 122, &ll_backend__trace_gen__TraceTableIo_21);
    }
#line 499 "trace_gen.m"
    {
#line 499 "trace_gen.m"
      ll_backend__trace_gen__TraceRedo_22 = libs__trace_params__eff_trace_needs_port_6_f_0(ll_backend__trace_gen__ModuleInfo_10, ll_backend__trace_gen__PredInfo_11, ll_backend__trace_gen__ProcInfo_12, ll_backend__trace_gen__TraceLevel_19, ll_backend__trace_gen__TraceSuppress_20, (MR_Integer) 2);
    }
#line 504 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__TraceRedo_22 == (MR_Integer) 1);
#line 504 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 505 "trace_gen.m"
      ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CodeModel_18 == (MR_Integer) 2);
#line 512 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 507 "trace_gen.m"
      {
#line 507 "trace_gen.m"
        MR_Word ll_backend__trace_gen__RedoLayoutLabel_24;

#line 507 "trace_gen.m"
        {
#line 507 "trace_gen.m"
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__trace_gen__RedoLayoutLabel_24, ll_backend__trace_gen__STATE_VARIABLE_CI_0_59, ll_backend__trace_gen__STATE_VARIABLE_CI_60);
        }
#line 508 "trace_gen.m"
        {
#line 508 "trace_gen.m"
          ll_backend__trace_gen__MaybeRedoLayoutLabel_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 508 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeRedoLayoutLabel_25, 0) = ((MR_Box) (ll_backend__trace_gen__RedoLayoutLabel_24));
#line 508 "trace_gen.m"
        }
#line 511 "trace_gen.m"
        ll_backend__trace_gen__STATE_VARIABLE_NextSlot_64_64 = (MR_Integer) 5;
#line 507 "trace_gen.m"
      }
#line 512 "trace_gen.m"
    else
#line 513 "trace_gen.m"
      {
#line 513 "trace_gen.m"
        ll_backend__trace_gen__MaybeRedoLayoutLabel_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 515 "trace_gen.m"
        ll_backend__trace_gen__STATE_VARIABLE_NextSlot_64_64 = (MR_Integer) 4;
#line 513 "trace_gen.m"
        *ll_backend__trace_gen__STATE_VARIABLE_CI_60 = ll_backend__trace_gen__STATE_VARIABLE_CI_0_59;
#line 513 "trace_gen.m"
      }
#line 518 "trace_gen.m"
    {
#line 518 "trace_gen.m"
      ll_backend__trace_gen__HasFromFullSlot_26 = libs__trace_params__eff_trace_level_needs_from_full_slot_4_f_0(ll_backend__trace_gen__ModuleInfo_10, ll_backend__trace_gen__PredInfo_11, ll_backend__trace_gen__ProcInfo_12, ll_backend__trace_gen__TraceLevel_19);
    }
#line 520 "trace_gen.m"
    {
#line 520 "trace_gen.m"
      ll_backend__trace_gen__StackId_27 = ll_backend__llds__code_model_to_main_stack_1_f_0(ll_backend__trace_gen__CodeModel_18);
    }
#line 528 "trace_gen.m"
#line 528 "trace_gen.m"
    switch (ll_backend__trace_gen__HasFromFullSlot_26) {
#line 528 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 528 "trace_gen.m"
      case (MR_Integer) 0:
#line 529 "trace_gen.m"
        {
#line 530 "trace_gen.m"
          ll_backend__trace_gen__MaybeFromFullSlot_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 531 "trace_gen.m"
          ll_backend__trace_gen__MaybeFromFullSlotLval_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 529 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_NextSlot_66_66 = ll_backend__trace_gen__STATE_VARIABLE_NextSlot_64_64;
#line 529 "trace_gen.m"
        }
#line 528 "trace_gen.m"
        break;
#line 528 "trace_gen.m"
      case (MR_Integer) 1:
#line 522 "trace_gen.m"
        {
#line 522 "trace_gen.m"
          MR_Word ll_backend__trace_gen__FromFullSlotLval_30;

#line 524 "trace_gen.m"
          {
#line 524 "trace_gen.m"
            ll_backend__trace_gen__MaybeFromFullSlot_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 524 "trace_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeFromFullSlot_29, 0) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_64_64));
#line 524 "trace_gen.m"
          }
#line 525 "trace_gen.m"
          {
#line 525 "trace_gen.m"
            ll_backend__trace_gen__FromFullSlotLval_30 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__STATE_VARIABLE_NextSlot_64_64);
          }
#line 526 "trace_gen.m"
          {
#line 526 "trace_gen.m"
            ll_backend__trace_gen__MaybeFromFullSlotLval_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 526 "trace_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeFromFullSlotLval_31, 0) = ((MR_Box) (ll_backend__trace_gen__FromFullSlotLval_30));
#line 526 "trace_gen.m"
          }
#line 527 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_NextSlot_66_66 = (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_64_64 + (MR_Integer) 1);
#line 522 "trace_gen.m"
        }
#line 528 "trace_gen.m"
        break;
#line 528 "trace_gen.m"
    }
#line 541 "trace_gen.m"
#line 541 "trace_gen.m"
    switch (ll_backend__trace_gen__TraceTableIo_21) {
#line 541 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 541 "trace_gen.m"
      case (MR_Integer) 0:
#line 542 "trace_gen.m"
        {
#line 543 "trace_gen.m"
          ll_backend__trace_gen__MaybeIoSeqSlot_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 544 "trace_gen.m"
          ll_backend__trace_gen__MaybeIoSeqLval_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 542 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_NextSlot_68_68 = ll_backend__trace_gen__STATE_VARIABLE_NextSlot_66_66;
#line 542 "trace_gen.m"
        }
#line 541 "trace_gen.m"
        break;
#line 541 "trace_gen.m"
      case (MR_Integer) 1:
#line 535 "trace_gen.m"
        {
#line 535 "trace_gen.m"
          MR_Word ll_backend__trace_gen__IoSeqLval_34;

#line 537 "trace_gen.m"
          {
#line 537 "trace_gen.m"
            ll_backend__trace_gen__MaybeIoSeqSlot_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 537 "trace_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeIoSeqSlot_33, 0) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_66_66));
#line 537 "trace_gen.m"
          }
#line 538 "trace_gen.m"
          {
#line 538 "trace_gen.m"
            ll_backend__trace_gen__IoSeqLval_34 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__STATE_VARIABLE_NextSlot_66_66);
          }
#line 539 "trace_gen.m"
          {
#line 539 "trace_gen.m"
            ll_backend__trace_gen__MaybeIoSeqLval_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 539 "trace_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeIoSeqLval_35, 0) = ((MR_Box) (ll_backend__trace_gen__IoSeqLval_34));
#line 539 "trace_gen.m"
          }
#line 540 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_NextSlot_68_68 = (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_66_66 + (MR_Integer) 1);
#line 535 "trace_gen.m"
        }
#line 541 "trace_gen.m"
        break;
#line 541 "trace_gen.m"
    }
#line 547 "trace_gen.m"
    {
#line 547 "trace_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__trace_gen__Globals_13, (MR_Integer) 215, &ll_backend__trace_gen__UseTrail_36);
    }
#line 557 "trace_gen.m"
#line 557 "trace_gen.m"
    switch (ll_backend__trace_gen__UseTrail_36) {
#line 557 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 557 "trace_gen.m"
      case (MR_Integer) 0:
#line 558 "trace_gen.m"
        {
#line 559 "trace_gen.m"
          ll_backend__trace_gen__MaybeTrailSlot_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 560 "trace_gen.m"
          ll_backend__trace_gen__MaybeTrailLvals_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 558 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_NextSlot_73_73 = ll_backend__trace_gen__STATE_VARIABLE_NextSlot_68_68;
#line 558 "trace_gen.m"
        }
#line 557 "trace_gen.m"
        break;
#line 557 "trace_gen.m"
      case (MR_Integer) 1:
#line 549 "trace_gen.m"
        {
#line 549 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__TicketSlot_38 = (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_68_68 + (MR_Integer) 1);
#line 549 "trace_gen.m"
          MR_Word ll_backend__trace_gen__TrailLval_40;
#line 549 "trace_gen.m"
          MR_Word ll_backend__trace_gen__TicketLval_41;
#line 549 "trace_gen.m"
          MR_Word ll_backend__trace_gen__V_72_72;

#line 552 "trace_gen.m"
          {
#line 552 "trace_gen.m"
            ll_backend__trace_gen__MaybeTrailSlot_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 552 "trace_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTrailSlot_39, 0) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_68_68));
#line 552 "trace_gen.m"
          }
#line 553 "trace_gen.m"
          {
#line 553 "trace_gen.m"
            ll_backend__trace_gen__TrailLval_40 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__STATE_VARIABLE_NextSlot_68_68);
          }
#line 554 "trace_gen.m"
          {
#line 554 "trace_gen.m"
            ll_backend__trace_gen__TicketLval_41 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__TicketSlot_38);
          }
#line 555 "trace_gen.m"
          {
#line 555 "trace_gen.m"
            ll_backend__trace_gen__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 555 "trace_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_72_72, 0) = ((MR_Box) (ll_backend__trace_gen__TrailLval_40));
#line 555 "trace_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_72_72, 1) = ((MR_Box) (ll_backend__trace_gen__TicketLval_41));
#line 555 "trace_gen.m"
          }
#line 555 "trace_gen.m"
          {
#line 555 "trace_gen.m"
            ll_backend__trace_gen__MaybeTrailLvals_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 555 "trace_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTrailLvals_42, 0) = ((MR_Box) (ll_backend__trace_gen__V_72_72));
#line 555 "trace_gen.m"
          }
#line 556 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_NextSlot_73_73 = (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_68_68 + (MR_Integer) 2);
#line 549 "trace_gen.m"
        }
#line 557 "trace_gen.m"
        break;
#line 557 "trace_gen.m"
    }
#line 563 "trace_gen.m"
    {
#line 563 "trace_gen.m"
      hlds__hlds_pred__proc_info_get_needs_maxfr_slot_2_p_0(ll_backend__trace_gen__ProcInfo_12, &ll_backend__trace_gen__NeedsMaxfrSlot_43);
    }
#line 571 "trace_gen.m"
#line 571 "trace_gen.m"
    switch (ll_backend__trace_gen__NeedsMaxfrSlot_43) {
#line 571 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 571 "trace_gen.m"
      case (MR_Integer) 1:
#line 572 "trace_gen.m"
        {
#line 573 "trace_gen.m"
          ll_backend__trace_gen__MaybeMaxfrSlot_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 574 "trace_gen.m"
          ll_backend__trace_gen__MaybeMaxfrLval_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 572 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_NextSlot_75_75 = ll_backend__trace_gen__STATE_VARIABLE_NextSlot_73_73;
#line 572 "trace_gen.m"
        }
#line 571 "trace_gen.m"
        break;
#line 571 "trace_gen.m"
      case (MR_Integer) 0:
#line 565 "trace_gen.m"
        {
#line 565 "trace_gen.m"
          MR_Word ll_backend__trace_gen__MaxfrLval_46;

#line 567 "trace_gen.m"
          {
#line 567 "trace_gen.m"
            ll_backend__trace_gen__MaybeMaxfrSlot_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 567 "trace_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeMaxfrSlot_45, 0) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_73_73));
#line 567 "trace_gen.m"
          }
#line 568 "trace_gen.m"
          {
#line 568 "trace_gen.m"
            ll_backend__trace_gen__MaxfrLval_46 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__STATE_VARIABLE_NextSlot_73_73);
          }
#line 569 "trace_gen.m"
          {
#line 569 "trace_gen.m"
            ll_backend__trace_gen__MaybeMaxfrLval_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 569 "trace_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeMaxfrLval_47, 0) = ((MR_Box) (ll_backend__trace_gen__MaxfrLval_46));
#line 569 "trace_gen.m"
          }
#line 570 "trace_gen.m"
          ll_backend__trace_gen__STATE_VARIABLE_NextSlot_75_75 = (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_73_73 + (MR_Integer) 1);
#line 565 "trace_gen.m"
        }
#line 571 "trace_gen.m"
        break;
#line 571 "trace_gen.m"
    }
#line 584 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeTailRecLabel_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 585 "trace_gen.m"
      {
#line 586 "trace_gen.m"
        ll_backend__trace_gen__MaybeTailRecSlot_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 587 "trace_gen.m"
        ll_backend__trace_gen__MaybeTailRecInfo_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 585 "trace_gen.m"
        ll_backend__trace_gen__STATE_VARIABLE_NextSlot_78_78 = ll_backend__trace_gen__STATE_VARIABLE_NextSlot_75_75;
#line 585 "trace_gen.m"
      }
#line 584 "trace_gen.m"
    else
#line 578 "trace_gen.m"
      {
#line 578 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TailRecLabel_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTailRecLabel_14, (MR_Integer) 0)));
#line 578 "trace_gen.m"
        MR_Word ll_backend__trace_gen__TailRecLval_51;
#line 578 "trace_gen.m"
        MR_Word ll_backend__trace_gen__V_77_77;

#line 580 "trace_gen.m"
        {
#line 580 "trace_gen.m"
          ll_backend__trace_gen__MaybeTailRecSlot_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 580 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTailRecSlot_50, 0) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_75_75));
#line 580 "trace_gen.m"
        }
#line 581 "trace_gen.m"
        {
#line 581 "trace_gen.m"
          ll_backend__trace_gen__TailRecLval_51 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__STATE_VARIABLE_NextSlot_75_75);
        }
#line 582 "trace_gen.m"
        {
#line 582 "trace_gen.m"
          ll_backend__trace_gen__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 582 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_77_77, 0) = ((MR_Box) (ll_backend__trace_gen__TailRecLval_51));
#line 582 "trace_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_77_77, 1) = ((MR_Box) (ll_backend__trace_gen__TailRecLabel_48));
#line 582 "trace_gen.m"
        }
#line 582 "trace_gen.m"
        {
#line 582 "trace_gen.m"
          ll_backend__trace_gen__MaybeTailRecInfo_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 582 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTailRecInfo_52, 0) = ((MR_Box) (ll_backend__trace_gen__V_77_77));
#line 582 "trace_gen.m"
        }
#line 583 "trace_gen.m"
        ll_backend__trace_gen__STATE_VARIABLE_NextSlot_78_78 = (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_75_75 + (MR_Integer) 1);
#line 578 "trace_gen.m"
      }
#line 590 "trace_gen.m"
    {
#line 590 "trace_gen.m"
      hlds__hlds_pred__proc_info_get_call_table_tip_2_p_0(ll_backend__trace_gen__ProcInfo_12, &ll_backend__trace_gen__MaybeCallTableTip_53);
    }
#line 597 "trace_gen.m"
    if ((ll_backend__trace_gen__MaybeCallTableTip_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 598 "trace_gen.m"
      {
#line 599 "trace_gen.m"
        ll_backend__trace_gen__MaybeCallTableSlot_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 600 "trace_gen.m"
        ll_backend__trace_gen__MaybeCallTableLval_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 598 "trace_gen.m"
      }
#line 597 "trace_gen.m"
    else
#line 592 "trace_gen.m"
      {
#line 592 "trace_gen.m"
        MR_Word ll_backend__trace_gen__CallTableLval_57;

#line 594 "trace_gen.m"
        {
#line 594 "trace_gen.m"
          ll_backend__trace_gen__MaybeCallTableSlot_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 594 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeCallTableSlot_56, 0) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_78_78));
#line 594 "trace_gen.m"
        }
#line 595 "trace_gen.m"
        {
#line 595 "trace_gen.m"
          ll_backend__trace_gen__CallTableLval_57 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__STATE_VARIABLE_NextSlot_78_78);
        }
#line 596 "trace_gen.m"
        {
#line 596 "trace_gen.m"
          ll_backend__trace_gen__MaybeCallTableLval_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 596 "trace_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeCallTableLval_58, 0) = ((MR_Box) (ll_backend__trace_gen__CallTableLval_57));
#line 596 "trace_gen.m"
        }
#line 592 "trace_gen.m"
      }
#line 603 "trace_gen.m"
    {
#line 603 "trace_gen.m"
      MR_Word base;
#line 603 "trace_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 603 "trace_gen.m"
      *ll_backend__trace_gen__TraceSlotInfo_15 = base;
#line 603 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__trace_gen__MaybeFromFullSlot_29));
#line 603 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__trace_gen__MaybeIoSeqSlot_33));
#line 603 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__trace_gen__MaybeTrailSlot_39));
#line 603 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__trace_gen__MaybeMaxfrSlot_45));
#line 603 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__trace_gen__MaybeCallTableSlot_56));
#line 603 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__trace_gen__MaybeTailRecSlot_50));
#line 603 "trace_gen.m"
    }
#line 605 "trace_gen.m"
    {
#line 605 "trace_gen.m"
      MR_Word base;
#line 605 "trace_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 605 "trace_gen.m"
      *ll_backend__trace_gen__TraceInfo_16 = base;
#line 605 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__trace_gen__TraceLevel_19));
#line 605 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__trace_gen__TraceSuppress_20));
#line 605 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__trace_gen__MaybeFromFullSlotLval_31));
#line 605 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__trace_gen__MaybeIoSeqLval_35));
#line 605 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__trace_gen__MaybeTrailLvals_42));
#line 605 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__trace_gen__MaybeMaxfrLval_47));
#line 605 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__trace_gen__MaybeCallTableLval_58));
#line 605 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__trace_gen__MaybeTailRecInfo_52));
#line 605 "trace_gen.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__trace_gen__MaybeRedoLayoutLabel_25));
#line 605 "trace_gen.m"
    }
#line 494 "trace_gen.m"
  }
#line 165 "trace_gen.m"
}

#line 157 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__trace_reserved_slots_6_p_0(
#line 157 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ModuleInfo_7,
#line 157 "trace_gen.m"
  MR_Word ll_backend__trace_gen__PredInfo_8,
#line 157 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ProcInfo_9,
#line 157 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Globals_10,
#line 157 "trace_gen.m"
  MR_Integer * ll_backend__trace_gen__ReservedSlots_11,
#line 157 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__MaybeTableVarInfo_12)
#line 157 "trace_gen.m"
{
#line 410 "trace_gen.m"
  {
#line 410 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 410 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceLevel_13;
#line 410 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceSuppress_14;
#line 410 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceTableIo_15;
#line 410 "trace_gen.m"
    MR_Word ll_backend__trace_gen__FixedSlots_16;

#line 411 "trace_gen.m"
    {
#line 411 "trace_gen.m"
      libs__globals__get_trace_level_2_p_0(ll_backend__trace_gen__Globals_10, &ll_backend__trace_gen__TraceLevel_13);
    }
#line 412 "trace_gen.m"
    {
#line 412 "trace_gen.m"
      libs__globals__get_trace_suppress_2_p_0(ll_backend__trace_gen__Globals_10, &ll_backend__trace_gen__TraceSuppress_14);
    }
#line 413 "trace_gen.m"
    {
#line 413 "trace_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__trace_gen__Globals_10, (MR_Integer) 122, &ll_backend__trace_gen__TraceTableIo_15);
    }
#line 414 "trace_gen.m"
    {
#line 414 "trace_gen.m"
      ll_backend__trace_gen__FixedSlots_16 = libs__trace_params__eff_trace_level_needs_fixed_slots_4_f_0(ll_backend__trace_gen__ModuleInfo_7, ll_backend__trace_gen__PredInfo_8, ll_backend__trace_gen__ProcInfo_9, ll_backend__trace_gen__TraceLevel_13);
    }
#line 420 "trace_gen.m"
#line 420 "trace_gen.m"
    switch (ll_backend__trace_gen__FixedSlots_16) {
#line 420 "trace_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 420 "trace_gen.m"
      case (MR_Integer) 0:
#line 417 "trace_gen.m"
        {
#line 418 "trace_gen.m"
          *ll_backend__trace_gen__ReservedSlots_11 = (MR_Integer) 0;
#line 419 "trace_gen.m"
          *ll_backend__trace_gen__MaybeTableVarInfo_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 417 "trace_gen.m"
        }
#line 420 "trace_gen.m"
        break;
#line 420 "trace_gen.m"
      case (MR_Integer) 1:
#line 421 "trace_gen.m"
        {
#line 421 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__RedoLayout_18;
#line 421 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__FromFull_19;
#line 421 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__IoSeq_20;
#line 421 "trace_gen.m"
          MR_Word ll_backend__trace_gen__UseTrail_21;
#line 421 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__Trail_22;
#line 421 "trace_gen.m"
          MR_Word ll_backend__trace_gen__NeedsMaxfrSlot_23;
#line 421 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__Maxfr_24;
#line 421 "trace_gen.m"
          MR_Word ll_backend__trace_gen__TailCallEvents_25;
#line 421 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__TailRec_26;
#line 421 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__ReservedSlots0_27;
#line 421 "trace_gen.m"
          MR_Word ll_backend__trace_gen__MaybeCallTableVar_28;
#line 421 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__V_36_36;
#line 421 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__V_37_37;
#line 421 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__V_38_38;
#line 421 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__V_39_39;
#line 421 "trace_gen.m"
          MR_Integer ll_backend__trace_gen__V_40_40;
#line 426 "trace_gen.m"
          MR_Word ll_backend__trace_gen__V_31_31;
#line 426 "trace_gen.m"
          MR_Word ll_backend__trace_gen__V_32_32;
#line 426 "trace_gen.m"
          MR_Word ll_backend__trace_gen__V_33_33;
#line 437 "trace_gen.m"
          MR_Word ll_backend__trace_gen__V_34_34;

#line 426 "trace_gen.m"
          {
#line 426 "trace_gen.m"
            ll_backend__trace_gen__V_31_31 = hlds__code_model__proc_info_interface_code_model_1_f_0(ll_backend__trace_gen__ProcInfo_9);
          }
#line 426 "trace_gen.m"
          ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_31_31 == (MR_Integer) 2);
#line 426 "trace_gen.m"
          if (ll_backend__trace_gen__succeeded)
#line 426 "trace_gen.m"
            {
#line 428 "trace_gen.m"
              ll_backend__trace_gen__V_33_33 = (MR_Integer) 2;
#line 427 "trace_gen.m"
              {
#line 427 "trace_gen.m"
                ll_backend__trace_gen__V_32_32 = libs__trace_params__eff_trace_needs_port_6_f_0(ll_backend__trace_gen__ModuleInfo_7, ll_backend__trace_gen__PredInfo_8, ll_backend__trace_gen__ProcInfo_9, ll_backend__trace_gen__TraceLevel_13, ll_backend__trace_gen__TraceSuppress_14, ll_backend__trace_gen__V_33_33);
              }
#line 428 "trace_gen.m"
              ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_32_32 == (MR_Integer) 1);
#line 426 "trace_gen.m"
            }
#line 431 "trace_gen.m"
          if (ll_backend__trace_gen__succeeded)
#line 430 "trace_gen.m"
            ll_backend__trace_gen__RedoLayout_18 = (MR_Integer) 1;
#line 431 "trace_gen.m"
          else
#line 432 "trace_gen.m"
            ll_backend__trace_gen__RedoLayout_18 = (MR_Integer) 0;
#line 436 "trace_gen.m"
          {
#line 436 "trace_gen.m"
            ll_backend__trace_gen__V_34_34 = libs__trace_params__eff_trace_level_needs_from_full_slot_4_f_0(ll_backend__trace_gen__ModuleInfo_7, ll_backend__trace_gen__PredInfo_8, ll_backend__trace_gen__ProcInfo_9, ll_backend__trace_gen__TraceLevel_13);
          }
#line 437 "trace_gen.m"
          ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_34_34 == (MR_Integer) 1);
#line 440 "trace_gen.m"
          if (ll_backend__trace_gen__succeeded)
#line 439 "trace_gen.m"
            ll_backend__trace_gen__FromFull_19 = (MR_Integer) 1;
#line 440 "trace_gen.m"
          else
#line 441 "trace_gen.m"
            ll_backend__trace_gen__FromFull_19 = (MR_Integer) 0;
#line 447 "trace_gen.m"
#line 447 "trace_gen.m"
          switch (ll_backend__trace_gen__TraceTableIo_15) {
#line 447 "trace_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 447 "trace_gen.m"
            case (MR_Integer) 0:
#line 449 "trace_gen.m"
              ll_backend__trace_gen__IoSeq_20 = (MR_Integer) 0;
#line 447 "trace_gen.m"
              break;
#line 447 "trace_gen.m"
            case (MR_Integer) 1:
#line 446 "trace_gen.m"
              ll_backend__trace_gen__IoSeq_20 = (MR_Integer) 1;
#line 447 "trace_gen.m"
              break;
#line 447 "trace_gen.m"
          }
#line 452 "trace_gen.m"
          {
#line 452 "trace_gen.m"
            libs__globals__lookup_bool_option_3_p_0(ll_backend__trace_gen__Globals_10, (MR_Integer) 215, &ll_backend__trace_gen__UseTrail_21);
          }
#line 456 "trace_gen.m"
#line 456 "trace_gen.m"
          switch (ll_backend__trace_gen__UseTrail_21) {
#line 456 "trace_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 456 "trace_gen.m"
            case (MR_Integer) 0:
#line 458 "trace_gen.m"
              ll_backend__trace_gen__Trail_22 = (MR_Integer) 0;
#line 456 "trace_gen.m"
              break;
#line 456 "trace_gen.m"
            case (MR_Integer) 1:
#line 455 "trace_gen.m"
              ll_backend__trace_gen__Trail_22 = (MR_Integer) 2;
#line 456 "trace_gen.m"
              break;
#line 456 "trace_gen.m"
          }
#line 461 "trace_gen.m"
          {
#line 461 "trace_gen.m"
            hlds__hlds_pred__proc_info_get_needs_maxfr_slot_2_p_0(ll_backend__trace_gen__ProcInfo_9, &ll_backend__trace_gen__NeedsMaxfrSlot_23);
          }
#line 465 "trace_gen.m"
#line 465 "trace_gen.m"
          switch (ll_backend__trace_gen__NeedsMaxfrSlot_23) {
#line 465 "trace_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 465 "trace_gen.m"
            case (MR_Integer) 1:
#line 467 "trace_gen.m"
              ll_backend__trace_gen__Maxfr_24 = (MR_Integer) 0;
#line 465 "trace_gen.m"
              break;
#line 465 "trace_gen.m"
            case (MR_Integer) 0:
#line 464 "trace_gen.m"
              ll_backend__trace_gen__Maxfr_24 = (MR_Integer) 1;
#line 465 "trace_gen.m"
              break;
#line 465 "trace_gen.m"
          }
#line 470 "trace_gen.m"
          {
#line 470 "trace_gen.m"
            hlds__hlds_pred__proc_info_get_has_tail_call_event_2_p_0(ll_backend__trace_gen__ProcInfo_9, &ll_backend__trace_gen__TailCallEvents_25);
          }
#line 474 "trace_gen.m"
#line 474 "trace_gen.m"
          switch (ll_backend__trace_gen__TailCallEvents_25) {
#line 474 "trace_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 474 "trace_gen.m"
            case (MR_Integer) 1:
#line 476 "trace_gen.m"
              ll_backend__trace_gen__TailRec_26 = (MR_Integer) 0;
#line 474 "trace_gen.m"
              break;
#line 474 "trace_gen.m"
            case (MR_Integer) 0:
#line 473 "trace_gen.m"
              ll_backend__trace_gen__TailRec_26 = (MR_Integer) 1;
#line 474 "trace_gen.m"
              break;
#line 474 "trace_gen.m"
          }
#line 478 "trace_gen.m"
          ll_backend__trace_gen__V_40_40 = ((MR_Integer) 3 + ll_backend__trace_gen__RedoLayout_18);
#line 478 "trace_gen.m"
          ll_backend__trace_gen__V_39_39 = (ll_backend__trace_gen__V_40_40 + ll_backend__trace_gen__FromFull_19);
#line 478 "trace_gen.m"
          ll_backend__trace_gen__V_38_38 = (ll_backend__trace_gen__V_39_39 + ll_backend__trace_gen__IoSeq_20);
#line 478 "trace_gen.m"
          ll_backend__trace_gen__V_37_37 = (ll_backend__trace_gen__V_38_38 + ll_backend__trace_gen__Trail_22);
#line 478 "trace_gen.m"
          ll_backend__trace_gen__V_36_36 = (ll_backend__trace_gen__V_37_37 + ll_backend__trace_gen__Maxfr_24);
#line 479 "trace_gen.m"
          ll_backend__trace_gen__ReservedSlots0_27 = (ll_backend__trace_gen__V_36_36 + ll_backend__trace_gen__TailRec_26);
#line 481 "trace_gen.m"
          {
#line 481 "trace_gen.m"
            hlds__hlds_pred__proc_info_get_call_table_tip_2_p_0(ll_backend__trace_gen__ProcInfo_9, &ll_backend__trace_gen__MaybeCallTableVar_28);
          }
#line 486 "trace_gen.m"
          if ((ll_backend__trace_gen__MaybeCallTableVar_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 487 "trace_gen.m"
            {
#line 488 "trace_gen.m"
              *ll_backend__trace_gen__ReservedSlots_11 = ll_backend__trace_gen__ReservedSlots0_27;
#line 489 "trace_gen.m"
              *ll_backend__trace_gen__MaybeTableVarInfo_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 487 "trace_gen.m"
            }
#line 486 "trace_gen.m"
          else
#line 483 "trace_gen.m"
            {
#line 483 "trace_gen.m"
              MR_Word ll_backend__trace_gen__CallTableVar_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeCallTableVar_28, (MR_Integer) 0)));
#line 483 "trace_gen.m"
              MR_Word ll_backend__trace_gen__V_42_42;

#line 484 "trace_gen.m"
              *ll_backend__trace_gen__ReservedSlots_11 = (ll_backend__trace_gen__ReservedSlots0_27 + (MR_Integer) 1);
#line 485 "trace_gen.m"
              {
#line 485 "trace_gen.m"
                ll_backend__trace_gen__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 485 "trace_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_42_42, 0) = ((MR_Box) (ll_backend__trace_gen__CallTableVar_29));
#line 485 "trace_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__trace_gen__V_42_42, 1) = ((MR_Box) (*ll_backend__trace_gen__ReservedSlots_11));
#line 485 "trace_gen.m"
              }
#line 485 "trace_gen.m"
              {
#line 485 "trace_gen.m"
                MR_Word base;
#line 485 "trace_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 485 "trace_gen.m"
                *ll_backend__trace_gen__MaybeTableVarInfo_12 = base;
#line 485 "trace_gen.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__trace_gen__V_42_42));
#line 485 "trace_gen.m"
              }
#line 483 "trace_gen.m"
            }
#line 421 "trace_gen.m"
        }
#line 420 "trace_gen.m"
        break;
#line 420 "trace_gen.m"
    }
#line 410 "trace_gen.m"
  }
#line 157 "trace_gen.m"
}

#line 147 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__do_we_need_maxfr_slot_5_p_0(
#line 147 "trace_gen.m"
  MR_Word ll_backend__trace_gen__Globals_6,
#line 147 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ModuleInfo_7,
#line 147 "trace_gen.m"
  MR_Word ll_backend__trace_gen__PredInfo0_8,
#line 147 "trace_gen.m"
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_0_14,
#line 147 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_15)
#line 147 "trace_gen.m"
{
#line 309 "trace_gen.m"
  {
#line 309 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 309 "trace_gen.m"
    MR_Word ll_backend__trace_gen__TraceLevel_10;
#line 309 "trace_gen.m"
    MR_Word ll_backend__trace_gen__CodeModel_11;
#line 309 "trace_gen.m"
    MR_Word ll_backend__trace_gen__NeedsMaxfrSlot_13;
#line 314 "trace_gen.m"
    MR_Word ll_backend__trace_gen__Goal_12;
#line 314 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_16_16;
#line 314 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_17_17;
#line 314 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_19_19;

#line 310 "trace_gen.m"
    {
#line 310 "trace_gen.m"
      libs__globals__get_trace_level_2_p_0(ll_backend__trace_gen__Globals_6, &ll_backend__trace_gen__TraceLevel_10);
    }
#line 311 "trace_gen.m"
    {
#line 311 "trace_gen.m"
      ll_backend__trace_gen__CodeModel_11 = hlds__code_model__proc_info_interface_code_model_1_f_0(ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_0_14);
    }
#line 313 "trace_gen.m"
    {
#line 313 "trace_gen.m"
      ll_backend__trace_gen__V_16_16 = libs__trace_params__eff_trace_level_is_none_4_f_0(ll_backend__trace_gen__ModuleInfo_7, ll_backend__trace_gen__PredInfo0_8, ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_0_14, ll_backend__trace_gen__TraceLevel_10);
    }
#line 314 "trace_gen.m"
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_16_16 == (MR_Integer) 0);
#line 314 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 314 "trace_gen.m"
      {
#line 315 "trace_gen.m"
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CodeModel_11 == (MR_Integer) 2);
#line 315 "trace_gen.m"
        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
#line 314 "trace_gen.m"
        if (ll_backend__trace_gen__succeeded)
#line 314 "trace_gen.m"
          {
#line 316 "trace_gen.m"
            {
#line 316 "trace_gen.m"
              hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_0_14, &ll_backend__trace_gen__Goal_12);
            }
#line 317 "trace_gen.m"
            ll_backend__trace_gen__V_17_17 = (MR_Integer) 1;
#line 317 "trace_gen.m"
            {
#line 317 "trace_gen.m"
              ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(ll_backend__trace_gen__Goal_12, &ll_backend__trace_gen__V_19_19);
            }
#line 317 "trace_gen.m"
            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__V_17_17 == ll_backend__trace_gen__V_19_19);
#line 314 "trace_gen.m"
          }
#line 314 "trace_gen.m"
      }
#line 320 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 319 "trace_gen.m"
      ll_backend__trace_gen__NeedsMaxfrSlot_13 = (MR_Integer) 0;
#line 320 "trace_gen.m"
    else
#line 321 "trace_gen.m"
      ll_backend__trace_gen__NeedsMaxfrSlot_13 = (MR_Integer) 1;
#line 323 "trace_gen.m"
    {
#line 323 "trace_gen.m"
      hlds__hlds_pred__proc_info_set_needs_maxfr_slot_3_p_0(ll_backend__trace_gen__NeedsMaxfrSlot_13, ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_0_14, ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_15);
    }
#line 309 "trace_gen.m"
  }
#line 147 "trace_gen.m"
}

#line 141 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__trace_fail_vars_3_p_0(
#line 141 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ModuleInfo_4,
#line 141 "trace_gen.m"
  MR_Word ll_backend__trace_gen__ProcInfo_5,
#line 141 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__FailVars_6)
#line 141 "trace_gen.m"
{
#line 294 "trace_gen.m"
  {
#line 294 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 294 "trace_gen.m"
    MR_Word ll_backend__trace_gen__HeadVars_7;
#line 294 "trace_gen.m"
    MR_Word ll_backend__trace_gen__Modes_8;
#line 294 "trace_gen.m"
    MR_Word ll_backend__trace_gen__ArgInfos_9;
#line 294 "trace_gen.m"
    MR_Word ll_backend__trace_gen__VarTypes_10;
#line 294 "trace_gen.m"
    MR_Word ll_backend__trace_gen__Insts_11;
#line 305 "trace_gen.m"
    MR_Word ll_backend__trace_gen__FailVarsList_12;

#line 295 "trace_gen.m"
    {
#line 295 "trace_gen.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__trace_gen__ProcInfo_5, &ll_backend__trace_gen__HeadVars_7);
    }
#line 296 "trace_gen.m"
    {
#line 296 "trace_gen.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ll_backend__trace_gen__ProcInfo_5, &ll_backend__trace_gen__Modes_8);
    }
#line 297 "trace_gen.m"
    {
#line 297 "trace_gen.m"
      hlds__hlds_pred__proc_info_arg_info_2_p_0(ll_backend__trace_gen__ProcInfo_5, &ll_backend__trace_gen__ArgInfos_9);
    }
#line 298 "trace_gen.m"
    {
#line 298 "trace_gen.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__trace_gen__ProcInfo_5, &ll_backend__trace_gen__VarTypes_10);
    }
#line 299 "trace_gen.m"
    {
#line 299 "trace_gen.m"
      check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ll_backend__trace_gen__ModuleInfo_4, ll_backend__trace_gen__Modes_8, &ll_backend__trace_gen__Insts_11);
    }
#line 301 "trace_gen.m"
    {
#line 301 "trace_gen.m"
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen__build_fail_vars_6_p_0(ll_backend__trace_gen__HeadVars_7, ll_backend__trace_gen__Insts_11, ll_backend__trace_gen__ArgInfos_9, ll_backend__trace_gen__ModuleInfo_4, ll_backend__trace_gen__VarTypes_10, &ll_backend__trace_gen__FailVarsList_12);
    }
#line 305 "trace_gen.m"
    if (ll_backend__trace_gen__succeeded)
#line 304 "trace_gen.m"
      {
#line 304 "trace_gen.m"
        {
#line 304 "trace_gen.m"
          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__trace_gen__FailVarsList_12, ll_backend__trace_gen__FailVars_6);
        }
#line 304 "trace_gen.m"
      }
#line 305 "trace_gen.m"
    else
#line 306 "trace_gen.m"
      {
#line 306 "trace_gen.m"
        {
#line 306 "trace_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.trace_fail_vars\'/3", (MR_String) "length mismatch");
#line 306 "trace_gen.m"
          return;
        }
#line 306 "trace_gen.m"
      }
#line 294 "trace_gen.m"
  }
#line 141 "trace_gen.m"
}

#line 94 "trace_gen.m"
void MR_CALL 
ll_backend__trace_gen__get_trace_maybe_tail_rec_info_2_p_0(
#line 94 "trace_gen.m"
  MR_Word ll_backend__trace_gen__TraceInfo_3,
#line 94 "trace_gen.m"
  MR_Word * ll_backend__trace_gen__HeadVar__2_2)
#line 94 "trace_gen.m"
{
#line 1398 "trace_gen.m"
  {
#line 1398 "trace_gen.m"
    MR_bool ll_backend__trace_gen__succeeded;
#line 1398 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 0)));
#line 1398 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 1)));
#line 1398 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 2)));
#line 1398 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 3)));
#line 1398 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 4)));
#line 1398 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 5)));
#line 1398 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 6)));
#line 1398 "trace_gen.m"
    MR_Word ll_backend__trace_gen__V_11_11;

#line 1398 "trace_gen.m"
    *ll_backend__trace_gen__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 7)));
#line 1398 "trace_gen.m"
    ll_backend__trace_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 8)));
#line 1398 "trace_gen.m"
  }
#line 94 "trace_gen.m"
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
