/*
** Automatically generated from `layout.m'
** by the Mercury compiler,
** version rotd-2015-05-05
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


/* :- module ll_backend.layout. */
/* :- implementation. */

/*
INIT mercury__ll_backend__layout__init
ENDINIT
*/

#include "ll_backend.layout.mih"


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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
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
#include "ll_backend.llds.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 141 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_alloc_site_info_0_0[4];

#line 144 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_alloc_site_info_0_0[4];

#line 147 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_alloc_site_info_0_0;

#line 150 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_alloc_site_info_0_0[1];

#line 153 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_alloc_site_info_0[1];

#line 156 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_alloc_site_info_0[1];

#line 159 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_alloc_site_info_0[1];

#line 162 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_trace_port_0;

#line 165 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1bool__type_ctor_info_bool_0;

#line 168 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 171 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0;

#line 174 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_basic_label_layout_0_0[8];

#line 177 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_basic_label_layout_0_0[8];

#line 180 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_basic_label_layout_0_0;

#line 183 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_basic_label_layout_0_0[1];

#line 186 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_basic_label_layout_0[1];

#line 189 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_basic_label_layout_0[1];

#line 192 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_basic_label_layout_0[1];

#line 195 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_closure_proc_id_data_0_0[8];

#line 198 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_closure_proc_id_data_0_0[8];

#line 201 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_closure_proc_id_data_0_0;

#line 204 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_closure_proc_id_data_0_0[1];

#line 207 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_closure_proc_id_data_0[1];

#line 210 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_closure_proc_id_data_0[1];

#line 213 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_closure_proc_id_data_0[1];

#line 216 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_data_or_slot_id_0_0[1];

#line 219 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_data_or_slot_id_0_0;

#line 222 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_data_or_slot_id_0_1[1];

#line 225 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_data_or_slot_id_0_1;

#line 228 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_data_or_slot_id_0_0[1];

#line 231 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_data_or_slot_id_0_1[1];

#line 234 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_data_or_slot_id_0[2];

#line 237 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_data_or_slot_id_0[2];

#line 240 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_data_or_slot_id_0[2];

#line 243 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_deep_excp_slots_0_0[3];

#line 246 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_deep_excp_slots_0_0[3];

#line 249 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_deep_excp_slots_0_0;

#line 252 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_deep_excp_slots_0_0[1];

#line 255 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_deep_excp_slots_0[1];

#line 258 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_deep_excp_slots_0[1];

#line 261 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_deep_excp_slots_0[1];

#line 264 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__layout__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_rval_0;

#line 267 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_event_set_layout_data_0_0[2];

#line 270 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_event_set_layout_data_0_0;

#line 273 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_event_set_layout_data_0_0[1];

#line 276 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_event_set_layout_data_0[1];

#line 279 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_event_set_layout_data_0[1];

#line 282 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_event_set_layout_data_0[1];

#line 285 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__layout__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0;

#line 288 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0;

#line 291 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_file_layout_data_0_0[2];

#line 294 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_file_layout_data_0_0[2];

#line 297 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_file_layout_data_0_0;

#line 300 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_file_layout_data_0_0[1];

#line 303 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_file_layout_data_0[1];

#line 306 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_file_layout_data_0[1];

#line 309 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_file_layout_data_0[1];

#line 312 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_layout_long_vars_0_0[2];

#line 315 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_label_layout_long_vars_0_0;

#line 318 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_layout_long_vars_0_0[1];

#line 321 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_layout_long_vars_0[1];

#line 324 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_layout_long_vars_0[1];

#line 327 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_long_vars_0[1];

#line 330 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_no_vars_0[1];

#line 333 "ll_backend.layout.c"
static const MR_NotagFunctorDesc ll_backend__layout__ll_backend__layout__notag_functor_desc_label_layout_no_vars_0;

#line 336 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_layout_short_vars_0_0[2];

#line 339 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_label_layout_short_vars_0_0;

#line 342 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_layout_short_vars_0_0[1];

#line 345 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_layout_short_vars_0[1];

#line 348 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_layout_short_vars_0[1];

#line 351 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_short_vars_0[1];

#line 354 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_long_var_info_0_0[6];

#line 357 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_label_long_var_info_0_0[6];

#line 360 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_label_long_var_info_0_0;

#line 363 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_long_var_info_0_0[1];

#line 366 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_long_var_info_0[1];

#line 369 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_long_var_info_0[1];

#line 372 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_long_var_info_0[1];

#line 375 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_short_var_info_0_0[5];

#line 378 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_label_short_var_info_0_0[5];

#line 381 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_label_short_var_info_0_0;

#line 384 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_short_var_info_0_0[1];

#line 387 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_short_var_info_0[1];

#line 390 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_short_var_info_0[1];

#line 393 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_short_var_info_0[1];

#line 396 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_0;

#line 399 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_1;

#line 402 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_2;

#line 405 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_value_ordered_label_vars_0[3];

#line 408 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_name_ordered_label_vars_0[3];

#line 411 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_vars_0[3];

#line 414 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_0;

#line 417 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_1;

#line 420 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_2;

#line 423 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_3;

#line 426 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_4;

#line 429 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_5;

#line 432 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_array_name_0_6[1];

#line 435 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_6;

#line 438 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_7;

#line 441 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_8;

#line 444 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_9;

#line 447 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_10;

#line 450 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_11;

#line 453 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_12;

#line 456 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_13;

#line 459 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_14;

#line 462 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_15;

#line 465 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_16;

#line 468 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_17;

#line 471 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_18;

#line 474 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_array_name_0_0[18];

#line 477 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_array_name_0_1[1];

#line 480 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_layout_array_name_0[2];

#line 483 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_layout_array_name_0[19];

#line 486 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_layout_array_name_0[19];

#line 489 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_0[2];

#line 492 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_0;

#line 495 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_1[3];

#line 498 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_1;

#line 501 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_2[2];

#line 504 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_2;

#line 507 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_3[2];

#line 510 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_3;

#line 513 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_4[2];

#line 516 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_4;

#line 519 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_5[1];

#line 522 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_5;

#line 525 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_6[1];

#line 528 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_6;

#line 531 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_7[1];

#line 534 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_7;

#line 537 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_8[2];

#line 540 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_8;

#line 543 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_9[1];

#line 546 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_9;

#line 549 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_10[2];

#line 552 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_10;

#line 555 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_11[2];

#line 558 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_11;

#line 561 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_12[3];

#line 564 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_12;

#line 567 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_13[3];

#line 570 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_13;

#line 573 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_14[2];

#line 576 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_14;

#line 579 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_15[1];

#line 582 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_15;

#line 585 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_16[1];

#line 588 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_16;

#line 591 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_17[1];

#line 594 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_17;

#line 597 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_18[1];

#line 600 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_18;

#line 603 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_0[1];

#line 606 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_1[1];

#line 609 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_2[1];

#line 612 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_3[16];

#line 615 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_layout_name_0[4];

#line 618 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_layout_name_0[19];

#line 621 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_layout_name_0[19];

#line 624 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_slot_name_0_0[2];

#line 627 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_slot_name_0_0;

#line 630 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_slot_name_0_0[1];

#line 633 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_layout_slot_name_0[1];

#line 636 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_layout_slot_name_0[1];

#line 639 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_layout_slot_name_0[1];

#line 642 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_0;

#line 645 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_maybe_proc_id_and_more_0_1[4];

#line 648 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_maybe_proc_id_and_more_0_1[4];

#line 651 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_1;

#line 654 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_maybe_proc_id_and_more_0_0[1];

#line 657 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_maybe_proc_id_and_more_0_1[1];

#line 660 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_maybe_proc_id_and_more_0[2];

#line 663 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_maybe_proc_id_and_more_0[2];

#line 666 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_maybe_proc_id_and_more_0[2];

#line 669 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_module_layout_deep_prof_0;

#line 672 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_module_layout_debug_0;

#line 675 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_module_layout_data_0_0[5];

#line 678 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_module_layout_data_0_0[5];

#line 681 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_data_0_0;

#line 684 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_data_0_0[1];

#line 687 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_data_0[1];

#line 690 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_data_0[1];

#line 693 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_data_0[1];

#line 696 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1ll_backend__layout__type_ctor_info_layout_name_0;

#line 699 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1ll_backend__layout__type_ctor_info_file_layout_data_0;

#line 702 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_event_set_layout_data_0;

#line 705 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_module_layout_debug_0_0[6];

#line 708 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_module_layout_debug_0_0[6];

#line 711 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_debug_0_0;

#line 714 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_debug_0_0[1];

#line 717 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_debug_0[1];

#line 720 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_debug_0[1];

#line 723 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_debug_0[1];

#line 726 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1builtin__type_ctor_info_int_0;

#line 729 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_module_layout_deep_prof_0_0[4];

#line 732 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_module_layout_deep_prof_0_0[4];

#line 735 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_deep_prof_0_0;

#line 738 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_deep_prof_0_0[1];

#line 741 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_deep_prof_0[1];

#line 744 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_deep_prof_0[1];

#line 747 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_deep_prof_0[1];

#line 750 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_data_0_0[3];

#line 753 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_data_0_0[3];

#line 756 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_data_0_0;

#line 759 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_data_0_0[1];

#line 762 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_data_0[1];

#line 765 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_data_0[1];

#line 768 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_data_0[1];

#line 771 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_data_or_slot_id_0;

#line 774 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_exec_trace_0_0[19];

#line 777 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_exec_trace_0_0[19];

#line 780 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_exec_trace_0_0;

#line 783 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_exec_trace_0_0[1];

#line 786 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_exec_trace_0[1];

#line 789 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_exec_trace_0[1];

#line 792 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_exec_trace_0[1];

#line 795 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_kind_0_0;

#line 798 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_kind_0_1[1];

#line 801 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_kind_0_1;

#line 804 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_kind_0_0[1];

#line 807 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_kind_0_1[1];

#line 810 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_kind_0[2];

#line 813 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_kind_0[2];

#line 816 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_kind_0[2];

#line 819 "ll_backend.layout.c"
static const MR_VA_TypeInfo_Struct2 ll_backend__layout____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 822 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 825 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_proc_static_0_0[6];

#line 828 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_proc_static_0_0[6];

#line 831 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_proc_static_0_0;

#line 834 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_proc_static_0_0[1];

#line 837 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_proc_static_0[1];

#line 840 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_proc_static_0[1];

#line 843 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_proc_static_0[1];

#line 846 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0;

#line 849 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_stack_traversal_0_0[4];

#line 852 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_stack_traversal_0_0[4];

#line 855 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_stack_traversal_0_0;

#line 858 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_stack_traversal_0_0[1];

#line 861 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_stack_traversal_0[1];

#line 864 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_stack_traversal_0[1];

#line 867 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_stack_traversal_0[1];

#line 870 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_0;

#line 873 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_1;

#line 876 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_value_ordered_proc_layout_user_or_uci_0[2];

#line 879 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_name_ordered_proc_layout_user_or_uci_0[2];

#line 882 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_user_or_uci_0[2];

#line 885 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_string_with_0s_0[1];

#line 888 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1builtin__type_ctor_info_string_0;

#line 891 "ll_backend.layout.c"
static const MR_NotagFunctorDesc ll_backend__layout__ll_backend__layout__notag_functor_desc_string_with_0s_0;

#line 894 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_table_io_args_data_0_0[3];

#line 897 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_table_io_args_data_0_0[3];

#line 900 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_table_io_args_data_0_0;

#line 903 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_table_io_args_data_0_0[1];

#line 906 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_table_io_args_data_0[1];

#line 909 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_table_io_args_data_0[1];

#line 912 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_table_io_args_data_0[1];

#line 915 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_table_io_args_data_0;

#line 918 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_table_io_entry_data_0_0[2];

#line 921 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_table_io_entry_data_0_0[2];

#line 924 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_table_io_entry_data_0_0;

#line 927 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_table_io_entry_data_0_0[1];

#line 930 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_table_io_entry_data_0[1];

#line 933 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_table_io_entry_data_0[1];

#line 936 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_table_io_entry_data_0[1];

#line 939 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_user_event_data_0_0[3];

#line 942 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_user_event_data_0_0[3];

#line 945 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_user_event_data_0_0;

#line 948 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_user_event_data_0_0[1];

#line 951 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_user_event_data_0[1];

#line 954 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_user_event_data_0[1];

#line 957 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_user_event_data_0[1];

#line 960 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____alloc_site_info_0_0_10001(
#line 963 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 965 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 968 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____alloc_site_info_0_0_10001(
#line 971 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 973 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 975 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 978 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____basic_label_layout_0_0_10001(
#line 981 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 983 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 986 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____basic_label_layout_0_0_10001(
#line 989 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 991 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 993 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 996 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____closure_proc_id_data_0_0_10001(
#line 999 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1001 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1004 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____closure_proc_id_data_0_0_10001(
#line 1007 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1009 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1011 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1014 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____data_or_slot_id_0_0_10001(
#line 1017 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1019 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1022 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____data_or_slot_id_0_0_10001(
#line 1025 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1027 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1029 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1032 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____deep_excp_slots_0_0_10001(
#line 1035 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1037 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1040 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____deep_excp_slots_0_0_10001(
#line 1043 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1045 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1047 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1050 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____event_set_layout_data_0_0_10001(
#line 1053 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1055 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1058 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____event_set_layout_data_0_0_10001(
#line 1061 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1063 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1065 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1068 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____file_layout_data_0_0_10001(
#line 1071 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1073 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1076 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____file_layout_data_0_0_10001(
#line 1079 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1081 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1083 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1086 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_long_vars_0_0_10001(
#line 1089 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1091 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1094 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_layout_long_vars_0_0_10001(
#line 1097 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1099 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1101 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1104 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_no_vars_0_0_10001(
#line 1107 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1109 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1112 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_layout_no_vars_0_0_10001(
#line 1115 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1117 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1119 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1122 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_short_vars_0_0_10001(
#line 1125 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1127 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1130 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_layout_short_vars_0_0_10001(
#line 1133 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1135 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1137 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1140 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_long_var_info_0_0_10001(
#line 1143 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1145 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1148 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_long_var_info_0_0_10001(
#line 1151 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1153 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1155 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1158 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_short_var_info_0_0_10001(
#line 1161 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1163 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1166 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_short_var_info_0_0_10001(
#line 1169 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1171 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1173 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1176 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_vars_0_0_10001(
#line 1179 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1181 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1184 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_vars_0_0_10001(
#line 1187 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1189 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1191 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1194 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____layout_array_name_0_0_10001(
#line 1197 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1199 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1202 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____layout_array_name_0_0_10001(
#line 1205 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1207 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1209 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1212 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____layout_name_0_0_10001(
#line 1215 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1217 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1220 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____layout_name_0_0_10001(
#line 1223 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1225 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1227 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1230 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____layout_slot_name_0_0_10001(
#line 1233 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1235 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1238 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____layout_slot_name_0_0_10001(
#line 1241 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1243 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1245 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1248 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____maybe_proc_id_and_more_0_0_10001(
#line 1251 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1253 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1256 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____maybe_proc_id_and_more_0_0_10001(
#line 1259 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1261 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1263 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1266 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_data_0_0_10001(
#line 1269 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1271 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1274 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____module_layout_data_0_0_10001(
#line 1277 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1279 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1281 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1284 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_debug_0_0_10001(
#line 1287 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1289 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1292 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____module_layout_debug_0_0_10001(
#line 1295 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1297 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1299 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1302 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_deep_prof_0_0_10001(
#line 1305 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1307 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1310 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____module_layout_deep_prof_0_0_10001(
#line 1313 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1315 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1317 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1320 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_data_0_0_10001(
#line 1323 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1325 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1328 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_data_0_0_10001(
#line 1331 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1333 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1335 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1338 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_exec_trace_0_0_10001(
#line 1341 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1343 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1346 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_exec_trace_0_0_10001(
#line 1349 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1351 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1353 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1356 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_kind_0_0_10001(
#line 1359 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1361 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1364 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_kind_0_0_10001(
#line 1367 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1369 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1371 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1374 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_proc_static_0_0_10001(
#line 1377 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1379 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1382 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_proc_static_0_0_10001(
#line 1385 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1387 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1389 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1392 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_stack_traversal_0_0_10001(
#line 1395 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1397 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1400 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_stack_traversal_0_0_10001(
#line 1403 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1405 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1407 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1410 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_user_or_uci_0_0_10001(
#line 1413 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1415 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1418 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_user_or_uci_0_0_10001(
#line 1421 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1423 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1425 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1428 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____string_with_0s_0_0_10001(
#line 1431 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1433 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1436 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____string_with_0s_0_0_10001(
#line 1439 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1441 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1443 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1446 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____table_io_args_data_0_0_10001(
#line 1449 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1451 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1454 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____table_io_args_data_0_0_10001(
#line 1457 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1459 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1461 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1464 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____table_io_entry_data_0_0_10001(
#line 1467 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1469 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1472 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____table_io_entry_data_0_0_10001(
#line 1475 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1477 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1479 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1482 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____user_event_data_0_0_10001(
#line 1485 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1487 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1490 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____user_event_data_0_0_10001(
#line 1493 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1495 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1497 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);


static /* final */ const MR_Box ll_backend__layout_scalar_common_1[16][2];

static /* final */ const MR_Box ll_backend__layout_scalar_common_2[2][3];

static /* final */ const MR_Box ll_backend__layout_scalar_common_3[1][4];




static /* final */ const MR_Box ll_backend__layout_scalar_common_1[16][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__layout_scalar_common_2[1]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_module_layout_deep_prof_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_module_layout_debug_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_file_layout_data_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_event_set_layout_data_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_data_or_slot_id_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__layout_scalar_common_3[0]))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_table_io_args_data_0))
  },
};

static /* final */ const MR_Box ll_backend__layout_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0))
  },
};

static /* final */ const MR_Box ll_backend__layout_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 1635 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_alloc_site_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1643 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_alloc_site_info_0_0[4] = {
  (MR_String) "as_proc_label",
  (MR_String) "as_context",
  (MR_String) "as_type",
  (MR_String) "as_size"
};

#line 1651 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_alloc_site_info_0_0 = {
  (MR_String) "alloc_site_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__layout__ll_backend__layout__field_types_alloc_site_info_0_0,
  ll_backend__layout__ll_backend__layout__field_names_alloc_site_info_0_0,
  NULL,
  NULL
};

#line 1666 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_alloc_site_info_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_alloc_site_info_0_0
};

#line 1671 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_alloc_site_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_alloc_site_info_0_0
  }
};

#line 1680 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_alloc_site_info_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_alloc_site_info_0_0
};

#line 1685 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_alloc_site_info_0[1] = {
  (MR_Integer) 0
};

#line 1690 "ll_backend.layout.c"
const MR_TypeCtorInfo_Struct ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__layout____Unify____alloc_site_info_0_0_10001)),
  ((MR_Box) (ll_backend__layout____Compare____alloc_site_info_0_0_10001)),
  (MR_String) "ll_backend.layout",
  (MR_String) "alloc_site_info",
  {
    ll_backend__layout__ll_backend__layout__du_name_ordered_alloc_site_info_0
  },
  {
    ll_backend__layout__ll_backend__layout__du_ptag_ordered_alloc_site_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__layout__ll_backend__layout__functor_number_map_alloc_site_info_0
};

#line 1711 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_trace_port_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0
  }
};

#line 1719 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1bool__type_ctor_info_bool_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 1727 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1735 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

#line 1743 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_basic_label_layout_0_0[8] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_trace_port_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0
};

#line 1755 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_basic_label_layout_0_0[8] = {
  (MR_String) "proc_label",
  (MR_String) "label_num",
  (MR_String) "proc_layout_name",
  (MR_String) "maybe_port",
  (MR_String) "maybe_is_hidden",
  (MR_String) "label_num_in_module",
  (MR_String) "maybe_goal_path",
  (MR_String) "maybe_user_info"
};

#line 1767 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_basic_label_layout_0_0 = {
  (MR_String) "basic_label_layout",
  (MR_Integer) 8,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__layout__ll_backend__layout__field_types_basic_label_layout_0_0,
  ll_backend__layout__ll_backend__layout__field_names_basic_label_layout_0_0,
  NULL,
  NULL
};

#line 1782 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_basic_label_layout_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_basic_label_layout_0_0
};

#line 1787 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_basic_label_layout_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_basic_label_layout_0_0
  }
};

#line 1796 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_basic_label_layout_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_basic_label_layout_0_0
};

#line 1801 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_basic_label_layout_0[1] = {
  (MR_Integer) 0
};

#line 1806 "ll_backend.layout.c"
const MR_TypeCtorInfo_Struct ll_backend__layout__ll_backend__layout__type_ctor_info_basic_label_layout_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__layout____Unify____basic_label_layout_0_0_10001)),
  ((MR_Box) (ll_backend__layout____Compare____basic_label_layout_0_0_10001)),
  (MR_String) "ll_backend.layout",
  (MR_String) "basic_label_layout",
  {
    ll_backend__layout__ll_backend__layout__du_name_ordered_basic_label_layout_0
  },
  {
    ll_backend__layout__ll_backend__layout__du_ptag_ordered_basic_label_layout_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__layout__ll_backend__layout__functor_number_map_basic_label_layout_0
};

#line 1827 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_closure_proc_id_data_0_0[8] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_origin_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1839 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_closure_proc_id_data_0_0[8] = {
  (MR_String) "caller_proc_label",
  (MR_String) "caller_closure_seq_no",
  (MR_String) "closure_proc_label",
  (MR_String) "closure_module_name",
  (MR_String) "closure_file_name",
  (MR_String) "closure_line_number",
  (MR_String) "closure_origin",
  (MR_String) "closure_goal_path"
};

#line 1851 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_closure_proc_id_data_0_0 = {
  (MR_String) "closure_proc_id_data",
  (MR_Integer) 8,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__layout__ll_backend__layout__field_types_closure_proc_id_data_0_0,
  ll_backend__layout__ll_backend__layout__field_names_closure_proc_id_data_0_0,
  NULL,
  NULL
};

#line 1866 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_closure_proc_id_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_closure_proc_id_data_0_0
};

#line 1871 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_closure_proc_id_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_closure_proc_id_data_0_0
  }
};

#line 1880 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_closure_proc_id_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_closure_proc_id_data_0_0
};

#line 1885 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_closure_proc_id_data_0[1] = {
  (MR_Integer) 0
};

#line 1890 "ll_backend.layout.c"
const MR_TypeCtorInfo_Struct ll_backend__layout__ll_backend__layout__type_ctor_info_closure_proc_id_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__layout____Unify____closure_proc_id_data_0_0_10001)),
  ((MR_Box) (ll_backend__layout____Compare____closure_proc_id_data_0_0_10001)),
  (MR_String) "ll_backend.layout",
  (MR_String) "closure_proc_id_data",
  {
    ll_backend__layout__ll_backend__layout__du_name_ordered_closure_proc_id_data_0
  },
  {
    ll_backend__layout__ll_backend__layout__du_ptag_ordered_closure_proc_id_data_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__layout__ll_backend__layout__functor_number_map_closure_proc_id_data_0
};

#line 1911 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_data_or_slot_id_0_0[1] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0
};

#line 1916 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_data_or_slot_id_0_0 = {
  (MR_String) "data_or_slot_is_data",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__layout__ll_backend__layout__field_types_data_or_slot_id_0_0,
  NULL,
  NULL,
  NULL
};

#line 1931 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_data_or_slot_id_0_1[1] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
};

#line 1936 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_data_or_slot_id_0_1 = {
  (MR_String) "data_or_slot_is_slot",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ll_backend__layout__ll_backend__layout__field_types_data_or_slot_id_0_1,
  NULL,
  NULL,
  NULL
};

#line 1951 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_data_or_slot_id_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_data_or_slot_id_0_1
};

#line 1956 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_data_or_slot_id_0_1[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_data_or_slot_id_0_0
};

#line 1961 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_data_or_slot_id_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_data_or_slot_id_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_data_or_slot_id_0_1
  }
};

#line 1975 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_data_or_slot_id_0[2] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_data_or_slot_id_0_0,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_data_or_slot_id_0_1
};

#line 1981 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_data_or_slot_id_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1987 "ll_backend.layout.c"
const MR_TypeCtorInfo_Struct ll_backend__layout__ll_backend__layout__type_ctor_info_data_or_slot_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__layout____Unify____data_or_slot_id_0_0_10001)),
  ((MR_Box) (ll_backend__layout____Compare____data_or_slot_id_0_0_10001)),
  (MR_String) "ll_backend.layout",
  (MR_String) "data_or_slot_id",
  {
    ll_backend__layout__ll_backend__layout__du_name_ordered_data_or_slot_id_0
  },
  {
    ll_backend__layout__ll_backend__layout__du_ptag_ordered_data_or_slot_id_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__layout__ll_backend__layout__functor_number_map_data_or_slot_id_0
};

#line 2008 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_deep_excp_slots_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2015 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_deep_excp_slots_0_0[3] = {
  (MR_String) "top_csd",
  (MR_String) "middle_csd",
  (MR_String) "old_outermost"
};

#line 2022 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_deep_excp_slots_0_0 = {
  (MR_String) "deep_excp_slots",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__layout__ll_backend__layout__field_types_deep_excp_slots_0_0,
  ll_backend__layout__ll_backend__layout__field_names_deep_excp_slots_0_0,
  NULL,
  NULL
};

#line 2037 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_deep_excp_slots_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_deep_excp_slots_0_0
};

#line 2042 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_deep_excp_slots_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_deep_excp_slots_0_0
  }
};

#line 2051 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_deep_excp_slots_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_deep_excp_slots_0_0
};

#line 2056 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_deep_excp_slots_0[1] = {
  (MR_Integer) 0
};

#line 2061 "ll_backend.layout.c"
const MR_TypeCtorInfo_Struct ll_backend__layout__ll_backend__layout__type_ctor_info_deep_excp_slots_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__layout____Unify____deep_excp_slots_0_0_10001)),
  ((MR_Box) (ll_backend__layout____Compare____deep_excp_slots_0_0_10001)),
  (MR_String) "ll_backend.layout",
  (MR_String) "deep_excp_slots",
  {
    ll_backend__layout__ll_backend__layout__du_name_ordered_deep_excp_slots_0
  },
  {
    ll_backend__layout__ll_backend__layout__du_ptag_ordered_deep_excp_slots_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__layout__ll_backend__layout__functor_number_map_deep_excp_slots_0
};

#line 2082 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__layout__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0
  }
};

#line 2091 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_event_set_layout_data_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_set_data_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_rval_0
};

#line 2097 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_event_set_layout_data_0_0 = {
  (MR_String) "event_set_layout_data",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__layout__ll_backend__layout__field_types_event_set_layout_data_0_0,
  NULL,
  NULL,
  NULL
};

#line 2112 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_event_set_layout_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_event_set_layout_data_0_0
};

#line 2117 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_event_set_layout_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_event_set_layout_data_0_0
  }
};

#line 2126 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_event_set_layout_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_event_set_layout_data_0_0
};

#line 2131 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_event_set_layout_data_0[1] = {
  (MR_Integer) 0
};

#line 2136 "ll_backend.layout.c"
const MR_TypeCtorInfo_Struct ll_backend__layout__ll_backend__layout__type_ctor_info_event_set_layout_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__layout____Unify____event_set_layout_data_0_0_10001)),
  ((MR_Box) (ll_backend__layout____Compare____event_set_layout_data_0_0_10001)),
  (MR_String) "ll_backend.layout",
  (MR_String) "event_set_layout_data",
  {
    ll_backend__layout__ll_backend__layout__du_name_ordered_event_set_layout_data_0
  },
  {
    ll_backend__layout__ll_backend__layout__du_ptag_ordered_event_set_layout_data_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__layout__ll_backend__layout__functor_number_map_event_set_layout_data_0
};

#line 2157 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__layout__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

#line 2166 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__layout__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

#line 2174 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_file_layout_data_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0
};

#line 2180 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_file_layout_data_0_0[2] = {
  (MR_String) "file_name",
  (MR_String) "line_no_label_list"
};

#line 2186 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_file_layout_data_0_0 = {
  (MR_String) "file_layout_data",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__layout__ll_backend__layout__field_types_file_layout_data_0_0,
  ll_backend__layout__ll_backend__layout__field_names_file_layout_data_0_0,
  NULL,
  NULL
};

#line 2201 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_file_layout_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_file_layout_data_0_0
};

#line 2206 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_file_layout_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_file_layout_data_0_0
  }
};

#line 2215 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_file_layout_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_file_layout_data_0_0
};

#line 2220 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_file_layout_data_0[1] = {
  (MR_Integer) 0
};

#line 2225 "ll_backend.layout.c"
const MR_TypeCtorInfo_Struct ll_backend__layout__ll_backend__layout__type_ctor_info_file_layout_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__layout____Unify____file_layout_data_0_0_10001)),
  ((MR_Box) (ll_backend__layout____Compare____file_layout_data_0_0_10001)),
  (MR_String) "ll_backend.layout",
  (MR_String) "file_layout_data",
  {
    ll_backend__layout__ll_backend__layout__du_name_ordered_file_layout_data_0
  },
  {
    ll_backend__layout__ll_backend__layout__du_ptag_ordered_file_layout_data_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__layout__ll_backend__layout__functor_number_map_file_layout_data_0
};

#line 2246 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_layout_long_vars_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_basic_label_layout_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_label_long_var_info_0
};

#line 2252 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_label_layout_long_vars_0_0 = {
  (MR_String) "label_layout_long_vars",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__layout__ll_backend__layout__field_types_label_layout_long_vars_0_0,
  NULL,
  NULL,
  NULL
};

#line 2267 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_layout_long_vars_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_layout_long_vars_0_0
};

#line 2272 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_layout_long_vars_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_label_layout_long_vars_0_0
  }
};

#line 2281 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_layout_long_vars_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_layout_long_vars_0_0
};

#line 2286 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_long_vars_0[1] = {
  (MR_Integer) 0
};

#line 2291 "ll_backend.layout.c"
const MR_TypeCtorInfo_Struct ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_long_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__layout____Unify____label_layout_long_vars_0_0_10001)),
  ((MR_Box) (ll_backend__layout____Compare____label_layout_long_vars_0_0_10001)),
  (MR_String) "ll_backend.layout",
  (MR_String) "label_layout_long_vars",
  {
    ll_backend__layout__ll_backend__layout__du_name_ordered_label_layout_long_vars_0
  },
  {
    ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_layout_long_vars_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_long_vars_0
};

#line 2312 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_no_vars_0[1] = {
  (MR_Integer) 0
};

#line 2317 "ll_backend.layout.c"
static const MR_NotagFunctorDesc ll_backend__layout__ll_backend__layout__notag_functor_desc_label_layout_no_vars_0 = {
  (MR_String) "label_layout_no_vars",
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_basic_label_layout_0,
  NULL
};

#line 2324 "ll_backend.layout.c"
const MR_TypeCtorInfo_Struct ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_no_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (ll_backend__layout____Unify____label_layout_no_vars_0_0_10001)),
  ((MR_Box) (ll_backend__layout____Compare____label_layout_no_vars_0_0_10001)),
  (MR_String) "ll_backend.layout",
  (MR_String) "label_layout_no_vars",
  {
    &ll_backend__layout__ll_backend__layout__notag_functor_desc_label_layout_no_vars_0
  },
  {
    &ll_backend__layout__ll_backend__layout__notag_functor_desc_label_layout_no_vars_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_no_vars_0
};

#line 2345 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_layout_short_vars_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_basic_label_layout_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_label_short_var_info_0
};

#line 2351 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_label_layout_short_vars_0_0 = {
  (MR_String) "label_layout_short_vars",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__layout__ll_backend__layout__field_types_label_layout_short_vars_0_0,
  NULL,
  NULL,
  NULL
};

#line 2366 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_layout_short_vars_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_layout_short_vars_0_0
};

#line 2371 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_layout_short_vars_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_label_layout_short_vars_0_0
  }
};

#line 2380 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_layout_short_vars_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_layout_short_vars_0_0
};

#line 2385 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_short_vars_0[1] = {
  (MR_Integer) 0
};

#line 2390 "ll_backend.layout.c"
const MR_TypeCtorInfo_Struct ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_short_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__layout____Unify____label_layout_short_vars_0_0_10001)),
  ((MR_Box) (ll_backend__layout____Compare____label_layout_short_vars_0_0_10001)),
  (MR_String) "ll_backend.layout",
  (MR_String) "label_layout_short_vars",
  {
    ll_backend__layout__ll_backend__layout__du_name_ordered_label_layout_short_vars_0
  },
  {
    ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_layout_short_vars_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_short_vars_0
};

#line 2411 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_long_var_info_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2421 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_label_long_var_info_0_0[6] = {
  (MR_String) "llvi_encoded_var_count",
  (MR_String) "llvi_type_params",
  (MR_String) "llvi_ptis",
  (MR_String) "llvi_hlds_var_nums",
  (MR_String) "llvi_short_locns",
  (MR_String) "llvi_long_locns"
};

#line 2431 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_label_long_var_info_0_0 = {
  (MR_String) "label_long_var_info",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__layout__ll_backend__layout__field_types_label_long_var_info_0_0,
  ll_backend__layout__ll_backend__layout__field_names_label_long_var_info_0_0,
  NULL,
  NULL
};

#line 2446 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_long_var_info_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_long_var_info_0_0
};

#line 2451 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_long_var_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_label_long_var_info_0_0
  }
};

#line 2460 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_long_var_info_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_long_var_info_0_0
};

#line 2465 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_long_var_info_0[1] = {
  (MR_Integer) 0
};

#line 2470 "ll_backend.layout.c"
const MR_TypeCtorInfo_Struct ll_backend__layout__ll_backend__layout__type_ctor_info_label_long_var_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__layout____Unify____label_long_var_info_0_0_10001)),
  ((MR_Box) (ll_backend__layout____Compare____label_long_var_info_0_0_10001)),
  (MR_String) "ll_backend.layout",
  (MR_String) "label_long_var_info",
  {
    ll_backend__layout__ll_backend__layout__du_name_ordered_label_long_var_info_0
  },
  {
    ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_long_var_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__layout__ll_backend__layout__functor_number_map_label_long_var_info_0
};

#line 2491 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_short_var_info_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2500 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_label_short_var_info_0_0[5] = {
  (MR_String) "lsvi_encoded_var_count",
  (MR_String) "lsvi_type_params",
  (MR_String) "lsvi_ptis",
  (MR_String) "lsvi_hlds_var_nums",
  (MR_String) "lsvi_short_locns"
};

#line 2509 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_label_short_var_info_0_0 = {
  (MR_String) "label_short_var_info",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__layout__ll_backend__layout__field_types_label_short_var_info_0_0,
  ll_backend__layout__ll_backend__layout__field_names_label_short_var_info_0_0,
  NULL,
  NULL
};

#line 2524 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_short_var_info_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_short_var_info_0_0
};

#line 2529 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_short_var_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_label_short_var_info_0_0
  }
};

#line 2538 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_short_var_info_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_short_var_info_0_0
};

#line 2543 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_short_var_info_0[1] = {
  (MR_Integer) 0
};

#line 2548 "ll_backend.layout.c"
const MR_TypeCtorInfo_Struct ll_backend__layout__ll_backend__layout__type_ctor_info_label_short_var_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__layout____Unify____label_short_var_info_0_0_10001)),
  ((MR_Box) (ll_backend__layout____Compare____label_short_var_info_0_0_10001)),
  (MR_String) "ll_backend.layout",
  (MR_String) "label_short_var_info",
  {
    ll_backend__layout__ll_backend__layout__du_name_ordered_label_short_var_info_0
  },
  {
    ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_short_var_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__layout__ll_backend__layout__functor_number_map_label_short_var_info_0
};

#line 2569 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_0 = {
  (MR_String) "label_has_no_var_info",
  (MR_Integer) 0
};

#line 2575 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_1 = {
  (MR_String) "label_has_short_var_info",
  (MR_Integer) 1
};

#line 2581 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_2 = {
  (MR_String) "label_has_long_var_info",
  (MR_Integer) 2
};

#line 2587 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_value_ordered_label_vars_0[3] = {
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_0,
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_1,
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_2
};

#line 2594 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_name_ordered_label_vars_0[3] = {
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_2,
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_0,
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_1
};

#line 2601 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_vars_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2608 "ll_backend.layout.c"
const MR_TypeCtorInfo_Struct ll_backend__layout__ll_backend__layout__type_ctor_info_label_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__layout____Unify____label_vars_0_0_10001)),
  ((MR_Box) (ll_backend__layout____Compare____label_vars_0_0_10001)),
  (MR_String) "ll_backend.layout",
  (MR_String) "label_vars",
  {
    ll_backend__layout__ll_backend__layout__enum_name_ordered_label_vars_0
  },
  {
    ll_backend__layout__ll_backend__layout__enum_value_ordered_label_vars_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  ll_backend__layout__ll_backend__layout__functor_number_map_label_vars_0
};

#line 2629 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_0 = {
  (MR_String) "pseudo_type_info_array",
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

#line 2644 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_1 = {
  (MR_String) "hlds_var_nums_array",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2659 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_2 = {
  (MR_String) "short_locns_array",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2674 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_3 = {
  (MR_String) "long_locns_array",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2689 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_4 = {
  (MR_String) "user_event_layout_array",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2704 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_5 = {
  (MR_String) "user_event_var_nums_array",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2719 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_array_name_0_6[1] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_label_vars_0
};

#line 2724 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_6 = {
  (MR_String) "label_layout_array",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 6,
  ll_backend__layout__ll_backend__layout__field_types_layout_array_name_0_6,
  NULL,
  NULL,
  NULL
};

#line 2739 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_7 = {
  (MR_String) "proc_static_call_sites_array",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 7,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2754 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_8 = {
  (MR_String) "proc_static_cp_static_array",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 8,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2769 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_9 = {
  (MR_String) "proc_static_cp_dynamic_array",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 9,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2784 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_10 = {
  (MR_String) "proc_static_array",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 9,
  (MR_Integer) 10,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2799 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_11 = {
  (MR_String) "proc_head_var_nums_array",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 10,
  (MR_Integer) 11,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2814 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_12 = {
  (MR_String) "proc_var_names_array",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 11,
  (MR_Integer) 12,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2829 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_13 = {
  (MR_String) "proc_body_bytecodes_array",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 12,
  (MR_Integer) 13,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2844 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_14 = {
  (MR_String) "proc_table_io_entry_array",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 13,
  (MR_Integer) 14,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2859 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_15 = {
  (MR_String) "proc_event_layouts_array",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 14,
  (MR_Integer) 15,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2874 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_16 = {
  (MR_String) "proc_exec_trace_array",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 16,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2889 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_17 = {
  (MR_String) "threadscope_string_table_array",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 17,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2904 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_18 = {
  (MR_String) "alloc_site_array",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 18,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2919 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_array_name_0_0[18] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_0,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_1,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_2,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_3,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_4,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_5,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_7,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_8,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_9,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_10,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_11,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_12,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_13,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_14,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_15,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_16,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_17,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_18
};

#line 2941 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_array_name_0_1[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_6
};

#line 2946 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_layout_array_name_0[2] = {
  {
    (MR_Integer) 18,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_array_name_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_array_name_0_1
  }
};

#line 2960 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_layout_array_name_0[19] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_18,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_1,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_6,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_3,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_13,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_15,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_16,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_11,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_10,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_7,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_9,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_8,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_14,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_12,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_0,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_2,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_17,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_4,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_5
};

#line 2983 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_layout_array_name_0[19] = {
  (MR_Integer) 14,
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 3,
  (MR_Integer) 17,
  (MR_Integer) 18,
  (MR_Integer) 2,
  (MR_Integer) 9,
  (MR_Integer) 11,
  (MR_Integer) 10,
  (MR_Integer) 8,
  (MR_Integer) 7,
  (MR_Integer) 13,
  (MR_Integer) 4,
  (MR_Integer) 12,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 16,
  (MR_Integer) 0
};

#line 3006 "ll_backend.layout.c"
const MR_TypeCtorInfo_Struct ll_backend__layout__ll_backend__layout__type_ctor_info_layout_array_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__layout____Unify____layout_array_name_0_0_10001)),
  ((MR_Box) (ll_backend__layout____Compare____layout_array_name_0_0_10001)),
  (MR_String) "ll_backend.layout",
  (MR_String) "layout_array_name",
  {
    ll_backend__layout__ll_backend__layout__du_name_ordered_layout_array_name_0
  },
  {
    ll_backend__layout__ll_backend__layout__du_ptag_ordered_layout_array_name_0
  },
  (MR_Integer) 19,
  (MR_Integer) 4,
  ll_backend__layout__ll_backend__layout__functor_number_map_layout_array_name_0
};

#line 3027 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_kind_0
};

#line 3033 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_0 = {
  (MR_String) "proc_layout",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__layout__ll_backend__layout__field_types_layout_name_0_0,
  NULL,
  NULL,
  NULL
};

#line 3048 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_1[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0
};

#line 3055 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_1 = {
  (MR_String) "closure_proc_id",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ll_backend__layout__ll_backend__layout__field_types_layout_name_0_1,
  NULL,
  NULL,
  NULL
};

#line 3070 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_2[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3076 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_2 = {
  (MR_String) "file_layout",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  ll_backend__layout__ll_backend__layout__field_types_layout_name_0_2,
  NULL,
  NULL,
  NULL
};

#line 3091 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_3[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3097 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_3 = {
  (MR_String) "file_layout_line_number_vector",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  ll_backend__layout__ll_backend__layout__field_types_layout_name_0_3,
  NULL,
  NULL,
  NULL
};

#line 3112 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_4[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3118 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_4 = {
  (MR_String) "file_layout_label_layout_vector",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__layout__ll_backend__layout__field_types_layout_name_0_4,
  NULL,
  NULL,
  NULL
};

#line 3133 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_5[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 3138 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_5 = {
  (MR_String) "module_layout_string_table",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  ll_backend__layout__ll_backend__layout__field_types_layout_name_0_5,
  NULL,
  NULL,
  NULL
};

#line 3153 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_6[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 3158 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_6 = {
  (MR_String) "module_layout_file_vector",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 6,
  ll_backend__layout__ll_backend__layout__field_types_layout_name_0_6,
  NULL,
  NULL,
  NULL
};

#line 3173 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_7[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 3178 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_7 = {
  (MR_String) "module_layout_proc_vector",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 7,
  ll_backend__layout__ll_backend__layout__field_types_layout_name_0_7,
  NULL,
  NULL,
  NULL
};

#line 3193 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_8[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3199 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_8 = {
  (MR_String) "module_layout_label_exec_count",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 8,
  ll_backend__layout__ll_backend__layout__field_types_layout_name_0_8,
  NULL,
  NULL,
  NULL
};

#line 3214 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_9[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 3219 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_9 = {
  (MR_String) "module_layout_event_set_desc",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 9,
  ll_backend__layout__ll_backend__layout__field_types_layout_name_0_9,
  NULL,
  NULL,
  NULL
};

#line 3234 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_10[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3240 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_10 = {
  (MR_String) "module_layout_event_arg_names",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 10,
  ll_backend__layout__ll_backend__layout__field_types_layout_name_0_10,
  NULL,
  NULL,
  NULL
};

#line 3255 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_11[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3261 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_11 = {
  (MR_String) "module_layout_event_synth_attrs",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 8,
  (MR_Integer) 11,
  ll_backend__layout__ll_backend__layout__field_types_layout_name_0_11,
  NULL,
  NULL,
  NULL
};

#line 3276 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_12[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3283 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_12 = {
  (MR_String) "module_layout_event_synth_attr_args",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 9,
  (MR_Integer) 12,
  ll_backend__layout__ll_backend__layout__field_types_layout_name_0_12,
  NULL,
  NULL,
  NULL
};

#line 3298 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_13[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3305 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_13 = {
  (MR_String) "module_layout_event_synth_attr_order",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 10,
  (MR_Integer) 13,
  ll_backend__layout__ll_backend__layout__field_types_layout_name_0_13,
  NULL,
  NULL,
  NULL
};

#line 3320 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_14[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3326 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_14 = {
  (MR_String) "module_layout_event_synth_order",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 11,
  (MR_Integer) 14,
  ll_backend__layout__ll_backend__layout__field_types_layout_name_0_14,
  NULL,
  NULL,
  NULL
};

#line 3341 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_15[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 3346 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_15 = {
  (MR_String) "module_layout_event_specs",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 12,
  (MR_Integer) 15,
  ll_backend__layout__ll_backend__layout__field_types_layout_name_0_15,
  NULL,
  NULL,
  NULL
};

#line 3361 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_16[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 3366 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_16 = {
  (MR_String) "module_layout_oisu_bytes",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 13,
  (MR_Integer) 16,
  ll_backend__layout__ll_backend__layout__field_types_layout_name_0_16,
  NULL,
  NULL,
  NULL
};

#line 3381 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_17[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 3386 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_17 = {
  (MR_String) "module_layout_type_table_bytes",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 14,
  (MR_Integer) 17,
  ll_backend__layout__ll_backend__layout__field_types_layout_name_0_17,
  NULL,
  NULL,
  NULL
};

#line 3401 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_18[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 3406 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_18 = {
  (MR_String) "module_layout",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 15,
  (MR_Integer) 18,
  ll_backend__layout__ll_backend__layout__field_types_layout_name_0_18,
  NULL,
  NULL,
  NULL
};

#line 3421 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_0
};

#line 3426 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_1[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_1
};

#line 3431 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_2[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_2
};

#line 3436 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_3[16] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_3,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_4,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_5,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_6,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_7,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_8,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_9,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_10,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_11,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_12,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_13,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_14,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_15,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_16,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_17,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_18
};

#line 3456 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_layout_name_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_2
  },
  {
    (MR_Integer) 16,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_3
  }
};

#line 3480 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_layout_name_0[19] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_1,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_2,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_4,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_3,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_18,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_10,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_9,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_15,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_12,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_13,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_11,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_14,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_6,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_8,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_16,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_7,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_5,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_17,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_0
};

#line 3503 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_layout_name_0[19] = {
  (MR_Integer) 18,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 16,
  (MR_Integer) 12,
  (MR_Integer) 15,
  (MR_Integer) 13,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 10,
  (MR_Integer) 8,
  (MR_Integer) 9,
  (MR_Integer) 11,
  (MR_Integer) 7,
  (MR_Integer) 14,
  (MR_Integer) 17,
  (MR_Integer) 4
};

#line 3526 "ll_backend.layout.c"
const MR_TypeCtorInfo_Struct ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__layout____Unify____layout_name_0_0_10001)),
  ((MR_Box) (ll_backend__layout____Compare____layout_name_0_0_10001)),
  (MR_String) "ll_backend.layout",
  (MR_String) "layout_name",
  {
    ll_backend__layout__ll_backend__layout__du_name_ordered_layout_name_0
  },
  {
    ll_backend__layout__ll_backend__layout__du_ptag_ordered_layout_name_0
  },
  (MR_Integer) 19,
  (MR_Integer) 4,
  ll_backend__layout__ll_backend__layout__functor_number_map_layout_name_0
};

#line 3547 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_slot_name_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_array_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3553 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_slot_name_0_0 = {
  (MR_String) "layout_slot",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__layout__ll_backend__layout__field_types_layout_slot_name_0_0,
  NULL,
  NULL,
  NULL
};

#line 3568 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_slot_name_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_slot_name_0_0
};

#line 3573 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_layout_slot_name_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_slot_name_0_0
  }
};

#line 3582 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_layout_slot_name_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_slot_name_0_0
};

#line 3587 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_layout_slot_name_0[1] = {
  (MR_Integer) 0
};

#line 3592 "ll_backend.layout.c"
const MR_TypeCtorInfo_Struct ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__layout____Unify____layout_slot_name_0_0_10001)),
  ((MR_Box) (ll_backend__layout____Compare____layout_slot_name_0_0_10001)),
  (MR_String) "ll_backend.layout",
  (MR_String) "layout_slot_name",
  {
    ll_backend__layout__ll_backend__layout__du_name_ordered_layout_slot_name_0
  },
  {
    ll_backend__layout__ll_backend__layout__du_ptag_ordered_layout_slot_name_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__layout__ll_backend__layout__functor_number_map_layout_slot_name_0
};

#line 3613 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_0 = {
  (MR_String) "no_proc_id_and_more",
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

#line 3628 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_maybe_proc_id_and_more_0_1[4] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0
};

#line 3636 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_maybe_proc_id_and_more_0_1[4] = {
  (MR_String) "maybe_proc_static",
  (MR_String) "maybe_exec_trace",
  (MR_String) "proc_body_bytes",
  (MR_String) "proc_module_layout"
};

#line 3644 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_1 = {
  (MR_String) "proc_id_and_more",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ll_backend__layout__ll_backend__layout__field_types_maybe_proc_id_and_more_0_1,
  ll_backend__layout__ll_backend__layout__field_names_maybe_proc_id_and_more_0_1,
  NULL,
  NULL
};

#line 3659 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_maybe_proc_id_and_more_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_0
};

#line 3664 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_maybe_proc_id_and_more_0_1[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_1
};

#line 3669 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_maybe_proc_id_and_more_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_maybe_proc_id_and_more_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_maybe_proc_id_and_more_0_1
  }
};

#line 3683 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_maybe_proc_id_and_more_0[2] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_0,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_1
};

#line 3689 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_maybe_proc_id_and_more_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3695 "ll_backend.layout.c"
const MR_TypeCtorInfo_Struct ll_backend__layout__ll_backend__layout__type_ctor_info_maybe_proc_id_and_more_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__layout____Unify____maybe_proc_id_and_more_0_0_10001)),
  ((MR_Box) (ll_backend__layout____Compare____maybe_proc_id_and_more_0_0_10001)),
  (MR_String) "ll_backend.layout",
  (MR_String) "maybe_proc_id_and_more",
  {
    ll_backend__layout__ll_backend__layout__du_name_ordered_maybe_proc_id_and_more_0
  },
  {
    ll_backend__layout__ll_backend__layout__du_ptag_ordered_maybe_proc_id_and_more_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__layout__ll_backend__layout__functor_number_map_maybe_proc_id_and_more_0
};

#line 3716 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_module_layout_deep_prof_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_module_layout_deep_prof_0
  }
};

#line 3724 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_module_layout_debug_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_module_layout_debug_0
  }
};

#line 3732 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_module_layout_data_0_0[5] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_string_with_0s_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_module_layout_deep_prof_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_module_layout_debug_0
};

#line 3741 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_module_layout_data_0_0[5] = {
  (MR_String) "mld_module_name",
  (MR_String) "mld_string_table_size",
  (MR_String) "mld_string_table",
  (MR_String) "mld_maybe_deep_prof",
  (MR_String) "mld_maybe_debug"
};

#line 3750 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_data_0_0 = {
  (MR_String) "module_layout_data",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__layout__ll_backend__layout__field_types_module_layout_data_0_0,
  ll_backend__layout__ll_backend__layout__field_names_module_layout_data_0_0,
  NULL,
  NULL
};

#line 3765 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_data_0_0
};

#line 3770 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_data_0_0
  }
};

#line 3779 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_data_0_0
};

#line 3784 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_data_0[1] = {
  (MR_Integer) 0
};

#line 3789 "ll_backend.layout.c"
const MR_TypeCtorInfo_Struct ll_backend__layout__ll_backend__layout__type_ctor_info_module_layout_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__layout____Unify____module_layout_data_0_0_10001)),
  ((MR_Box) (ll_backend__layout____Compare____module_layout_data_0_0_10001)),
  (MR_String) "ll_backend.layout",
  (MR_String) "module_layout_data",
  {
    ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_data_0
  },
  {
    ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_data_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_data_0
};

#line 3810 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1ll_backend__layout__type_ctor_info_layout_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0
  }
};

#line 3818 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1ll_backend__layout__type_ctor_info_file_layout_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_file_layout_data_0
  }
};

#line 3826 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_event_set_layout_data_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_event_set_layout_data_0
  }
};

#line 3834 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_module_layout_debug_0_0[6] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__list__ti_list_1ll_backend__layout__type_ctor_info_layout_name_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__list__ti_list_1ll_backend__layout__type_ctor_info_file_layout_data_0,
  (MR_PseudoTypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_level_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_event_set_layout_data_0
};

#line 3844 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_module_layout_debug_0_0[6] = {
  (MR_String) "mld_proc_layout_names",
  (MR_String) "mld_file_layouts",
  (MR_String) "mld_trace_level",
  (MR_String) "mld_suppressed_events",
  (MR_String) "mld_num_label_exec_count",
  (MR_String) "mld_maybe_event_specs"
};

#line 3854 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_debug_0_0 = {
  (MR_String) "module_layout_debug",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__layout__ll_backend__layout__field_types_module_layout_debug_0_0,
  ll_backend__layout__ll_backend__layout__field_names_module_layout_debug_0_0,
  NULL,
  NULL
};

#line 3869 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_debug_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_debug_0_0
};

#line 3874 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_debug_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_debug_0_0
  }
};

#line 3883 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_debug_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_debug_0_0
};

#line 3888 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_debug_0[1] = {
  (MR_Integer) 0
};

#line 3893 "ll_backend.layout.c"
const MR_TypeCtorInfo_Struct ll_backend__layout__ll_backend__layout__type_ctor_info_module_layout_debug_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__layout____Unify____module_layout_debug_0_0_10001)),
  ((MR_Box) (ll_backend__layout____Compare____module_layout_debug_0_0_10001)),
  (MR_String) "ll_backend.layout",
  (MR_String) "module_layout_debug",
  {
    ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_debug_0
  },
  {
    ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_debug_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_debug_0
};

#line 3914 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 3922 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_module_layout_deep_prof_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 3930 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_module_layout_deep_prof_0_0[4] = {
  (MR_String) "mldp_num_oisu_types",
  (MR_String) "mldp_oisu_bytes",
  (MR_String) "mldp_num_table_types",
  (MR_String) "mldp_type_table_bytes"
};

#line 3938 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_deep_prof_0_0 = {
  (MR_String) "module_layout_deep_prof",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__layout__ll_backend__layout__field_types_module_layout_deep_prof_0_0,
  ll_backend__layout__ll_backend__layout__field_names_module_layout_deep_prof_0_0,
  NULL,
  NULL
};

#line 3953 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_deep_prof_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_deep_prof_0_0
};

#line 3958 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_deep_prof_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_deep_prof_0_0
  }
};

#line 3967 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_deep_prof_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_deep_prof_0_0
};

#line 3972 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_deep_prof_0[1] = {
  (MR_Integer) 0
};

#line 3977 "ll_backend.layout.c"
const MR_TypeCtorInfo_Struct ll_backend__layout__ll_backend__layout__type_ctor_info_module_layout_deep_prof_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__layout____Unify____module_layout_deep_prof_0_0_10001)),
  ((MR_Box) (ll_backend__layout____Compare____module_layout_deep_prof_0_0_10001)),
  (MR_String) "ll_backend.layout",
  (MR_String) "module_layout_deep_prof",
  {
    ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_deep_prof_0
  },
  {
    ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_deep_prof_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_deep_prof_0
};

#line 3998 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_data_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_stack_traversal_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_maybe_proc_id_and_more_0
};

#line 4005 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_data_0_0[3] = {
  (MR_String) "proc_layout_label",
  (MR_String) "proc_layout_trav",
  (MR_String) "proc_layout_more"
};

#line 4012 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_data_0_0 = {
  (MR_String) "proc_layout_data",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__layout__ll_backend__layout__field_types_proc_layout_data_0_0,
  ll_backend__layout__ll_backend__layout__field_names_proc_layout_data_0_0,
  NULL,
  NULL
};

#line 4027 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_data_0_0
};

#line 4032 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_data_0_0
  }
};

#line 4041 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_data_0_0
};

#line 4046 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_data_0[1] = {
  (MR_Integer) 0
};

#line 4051 "ll_backend.layout.c"
const MR_TypeCtorInfo_Struct ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__layout____Unify____proc_layout_data_0_0_10001)),
  ((MR_Box) (ll_backend__layout____Compare____proc_layout_data_0_0_10001)),
  (MR_String) "ll_backend.layout",
  (MR_String) "proc_layout_data",
  {
    ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_data_0
  },
  {
    ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_data_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_data_0
};

#line 4072 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_data_or_slot_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_data_or_slot_id_0
  }
};

#line 4080 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_exec_trace_0_0[19] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_data_or_slot_id_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_eval_method_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_level_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 4103 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_exec_trace_0_0[19] = {
  (MR_String) "plet_maybe_call_label_slot",
  (MR_String) "plet_proc_event_layouts",
  (MR_String) "plet_num_proc_event_layouts",
  (MR_String) "plet_maybe_table_info",
  (MR_String) "plet_head_var_nums",
  (MR_String) "plet_num_head_var_nums",
  (MR_String) "plet_var_names",
  (MR_String) "plet_max_var_num",
  (MR_String) "plet_max_reg_r_num",
  (MR_String) "plet_max_reg_f_num",
  (MR_String) "plet_maybe_from_full_slot",
  (MR_String) "plet_maybe_io_seq_slot",
  (MR_String) "plet_maybe_trail_slot",
  (MR_String) "plet_maybe_maxfr_slot",
  (MR_String) "plet_eval_method",
  (MR_String) "plet_maybe_call_table_slot",
  (MR_String) "plet_maybe_tail_rec_slot",
  (MR_String) "plet_eff_trace_level",
  (MR_String) "plet_exec_trace_flags"
};

#line 4126 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_exec_trace_0_0 = {
  (MR_String) "proc_layout_exec_trace",
  (MR_Integer) 19,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__layout__ll_backend__layout__field_types_proc_layout_exec_trace_0_0,
  ll_backend__layout__ll_backend__layout__field_names_proc_layout_exec_trace_0_0,
  NULL,
  NULL
};

#line 4141 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_exec_trace_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_exec_trace_0_0
};

#line 4146 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_exec_trace_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_exec_trace_0_0
  }
};

#line 4155 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_exec_trace_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_exec_trace_0_0
};

#line 4160 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_exec_trace_0[1] = {
  (MR_Integer) 0
};

#line 4165 "ll_backend.layout.c"
const MR_TypeCtorInfo_Struct ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_exec_trace_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__layout____Unify____proc_layout_exec_trace_0_0_10001)),
  ((MR_Box) (ll_backend__layout____Compare____proc_layout_exec_trace_0_0_10001)),
  (MR_String) "ll_backend.layout",
  (MR_String) "proc_layout_exec_trace",
  {
    ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_exec_trace_0
  },
  {
    ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_exec_trace_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_exec_trace_0
};

#line 4186 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_kind_0_0 = {
  (MR_String) "proc_layout_traversal",
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

#line 4201 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_kind_0_1[1] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_user_or_uci_0
};

#line 4206 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_kind_0_1 = {
  (MR_String) "proc_layout_proc_id",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ll_backend__layout__ll_backend__layout__field_types_proc_layout_kind_0_1,
  NULL,
  NULL,
  NULL
};

#line 4221 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_kind_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_kind_0_0
};

#line 4226 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_kind_0_1[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_kind_0_1
};

#line 4231 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_kind_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_kind_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_kind_0_1
  }
};

#line 4245 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_kind_0[2] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_kind_0_1,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_kind_0_0
};

#line 4251 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 4257 "ll_backend.layout.c"
const MR_TypeCtorInfo_Struct ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__layout____Unify____proc_layout_kind_0_0_10001)),
  ((MR_Box) (ll_backend__layout____Compare____proc_layout_kind_0_0_10001)),
  (MR_String) "ll_backend.layout",
  (MR_String) "proc_layout_kind",
  {
    ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_kind_0
  },
  {
    ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_kind_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_kind_0
};

#line 4278 "ll_backend.layout.c"
static const MR_VA_TypeInfo_Struct2 ll_backend__layout____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 4288 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

#line 4296 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_proc_static_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_deep_excp_slots_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
};

#line 4306 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_proc_static_0_0[6] = {
  (MR_String) "plps_file_name",
  (MR_String) "plps_line_number",
  (MR_String) "plps_is_in_interface",
  (MR_String) "plps_excp_slots",
  (MR_String) "plps_call_site_statics",
  (MR_String) "plps_coverage_points"
};

#line 4316 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_proc_static_0_0 = {
  (MR_String) "proc_layout_proc_static",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__layout__ll_backend__layout__field_types_proc_layout_proc_static_0_0,
  ll_backend__layout__ll_backend__layout__field_names_proc_layout_proc_static_0_0,
  NULL,
  NULL
};

#line 4331 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_proc_static_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_proc_static_0_0
};

#line 4336 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_proc_static_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_proc_static_0_0
  }
};

#line 4345 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_proc_static_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_proc_static_0_0
};

#line 4350 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_proc_static_0[1] = {
  (MR_Integer) 0
};

#line 4355 "ll_backend.layout.c"
const MR_TypeCtorInfo_Struct ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_proc_static_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__layout____Unify____proc_layout_proc_static_0_0_10001)),
  ((MR_Box) (ll_backend__layout____Compare____proc_layout_proc_static_0_0_10001)),
  (MR_String) "ll_backend.layout",
  (MR_String) "proc_layout_proc_static",
  {
    ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_proc_static_0
  },
  {
    ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_proc_static_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_proc_static_0
};

#line 4376 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 4384 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_stack_traversal_0_0[4] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0
};

#line 4392 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_stack_traversal_0_0[4] = {
  (MR_String) "plst_entry_label",
  (MR_String) "plst_succip_slot",
  (MR_String) "plst_stack_slot_count",
  (MR_String) "plst_detism"
};

#line 4400 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_stack_traversal_0_0 = {
  (MR_String) "proc_layout_stack_traversal",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__layout__ll_backend__layout__field_types_proc_layout_stack_traversal_0_0,
  ll_backend__layout__ll_backend__layout__field_names_proc_layout_stack_traversal_0_0,
  NULL,
  NULL
};

#line 4415 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_stack_traversal_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_stack_traversal_0_0
};

#line 4420 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_stack_traversal_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_stack_traversal_0_0
  }
};

#line 4429 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_stack_traversal_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_stack_traversal_0_0
};

#line 4434 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_stack_traversal_0[1] = {
  (MR_Integer) 0
};

#line 4439 "ll_backend.layout.c"
const MR_TypeCtorInfo_Struct ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_stack_traversal_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__layout____Unify____proc_layout_stack_traversal_0_0_10001)),
  ((MR_Box) (ll_backend__layout____Compare____proc_layout_stack_traversal_0_0_10001)),
  (MR_String) "ll_backend.layout",
  (MR_String) "proc_layout_stack_traversal",
  {
    ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_stack_traversal_0
  },
  {
    ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_stack_traversal_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_stack_traversal_0
};

#line 4460 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_0 = {
  (MR_String) "user",
  (MR_Integer) 0
};

#line 4466 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_1 = {
  (MR_String) "uci",
  (MR_Integer) 1
};

#line 4472 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_value_ordered_proc_layout_user_or_uci_0[2] = {
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_0,
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_1
};

#line 4478 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_name_ordered_proc_layout_user_or_uci_0[2] = {
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_1,
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_0
};

#line 4484 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_user_or_uci_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 4490 "ll_backend.layout.c"
const MR_TypeCtorInfo_Struct ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_user_or_uci_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__layout____Unify____proc_layout_user_or_uci_0_0_10001)),
  ((MR_Box) (ll_backend__layout____Compare____proc_layout_user_or_uci_0_0_10001)),
  (MR_String) "ll_backend.layout",
  (MR_String) "proc_layout_user_or_uci",
  {
    ll_backend__layout__ll_backend__layout__enum_name_ordered_proc_layout_user_or_uci_0
  },
  {
    ll_backend__layout__ll_backend__layout__enum_value_ordered_proc_layout_user_or_uci_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_user_or_uci_0
};

#line 4511 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_string_with_0s_0[1] = {
  (MR_Integer) 0
};

#line 4516 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4524 "ll_backend.layout.c"
static const MR_NotagFunctorDesc ll_backend__layout__ll_backend__layout__notag_functor_desc_string_with_0s_0 = {
  (MR_String) "string_with_0s",
  (MR_PseudoTypeInfo) &ll_backend__layout__list__ti_list_1builtin__type_ctor_info_string_0,
  NULL
};

#line 4531 "ll_backend.layout.c"
const MR_TypeCtorInfo_Struct ll_backend__layout__ll_backend__layout__type_ctor_info_string_with_0s_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (ll_backend__layout____Unify____string_with_0s_0_0_10001)),
  ((MR_Box) (ll_backend__layout____Compare____string_with_0s_0_0_10001)),
  (MR_String) "ll_backend.layout",
  (MR_String) "string_with_0s",
  {
    &ll_backend__layout__ll_backend__layout__notag_functor_desc_string_with_0s_0
  },
  {
    &ll_backend__layout__ll_backend__layout__notag_functor_desc_string_with_0s_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__layout__ll_backend__layout__functor_number_map_string_with_0s_0
};

#line 4552 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_table_io_args_data_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0
};

#line 4559 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_table_io_args_data_0_0[3] = {
  (MR_String) "tia_answerblock_arity",
  (MR_String) "tia_ptis",
  (MR_String) "tia_type_params"
};

#line 4566 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_table_io_args_data_0_0 = {
  (MR_String) "table_io_args_data",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__layout__ll_backend__layout__field_types_table_io_args_data_0_0,
  ll_backend__layout__ll_backend__layout__field_names_table_io_args_data_0_0,
  NULL,
  NULL
};

#line 4581 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_table_io_args_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_table_io_args_data_0_0
};

#line 4586 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_table_io_args_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_table_io_args_data_0_0
  }
};

#line 4595 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_table_io_args_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_table_io_args_data_0_0
};

#line 4600 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_table_io_args_data_0[1] = {
  (MR_Integer) 0
};

#line 4605 "ll_backend.layout.c"
const MR_TypeCtorInfo_Struct ll_backend__layout__ll_backend__layout__type_ctor_info_table_io_args_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__layout____Unify____table_io_args_data_0_0_10001)),
  ((MR_Box) (ll_backend__layout____Compare____table_io_args_data_0_0_10001)),
  (MR_String) "ll_backend.layout",
  (MR_String) "table_io_args_data",
  {
    ll_backend__layout__ll_backend__layout__du_name_ordered_table_io_args_data_0
  },
  {
    ll_backend__layout__ll_backend__layout__du_ptag_ordered_table_io_args_data_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__layout__ll_backend__layout__functor_number_map_table_io_args_data_0
};

#line 4626 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_table_io_args_data_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_table_io_args_data_0
  }
};

#line 4634 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_table_io_entry_data_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_table_io_args_data_0
};

#line 4640 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_table_io_entry_data_0_0[2] = {
  (MR_String) "tie_proc_ptr",
  (MR_String) "tie_maybe_args"
};

#line 4646 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_table_io_entry_data_0_0 = {
  (MR_String) "table_io_entry_data",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__layout__ll_backend__layout__field_types_table_io_entry_data_0_0,
  ll_backend__layout__ll_backend__layout__field_names_table_io_entry_data_0_0,
  NULL,
  NULL
};

#line 4661 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_table_io_entry_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_table_io_entry_data_0_0
};

#line 4666 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_table_io_entry_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_table_io_entry_data_0_0
  }
};

#line 4675 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_table_io_entry_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_table_io_entry_data_0_0
};

#line 4680 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_table_io_entry_data_0[1] = {
  (MR_Integer) 0
};

#line 4685 "ll_backend.layout.c"
const MR_TypeCtorInfo_Struct ll_backend__layout__ll_backend__layout__type_ctor_info_table_io_entry_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__layout____Unify____table_io_entry_data_0_0_10001)),
  ((MR_Box) (ll_backend__layout____Compare____table_io_entry_data_0_0_10001)),
  (MR_String) "ll_backend.layout",
  (MR_String) "table_io_entry_data",
  {
    ll_backend__layout__ll_backend__layout__du_name_ordered_table_io_entry_data_0
  },
  {
    ll_backend__layout__ll_backend__layout__du_ptag_ordered_table_io_entry_data_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__layout__ll_backend__layout__functor_number_map_table_io_entry_data_0
};

#line 4706 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_user_event_data_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
};

#line 4713 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_user_event_data_0_0[3] = {
  (MR_String) "user_event_number",
  (MR_String) "user_event_locns",
  (MR_String) "user_event_var_nums"
};

#line 4720 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_user_event_data_0_0 = {
  (MR_String) "user_event_data",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__layout__ll_backend__layout__field_types_user_event_data_0_0,
  ll_backend__layout__ll_backend__layout__field_names_user_event_data_0_0,
  NULL,
  NULL
};

#line 4735 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_user_event_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_user_event_data_0_0
};

#line 4740 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_user_event_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_user_event_data_0_0
  }
};

#line 4749 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_user_event_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_user_event_data_0_0
};

#line 4754 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_user_event_data_0[1] = {
  (MR_Integer) 0
};

#line 4759 "ll_backend.layout.c"
const MR_TypeCtorInfo_Struct ll_backend__layout__ll_backend__layout__type_ctor_info_user_event_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__layout____Unify____user_event_data_0_0_10001)),
  ((MR_Box) (ll_backend__layout____Compare____user_event_data_0_0_10001)),
  (MR_String) "ll_backend.layout",
  (MR_String) "user_event_data",
  {
    ll_backend__layout__ll_backend__layout__du_name_ordered_user_event_data_0
  },
  {
    ll_backend__layout__ll_backend__layout__du_ptag_ordered_user_event_data_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__layout__ll_backend__layout__functor_number_map_user_event_data_0
};

#line 4780 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____alloc_site_info_0_0_10001(
#line 4783 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 4785 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 4787 "ll_backend.layout.c"
{
#line 4789 "ll_backend.layout.c"
  {
#line 4791 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 4794 "ll_backend.layout.c"
    {
#line 4796 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____alloc_site_info_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 4799 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 4801 "ll_backend.layout.c"
  }
#line 4803 "ll_backend.layout.c"
}

#line 4806 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____alloc_site_info_0_0_10001(
#line 4809 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 4811 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 4813 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 4815 "ll_backend.layout.c"
{
#line 4817 "ll_backend.layout.c"
  {
#line 4819 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 4822 "ll_backend.layout.c"
    {
#line 4824 "ll_backend.layout.c"
      ll_backend__layout____Compare____alloc_site_info_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 4827 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 4829 "ll_backend.layout.c"
  }
#line 4831 "ll_backend.layout.c"
}

#line 4834 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____basic_label_layout_0_0_10001(
#line 4837 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 4839 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 4841 "ll_backend.layout.c"
{
#line 4843 "ll_backend.layout.c"
  {
#line 4845 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 4848 "ll_backend.layout.c"
    {
#line 4850 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____basic_label_layout_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 4853 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 4855 "ll_backend.layout.c"
  }
#line 4857 "ll_backend.layout.c"
}

#line 4860 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____basic_label_layout_0_0_10001(
#line 4863 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 4865 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 4867 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 4869 "ll_backend.layout.c"
{
#line 4871 "ll_backend.layout.c"
  {
#line 4873 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 4876 "ll_backend.layout.c"
    {
#line 4878 "ll_backend.layout.c"
      ll_backend__layout____Compare____basic_label_layout_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 4881 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 4883 "ll_backend.layout.c"
  }
#line 4885 "ll_backend.layout.c"
}

#line 4888 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____closure_proc_id_data_0_0_10001(
#line 4891 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 4893 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 4895 "ll_backend.layout.c"
{
#line 4897 "ll_backend.layout.c"
  {
#line 4899 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 4902 "ll_backend.layout.c"
    {
#line 4904 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____closure_proc_id_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 4907 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 4909 "ll_backend.layout.c"
  }
#line 4911 "ll_backend.layout.c"
}

#line 4914 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____closure_proc_id_data_0_0_10001(
#line 4917 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 4919 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 4921 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 4923 "ll_backend.layout.c"
{
#line 4925 "ll_backend.layout.c"
  {
#line 4927 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 4930 "ll_backend.layout.c"
    {
#line 4932 "ll_backend.layout.c"
      ll_backend__layout____Compare____closure_proc_id_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 4935 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 4937 "ll_backend.layout.c"
  }
#line 4939 "ll_backend.layout.c"
}

#line 4942 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____data_or_slot_id_0_0_10001(
#line 4945 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 4947 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 4949 "ll_backend.layout.c"
{
#line 4951 "ll_backend.layout.c"
  {
#line 4953 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 4956 "ll_backend.layout.c"
    {
#line 4958 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____data_or_slot_id_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 4961 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 4963 "ll_backend.layout.c"
  }
#line 4965 "ll_backend.layout.c"
}

#line 4968 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____data_or_slot_id_0_0_10001(
#line 4971 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 4973 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 4975 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 4977 "ll_backend.layout.c"
{
#line 4979 "ll_backend.layout.c"
  {
#line 4981 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 4984 "ll_backend.layout.c"
    {
#line 4986 "ll_backend.layout.c"
      ll_backend__layout____Compare____data_or_slot_id_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 4989 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 4991 "ll_backend.layout.c"
  }
#line 4993 "ll_backend.layout.c"
}

#line 4996 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____deep_excp_slots_0_0_10001(
#line 4999 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5001 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5003 "ll_backend.layout.c"
{
#line 5005 "ll_backend.layout.c"
  {
#line 5007 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5010 "ll_backend.layout.c"
    {
#line 5012 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____deep_excp_slots_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5015 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5017 "ll_backend.layout.c"
  }
#line 5019 "ll_backend.layout.c"
}

#line 5022 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____deep_excp_slots_0_0_10001(
#line 5025 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5027 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5029 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5031 "ll_backend.layout.c"
{
#line 5033 "ll_backend.layout.c"
  {
#line 5035 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5038 "ll_backend.layout.c"
    {
#line 5040 "ll_backend.layout.c"
      ll_backend__layout____Compare____deep_excp_slots_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5043 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5045 "ll_backend.layout.c"
  }
#line 5047 "ll_backend.layout.c"
}

#line 5050 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____event_set_layout_data_0_0_10001(
#line 5053 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5055 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5057 "ll_backend.layout.c"
{
#line 5059 "ll_backend.layout.c"
  {
#line 5061 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5064 "ll_backend.layout.c"
    {
#line 5066 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____event_set_layout_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5069 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5071 "ll_backend.layout.c"
  }
#line 5073 "ll_backend.layout.c"
}

#line 5076 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____event_set_layout_data_0_0_10001(
#line 5079 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5081 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5083 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5085 "ll_backend.layout.c"
{
#line 5087 "ll_backend.layout.c"
  {
#line 5089 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5092 "ll_backend.layout.c"
    {
#line 5094 "ll_backend.layout.c"
      ll_backend__layout____Compare____event_set_layout_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5097 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5099 "ll_backend.layout.c"
  }
#line 5101 "ll_backend.layout.c"
}

#line 5104 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____file_layout_data_0_0_10001(
#line 5107 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5109 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5111 "ll_backend.layout.c"
{
#line 5113 "ll_backend.layout.c"
  {
#line 5115 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5118 "ll_backend.layout.c"
    {
#line 5120 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____file_layout_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5123 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5125 "ll_backend.layout.c"
  }
#line 5127 "ll_backend.layout.c"
}

#line 5130 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____file_layout_data_0_0_10001(
#line 5133 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5135 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5137 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5139 "ll_backend.layout.c"
{
#line 5141 "ll_backend.layout.c"
  {
#line 5143 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5146 "ll_backend.layout.c"
    {
#line 5148 "ll_backend.layout.c"
      ll_backend__layout____Compare____file_layout_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5151 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5153 "ll_backend.layout.c"
  }
#line 5155 "ll_backend.layout.c"
}

#line 5158 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_long_vars_0_0_10001(
#line 5161 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5163 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5165 "ll_backend.layout.c"
{
#line 5167 "ll_backend.layout.c"
  {
#line 5169 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5172 "ll_backend.layout.c"
    {
#line 5174 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____label_layout_long_vars_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5177 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5179 "ll_backend.layout.c"
  }
#line 5181 "ll_backend.layout.c"
}

#line 5184 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_layout_long_vars_0_0_10001(
#line 5187 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5189 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5191 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5193 "ll_backend.layout.c"
{
#line 5195 "ll_backend.layout.c"
  {
#line 5197 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5200 "ll_backend.layout.c"
    {
#line 5202 "ll_backend.layout.c"
      ll_backend__layout____Compare____label_layout_long_vars_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5205 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5207 "ll_backend.layout.c"
  }
#line 5209 "ll_backend.layout.c"
}

#line 5212 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_no_vars_0_0_10001(
#line 5215 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5217 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5219 "ll_backend.layout.c"
{
#line 5221 "ll_backend.layout.c"
  {
#line 5223 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5226 "ll_backend.layout.c"
    {
#line 5228 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____label_layout_no_vars_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5231 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5233 "ll_backend.layout.c"
  }
#line 5235 "ll_backend.layout.c"
}

#line 5238 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_layout_no_vars_0_0_10001(
#line 5241 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5243 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5245 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5247 "ll_backend.layout.c"
{
#line 5249 "ll_backend.layout.c"
  {
#line 5251 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5254 "ll_backend.layout.c"
    {
#line 5256 "ll_backend.layout.c"
      ll_backend__layout____Compare____label_layout_no_vars_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5259 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5261 "ll_backend.layout.c"
  }
#line 5263 "ll_backend.layout.c"
}

#line 5266 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_short_vars_0_0_10001(
#line 5269 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5271 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5273 "ll_backend.layout.c"
{
#line 5275 "ll_backend.layout.c"
  {
#line 5277 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5280 "ll_backend.layout.c"
    {
#line 5282 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____label_layout_short_vars_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5285 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5287 "ll_backend.layout.c"
  }
#line 5289 "ll_backend.layout.c"
}

#line 5292 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_layout_short_vars_0_0_10001(
#line 5295 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5297 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5299 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5301 "ll_backend.layout.c"
{
#line 5303 "ll_backend.layout.c"
  {
#line 5305 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5308 "ll_backend.layout.c"
    {
#line 5310 "ll_backend.layout.c"
      ll_backend__layout____Compare____label_layout_short_vars_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5313 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5315 "ll_backend.layout.c"
  }
#line 5317 "ll_backend.layout.c"
}

#line 5320 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_long_var_info_0_0_10001(
#line 5323 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5325 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5327 "ll_backend.layout.c"
{
#line 5329 "ll_backend.layout.c"
  {
#line 5331 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5334 "ll_backend.layout.c"
    {
#line 5336 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____label_long_var_info_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5339 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5341 "ll_backend.layout.c"
  }
#line 5343 "ll_backend.layout.c"
}

#line 5346 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_long_var_info_0_0_10001(
#line 5349 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5351 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5353 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5355 "ll_backend.layout.c"
{
#line 5357 "ll_backend.layout.c"
  {
#line 5359 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5362 "ll_backend.layout.c"
    {
#line 5364 "ll_backend.layout.c"
      ll_backend__layout____Compare____label_long_var_info_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5367 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5369 "ll_backend.layout.c"
  }
#line 5371 "ll_backend.layout.c"
}

#line 5374 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_short_var_info_0_0_10001(
#line 5377 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5379 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5381 "ll_backend.layout.c"
{
#line 5383 "ll_backend.layout.c"
  {
#line 5385 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5388 "ll_backend.layout.c"
    {
#line 5390 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____label_short_var_info_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5393 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5395 "ll_backend.layout.c"
  }
#line 5397 "ll_backend.layout.c"
}

#line 5400 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_short_var_info_0_0_10001(
#line 5403 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5405 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5407 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5409 "ll_backend.layout.c"
{
#line 5411 "ll_backend.layout.c"
  {
#line 5413 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5416 "ll_backend.layout.c"
    {
#line 5418 "ll_backend.layout.c"
      ll_backend__layout____Compare____label_short_var_info_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5421 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5423 "ll_backend.layout.c"
  }
#line 5425 "ll_backend.layout.c"
}

#line 5428 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_vars_0_0_10001(
#line 5431 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5433 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5435 "ll_backend.layout.c"
{
#line 5437 "ll_backend.layout.c"
  {
#line 5439 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5442 "ll_backend.layout.c"
    {
#line 5444 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____label_vars_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5447 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5449 "ll_backend.layout.c"
  }
#line 5451 "ll_backend.layout.c"
}

#line 5454 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_vars_0_0_10001(
#line 5457 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5459 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5461 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5463 "ll_backend.layout.c"
{
#line 5465 "ll_backend.layout.c"
  {
#line 5467 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5470 "ll_backend.layout.c"
    {
#line 5472 "ll_backend.layout.c"
      ll_backend__layout____Compare____label_vars_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5475 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5477 "ll_backend.layout.c"
  }
#line 5479 "ll_backend.layout.c"
}

#line 5482 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____layout_array_name_0_0_10001(
#line 5485 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5487 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5489 "ll_backend.layout.c"
{
#line 5491 "ll_backend.layout.c"
  {
#line 5493 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5496 "ll_backend.layout.c"
    {
#line 5498 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_array_name_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5501 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5503 "ll_backend.layout.c"
  }
#line 5505 "ll_backend.layout.c"
}

#line 5508 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____layout_array_name_0_0_10001(
#line 5511 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5513 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5515 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5517 "ll_backend.layout.c"
{
#line 5519 "ll_backend.layout.c"
  {
#line 5521 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5524 "ll_backend.layout.c"
    {
#line 5526 "ll_backend.layout.c"
      ll_backend__layout____Compare____layout_array_name_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5529 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5531 "ll_backend.layout.c"
  }
#line 5533 "ll_backend.layout.c"
}

#line 5536 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____layout_name_0_0_10001(
#line 5539 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5541 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5543 "ll_backend.layout.c"
{
#line 5545 "ll_backend.layout.c"
  {
#line 5547 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5550 "ll_backend.layout.c"
    {
#line 5552 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_name_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5555 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5557 "ll_backend.layout.c"
  }
#line 5559 "ll_backend.layout.c"
}

#line 5562 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____layout_name_0_0_10001(
#line 5565 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5567 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5569 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5571 "ll_backend.layout.c"
{
#line 5573 "ll_backend.layout.c"
  {
#line 5575 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5578 "ll_backend.layout.c"
    {
#line 5580 "ll_backend.layout.c"
      ll_backend__layout____Compare____layout_name_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5583 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5585 "ll_backend.layout.c"
  }
#line 5587 "ll_backend.layout.c"
}

#line 5590 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____layout_slot_name_0_0_10001(
#line 5593 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5595 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5597 "ll_backend.layout.c"
{
#line 5599 "ll_backend.layout.c"
  {
#line 5601 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5604 "ll_backend.layout.c"
    {
#line 5606 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_slot_name_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5609 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5611 "ll_backend.layout.c"
  }
#line 5613 "ll_backend.layout.c"
}

#line 5616 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____layout_slot_name_0_0_10001(
#line 5619 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5621 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5623 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5625 "ll_backend.layout.c"
{
#line 5627 "ll_backend.layout.c"
  {
#line 5629 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5632 "ll_backend.layout.c"
    {
#line 5634 "ll_backend.layout.c"
      ll_backend__layout____Compare____layout_slot_name_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5637 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5639 "ll_backend.layout.c"
  }
#line 5641 "ll_backend.layout.c"
}

#line 5644 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____maybe_proc_id_and_more_0_0_10001(
#line 5647 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5649 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5651 "ll_backend.layout.c"
{
#line 5653 "ll_backend.layout.c"
  {
#line 5655 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5658 "ll_backend.layout.c"
    {
#line 5660 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____maybe_proc_id_and_more_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5663 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5665 "ll_backend.layout.c"
  }
#line 5667 "ll_backend.layout.c"
}

#line 5670 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____maybe_proc_id_and_more_0_0_10001(
#line 5673 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5675 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5677 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5679 "ll_backend.layout.c"
{
#line 5681 "ll_backend.layout.c"
  {
#line 5683 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5686 "ll_backend.layout.c"
    {
#line 5688 "ll_backend.layout.c"
      ll_backend__layout____Compare____maybe_proc_id_and_more_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5691 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5693 "ll_backend.layout.c"
  }
#line 5695 "ll_backend.layout.c"
}

#line 5698 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_data_0_0_10001(
#line 5701 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5703 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5705 "ll_backend.layout.c"
{
#line 5707 "ll_backend.layout.c"
  {
#line 5709 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5712 "ll_backend.layout.c"
    {
#line 5714 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____module_layout_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5717 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5719 "ll_backend.layout.c"
  }
#line 5721 "ll_backend.layout.c"
}

#line 5724 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____module_layout_data_0_0_10001(
#line 5727 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5729 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5731 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5733 "ll_backend.layout.c"
{
#line 5735 "ll_backend.layout.c"
  {
#line 5737 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5740 "ll_backend.layout.c"
    {
#line 5742 "ll_backend.layout.c"
      ll_backend__layout____Compare____module_layout_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5745 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5747 "ll_backend.layout.c"
  }
#line 5749 "ll_backend.layout.c"
}

#line 5752 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_debug_0_0_10001(
#line 5755 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5757 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5759 "ll_backend.layout.c"
{
#line 5761 "ll_backend.layout.c"
  {
#line 5763 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5766 "ll_backend.layout.c"
    {
#line 5768 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____module_layout_debug_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5771 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5773 "ll_backend.layout.c"
  }
#line 5775 "ll_backend.layout.c"
}

#line 5778 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____module_layout_debug_0_0_10001(
#line 5781 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5783 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5785 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5787 "ll_backend.layout.c"
{
#line 5789 "ll_backend.layout.c"
  {
#line 5791 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5794 "ll_backend.layout.c"
    {
#line 5796 "ll_backend.layout.c"
      ll_backend__layout____Compare____module_layout_debug_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5799 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5801 "ll_backend.layout.c"
  }
#line 5803 "ll_backend.layout.c"
}

#line 5806 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_deep_prof_0_0_10001(
#line 5809 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5811 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5813 "ll_backend.layout.c"
{
#line 5815 "ll_backend.layout.c"
  {
#line 5817 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5820 "ll_backend.layout.c"
    {
#line 5822 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____module_layout_deep_prof_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5825 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5827 "ll_backend.layout.c"
  }
#line 5829 "ll_backend.layout.c"
}

#line 5832 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____module_layout_deep_prof_0_0_10001(
#line 5835 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5837 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5839 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5841 "ll_backend.layout.c"
{
#line 5843 "ll_backend.layout.c"
  {
#line 5845 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5848 "ll_backend.layout.c"
    {
#line 5850 "ll_backend.layout.c"
      ll_backend__layout____Compare____module_layout_deep_prof_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5853 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5855 "ll_backend.layout.c"
  }
#line 5857 "ll_backend.layout.c"
}

#line 5860 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_data_0_0_10001(
#line 5863 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5865 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5867 "ll_backend.layout.c"
{
#line 5869 "ll_backend.layout.c"
  {
#line 5871 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5874 "ll_backend.layout.c"
    {
#line 5876 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5879 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5881 "ll_backend.layout.c"
  }
#line 5883 "ll_backend.layout.c"
}

#line 5886 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_data_0_0_10001(
#line 5889 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5891 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5893 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5895 "ll_backend.layout.c"
{
#line 5897 "ll_backend.layout.c"
  {
#line 5899 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5902 "ll_backend.layout.c"
    {
#line 5904 "ll_backend.layout.c"
      ll_backend__layout____Compare____proc_layout_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5907 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5909 "ll_backend.layout.c"
  }
#line 5911 "ll_backend.layout.c"
}

#line 5914 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_exec_trace_0_0_10001(
#line 5917 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5919 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5921 "ll_backend.layout.c"
{
#line 5923 "ll_backend.layout.c"
  {
#line 5925 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5928 "ll_backend.layout.c"
    {
#line 5930 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_exec_trace_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5933 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5935 "ll_backend.layout.c"
  }
#line 5937 "ll_backend.layout.c"
}

#line 5940 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_exec_trace_0_0_10001(
#line 5943 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5945 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5947 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5949 "ll_backend.layout.c"
{
#line 5951 "ll_backend.layout.c"
  {
#line 5953 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5956 "ll_backend.layout.c"
    {
#line 5958 "ll_backend.layout.c"
      ll_backend__layout____Compare____proc_layout_exec_trace_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5961 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5963 "ll_backend.layout.c"
  }
#line 5965 "ll_backend.layout.c"
}

#line 5968 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_kind_0_0_10001(
#line 5971 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5973 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5975 "ll_backend.layout.c"
{
#line 5977 "ll_backend.layout.c"
  {
#line 5979 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5982 "ll_backend.layout.c"
    {
#line 5984 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_kind_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5987 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5989 "ll_backend.layout.c"
  }
#line 5991 "ll_backend.layout.c"
}

#line 5994 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_kind_0_0_10001(
#line 5997 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5999 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6001 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6003 "ll_backend.layout.c"
{
#line 6005 "ll_backend.layout.c"
  {
#line 6007 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6010 "ll_backend.layout.c"
    {
#line 6012 "ll_backend.layout.c"
      ll_backend__layout____Compare____proc_layout_kind_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6015 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6017 "ll_backend.layout.c"
  }
#line 6019 "ll_backend.layout.c"
}

#line 6022 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_proc_static_0_0_10001(
#line 6025 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 6027 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 6029 "ll_backend.layout.c"
{
#line 6031 "ll_backend.layout.c"
  {
#line 6033 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 6036 "ll_backend.layout.c"
    {
#line 6038 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_proc_static_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 6041 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6043 "ll_backend.layout.c"
  }
#line 6045 "ll_backend.layout.c"
}

#line 6048 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_proc_static_0_0_10001(
#line 6051 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6053 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6055 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6057 "ll_backend.layout.c"
{
#line 6059 "ll_backend.layout.c"
  {
#line 6061 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6064 "ll_backend.layout.c"
    {
#line 6066 "ll_backend.layout.c"
      ll_backend__layout____Compare____proc_layout_proc_static_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6069 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6071 "ll_backend.layout.c"
  }
#line 6073 "ll_backend.layout.c"
}

#line 6076 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_stack_traversal_0_0_10001(
#line 6079 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 6081 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 6083 "ll_backend.layout.c"
{
#line 6085 "ll_backend.layout.c"
  {
#line 6087 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 6090 "ll_backend.layout.c"
    {
#line 6092 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_stack_traversal_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 6095 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6097 "ll_backend.layout.c"
  }
#line 6099 "ll_backend.layout.c"
}

#line 6102 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_stack_traversal_0_0_10001(
#line 6105 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6107 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6109 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6111 "ll_backend.layout.c"
{
#line 6113 "ll_backend.layout.c"
  {
#line 6115 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6118 "ll_backend.layout.c"
    {
#line 6120 "ll_backend.layout.c"
      ll_backend__layout____Compare____proc_layout_stack_traversal_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6123 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6125 "ll_backend.layout.c"
  }
#line 6127 "ll_backend.layout.c"
}

#line 6130 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_user_or_uci_0_0_10001(
#line 6133 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 6135 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 6137 "ll_backend.layout.c"
{
#line 6139 "ll_backend.layout.c"
  {
#line 6141 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 6144 "ll_backend.layout.c"
    {
#line 6146 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_user_or_uci_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 6149 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6151 "ll_backend.layout.c"
  }
#line 6153 "ll_backend.layout.c"
}

#line 6156 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_user_or_uci_0_0_10001(
#line 6159 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6161 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6163 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6165 "ll_backend.layout.c"
{
#line 6167 "ll_backend.layout.c"
  {
#line 6169 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6172 "ll_backend.layout.c"
    {
#line 6174 "ll_backend.layout.c"
      ll_backend__layout____Compare____proc_layout_user_or_uci_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6177 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6179 "ll_backend.layout.c"
  }
#line 6181 "ll_backend.layout.c"
}

#line 6184 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____string_with_0s_0_0_10001(
#line 6187 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 6189 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 6191 "ll_backend.layout.c"
{
#line 6193 "ll_backend.layout.c"
  {
#line 6195 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 6198 "ll_backend.layout.c"
    {
#line 6200 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____string_with_0s_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 6203 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6205 "ll_backend.layout.c"
  }
#line 6207 "ll_backend.layout.c"
}

#line 6210 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____string_with_0s_0_0_10001(
#line 6213 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6215 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6217 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6219 "ll_backend.layout.c"
{
#line 6221 "ll_backend.layout.c"
  {
#line 6223 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6226 "ll_backend.layout.c"
    {
#line 6228 "ll_backend.layout.c"
      ll_backend__layout____Compare____string_with_0s_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6231 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6233 "ll_backend.layout.c"
  }
#line 6235 "ll_backend.layout.c"
}

#line 6238 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____table_io_args_data_0_0_10001(
#line 6241 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 6243 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 6245 "ll_backend.layout.c"
{
#line 6247 "ll_backend.layout.c"
  {
#line 6249 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 6252 "ll_backend.layout.c"
    {
#line 6254 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____table_io_args_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 6257 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6259 "ll_backend.layout.c"
  }
#line 6261 "ll_backend.layout.c"
}

#line 6264 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____table_io_args_data_0_0_10001(
#line 6267 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6269 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6271 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6273 "ll_backend.layout.c"
{
#line 6275 "ll_backend.layout.c"
  {
#line 6277 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6280 "ll_backend.layout.c"
    {
#line 6282 "ll_backend.layout.c"
      ll_backend__layout____Compare____table_io_args_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6285 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6287 "ll_backend.layout.c"
  }
#line 6289 "ll_backend.layout.c"
}

#line 6292 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____table_io_entry_data_0_0_10001(
#line 6295 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 6297 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 6299 "ll_backend.layout.c"
{
#line 6301 "ll_backend.layout.c"
  {
#line 6303 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 6306 "ll_backend.layout.c"
    {
#line 6308 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____table_io_entry_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 6311 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6313 "ll_backend.layout.c"
  }
#line 6315 "ll_backend.layout.c"
}

#line 6318 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____table_io_entry_data_0_0_10001(
#line 6321 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6323 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6325 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6327 "ll_backend.layout.c"
{
#line 6329 "ll_backend.layout.c"
  {
#line 6331 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6334 "ll_backend.layout.c"
    {
#line 6336 "ll_backend.layout.c"
      ll_backend__layout____Compare____table_io_entry_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6339 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6341 "ll_backend.layout.c"
  }
#line 6343 "ll_backend.layout.c"
}

#line 6346 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____user_event_data_0_0_10001(
#line 6349 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 6351 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 6353 "ll_backend.layout.c"
{
#line 6355 "ll_backend.layout.c"
  {
#line 6357 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 6360 "ll_backend.layout.c"
    {
#line 6362 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____user_event_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 6365 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6367 "ll_backend.layout.c"
  }
#line 6369 "ll_backend.layout.c"
}

#line 6372 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____user_event_data_0_0_10001(
#line 6375 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6377 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6379 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6381 "ll_backend.layout.c"
{
#line 6383 "ll_backend.layout.c"
  {
#line 6385 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6388 "ll_backend.layout.c"
    {
#line 6390 "ll_backend.layout.c"
      ll_backend__layout____Compare____user_event_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6393 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6395 "ll_backend.layout.c"
  }
#line 6397 "ll_backend.layout.c"
}

#line 74 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____user_event_data_0_0(
#line 74 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 74 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 74 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 74 "layout.m"
{
#line 74 "layout.m"
  {
#line 74 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 74 "layout.m"
    MR_Integer ll_backend__layout__CastX_12 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 74 "layout.m"
    MR_Integer ll_backend__layout__CastY_13 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 74 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_12 == ll_backend__layout__CastY_13);
#line 74 "layout.m"
    if (ll_backend__layout__succeeded)
#line 6424 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "layout.m"
    else
#line 74 "layout.m"
      {
#line 74 "layout.m"
        MR_Integer ll_backend__layout__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 74 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 74 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 74 "layout.m"
        MR_Integer ll_backend__layout__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 74 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 74 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 74 "layout.m"
        MR_Word ll_backend__layout__V_10_10;

#line 74 "layout.m"
        {
#line 74 "layout.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_10_10, ll_backend__layout__V_4_4, ll_backend__layout__V_7_7);
        }
#line 6450 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_10_10 == (MR_Integer) 0);
#line 74 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 74 "layout.m"
        if (ll_backend__layout__succeeded)
#line 74 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_10_10;
#line 74 "layout.m"
        else
#line 74 "layout.m"
          {
#line 74 "layout.m"
            MR_Word ll_backend__layout__V_11_11;

#line 74 "layout.m"
            {
#line 74 "layout.m"
              ll_backend__llds____Compare____rval_0_0(&ll_backend__layout__V_11_11, ll_backend__layout__V_5_5, ll_backend__layout__V_8_8);
            }
#line 6470 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_11_11 == (MR_Integer) 0);
#line 74 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 74 "layout.m"
            if (ll_backend__layout__succeeded)
#line 74 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_11_11;
#line 74 "layout.m"
            else
#line 74 "layout.m"
              {
#line 74 "layout.m"
                ll_backend__layout____Compare____layout_slot_name_0_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_6_6, ll_backend__layout__V_9_9);
#line 74 "layout.m"
                return;
              }
#line 74 "layout.m"
          }
#line 74 "layout.m"
      }
#line 74 "layout.m"
  }
#line 74 "layout.m"
}

#line 74 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____user_event_data_0_0(
#line 74 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 74 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 74 "layout.m"
{
#line 74 "layout.m"
  {
#line 74 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 74 "layout.m"
    MR_Integer ll_backend__layout__CastX_9 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 74 "layout.m"
    MR_Integer ll_backend__layout__CastY_10 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 74 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_9 == ll_backend__layout__CastY_10);
#line 74 "layout.m"
    if (ll_backend__layout__succeeded)
#line 74 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 74 "layout.m"
    else
#line 74 "layout.m"
      {
#line 74 "layout.m"
        MR_Integer ll_backend__layout__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 74 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 74 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 74 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 74 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 74 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));

#line 6537 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_3_3 == ll_backend__layout__V_6_6);
#line 74 "layout.m"
        if (ll_backend__layout__succeeded)
#line 74 "layout.m"
          {
#line 6543 "ll_backend.layout.c"
            {
#line 6545 "ll_backend.layout.c"
              ll_backend__layout__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_7_7);
            }
#line 74 "layout.m"
            if (ll_backend__layout__succeeded)
#line 6550 "ll_backend.layout.c"
              {
#line 6552 "ll_backend.layout.c"
                return ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_slot_name_0_0(ll_backend__layout__V_5_5, ll_backend__layout__V_8_8);
              }
#line 74 "layout.m"
          }
#line 74 "layout.m"
      }
#line 74 "layout.m"
    return ll_backend__layout__succeeded;
#line 74 "layout.m"
  }
#line 74 "layout.m"
}

#line 201 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____table_io_entry_data_0_0(
#line 201 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 201 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 201 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 201 "layout.m"
{
#line 201 "layout.m"
  {
#line 201 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 201 "layout.m"
    MR_Integer ll_backend__layout__CastX_9 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 201 "layout.m"
    MR_Integer ll_backend__layout__CastY_10 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 201 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_9 == ll_backend__layout__CastY_10);
#line 201 "layout.m"
    if (ll_backend__layout__succeeded)
#line 6590 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 201 "layout.m"
    else
#line 201 "layout.m"
      {
#line 201 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 201 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 201 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 201 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 201 "layout.m"
        MR_Word ll_backend__layout__V_8_8;

#line 201 "layout.m"
        {
#line 201 "layout.m"
          ll_backend__layout____Compare____layout_name_0_0(&ll_backend__layout__V_8_8, ll_backend__layout__V_4_4, ll_backend__layout__V_6_6);
        }
#line 6612 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == (MR_Integer) 0);
#line 201 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 201 "layout.m"
        if (ll_backend__layout__succeeded)
#line 201 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_8_8;
#line 201 "layout.m"
        else
#line 201 "layout.m"
          {
#line 201 "layout.m"
            {
#line 201 "layout.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[15], ll_backend__layout__HeadVar__1_1, ((MR_Box) (ll_backend__layout__V_5_5)), ((MR_Box) (ll_backend__layout__V_7_7)));
#line 201 "layout.m"
              return;
            }
#line 201 "layout.m"
          }
#line 201 "layout.m"
      }
#line 201 "layout.m"
  }
#line 201 "layout.m"
}

#line 201 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____table_io_entry_data_0_0(
#line 201 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 201 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 201 "layout.m"
{
#line 201 "layout.m"
  {
#line 201 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 201 "layout.m"
    MR_Integer ll_backend__layout__CastX_7 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 201 "layout.m"
    MR_Integer ll_backend__layout__CastY_8 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 201 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_7 == ll_backend__layout__CastY_8);
#line 201 "layout.m"
    if (ll_backend__layout__succeeded)
#line 201 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 201 "layout.m"
    else
#line 201 "layout.m"
      {
#line 201 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_9_9;
#line 201 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 201 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 201 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 201 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));

#line 6679 "ll_backend.layout.c"
        {
#line 6681 "ll_backend.layout.c"
          ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_name_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5);
        }
#line 201 "layout.m"
        if (ll_backend__layout__succeeded)
#line 201 "layout.m"
          {
#line 6688 "ll_backend.layout.c"
            ll_backend__layout__TypeInfo_9_9 = (MR_Word) &ll_backend__layout_scalar_common_1[15];
#line 6690 "ll_backend.layout.c"
            {
#line 6692 "ll_backend.layout.c"
              return ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_9_9, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_6_6)));
            }
#line 201 "layout.m"
          }
#line 201 "layout.m"
      }
#line 201 "layout.m"
    return ll_backend__layout__succeeded;
#line 201 "layout.m"
  }
#line 201 "layout.m"
}

#line 177 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____table_io_args_data_0_0(
#line 177 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 177 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 177 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 177 "layout.m"
{
#line 177 "layout.m"
  {
#line 177 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 177 "layout.m"
    MR_Integer ll_backend__layout__CastX_12 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 177 "layout.m"
    MR_Integer ll_backend__layout__CastY_13 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 177 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_12 == ll_backend__layout__CastY_13);
#line 177 "layout.m"
    if (ll_backend__layout__succeeded)
#line 6730 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 177 "layout.m"
    else
#line 177 "layout.m"
      {
#line 177 "layout.m"
        MR_Integer ll_backend__layout__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 177 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 177 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 177 "layout.m"
        MR_Integer ll_backend__layout__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 177 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 177 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 177 "layout.m"
        MR_Word ll_backend__layout__V_10_10;

#line 177 "layout.m"
        {
#line 177 "layout.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_10_10, ll_backend__layout__V_4_4, ll_backend__layout__V_7_7);
        }
#line 6756 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_10_10 == (MR_Integer) 0);
#line 177 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 177 "layout.m"
        if (ll_backend__layout__succeeded)
#line 177 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_10_10;
#line 177 "layout.m"
        else
#line 177 "layout.m"
          {
#line 177 "layout.m"
            MR_Word ll_backend__layout__V_11_11;

#line 177 "layout.m"
            {
#line 177 "layout.m"
              ll_backend__llds____Compare____rval_0_0(&ll_backend__layout__V_11_11, ll_backend__layout__V_5_5, ll_backend__layout__V_8_8);
            }
#line 6776 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_11_11 == (MR_Integer) 0);
#line 177 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 177 "layout.m"
            if (ll_backend__layout__succeeded)
#line 177 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_11_11;
#line 177 "layout.m"
            else
#line 177 "layout.m"
              {
#line 177 "layout.m"
                ll_backend__llds____Compare____rval_0_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_6_6, ll_backend__layout__V_9_9);
#line 177 "layout.m"
                return;
              }
#line 177 "layout.m"
          }
#line 177 "layout.m"
      }
#line 177 "layout.m"
  }
#line 177 "layout.m"
}

#line 177 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____table_io_args_data_0_0(
#line 177 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 177 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 177 "layout.m"
{
#line 177 "layout.m"
  {
#line 177 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 177 "layout.m"
    MR_Integer ll_backend__layout__CastX_9 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 177 "layout.m"
    MR_Integer ll_backend__layout__CastY_10 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 177 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_9 == ll_backend__layout__CastY_10);
#line 177 "layout.m"
    if (ll_backend__layout__succeeded)
#line 177 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 177 "layout.m"
    else
#line 177 "layout.m"
      {
#line 177 "layout.m"
        MR_Integer ll_backend__layout__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 177 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 177 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 177 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 177 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 177 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));

#line 6843 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_3_3 == ll_backend__layout__V_6_6);
#line 177 "layout.m"
        if (ll_backend__layout__succeeded)
#line 177 "layout.m"
          {
#line 6849 "ll_backend.layout.c"
            {
#line 6851 "ll_backend.layout.c"
              ll_backend__layout__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_7_7);
            }
#line 177 "layout.m"
            if (ll_backend__layout__succeeded)
#line 6856 "ll_backend.layout.c"
              {
#line 6858 "ll_backend.layout.c"
                return ll_backend__layout__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__layout__V_5_5, ll_backend__layout__V_8_8);
              }
#line 177 "layout.m"
          }
#line 177 "layout.m"
      }
#line 177 "layout.m"
    return ll_backend__layout__succeeded;
#line 177 "layout.m"
  }
#line 177 "layout.m"
}

#line 279 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____string_with_0s_0_0(
#line 279 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 279 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 279 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 279 "layout.m"
{
#line 279 "layout.m"
  {
#line 279 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 279 "layout.m"
    MR_Integer ll_backend__layout__CastX_6 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 279 "layout.m"
    MR_Integer ll_backend__layout__CastY_7 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 279 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_6 == ll_backend__layout__CastY_7);
#line 279 "layout.m"
    if (ll_backend__layout__succeeded)
#line 6896 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 279 "layout.m"
    else
#line 279 "layout.m"
      {
#line 279 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = (MR_Word) ll_backend__layout__HeadVar__2_2;
#line 279 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = (MR_Word) ll_backend__layout__HeadVar__3_3;

#line 279 "layout.m"
        {
#line 279 "layout.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[14], ll_backend__layout__HeadVar__1_1, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_5_5)));
#line 279 "layout.m"
          return;
        }
#line 279 "layout.m"
      }
#line 279 "layout.m"
  }
#line 279 "layout.m"
}

#line 279 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____string_with_0s_0_0(
#line 279 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 279 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 279 "layout.m"
{
#line 279 "layout.m"
  {
#line 279 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 279 "layout.m"
    MR_Integer ll_backend__layout__CastX_5 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 279 "layout.m"
    MR_Integer ll_backend__layout__CastY_6 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 279 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_5 == ll_backend__layout__CastY_6);
#line 279 "layout.m"
    if (ll_backend__layout__succeeded)
#line 279 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 279 "layout.m"
    else
#line 279 "layout.m"
      {
#line 279 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = (MR_Word) ll_backend__layout__HeadVar__1_1;
#line 279 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = (MR_Word) ll_backend__layout__HeadVar__2_2;

#line 6954 "ll_backend.layout.c"
        {
#line 6956 "ll_backend.layout.c"
          return ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__layout_scalar_common_1[14], ((MR_Box) (ll_backend__layout__V_3_3)), ((MR_Box) (ll_backend__layout__V_4_4)));
        }
#line 279 "layout.m"
      }
#line 279 "layout.m"
    return ll_backend__layout__succeeded;
#line 279 "layout.m"
  }
#line 279 "layout.m"
}

#line 394 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____proc_layout_user_or_uci_0_0(
#line 394 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 394 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 394 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 394 "layout.m"
{
#line 394 "layout.m"
  {
#line 394 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 394 "layout.m"
    MR_Integer ll_backend__layout__Cast_HeadVar1_4 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 394 "layout.m"
    MR_Integer ll_backend__layout__Cast_HeadVar2_5 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 394 "layout.m"
    {
#line 394 "layout.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__Cast_HeadVar1_4, ll_backend__layout__Cast_HeadVar2_5);
#line 394 "layout.m"
      return;
    }
#line 394 "layout.m"
  }
#line 394 "layout.m"
}

#line 394 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_user_or_uci_0_0(
#line 394 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_1,
#line 394 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 394 "layout.m"
{
#line 7009 "ll_backend.layout.c"
  {
#line 7011 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded = (ll_backend__layout__HeadVar__2_1 == ll_backend__layout__HeadVar__2_2);

#line 7014 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 7016 "ll_backend.layout.c"
  }
#line 394 "layout.m"
}

#line 139 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____proc_layout_stack_traversal_0_0(
#line 139 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 139 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 139 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 139 "layout.m"
{
#line 139 "layout.m"
  {
#line 139 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 139 "layout.m"
    MR_Integer ll_backend__layout__CastX_15 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 139 "layout.m"
    MR_Integer ll_backend__layout__CastY_16 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 139 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_15 == ll_backend__layout__CastY_16);
#line 139 "layout.m"
    if (ll_backend__layout__succeeded)
#line 7045 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 139 "layout.m"
    else
#line 139 "layout.m"
      {
#line 139 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 139 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 139 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 139 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 139 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 139 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 139 "layout.m"
        MR_Integer ll_backend__layout__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 139 "layout.m"
        MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 139 "layout.m"
        MR_Word ll_backend__layout__V_12_12;

#line 139 "layout.m"
        {
#line 139 "layout.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[13], &ll_backend__layout__V_12_12, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_8_8)));
        }
#line 7075 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_12_12 == (MR_Integer) 0);
#line 139 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 139 "layout.m"
        if (ll_backend__layout__succeeded)
#line 139 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_12_12;
#line 139 "layout.m"
        else
#line 139 "layout.m"
          {
#line 139 "layout.m"
            MR_Word ll_backend__layout__V_13_13;

#line 139 "layout.m"
            {
#line 139 "layout.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[2], &ll_backend__layout__V_13_13, ((MR_Box) (ll_backend__layout__V_5_5)), ((MR_Box) (ll_backend__layout__V_9_9)));
            }
#line 7095 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_13_13 == (MR_Integer) 0);
#line 139 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 139 "layout.m"
            if (ll_backend__layout__succeeded)
#line 139 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_13_13;
#line 139 "layout.m"
            else
#line 139 "layout.m"
              {
#line 139 "layout.m"
                MR_Word ll_backend__layout__V_14_14;

#line 139 "layout.m"
                {
#line 139 "layout.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_14_14, ll_backend__layout__V_6_6, ll_backend__layout__V_10_10);
                }
#line 7115 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_14_14 == (MR_Integer) 0);
#line 139 "layout.m"
                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 139 "layout.m"
                if (ll_backend__layout__succeeded)
#line 139 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_14_14;
#line 139 "layout.m"
                else
#line 139 "layout.m"
                  {
#line 139 "layout.m"
                    MR_Integer ll_backend__layout__V_21_21 = (MR_Integer) ll_backend__layout__V_7_7;
#line 139 "layout.m"
                    MR_Integer ll_backend__layout__V_22_22 = (MR_Integer) ll_backend__layout__V_11_11;

#line 139 "layout.m"
                    {
#line 139 "layout.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_21_21, ll_backend__layout__V_22_22);
#line 139 "layout.m"
                      return;
                    }
#line 139 "layout.m"
                  }
#line 139 "layout.m"
              }
#line 139 "layout.m"
          }
#line 139 "layout.m"
      }
#line 139 "layout.m"
  }
#line 139 "layout.m"
}

#line 139 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_stack_traversal_0_0(
#line 139 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 139 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 139 "layout.m"
{
#line 139 "layout.m"
  {
#line 139 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 139 "layout.m"
    MR_Integer ll_backend__layout__CastX_11 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 139 "layout.m"
    MR_Integer ll_backend__layout__CastY_12 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 139 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_11 == ll_backend__layout__CastY_12);
#line 139 "layout.m"
    if (ll_backend__layout__succeeded)
#line 139 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 139 "layout.m"
    else
#line 139 "layout.m"
      {
#line 139 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_14_14;
#line 139 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 139 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 139 "layout.m"
        MR_Integer ll_backend__layout__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 139 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 139 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 139 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 139 "layout.m"
        MR_Integer ll_backend__layout__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 139 "layout.m"
        MR_Word ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));

#line 7199 "ll_backend.layout.c"
        {
#line 7201 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__layout_scalar_common_1[13], ((MR_Box) (ll_backend__layout__V_3_3)), ((MR_Box) (ll_backend__layout__V_7_7)));
        }
#line 139 "layout.m"
        if (ll_backend__layout__succeeded)
#line 139 "layout.m"
          {
#line 7208 "ll_backend.layout.c"
            ll_backend__layout__TypeInfo_14_14 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 7210 "ll_backend.layout.c"
            {
#line 7212 "ll_backend.layout.c"
              ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_14_14, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_8_8)));
            }
#line 139 "layout.m"
            if (ll_backend__layout__succeeded)
#line 139 "layout.m"
              {
#line 7219 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_9_9);
#line 139 "layout.m"
                if (ll_backend__layout__succeeded)
#line 7223 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = (ll_backend__layout__V_6_6 == ll_backend__layout__V_10_10);
#line 139 "layout.m"
              }
#line 139 "layout.m"
          }
#line 139 "layout.m"
      }
#line 139 "layout.m"
    return ll_backend__layout__succeeded;
#line 139 "layout.m"
  }
#line 139 "layout.m"
}

#line 167 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____proc_layout_proc_static_0_0(
#line 167 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 167 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 167 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 167 "layout.m"
{
#line 167 "layout.m"
  {
#line 167 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 167 "layout.m"
    MR_Integer ll_backend__layout__CastX_21 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 167 "layout.m"
    MR_Integer ll_backend__layout__CastY_22 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 167 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_21 == ll_backend__layout__CastY_22);
#line 167 "layout.m"
    if (ll_backend__layout__succeeded)
#line 7262 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 167 "layout.m"
    else
#line 167 "layout.m"
      {
#line 167 "layout.m"
        MR_String ll_backend__layout__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 167 "layout.m"
        MR_Integer ll_backend__layout__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 167 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 167 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 167 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 167 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 5)));
#line 167 "layout.m"
        MR_String ll_backend__layout__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 167 "layout.m"
        MR_Integer ll_backend__layout__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 167 "layout.m"
        MR_Word ll_backend__layout__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 167 "layout.m"
        MR_Word ll_backend__layout__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 167 "layout.m"
        MR_Word ll_backend__layout__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 4)));
#line 167 "layout.m"
        MR_Word ll_backend__layout__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 5)));
#line 167 "layout.m"
        MR_Word ll_backend__layout__V_16_16;

#line 167 "layout.m"
        {
#line 167 "layout.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__layout__V_16_16, ll_backend__layout__V_4_4, ll_backend__layout__V_10_10);
        }
#line 7300 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_16_16 == (MR_Integer) 0);
#line 167 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 167 "layout.m"
        if (ll_backend__layout__succeeded)
#line 167 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_16_16;
#line 167 "layout.m"
        else
#line 167 "layout.m"
          {
#line 167 "layout.m"
            MR_Word ll_backend__layout__V_17_17;

#line 167 "layout.m"
            {
#line 167 "layout.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_17_17, ll_backend__layout__V_5_5, ll_backend__layout__V_11_11);
            }
#line 7320 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_17_17 == (MR_Integer) 0);
#line 167 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 167 "layout.m"
            if (ll_backend__layout__succeeded)
#line 167 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_17_17;
#line 167 "layout.m"
            else
#line 167 "layout.m"
              {
#line 167 "layout.m"
                MR_Word ll_backend__layout__V_18_18;
#line 167 "layout.m"
                MR_Integer ll_backend__layout__V_29_29 = (MR_Integer) ll_backend__layout__V_6_6;
#line 167 "layout.m"
                MR_Integer ll_backend__layout__V_30_30 = (MR_Integer) ll_backend__layout__V_12_12;

#line 167 "layout.m"
                {
#line 167 "layout.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_18_18, ll_backend__layout__V_29_29, ll_backend__layout__V_30_30);
                }
#line 7344 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_18_18 == (MR_Integer) 0);
#line 167 "layout.m"
                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 167 "layout.m"
                if (ll_backend__layout__succeeded)
#line 167 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_18_18;
#line 167 "layout.m"
                else
#line 167 "layout.m"
                  {
#line 167 "layout.m"
                    MR_Word ll_backend__layout__V_19_19;

#line 167 "layout.m"
                    {
#line 167 "layout.m"
                      ll_backend__layout____Compare____deep_excp_slots_0_0(&ll_backend__layout__V_19_19, ll_backend__layout__V_7_7, ll_backend__layout__V_13_13);
                    }
#line 7364 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_19_19 == (MR_Integer) 0);
#line 167 "layout.m"
                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 167 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 167 "layout.m"
                      *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_19_19;
#line 167 "layout.m"
                    else
#line 167 "layout.m"
                      {
#line 167 "layout.m"
                        MR_Word ll_backend__layout__V_20_20;

#line 167 "layout.m"
                        {
#line 167 "layout.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[12], &ll_backend__layout__V_20_20, ((MR_Box) (ll_backend__layout__V_8_8)), ((MR_Box) (ll_backend__layout__V_14_14)));
                        }
#line 7384 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (ll_backend__layout__V_20_20 == (MR_Integer) 0);
#line 167 "layout.m"
                        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 167 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 167 "layout.m"
                          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_20_20;
#line 167 "layout.m"
                        else
#line 167 "layout.m"
                          {
#line 167 "layout.m"
                            {
#line 167 "layout.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[12], ll_backend__layout__HeadVar__1_1, ((MR_Box) (ll_backend__layout__V_9_9)), ((MR_Box) (ll_backend__layout__V_15_15)));
#line 167 "layout.m"
                              return;
                            }
#line 167 "layout.m"
                          }
#line 167 "layout.m"
                      }
#line 167 "layout.m"
                  }
#line 167 "layout.m"
              }
#line 167 "layout.m"
          }
#line 167 "layout.m"
      }
#line 167 "layout.m"
  }
#line 167 "layout.m"
}

#line 167 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_proc_static_0_0(
#line 167 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 167 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 167 "layout.m"
{
#line 167 "layout.m"
  {
#line 167 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 167 "layout.m"
    MR_Integer ll_backend__layout__CastX_15 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 167 "layout.m"
    MR_Integer ll_backend__layout__CastY_16 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 167 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_15 == ll_backend__layout__CastY_16);
#line 167 "layout.m"
    if (ll_backend__layout__succeeded)
#line 167 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 167 "layout.m"
    else
#line 167 "layout.m"
      {
#line 167 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_17_17;
#line 167 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_18_18;
#line 167 "layout.m"
        MR_String ll_backend__layout__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 167 "layout.m"
        MR_Integer ll_backend__layout__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 167 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 167 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 167 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 4)));
#line 167 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 5)));
#line 167 "layout.m"
        MR_String ll_backend__layout__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 167 "layout.m"
        MR_Integer ll_backend__layout__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 167 "layout.m"
        MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 167 "layout.m"
        MR_Word ll_backend__layout__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 167 "layout.m"
        MR_Word ll_backend__layout__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 167 "layout.m"
        MR_Word ll_backend__layout__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 5)));

#line 7477 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (strcmp(ll_backend__layout__V_3_3, ll_backend__layout__V_9_9) == 0);
#line 167 "layout.m"
        if (ll_backend__layout__succeeded)
#line 167 "layout.m"
          {
#line 7483 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 == ll_backend__layout__V_10_10);
#line 167 "layout.m"
            if (ll_backend__layout__succeeded)
#line 167 "layout.m"
              {
#line 7489 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_11_11);
#line 167 "layout.m"
                if (ll_backend__layout__succeeded)
#line 167 "layout.m"
                  {
#line 7495 "ll_backend.layout.c"
                    {
#line 7497 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = ll_backend__layout____Unify____deep_excp_slots_0_0(ll_backend__layout__V_6_6, ll_backend__layout__V_12_12);
                    }
#line 167 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 167 "layout.m"
                      {
#line 7504 "ll_backend.layout.c"
                        ll_backend__layout__TypeInfo_17_17 = (MR_Word) &ll_backend__layout_scalar_common_1[12];
#line 7506 "ll_backend.layout.c"
                        {
#line 7508 "ll_backend.layout.c"
                          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_17_17, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_13_13)));
                        }
#line 167 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 167 "layout.m"
                          {
#line 7515 "ll_backend.layout.c"
                            ll_backend__layout__TypeInfo_18_18 = (MR_Word) &ll_backend__layout_scalar_common_1[12];
#line 7517 "ll_backend.layout.c"
                            {
#line 7519 "ll_backend.layout.c"
                              return ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_18_18, ((MR_Box) (ll_backend__layout__V_8_8)), ((MR_Box) (ll_backend__layout__V_14_14)));
                            }
#line 167 "layout.m"
                          }
#line 167 "layout.m"
                      }
#line 167 "layout.m"
                  }
#line 167 "layout.m"
              }
#line 167 "layout.m"
          }
#line 167 "layout.m"
      }
#line 167 "layout.m"
    return ll_backend__layout__succeeded;
#line 167 "layout.m"
  }
#line 167 "layout.m"
}

#line 390 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____proc_layout_kind_0_0(
#line 390 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 390 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 390 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 390 "layout.m"
{
#line 390 "layout.m"
  {
#line 390 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 390 "layout.m"
    MR_Integer ll_backend__layout__CastX_8 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 390 "layout.m"
    MR_Integer ll_backend__layout__CastY_9 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 390 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_8 == ll_backend__layout__CastY_9);
#line 390 "layout.m"
    if (ll_backend__layout__succeeded)
#line 7565 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 390 "layout.m"
    else
#line 390 "layout.m"
      if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 390 "layout.m"
        if ((ll_backend__layout__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 390 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 390 "layout.m"
        else
#line 7577 "ll_backend.layout.c"
          *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 1;
#line 390 "layout.m"
      else
#line 390 "layout.m"
        {
#line 390 "layout.m"
          MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));

#line 390 "layout.m"
          if ((ll_backend__layout__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7588 "ll_backend.layout.c"
            *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 2;
#line 390 "layout.m"
          else
#line 390 "layout.m"
            {
#line 390 "layout.m"
              MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 390 "layout.m"
              MR_Integer ll_backend__layout__V_12_12 = (MR_Integer) ll_backend__layout__V_11_11;
#line 390 "layout.m"
              MR_Integer ll_backend__layout__V_13_13 = (MR_Integer) ll_backend__layout__V_7_7;

#line 390 "layout.m"
              {
#line 390 "layout.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_12_12, ll_backend__layout__V_13_13);
#line 390 "layout.m"
                return;
              }
#line 390 "layout.m"
            }
#line 390 "layout.m"
        }
#line 390 "layout.m"
  }
#line 390 "layout.m"
}

#line 390 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_kind_0_0(
#line 390 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 390 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 390 "layout.m"
{
#line 390 "layout.m"
  {
#line 390 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 390 "layout.m"
    MR_Integer ll_backend__layout__CastX_7 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 390 "layout.m"
    MR_Integer ll_backend__layout__CastY_8 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 390 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_7 == ll_backend__layout__CastY_8);
#line 390 "layout.m"
    if (ll_backend__layout__succeeded)
#line 390 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 390 "layout.m"
    else
#line 390 "layout.m"
      if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 390 "layout.m"
        {
#line 390 "layout.m"
          MR_Integer ll_backend__layout__CastX_3 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 390 "layout.m"
          MR_Integer ll_backend__layout__CastY_4 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 390 "layout.m"
          ll_backend__layout__succeeded = (ll_backend__layout__CastY_4 == ll_backend__layout__CastX_3);
#line 390 "layout.m"
        }
#line 390 "layout.m"
      else
#line 390 "layout.m"
        {
#line 390 "layout.m"
          MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 390 "layout.m"
          MR_Word ll_backend__layout__V_6_6;

#line 390 "layout.m"
          ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 390 "layout.m"
          if (ll_backend__layout__succeeded)
#line 390 "layout.m"
            {
#line 390 "layout.m"
              ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 7673 "ll_backend.layout.c"
              ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_6_6);
#line 390 "layout.m"
            }
#line 390 "layout.m"
        }
#line 390 "layout.m"
    return ll_backend__layout__succeeded;
#line 390 "layout.m"
  }
#line 390 "layout.m"
}

#line 212 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____proc_layout_exec_trace_0_0(
#line 212 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 212 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 212 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 212 "layout.m"
{
#line 212 "layout.m"
  {
#line 212 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 212 "layout.m"
    MR_Integer ll_backend__layout__CastX_60 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 212 "layout.m"
    MR_Integer ll_backend__layout__CastY_61 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 212 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_60 == ll_backend__layout__CastY_61);
#line 212 "layout.m"
    if (ll_backend__layout__succeeded)
#line 7710 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 212 "layout.m"
    else
#line 212 "layout.m"
      {
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 212 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 212 "layout.m"
        MR_Integer ll_backend__layout__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 5)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 6)));
#line 212 "layout.m"
        MR_Integer ll_backend__layout__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 7)));
#line 212 "layout.m"
        MR_Integer ll_backend__layout__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 8)));
#line 212 "layout.m"
        MR_Integer ll_backend__layout__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 9)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 10)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 11)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 12)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 13)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 14)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 15)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 16)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 17)));
#line 212 "layout.m"
        MR_Integer ll_backend__layout__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 18)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 212 "layout.m"
        MR_Integer ll_backend__layout__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 4)));
#line 212 "layout.m"
        MR_Integer ll_backend__layout__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 5)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 6)));
#line 212 "layout.m"
        MR_Integer ll_backend__layout__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 7)));
#line 212 "layout.m"
        MR_Integer ll_backend__layout__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 8)));
#line 212 "layout.m"
        MR_Integer ll_backend__layout__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 9)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 10)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 11)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 12)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 13)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 14)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 15)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 16)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 17)));
#line 212 "layout.m"
        MR_Integer ll_backend__layout__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 18)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_42_42;

#line 212 "layout.m"
        {
#line 212 "layout.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[3], &ll_backend__layout__V_42_42, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_23_23)));
        }
#line 7800 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_42_42 == (MR_Integer) 0);
#line 212 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 212 "layout.m"
        if (ll_backend__layout__succeeded)
#line 212 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_42_42;
#line 212 "layout.m"
        else
#line 212 "layout.m"
          {
#line 212 "layout.m"
            MR_Word ll_backend__layout__V_43_43;

#line 212 "layout.m"
            {
#line 212 "layout.m"
              ll_backend__layout____Compare____layout_slot_name_0_0(&ll_backend__layout__V_43_43, ll_backend__layout__V_5_5, ll_backend__layout__V_24_24);
            }
#line 7820 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_43_43 == (MR_Integer) 0);
#line 212 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 212 "layout.m"
            if (ll_backend__layout__succeeded)
#line 212 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_43_43;
#line 212 "layout.m"
            else
#line 212 "layout.m"
              {
#line 212 "layout.m"
                MR_Word ll_backend__layout__V_44_44;

#line 212 "layout.m"
                {
#line 212 "layout.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_44_44, ll_backend__layout__V_6_6, ll_backend__layout__V_25_25);
                }
#line 7840 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_44_44 == (MR_Integer) 0);
#line 212 "layout.m"
                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 212 "layout.m"
                if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_44_44;
#line 212 "layout.m"
                else
#line 212 "layout.m"
                  {
#line 212 "layout.m"
                    MR_Word ll_backend__layout__V_45_45;

#line 212 "layout.m"
                    {
#line 212 "layout.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[11], &ll_backend__layout__V_45_45, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_26_26)));
                    }
#line 7860 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_45_45 == (MR_Integer) 0);
#line 212 "layout.m"
                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 212 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                      *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_45_45;
#line 212 "layout.m"
                    else
#line 212 "layout.m"
                      {
#line 212 "layout.m"
                        MR_Word ll_backend__layout__V_46_46;

#line 212 "layout.m"
                        {
#line 212 "layout.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[3], &ll_backend__layout__V_46_46, ((MR_Box) (ll_backend__layout__V_8_8)), ((MR_Box) (ll_backend__layout__V_27_27)));
                        }
#line 7880 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (ll_backend__layout__V_46_46 == (MR_Integer) 0);
#line 212 "layout.m"
                        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 212 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_46_46;
#line 212 "layout.m"
                        else
#line 212 "layout.m"
                          {
#line 212 "layout.m"
                            MR_Word ll_backend__layout__V_47_47;

#line 212 "layout.m"
                            {
#line 212 "layout.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_47_47, ll_backend__layout__V_9_9, ll_backend__layout__V_28_28);
                            }
#line 7900 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = (ll_backend__layout__V_47_47 == (MR_Integer) 0);
#line 212 "layout.m"
                            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 212 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_47_47;
#line 212 "layout.m"
                            else
#line 212 "layout.m"
                              {
#line 212 "layout.m"
                                MR_Word ll_backend__layout__V_48_48;

#line 212 "layout.m"
                                {
#line 212 "layout.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[3], &ll_backend__layout__V_48_48, ((MR_Box) (ll_backend__layout__V_10_10)), ((MR_Box) (ll_backend__layout__V_29_29)));
                                }
#line 7920 "ll_backend.layout.c"
                                ll_backend__layout__succeeded = (ll_backend__layout__V_48_48 == (MR_Integer) 0);
#line 212 "layout.m"
                                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 212 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_48_48;
#line 212 "layout.m"
                                else
#line 212 "layout.m"
                                  {
#line 212 "layout.m"
                                    MR_Word ll_backend__layout__V_49_49;

#line 212 "layout.m"
                                    {
#line 212 "layout.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_49_49, ll_backend__layout__V_11_11, ll_backend__layout__V_30_30);
                                    }
#line 7940 "ll_backend.layout.c"
                                    ll_backend__layout__succeeded = (ll_backend__layout__V_49_49 == (MR_Integer) 0);
#line 212 "layout.m"
                                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 212 "layout.m"
                                    if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                      *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_49_49;
#line 212 "layout.m"
                                    else
#line 212 "layout.m"
                                      {
#line 212 "layout.m"
                                        MR_Word ll_backend__layout__V_50_50;

#line 212 "layout.m"
                                        {
#line 212 "layout.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_50_50, ll_backend__layout__V_12_12, ll_backend__layout__V_31_31);
                                        }
#line 7960 "ll_backend.layout.c"
                                        ll_backend__layout__succeeded = (ll_backend__layout__V_50_50 == (MR_Integer) 0);
#line 212 "layout.m"
                                        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 212 "layout.m"
                                        if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_50_50;
#line 212 "layout.m"
                                        else
#line 212 "layout.m"
                                          {
#line 212 "layout.m"
                                            MR_Word ll_backend__layout__V_51_51;

#line 212 "layout.m"
                                            {
#line 212 "layout.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_51_51, ll_backend__layout__V_13_13, ll_backend__layout__V_32_32);
                                            }
#line 7980 "ll_backend.layout.c"
                                            ll_backend__layout__succeeded = (ll_backend__layout__V_51_51 == (MR_Integer) 0);
#line 212 "layout.m"
                                            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 212 "layout.m"
                                            if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_51_51;
#line 212 "layout.m"
                                            else
#line 212 "layout.m"
                                              {
#line 212 "layout.m"
                                                MR_Word ll_backend__layout__V_52_52;

#line 212 "layout.m"
                                                {
#line 212 "layout.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[2], &ll_backend__layout__V_52_52, ((MR_Box) (ll_backend__layout__V_14_14)), ((MR_Box) (ll_backend__layout__V_33_33)));
                                                }
#line 8000 "ll_backend.layout.c"
                                                ll_backend__layout__succeeded = (ll_backend__layout__V_52_52 == (MR_Integer) 0);
#line 212 "layout.m"
                                                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 212 "layout.m"
                                                if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_52_52;
#line 212 "layout.m"
                                                else
#line 212 "layout.m"
                                                  {
#line 212 "layout.m"
                                                    MR_Word ll_backend__layout__V_53_53;

#line 212 "layout.m"
                                                    {
#line 212 "layout.m"
                                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[2], &ll_backend__layout__V_53_53, ((MR_Box) (ll_backend__layout__V_15_15)), ((MR_Box) (ll_backend__layout__V_34_34)));
                                                    }
#line 8020 "ll_backend.layout.c"
                                                    ll_backend__layout__succeeded = (ll_backend__layout__V_53_53 == (MR_Integer) 0);
#line 212 "layout.m"
                                                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 212 "layout.m"
                                                    if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                                      *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_53_53;
#line 212 "layout.m"
                                                    else
#line 212 "layout.m"
                                                      {
#line 212 "layout.m"
                                                        MR_Word ll_backend__layout__V_54_54;

#line 212 "layout.m"
                                                        {
#line 212 "layout.m"
                                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[2], &ll_backend__layout__V_54_54, ((MR_Box) (ll_backend__layout__V_16_16)), ((MR_Box) (ll_backend__layout__V_35_35)));
                                                        }
#line 8040 "ll_backend.layout.c"
                                                        ll_backend__layout__succeeded = (ll_backend__layout__V_54_54 == (MR_Integer) 0);
#line 212 "layout.m"
                                                        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 212 "layout.m"
                                                        if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                                          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_54_54;
#line 212 "layout.m"
                                                        else
#line 212 "layout.m"
                                                          {
#line 212 "layout.m"
                                                            MR_Word ll_backend__layout__V_55_55;

#line 212 "layout.m"
                                                            {
#line 212 "layout.m"
                                                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[2], &ll_backend__layout__V_55_55, ((MR_Box) (ll_backend__layout__V_17_17)), ((MR_Box) (ll_backend__layout__V_36_36)));
                                                            }
#line 8060 "ll_backend.layout.c"
                                                            ll_backend__layout__succeeded = (ll_backend__layout__V_55_55 == (MR_Integer) 0);
#line 212 "layout.m"
                                                            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 212 "layout.m"
                                                            if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                                              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_55_55;
#line 212 "layout.m"
                                                            else
#line 212 "layout.m"
                                                              {
#line 212 "layout.m"
                                                                MR_Word ll_backend__layout__V_56_56;

#line 212 "layout.m"
                                                                {
#line 212 "layout.m"
                                                                  parse_tree__prog_data____Compare____eval_method_0_0(&ll_backend__layout__V_56_56, ll_backend__layout__V_18_18, ll_backend__layout__V_37_37);
                                                                }
#line 8080 "ll_backend.layout.c"
                                                                ll_backend__layout__succeeded = (ll_backend__layout__V_56_56 == (MR_Integer) 0);
#line 212 "layout.m"
                                                                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 212 "layout.m"
                                                                if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                                                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_56_56;
#line 212 "layout.m"
                                                                else
#line 212 "layout.m"
                                                                  {
#line 212 "layout.m"
                                                                    MR_Word ll_backend__layout__V_57_57;

#line 212 "layout.m"
                                                                    {
#line 212 "layout.m"
                                                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[2], &ll_backend__layout__V_57_57, ((MR_Box) (ll_backend__layout__V_19_19)), ((MR_Box) (ll_backend__layout__V_38_38)));
                                                                    }
#line 8100 "ll_backend.layout.c"
                                                                    ll_backend__layout__succeeded = (ll_backend__layout__V_57_57 == (MR_Integer) 0);
#line 212 "layout.m"
                                                                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 212 "layout.m"
                                                                    if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                                                      *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_57_57;
#line 212 "layout.m"
                                                                    else
#line 212 "layout.m"
                                                                      {
#line 212 "layout.m"
                                                                        MR_Word ll_backend__layout__V_58_58;

#line 212 "layout.m"
                                                                        {
#line 212 "layout.m"
                                                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[2], &ll_backend__layout__V_58_58, ((MR_Box) (ll_backend__layout__V_20_20)), ((MR_Box) (ll_backend__layout__V_39_39)));
                                                                        }
#line 8120 "ll_backend.layout.c"
                                                                        ll_backend__layout__succeeded = (ll_backend__layout__V_58_58 == (MR_Integer) 0);
#line 212 "layout.m"
                                                                        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 212 "layout.m"
                                                                        if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                                                          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_58_58;
#line 212 "layout.m"
                                                                        else
#line 212 "layout.m"
                                                                          {
#line 212 "layout.m"
                                                                            MR_Word ll_backend__layout__V_59_59;

#line 212 "layout.m"
                                                                            {
#line 212 "layout.m"
                                                                              libs__trace_params____Compare____trace_level_0_0(&ll_backend__layout__V_59_59, ll_backend__layout__V_21_21, ll_backend__layout__V_40_40);
                                                                            }
#line 8140 "ll_backend.layout.c"
                                                                            ll_backend__layout__succeeded = (ll_backend__layout__V_59_59 == (MR_Integer) 0);
#line 212 "layout.m"
                                                                            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 212 "layout.m"
                                                                            if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                                                              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_59_59;
#line 212 "layout.m"
                                                                            else
#line 212 "layout.m"
                                                                              {
#line 212 "layout.m"
                                                                                mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_22_22, ll_backend__layout__V_41_41);
#line 212 "layout.m"
                                                                                return;
                                                                              }
#line 212 "layout.m"
                                                                          }
#line 212 "layout.m"
                                                                      }
#line 212 "layout.m"
                                                                  }
#line 212 "layout.m"
                                                              }
#line 212 "layout.m"
                                                          }
#line 212 "layout.m"
                                                      }
#line 212 "layout.m"
                                                  }
#line 212 "layout.m"
                                              }
#line 212 "layout.m"
                                          }
#line 212 "layout.m"
                                      }
#line 212 "layout.m"
                                  }
#line 212 "layout.m"
                              }
#line 212 "layout.m"
                          }
#line 212 "layout.m"
                      }
#line 212 "layout.m"
                  }
#line 212 "layout.m"
              }
#line 212 "layout.m"
          }
#line 212 "layout.m"
      }
#line 212 "layout.m"
  }
#line 212 "layout.m"
}

#line 212 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_exec_trace_0_0(
#line 212 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 212 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 212 "layout.m"
{
#line 212 "layout.m"
  {
#line 212 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 212 "layout.m"
    MR_Integer ll_backend__layout__CastX_41 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 212 "layout.m"
    MR_Integer ll_backend__layout__CastY_42 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 212 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_41 == ll_backend__layout__CastY_42);
#line 212 "layout.m"
    if (ll_backend__layout__succeeded)
#line 212 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 212 "layout.m"
    else
#line 212 "layout.m"
      {
#line 212 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_44_44;
#line 212 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_45_45;
#line 212 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_46_46;
#line 212 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_47_47;
#line 212 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_48_48;
#line 212 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_49_49;
#line 212 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_50_50;
#line 212 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_52_52;
#line 212 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_53_53;
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 212 "layout.m"
        MR_Integer ll_backend__layout__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 4)));
#line 212 "layout.m"
        MR_Integer ll_backend__layout__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 5)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 6)));
#line 212 "layout.m"
        MR_Integer ll_backend__layout__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 7)));
#line 212 "layout.m"
        MR_Integer ll_backend__layout__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 8)));
#line 212 "layout.m"
        MR_Integer ll_backend__layout__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 9)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 10)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 11)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 12)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 13)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 14)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 15)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 16)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 17)));
#line 212 "layout.m"
        MR_Integer ll_backend__layout__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 18)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 212 "layout.m"
        MR_Integer ll_backend__layout__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 212 "layout.m"
        MR_Integer ll_backend__layout__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 5)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 6)));
#line 212 "layout.m"
        MR_Integer ll_backend__layout__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 7)));
#line 212 "layout.m"
        MR_Integer ll_backend__layout__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 8)));
#line 212 "layout.m"
        MR_Integer ll_backend__layout__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 9)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 10)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 11)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 12)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 13)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 14)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 15)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 16)));
#line 212 "layout.m"
        MR_Word ll_backend__layout__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 17)));
#line 212 "layout.m"
        MR_Integer ll_backend__layout__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 18)));

#line 8321 "ll_backend.layout.c"
        {
#line 8323 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__layout_scalar_common_1[3], ((MR_Box) (ll_backend__layout__V_3_3)), ((MR_Box) (ll_backend__layout__V_22_22)));
        }
#line 212 "layout.m"
        if (ll_backend__layout__succeeded)
#line 212 "layout.m"
          {
#line 8330 "ll_backend.layout.c"
            {
#line 8332 "ll_backend.layout.c"
              ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_slot_name_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_23_23);
            }
#line 212 "layout.m"
            if (ll_backend__layout__succeeded)
#line 212 "layout.m"
              {
#line 8339 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_24_24);
#line 212 "layout.m"
                if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                  {
#line 8345 "ll_backend.layout.c"
                    ll_backend__layout__TypeInfo_44_44 = (MR_Word) &ll_backend__layout_scalar_common_1[11];
#line 8347 "ll_backend.layout.c"
                    {
#line 8349 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_44_44, ((MR_Box) (ll_backend__layout__V_6_6)), ((MR_Box) (ll_backend__layout__V_25_25)));
                    }
#line 212 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                      {
#line 8356 "ll_backend.layout.c"
                        ll_backend__layout__TypeInfo_45_45 = (MR_Word) &ll_backend__layout_scalar_common_1[3];
#line 8358 "ll_backend.layout.c"
                        {
#line 8360 "ll_backend.layout.c"
                          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_45_45, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_26_26)));
                        }
#line 212 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                          {
#line 8367 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == ll_backend__layout__V_27_27);
#line 212 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                              {
#line 8373 "ll_backend.layout.c"
                                ll_backend__layout__TypeInfo_46_46 = (MR_Word) &ll_backend__layout_scalar_common_1[3];
#line 8375 "ll_backend.layout.c"
                                {
#line 8377 "ll_backend.layout.c"
                                  ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_46_46, ((MR_Box) (ll_backend__layout__V_9_9)), ((MR_Box) (ll_backend__layout__V_28_28)));
                                }
#line 212 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                  {
#line 8384 "ll_backend.layout.c"
                                    ll_backend__layout__succeeded = (ll_backend__layout__V_10_10 == ll_backend__layout__V_29_29);
#line 212 "layout.m"
                                    if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                      {
#line 8390 "ll_backend.layout.c"
                                        ll_backend__layout__succeeded = (ll_backend__layout__V_11_11 == ll_backend__layout__V_30_30);
#line 212 "layout.m"
                                        if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                          {
#line 8396 "ll_backend.layout.c"
                                            ll_backend__layout__succeeded = (ll_backend__layout__V_12_12 == ll_backend__layout__V_31_31);
#line 212 "layout.m"
                                            if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                              {
#line 8402 "ll_backend.layout.c"
                                                ll_backend__layout__TypeInfo_47_47 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 8404 "ll_backend.layout.c"
                                                {
#line 8406 "ll_backend.layout.c"
                                                  ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_47_47, ((MR_Box) (ll_backend__layout__V_13_13)), ((MR_Box) (ll_backend__layout__V_32_32)));
                                                }
#line 212 "layout.m"
                                                if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                                  {
#line 8413 "ll_backend.layout.c"
                                                    ll_backend__layout__TypeInfo_48_48 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 8415 "ll_backend.layout.c"
                                                    {
#line 8417 "ll_backend.layout.c"
                                                      ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_48_48, ((MR_Box) (ll_backend__layout__V_14_14)), ((MR_Box) (ll_backend__layout__V_33_33)));
                                                    }
#line 212 "layout.m"
                                                    if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                                      {
#line 8424 "ll_backend.layout.c"
                                                        ll_backend__layout__TypeInfo_49_49 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 8426 "ll_backend.layout.c"
                                                        {
#line 8428 "ll_backend.layout.c"
                                                          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_49_49, ((MR_Box) (ll_backend__layout__V_15_15)), ((MR_Box) (ll_backend__layout__V_34_34)));
                                                        }
#line 212 "layout.m"
                                                        if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                                          {
#line 8435 "ll_backend.layout.c"
                                                            ll_backend__layout__TypeInfo_50_50 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 8437 "ll_backend.layout.c"
                                                            {
#line 8439 "ll_backend.layout.c"
                                                              ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_50_50, ((MR_Box) (ll_backend__layout__V_16_16)), ((MR_Box) (ll_backend__layout__V_35_35)));
                                                            }
#line 212 "layout.m"
                                                            if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                                              {
#line 8446 "ll_backend.layout.c"
                                                                {
#line 8448 "ll_backend.layout.c"
                                                                  ll_backend__layout__succeeded = parse_tree__prog_data____Unify____eval_method_0_0(ll_backend__layout__V_17_17, ll_backend__layout__V_36_36);
                                                                }
#line 212 "layout.m"
                                                                if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                                                  {
#line 8455 "ll_backend.layout.c"
                                                                    ll_backend__layout__TypeInfo_52_52 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 8457 "ll_backend.layout.c"
                                                                    {
#line 8459 "ll_backend.layout.c"
                                                                      ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_52_52, ((MR_Box) (ll_backend__layout__V_18_18)), ((MR_Box) (ll_backend__layout__V_37_37)));
                                                                    }
#line 212 "layout.m"
                                                                    if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                                                      {
#line 8466 "ll_backend.layout.c"
                                                                        ll_backend__layout__TypeInfo_53_53 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 8468 "ll_backend.layout.c"
                                                                        {
#line 8470 "ll_backend.layout.c"
                                                                          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_53_53, ((MR_Box) (ll_backend__layout__V_19_19)), ((MR_Box) (ll_backend__layout__V_38_38)));
                                                                        }
#line 212 "layout.m"
                                                                        if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                                                          {
#line 8477 "ll_backend.layout.c"
                                                                            {
#line 8479 "ll_backend.layout.c"
                                                                              ll_backend__layout__succeeded = libs__trace_params____Unify____trace_level_0_0(ll_backend__layout__V_20_20, ll_backend__layout__V_39_39);
                                                                            }
#line 212 "layout.m"
                                                                            if (ll_backend__layout__succeeded)
#line 8484 "ll_backend.layout.c"
                                                                              ll_backend__layout__succeeded = (ll_backend__layout__V_21_21 == ll_backend__layout__V_40_40);
#line 212 "layout.m"
                                                                          }
#line 212 "layout.m"
                                                                      }
#line 212 "layout.m"
                                                                  }
#line 212 "layout.m"
                                                              }
#line 212 "layout.m"
                                                          }
#line 212 "layout.m"
                                                      }
#line 212 "layout.m"
                                                  }
#line 212 "layout.m"
                                              }
#line 212 "layout.m"
                                          }
#line 212 "layout.m"
                                      }
#line 212 "layout.m"
                                  }
#line 212 "layout.m"
                              }
#line 212 "layout.m"
                          }
#line 212 "layout.m"
                      }
#line 212 "layout.m"
                  }
#line 212 "layout.m"
              }
#line 212 "layout.m"
          }
#line 212 "layout.m"
      }
#line 212 "layout.m"
    return ll_backend__layout__succeeded;
#line 212 "layout.m"
  }
#line 212 "layout.m"
}

#line 262 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____proc_layout_data_0_0(
#line 262 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 262 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 262 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 262 "layout.m"
{
#line 262 "layout.m"
  {
#line 262 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 262 "layout.m"
    MR_Integer ll_backend__layout__CastX_12 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 262 "layout.m"
    MR_Integer ll_backend__layout__CastY_13 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 262 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_12 == ll_backend__layout__CastY_13);
#line 262 "layout.m"
    if (ll_backend__layout__succeeded)
#line 8553 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 262 "layout.m"
    else
#line 262 "layout.m"
      {
#line 262 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 262 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 262 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 262 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 262 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 262 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 262 "layout.m"
        MR_Word ll_backend__layout__V_10_10;

#line 262 "layout.m"
        {
#line 262 "layout.m"
          hlds__hlds_rtti____Compare____rtti_proc_label_0_0(&ll_backend__layout__V_10_10, ll_backend__layout__V_4_4, ll_backend__layout__V_7_7);
        }
#line 8579 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_10_10 == (MR_Integer) 0);
#line 262 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 262 "layout.m"
        if (ll_backend__layout__succeeded)
#line 262 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_10_10;
#line 262 "layout.m"
        else
#line 262 "layout.m"
          {
#line 262 "layout.m"
            MR_Word ll_backend__layout__V_11_11;

#line 262 "layout.m"
            {
#line 262 "layout.m"
              ll_backend__layout____Compare____proc_layout_stack_traversal_0_0(&ll_backend__layout__V_11_11, ll_backend__layout__V_5_5, ll_backend__layout__V_8_8);
            }
#line 8599 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_11_11 == (MR_Integer) 0);
#line 262 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 262 "layout.m"
            if (ll_backend__layout__succeeded)
#line 262 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_11_11;
#line 262 "layout.m"
            else
#line 262 "layout.m"
              {
#line 262 "layout.m"
                ll_backend__layout____Compare____maybe_proc_id_and_more_0_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_6_6, ll_backend__layout__V_9_9);
#line 262 "layout.m"
                return;
              }
#line 262 "layout.m"
          }
#line 262 "layout.m"
      }
#line 262 "layout.m"
  }
#line 262 "layout.m"
}

#line 262 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_data_0_0(
#line 262 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 262 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 262 "layout.m"
{
#line 262 "layout.m"
  {
#line 262 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 262 "layout.m"
    MR_Integer ll_backend__layout__CastX_9 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 262 "layout.m"
    MR_Integer ll_backend__layout__CastY_10 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 262 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_9 == ll_backend__layout__CastY_10);
#line 262 "layout.m"
    if (ll_backend__layout__succeeded)
#line 262 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 262 "layout.m"
    else
#line 262 "layout.m"
      {
#line 262 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 262 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 262 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 262 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 262 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 262 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));

#line 8666 "ll_backend.layout.c"
        {
#line 8668 "ll_backend.layout.c"
          ll_backend__layout__succeeded = hlds__hlds_rtti____Unify____rtti_proc_label_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_6_6);
        }
#line 262 "layout.m"
        if (ll_backend__layout__succeeded)
#line 262 "layout.m"
          {
#line 8675 "ll_backend.layout.c"
            {
#line 8677 "ll_backend.layout.c"
              ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_stack_traversal_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_7_7);
            }
#line 262 "layout.m"
            if (ll_backend__layout__succeeded)
#line 8682 "ll_backend.layout.c"
              {
#line 8684 "ll_backend.layout.c"
                return ll_backend__layout__succeeded = ll_backend__layout____Unify____maybe_proc_id_and_more_0_0(ll_backend__layout__V_5_5, ll_backend__layout__V_8_8);
              }
#line 262 "layout.m"
          }
#line 262 "layout.m"
      }
#line 262 "layout.m"
    return ll_backend__layout__succeeded;
#line 262 "layout.m"
  }
#line 262 "layout.m"
}

#line 311 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____module_layout_deep_prof_0_0(
#line 311 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 311 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 311 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 311 "layout.m"
{
#line 311 "layout.m"
  {
#line 311 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 311 "layout.m"
    MR_Integer ll_backend__layout__CastX_15 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 311 "layout.m"
    MR_Integer ll_backend__layout__CastY_16 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 311 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_15 == ll_backend__layout__CastY_16);
#line 311 "layout.m"
    if (ll_backend__layout__succeeded)
#line 8722 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 311 "layout.m"
    else
#line 311 "layout.m"
      {
#line 311 "layout.m"
        MR_Integer ll_backend__layout__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 311 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 311 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 311 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 311 "layout.m"
        MR_Integer ll_backend__layout__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 311 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 311 "layout.m"
        MR_Integer ll_backend__layout__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 311 "layout.m"
        MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 311 "layout.m"
        MR_Word ll_backend__layout__V_12_12;

#line 311 "layout.m"
        {
#line 311 "layout.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_12_12, ll_backend__layout__V_4_4, ll_backend__layout__V_8_8);
        }
#line 8752 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_12_12 == (MR_Integer) 0);
#line 311 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 311 "layout.m"
        if (ll_backend__layout__succeeded)
#line 311 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_12_12;
#line 311 "layout.m"
        else
#line 311 "layout.m"
          {
#line 311 "layout.m"
            MR_Word ll_backend__layout__V_13_13;

#line 311 "layout.m"
            {
#line 311 "layout.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[10], &ll_backend__layout__V_13_13, ((MR_Box) (ll_backend__layout__V_5_5)), ((MR_Box) (ll_backend__layout__V_9_9)));
            }
#line 8772 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_13_13 == (MR_Integer) 0);
#line 311 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 311 "layout.m"
            if (ll_backend__layout__succeeded)
#line 311 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_13_13;
#line 311 "layout.m"
            else
#line 311 "layout.m"
              {
#line 311 "layout.m"
                MR_Word ll_backend__layout__V_14_14;

#line 311 "layout.m"
                {
#line 311 "layout.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_14_14, ll_backend__layout__V_6_6, ll_backend__layout__V_10_10);
                }
#line 8792 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_14_14 == (MR_Integer) 0);
#line 311 "layout.m"
                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 311 "layout.m"
                if (ll_backend__layout__succeeded)
#line 311 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_14_14;
#line 311 "layout.m"
                else
#line 311 "layout.m"
                  {
#line 311 "layout.m"
                    {
#line 311 "layout.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[10], ll_backend__layout__HeadVar__1_1, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_11_11)));
#line 311 "layout.m"
                      return;
                    }
#line 311 "layout.m"
                  }
#line 311 "layout.m"
              }
#line 311 "layout.m"
          }
#line 311 "layout.m"
      }
#line 311 "layout.m"
  }
#line 311 "layout.m"
}

#line 311 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_deep_prof_0_0(
#line 311 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 311 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 311 "layout.m"
{
#line 311 "layout.m"
  {
#line 311 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 311 "layout.m"
    MR_Integer ll_backend__layout__CastX_11 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 311 "layout.m"
    MR_Integer ll_backend__layout__CastY_12 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 311 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_11 == ll_backend__layout__CastY_12);
#line 311 "layout.m"
    if (ll_backend__layout__succeeded)
#line 311 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 311 "layout.m"
    else
#line 311 "layout.m"
      {
#line 311 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_13_13;
#line 311 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_14_14;
#line 311 "layout.m"
        MR_Integer ll_backend__layout__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 311 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 311 "layout.m"
        MR_Integer ll_backend__layout__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 311 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 311 "layout.m"
        MR_Integer ll_backend__layout__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 311 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 311 "layout.m"
        MR_Integer ll_backend__layout__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 311 "layout.m"
        MR_Word ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));

#line 8873 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_3_3 == ll_backend__layout__V_7_7);
#line 311 "layout.m"
        if (ll_backend__layout__succeeded)
#line 311 "layout.m"
          {
#line 8879 "ll_backend.layout.c"
            ll_backend__layout__TypeInfo_13_13 = (MR_Word) &ll_backend__layout_scalar_common_1[10];
#line 8881 "ll_backend.layout.c"
            {
#line 8883 "ll_backend.layout.c"
              ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_13_13, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_8_8)));
            }
#line 311 "layout.m"
            if (ll_backend__layout__succeeded)
#line 311 "layout.m"
              {
#line 8890 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_9_9);
#line 311 "layout.m"
                if (ll_backend__layout__succeeded)
#line 311 "layout.m"
                  {
#line 8896 "ll_backend.layout.c"
                    ll_backend__layout__TypeInfo_14_14 = (MR_Word) &ll_backend__layout_scalar_common_1[10];
#line 8898 "ll_backend.layout.c"
                    {
#line 8900 "ll_backend.layout.c"
                      return ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_14_14, ((MR_Box) (ll_backend__layout__V_6_6)), ((MR_Box) (ll_backend__layout__V_10_10)));
                    }
#line 311 "layout.m"
                  }
#line 311 "layout.m"
              }
#line 311 "layout.m"
          }
#line 311 "layout.m"
      }
#line 311 "layout.m"
    return ll_backend__layout__succeeded;
#line 311 "layout.m"
  }
#line 311 "layout.m"
}

#line 320 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____module_layout_debug_0_0(
#line 320 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 320 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 320 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 320 "layout.m"
{
#line 320 "layout.m"
  {
#line 320 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 320 "layout.m"
    MR_Integer ll_backend__layout__CastX_21 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 320 "layout.m"
    MR_Integer ll_backend__layout__CastY_22 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 320 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_21 == ll_backend__layout__CastY_22);
#line 320 "layout.m"
    if (ll_backend__layout__succeeded)
#line 8942 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 320 "layout.m"
    else
#line 320 "layout.m"
      {
#line 320 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 320 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 320 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 320 "layout.m"
        MR_Integer ll_backend__layout__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 320 "layout.m"
        MR_Integer ll_backend__layout__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 320 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 5)));
#line 320 "layout.m"
        MR_Word ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 320 "layout.m"
        MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 320 "layout.m"
        MR_Word ll_backend__layout__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 320 "layout.m"
        MR_Integer ll_backend__layout__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 320 "layout.m"
        MR_Integer ll_backend__layout__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 4)));
#line 320 "layout.m"
        MR_Word ll_backend__layout__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 5)));
#line 320 "layout.m"
        MR_Word ll_backend__layout__V_16_16;

#line 320 "layout.m"
        {
#line 320 "layout.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[7], &ll_backend__layout__V_16_16, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_10_10)));
        }
#line 8980 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_16_16 == (MR_Integer) 0);
#line 320 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 320 "layout.m"
        if (ll_backend__layout__succeeded)
#line 320 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_16_16;
#line 320 "layout.m"
        else
#line 320 "layout.m"
          {
#line 320 "layout.m"
            MR_Word ll_backend__layout__V_17_17;

#line 320 "layout.m"
            {
#line 320 "layout.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[8], &ll_backend__layout__V_17_17, ((MR_Box) (ll_backend__layout__V_5_5)), ((MR_Box) (ll_backend__layout__V_11_11)));
            }
#line 9000 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_17_17 == (MR_Integer) 0);
#line 320 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 320 "layout.m"
            if (ll_backend__layout__succeeded)
#line 320 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_17_17;
#line 320 "layout.m"
            else
#line 320 "layout.m"
              {
#line 320 "layout.m"
                MR_Word ll_backend__layout__V_18_18;

#line 320 "layout.m"
                {
#line 320 "layout.m"
                  libs__trace_params____Compare____trace_level_0_0(&ll_backend__layout__V_18_18, ll_backend__layout__V_6_6, ll_backend__layout__V_12_12);
                }
#line 9020 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_18_18 == (MR_Integer) 0);
#line 320 "layout.m"
                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 320 "layout.m"
                if (ll_backend__layout__succeeded)
#line 320 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_18_18;
#line 320 "layout.m"
                else
#line 320 "layout.m"
                  {
#line 320 "layout.m"
                    MR_Word ll_backend__layout__V_19_19;

#line 320 "layout.m"
                    {
#line 320 "layout.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_19_19, ll_backend__layout__V_7_7, ll_backend__layout__V_13_13);
                    }
#line 9040 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_19_19 == (MR_Integer) 0);
#line 320 "layout.m"
                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 320 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 320 "layout.m"
                      *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_19_19;
#line 320 "layout.m"
                    else
#line 320 "layout.m"
                      {
#line 320 "layout.m"
                        MR_Word ll_backend__layout__V_20_20;

#line 320 "layout.m"
                        {
#line 320 "layout.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_20_20, ll_backend__layout__V_8_8, ll_backend__layout__V_14_14);
                        }
#line 9060 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (ll_backend__layout__V_20_20 == (MR_Integer) 0);
#line 320 "layout.m"
                        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 320 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 320 "layout.m"
                          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_20_20;
#line 320 "layout.m"
                        else
#line 320 "layout.m"
                          {
#line 320 "layout.m"
                            {
#line 320 "layout.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[9], ll_backend__layout__HeadVar__1_1, ((MR_Box) (ll_backend__layout__V_9_9)), ((MR_Box) (ll_backend__layout__V_15_15)));
#line 320 "layout.m"
                              return;
                            }
#line 320 "layout.m"
                          }
#line 320 "layout.m"
                      }
#line 320 "layout.m"
                  }
#line 320 "layout.m"
              }
#line 320 "layout.m"
          }
#line 320 "layout.m"
      }
#line 320 "layout.m"
  }
#line 320 "layout.m"
}

#line 320 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_debug_0_0(
#line 320 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 320 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 320 "layout.m"
{
#line 320 "layout.m"
  {
#line 320 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 320 "layout.m"
    MR_Integer ll_backend__layout__CastX_15 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 320 "layout.m"
    MR_Integer ll_backend__layout__CastY_16 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 320 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_15 == ll_backend__layout__CastY_16);
#line 320 "layout.m"
    if (ll_backend__layout__succeeded)
#line 320 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 320 "layout.m"
    else
#line 320 "layout.m"
      {
#line 320 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_18_18;
#line 320 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_20_20;
#line 320 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 320 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 320 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 320 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 320 "layout.m"
        MR_Integer ll_backend__layout__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 4)));
#line 320 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 5)));
#line 320 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 320 "layout.m"
        MR_Word ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 320 "layout.m"
        MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 320 "layout.m"
        MR_Integer ll_backend__layout__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 320 "layout.m"
        MR_Integer ll_backend__layout__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 320 "layout.m"
        MR_Word ll_backend__layout__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 5)));

#line 9153 "ll_backend.layout.c"
        {
#line 9155 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__layout_scalar_common_1[7], ((MR_Box) (ll_backend__layout__V_3_3)), ((MR_Box) (ll_backend__layout__V_9_9)));
        }
#line 320 "layout.m"
        if (ll_backend__layout__succeeded)
#line 320 "layout.m"
          {
#line 9162 "ll_backend.layout.c"
            ll_backend__layout__TypeInfo_18_18 = (MR_Word) &ll_backend__layout_scalar_common_1[8];
#line 9164 "ll_backend.layout.c"
            {
#line 9166 "ll_backend.layout.c"
              ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_18_18, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_10_10)));
            }
#line 320 "layout.m"
            if (ll_backend__layout__succeeded)
#line 320 "layout.m"
              {
#line 9173 "ll_backend.layout.c"
                {
#line 9175 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = libs__trace_params____Unify____trace_level_0_0(ll_backend__layout__V_5_5, ll_backend__layout__V_11_11);
                }
#line 320 "layout.m"
                if (ll_backend__layout__succeeded)
#line 320 "layout.m"
                  {
#line 9182 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_6_6 == ll_backend__layout__V_12_12);
#line 320 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 320 "layout.m"
                      {
#line 9188 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (ll_backend__layout__V_7_7 == ll_backend__layout__V_13_13);
#line 320 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 320 "layout.m"
                          {
#line 9194 "ll_backend.layout.c"
                            ll_backend__layout__TypeInfo_20_20 = (MR_Word) &ll_backend__layout_scalar_common_1[9];
#line 9196 "ll_backend.layout.c"
                            {
#line 9198 "ll_backend.layout.c"
                              return ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_20_20, ((MR_Box) (ll_backend__layout__V_8_8)), ((MR_Box) (ll_backend__layout__V_14_14)));
                            }
#line 320 "layout.m"
                          }
#line 320 "layout.m"
                      }
#line 320 "layout.m"
                  }
#line 320 "layout.m"
              }
#line 320 "layout.m"
          }
#line 320 "layout.m"
      }
#line 320 "layout.m"
    return ll_backend__layout__succeeded;
#line 320 "layout.m"
  }
#line 320 "layout.m"
}

#line 297 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____module_layout_data_0_0(
#line 297 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 297 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 297 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 297 "layout.m"
{
#line 297 "layout.m"
  {
#line 297 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 297 "layout.m"
    MR_Integer ll_backend__layout__CastX_18 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 297 "layout.m"
    MR_Integer ll_backend__layout__CastY_19 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 297 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_18 == ll_backend__layout__CastY_19);
#line 297 "layout.m"
    if (ll_backend__layout__succeeded)
#line 9244 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 297 "layout.m"
    else
#line 297 "layout.m"
      {
#line 297 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 297 "layout.m"
        MR_Integer ll_backend__layout__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 297 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 297 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 297 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 297 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 297 "layout.m"
        MR_Integer ll_backend__layout__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 297 "layout.m"
        MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 297 "layout.m"
        MR_Word ll_backend__layout__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 297 "layout.m"
        MR_Word ll_backend__layout__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 4)));
#line 297 "layout.m"
        MR_Word ll_backend__layout__V_14_14;

#line 297 "layout.m"
        {
#line 297 "layout.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&ll_backend__layout__V_14_14, ll_backend__layout__V_4_4, ll_backend__layout__V_9_9);
        }
#line 9278 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_14_14 == (MR_Integer) 0);
#line 297 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 297 "layout.m"
        if (ll_backend__layout__succeeded)
#line 297 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_14_14;
#line 297 "layout.m"
        else
#line 297 "layout.m"
          {
#line 297 "layout.m"
            MR_Word ll_backend__layout__V_15_15;

#line 297 "layout.m"
            {
#line 297 "layout.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_15_15, ll_backend__layout__V_5_5, ll_backend__layout__V_10_10);
            }
#line 9298 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_15_15 == (MR_Integer) 0);
#line 297 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 297 "layout.m"
            if (ll_backend__layout__succeeded)
#line 297 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_15_15;
#line 297 "layout.m"
            else
#line 297 "layout.m"
              {
#line 297 "layout.m"
                MR_Word ll_backend__layout__V_16_16;

#line 297 "layout.m"
                {
#line 297 "layout.m"
                  ll_backend__layout____Compare____string_with_0s_0_0(&ll_backend__layout__V_16_16, ll_backend__layout__V_6_6, ll_backend__layout__V_11_11);
                }
#line 9318 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_16_16 == (MR_Integer) 0);
#line 297 "layout.m"
                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 297 "layout.m"
                if (ll_backend__layout__succeeded)
#line 297 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_16_16;
#line 297 "layout.m"
                else
#line 297 "layout.m"
                  {
#line 297 "layout.m"
                    MR_Word ll_backend__layout__V_17_17;

#line 297 "layout.m"
                    {
#line 297 "layout.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[5], &ll_backend__layout__V_17_17, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_12_12)));
                    }
#line 9338 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_17_17 == (MR_Integer) 0);
#line 297 "layout.m"
                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 297 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 297 "layout.m"
                      *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_17_17;
#line 297 "layout.m"
                    else
#line 297 "layout.m"
                      {
#line 297 "layout.m"
                        {
#line 297 "layout.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[6], ll_backend__layout__HeadVar__1_1, ((MR_Box) (ll_backend__layout__V_8_8)), ((MR_Box) (ll_backend__layout__V_13_13)));
#line 297 "layout.m"
                          return;
                        }
#line 297 "layout.m"
                      }
#line 297 "layout.m"
                  }
#line 297 "layout.m"
              }
#line 297 "layout.m"
          }
#line 297 "layout.m"
      }
#line 297 "layout.m"
  }
#line 297 "layout.m"
}

#line 297 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_data_0_0(
#line 297 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 297 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 297 "layout.m"
{
#line 297 "layout.m"
  {
#line 297 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 297 "layout.m"
    MR_Integer ll_backend__layout__CastX_13 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 297 "layout.m"
    MR_Integer ll_backend__layout__CastY_14 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 297 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_13 == ll_backend__layout__CastY_14);
#line 297 "layout.m"
    if (ll_backend__layout__succeeded)
#line 297 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 297 "layout.m"
    else
#line 297 "layout.m"
      {
#line 297 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_16_16;
#line 297 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_17_17;
#line 297 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 297 "layout.m"
        MR_Integer ll_backend__layout__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 297 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 297 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 297 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 4)));
#line 297 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 297 "layout.m"
        MR_Integer ll_backend__layout__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 297 "layout.m"
        MR_Word ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 297 "layout.m"
        MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 297 "layout.m"
        MR_Word ll_backend__layout__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));

#line 9425 "ll_backend.layout.c"
        {
#line 9427 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_8_8);
        }
#line 297 "layout.m"
        if (ll_backend__layout__succeeded)
#line 297 "layout.m"
          {
#line 9434 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 == ll_backend__layout__V_9_9);
#line 297 "layout.m"
            if (ll_backend__layout__succeeded)
#line 297 "layout.m"
              {
#line 9440 "ll_backend.layout.c"
                {
#line 9442 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = ll_backend__layout____Unify____string_with_0s_0_0(ll_backend__layout__V_5_5, ll_backend__layout__V_10_10);
                }
#line 297 "layout.m"
                if (ll_backend__layout__succeeded)
#line 297 "layout.m"
                  {
#line 9449 "ll_backend.layout.c"
                    ll_backend__layout__TypeInfo_16_16 = (MR_Word) &ll_backend__layout_scalar_common_1[5];
#line 9451 "ll_backend.layout.c"
                    {
#line 9453 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_16_16, ((MR_Box) (ll_backend__layout__V_6_6)), ((MR_Box) (ll_backend__layout__V_11_11)));
                    }
#line 297 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 297 "layout.m"
                      {
#line 9460 "ll_backend.layout.c"
                        ll_backend__layout__TypeInfo_17_17 = (MR_Word) &ll_backend__layout_scalar_common_1[6];
#line 9462 "ll_backend.layout.c"
                        {
#line 9464 "ll_backend.layout.c"
                          return ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_17_17, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_12_12)));
                        }
#line 297 "layout.m"
                      }
#line 297 "layout.m"
                  }
#line 297 "layout.m"
              }
#line 297 "layout.m"
          }
#line 297 "layout.m"
      }
#line 297 "layout.m"
    return ll_backend__layout__succeeded;
#line 297 "layout.m"
  }
#line 297 "layout.m"
}

#line 249 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____maybe_proc_id_and_more_0_0(
#line 249 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 249 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 249 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 249 "layout.m"
{
#line 249 "layout.m"
  {
#line 249 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 249 "layout.m"
    MR_Integer ll_backend__layout__CastX_23 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 249 "layout.m"
    MR_Integer ll_backend__layout__CastY_24 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 249 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_23 == ll_backend__layout__CastY_24);
#line 249 "layout.m"
    if (ll_backend__layout__succeeded)
#line 9508 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 249 "layout.m"
    else
#line 249 "layout.m"
      if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 249 "layout.m"
        if ((ll_backend__layout__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 249 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 249 "layout.m"
        else
#line 9520 "ll_backend.layout.c"
          *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 1;
#line 249 "layout.m"
      else
#line 249 "layout.m"
        {
#line 249 "layout.m"
          MR_Word ll_backend__layout__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 249 "layout.m"
          MR_Word ll_backend__layout__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 249 "layout.m"
          MR_Word ll_backend__layout__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 249 "layout.m"
          MR_Word ll_backend__layout__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));

#line 249 "layout.m"
          if ((ll_backend__layout__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 9537 "ll_backend.layout.c"
            *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 2;
#line 249 "layout.m"
          else
#line 249 "layout.m"
            {
#line 249 "layout.m"
              MR_Word ll_backend__layout__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 249 "layout.m"
              MR_Word ll_backend__layout__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 249 "layout.m"
              MR_Word ll_backend__layout__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 249 "layout.m"
              MR_Word ll_backend__layout__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 249 "layout.m"
              MR_Word ll_backend__layout__V_20_20;

#line 249 "layout.m"
              {
#line 249 "layout.m"
                mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[3], &ll_backend__layout__V_20_20, ((MR_Box) (ll_backend__layout__V_32_32)), ((MR_Box) (ll_backend__layout__V_16_16)));
              }
#line 9559 "ll_backend.layout.c"
              ll_backend__layout__succeeded = (ll_backend__layout__V_20_20 == (MR_Integer) 0);
#line 249 "layout.m"
              ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 249 "layout.m"
              if (ll_backend__layout__succeeded)
#line 249 "layout.m"
                *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_20_20;
#line 249 "layout.m"
              else
#line 249 "layout.m"
                {
#line 249 "layout.m"
                  MR_Word ll_backend__layout__V_21_21;

#line 249 "layout.m"
                  {
#line 249 "layout.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[3], &ll_backend__layout__V_21_21, ((MR_Box) (ll_backend__layout__V_31_31)), ((MR_Box) (ll_backend__layout__V_17_17)));
                  }
#line 9579 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = (ll_backend__layout__V_21_21 == (MR_Integer) 0);
#line 249 "layout.m"
                  ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 249 "layout.m"
                  if (ll_backend__layout__succeeded)
#line 249 "layout.m"
                    *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_21_21;
#line 249 "layout.m"
                  else
#line 249 "layout.m"
                    {
#line 249 "layout.m"
                      MR_Word ll_backend__layout__V_22_22;

#line 249 "layout.m"
                      {
#line 249 "layout.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[3], &ll_backend__layout__V_22_22, ((MR_Box) (ll_backend__layout__V_30_30)), ((MR_Box) (ll_backend__layout__V_18_18)));
                      }
#line 9599 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = (ll_backend__layout__V_22_22 == (MR_Integer) 0);
#line 249 "layout.m"
                      ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 249 "layout.m"
                      if (ll_backend__layout__succeeded)
#line 249 "layout.m"
                        *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_22_22;
#line 249 "layout.m"
                      else
#line 249 "layout.m"
                        {
#line 249 "layout.m"
                          ll_backend__layout____Compare____layout_name_0_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_29_29, ll_backend__layout__V_19_19);
#line 249 "layout.m"
                          return;
                        }
#line 249 "layout.m"
                    }
#line 249 "layout.m"
                }
#line 249 "layout.m"
            }
#line 249 "layout.m"
        }
#line 249 "layout.m"
  }
#line 249 "layout.m"
}

#line 249 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____maybe_proc_id_and_more_0_0(
#line 249 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 249 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 249 "layout.m"
{
#line 249 "layout.m"
  {
#line 249 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 249 "layout.m"
    MR_Integer ll_backend__layout__CastX_13 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 249 "layout.m"
    MR_Integer ll_backend__layout__CastY_14 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 249 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_13 == ll_backend__layout__CastY_14);
#line 249 "layout.m"
    if (ll_backend__layout__succeeded)
#line 249 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 249 "layout.m"
    else
#line 249 "layout.m"
      if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 249 "layout.m"
        {
#line 249 "layout.m"
          MR_Integer ll_backend__layout__CastX_3 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 249 "layout.m"
          MR_Integer ll_backend__layout__CastY_4 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 249 "layout.m"
          ll_backend__layout__succeeded = (ll_backend__layout__CastY_4 == ll_backend__layout__CastX_3);
#line 249 "layout.m"
        }
#line 249 "layout.m"
      else
#line 249 "layout.m"
        {
#line 249 "layout.m"
          MR_Word ll_backend__layout__TypeInfo_15_15;
#line 249 "layout.m"
          MR_Word ll_backend__layout__TypeInfo_16_16;
#line 249 "layout.m"
          MR_Word ll_backend__layout__TypeInfo_17_17;
#line 249 "layout.m"
          MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 249 "layout.m"
          MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 249 "layout.m"
          MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 249 "layout.m"
          MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 249 "layout.m"
          MR_Word ll_backend__layout__V_9_9;
#line 249 "layout.m"
          MR_Word ll_backend__layout__V_10_10;
#line 249 "layout.m"
          MR_Word ll_backend__layout__V_11_11;
#line 249 "layout.m"
          MR_Word ll_backend__layout__V_12_12;

#line 249 "layout.m"
          ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 249 "layout.m"
          if (ll_backend__layout__succeeded)
#line 249 "layout.m"
            {
#line 249 "layout.m"
              ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 249 "layout.m"
              ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 249 "layout.m"
              ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 249 "layout.m"
              ll_backend__layout__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 9709 "ll_backend.layout.c"
              ll_backend__layout__TypeInfo_15_15 = (MR_Word) &ll_backend__layout_scalar_common_1[3];
#line 9711 "ll_backend.layout.c"
              {
#line 9713 "ll_backend.layout.c"
                ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_15_15, ((MR_Box) (ll_backend__layout__V_5_5)), ((MR_Box) (ll_backend__layout__V_9_9)));
              }
#line 249 "layout.m"
              if (ll_backend__layout__succeeded)
#line 249 "layout.m"
                {
#line 9720 "ll_backend.layout.c"
                  ll_backend__layout__TypeInfo_16_16 = (MR_Word) &ll_backend__layout_scalar_common_1[3];
#line 9722 "ll_backend.layout.c"
                  {
#line 9724 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_16_16, ((MR_Box) (ll_backend__layout__V_6_6)), ((MR_Box) (ll_backend__layout__V_10_10)));
                  }
#line 249 "layout.m"
                  if (ll_backend__layout__succeeded)
#line 249 "layout.m"
                    {
#line 9731 "ll_backend.layout.c"
                      ll_backend__layout__TypeInfo_17_17 = (MR_Word) &ll_backend__layout_scalar_common_1[3];
#line 9733 "ll_backend.layout.c"
                      {
#line 9735 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_17_17, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_11_11)));
                      }
#line 249 "layout.m"
                      if (ll_backend__layout__succeeded)
#line 9740 "ll_backend.layout.c"
                        {
#line 9742 "ll_backend.layout.c"
                          return ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_name_0_0(ll_backend__layout__V_8_8, ll_backend__layout__V_12_12);
                        }
#line 249 "layout.m"
                    }
#line 249 "layout.m"
                }
#line 249 "layout.m"
            }
#line 249 "layout.m"
        }
#line 249 "layout.m"
    return ll_backend__layout__succeeded;
#line 249 "layout.m"
  }
#line 249 "layout.m"
}

#line 355 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____layout_slot_name_0_0(
#line 355 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 355 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 355 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 355 "layout.m"
{
#line 355 "layout.m"
  {
#line 355 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 355 "layout.m"
    MR_Integer ll_backend__layout__CastX_9 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 355 "layout.m"
    MR_Integer ll_backend__layout__CastY_10 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 355 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_9 == ll_backend__layout__CastY_10);
#line 355 "layout.m"
    if (ll_backend__layout__succeeded)
#line 9784 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 355 "layout.m"
    else
#line 355 "layout.m"
      {
#line 355 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 355 "layout.m"
        MR_Integer ll_backend__layout__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 355 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 355 "layout.m"
        MR_Integer ll_backend__layout__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 355 "layout.m"
        MR_Word ll_backend__layout__V_8_8;

#line 355 "layout.m"
        {
#line 355 "layout.m"
          ll_backend__layout____Compare____layout_array_name_0_0(&ll_backend__layout__V_8_8, ll_backend__layout__V_4_4, ll_backend__layout__V_6_6);
        }
#line 9806 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == (MR_Integer) 0);
#line 355 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 355 "layout.m"
        if (ll_backend__layout__succeeded)
#line 355 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_8_8;
#line 355 "layout.m"
        else
#line 355 "layout.m"
          {
#line 355 "layout.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_5_5, ll_backend__layout__V_7_7);
#line 355 "layout.m"
            return;
          }
#line 355 "layout.m"
      }
#line 355 "layout.m"
  }
#line 355 "layout.m"
}

#line 355 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____layout_slot_name_0_0(
#line 355 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 355 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 355 "layout.m"
{
#line 355 "layout.m"
  {
#line 355 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 355 "layout.m"
    MR_Integer ll_backend__layout__CastX_7 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 355 "layout.m"
    MR_Integer ll_backend__layout__CastY_8 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 355 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_7 == ll_backend__layout__CastY_8);
#line 355 "layout.m"
    if (ll_backend__layout__succeeded)
#line 355 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 355 "layout.m"
    else
#line 355 "layout.m"
      {
#line 355 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 355 "layout.m"
        MR_Integer ll_backend__layout__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 355 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 355 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));

#line 9867 "ll_backend.layout.c"
        {
#line 9869 "ll_backend.layout.c"
          ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_array_name_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5);
        }
#line 355 "layout.m"
        if (ll_backend__layout__succeeded)
#line 9874 "ll_backend.layout.c"
          ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 == ll_backend__layout__V_6_6);
#line 355 "layout.m"
      }
#line 355 "layout.m"
    return ll_backend__layout__succeeded;
#line 355 "layout.m"
  }
#line 355 "layout.m"
}

#line 418 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____layout_name_0_0(
#line 418 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 418 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 418 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 418 "layout.m"
{
#line 418 "layout.m"
  {
#line 418 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 418 "layout.m"
    MR_Integer ll_backend__layout__CastX_87 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 418 "layout.m"
    MR_Integer ll_backend__layout__CastY_88 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 418 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_87 == ll_backend__layout__CastY_88);
#line 418 "layout.m"
    if (ll_backend__layout__succeeded)
#line 9909 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 418 "layout.m"
    else
#line 418 "layout.m"
      {
#line 418 "layout.m"
        MR_Integer ll_backend__layout__V_4_4;
#line 418 "layout.m"
        MR_Integer ll_backend__layout__V_5_5;

#line 418 "layout.m"
        {
#line 418 "layout.m"
          ll_backend__layout____Index____layout_name_0_0(ll_backend__layout__HeadVar__2_2, &ll_backend__layout__V_4_4);
        }
#line 418 "layout.m"
        {
#line 418 "layout.m"
          ll_backend__layout____Index____layout_name_0_0(ll_backend__layout__HeadVar__3_3, &ll_backend__layout__V_5_5);
        }
#line 418 "layout.m"
        ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 < ll_backend__layout__V_5_5);
#line 418 "layout.m"
        if (ll_backend__layout__succeeded)
#line 9934 "ll_backend.layout.c"
          *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 1;
#line 418 "layout.m"
        else
#line 418 "layout.m"
          {
#line 418 "layout.m"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 > ll_backend__layout__V_5_5);
#line 418 "layout.m"
            if (ll_backend__layout__succeeded)
#line 9944 "ll_backend.layout.c"
              *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 2;
#line 418 "layout.m"
            else
#line 418 "layout.m"
              {
#line 418 "layout.m"
                MR_Word ll_backend__layout__V_6_6;

#line 418 "layout.m"
                if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 418 "layout.m"
                  {
#line 418 "layout.m"
                    MR_Word ll_backend__layout__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 418 "layout.m"
                    MR_Integer ll_backend__layout__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 418 "layout.m"
                    MR_Word ll_backend__layout__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 418 "layout.m"
                    MR_Word ll_backend__layout__V_15_15;
#line 418 "layout.m"
                    MR_Integer ll_backend__layout__V_16_16;
#line 418 "layout.m"
                    MR_Word ll_backend__layout__V_17_17;
#line 418 "layout.m"
                    MR_Word ll_backend__layout__V_18_18;

#line 418 "layout.m"
                    ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 418 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                      {
#line 418 "layout.m"
                        ll_backend__layout__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 418 "layout.m"
                        ll_backend__layout__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 418 "layout.m"
                        ll_backend__layout__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 418 "layout.m"
                        {
#line 418 "layout.m"
                          mdbcomp__prim_data____Compare____proc_label_0_0(&ll_backend__layout__V_18_18, ll_backend__layout__V_12_12, ll_backend__layout__V_15_15);
                        }
#line 9989 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (ll_backend__layout__V_18_18 == (MR_Integer) 0);
#line 418 "layout.m"
                        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 418 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                          ll_backend__layout__V_6_6 = ll_backend__layout__V_18_18;
#line 418 "layout.m"
                        else
#line 418 "layout.m"
                          {
#line 418 "layout.m"
                            MR_Word ll_backend__layout__V_19_19;

#line 418 "layout.m"
                            {
#line 418 "layout.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_19_19, ll_backend__layout__V_13_13, ll_backend__layout__V_16_16);
                            }
#line 10009 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = (ll_backend__layout__V_19_19 == (MR_Integer) 0);
#line 418 "layout.m"
                            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 418 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                              ll_backend__layout__V_6_6 = ll_backend__layout__V_19_19;
#line 418 "layout.m"
                            else
#line 418 "layout.m"
                              {
#line 418 "layout.m"
                                mdbcomp__prim_data____Compare____proc_label_0_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_14_14, ll_backend__layout__V_17_17);
                              }
#line 418 "layout.m"
                          }
#line 418 "layout.m"
                        ll_backend__layout__succeeded = MR_TRUE;
#line 418 "layout.m"
                      }
#line 418 "layout.m"
                  }
#line 418 "layout.m"
                else
#line 418 "layout.m"
                  if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 418 "layout.m"
                    {
#line 418 "layout.m"
                      MR_Word ll_backend__layout__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 418 "layout.m"
                      MR_Integer ll_backend__layout__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 418 "layout.m"
                      MR_Word ll_backend__layout__V_22_22;
#line 418 "layout.m"
                      MR_Integer ll_backend__layout__V_23_23;
#line 418 "layout.m"
                      MR_Word ll_backend__layout__V_24_24;

#line 418 "layout.m"
                      ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 418 "layout.m"
                      if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                        {
#line 418 "layout.m"
                          ll_backend__layout__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 418 "layout.m"
                          ll_backend__layout__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 418 "layout.m"
                          {
#line 418 "layout.m"
                            mdbcomp__sym_name____Compare____sym_name_0_0(&ll_backend__layout__V_24_24, ll_backend__layout__V_20_20, ll_backend__layout__V_22_22);
                          }
#line 10064 "ll_backend.layout.c"
                          ll_backend__layout__succeeded = (ll_backend__layout__V_24_24 == (MR_Integer) 0);
#line 418 "layout.m"
                          ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 418 "layout.m"
                          if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                            ll_backend__layout__V_6_6 = ll_backend__layout__V_24_24;
#line 418 "layout.m"
                          else
#line 418 "layout.m"
                            {
#line 418 "layout.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_21_21, ll_backend__layout__V_23_23);
                            }
#line 418 "layout.m"
                          ll_backend__layout__succeeded = MR_TRUE;
#line 418 "layout.m"
                        }
#line 418 "layout.m"
                    }
#line 418 "layout.m"
                  else
#line 418 "layout.m"
                    if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 418 "layout.m"
                      {
#line 418 "layout.m"
                        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 418 "layout.m"
                        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 418 "layout.m"
                        MR_Word ll_backend__layout__V_9_9;
#line 418 "layout.m"
                        MR_Word ll_backend__layout__V_10_10;
#line 418 "layout.m"
                        MR_Word ll_backend__layout__V_11_11;

#line 418 "layout.m"
                        ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0)));
#line 418 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                          {
#line 418 "layout.m"
                            ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 418 "layout.m"
                            ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 418 "layout.m"
                            {
#line 418 "layout.m"
                              hlds__hlds_rtti____Compare____rtti_proc_label_0_0(&ll_backend__layout__V_11_11, ll_backend__layout__V_7_7, ll_backend__layout__V_9_9);
                            }
#line 10117 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = (ll_backend__layout__V_11_11 == (MR_Integer) 0);
#line 418 "layout.m"
                            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 418 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                              ll_backend__layout__V_6_6 = ll_backend__layout__V_11_11;
#line 418 "layout.m"
                            else
#line 418 "layout.m"
                              {
#line 418 "layout.m"
                                ll_backend__layout____Compare____proc_layout_kind_0_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_8_8, ll_backend__layout__V_10_10);
                              }
#line 418 "layout.m"
                            ll_backend__layout__succeeded = MR_TRUE;
#line 418 "layout.m"
                          }
#line 418 "layout.m"
                      }
#line 418 "layout.m"
                    else
#line 418 "layout.m"
                      if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 418 "layout.m"
                        {
#line 418 "layout.m"
                          MR_Word ll_backend__layout__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 418 "layout.m"
                          MR_Integer ll_backend__layout__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 418 "layout.m"
                          MR_Word ll_backend__layout__V_32_32;
#line 418 "layout.m"
                          MR_Integer ll_backend__layout__V_33_33;
#line 418 "layout.m"
                          MR_Word ll_backend__layout__V_34_34;

#line 418 "layout.m"
                          ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 418 "layout.m"
                          if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                            {
#line 418 "layout.m"
                              ll_backend__layout__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 418 "layout.m"
                              ll_backend__layout__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 418 "layout.m"
                              {
#line 418 "layout.m"
                                mdbcomp__sym_name____Compare____sym_name_0_0(&ll_backend__layout__V_34_34, ll_backend__layout__V_30_30, ll_backend__layout__V_32_32);
                              }
#line 10170 "ll_backend.layout.c"
                              ll_backend__layout__succeeded = (ll_backend__layout__V_34_34 == (MR_Integer) 0);
#line 418 "layout.m"
                              ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 418 "layout.m"
                              if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                ll_backend__layout__V_6_6 = ll_backend__layout__V_34_34;
#line 418 "layout.m"
                              else
#line 418 "layout.m"
                                {
#line 418 "layout.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_31_31, ll_backend__layout__V_33_33);
                                }
#line 418 "layout.m"
                              ll_backend__layout__succeeded = MR_TRUE;
#line 418 "layout.m"
                            }
#line 418 "layout.m"
                        }
#line 418 "layout.m"
                      else
#line 418 "layout.m"
                        if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 418 "layout.m"
                          {
#line 418 "layout.m"
                            MR_Word ll_backend__layout__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 418 "layout.m"
                            MR_Integer ll_backend__layout__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 418 "layout.m"
                            MR_Word ll_backend__layout__V_27_27;
#line 418 "layout.m"
                            MR_Integer ll_backend__layout__V_28_28;
#line 418 "layout.m"
                            MR_Word ll_backend__layout__V_29_29;

#line 418 "layout.m"
                            ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 418 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                              {
#line 418 "layout.m"
                                ll_backend__layout__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 418 "layout.m"
                                ll_backend__layout__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 418 "layout.m"
                                {
#line 418 "layout.m"
                                  mdbcomp__sym_name____Compare____sym_name_0_0(&ll_backend__layout__V_29_29, ll_backend__layout__V_25_25, ll_backend__layout__V_27_27);
                                }
#line 10223 "ll_backend.layout.c"
                                ll_backend__layout__succeeded = (ll_backend__layout__V_29_29 == (MR_Integer) 0);
#line 418 "layout.m"
                                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 418 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                  ll_backend__layout__V_6_6 = ll_backend__layout__V_29_29;
#line 418 "layout.m"
                                else
#line 418 "layout.m"
                                  {
#line 418 "layout.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_26_26, ll_backend__layout__V_28_28);
                                  }
#line 418 "layout.m"
                                ll_backend__layout__succeeded = MR_TRUE;
#line 418 "layout.m"
                              }
#line 418 "layout.m"
                          }
#line 418 "layout.m"
                        else
#line 418 "layout.m"
                          if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 418 "layout.m"
                            {
#line 418 "layout.m"
                              MR_Word ll_backend__layout__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 418 "layout.m"
                              MR_Word ll_backend__layout__V_86_86;

#line 418 "layout.m"
                              ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 15)));
#line 418 "layout.m"
                              if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                {
#line 418 "layout.m"
                                  ll_backend__layout__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 418 "layout.m"
                                  {
#line 418 "layout.m"
                                    mdbcomp__sym_name____Compare____sym_name_0_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_85_85, ll_backend__layout__V_86_86);
                                  }
#line 418 "layout.m"
                                  ll_backend__layout__succeeded = MR_TRUE;
#line 418 "layout.m"
                                }
#line 418 "layout.m"
                            }
#line 418 "layout.m"
                          else
#line 418 "layout.m"
                            if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 418 "layout.m"
                              {
#line 418 "layout.m"
                                MR_Word ll_backend__layout__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 418 "layout.m"
                                MR_Integer ll_backend__layout__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 418 "layout.m"
                                MR_Word ll_backend__layout__V_50_50;
#line 418 "layout.m"
                                MR_Integer ll_backend__layout__V_51_51;
#line 418 "layout.m"
                                MR_Word ll_backend__layout__V_52_52;

#line 418 "layout.m"
                                ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 418 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                  {
#line 418 "layout.m"
                                    ll_backend__layout__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 418 "layout.m"
                                    ll_backend__layout__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 418 "layout.m"
                                    {
#line 418 "layout.m"
                                      mdbcomp__sym_name____Compare____sym_name_0_0(&ll_backend__layout__V_52_52, ll_backend__layout__V_48_48, ll_backend__layout__V_50_50);
                                    }
#line 10306 "ll_backend.layout.c"
                                    ll_backend__layout__succeeded = (ll_backend__layout__V_52_52 == (MR_Integer) 0);
#line 418 "layout.m"
                                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 418 "layout.m"
                                    if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                      ll_backend__layout__V_6_6 = ll_backend__layout__V_52_52;
#line 418 "layout.m"
                                    else
#line 418 "layout.m"
                                      {
#line 418 "layout.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_49_49, ll_backend__layout__V_51_51);
                                      }
#line 418 "layout.m"
                                    ll_backend__layout__succeeded = MR_TRUE;
#line 418 "layout.m"
                                  }
#line 418 "layout.m"
                              }
#line 418 "layout.m"
                            else
#line 418 "layout.m"
                              if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 418 "layout.m"
                                {
#line 418 "layout.m"
                                  MR_Word ll_backend__layout__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 418 "layout.m"
                                  MR_Word ll_backend__layout__V_47_47;

#line 418 "layout.m"
                                  ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 418 "layout.m"
                                  if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                    {
#line 418 "layout.m"
                                      ll_backend__layout__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 418 "layout.m"
                                      {
#line 418 "layout.m"
                                        mdbcomp__sym_name____Compare____sym_name_0_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_46_46, ll_backend__layout__V_47_47);
                                      }
#line 418 "layout.m"
                                      ll_backend__layout__succeeded = MR_TRUE;
#line 418 "layout.m"
                                    }
#line 418 "layout.m"
                                }
#line 418 "layout.m"
                              else
#line 418 "layout.m"
                                if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 418 "layout.m"
                                  {
#line 418 "layout.m"
                                    MR_Word ll_backend__layout__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 418 "layout.m"
                                    MR_Word ll_backend__layout__V_80_80;

#line 418 "layout.m"
                                    ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 418 "layout.m"
                                    if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                      {
#line 418 "layout.m"
                                        ll_backend__layout__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 418 "layout.m"
                                        {
#line 418 "layout.m"
                                          mdbcomp__sym_name____Compare____sym_name_0_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_79_79, ll_backend__layout__V_80_80);
                                        }
#line 418 "layout.m"
                                        ll_backend__layout__succeeded = MR_TRUE;
#line 418 "layout.m"
                                      }
#line 418 "layout.m"
                                  }
#line 418 "layout.m"
                                else
#line 418 "layout.m"
                                  if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 418 "layout.m"
                                    {
#line 418 "layout.m"
                                      MR_Word ll_backend__layout__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 418 "layout.m"
                                      MR_Integer ll_backend__layout__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 418 "layout.m"
                                      MR_Integer ll_backend__layout__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 418 "layout.m"
                                      MR_Word ll_backend__layout__V_61_61;
#line 418 "layout.m"
                                      MR_Integer ll_backend__layout__V_62_62;
#line 418 "layout.m"
                                      MR_Integer ll_backend__layout__V_63_63;
#line 418 "layout.m"
                                      MR_Word ll_backend__layout__V_64_64;

#line 418 "layout.m"
                                      ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 418 "layout.m"
                                      if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                        {
#line 418 "layout.m"
                                          ll_backend__layout__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 418 "layout.m"
                                          ll_backend__layout__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 418 "layout.m"
                                          ll_backend__layout__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 418 "layout.m"
                                          {
#line 418 "layout.m"
                                            mdbcomp__sym_name____Compare____sym_name_0_0(&ll_backend__layout__V_64_64, ll_backend__layout__V_58_58, ll_backend__layout__V_61_61);
                                          }
#line 10425 "ll_backend.layout.c"
                                          ll_backend__layout__succeeded = (ll_backend__layout__V_64_64 == (MR_Integer) 0);
#line 418 "layout.m"
                                          ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 418 "layout.m"
                                          if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                            ll_backend__layout__V_6_6 = ll_backend__layout__V_64_64;
#line 418 "layout.m"
                                          else
#line 418 "layout.m"
                                            {
#line 418 "layout.m"
                                              MR_Word ll_backend__layout__V_65_65;

#line 418 "layout.m"
                                              {
#line 418 "layout.m"
                                                mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_65_65, ll_backend__layout__V_59_59, ll_backend__layout__V_62_62);
                                              }
#line 10445 "ll_backend.layout.c"
                                              ll_backend__layout__succeeded = (ll_backend__layout__V_65_65 == (MR_Integer) 0);
#line 418 "layout.m"
                                              ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 418 "layout.m"
                                              if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                                ll_backend__layout__V_6_6 = ll_backend__layout__V_65_65;
#line 418 "layout.m"
                                              else
#line 418 "layout.m"
                                                {
#line 418 "layout.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_60_60, ll_backend__layout__V_63_63);
                                                }
#line 418 "layout.m"
                                            }
#line 418 "layout.m"
                                          ll_backend__layout__succeeded = MR_TRUE;
#line 418 "layout.m"
                                        }
#line 418 "layout.m"
                                    }
#line 418 "layout.m"
                                  else
#line 418 "layout.m"
                                    if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 418 "layout.m"
                                      {
#line 418 "layout.m"
                                        MR_Word ll_backend__layout__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 418 "layout.m"
                                        MR_Integer ll_backend__layout__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 418 "layout.m"
                                        MR_Integer ll_backend__layout__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 418 "layout.m"
                                        MR_Word ll_backend__layout__V_69_69;
#line 418 "layout.m"
                                        MR_Integer ll_backend__layout__V_70_70;
#line 418 "layout.m"
                                        MR_Integer ll_backend__layout__V_71_71;
#line 418 "layout.m"
                                        MR_Word ll_backend__layout__V_72_72;

#line 418 "layout.m"
                                        ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 418 "layout.m"
                                        if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                          {
#line 418 "layout.m"
                                            ll_backend__layout__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 418 "layout.m"
                                            ll_backend__layout__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 418 "layout.m"
                                            ll_backend__layout__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 418 "layout.m"
                                            {
#line 418 "layout.m"
                                              mdbcomp__sym_name____Compare____sym_name_0_0(&ll_backend__layout__V_72_72, ll_backend__layout__V_66_66, ll_backend__layout__V_69_69);
                                            }
#line 10506 "ll_backend.layout.c"
                                            ll_backend__layout__succeeded = (ll_backend__layout__V_72_72 == (MR_Integer) 0);
#line 418 "layout.m"
                                            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 418 "layout.m"
                                            if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                              ll_backend__layout__V_6_6 = ll_backend__layout__V_72_72;
#line 418 "layout.m"
                                            else
#line 418 "layout.m"
                                              {
#line 418 "layout.m"
                                                MR_Word ll_backend__layout__V_73_73;

#line 418 "layout.m"
                                                {
#line 418 "layout.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_73_73, ll_backend__layout__V_67_67, ll_backend__layout__V_70_70);
                                                }
#line 10526 "ll_backend.layout.c"
                                                ll_backend__layout__succeeded = (ll_backend__layout__V_73_73 == (MR_Integer) 0);
#line 418 "layout.m"
                                                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 418 "layout.m"
                                                if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                                  ll_backend__layout__V_6_6 = ll_backend__layout__V_73_73;
#line 418 "layout.m"
                                                else
#line 418 "layout.m"
                                                  {
#line 418 "layout.m"
                                                    mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_68_68, ll_backend__layout__V_71_71);
                                                  }
#line 418 "layout.m"
                                              }
#line 418 "layout.m"
                                            ll_backend__layout__succeeded = MR_TRUE;
#line 418 "layout.m"
                                          }
#line 418 "layout.m"
                                      }
#line 418 "layout.m"
                                    else
#line 418 "layout.m"
                                      if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 418 "layout.m"
                                        {
#line 418 "layout.m"
                                          MR_Word ll_backend__layout__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 418 "layout.m"
                                          MR_Integer ll_backend__layout__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 418 "layout.m"
                                          MR_Word ll_backend__layout__V_55_55;
#line 418 "layout.m"
                                          MR_Integer ll_backend__layout__V_56_56;
#line 418 "layout.m"
                                          MR_Word ll_backend__layout__V_57_57;

#line 418 "layout.m"
                                          ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 418 "layout.m"
                                          if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                            {
#line 418 "layout.m"
                                              ll_backend__layout__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 418 "layout.m"
                                              ll_backend__layout__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 418 "layout.m"
                                              {
#line 418 "layout.m"
                                                mdbcomp__sym_name____Compare____sym_name_0_0(&ll_backend__layout__V_57_57, ll_backend__layout__V_53_53, ll_backend__layout__V_55_55);
                                              }
#line 10581 "ll_backend.layout.c"
                                              ll_backend__layout__succeeded = (ll_backend__layout__V_57_57 == (MR_Integer) 0);
#line 418 "layout.m"
                                              ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 418 "layout.m"
                                              if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                                ll_backend__layout__V_6_6 = ll_backend__layout__V_57_57;
#line 418 "layout.m"
                                              else
#line 418 "layout.m"
                                                {
#line 418 "layout.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_54_54, ll_backend__layout__V_56_56);
                                                }
#line 418 "layout.m"
                                              ll_backend__layout__succeeded = MR_TRUE;
#line 418 "layout.m"
                                            }
#line 418 "layout.m"
                                        }
#line 418 "layout.m"
                                      else
#line 418 "layout.m"
                                        if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 418 "layout.m"
                                          {
#line 418 "layout.m"
                                            MR_Word ll_backend__layout__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 418 "layout.m"
                                            MR_Integer ll_backend__layout__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 418 "layout.m"
                                            MR_Word ll_backend__layout__V_76_76;
#line 418 "layout.m"
                                            MR_Integer ll_backend__layout__V_77_77;
#line 418 "layout.m"
                                            MR_Word ll_backend__layout__V_78_78;

#line 418 "layout.m"
                                            ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 418 "layout.m"
                                            if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                              {
#line 418 "layout.m"
                                                ll_backend__layout__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 418 "layout.m"
                                                ll_backend__layout__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 418 "layout.m"
                                                {
#line 418 "layout.m"
                                                  mdbcomp__sym_name____Compare____sym_name_0_0(&ll_backend__layout__V_78_78, ll_backend__layout__V_74_74, ll_backend__layout__V_76_76);
                                                }
#line 10634 "ll_backend.layout.c"
                                                ll_backend__layout__succeeded = (ll_backend__layout__V_78_78 == (MR_Integer) 0);
#line 418 "layout.m"
                                                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 418 "layout.m"
                                                if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                                  ll_backend__layout__V_6_6 = ll_backend__layout__V_78_78;
#line 418 "layout.m"
                                                else
#line 418 "layout.m"
                                                  {
#line 418 "layout.m"
                                                    mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_75_75, ll_backend__layout__V_77_77);
                                                  }
#line 418 "layout.m"
                                                ll_backend__layout__succeeded = MR_TRUE;
#line 418 "layout.m"
                                              }
#line 418 "layout.m"
                                          }
#line 418 "layout.m"
                                        else
#line 418 "layout.m"
                                          if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 418 "layout.m"
                                            {
#line 418 "layout.m"
                                              MR_Word ll_backend__layout__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 418 "layout.m"
                                              MR_Word ll_backend__layout__V_38_38;

#line 418 "layout.m"
                                              ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 418 "layout.m"
                                              if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                                {
#line 418 "layout.m"
                                                  ll_backend__layout__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 418 "layout.m"
                                                  {
#line 418 "layout.m"
                                                    mdbcomp__sym_name____Compare____sym_name_0_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_37_37, ll_backend__layout__V_38_38);
                                                  }
#line 418 "layout.m"
                                                  ll_backend__layout__succeeded = MR_TRUE;
#line 418 "layout.m"
                                                }
#line 418 "layout.m"
                                            }
#line 418 "layout.m"
                                          else
#line 418 "layout.m"
                                            if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 418 "layout.m"
                                              {
#line 418 "layout.m"
                                                MR_Word ll_backend__layout__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 418 "layout.m"
                                                MR_Integer ll_backend__layout__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 418 "layout.m"
                                                MR_Word ll_backend__layout__V_43_43;
#line 418 "layout.m"
                                                MR_Integer ll_backend__layout__V_44_44;
#line 418 "layout.m"
                                                MR_Word ll_backend__layout__V_45_45;

#line 418 "layout.m"
                                                ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 418 "layout.m"
                                                if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                                  {
#line 418 "layout.m"
                                                    ll_backend__layout__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 418 "layout.m"
                                                    ll_backend__layout__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 418 "layout.m"
                                                    {
#line 418 "layout.m"
                                                      mdbcomp__sym_name____Compare____sym_name_0_0(&ll_backend__layout__V_45_45, ll_backend__layout__V_41_41, ll_backend__layout__V_43_43);
                                                    }
#line 10717 "ll_backend.layout.c"
                                                    ll_backend__layout__succeeded = (ll_backend__layout__V_45_45 == (MR_Integer) 0);
#line 418 "layout.m"
                                                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 418 "layout.m"
                                                    if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                                      ll_backend__layout__V_6_6 = ll_backend__layout__V_45_45;
#line 418 "layout.m"
                                                    else
#line 418 "layout.m"
                                                      {
#line 418 "layout.m"
                                                        mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_42_42, ll_backend__layout__V_44_44);
                                                      }
#line 418 "layout.m"
                                                    ll_backend__layout__succeeded = MR_TRUE;
#line 418 "layout.m"
                                                  }
#line 418 "layout.m"
                                              }
#line 418 "layout.m"
                                            else
#line 418 "layout.m"
                                              if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 418 "layout.m"
                                                {
#line 418 "layout.m"
                                                  MR_Word ll_backend__layout__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 418 "layout.m"
                                                  MR_Word ll_backend__layout__V_82_82;

#line 418 "layout.m"
                                                  ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 13)));
#line 418 "layout.m"
                                                  if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                                    {
#line 418 "layout.m"
                                                      ll_backend__layout__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 418 "layout.m"
                                                      {
#line 418 "layout.m"
                                                        mdbcomp__sym_name____Compare____sym_name_0_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_81_81, ll_backend__layout__V_82_82);
                                                      }
#line 418 "layout.m"
                                                      ll_backend__layout__succeeded = MR_TRUE;
#line 418 "layout.m"
                                                    }
#line 418 "layout.m"
                                                }
#line 418 "layout.m"
                                              else
#line 418 "layout.m"
                                                if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 418 "layout.m"
                                                  {
#line 418 "layout.m"
                                                    MR_Word ll_backend__layout__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 418 "layout.m"
                                                    MR_Word ll_backend__layout__V_40_40;

#line 418 "layout.m"
                                                    ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 418 "layout.m"
                                                    if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                                      {
#line 418 "layout.m"
                                                        ll_backend__layout__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 418 "layout.m"
                                                        {
#line 418 "layout.m"
                                                          mdbcomp__sym_name____Compare____sym_name_0_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_39_39, ll_backend__layout__V_40_40);
                                                        }
#line 418 "layout.m"
                                                        ll_backend__layout__succeeded = MR_TRUE;
#line 418 "layout.m"
                                                      }
#line 418 "layout.m"
                                                  }
#line 418 "layout.m"
                                                else
#line 418 "layout.m"
                                                  if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 418 "layout.m"
                                                    {
#line 418 "layout.m"
                                                      MR_Word ll_backend__layout__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 418 "layout.m"
                                                      MR_Word ll_backend__layout__V_36_36;

#line 418 "layout.m"
                                                      ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 418 "layout.m"
                                                      if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                                        {
#line 418 "layout.m"
                                                          ll_backend__layout__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 418 "layout.m"
                                                          {
#line 418 "layout.m"
                                                            mdbcomp__sym_name____Compare____sym_name_0_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_35_35, ll_backend__layout__V_36_36);
                                                          }
#line 418 "layout.m"
                                                          ll_backend__layout__succeeded = MR_TRUE;
#line 418 "layout.m"
                                                        }
#line 418 "layout.m"
                                                    }
#line 418 "layout.m"
                                                  else
#line 418 "layout.m"
                                                    {
#line 418 "layout.m"
                                                      MR_Word ll_backend__layout__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 418 "layout.m"
                                                      MR_Word ll_backend__layout__V_84_84;

#line 418 "layout.m"
                                                      ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 418 "layout.m"
                                                      if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                                        {
#line 418 "layout.m"
                                                          ll_backend__layout__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 418 "layout.m"
                                                          {
#line 418 "layout.m"
                                                            mdbcomp__sym_name____Compare____sym_name_0_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_83_83, ll_backend__layout__V_84_84);
                                                          }
#line 418 "layout.m"
                                                          ll_backend__layout__succeeded = MR_TRUE;
#line 418 "layout.m"
                                                        }
#line 418 "layout.m"
                                                    }
#line 418 "layout.m"
                if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_6_6;
#line 418 "layout.m"
                else
#line 418 "layout.m"
                  {
#line 418 "layout.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 418 "layout.m"
                    return;
                  }
#line 418 "layout.m"
              }
#line 418 "layout.m"
          }
#line 418 "layout.m"
      }
#line 418 "layout.m"
  }
#line 418 "layout.m"
}

#line 418 "layout.m"
void MR_CALL 
ll_backend__layout____Index____layout_name_0_0(
#line 418 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 418 "layout.m"
  MR_Integer * ll_backend__layout__HeadVar__2_2)
#line 418 "layout.m"
{
#line 418 "layout.m"
  {
#line 418 "layout.m"
    MR_bool ll_backend__layout__succeeded;

#line 418 "layout.m"
    if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 10896 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 1;
#line 418 "layout.m"
    else
#line 418 "layout.m"
      if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 10902 "ll_backend.layout.c"
        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 2;
#line 418 "layout.m"
      else
#line 418 "layout.m"
        if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 10908 "ll_backend.layout.c"
          *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 0;
#line 418 "layout.m"
        else
#line 418 "layout.m"
          if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 10914 "ll_backend.layout.c"
            *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 4;
#line 418 "layout.m"
          else
#line 418 "layout.m"
            if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 10920 "ll_backend.layout.c"
              *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 3;
#line 418 "layout.m"
            else
#line 418 "layout.m"
              if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 10926 "ll_backend.layout.c"
                *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 18;
#line 418 "layout.m"
              else
#line 418 "layout.m"
                if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 10932 "ll_backend.layout.c"
                  *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 10;
#line 418 "layout.m"
                else
#line 418 "layout.m"
                  if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 10938 "ll_backend.layout.c"
                    *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 9;
#line 418 "layout.m"
                  else
#line 418 "layout.m"
                    if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 10944 "ll_backend.layout.c"
                      *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 15;
#line 418 "layout.m"
                    else
#line 418 "layout.m"
                      if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 10950 "ll_backend.layout.c"
                        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 12;
#line 418 "layout.m"
                      else
#line 418 "layout.m"
                        if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 10956 "ll_backend.layout.c"
                          *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 13;
#line 418 "layout.m"
                        else
#line 418 "layout.m"
                          if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 10962 "ll_backend.layout.c"
                            *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 11;
#line 418 "layout.m"
                          else
#line 418 "layout.m"
                            if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 10968 "ll_backend.layout.c"
                              *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 14;
#line 418 "layout.m"
                            else
#line 418 "layout.m"
                              if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 10974 "ll_backend.layout.c"
                                *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 6;
#line 418 "layout.m"
                              else
#line 418 "layout.m"
                                if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 10980 "ll_backend.layout.c"
                                  *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 8;
#line 418 "layout.m"
                                else
#line 418 "layout.m"
                                  if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 10986 "ll_backend.layout.c"
                                    *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 16;
#line 418 "layout.m"
                                  else
#line 418 "layout.m"
                                    if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 10992 "ll_backend.layout.c"
                                      *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 7;
#line 418 "layout.m"
                                    else
#line 418 "layout.m"
                                      if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 10998 "ll_backend.layout.c"
                                        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 5;
#line 418 "layout.m"
                                      else
#line 11002 "ll_backend.layout.c"
                                        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 17;
#line 418 "layout.m"
  }
#line 418 "layout.m"
}

#line 418 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____layout_name_0_0(
#line 418 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 418 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 418 "layout.m"
{
#line 418 "layout.m"
  {
#line 418 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 418 "layout.m"
    MR_Integer ll_backend__layout__CastX_69 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 418 "layout.m"
    MR_Integer ll_backend__layout__CastY_70 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 418 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_69 == ll_backend__layout__CastY_70);
#line 418 "layout.m"
    if (ll_backend__layout__succeeded)
#line 418 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 418 "layout.m"
    else
#line 418 "layout.m"
      if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 418 "layout.m"
        {
#line 418 "layout.m"
          MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 418 "layout.m"
          MR_Integer ll_backend__layout__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 418 "layout.m"
          MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 418 "layout.m"
          MR_Word ll_backend__layout__V_10_10;
#line 418 "layout.m"
          MR_Integer ll_backend__layout__V_11_11;
#line 418 "layout.m"
          MR_Word ll_backend__layout__V_12_12;

#line 418 "layout.m"
          ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 418 "layout.m"
          if (ll_backend__layout__succeeded)
#line 418 "layout.m"
            {
#line 418 "layout.m"
              ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 418 "layout.m"
              ll_backend__layout__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 418 "layout.m"
              ll_backend__layout__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 11064 "ll_backend.layout.c"
              {
#line 11066 "ll_backend.layout.c"
                ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__layout__V_7_7, ll_backend__layout__V_10_10);
              }
#line 418 "layout.m"
              if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                {
#line 11073 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == ll_backend__layout__V_11_11);
#line 418 "layout.m"
                  if (ll_backend__layout__succeeded)
#line 11077 "ll_backend.layout.c"
                    {
#line 11079 "ll_backend.layout.c"
                      return ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__layout__V_9_9, ll_backend__layout__V_12_12);
                    }
#line 418 "layout.m"
                }
#line 418 "layout.m"
            }
#line 418 "layout.m"
        }
#line 418 "layout.m"
      else
#line 418 "layout.m"
        if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 418 "layout.m"
          {
#line 418 "layout.m"
            MR_Word ll_backend__layout__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 418 "layout.m"
            MR_Integer ll_backend__layout__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 418 "layout.m"
            MR_Word ll_backend__layout__V_15_15;
#line 418 "layout.m"
            MR_Integer ll_backend__layout__V_16_16;

#line 418 "layout.m"
            ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 418 "layout.m"
            if (ll_backend__layout__succeeded)
#line 418 "layout.m"
              {
#line 418 "layout.m"
                ll_backend__layout__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 418 "layout.m"
                ll_backend__layout__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 11113 "ll_backend.layout.c"
                {
#line 11115 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_13_13, ll_backend__layout__V_15_15);
                }
#line 418 "layout.m"
                if (ll_backend__layout__succeeded)
#line 11120 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = (ll_backend__layout__V_14_14 == ll_backend__layout__V_16_16);
#line 418 "layout.m"
              }
#line 418 "layout.m"
          }
#line 418 "layout.m"
        else
#line 418 "layout.m"
          if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 418 "layout.m"
            {
#line 418 "layout.m"
              MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 418 "layout.m"
              MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 418 "layout.m"
              MR_Word ll_backend__layout__V_5_5;
#line 418 "layout.m"
              MR_Word ll_backend__layout__V_6_6;

#line 418 "layout.m"
              ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 418 "layout.m"
              if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                {
#line 418 "layout.m"
                  ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 418 "layout.m"
                  ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 11151 "ll_backend.layout.c"
                  {
#line 11153 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = hlds__hlds_rtti____Unify____rtti_proc_label_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5);
                  }
#line 418 "layout.m"
                  if (ll_backend__layout__succeeded)
#line 11158 "ll_backend.layout.c"
                    {
#line 11160 "ll_backend.layout.c"
                      return ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_kind_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_6_6);
                    }
#line 418 "layout.m"
                }
#line 418 "layout.m"
            }
#line 418 "layout.m"
          else
#line 418 "layout.m"
            if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 418 "layout.m"
              {
#line 418 "layout.m"
                MR_Word ll_backend__layout__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 418 "layout.m"
                MR_Integer ll_backend__layout__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 418 "layout.m"
                MR_Word ll_backend__layout__V_23_23;
#line 418 "layout.m"
                MR_Integer ll_backend__layout__V_24_24;

#line 418 "layout.m"
                ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 418 "layout.m"
                if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                  {
#line 418 "layout.m"
                    ll_backend__layout__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 418 "layout.m"
                    ll_backend__layout__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 11192 "ll_backend.layout.c"
                    {
#line 11194 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_21_21, ll_backend__layout__V_23_23);
                    }
#line 418 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 11199 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = (ll_backend__layout__V_22_22 == ll_backend__layout__V_24_24);
#line 418 "layout.m"
                  }
#line 418 "layout.m"
              }
#line 418 "layout.m"
            else
#line 418 "layout.m"
              if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 418 "layout.m"
                {
#line 418 "layout.m"
                  MR_Word ll_backend__layout__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 418 "layout.m"
                  MR_Integer ll_backend__layout__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 418 "layout.m"
                  MR_Word ll_backend__layout__V_19_19;
#line 418 "layout.m"
                  MR_Integer ll_backend__layout__V_20_20;

#line 418 "layout.m"
                  ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 418 "layout.m"
                  if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                    {
#line 418 "layout.m"
                      ll_backend__layout__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 418 "layout.m"
                      ll_backend__layout__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 11230 "ll_backend.layout.c"
                      {
#line 11232 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_17_17, ll_backend__layout__V_19_19);
                      }
#line 418 "layout.m"
                      if (ll_backend__layout__succeeded)
#line 11237 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (ll_backend__layout__V_18_18 == ll_backend__layout__V_20_20);
#line 418 "layout.m"
                    }
#line 418 "layout.m"
                }
#line 418 "layout.m"
              else
#line 418 "layout.m"
                if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 418 "layout.m"
                  {
#line 418 "layout.m"
                    MR_Word ll_backend__layout__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 418 "layout.m"
                    MR_Word ll_backend__layout__V_68_68;

#line 418 "layout.m"
                    ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 15)));
#line 418 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                      {
#line 418 "layout.m"
                        ll_backend__layout__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 11262 "ll_backend.layout.c"
                        {
#line 11264 "ll_backend.layout.c"
                          return ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_67_67, ll_backend__layout__V_68_68);
                        }
#line 418 "layout.m"
                      }
#line 418 "layout.m"
                  }
#line 418 "layout.m"
                else
#line 418 "layout.m"
                  if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 418 "layout.m"
                    {
#line 418 "layout.m"
                      MR_Word ll_backend__layout__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 418 "layout.m"
                      MR_Integer ll_backend__layout__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 418 "layout.m"
                      MR_Word ll_backend__layout__V_39_39;
#line 418 "layout.m"
                      MR_Integer ll_backend__layout__V_40_40;

#line 418 "layout.m"
                      ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 418 "layout.m"
                      if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                        {
#line 418 "layout.m"
                          ll_backend__layout__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 418 "layout.m"
                          ll_backend__layout__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 11296 "ll_backend.layout.c"
                          {
#line 11298 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_37_37, ll_backend__layout__V_39_39);
                          }
#line 418 "layout.m"
                          if (ll_backend__layout__succeeded)
#line 11303 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = (ll_backend__layout__V_38_38 == ll_backend__layout__V_40_40);
#line 418 "layout.m"
                        }
#line 418 "layout.m"
                    }
#line 418 "layout.m"
                  else
#line 418 "layout.m"
                    if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 418 "layout.m"
                      {
#line 418 "layout.m"
                        MR_Word ll_backend__layout__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 418 "layout.m"
                        MR_Word ll_backend__layout__V_36_36;

#line 418 "layout.m"
                        ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 418 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                          {
#line 418 "layout.m"
                            ll_backend__layout__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 11328 "ll_backend.layout.c"
                            {
#line 11330 "ll_backend.layout.c"
                              return ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_35_35, ll_backend__layout__V_36_36);
                            }
#line 418 "layout.m"
                          }
#line 418 "layout.m"
                      }
#line 418 "layout.m"
                    else
#line 418 "layout.m"
                      if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 418 "layout.m"
                        {
#line 418 "layout.m"
                          MR_Word ll_backend__layout__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 418 "layout.m"
                          MR_Word ll_backend__layout__V_62_62;

#line 418 "layout.m"
                          ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 418 "layout.m"
                          if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                            {
#line 418 "layout.m"
                              ll_backend__layout__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 11356 "ll_backend.layout.c"
                              {
#line 11358 "ll_backend.layout.c"
                                return ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_61_61, ll_backend__layout__V_62_62);
                              }
#line 418 "layout.m"
                            }
#line 418 "layout.m"
                        }
#line 418 "layout.m"
                      else
#line 418 "layout.m"
                        if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 418 "layout.m"
                          {
#line 418 "layout.m"
                            MR_Word ll_backend__layout__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 418 "layout.m"
                            MR_Integer ll_backend__layout__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 418 "layout.m"
                            MR_Integer ll_backend__layout__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 418 "layout.m"
                            MR_Word ll_backend__layout__V_48_48;
#line 418 "layout.m"
                            MR_Integer ll_backend__layout__V_49_49;
#line 418 "layout.m"
                            MR_Integer ll_backend__layout__V_50_50;

#line 418 "layout.m"
                            ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 418 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                              {
#line 418 "layout.m"
                                ll_backend__layout__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 418 "layout.m"
                                ll_backend__layout__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 418 "layout.m"
                                ll_backend__layout__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 11396 "ll_backend.layout.c"
                                {
#line 11398 "ll_backend.layout.c"
                                  ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_45_45, ll_backend__layout__V_48_48);
                                }
#line 418 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                  {
#line 11405 "ll_backend.layout.c"
                                    ll_backend__layout__succeeded = (ll_backend__layout__V_46_46 == ll_backend__layout__V_49_49);
#line 418 "layout.m"
                                    if (ll_backend__layout__succeeded)
#line 11409 "ll_backend.layout.c"
                                      ll_backend__layout__succeeded = (ll_backend__layout__V_47_47 == ll_backend__layout__V_50_50);
#line 418 "layout.m"
                                  }
#line 418 "layout.m"
                              }
#line 418 "layout.m"
                          }
#line 418 "layout.m"
                        else
#line 418 "layout.m"
                          if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 418 "layout.m"
                            {
#line 418 "layout.m"
                              MR_Word ll_backend__layout__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 418 "layout.m"
                              MR_Integer ll_backend__layout__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 418 "layout.m"
                              MR_Integer ll_backend__layout__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 418 "layout.m"
                              MR_Word ll_backend__layout__V_54_54;
#line 418 "layout.m"
                              MR_Integer ll_backend__layout__V_55_55;
#line 418 "layout.m"
                              MR_Integer ll_backend__layout__V_56_56;

#line 418 "layout.m"
                              ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 418 "layout.m"
                              if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                {
#line 418 "layout.m"
                                  ll_backend__layout__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 418 "layout.m"
                                  ll_backend__layout__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 418 "layout.m"
                                  ll_backend__layout__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 11448 "ll_backend.layout.c"
                                  {
#line 11450 "ll_backend.layout.c"
                                    ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_51_51, ll_backend__layout__V_54_54);
                                  }
#line 418 "layout.m"
                                  if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                    {
#line 11457 "ll_backend.layout.c"
                                      ll_backend__layout__succeeded = (ll_backend__layout__V_52_52 == ll_backend__layout__V_55_55);
#line 418 "layout.m"
                                      if (ll_backend__layout__succeeded)
#line 11461 "ll_backend.layout.c"
                                        ll_backend__layout__succeeded = (ll_backend__layout__V_53_53 == ll_backend__layout__V_56_56);
#line 418 "layout.m"
                                    }
#line 418 "layout.m"
                                }
#line 418 "layout.m"
                            }
#line 418 "layout.m"
                          else
#line 418 "layout.m"
                            if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 418 "layout.m"
                              {
#line 418 "layout.m"
                                MR_Word ll_backend__layout__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 418 "layout.m"
                                MR_Integer ll_backend__layout__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 418 "layout.m"
                                MR_Word ll_backend__layout__V_43_43;
#line 418 "layout.m"
                                MR_Integer ll_backend__layout__V_44_44;

#line 418 "layout.m"
                                ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 418 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                  {
#line 418 "layout.m"
                                    ll_backend__layout__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 418 "layout.m"
                                    ll_backend__layout__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 11494 "ll_backend.layout.c"
                                    {
#line 11496 "ll_backend.layout.c"
                                      ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_41_41, ll_backend__layout__V_43_43);
                                    }
#line 418 "layout.m"
                                    if (ll_backend__layout__succeeded)
#line 11501 "ll_backend.layout.c"
                                      ll_backend__layout__succeeded = (ll_backend__layout__V_42_42 == ll_backend__layout__V_44_44);
#line 418 "layout.m"
                                  }
#line 418 "layout.m"
                              }
#line 418 "layout.m"
                            else
#line 418 "layout.m"
                              if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 418 "layout.m"
                                {
#line 418 "layout.m"
                                  MR_Word ll_backend__layout__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 418 "layout.m"
                                  MR_Integer ll_backend__layout__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 418 "layout.m"
                                  MR_Word ll_backend__layout__V_59_59;
#line 418 "layout.m"
                                  MR_Integer ll_backend__layout__V_60_60;

#line 418 "layout.m"
                                  ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 418 "layout.m"
                                  if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                    {
#line 418 "layout.m"
                                      ll_backend__layout__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 418 "layout.m"
                                      ll_backend__layout__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 11532 "ll_backend.layout.c"
                                      {
#line 11534 "ll_backend.layout.c"
                                        ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_57_57, ll_backend__layout__V_59_59);
                                      }
#line 418 "layout.m"
                                      if (ll_backend__layout__succeeded)
#line 11539 "ll_backend.layout.c"
                                        ll_backend__layout__succeeded = (ll_backend__layout__V_58_58 == ll_backend__layout__V_60_60);
#line 418 "layout.m"
                                    }
#line 418 "layout.m"
                                }
#line 418 "layout.m"
                              else
#line 418 "layout.m"
                                if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 418 "layout.m"
                                  {
#line 418 "layout.m"
                                    MR_Word ll_backend__layout__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 418 "layout.m"
                                    MR_Word ll_backend__layout__V_28_28;

#line 418 "layout.m"
                                    ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 418 "layout.m"
                                    if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                      {
#line 418 "layout.m"
                                        ll_backend__layout__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 11564 "ll_backend.layout.c"
                                        {
#line 11566 "ll_backend.layout.c"
                                          return ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_27_27, ll_backend__layout__V_28_28);
                                        }
#line 418 "layout.m"
                                      }
#line 418 "layout.m"
                                  }
#line 418 "layout.m"
                                else
#line 418 "layout.m"
                                  if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 418 "layout.m"
                                    {
#line 418 "layout.m"
                                      MR_Word ll_backend__layout__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 418 "layout.m"
                                      MR_Integer ll_backend__layout__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 418 "layout.m"
                                      MR_Word ll_backend__layout__V_33_33;
#line 418 "layout.m"
                                      MR_Integer ll_backend__layout__V_34_34;

#line 418 "layout.m"
                                      ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 418 "layout.m"
                                      if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                        {
#line 418 "layout.m"
                                          ll_backend__layout__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 418 "layout.m"
                                          ll_backend__layout__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 11598 "ll_backend.layout.c"
                                          {
#line 11600 "ll_backend.layout.c"
                                            ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_31_31, ll_backend__layout__V_33_33);
                                          }
#line 418 "layout.m"
                                          if (ll_backend__layout__succeeded)
#line 11605 "ll_backend.layout.c"
                                            ll_backend__layout__succeeded = (ll_backend__layout__V_32_32 == ll_backend__layout__V_34_34);
#line 418 "layout.m"
                                        }
#line 418 "layout.m"
                                    }
#line 418 "layout.m"
                                  else
#line 418 "layout.m"
                                    if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 418 "layout.m"
                                      {
#line 418 "layout.m"
                                        MR_Word ll_backend__layout__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 418 "layout.m"
                                        MR_Word ll_backend__layout__V_64_64;

#line 418 "layout.m"
                                        ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13)));
#line 418 "layout.m"
                                        if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                          {
#line 418 "layout.m"
                                            ll_backend__layout__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 11630 "ll_backend.layout.c"
                                            {
#line 11632 "ll_backend.layout.c"
                                              return ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_63_63, ll_backend__layout__V_64_64);
                                            }
#line 418 "layout.m"
                                          }
#line 418 "layout.m"
                                      }
#line 418 "layout.m"
                                    else
#line 418 "layout.m"
                                      if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 418 "layout.m"
                                        {
#line 418 "layout.m"
                                          MR_Word ll_backend__layout__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 418 "layout.m"
                                          MR_Word ll_backend__layout__V_30_30;

#line 418 "layout.m"
                                          ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 418 "layout.m"
                                          if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                            {
#line 418 "layout.m"
                                              ll_backend__layout__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 11658 "ll_backend.layout.c"
                                              {
#line 11660 "ll_backend.layout.c"
                                                return ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_29_29, ll_backend__layout__V_30_30);
                                              }
#line 418 "layout.m"
                                            }
#line 418 "layout.m"
                                        }
#line 418 "layout.m"
                                      else
#line 418 "layout.m"
                                        if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 418 "layout.m"
                                          {
#line 418 "layout.m"
                                            MR_Word ll_backend__layout__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 418 "layout.m"
                                            MR_Word ll_backend__layout__V_26_26;

#line 418 "layout.m"
                                            ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 418 "layout.m"
                                            if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                              {
#line 418 "layout.m"
                                                ll_backend__layout__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 11686 "ll_backend.layout.c"
                                                {
#line 11688 "ll_backend.layout.c"
                                                  return ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_25_25, ll_backend__layout__V_26_26);
                                                }
#line 418 "layout.m"
                                              }
#line 418 "layout.m"
                                          }
#line 418 "layout.m"
                                        else
#line 418 "layout.m"
                                          {
#line 418 "layout.m"
                                            MR_Word ll_backend__layout__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 418 "layout.m"
                                            MR_Word ll_backend__layout__V_66_66;

#line 418 "layout.m"
                                            ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 418 "layout.m"
                                            if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                              {
#line 418 "layout.m"
                                                ll_backend__layout__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 11712 "ll_backend.layout.c"
                                                {
#line 11714 "ll_backend.layout.c"
                                                  return ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_65_65, ll_backend__layout__V_66_66);
                                                }
#line 418 "layout.m"
                                              }
#line 418 "layout.m"
                                          }
#line 418 "layout.m"
    return ll_backend__layout__succeeded;
#line 418 "layout.m"
  }
#line 418 "layout.m"
}

#line 358 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____layout_array_name_0_0(
#line 358 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 358 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 358 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 358 "layout.m"
{
#line 358 "layout.m"
  {
#line 358 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 358 "layout.m"
    MR_Integer ll_backend__layout__CastX_9 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 358 "layout.m"
    MR_Integer ll_backend__layout__CastY_10 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 358 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_9 == ll_backend__layout__CastY_10);
#line 358 "layout.m"
    if (ll_backend__layout__succeeded)
#line 11752 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 358 "layout.m"
    else
#line 358 "layout.m"
      {
#line 358 "layout.m"
        MR_Integer ll_backend__layout__V_4_4;
#line 358 "layout.m"
        MR_Integer ll_backend__layout__V_5_5;

#line 358 "layout.m"
        {
#line 358 "layout.m"
          ll_backend__layout____Index____layout_array_name_0_0(ll_backend__layout__HeadVar__2_2, &ll_backend__layout__V_4_4);
        }
#line 358 "layout.m"
        {
#line 358 "layout.m"
          ll_backend__layout____Index____layout_array_name_0_0(ll_backend__layout__HeadVar__3_3, &ll_backend__layout__V_5_5);
        }
#line 358 "layout.m"
        ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 < ll_backend__layout__V_5_5);
#line 358 "layout.m"
        if (ll_backend__layout__succeeded)
#line 11777 "ll_backend.layout.c"
          *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 1;
#line 358 "layout.m"
        else
#line 358 "layout.m"
          {
#line 358 "layout.m"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 > ll_backend__layout__V_5_5);
#line 358 "layout.m"
            if (ll_backend__layout__succeeded)
#line 11787 "ll_backend.layout.c"
              *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 2;
#line 358 "layout.m"
            else
#line 358 "layout.m"
              {
#line 358 "layout.m"
                MR_Word ll_backend__layout__V_6_6;

#line 358 "layout.m"
                if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 358 "layout.m"
                  {
#line 358 "layout.m"
                    ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 358 "layout.m"
                    ll_backend__layout__succeeded = MR_TRUE;
#line 358 "layout.m"
                  }
#line 358 "layout.m"
                else
#line 358 "layout.m"
                  if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 358 "layout.m"
                    {
#line 358 "layout.m"
                      ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 358 "layout.m"
                      ll_backend__layout__succeeded = MR_TRUE;
#line 358 "layout.m"
                    }
#line 358 "layout.m"
                  else
#line 358 "layout.m"
                    if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 358 "layout.m"
                      {
#line 358 "layout.m"
                        ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 358 "layout.m"
                        ll_backend__layout__succeeded = MR_TRUE;
#line 358 "layout.m"
                      }
#line 358 "layout.m"
                    else
#line 358 "layout.m"
                      if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 358 "layout.m"
                        {
#line 358 "layout.m"
                          ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 358 "layout.m"
                          ll_backend__layout__succeeded = MR_TRUE;
#line 358 "layout.m"
                        }
#line 358 "layout.m"
                      else
#line 358 "layout.m"
                        if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 358 "layout.m"
                          {
#line 358 "layout.m"
                            ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 358 "layout.m"
                            ll_backend__layout__succeeded = MR_TRUE;
#line 358 "layout.m"
                          }
#line 358 "layout.m"
                        else
#line 358 "layout.m"
                          if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 358 "layout.m"
                            {
#line 358 "layout.m"
                              ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 358 "layout.m"
                              ll_backend__layout__succeeded = MR_TRUE;
#line 358 "layout.m"
                            }
#line 358 "layout.m"
                          else
#line 358 "layout.m"
                            if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 358 "layout.m"
                              {
#line 358 "layout.m"
                                ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 358 "layout.m"
                                ll_backend__layout__succeeded = MR_TRUE;
#line 358 "layout.m"
                              }
#line 358 "layout.m"
                            else
#line 358 "layout.m"
                              if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 358 "layout.m"
                                {
#line 358 "layout.m"
                                  ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 358 "layout.m"
                                  ll_backend__layout__succeeded = MR_TRUE;
#line 358 "layout.m"
                                }
#line 358 "layout.m"
                              else
#line 358 "layout.m"
                                if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 358 "layout.m"
                                  {
#line 358 "layout.m"
                                    ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 358 "layout.m"
                                    ll_backend__layout__succeeded = MR_TRUE;
#line 358 "layout.m"
                                  }
#line 358 "layout.m"
                                else
#line 358 "layout.m"
                                  if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 358 "layout.m"
                                    {
#line 358 "layout.m"
                                      ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 358 "layout.m"
                                      ll_backend__layout__succeeded = MR_TRUE;
#line 358 "layout.m"
                                    }
#line 358 "layout.m"
                                  else
#line 358 "layout.m"
                                    if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 358 "layout.m"
                                      {
#line 358 "layout.m"
                                        ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 358 "layout.m"
                                        ll_backend__layout__succeeded = MR_TRUE;
#line 358 "layout.m"
                                      }
#line 358 "layout.m"
                                    else
#line 358 "layout.m"
                                      if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 358 "layout.m"
                                        {
#line 358 "layout.m"
                                          ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 358 "layout.m"
                                          ll_backend__layout__succeeded = MR_TRUE;
#line 358 "layout.m"
                                        }
#line 358 "layout.m"
                                      else
#line 358 "layout.m"
                                        if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 358 "layout.m"
                                          {
#line 358 "layout.m"
                                            ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 358 "layout.m"
                                            ll_backend__layout__succeeded = MR_TRUE;
#line 358 "layout.m"
                                          }
#line 358 "layout.m"
                                        else
#line 358 "layout.m"
                                          if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 358 "layout.m"
                                            {
#line 358 "layout.m"
                                              ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 358 "layout.m"
                                              ll_backend__layout__succeeded = MR_TRUE;
#line 358 "layout.m"
                                            }
#line 358 "layout.m"
                                          else
#line 358 "layout.m"
                                            if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 358 "layout.m"
                                              {
#line 358 "layout.m"
                                                ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 358 "layout.m"
                                                ll_backend__layout__succeeded = MR_TRUE;
#line 358 "layout.m"
                                              }
#line 358 "layout.m"
                                            else
#line 358 "layout.m"
                                              if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 358 "layout.m"
                                                {
#line 358 "layout.m"
                                                  ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 358 "layout.m"
                                                  ll_backend__layout__succeeded = MR_TRUE;
#line 358 "layout.m"
                                                }
#line 358 "layout.m"
                                              else
#line 358 "layout.m"
                                                if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 358 "layout.m"
                                                  {
#line 358 "layout.m"
                                                    ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 358 "layout.m"
                                                    ll_backend__layout__succeeded = MR_TRUE;
#line 358 "layout.m"
                                                  }
#line 358 "layout.m"
                                                else
#line 358 "layout.m"
                                                  if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 358 "layout.m"
                                                    {
#line 358 "layout.m"
                                                      ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 358 "layout.m"
                                                      ll_backend__layout__succeeded = MR_TRUE;
#line 358 "layout.m"
                                                    }
#line 358 "layout.m"
                                                  else
#line 358 "layout.m"
                                                    {
#line 358 "layout.m"
                                                      MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 358 "layout.m"
                                                      MR_Word ll_backend__layout__V_8_8;
#line 358 "layout.m"
                                                      MR_Integer ll_backend__layout__V_12_12;
#line 358 "layout.m"
                                                      MR_Integer ll_backend__layout__V_13_13;

#line 358 "layout.m"
                                                      ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 358 "layout.m"
                                                      if (ll_backend__layout__succeeded)
#line 358 "layout.m"
                                                        {
#line 358 "layout.m"
                                                          ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 358 "layout.m"
                                                          ll_backend__layout__V_12_12 = (MR_Integer) ll_backend__layout__V_7_7;
#line 358 "layout.m"
                                                          ll_backend__layout__V_13_13 = (MR_Integer) ll_backend__layout__V_8_8;
#line 358 "layout.m"
                                                          {
#line 358 "layout.m"
                                                            mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_12_12, ll_backend__layout__V_13_13);
                                                          }
#line 358 "layout.m"
                                                          ll_backend__layout__succeeded = MR_TRUE;
#line 358 "layout.m"
                                                        }
#line 358 "layout.m"
                                                    }
#line 358 "layout.m"
                if (ll_backend__layout__succeeded)
#line 358 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_6_6;
#line 358 "layout.m"
                else
#line 358 "layout.m"
                  {
#line 358 "layout.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 358 "layout.m"
                    return;
                  }
#line 358 "layout.m"
              }
#line 358 "layout.m"
          }
#line 358 "layout.m"
      }
#line 358 "layout.m"
  }
#line 358 "layout.m"
}

#line 358 "layout.m"
void MR_CALL 
ll_backend__layout____Index____layout_array_name_0_0(
#line 358 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 358 "layout.m"
  MR_Integer * ll_backend__layout__HeadVar__2_2)
#line 358 "layout.m"
{
#line 358 "layout.m"
  {
#line 358 "layout.m"
    MR_bool ll_backend__layout__succeeded;

#line 358 "layout.m"
    if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 12086 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 18;
#line 358 "layout.m"
    else
#line 358 "layout.m"
      if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 12092 "ll_backend.layout.c"
        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 1;
#line 358 "layout.m"
      else
#line 358 "layout.m"
        if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 12098 "ll_backend.layout.c"
          *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 3;
#line 358 "layout.m"
        else
#line 358 "layout.m"
          if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 12104 "ll_backend.layout.c"
            *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 13;
#line 358 "layout.m"
          else
#line 358 "layout.m"
            if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 12110 "ll_backend.layout.c"
              *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 15;
#line 358 "layout.m"
            else
#line 358 "layout.m"
              if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 12116 "ll_backend.layout.c"
                *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 16;
#line 358 "layout.m"
              else
#line 358 "layout.m"
                if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 12122 "ll_backend.layout.c"
                  *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 11;
#line 358 "layout.m"
                else
#line 358 "layout.m"
                  if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 12128 "ll_backend.layout.c"
                    *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 10;
#line 358 "layout.m"
                  else
#line 358 "layout.m"
                    if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 12134 "ll_backend.layout.c"
                      *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 7;
#line 358 "layout.m"
                    else
#line 358 "layout.m"
                      if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 12140 "ll_backend.layout.c"
                        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 9;
#line 358 "layout.m"
                      else
#line 358 "layout.m"
                        if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 12146 "ll_backend.layout.c"
                          *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 8;
#line 358 "layout.m"
                        else
#line 358 "layout.m"
                          if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 12152 "ll_backend.layout.c"
                            *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 14;
#line 358 "layout.m"
                          else
#line 358 "layout.m"
                            if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 12158 "ll_backend.layout.c"
                              *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 12;
#line 358 "layout.m"
                            else
#line 358 "layout.m"
                              if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 12164 "ll_backend.layout.c"
                                *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 0;
#line 358 "layout.m"
                              else
#line 358 "layout.m"
                                if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 12170 "ll_backend.layout.c"
                                  *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 2;
#line 358 "layout.m"
                                else
#line 358 "layout.m"
                                  if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 12176 "ll_backend.layout.c"
                                    *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 17;
#line 358 "layout.m"
                                  else
#line 358 "layout.m"
                                    if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 12182 "ll_backend.layout.c"
                                      *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 4;
#line 358 "layout.m"
                                    else
#line 358 "layout.m"
                                      if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 12188 "ll_backend.layout.c"
                                        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 5;
#line 358 "layout.m"
                                      else
#line 12192 "ll_backend.layout.c"
                                        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 6;
#line 358 "layout.m"
  }
#line 358 "layout.m"
}

#line 358 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____layout_array_name_0_0(
#line 358 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 358 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 358 "layout.m"
{
#line 358 "layout.m"
  {
#line 358 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 358 "layout.m"
    MR_Integer ll_backend__layout__CastX_41 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 358 "layout.m"
    MR_Integer ll_backend__layout__CastY_42 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 358 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_41 == ll_backend__layout__CastY_42);
#line 358 "layout.m"
    if (ll_backend__layout__succeeded)
#line 358 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 358 "layout.m"
    else
#line 358 "layout.m"
      if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 358 "layout.m"
        {
#line 358 "layout.m"
          MR_Integer ll_backend__layout__CastX_39 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 358 "layout.m"
          MR_Integer ll_backend__layout__CastY_40 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 358 "layout.m"
          ll_backend__layout__succeeded = (ll_backend__layout__CastY_40 == ll_backend__layout__CastX_39);
#line 358 "layout.m"
        }
#line 358 "layout.m"
      else
#line 358 "layout.m"
        if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 358 "layout.m"
          {
#line 358 "layout.m"
            MR_Integer ll_backend__layout__CastX_5 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 358 "layout.m"
            MR_Integer ll_backend__layout__CastY_6 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 358 "layout.m"
            ll_backend__layout__succeeded = (ll_backend__layout__CastY_6 == ll_backend__layout__CastX_5);
#line 358 "layout.m"
          }
#line 358 "layout.m"
        else
#line 358 "layout.m"
          if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 358 "layout.m"
            {
#line 358 "layout.m"
              MR_Integer ll_backend__layout__CastX_9 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 358 "layout.m"
              MR_Integer ll_backend__layout__CastY_10 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 358 "layout.m"
              ll_backend__layout__succeeded = (ll_backend__layout__CastY_10 == ll_backend__layout__CastX_9);
#line 358 "layout.m"
            }
#line 358 "layout.m"
          else
#line 358 "layout.m"
            if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 358 "layout.m"
              {
#line 358 "layout.m"
                MR_Integer ll_backend__layout__CastX_29 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 358 "layout.m"
                MR_Integer ll_backend__layout__CastY_30 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 358 "layout.m"
                ll_backend__layout__succeeded = (ll_backend__layout__CastY_30 == ll_backend__layout__CastX_29);
#line 358 "layout.m"
              }
#line 358 "layout.m"
            else
#line 358 "layout.m"
              if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 358 "layout.m"
                {
#line 358 "layout.m"
                  MR_Integer ll_backend__layout__CastX_33 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 358 "layout.m"
                  MR_Integer ll_backend__layout__CastY_34 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 358 "layout.m"
                  ll_backend__layout__succeeded = (ll_backend__layout__CastY_34 == ll_backend__layout__CastX_33);
#line 358 "layout.m"
                }
#line 358 "layout.m"
              else
#line 358 "layout.m"
                if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 358 "layout.m"
                  {
#line 358 "layout.m"
                    MR_Integer ll_backend__layout__CastX_35 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 358 "layout.m"
                    MR_Integer ll_backend__layout__CastY_36 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 358 "layout.m"
                    ll_backend__layout__succeeded = (ll_backend__layout__CastY_36 == ll_backend__layout__CastX_35);
#line 358 "layout.m"
                  }
#line 358 "layout.m"
                else
#line 358 "layout.m"
                  if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 358 "layout.m"
                    {
#line 358 "layout.m"
                      MR_Integer ll_backend__layout__CastX_25 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 358 "layout.m"
                      MR_Integer ll_backend__layout__CastY_26 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 358 "layout.m"
                      ll_backend__layout__succeeded = (ll_backend__layout__CastY_26 == ll_backend__layout__CastX_25);
#line 358 "layout.m"
                    }
#line 358 "layout.m"
                  else
#line 358 "layout.m"
                    if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 358 "layout.m"
                      {
#line 358 "layout.m"
                        MR_Integer ll_backend__layout__CastX_23 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 358 "layout.m"
                        MR_Integer ll_backend__layout__CastY_24 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 358 "layout.m"
                        ll_backend__layout__succeeded = (ll_backend__layout__CastY_24 == ll_backend__layout__CastX_23);
#line 358 "layout.m"
                      }
#line 358 "layout.m"
                    else
#line 358 "layout.m"
                      if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 358 "layout.m"
                        {
#line 358 "layout.m"
                          MR_Integer ll_backend__layout__CastX_17 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 358 "layout.m"
                          MR_Integer ll_backend__layout__CastY_18 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 358 "layout.m"
                          ll_backend__layout__succeeded = (ll_backend__layout__CastY_18 == ll_backend__layout__CastX_17);
#line 358 "layout.m"
                        }
#line 358 "layout.m"
                      else
#line 358 "layout.m"
                        if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 358 "layout.m"
                          {
#line 358 "layout.m"
                            MR_Integer ll_backend__layout__CastX_21 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 358 "layout.m"
                            MR_Integer ll_backend__layout__CastY_22 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 358 "layout.m"
                            ll_backend__layout__succeeded = (ll_backend__layout__CastY_22 == ll_backend__layout__CastX_21);
#line 358 "layout.m"
                          }
#line 358 "layout.m"
                        else
#line 358 "layout.m"
                          if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 358 "layout.m"
                            {
#line 358 "layout.m"
                              MR_Integer ll_backend__layout__CastX_19 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 358 "layout.m"
                              MR_Integer ll_backend__layout__CastY_20 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 358 "layout.m"
                              ll_backend__layout__succeeded = (ll_backend__layout__CastY_20 == ll_backend__layout__CastX_19);
#line 358 "layout.m"
                            }
#line 358 "layout.m"
                          else
#line 358 "layout.m"
                            if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 358 "layout.m"
                              {
#line 358 "layout.m"
                                MR_Integer ll_backend__layout__CastX_31 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 358 "layout.m"
                                MR_Integer ll_backend__layout__CastY_32 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 358 "layout.m"
                                ll_backend__layout__succeeded = (ll_backend__layout__CastY_32 == ll_backend__layout__CastX_31);
#line 358 "layout.m"
                              }
#line 358 "layout.m"
                            else
#line 358 "layout.m"
                              if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 358 "layout.m"
                                {
#line 358 "layout.m"
                                  MR_Integer ll_backend__layout__CastX_27 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 358 "layout.m"
                                  MR_Integer ll_backend__layout__CastY_28 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 358 "layout.m"
                                  ll_backend__layout__succeeded = (ll_backend__layout__CastY_28 == ll_backend__layout__CastX_27);
#line 358 "layout.m"
                                }
#line 358 "layout.m"
                              else
#line 358 "layout.m"
                                if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 358 "layout.m"
                                  {
#line 358 "layout.m"
                                    MR_Integer ll_backend__layout__CastX_3 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 358 "layout.m"
                                    MR_Integer ll_backend__layout__CastY_4 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 358 "layout.m"
                                    ll_backend__layout__succeeded = (ll_backend__layout__CastY_4 == ll_backend__layout__CastX_3);
#line 358 "layout.m"
                                  }
#line 358 "layout.m"
                                else
#line 358 "layout.m"
                                  if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 358 "layout.m"
                                    {
#line 358 "layout.m"
                                      MR_Integer ll_backend__layout__CastX_7 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 358 "layout.m"
                                      MR_Integer ll_backend__layout__CastY_8 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 358 "layout.m"
                                      ll_backend__layout__succeeded = (ll_backend__layout__CastY_8 == ll_backend__layout__CastX_7);
#line 358 "layout.m"
                                    }
#line 358 "layout.m"
                                  else
#line 358 "layout.m"
                                    if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 358 "layout.m"
                                      {
#line 358 "layout.m"
                                        MR_Integer ll_backend__layout__CastX_37 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 358 "layout.m"
                                        MR_Integer ll_backend__layout__CastY_38 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 358 "layout.m"
                                        ll_backend__layout__succeeded = (ll_backend__layout__CastY_38 == ll_backend__layout__CastX_37);
#line 358 "layout.m"
                                      }
#line 358 "layout.m"
                                    else
#line 358 "layout.m"
                                      if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 358 "layout.m"
                                        {
#line 358 "layout.m"
                                          MR_Integer ll_backend__layout__CastX_11 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 358 "layout.m"
                                          MR_Integer ll_backend__layout__CastY_12 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 358 "layout.m"
                                          ll_backend__layout__succeeded = (ll_backend__layout__CastY_12 == ll_backend__layout__CastX_11);
#line 358 "layout.m"
                                        }
#line 358 "layout.m"
                                      else
#line 358 "layout.m"
                                        if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 358 "layout.m"
                                          {
#line 358 "layout.m"
                                            MR_Integer ll_backend__layout__CastX_13 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 358 "layout.m"
                                            MR_Integer ll_backend__layout__CastY_14 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 358 "layout.m"
                                            ll_backend__layout__succeeded = (ll_backend__layout__CastY_14 == ll_backend__layout__CastX_13);
#line 358 "layout.m"
                                          }
#line 358 "layout.m"
                                        else
#line 358 "layout.m"
                                          {
#line 358 "layout.m"
                                            MR_Word ll_backend__layout__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 358 "layout.m"
                                            MR_Word ll_backend__layout__V_16_16;

#line 358 "layout.m"
                                            ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 358 "layout.m"
                                            if (ll_backend__layout__succeeded)
#line 358 "layout.m"
                                              {
#line 358 "layout.m"
                                                ll_backend__layout__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 12510 "ll_backend.layout.c"
                                                ll_backend__layout__succeeded = (ll_backend__layout__V_15_15 == ll_backend__layout__V_16_16);
#line 358 "layout.m"
                                              }
#line 358 "layout.m"
                                          }
#line 358 "layout.m"
    return ll_backend__layout__succeeded;
#line 358 "layout.m"
  }
#line 358 "layout.m"
}

#line 350 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____label_vars_0_0(
#line 350 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 350 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 350 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 350 "layout.m"
{
#line 350 "layout.m"
  {
#line 350 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 350 "layout.m"
    MR_Integer ll_backend__layout__Cast_HeadVar1_4 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 350 "layout.m"
    MR_Integer ll_backend__layout__Cast_HeadVar2_5 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 350 "layout.m"
    {
#line 350 "layout.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__Cast_HeadVar1_4, ll_backend__layout__Cast_HeadVar2_5);
#line 350 "layout.m"
      return;
    }
#line 350 "layout.m"
  }
#line 350 "layout.m"
}

#line 350 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____label_vars_0_0(
#line 350 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_1,
#line 350 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 350 "layout.m"
{
#line 12564 "ll_backend.layout.c"
  {
#line 12566 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded = (ll_backend__layout__HeadVar__2_1 == ll_backend__layout__HeadVar__2_2);

#line 12569 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 12571 "ll_backend.layout.c"
  }
#line 350 "layout.m"
}

#line 93 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____label_short_var_info_0_0(
#line 93 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 93 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 93 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 93 "layout.m"
{
#line 93 "layout.m"
  {
#line 93 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 93 "layout.m"
    MR_Integer ll_backend__layout__CastX_18 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 93 "layout.m"
    MR_Integer ll_backend__layout__CastY_19 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 93 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_18 == ll_backend__layout__CastY_19);
#line 93 "layout.m"
    if (ll_backend__layout__succeeded)
#line 12600 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 93 "layout.m"
    else
#line 93 "layout.m"
      {
#line 93 "layout.m"
        MR_Integer ll_backend__layout__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 93 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 93 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 93 "layout.m"
        MR_Integer ll_backend__layout__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 93 "layout.m"
        MR_Integer ll_backend__layout__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 93 "layout.m"
        MR_Integer ll_backend__layout__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 93 "layout.m"
        MR_Word ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 93 "layout.m"
        MR_Integer ll_backend__layout__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 93 "layout.m"
        MR_Integer ll_backend__layout__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 93 "layout.m"
        MR_Integer ll_backend__layout__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 4)));
#line 93 "layout.m"
        MR_Word ll_backend__layout__V_14_14;

#line 93 "layout.m"
        {
#line 93 "layout.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_14_14, ll_backend__layout__V_4_4, ll_backend__layout__V_9_9);
        }
#line 12634 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_14_14 == (MR_Integer) 0);
#line 93 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 93 "layout.m"
        if (ll_backend__layout__succeeded)
#line 93 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_14_14;
#line 93 "layout.m"
        else
#line 93 "layout.m"
          {
#line 93 "layout.m"
            MR_Word ll_backend__layout__V_15_15;

#line 93 "layout.m"
            {
#line 93 "layout.m"
              ll_backend__llds____Compare____rval_0_0(&ll_backend__layout__V_15_15, ll_backend__layout__V_5_5, ll_backend__layout__V_10_10);
            }
#line 12654 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_15_15 == (MR_Integer) 0);
#line 93 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 93 "layout.m"
            if (ll_backend__layout__succeeded)
#line 93 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_15_15;
#line 93 "layout.m"
            else
#line 93 "layout.m"
              {
#line 93 "layout.m"
                MR_Word ll_backend__layout__V_16_16;

#line 93 "layout.m"
                {
#line 93 "layout.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_16_16, ll_backend__layout__V_6_6, ll_backend__layout__V_11_11);
                }
#line 12674 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_16_16 == (MR_Integer) 0);
#line 93 "layout.m"
                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 93 "layout.m"
                if (ll_backend__layout__succeeded)
#line 93 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_16_16;
#line 93 "layout.m"
                else
#line 93 "layout.m"
                  {
#line 93 "layout.m"
                    MR_Word ll_backend__layout__V_17_17;

#line 93 "layout.m"
                    {
#line 93 "layout.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_17_17, ll_backend__layout__V_7_7, ll_backend__layout__V_12_12);
                    }
#line 12694 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_17_17 == (MR_Integer) 0);
#line 93 "layout.m"
                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 93 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 93 "layout.m"
                      *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_17_17;
#line 93 "layout.m"
                    else
#line 93 "layout.m"
                      {
#line 93 "layout.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_8_8, ll_backend__layout__V_13_13);
#line 93 "layout.m"
                        return;
                      }
#line 93 "layout.m"
                  }
#line 93 "layout.m"
              }
#line 93 "layout.m"
          }
#line 93 "layout.m"
      }
#line 93 "layout.m"
  }
#line 93 "layout.m"
}

#line 93 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____label_short_var_info_0_0(
#line 93 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 93 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 93 "layout.m"
{
#line 93 "layout.m"
  {
#line 93 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 93 "layout.m"
    MR_Integer ll_backend__layout__CastX_13 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 93 "layout.m"
    MR_Integer ll_backend__layout__CastY_14 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 93 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_13 == ll_backend__layout__CastY_14);
#line 93 "layout.m"
    if (ll_backend__layout__succeeded)
#line 93 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 93 "layout.m"
    else
#line 93 "layout.m"
      {
#line 93 "layout.m"
        MR_Integer ll_backend__layout__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 93 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 93 "layout.m"
        MR_Integer ll_backend__layout__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 93 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 93 "layout.m"
        MR_Integer ll_backend__layout__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 4)));
#line 93 "layout.m"
        MR_Integer ll_backend__layout__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 93 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 93 "layout.m"
        MR_Integer ll_backend__layout__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 93 "layout.m"
        MR_Integer ll_backend__layout__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 93 "layout.m"
        MR_Integer ll_backend__layout__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));

#line 12773 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_3_3 == ll_backend__layout__V_8_8);
#line 93 "layout.m"
        if (ll_backend__layout__succeeded)
#line 93 "layout.m"
          {
#line 12779 "ll_backend.layout.c"
            {
#line 12781 "ll_backend.layout.c"
              ll_backend__layout__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_9_9);
            }
#line 93 "layout.m"
            if (ll_backend__layout__succeeded)
#line 93 "layout.m"
              {
#line 12788 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_10_10);
#line 93 "layout.m"
                if (ll_backend__layout__succeeded)
#line 93 "layout.m"
                  {
#line 12794 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_6_6 == ll_backend__layout__V_11_11);
#line 93 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 12798 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = (ll_backend__layout__V_7_7 == ll_backend__layout__V_12_12);
#line 93 "layout.m"
                  }
#line 93 "layout.m"
              }
#line 93 "layout.m"
          }
#line 93 "layout.m"
      }
#line 93 "layout.m"
    return ll_backend__layout__succeeded;
#line 93 "layout.m"
  }
#line 93 "layout.m"
}

#line 103 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____label_long_var_info_0_0(
#line 103 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 103 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 103 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 103 "layout.m"
{
#line 103 "layout.m"
  {
#line 103 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 103 "layout.m"
    MR_Integer ll_backend__layout__CastX_21 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 103 "layout.m"
    MR_Integer ll_backend__layout__CastY_22 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 103 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_21 == ll_backend__layout__CastY_22);
#line 103 "layout.m"
    if (ll_backend__layout__succeeded)
#line 12839 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 103 "layout.m"
    else
#line 103 "layout.m"
      {
#line 103 "layout.m"
        MR_Integer ll_backend__layout__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 103 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 103 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 103 "layout.m"
        MR_Integer ll_backend__layout__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 103 "layout.m"
        MR_Integer ll_backend__layout__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 103 "layout.m"
        MR_Integer ll_backend__layout__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 5)));
#line 103 "layout.m"
        MR_Integer ll_backend__layout__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 103 "layout.m"
        MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 103 "layout.m"
        MR_Integer ll_backend__layout__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 103 "layout.m"
        MR_Integer ll_backend__layout__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 103 "layout.m"
        MR_Integer ll_backend__layout__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 4)));
#line 103 "layout.m"
        MR_Integer ll_backend__layout__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 5)));
#line 103 "layout.m"
        MR_Word ll_backend__layout__V_16_16;

#line 103 "layout.m"
        {
#line 103 "layout.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_16_16, ll_backend__layout__V_4_4, ll_backend__layout__V_10_10);
        }
#line 12877 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_16_16 == (MR_Integer) 0);
#line 103 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 103 "layout.m"
        if (ll_backend__layout__succeeded)
#line 103 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_16_16;
#line 103 "layout.m"
        else
#line 103 "layout.m"
          {
#line 103 "layout.m"
            MR_Word ll_backend__layout__V_17_17;

#line 103 "layout.m"
            {
#line 103 "layout.m"
              ll_backend__llds____Compare____rval_0_0(&ll_backend__layout__V_17_17, ll_backend__layout__V_5_5, ll_backend__layout__V_11_11);
            }
#line 12897 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_17_17 == (MR_Integer) 0);
#line 103 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 103 "layout.m"
            if (ll_backend__layout__succeeded)
#line 103 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_17_17;
#line 103 "layout.m"
            else
#line 103 "layout.m"
              {
#line 103 "layout.m"
                MR_Word ll_backend__layout__V_18_18;

#line 103 "layout.m"
                {
#line 103 "layout.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_18_18, ll_backend__layout__V_6_6, ll_backend__layout__V_12_12);
                }
#line 12917 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_18_18 == (MR_Integer) 0);
#line 103 "layout.m"
                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 103 "layout.m"
                if (ll_backend__layout__succeeded)
#line 103 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_18_18;
#line 103 "layout.m"
                else
#line 103 "layout.m"
                  {
#line 103 "layout.m"
                    MR_Word ll_backend__layout__V_19_19;

#line 103 "layout.m"
                    {
#line 103 "layout.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_19_19, ll_backend__layout__V_7_7, ll_backend__layout__V_13_13);
                    }
#line 12937 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_19_19 == (MR_Integer) 0);
#line 103 "layout.m"
                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 103 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 103 "layout.m"
                      *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_19_19;
#line 103 "layout.m"
                    else
#line 103 "layout.m"
                      {
#line 103 "layout.m"
                        MR_Word ll_backend__layout__V_20_20;

#line 103 "layout.m"
                        {
#line 103 "layout.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_20_20, ll_backend__layout__V_8_8, ll_backend__layout__V_14_14);
                        }
#line 12957 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (ll_backend__layout__V_20_20 == (MR_Integer) 0);
#line 103 "layout.m"
                        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 103 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 103 "layout.m"
                          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_20_20;
#line 103 "layout.m"
                        else
#line 103 "layout.m"
                          {
#line 103 "layout.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_9_9, ll_backend__layout__V_15_15);
#line 103 "layout.m"
                            return;
                          }
#line 103 "layout.m"
                      }
#line 103 "layout.m"
                  }
#line 103 "layout.m"
              }
#line 103 "layout.m"
          }
#line 103 "layout.m"
      }
#line 103 "layout.m"
  }
#line 103 "layout.m"
}

#line 103 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____label_long_var_info_0_0(
#line 103 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 103 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 103 "layout.m"
{
#line 103 "layout.m"
  {
#line 103 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 103 "layout.m"
    MR_Integer ll_backend__layout__CastX_15 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 103 "layout.m"
    MR_Integer ll_backend__layout__CastY_16 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 103 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_15 == ll_backend__layout__CastY_16);
#line 103 "layout.m"
    if (ll_backend__layout__succeeded)
#line 103 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 103 "layout.m"
    else
#line 103 "layout.m"
      {
#line 103 "layout.m"
        MR_Integer ll_backend__layout__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 103 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 103 "layout.m"
        MR_Integer ll_backend__layout__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 103 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 103 "layout.m"
        MR_Integer ll_backend__layout__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 4)));
#line 103 "layout.m"
        MR_Integer ll_backend__layout__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 5)));
#line 103 "layout.m"
        MR_Integer ll_backend__layout__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 103 "layout.m"
        MR_Word ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 103 "layout.m"
        MR_Integer ll_backend__layout__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 103 "layout.m"
        MR_Integer ll_backend__layout__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 103 "layout.m"
        MR_Integer ll_backend__layout__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 103 "layout.m"
        MR_Integer ll_backend__layout__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 5)));

#line 13042 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_3_3 == ll_backend__layout__V_9_9);
#line 103 "layout.m"
        if (ll_backend__layout__succeeded)
#line 103 "layout.m"
          {
#line 13048 "ll_backend.layout.c"
            {
#line 13050 "ll_backend.layout.c"
              ll_backend__layout__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_10_10);
            }
#line 103 "layout.m"
            if (ll_backend__layout__succeeded)
#line 103 "layout.m"
              {
#line 13057 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_11_11);
#line 103 "layout.m"
                if (ll_backend__layout__succeeded)
#line 103 "layout.m"
                  {
#line 13063 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_6_6 == ll_backend__layout__V_12_12);
#line 103 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 103 "layout.m"
                      {
#line 13069 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (ll_backend__layout__V_7_7 == ll_backend__layout__V_13_13);
#line 103 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 13073 "ll_backend.layout.c"
                          ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == ll_backend__layout__V_14_14);
#line 103 "layout.m"
                      }
#line 103 "layout.m"
                  }
#line 103 "layout.m"
              }
#line 103 "layout.m"
          }
#line 103 "layout.m"
      }
#line 103 "layout.m"
    return ll_backend__layout__succeeded;
#line 103 "layout.m"
  }
#line 103 "layout.m"
}

#line 120 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____label_layout_short_vars_0_0(
#line 120 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 120 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 120 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 120 "layout.m"
{
#line 120 "layout.m"
  {
#line 120 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 120 "layout.m"
    MR_Integer ll_backend__layout__CastX_9 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 120 "layout.m"
    MR_Integer ll_backend__layout__CastY_10 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 120 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_9 == ll_backend__layout__CastY_10);
#line 120 "layout.m"
    if (ll_backend__layout__succeeded)
#line 13116 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 120 "layout.m"
    else
#line 120 "layout.m"
      {
#line 120 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 120 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 120 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 120 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 120 "layout.m"
        MR_Word ll_backend__layout__V_8_8;

#line 120 "layout.m"
        {
#line 120 "layout.m"
          ll_backend__layout____Compare____basic_label_layout_0_0(&ll_backend__layout__V_8_8, ll_backend__layout__V_4_4, ll_backend__layout__V_6_6);
        }
#line 13138 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == (MR_Integer) 0);
#line 120 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 120 "layout.m"
        if (ll_backend__layout__succeeded)
#line 120 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_8_8;
#line 120 "layout.m"
        else
#line 120 "layout.m"
          {
#line 120 "layout.m"
            ll_backend__layout____Compare____label_short_var_info_0_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_5_5, ll_backend__layout__V_7_7);
#line 120 "layout.m"
            return;
          }
#line 120 "layout.m"
      }
#line 120 "layout.m"
  }
#line 120 "layout.m"
}

#line 120 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_short_vars_0_0(
#line 120 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 120 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 120 "layout.m"
{
#line 120 "layout.m"
  {
#line 120 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 120 "layout.m"
    MR_Integer ll_backend__layout__CastX_7 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 120 "layout.m"
    MR_Integer ll_backend__layout__CastY_8 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 120 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_7 == ll_backend__layout__CastY_8);
#line 120 "layout.m"
    if (ll_backend__layout__succeeded)
#line 120 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 120 "layout.m"
    else
#line 120 "layout.m"
      {
#line 120 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 120 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 120 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 120 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));

#line 13199 "ll_backend.layout.c"
        {
#line 13201 "ll_backend.layout.c"
          ll_backend__layout__succeeded = ll_backend__layout____Unify____basic_label_layout_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5);
        }
#line 120 "layout.m"
        if (ll_backend__layout__succeeded)
#line 13206 "ll_backend.layout.c"
          {
#line 13208 "ll_backend.layout.c"
            return ll_backend__layout__succeeded = ll_backend__layout____Unify____label_short_var_info_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_6_6);
          }
#line 120 "layout.m"
      }
#line 120 "layout.m"
    return ll_backend__layout__succeeded;
#line 120 "layout.m"
  }
#line 120 "layout.m"
}

#line 114 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____label_layout_no_vars_0_0(
#line 114 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 114 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 114 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 114 "layout.m"
{
#line 114 "layout.m"
  {
#line 114 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 114 "layout.m"
    MR_Integer ll_backend__layout__CastX_6 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 114 "layout.m"
    MR_Integer ll_backend__layout__CastY_7 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 114 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_6 == ll_backend__layout__CastY_7);
#line 114 "layout.m"
    if (ll_backend__layout__succeeded)
#line 13244 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 114 "layout.m"
    else
#line 114 "layout.m"
      {
#line 114 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = (MR_Word) ll_backend__layout__HeadVar__2_2;
#line 114 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = (MR_Word) ll_backend__layout__HeadVar__3_3;

#line 114 "layout.m"
        {
#line 114 "layout.m"
          ll_backend__layout____Compare____basic_label_layout_0_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_4_4, ll_backend__layout__V_5_5);
#line 114 "layout.m"
          return;
        }
#line 114 "layout.m"
      }
#line 114 "layout.m"
  }
#line 114 "layout.m"
}

#line 114 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_no_vars_0_0(
#line 114 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 114 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 114 "layout.m"
{
#line 114 "layout.m"
  {
#line 114 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 114 "layout.m"
    MR_Integer ll_backend__layout__CastX_5 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 114 "layout.m"
    MR_Integer ll_backend__layout__CastY_6 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 114 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_5 == ll_backend__layout__CastY_6);
#line 114 "layout.m"
    if (ll_backend__layout__succeeded)
#line 114 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 114 "layout.m"
    else
#line 114 "layout.m"
      {
#line 114 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = (MR_Word) ll_backend__layout__HeadVar__1_1;
#line 114 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = (MR_Word) ll_backend__layout__HeadVar__2_2;

#line 13302 "ll_backend.layout.c"
        {
#line 13304 "ll_backend.layout.c"
          return ll_backend__layout__succeeded = ll_backend__layout____Unify____basic_label_layout_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_4_4);
        }
#line 114 "layout.m"
      }
#line 114 "layout.m"
    return ll_backend__layout__succeeded;
#line 114 "layout.m"
  }
#line 114 "layout.m"
}

#line 127 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____label_layout_long_vars_0_0(
#line 127 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 127 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 127 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 127 "layout.m"
{
#line 127 "layout.m"
  {
#line 127 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 127 "layout.m"
    MR_Integer ll_backend__layout__CastX_9 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 127 "layout.m"
    MR_Integer ll_backend__layout__CastY_10 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 127 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_9 == ll_backend__layout__CastY_10);
#line 127 "layout.m"
    if (ll_backend__layout__succeeded)
#line 13340 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 127 "layout.m"
    else
#line 127 "layout.m"
      {
#line 127 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 127 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 127 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 127 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 127 "layout.m"
        MR_Word ll_backend__layout__V_8_8;

#line 127 "layout.m"
        {
#line 127 "layout.m"
          ll_backend__layout____Compare____basic_label_layout_0_0(&ll_backend__layout__V_8_8, ll_backend__layout__V_4_4, ll_backend__layout__V_6_6);
        }
#line 13362 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == (MR_Integer) 0);
#line 127 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 127 "layout.m"
        if (ll_backend__layout__succeeded)
#line 127 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_8_8;
#line 127 "layout.m"
        else
#line 127 "layout.m"
          {
#line 127 "layout.m"
            ll_backend__layout____Compare____label_long_var_info_0_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_5_5, ll_backend__layout__V_7_7);
#line 127 "layout.m"
            return;
          }
#line 127 "layout.m"
      }
#line 127 "layout.m"
  }
#line 127 "layout.m"
}

#line 127 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_long_vars_0_0(
#line 127 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 127 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 127 "layout.m"
{
#line 127 "layout.m"
  {
#line 127 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 127 "layout.m"
    MR_Integer ll_backend__layout__CastX_7 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 127 "layout.m"
    MR_Integer ll_backend__layout__CastY_8 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 127 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_7 == ll_backend__layout__CastY_8);
#line 127 "layout.m"
    if (ll_backend__layout__succeeded)
#line 127 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 127 "layout.m"
    else
#line 127 "layout.m"
      {
#line 127 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 127 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 127 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 127 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));

#line 13423 "ll_backend.layout.c"
        {
#line 13425 "ll_backend.layout.c"
          ll_backend__layout__succeeded = ll_backend__layout____Unify____basic_label_layout_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5);
        }
#line 127 "layout.m"
        if (ll_backend__layout__succeeded)
#line 13430 "ll_backend.layout.c"
          {
#line 13432 "ll_backend.layout.c"
            return ll_backend__layout__succeeded = ll_backend__layout____Unify____label_long_var_info_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_6_6);
          }
#line 127 "layout.m"
      }
#line 127 "layout.m"
    return ll_backend__layout__succeeded;
#line 127 "layout.m"
  }
#line 127 "layout.m"
}

#line 291 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____file_layout_data_0_0(
#line 291 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 291 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 291 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 291 "layout.m"
{
#line 291 "layout.m"
  {
#line 291 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 291 "layout.m"
    MR_Integer ll_backend__layout__CastX_9 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 291 "layout.m"
    MR_Integer ll_backend__layout__CastY_10 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 291 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_9 == ll_backend__layout__CastY_10);
#line 291 "layout.m"
    if (ll_backend__layout__succeeded)
#line 13468 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 291 "layout.m"
    else
#line 291 "layout.m"
      {
#line 291 "layout.m"
        MR_String ll_backend__layout__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 291 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 291 "layout.m"
        MR_String ll_backend__layout__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 291 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 291 "layout.m"
        MR_Word ll_backend__layout__V_8_8;

#line 291 "layout.m"
        {
#line 291 "layout.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__layout__V_8_8, ll_backend__layout__V_4_4, ll_backend__layout__V_6_6);
        }
#line 13490 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == (MR_Integer) 0);
#line 291 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 291 "layout.m"
        if (ll_backend__layout__succeeded)
#line 291 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_8_8;
#line 291 "layout.m"
        else
#line 291 "layout.m"
          {
#line 291 "layout.m"
            {
#line 291 "layout.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[4], ll_backend__layout__HeadVar__1_1, ((MR_Box) (ll_backend__layout__V_5_5)), ((MR_Box) (ll_backend__layout__V_7_7)));
#line 291 "layout.m"
              return;
            }
#line 291 "layout.m"
          }
#line 291 "layout.m"
      }
#line 291 "layout.m"
  }
#line 291 "layout.m"
}

#line 291 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____file_layout_data_0_0(
#line 291 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 291 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 291 "layout.m"
{
#line 291 "layout.m"
  {
#line 291 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 291 "layout.m"
    MR_Integer ll_backend__layout__CastX_7 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 291 "layout.m"
    MR_Integer ll_backend__layout__CastY_8 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 291 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_7 == ll_backend__layout__CastY_8);
#line 291 "layout.m"
    if (ll_backend__layout__succeeded)
#line 291 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 291 "layout.m"
    else
#line 291 "layout.m"
      {
#line 291 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_9_9;
#line 291 "layout.m"
        MR_String ll_backend__layout__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 291 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 291 "layout.m"
        MR_String ll_backend__layout__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 291 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));

#line 13557 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (strcmp(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5) == 0);
#line 291 "layout.m"
        if (ll_backend__layout__succeeded)
#line 291 "layout.m"
          {
#line 13563 "ll_backend.layout.c"
            ll_backend__layout__TypeInfo_9_9 = (MR_Word) &ll_backend__layout_scalar_common_1[4];
#line 13565 "ll_backend.layout.c"
            {
#line 13567 "ll_backend.layout.c"
              return ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_9_9, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_6_6)));
            }
#line 291 "layout.m"
          }
#line 291 "layout.m"
      }
#line 291 "layout.m"
    return ll_backend__layout__succeeded;
#line 291 "layout.m"
  }
#line 291 "layout.m"
}

#line 282 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____event_set_layout_data_0_0(
#line 282 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 282 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 282 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 282 "layout.m"
{
#line 282 "layout.m"
  {
#line 282 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 282 "layout.m"
    MR_Integer ll_backend__layout__CastX_9 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 282 "layout.m"
    MR_Integer ll_backend__layout__CastY_10 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 282 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_9 == ll_backend__layout__CastY_10);
#line 282 "layout.m"
    if (ll_backend__layout__succeeded)
#line 13605 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 282 "layout.m"
    else
#line 282 "layout.m"
      {
#line 282 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 282 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 282 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 282 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 282 "layout.m"
        MR_Word ll_backend__layout__V_8_8;

#line 282 "layout.m"
        {
#line 282 "layout.m"
          parse_tree__prog_data____Compare____event_set_data_0_0(&ll_backend__layout__V_8_8, ll_backend__layout__V_4_4, ll_backend__layout__V_6_6);
        }
#line 13627 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == (MR_Integer) 0);
#line 282 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 282 "layout.m"
        if (ll_backend__layout__succeeded)
#line 282 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_8_8;
#line 282 "layout.m"
        else
#line 282 "layout.m"
          {
#line 282 "layout.m"
            {
#line 282 "layout.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_2[0], ll_backend__layout__HeadVar__1_1, ((MR_Box) (ll_backend__layout__V_5_5)), ((MR_Box) (ll_backend__layout__V_7_7)));
#line 282 "layout.m"
              return;
            }
#line 282 "layout.m"
          }
#line 282 "layout.m"
      }
#line 282 "layout.m"
  }
#line 282 "layout.m"
}

#line 282 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____event_set_layout_data_0_0(
#line 282 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 282 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 282 "layout.m"
{
#line 282 "layout.m"
  {
#line 282 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 282 "layout.m"
    MR_Integer ll_backend__layout__CastX_7 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 282 "layout.m"
    MR_Integer ll_backend__layout__CastY_8 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 282 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_7 == ll_backend__layout__CastY_8);
#line 282 "layout.m"
    if (ll_backend__layout__succeeded)
#line 282 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 282 "layout.m"
    else
#line 282 "layout.m"
      {
#line 282 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_10_10;
#line 282 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 282 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 282 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 282 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));

#line 13694 "ll_backend.layout.c"
        {
#line 13696 "ll_backend.layout.c"
          ll_backend__layout__succeeded = parse_tree__prog_data____Unify____event_set_data_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5);
        }
#line 282 "layout.m"
        if (ll_backend__layout__succeeded)
#line 282 "layout.m"
          {
#line 13703 "ll_backend.layout.c"
            ll_backend__layout__TypeInfo_10_10 = (MR_Word) &ll_backend__layout_scalar_common_2[0];
#line 13705 "ll_backend.layout.c"
            {
#line 13707 "ll_backend.layout.c"
              return ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_10_10, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_6_6)));
            }
#line 282 "layout.m"
          }
#line 282 "layout.m"
      }
#line 282 "layout.m"
    return ll_backend__layout__succeeded;
#line 282 "layout.m"
  }
#line 282 "layout.m"
}

#line 160 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____deep_excp_slots_0_0(
#line 160 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 160 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 160 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 160 "layout.m"
{
#line 160 "layout.m"
  {
#line 160 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 160 "layout.m"
    MR_Integer ll_backend__layout__CastX_12 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 160 "layout.m"
    MR_Integer ll_backend__layout__CastY_13 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 160 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_12 == ll_backend__layout__CastY_13);
#line 160 "layout.m"
    if (ll_backend__layout__succeeded)
#line 13745 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 160 "layout.m"
    else
#line 160 "layout.m"
      {
#line 160 "layout.m"
        MR_Integer ll_backend__layout__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 160 "layout.m"
        MR_Integer ll_backend__layout__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 160 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 160 "layout.m"
        MR_Integer ll_backend__layout__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 160 "layout.m"
        MR_Integer ll_backend__layout__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 160 "layout.m"
        MR_Integer ll_backend__layout__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 160 "layout.m"
        MR_Word ll_backend__layout__V_10_10;

#line 160 "layout.m"
        {
#line 160 "layout.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_10_10, ll_backend__layout__V_4_4, ll_backend__layout__V_7_7);
        }
#line 13771 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_10_10 == (MR_Integer) 0);
#line 160 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 160 "layout.m"
        if (ll_backend__layout__succeeded)
#line 160 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_10_10;
#line 160 "layout.m"
        else
#line 160 "layout.m"
          {
#line 160 "layout.m"
            MR_Word ll_backend__layout__V_11_11;

#line 160 "layout.m"
            {
#line 160 "layout.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_11_11, ll_backend__layout__V_5_5, ll_backend__layout__V_8_8);
            }
#line 13791 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_11_11 == (MR_Integer) 0);
#line 160 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 160 "layout.m"
            if (ll_backend__layout__succeeded)
#line 160 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_11_11;
#line 160 "layout.m"
            else
#line 160 "layout.m"
              {
#line 160 "layout.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_6_6, ll_backend__layout__V_9_9);
#line 160 "layout.m"
                return;
              }
#line 160 "layout.m"
          }
#line 160 "layout.m"
      }
#line 160 "layout.m"
  }
#line 160 "layout.m"
}

#line 160 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____deep_excp_slots_0_0(
#line 160 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 160 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 160 "layout.m"
{
#line 160 "layout.m"
  {
#line 160 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 160 "layout.m"
    MR_Integer ll_backend__layout__CastX_9 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 160 "layout.m"
    MR_Integer ll_backend__layout__CastY_10 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 160 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_9 == ll_backend__layout__CastY_10);
#line 160 "layout.m"
    if (ll_backend__layout__succeeded)
#line 160 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 160 "layout.m"
    else
#line 160 "layout.m"
      {
#line 160 "layout.m"
        MR_Integer ll_backend__layout__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 160 "layout.m"
        MR_Integer ll_backend__layout__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 160 "layout.m"
        MR_Integer ll_backend__layout__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 160 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 160 "layout.m"
        MR_Integer ll_backend__layout__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 160 "layout.m"
        MR_Integer ll_backend__layout__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));

#line 13858 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_3_3 == ll_backend__layout__V_6_6);
#line 160 "layout.m"
        if (ll_backend__layout__succeeded)
#line 160 "layout.m"
          {
#line 13864 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 == ll_backend__layout__V_7_7);
#line 160 "layout.m"
            if (ll_backend__layout__succeeded)
#line 13868 "ll_backend.layout.c"
              ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_8_8);
#line 160 "layout.m"
          }
#line 160 "layout.m"
      }
#line 160 "layout.m"
    return ll_backend__layout__succeeded;
#line 160 "layout.m"
  }
#line 160 "layout.m"
}

#line 208 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____data_or_slot_id_0_0(
#line 208 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 208 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 208 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 208 "layout.m"
{
#line 208 "layout.m"
  {
#line 208 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 208 "layout.m"
    MR_Integer ll_backend__layout__CastX_12 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 208 "layout.m"
    MR_Integer ll_backend__layout__CastY_13 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 208 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_12 == ll_backend__layout__CastY_13);
#line 208 "layout.m"
    if (ll_backend__layout__succeeded)
#line 13905 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 208 "layout.m"
    else
#line 208 "layout.m"
      if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 208 "layout.m"
        {
#line 208 "layout.m"
          MR_Word ll_backend__layout__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));

#line 208 "layout.m"
          if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 208 "layout.m"
            {
#line 208 "layout.m"
              MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));

#line 208 "layout.m"
              {
#line 208 "layout.m"
                ll_backend__llds____Compare____data_id_0_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_16_16, ll_backend__layout__V_5_5);
#line 208 "layout.m"
                return;
              }
#line 208 "layout.m"
            }
#line 208 "layout.m"
          else
#line 13934 "ll_backend.layout.c"
            *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 1;
#line 208 "layout.m"
        }
#line 208 "layout.m"
      else
#line 208 "layout.m"
        {
#line 208 "layout.m"
          MR_Word ll_backend__layout__V_17_17 = (MR_Word) MR_body(((MR_Word) ll_backend__layout__HeadVar__2_2), (MR_Integer) 0);

#line 208 "layout.m"
          if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 13947 "ll_backend.layout.c"
            *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 2;
#line 208 "layout.m"
          else
#line 208 "layout.m"
            {
#line 208 "layout.m"
              MR_Word ll_backend__layout__V_11_11 = (MR_Word) MR_body(((MR_Word) ll_backend__layout__HeadVar__3_3), (MR_Integer) 0);

#line 208 "layout.m"
              {
#line 208 "layout.m"
                ll_backend__layout____Compare____layout_slot_name_0_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_17_17, ll_backend__layout__V_11_11);
#line 208 "layout.m"
                return;
              }
#line 208 "layout.m"
            }
#line 208 "layout.m"
        }
#line 208 "layout.m"
  }
#line 208 "layout.m"
}

#line 208 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____data_or_slot_id_0_0(
#line 208 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 208 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 208 "layout.m"
{
#line 208 "layout.m"
  {
#line 208 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 208 "layout.m"
    MR_Integer ll_backend__layout__CastX_7 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 208 "layout.m"
    MR_Integer ll_backend__layout__CastY_8 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 208 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_7 == ll_backend__layout__CastY_8);
#line 208 "layout.m"
    if (ll_backend__layout__succeeded)
#line 208 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 208 "layout.m"
    else
#line 208 "layout.m"
      if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 208 "layout.m"
        {
#line 208 "layout.m"
          MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 208 "layout.m"
          MR_Word ll_backend__layout__V_4_4;

#line 208 "layout.m"
          ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 208 "layout.m"
          if (ll_backend__layout__succeeded)
#line 208 "layout.m"
            {
#line 208 "layout.m"
              ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 14015 "ll_backend.layout.c"
              {
#line 14017 "ll_backend.layout.c"
                return ll_backend__layout__succeeded = ll_backend__llds____Unify____data_id_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_4_4);
              }
#line 208 "layout.m"
            }
#line 208 "layout.m"
        }
#line 208 "layout.m"
      else
#line 208 "layout.m"
        {
#line 208 "layout.m"
          MR_Word ll_backend__layout__V_5_5 = (MR_Word) MR_body(((MR_Word) ll_backend__layout__HeadVar__1_1), (MR_Integer) 0);
#line 208 "layout.m"
          MR_Word ll_backend__layout__V_6_6;

#line 208 "layout.m"
          ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 208 "layout.m"
          if (ll_backend__layout__succeeded)
#line 208 "layout.m"
            {
#line 208 "layout.m"
              ll_backend__layout__V_6_6 = (MR_Word) MR_body(((MR_Word) ll_backend__layout__HeadVar__2_2), (MR_Integer) 0);
#line 14041 "ll_backend.layout.c"
              {
#line 14043 "ll_backend.layout.c"
                return ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_slot_name_0_0(ll_backend__layout__V_5_5, ll_backend__layout__V_6_6);
              }
#line 208 "layout.m"
            }
#line 208 "layout.m"
        }
#line 208 "layout.m"
    return ll_backend__layout__succeeded;
#line 208 "layout.m"
  }
#line 208 "layout.m"
}

#line 56 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____closure_proc_id_data_0_0(
#line 56 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 56 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 56 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 56 "layout.m"
{
#line 56 "layout.m"
  {
#line 56 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 56 "layout.m"
    MR_Integer ll_backend__layout__CastX_27 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 56 "layout.m"
    MR_Integer ll_backend__layout__CastY_28 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 56 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_27 == ll_backend__layout__CastY_28);
#line 56 "layout.m"
    if (ll_backend__layout__succeeded)
#line 14081 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 56 "layout.m"
    else
#line 56 "layout.m"
      {
#line 56 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 56 "layout.m"
        MR_Integer ll_backend__layout__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 56 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 56 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 56 "layout.m"
        MR_String ll_backend__layout__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 56 "layout.m"
        MR_Integer ll_backend__layout__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 5)));
#line 56 "layout.m"
        MR_Word ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 6)));
#line 56 "layout.m"
        MR_String ll_backend__layout__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 7)));
#line 56 "layout.m"
        MR_Word ll_backend__layout__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 56 "layout.m"
        MR_Integer ll_backend__layout__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 56 "layout.m"
        MR_Word ll_backend__layout__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 56 "layout.m"
        MR_Word ll_backend__layout__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 56 "layout.m"
        MR_String ll_backend__layout__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 4)));
#line 56 "layout.m"
        MR_Integer ll_backend__layout__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 5)));
#line 56 "layout.m"
        MR_Word ll_backend__layout__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 6)));
#line 56 "layout.m"
        MR_String ll_backend__layout__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 7)));
#line 56 "layout.m"
        MR_Word ll_backend__layout__V_20_20;

#line 56 "layout.m"
        {
#line 56 "layout.m"
          mdbcomp__prim_data____Compare____proc_label_0_0(&ll_backend__layout__V_20_20, ll_backend__layout__V_4_4, ll_backend__layout__V_12_12);
        }
#line 14127 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_20_20 == (MR_Integer) 0);
#line 56 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 56 "layout.m"
        if (ll_backend__layout__succeeded)
#line 56 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_20_20;
#line 56 "layout.m"
        else
#line 56 "layout.m"
          {
#line 56 "layout.m"
            MR_Word ll_backend__layout__V_21_21;

#line 56 "layout.m"
            {
#line 56 "layout.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_21_21, ll_backend__layout__V_5_5, ll_backend__layout__V_13_13);
            }
#line 14147 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_21_21 == (MR_Integer) 0);
#line 56 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 56 "layout.m"
            if (ll_backend__layout__succeeded)
#line 56 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_21_21;
#line 56 "layout.m"
            else
#line 56 "layout.m"
              {
#line 56 "layout.m"
                MR_Word ll_backend__layout__V_22_22;

#line 56 "layout.m"
                {
#line 56 "layout.m"
                  mdbcomp__prim_data____Compare____proc_label_0_0(&ll_backend__layout__V_22_22, ll_backend__layout__V_6_6, ll_backend__layout__V_14_14);
                }
#line 14167 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_22_22 == (MR_Integer) 0);
#line 56 "layout.m"
                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 56 "layout.m"
                if (ll_backend__layout__succeeded)
#line 56 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_22_22;
#line 56 "layout.m"
                else
#line 56 "layout.m"
                  {
#line 56 "layout.m"
                    MR_Word ll_backend__layout__V_23_23;

#line 56 "layout.m"
                    {
#line 56 "layout.m"
                      mdbcomp__sym_name____Compare____sym_name_0_0(&ll_backend__layout__V_23_23, ll_backend__layout__V_7_7, ll_backend__layout__V_15_15);
                    }
#line 14187 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_23_23 == (MR_Integer) 0);
#line 56 "layout.m"
                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 56 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 56 "layout.m"
                      *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_23_23;
#line 56 "layout.m"
                    else
#line 56 "layout.m"
                      {
#line 56 "layout.m"
                        MR_Word ll_backend__layout__V_24_24;

#line 56 "layout.m"
                        {
#line 56 "layout.m"
                          mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__layout__V_24_24, ll_backend__layout__V_8_8, ll_backend__layout__V_16_16);
                        }
#line 14207 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (ll_backend__layout__V_24_24 == (MR_Integer) 0);
#line 56 "layout.m"
                        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 56 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 56 "layout.m"
                          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_24_24;
#line 56 "layout.m"
                        else
#line 56 "layout.m"
                          {
#line 56 "layout.m"
                            MR_Word ll_backend__layout__V_25_25;

#line 56 "layout.m"
                            {
#line 56 "layout.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_25_25, ll_backend__layout__V_9_9, ll_backend__layout__V_17_17);
                            }
#line 14227 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = (ll_backend__layout__V_25_25 == (MR_Integer) 0);
#line 56 "layout.m"
                            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 56 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 56 "layout.m"
                              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_25_25;
#line 56 "layout.m"
                            else
#line 56 "layout.m"
                              {
#line 56 "layout.m"
                                MR_Word ll_backend__layout__V_26_26;

#line 56 "layout.m"
                                {
#line 56 "layout.m"
                                  hlds__hlds_pred____Compare____pred_origin_0_0(&ll_backend__layout__V_26_26, ll_backend__layout__V_10_10, ll_backend__layout__V_18_18);
                                }
#line 14247 "ll_backend.layout.c"
                                ll_backend__layout__succeeded = (ll_backend__layout__V_26_26 == (MR_Integer) 0);
#line 56 "layout.m"
                                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 56 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 56 "layout.m"
                                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_26_26;
#line 56 "layout.m"
                                else
#line 56 "layout.m"
                                  {
#line 56 "layout.m"
                                    mercury__private_builtin__builtin_compare_string_3_p_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_11_11, ll_backend__layout__V_19_19);
#line 56 "layout.m"
                                    return;
                                  }
#line 56 "layout.m"
                              }
#line 56 "layout.m"
                          }
#line 56 "layout.m"
                      }
#line 56 "layout.m"
                  }
#line 56 "layout.m"
              }
#line 56 "layout.m"
          }
#line 56 "layout.m"
      }
#line 56 "layout.m"
  }
#line 56 "layout.m"
}

#line 56 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____closure_proc_id_data_0_0(
#line 56 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 56 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 56 "layout.m"
{
#line 56 "layout.m"
  {
#line 56 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 56 "layout.m"
    MR_Integer ll_backend__layout__CastX_19 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 56 "layout.m"
    MR_Integer ll_backend__layout__CastY_20 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 56 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_19 == ll_backend__layout__CastY_20);
#line 56 "layout.m"
    if (ll_backend__layout__succeeded)
#line 56 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 56 "layout.m"
    else
#line 56 "layout.m"
      {
#line 56 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 56 "layout.m"
        MR_Integer ll_backend__layout__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 56 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 56 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 56 "layout.m"
        MR_String ll_backend__layout__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 4)));
#line 56 "layout.m"
        MR_Integer ll_backend__layout__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 5)));
#line 56 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 6)));
#line 56 "layout.m"
        MR_String ll_backend__layout__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 7)));
#line 56 "layout.m"
        MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 56 "layout.m"
        MR_Integer ll_backend__layout__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 56 "layout.m"
        MR_Word ll_backend__layout__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 56 "layout.m"
        MR_Word ll_backend__layout__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 56 "layout.m"
        MR_String ll_backend__layout__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 56 "layout.m"
        MR_Integer ll_backend__layout__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 5)));
#line 56 "layout.m"
        MR_Word ll_backend__layout__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 6)));
#line 56 "layout.m"
        MR_String ll_backend__layout__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 7)));

#line 14344 "ll_backend.layout.c"
        {
#line 14346 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_11_11);
        }
#line 56 "layout.m"
        if (ll_backend__layout__succeeded)
#line 56 "layout.m"
          {
#line 14353 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 == ll_backend__layout__V_12_12);
#line 56 "layout.m"
            if (ll_backend__layout__succeeded)
#line 56 "layout.m"
              {
#line 14359 "ll_backend.layout.c"
                {
#line 14361 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__layout__V_5_5, ll_backend__layout__V_13_13);
                }
#line 56 "layout.m"
                if (ll_backend__layout__succeeded)
#line 56 "layout.m"
                  {
#line 14368 "ll_backend.layout.c"
                    {
#line 14370 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_6_6, ll_backend__layout__V_14_14);
                    }
#line 56 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 56 "layout.m"
                      {
#line 14377 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (strcmp(ll_backend__layout__V_7_7, ll_backend__layout__V_15_15) == 0);
#line 56 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 56 "layout.m"
                          {
#line 14383 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == ll_backend__layout__V_16_16);
#line 56 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 56 "layout.m"
                              {
#line 14389 "ll_backend.layout.c"
                                {
#line 14391 "ll_backend.layout.c"
                                  ll_backend__layout__succeeded = hlds__hlds_pred____Unify____pred_origin_0_0(ll_backend__layout__V_9_9, ll_backend__layout__V_17_17);
                                }
#line 56 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 14396 "ll_backend.layout.c"
                                  ll_backend__layout__succeeded = (strcmp(ll_backend__layout__V_10_10, ll_backend__layout__V_18_18) == 0);
#line 56 "layout.m"
                              }
#line 56 "layout.m"
                          }
#line 56 "layout.m"
                      }
#line 56 "layout.m"
                  }
#line 56 "layout.m"
              }
#line 56 "layout.m"
          }
#line 56 "layout.m"
      }
#line 56 "layout.m"
    return ll_backend__layout__succeeded;
#line 56 "layout.m"
  }
#line 56 "layout.m"
}

#line 81 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____basic_label_layout_0_0(
#line 81 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 81 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 81 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 81 "layout.m"
{
#line 81 "layout.m"
  {
#line 81 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 81 "layout.m"
    MR_Integer ll_backend__layout__CastX_27 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 81 "layout.m"
    MR_Integer ll_backend__layout__CastY_28 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 81 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_27 == ll_backend__layout__CastY_28);
#line 81 "layout.m"
    if (ll_backend__layout__succeeded)
#line 14443 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 81 "layout.m"
    else
#line 81 "layout.m"
      {
#line 81 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 81 "layout.m"
        MR_Integer ll_backend__layout__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 81 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 81 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 81 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 81 "layout.m"
        MR_Integer ll_backend__layout__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 5)));
#line 81 "layout.m"
        MR_Word ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 6)));
#line 81 "layout.m"
        MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 7)));
#line 81 "layout.m"
        MR_Word ll_backend__layout__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 81 "layout.m"
        MR_Integer ll_backend__layout__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 81 "layout.m"
        MR_Word ll_backend__layout__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 81 "layout.m"
        MR_Word ll_backend__layout__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 81 "layout.m"
        MR_Word ll_backend__layout__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 4)));
#line 81 "layout.m"
        MR_Integer ll_backend__layout__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 5)));
#line 81 "layout.m"
        MR_Word ll_backend__layout__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 6)));
#line 81 "layout.m"
        MR_Word ll_backend__layout__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 7)));
#line 81 "layout.m"
        MR_Word ll_backend__layout__V_20_20;

#line 81 "layout.m"
        {
#line 81 "layout.m"
          mdbcomp__prim_data____Compare____proc_label_0_0(&ll_backend__layout__V_20_20, ll_backend__layout__V_4_4, ll_backend__layout__V_12_12);
        }
#line 14489 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_20_20 == (MR_Integer) 0);
#line 81 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 81 "layout.m"
        if (ll_backend__layout__succeeded)
#line 81 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_20_20;
#line 81 "layout.m"
        else
#line 81 "layout.m"
          {
#line 81 "layout.m"
            MR_Word ll_backend__layout__V_21_21;

#line 81 "layout.m"
            {
#line 81 "layout.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_21_21, ll_backend__layout__V_5_5, ll_backend__layout__V_13_13);
            }
#line 14509 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_21_21 == (MR_Integer) 0);
#line 81 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 81 "layout.m"
            if (ll_backend__layout__succeeded)
#line 81 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_21_21;
#line 81 "layout.m"
            else
#line 81 "layout.m"
              {
#line 81 "layout.m"
                MR_Word ll_backend__layout__V_22_22;

#line 81 "layout.m"
                {
#line 81 "layout.m"
                  ll_backend__layout____Compare____layout_name_0_0(&ll_backend__layout__V_22_22, ll_backend__layout__V_6_6, ll_backend__layout__V_14_14);
                }
#line 14529 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_22_22 == (MR_Integer) 0);
#line 81 "layout.m"
                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 81 "layout.m"
                if (ll_backend__layout__succeeded)
#line 81 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_22_22;
#line 81 "layout.m"
                else
#line 81 "layout.m"
                  {
#line 81 "layout.m"
                    MR_Word ll_backend__layout__V_23_23;

#line 81 "layout.m"
                    {
#line 81 "layout.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[0], &ll_backend__layout__V_23_23, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_15_15)));
                    }
#line 14549 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_23_23 == (MR_Integer) 0);
#line 81 "layout.m"
                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 81 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 81 "layout.m"
                      *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_23_23;
#line 81 "layout.m"
                    else
#line 81 "layout.m"
                      {
#line 81 "layout.m"
                        MR_Word ll_backend__layout__V_24_24;

#line 81 "layout.m"
                        {
#line 81 "layout.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[1], &ll_backend__layout__V_24_24, ((MR_Box) (ll_backend__layout__V_8_8)), ((MR_Box) (ll_backend__layout__V_16_16)));
                        }
#line 14569 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (ll_backend__layout__V_24_24 == (MR_Integer) 0);
#line 81 "layout.m"
                        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 81 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 81 "layout.m"
                          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_24_24;
#line 81 "layout.m"
                        else
#line 81 "layout.m"
                          {
#line 81 "layout.m"
                            MR_Word ll_backend__layout__V_25_25;

#line 81 "layout.m"
                            {
#line 81 "layout.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_25_25, ll_backend__layout__V_9_9, ll_backend__layout__V_17_17);
                            }
#line 14589 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = (ll_backend__layout__V_25_25 == (MR_Integer) 0);
#line 81 "layout.m"
                            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 81 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 81 "layout.m"
                              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_25_25;
#line 81 "layout.m"
                            else
#line 81 "layout.m"
                              {
#line 81 "layout.m"
                                MR_Word ll_backend__layout__V_26_26;

#line 81 "layout.m"
                                {
#line 81 "layout.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[2], &ll_backend__layout__V_26_26, ((MR_Box) (ll_backend__layout__V_10_10)), ((MR_Box) (ll_backend__layout__V_18_18)));
                                }
#line 14609 "ll_backend.layout.c"
                                ll_backend__layout__succeeded = (ll_backend__layout__V_26_26 == (MR_Integer) 0);
#line 81 "layout.m"
                                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 81 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 81 "layout.m"
                                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_26_26;
#line 81 "layout.m"
                                else
#line 81 "layout.m"
                                  {
#line 81 "layout.m"
                                    {
#line 81 "layout.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[3], ll_backend__layout__HeadVar__1_1, ((MR_Box) (ll_backend__layout__V_11_11)), ((MR_Box) (ll_backend__layout__V_19_19)));
#line 81 "layout.m"
                                      return;
                                    }
#line 81 "layout.m"
                                  }
#line 81 "layout.m"
                              }
#line 81 "layout.m"
                          }
#line 81 "layout.m"
                      }
#line 81 "layout.m"
                  }
#line 81 "layout.m"
              }
#line 81 "layout.m"
          }
#line 81 "layout.m"
      }
#line 81 "layout.m"
  }
#line 81 "layout.m"
}

#line 81 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____basic_label_layout_0_0(
#line 81 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 81 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 81 "layout.m"
{
#line 81 "layout.m"
  {
#line 81 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 81 "layout.m"
    MR_Integer ll_backend__layout__CastX_19 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 81 "layout.m"
    MR_Integer ll_backend__layout__CastY_20 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 81 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_19 == ll_backend__layout__CastY_20);
#line 81 "layout.m"
    if (ll_backend__layout__succeeded)
#line 81 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 81 "layout.m"
    else
#line 81 "layout.m"
      {
#line 81 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_22_22;
#line 81 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_23_23;
#line 81 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_24_24;
#line 81 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_25_25;
#line 81 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 81 "layout.m"
        MR_Integer ll_backend__layout__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 81 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 81 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 81 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 4)));
#line 81 "layout.m"
        MR_Integer ll_backend__layout__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 5)));
#line 81 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 6)));
#line 81 "layout.m"
        MR_Word ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 7)));
#line 81 "layout.m"
        MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 81 "layout.m"
        MR_Integer ll_backend__layout__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 81 "layout.m"
        MR_Word ll_backend__layout__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 81 "layout.m"
        MR_Word ll_backend__layout__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 81 "layout.m"
        MR_Word ll_backend__layout__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 81 "layout.m"
        MR_Integer ll_backend__layout__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 5)));
#line 81 "layout.m"
        MR_Word ll_backend__layout__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 6)));
#line 81 "layout.m"
        MR_Word ll_backend__layout__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 7)));

#line 14718 "ll_backend.layout.c"
        {
#line 14720 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_11_11);
        }
#line 81 "layout.m"
        if (ll_backend__layout__succeeded)
#line 81 "layout.m"
          {
#line 14727 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 == ll_backend__layout__V_12_12);
#line 81 "layout.m"
            if (ll_backend__layout__succeeded)
#line 81 "layout.m"
              {
#line 14733 "ll_backend.layout.c"
                {
#line 14735 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_name_0_0(ll_backend__layout__V_5_5, ll_backend__layout__V_13_13);
                }
#line 81 "layout.m"
                if (ll_backend__layout__succeeded)
#line 81 "layout.m"
                  {
#line 14742 "ll_backend.layout.c"
                    ll_backend__layout__TypeInfo_22_22 = (MR_Word) &ll_backend__layout_scalar_common_1[0];
#line 14744 "ll_backend.layout.c"
                    {
#line 14746 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_22_22, ((MR_Box) (ll_backend__layout__V_6_6)), ((MR_Box) (ll_backend__layout__V_14_14)));
                    }
#line 81 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 81 "layout.m"
                      {
#line 14753 "ll_backend.layout.c"
                        ll_backend__layout__TypeInfo_23_23 = (MR_Word) &ll_backend__layout_scalar_common_1[1];
#line 14755 "ll_backend.layout.c"
                        {
#line 14757 "ll_backend.layout.c"
                          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_23_23, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_15_15)));
                        }
#line 81 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 81 "layout.m"
                          {
#line 14764 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == ll_backend__layout__V_16_16);
#line 81 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 81 "layout.m"
                              {
#line 14770 "ll_backend.layout.c"
                                ll_backend__layout__TypeInfo_24_24 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 14772 "ll_backend.layout.c"
                                {
#line 14774 "ll_backend.layout.c"
                                  ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_24_24, ((MR_Box) (ll_backend__layout__V_9_9)), ((MR_Box) (ll_backend__layout__V_17_17)));
                                }
#line 81 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 81 "layout.m"
                                  {
#line 14781 "ll_backend.layout.c"
                                    ll_backend__layout__TypeInfo_25_25 = (MR_Word) &ll_backend__layout_scalar_common_1[3];
#line 14783 "ll_backend.layout.c"
                                    {
#line 14785 "ll_backend.layout.c"
                                      return ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_25_25, ((MR_Box) (ll_backend__layout__V_10_10)), ((MR_Box) (ll_backend__layout__V_18_18)));
                                    }
#line 81 "layout.m"
                                  }
#line 81 "layout.m"
                              }
#line 81 "layout.m"
                          }
#line 81 "layout.m"
                      }
#line 81 "layout.m"
                  }
#line 81 "layout.m"
              }
#line 81 "layout.m"
          }
#line 81 "layout.m"
      }
#line 81 "layout.m"
    return ll_backend__layout__succeeded;
#line 81 "layout.m"
  }
#line 81 "layout.m"
}

#line 336 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____alloc_site_info_0_0(
#line 336 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 336 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 336 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 336 "layout.m"
{
#line 336 "layout.m"
  {
#line 336 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 336 "layout.m"
    MR_Integer ll_backend__layout__CastX_15 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 336 "layout.m"
    MR_Integer ll_backend__layout__CastY_16 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 336 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_15 == ll_backend__layout__CastY_16);
#line 336 "layout.m"
    if (ll_backend__layout__succeeded)
#line 14835 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 336 "layout.m"
    else
#line 336 "layout.m"
      {
#line 336 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 336 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 336 "layout.m"
        MR_String ll_backend__layout__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 336 "layout.m"
        MR_Integer ll_backend__layout__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 336 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 336 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 336 "layout.m"
        MR_String ll_backend__layout__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 336 "layout.m"
        MR_Integer ll_backend__layout__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 336 "layout.m"
        MR_Word ll_backend__layout__V_12_12;

#line 336 "layout.m"
        {
#line 336 "layout.m"
          mdbcomp__prim_data____Compare____proc_label_0_0(&ll_backend__layout__V_12_12, ll_backend__layout__V_4_4, ll_backend__layout__V_8_8);
        }
#line 14865 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_12_12 == (MR_Integer) 0);
#line 336 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 336 "layout.m"
        if (ll_backend__layout__succeeded)
#line 336 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_12_12;
#line 336 "layout.m"
        else
#line 336 "layout.m"
          {
#line 336 "layout.m"
            MR_Word ll_backend__layout__V_13_13;

#line 336 "layout.m"
            {
#line 336 "layout.m"
              mercury__term____Compare____context_0_0(&ll_backend__layout__V_13_13, ll_backend__layout__V_5_5, ll_backend__layout__V_9_9);
            }
#line 14885 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_13_13 == (MR_Integer) 0);
#line 336 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 336 "layout.m"
            if (ll_backend__layout__succeeded)
#line 336 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_13_13;
#line 336 "layout.m"
            else
#line 336 "layout.m"
              {
#line 336 "layout.m"
                MR_Word ll_backend__layout__V_14_14;

#line 336 "layout.m"
                {
#line 336 "layout.m"
                  mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__layout__V_14_14, ll_backend__layout__V_6_6, ll_backend__layout__V_10_10);
                }
#line 14905 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_14_14 == (MR_Integer) 0);
#line 336 "layout.m"
                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 336 "layout.m"
                if (ll_backend__layout__succeeded)
#line 336 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_14_14;
#line 336 "layout.m"
                else
#line 336 "layout.m"
                  {
#line 336 "layout.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_7_7, ll_backend__layout__V_11_11);
#line 336 "layout.m"
                    return;
                  }
#line 336 "layout.m"
              }
#line 336 "layout.m"
          }
#line 336 "layout.m"
      }
#line 336 "layout.m"
  }
#line 336 "layout.m"
}

#line 336 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____alloc_site_info_0_0(
#line 336 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 336 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 336 "layout.m"
{
#line 336 "layout.m"
  {
#line 336 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 336 "layout.m"
    MR_Integer ll_backend__layout__CastX_11 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 336 "layout.m"
    MR_Integer ll_backend__layout__CastY_12 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 336 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_11 == ll_backend__layout__CastY_12);
#line 336 "layout.m"
    if (ll_backend__layout__succeeded)
#line 336 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 336 "layout.m"
    else
#line 336 "layout.m"
      {
#line 336 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 336 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 336 "layout.m"
        MR_String ll_backend__layout__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 336 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 336 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 336 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 336 "layout.m"
        MR_String ll_backend__layout__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 336 "layout.m"
        MR_Integer ll_backend__layout__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));

#line 14978 "ll_backend.layout.c"
        {
#line 14980 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_7_7);
        }
#line 336 "layout.m"
        if (ll_backend__layout__succeeded)
#line 336 "layout.m"
          {
#line 14987 "ll_backend.layout.c"
            {
#line 14989 "ll_backend.layout.c"
              ll_backend__layout__succeeded = mercury__term____Unify____context_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_8_8);
            }
#line 336 "layout.m"
            if (ll_backend__layout__succeeded)
#line 336 "layout.m"
              {
#line 14996 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (strcmp(ll_backend__layout__V_5_5, ll_backend__layout__V_9_9) == 0);
#line 336 "layout.m"
                if (ll_backend__layout__succeeded)
#line 15000 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = (ll_backend__layout__V_6_6 == ll_backend__layout__V_10_10);
#line 336 "layout.m"
              }
#line 336 "layout.m"
          }
#line 336 "layout.m"
      }
#line 336 "layout.m"
    return ll_backend__layout__succeeded;
#line 336 "layout.m"
  }
#line 336 "layout.m"
}

void mercury__ll_backend__layout__init(void)
{
}

void mercury__ll_backend__layout__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0);
	MR_register_type_ctor_info(&ll_backend__layout__ll_backend__layout__type_ctor_info_basic_label_layout_0);
	MR_register_type_ctor_info(&ll_backend__layout__ll_backend__layout__type_ctor_info_closure_proc_id_data_0);
	MR_register_type_ctor_info(&ll_backend__layout__ll_backend__layout__type_ctor_info_data_or_slot_id_0);
	MR_register_type_ctor_info(&ll_backend__layout__ll_backend__layout__type_ctor_info_deep_excp_slots_0);
	MR_register_type_ctor_info(&ll_backend__layout__ll_backend__layout__type_ctor_info_event_set_layout_data_0);
	MR_register_type_ctor_info(&ll_backend__layout__ll_backend__layout__type_ctor_info_file_layout_data_0);
	MR_register_type_ctor_info(&ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_long_vars_0);
	MR_register_type_ctor_info(&ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_no_vars_0);
	MR_register_type_ctor_info(&ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_short_vars_0);
	MR_register_type_ctor_info(&ll_backend__layout__ll_backend__layout__type_ctor_info_label_long_var_info_0);
	MR_register_type_ctor_info(&ll_backend__layout__ll_backend__layout__type_ctor_info_label_short_var_info_0);
	MR_register_type_ctor_info(&ll_backend__layout__ll_backend__layout__type_ctor_info_label_vars_0);
	MR_register_type_ctor_info(&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_array_name_0);
	MR_register_type_ctor_info(&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0);
	MR_register_type_ctor_info(&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0);
	MR_register_type_ctor_info(&ll_backend__layout__ll_backend__layout__type_ctor_info_maybe_proc_id_and_more_0);
	MR_register_type_ctor_info(&ll_backend__layout__ll_backend__layout__type_ctor_info_module_layout_data_0);
	MR_register_type_ctor_info(&ll_backend__layout__ll_backend__layout__type_ctor_info_module_layout_debug_0);
	MR_register_type_ctor_info(&ll_backend__layout__ll_backend__layout__type_ctor_info_module_layout_deep_prof_0);
	MR_register_type_ctor_info(&ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_data_0);
	MR_register_type_ctor_info(&ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_exec_trace_0);
	MR_register_type_ctor_info(&ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_kind_0);
	MR_register_type_ctor_info(&ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_proc_static_0);
	MR_register_type_ctor_info(&ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_stack_traversal_0);
	MR_register_type_ctor_info(&ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_user_or_uci_0);
	MR_register_type_ctor_info(&ll_backend__layout__ll_backend__layout__type_ctor_info_string_with_0s_0);
	MR_register_type_ctor_info(&ll_backend__layout__ll_backend__layout__type_ctor_info_table_io_args_data_0);
	MR_register_type_ctor_info(&ll_backend__layout__ll_backend__layout__type_ctor_info_table_io_entry_data_0);
	MR_register_type_ctor_info(&ll_backend__layout__ll_backend__layout__type_ctor_info_user_event_data_0);
}

void mercury__ll_backend__layout__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.layout. */
